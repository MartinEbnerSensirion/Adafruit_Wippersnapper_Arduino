<p align="center">
  <img src="https://i.imgur.com/EsMTDH1.png" />
</p>

# Adafruit WipperSnapper
![Build CI](https://github.com/adafruit/Adafruit_Wippersnapper_Arduino/actions/workflows/build-clang-doxy.yml/badge.svg)[![Documentation](https://github.com/adafruit/ci-arduino/blob/master/assets/doxygen_badge.svg)](http://adafruit.github.io/Adafruit_Wippersnapper_Arduino/html/index.html)

Adafruit.io WipperSnapper is a firmware designed to turn any Wi-Fi capable board into an Internet-of-Things (IoT) device. No code required!

WipperSnapper works with multiple microcontroller architectures such as ESP8266, ESP32, ESP32-S2, ESP32-C3, RP2040, and ATSAMD51.

You will need a **free** [Adafruit IO](https://io.adafruit.com) account to use WipperSnapper.

**NOTE: WipperSnapper firmware is in beta** and is actively being developed. Please [report bugs via the issues page on this repository](https://github.com/adafruit/Adafruit_Wippersnapper_Arduino/issues/new?assignees=&labels=&projects=&template=bug_report.md&title=). 

# Get Started
[Learn how to install and use WipperSnapper by following this guide on the Adafruit Learning System - QuickStart: Adafruit IO WipperSnapper](https://learn.adafruit.com/quickstart-adafruit-io-wippersnapper).


## Get WipperSnapper
Pre-compiled binaries and UF2 files for supported hardware are provided on the [releases page](https://github.com/adafruit/Adafruit_Wippersnapper_Arduino/releases) of this repository.

## Supported Platforms

|Platform| MCU(s) |
|--|--|
|[ESP32](https://github.com/espressif/arduino-esp32)| ESP32, ESP32-S2, ESP32-S3, ESP32-C3 |
|[ESP8266](https://github.com/esp8266/Arduino)| ESP8266 |
|[RP2040](https://github.com/earlephilhower/arduino-pico)| RP2040 MCU w/WiFi (i.e: Pico W) |
|[ATSAMD](https://github.com/adafruit/ArduinoCore-samd/)|  SAMD51 MCU w/separate WiFi Co-Processor (i.e: Adafruit "AirLift")|

## Contributing to Adafruit.io and WipperSnapper

If you have a sensor, input, or output you'd like to add Adafruit IO support for it - [we have a guide for contributing a new sensor to Adafruit.io and WipperSnapper here](https://learn.adafruit.com/how-to-add-a-new-component-to-adafruit-io-wippersnapper).

If you have a WiFi-enabled development board with a compatible microcontroller (see: "Supported Hardware" section above) and would like to add Adafruit IO support for it - [we have a guide for adding a new board to Adafruit.io and WipperSnapper here](https://learn.adafruit.com/how-to-add-a-new-board-to-wippersnapper).

## Building WipperSnapper

There are two options for building WipperSnapper locally:

 -  (Preferred) Build WipperSnapper with PlatformIO
 - Build WipperSnapper with Arduino
