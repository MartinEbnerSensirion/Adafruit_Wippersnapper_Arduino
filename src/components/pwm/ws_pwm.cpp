/*!
 * @file ws_pwm.cpp
 *
 * PWM component for WipperSnapper.
 *
 * Adafruit invests time and resources providing this open source code,
 * please support Adafruit and open-source hardware by purchasing
 * products from Adafruit!
 *
 *
 * Written by Brent Rubell for Adafruit Industries, 2022.
 *
 * MIT license, all text here must be included in any redistribution.
 *
 */
#include "ws_pwm.h"

/**************************************************************************/
/*!
    @brief  Constructor for non-ESP32 platforms.
*/
/**************************************************************************/
ws_pwm::ws_pwm() {}

/**************************************************************************/
/*!
    @brief  Constructor for ESP32 platforms.
    @param  ledcManager  Pointer to LEDC driver.
*/
/**************************************************************************/
ws_pwm::ws_pwm(ws_ledc *ledcManager) { _ledcMgr = ledcManager; }

/**************************************************************************/
/*!
    @brief  Destructor
*/
/**************************************************************************/
ws_pwm::~ws_pwm() { _ledcMgr = nullptr; }

/******************************************************************/
/*!
    @brief  Attaches a PWM pin.
    @param  pin         GPIO pin.
    @param  freq        PWM frequency, in Hz.
    @param  resolution  PWM resolution, in bytes.
    @return True if PWM pin is successfully attached to a timer,
            otherwise False.
*/
/******************************************************************/
bool ws_pwm::attach(uint8_t pin, double freq, uint8_t resolution) {
  bool is_attached = true;
#if defined(ARDUINO_ARCH_ESP32)
  uint8_t rc = _ledcMgr->attachPin(pin, freq, resolution);
  if (rc == LEDC_CH_ERR)
    is_attached = false;
#endif
  return is_attached; // always true on non-esp32
}

/************************************************/
/*!
    @brief  Detaches a PWM pin.
    @param  pin  Desired GPIO pin.
*/
/************************************************/
void ws_pwm::detach(uint8_t pin) {
#if defined(ARDUINO_ARCH_ESP32)
  // detach pin from LEDC manager
  _ledcMgr->detachPin(pin);
#endif

  // "disable" pin's PWM
  digitalWrite(pin, LOW);
}

/******************************************************************/
/*!
    @brief  Writes a duty cycle to a pin with a fixed freq of 5kHz
    @param  pin        GPIO pin to write to.
    @param  dutyCycle  Desired duty cycle to write to a pin.
*/
/******************************************************************/
void ws_pwm::writeDutyCycle(uint8_t pin, int dutyCycle) {
#if defined(ARDUINO_ARCH_ESP32)
  _ledcMgr->analogWrite(pin, dutyCycle);
#else
  analogWrite(pin, dutyCycle);
#endif
}

/******************************************************************/
/*!
    @brief  Writes a frequency to a pin with a fixed duty cycle.
    @param  pin   GPIO pin to write to.
    @param  freq  Desired frequency to write to a pin, in Hz.
*/
/******************************************************************/
void ws_pwm::writeTone(uint8_t pin, uint32_t freq) {
#if defined(ARDUINO_ARCH_ESP32)
  _ledcMgr->tone(pin, freq);
#else
  tone(pin, freq);
#endif
}

/******************************************************************/
/*!
    @brief  Stops a square wave generated by writeTone().
    @param  pin   GPIO pin to stop generating the tone on.
*/
/******************************************************************/
void ws_pwm::noTone(uint8_t pin) {
#if defined(ARDUINO_ARCH_ESP32)
  _ledcMgr->tone(pin, 0);
#else
  noTone(pin);
#endif
}