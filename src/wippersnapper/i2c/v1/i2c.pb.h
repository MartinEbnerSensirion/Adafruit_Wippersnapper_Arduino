/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5-dev at Tue Aug 24 14:20:34 2021. */

#ifndef PB_WIPPERSNAPPER_I2C_V1_WIPPERSNAPPER_I2C_V1_I2C_PB_H_INCLUDED
#define PB_WIPPERSNAPPER_I2C_V1_WIPPERSNAPPER_I2C_V1_I2C_PB_H_INCLUDED
#include <pb.h>
#include "nanopb/nanopb.pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _wippersnapper_i2c_v1_SensorType {
    wippersnapper_i2c_v1_SensorType_SENSOR_TYPE_UNSPECIFIED = 0,
    wippersnapper_i2c_v1_SensorType_SENSOR_TYPE_ACCELEROMETER = 1,
    wippersnapper_i2c_v1_SensorType_SENSOR_TYPE_MAGNETIC_FIELD = 2,
    wippersnapper_i2c_v1_SensorType_SENSOR_TYPE_ORIENTATION = 3,
    wippersnapper_i2c_v1_SensorType_SENSOR_TYPE_GYROSCOPE = 4,
    wippersnapper_i2c_v1_SensorType_SENSOR_TYPE_LIGHT = 5,
    wippersnapper_i2c_v1_SensorType_SENSOR_TYPE_PRESSURE = 6,
    wippersnapper_i2c_v1_SensorType_SENSOR_TYPE_PROXIMITY = 8,
    wippersnapper_i2c_v1_SensorType_SENSOR_TYPE_GRAVITY = 9,
    wippersnapper_i2c_v1_SensorType_SENSOR_TYPE_LINEAR_ACCELERATION = 10,
    wippersnapper_i2c_v1_SensorType_SENSOR_TYPE_ROTATION_VECTOR = 11,
    wippersnapper_i2c_v1_SensorType_SENSOR_TYPE_RELATIVE_HUMIDITY = 12,
    wippersnapper_i2c_v1_SensorType_SENSOR_TYPE_AMBIENT_TEMPERATURE = 13,
    wippersnapper_i2c_v1_SensorType_SENSOR_TYPE_VOLTAGE = 15,
    wippersnapper_i2c_v1_SensorType_SENSOR_TYPE_CURRENT = 16,
    wippersnapper_i2c_v1_SensorType_SENSOR_TYPE_COLOR = 17,
    wippersnapper_i2c_v1_SensorType_SENSOR_TYPE_RAW = 18
} wippersnapper_i2c_v1_SensorType;

typedef enum _wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XPRECISION {
    wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XPRECISION_SHT4XPRECISION_UNSPECIFIED = 0,
    wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XPRECISION_SHT4XPRECISION_HIGH = 1,
    wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XPRECISION_SHT4XPRECISION_MED = 2,
    wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XPRECISION_SHT4XPRECISION_LOW = 3
} wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XPRECISION;

typedef enum _wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XHEATERMODE {
    wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XHEATERMODE_SHT4XHEATERMODE_UNSPECIFIED = 0,
    wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XHEATERMODE_SHT4XHEATERMODE_NO_HEATER = 1,
    wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XHEATERMODE_SHT4XHEATERMODE_HIGH_HEATER_1S = 2,
    wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XHEATERMODE_SHT4XHEATERMODE_HIGH_HEATER_100MS = 3,
    wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XHEATERMODE_SHT4XHEATERMODE_MED_HEATER_1S = 4,
    wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XHEATERMODE_SHT4XHEATERMODE_MED_HEATER_100MS = 5,
    wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XHEATERMODE_SHT4XHEATERMODE_LOW_HEATER_1S = 6,
    wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XHEATERMODE_SHT4XHEATERMODE_LOW_HEATER_100MS = 7
} wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XHEATERMODE;

/* Struct definitions */
typedef struct _wippersnapper_i2c_v1_AHTDeinitRequest {
    bool disable_temperature;
    bool disable_humidity;
} wippersnapper_i2c_v1_AHTDeinitRequest;

typedef struct _wippersnapper_i2c_v1_AHTInitRequest {
    bool enable_temperature;
    bool enable_humidity;
    float period;
    uint32_t address;
} wippersnapper_i2c_v1_AHTInitRequest;

typedef struct _wippersnapper_i2c_v1_BH1750InitRequest {
    bool enable_lux;
    float period;
    uint32_t address;
} wippersnapper_i2c_v1_BH1750InitRequest;

typedef struct _wippersnapper_i2c_v1_BH1750ReadEvent {
    float lux;
} wippersnapper_i2c_v1_BH1750ReadEvent;

typedef struct _wippersnapper_i2c_v1_DPS310DeinitRequest {
    bool disable_pressure;
    bool disable_temperature;
} wippersnapper_i2c_v1_DPS310DeinitRequest;

typedef struct _wippersnapper_i2c_v1_DPS310InitRequest {
    bool enable_temperature;
    bool enable_pressure;
    float period;
    uint32_t address;
} wippersnapper_i2c_v1_DPS310InitRequest;

typedef struct _wippersnapper_i2c_v1_I2CDeviceDeinitResponse {
    bool is_success;
} wippersnapper_i2c_v1_I2CDeviceDeinitResponse;

typedef struct _wippersnapper_i2c_v1_I2CDeviceInitResponse {
    bool is_success;
} wippersnapper_i2c_v1_I2CDeviceInitResponse;

typedef struct _wippersnapper_i2c_v1_I2CInitRequest {
    int32_t i2c_pin_scl;
    int32_t i2c_pin_sda;
    uint32_t i2c_frequency;
    int32_t i2c_port_number;
} wippersnapper_i2c_v1_I2CInitRequest;

typedef struct _wippersnapper_i2c_v1_I2CInitResponse {
    bool is_initialized;
} wippersnapper_i2c_v1_I2CInitResponse;

typedef struct _wippersnapper_i2c_v1_I2CScanRequest {
    pb_size_t address_count;
    uint32_t address[6];
    int32_t i2c_port_number;
} wippersnapper_i2c_v1_I2CScanRequest;

typedef struct _wippersnapper_i2c_v1_I2CScanResponse {
    uint32_t address_found;
} wippersnapper_i2c_v1_I2CScanResponse;

typedef struct _wippersnapper_i2c_v1_I2CSetFrequency {
    uint32_t frequency;
    int32_t bus_id;
} wippersnapper_i2c_v1_I2CSetFrequency;

typedef struct _wippersnapper_i2c_v1_SCD30InitRequest {
    bool enable_temperature;
    bool enable_rel_humidity;
    bool enable_c02;
    float period;
    float measurement_interval;
    uint32_t address;
} wippersnapper_i2c_v1_SCD30InitRequest;

typedef struct _wippersnapper_i2c_v1_SCD30ReadEvent {
    float c_o2;
    float temperature;
    float relative_humidity;
} wippersnapper_i2c_v1_SCD30ReadEvent;

typedef struct _wippersnapper_i2c_v1_SHT4XInitRequest {
    bool enable_temperature;
    bool enable_humidity;
    float period;
    wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XHEATERMODE heater_mode;
    wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XPRECISION precision;
    uint32_t address;
} wippersnapper_i2c_v1_SHT4XInitRequest;

typedef struct _wippersnapper_i2c_v1_SeesawDeinitRequest {
    bool disable_temperature;
    bool disable_touch_read;
    uint32_t touch_pin;
} wippersnapper_i2c_v1_SeesawDeinitRequest;

typedef struct _wippersnapper_i2c_v1_SeesawInitRequest {
    uint32_t address;
    float period;
    bool enable_temperature;
    bool enable_touch_read;
    uint32_t touch_pin;
} wippersnapper_i2c_v1_SeesawInitRequest;

typedef struct _wippersnapper_i2c_v1_SensorDetails {
    pb_callback_t name;
    int32_t version;
    int32_t id;
    wippersnapper_i2c_v1_SensorType type;
    float max_value;
    float min_value;
    float resolution;
    int32_t min_delay;
} wippersnapper_i2c_v1_SensorDetails;

typedef struct _wippersnapper_i2c_v1_SensorEvent {
    int32_t version;
    int32_t sensor_id;
    wippersnapper_i2c_v1_SensorType type;
    int32_t timestamp;
    pb_size_t which_event_data;
    union {
        float temperature;
        float distance;
        float light;
        float pressure;
        float relative_humidity;
        float current;
        float voltage;
        uint32_t raw_value;
    } event_data;
} wippersnapper_i2c_v1_SensorEvent;

typedef struct _wippersnapper_i2c_v1_I2CDeviceDeinitRequest {
    int32_t i2c_port_number;
    uint32_t address;
    bool detach_device;
    bool has_aht;
    wippersnapper_i2c_v1_AHTDeinitRequest aht;
    bool has_dps;
    wippersnapper_i2c_v1_DPS310DeinitRequest dps;
    bool has_seesaw;
    wippersnapper_i2c_v1_SeesawDeinitRequest seesaw;
} wippersnapper_i2c_v1_I2CDeviceDeinitRequest;

typedef struct _wippersnapper_i2c_v1_I2CDeviceInitRequest {
    int32_t i2c_port_number;
    bool has_aht_init;
    wippersnapper_i2c_v1_AHTInitRequest aht_init;
    bool has_dps310_init;
    wippersnapper_i2c_v1_DPS310InitRequest dps310_init;
    bool has_seesaw_init;
    wippersnapper_i2c_v1_SeesawInitRequest seesaw_init;
} wippersnapper_i2c_v1_I2CDeviceInitRequest;

typedef struct _wippersnapper_i2c_v1_I2CSensorEvent {
    uint32_t sensor_address;
    bool has_event;
    wippersnapper_i2c_v1_SensorEvent event;
} wippersnapper_i2c_v1_I2CSensorEvent;


/* Helper constants for enums */
#define _wippersnapper_i2c_v1_SensorType_MIN wippersnapper_i2c_v1_SensorType_SENSOR_TYPE_UNSPECIFIED
#define _wippersnapper_i2c_v1_SensorType_MAX wippersnapper_i2c_v1_SensorType_SENSOR_TYPE_RAW
#define _wippersnapper_i2c_v1_SensorType_ARRAYSIZE ((wippersnapper_i2c_v1_SensorType)(wippersnapper_i2c_v1_SensorType_SENSOR_TYPE_RAW+1))

#define _wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XPRECISION_MIN wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XPRECISION_SHT4XPRECISION_UNSPECIFIED
#define _wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XPRECISION_MAX wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XPRECISION_SHT4XPRECISION_LOW
#define _wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XPRECISION_ARRAYSIZE ((wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XPRECISION)(wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XPRECISION_SHT4XPRECISION_LOW+1))

#define _wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XHEATERMODE_MIN wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XHEATERMODE_SHT4XHEATERMODE_UNSPECIFIED
#define _wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XHEATERMODE_MAX wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XHEATERMODE_SHT4XHEATERMODE_LOW_HEATER_100MS
#define _wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XHEATERMODE_ARRAYSIZE ((wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XHEATERMODE)(wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XHEATERMODE_SHT4XHEATERMODE_LOW_HEATER_100MS+1))


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define wippersnapper_i2c_v1_I2CInitRequest_init_default {0, 0, 0, 0}
#define wippersnapper_i2c_v1_I2CInitResponse_init_default {0}
#define wippersnapper_i2c_v1_I2CSetFrequency_init_default {0, 0}
#define wippersnapper_i2c_v1_I2CScanRequest_init_default {0, {0, 0, 0, 0, 0, 0}, 0}
#define wippersnapper_i2c_v1_I2CScanResponse_init_default {0}
#define wippersnapper_i2c_v1_I2CDeviceInitRequest_init_default {0, false, wippersnapper_i2c_v1_AHTInitRequest_init_default, false, wippersnapper_i2c_v1_DPS310InitRequest_init_default, false, wippersnapper_i2c_v1_SeesawInitRequest_init_default}
#define wippersnapper_i2c_v1_I2CDeviceInitResponse_init_default {0}
#define wippersnapper_i2c_v1_I2CDeviceDeinitRequest_init_default {0, 0, 0, false, wippersnapper_i2c_v1_AHTDeinitRequest_init_default, false, wippersnapper_i2c_v1_DPS310DeinitRequest_init_default, false, wippersnapper_i2c_v1_SeesawDeinitRequest_init_default}
#define wippersnapper_i2c_v1_I2CDeviceDeinitResponse_init_default {0}
#define wippersnapper_i2c_v1_AHTInitRequest_init_default {0, 0, 0, 0}
#define wippersnapper_i2c_v1_AHTDeinitRequest_init_default {0, 0}
#define wippersnapper_i2c_v1_DPS310InitRequest_init_default {0, 0, 0, 0}
#define wippersnapper_i2c_v1_DPS310DeinitRequest_init_default {0, 0}
#define wippersnapper_i2c_v1_SeesawInitRequest_init_default {0, 0, 0, 0, 0}
#define wippersnapper_i2c_v1_SeesawDeinitRequest_init_default {0, 0, 0}
#define wippersnapper_i2c_v1_SHT4XInitRequest_init_default {0, 0, 0, _wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XHEATERMODE_MIN, _wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XPRECISION_MIN, 0}
#define wippersnapper_i2c_v1_SCD30InitRequest_init_default {0, 0, 0, 0, 0, 0}
#define wippersnapper_i2c_v1_SCD30ReadEvent_init_default {0, 0, 0}
#define wippersnapper_i2c_v1_BH1750InitRequest_init_default {0, 0, 0}
#define wippersnapper_i2c_v1_BH1750ReadEvent_init_default {0}
#define wippersnapper_i2c_v1_SensorDetails_init_default {{{NULL}, NULL}, 0, 0, _wippersnapper_i2c_v1_SensorType_MIN, 0, 0, 0, 0}
#define wippersnapper_i2c_v1_SensorEvent_init_default {0, 0, _wippersnapper_i2c_v1_SensorType_MIN, 0, 0, {0}}
#define wippersnapper_i2c_v1_I2CSensorEvent_init_default {0, false, wippersnapper_i2c_v1_SensorEvent_init_default}
#define wippersnapper_i2c_v1_I2CInitRequest_init_zero {0, 0, 0, 0}
#define wippersnapper_i2c_v1_I2CInitResponse_init_zero {0}
#define wippersnapper_i2c_v1_I2CSetFrequency_init_zero {0, 0}
#define wippersnapper_i2c_v1_I2CScanRequest_init_zero {0, {0, 0, 0, 0, 0, 0}, 0}
#define wippersnapper_i2c_v1_I2CScanResponse_init_zero {0}
#define wippersnapper_i2c_v1_I2CDeviceInitRequest_init_zero {0, false, wippersnapper_i2c_v1_AHTInitRequest_init_zero, false, wippersnapper_i2c_v1_DPS310InitRequest_init_zero, false, wippersnapper_i2c_v1_SeesawInitRequest_init_zero}
#define wippersnapper_i2c_v1_I2CDeviceInitResponse_init_zero {0}
#define wippersnapper_i2c_v1_I2CDeviceDeinitRequest_init_zero {0, 0, 0, false, wippersnapper_i2c_v1_AHTDeinitRequest_init_zero, false, wippersnapper_i2c_v1_DPS310DeinitRequest_init_zero, false, wippersnapper_i2c_v1_SeesawDeinitRequest_init_zero}
#define wippersnapper_i2c_v1_I2CDeviceDeinitResponse_init_zero {0}
#define wippersnapper_i2c_v1_AHTInitRequest_init_zero {0, 0, 0, 0}
#define wippersnapper_i2c_v1_AHTDeinitRequest_init_zero {0, 0}
#define wippersnapper_i2c_v1_DPS310InitRequest_init_zero {0, 0, 0, 0}
#define wippersnapper_i2c_v1_DPS310DeinitRequest_init_zero {0, 0}
#define wippersnapper_i2c_v1_SeesawInitRequest_init_zero {0, 0, 0, 0, 0}
#define wippersnapper_i2c_v1_SeesawDeinitRequest_init_zero {0, 0, 0}
#define wippersnapper_i2c_v1_SHT4XInitRequest_init_zero {0, 0, 0, _wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XHEATERMODE_MIN, _wippersnapper_i2c_v1_SHT4XInitRequest_SHT4XPRECISION_MIN, 0}
#define wippersnapper_i2c_v1_SCD30InitRequest_init_zero {0, 0, 0, 0, 0, 0}
#define wippersnapper_i2c_v1_SCD30ReadEvent_init_zero {0, 0, 0}
#define wippersnapper_i2c_v1_BH1750InitRequest_init_zero {0, 0, 0}
#define wippersnapper_i2c_v1_BH1750ReadEvent_init_zero {0}
#define wippersnapper_i2c_v1_SensorDetails_init_zero {{{NULL}, NULL}, 0, 0, _wippersnapper_i2c_v1_SensorType_MIN, 0, 0, 0, 0}
#define wippersnapper_i2c_v1_SensorEvent_init_zero {0, 0, _wippersnapper_i2c_v1_SensorType_MIN, 0, 0, {0}}
#define wippersnapper_i2c_v1_I2CSensorEvent_init_zero {0, false, wippersnapper_i2c_v1_SensorEvent_init_zero}

/* Field tags (for use in manual encoding/decoding) */
#define wippersnapper_i2c_v1_AHTDeinitRequest_disable_temperature_tag 1
#define wippersnapper_i2c_v1_AHTDeinitRequest_disable_humidity_tag 2
#define wippersnapper_i2c_v1_AHTInitRequest_enable_temperature_tag 1
#define wippersnapper_i2c_v1_AHTInitRequest_enable_humidity_tag 2
#define wippersnapper_i2c_v1_AHTInitRequest_period_tag 3
#define wippersnapper_i2c_v1_AHTInitRequest_address_tag 4
#define wippersnapper_i2c_v1_BH1750InitRequest_enable_lux_tag 1
#define wippersnapper_i2c_v1_BH1750InitRequest_period_tag 2
#define wippersnapper_i2c_v1_BH1750InitRequest_address_tag 3
#define wippersnapper_i2c_v1_BH1750ReadEvent_lux_tag 1
#define wippersnapper_i2c_v1_DPS310DeinitRequest_disable_pressure_tag 1
#define wippersnapper_i2c_v1_DPS310DeinitRequest_disable_temperature_tag 2
#define wippersnapper_i2c_v1_DPS310InitRequest_enable_temperature_tag 1
#define wippersnapper_i2c_v1_DPS310InitRequest_enable_pressure_tag 2
#define wippersnapper_i2c_v1_DPS310InitRequest_period_tag 3
#define wippersnapper_i2c_v1_DPS310InitRequest_address_tag 4
#define wippersnapper_i2c_v1_I2CDeviceDeinitResponse_is_success_tag 1
#define wippersnapper_i2c_v1_I2CDeviceInitResponse_is_success_tag 1
#define wippersnapper_i2c_v1_I2CInitRequest_i2c_pin_scl_tag 1
#define wippersnapper_i2c_v1_I2CInitRequest_i2c_pin_sda_tag 2
#define wippersnapper_i2c_v1_I2CInitRequest_i2c_frequency_tag 3
#define wippersnapper_i2c_v1_I2CInitRequest_i2c_port_number_tag 4
#define wippersnapper_i2c_v1_I2CInitResponse_is_initialized_tag 1
#define wippersnapper_i2c_v1_I2CScanRequest_address_tag 1
#define wippersnapper_i2c_v1_I2CScanRequest_i2c_port_number_tag 2
#define wippersnapper_i2c_v1_I2CScanResponse_address_found_tag 1
#define wippersnapper_i2c_v1_I2CSetFrequency_frequency_tag 1
#define wippersnapper_i2c_v1_I2CSetFrequency_bus_id_tag 2
#define wippersnapper_i2c_v1_SCD30InitRequest_enable_temperature_tag 1
#define wippersnapper_i2c_v1_SCD30InitRequest_enable_rel_humidity_tag 2
#define wippersnapper_i2c_v1_SCD30InitRequest_enable_c02_tag 3
#define wippersnapper_i2c_v1_SCD30InitRequest_period_tag 4
#define wippersnapper_i2c_v1_SCD30InitRequest_measurement_interval_tag 5
#define wippersnapper_i2c_v1_SCD30InitRequest_address_tag 6
#define wippersnapper_i2c_v1_SCD30ReadEvent_c_o2_tag 1
#define wippersnapper_i2c_v1_SCD30ReadEvent_temperature_tag 2
#define wippersnapper_i2c_v1_SCD30ReadEvent_relative_humidity_tag 3
#define wippersnapper_i2c_v1_SHT4XInitRequest_enable_temperature_tag 1
#define wippersnapper_i2c_v1_SHT4XInitRequest_enable_humidity_tag 2
#define wippersnapper_i2c_v1_SHT4XInitRequest_period_tag 4
#define wippersnapper_i2c_v1_SHT4XInitRequest_heater_mode_tag 5
#define wippersnapper_i2c_v1_SHT4XInitRequest_precision_tag 6
#define wippersnapper_i2c_v1_SHT4XInitRequest_address_tag 7
#define wippersnapper_i2c_v1_SeesawDeinitRequest_disable_temperature_tag 1
#define wippersnapper_i2c_v1_SeesawDeinitRequest_disable_touch_read_tag 2
#define wippersnapper_i2c_v1_SeesawDeinitRequest_touch_pin_tag 3
#define wippersnapper_i2c_v1_SeesawInitRequest_address_tag 1
#define wippersnapper_i2c_v1_SeesawInitRequest_period_tag 2
#define wippersnapper_i2c_v1_SeesawInitRequest_enable_temperature_tag 3
#define wippersnapper_i2c_v1_SeesawInitRequest_enable_touch_read_tag 4
#define wippersnapper_i2c_v1_SeesawInitRequest_touch_pin_tag 5
#define wippersnapper_i2c_v1_SensorDetails_name_tag 1
#define wippersnapper_i2c_v1_SensorDetails_version_tag 2
#define wippersnapper_i2c_v1_SensorDetails_id_tag 3
#define wippersnapper_i2c_v1_SensorDetails_type_tag 4
#define wippersnapper_i2c_v1_SensorDetails_max_value_tag 5
#define wippersnapper_i2c_v1_SensorDetails_min_value_tag 6
#define wippersnapper_i2c_v1_SensorDetails_resolution_tag 7
#define wippersnapper_i2c_v1_SensorDetails_min_delay_tag 8
#define wippersnapper_i2c_v1_SensorEvent_version_tag 1
#define wippersnapper_i2c_v1_SensorEvent_sensor_id_tag 2
#define wippersnapper_i2c_v1_SensorEvent_type_tag 3
#define wippersnapper_i2c_v1_SensorEvent_timestamp_tag 4
#define wippersnapper_i2c_v1_SensorEvent_temperature_tag 5
#define wippersnapper_i2c_v1_SensorEvent_distance_tag 6
#define wippersnapper_i2c_v1_SensorEvent_light_tag 7
#define wippersnapper_i2c_v1_SensorEvent_pressure_tag 8
#define wippersnapper_i2c_v1_SensorEvent_relative_humidity_tag 9
#define wippersnapper_i2c_v1_SensorEvent_current_tag 10
#define wippersnapper_i2c_v1_SensorEvent_voltage_tag 11
#define wippersnapper_i2c_v1_SensorEvent_raw_value_tag 12
#define wippersnapper_i2c_v1_I2CDeviceDeinitRequest_i2c_port_number_tag 1
#define wippersnapper_i2c_v1_I2CDeviceDeinitRequest_address_tag 2
#define wippersnapper_i2c_v1_I2CDeviceDeinitRequest_detach_device_tag 3
#define wippersnapper_i2c_v1_I2CDeviceDeinitRequest_aht_tag 4
#define wippersnapper_i2c_v1_I2CDeviceDeinitRequest_dps_tag 5
#define wippersnapper_i2c_v1_I2CDeviceDeinitRequest_seesaw_tag 6
#define wippersnapper_i2c_v1_I2CDeviceInitRequest_i2c_port_number_tag 1
#define wippersnapper_i2c_v1_I2CDeviceInitRequest_aht_init_tag 2
#define wippersnapper_i2c_v1_I2CDeviceInitRequest_dps310_init_tag 3
#define wippersnapper_i2c_v1_I2CDeviceInitRequest_seesaw_init_tag 4
#define wippersnapper_i2c_v1_I2CSensorEvent_sensor_address_tag 1
#define wippersnapper_i2c_v1_I2CSensorEvent_event_tag 2

/* Struct field encoding specification for nanopb */
#define wippersnapper_i2c_v1_I2CInitRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT32,    i2c_pin_scl,       1) \
X(a, STATIC,   SINGULAR, INT32,    i2c_pin_sda,       2) \
X(a, STATIC,   SINGULAR, UINT32,   i2c_frequency,     3) \
X(a, STATIC,   SINGULAR, INT32,    i2c_port_number,   4)
#define wippersnapper_i2c_v1_I2CInitRequest_CALLBACK NULL
#define wippersnapper_i2c_v1_I2CInitRequest_DEFAULT NULL

#define wippersnapper_i2c_v1_I2CInitResponse_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     is_initialized,    1)
#define wippersnapper_i2c_v1_I2CInitResponse_CALLBACK NULL
#define wippersnapper_i2c_v1_I2CInitResponse_DEFAULT NULL

#define wippersnapper_i2c_v1_I2CSetFrequency_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   frequency,         1) \
X(a, STATIC,   SINGULAR, INT32,    bus_id,            2)
#define wippersnapper_i2c_v1_I2CSetFrequency_CALLBACK NULL
#define wippersnapper_i2c_v1_I2CSetFrequency_DEFAULT NULL

#define wippersnapper_i2c_v1_I2CScanRequest_FIELDLIST(X, a) \
X(a, STATIC,   REPEATED, UINT32,   address,           1) \
X(a, STATIC,   SINGULAR, INT32,    i2c_port_number,   2)
#define wippersnapper_i2c_v1_I2CScanRequest_CALLBACK NULL
#define wippersnapper_i2c_v1_I2CScanRequest_DEFAULT NULL

#define wippersnapper_i2c_v1_I2CScanResponse_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   address_found,     1)
#define wippersnapper_i2c_v1_I2CScanResponse_CALLBACK NULL
#define wippersnapper_i2c_v1_I2CScanResponse_DEFAULT NULL

#define wippersnapper_i2c_v1_I2CDeviceInitRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT32,    i2c_port_number,   1) \
X(a, STATIC,   OPTIONAL, MESSAGE,  aht_init,          2) \
X(a, STATIC,   OPTIONAL, MESSAGE,  dps310_init,       3) \
X(a, STATIC,   OPTIONAL, MESSAGE,  seesaw_init,       4)
#define wippersnapper_i2c_v1_I2CDeviceInitRequest_CALLBACK NULL
#define wippersnapper_i2c_v1_I2CDeviceInitRequest_DEFAULT NULL
#define wippersnapper_i2c_v1_I2CDeviceInitRequest_aht_init_MSGTYPE wippersnapper_i2c_v1_AHTInitRequest
#define wippersnapper_i2c_v1_I2CDeviceInitRequest_dps310_init_MSGTYPE wippersnapper_i2c_v1_DPS310InitRequest
#define wippersnapper_i2c_v1_I2CDeviceInitRequest_seesaw_init_MSGTYPE wippersnapper_i2c_v1_SeesawInitRequest

#define wippersnapper_i2c_v1_I2CDeviceInitResponse_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     is_success,        1)
#define wippersnapper_i2c_v1_I2CDeviceInitResponse_CALLBACK NULL
#define wippersnapper_i2c_v1_I2CDeviceInitResponse_DEFAULT NULL

#define wippersnapper_i2c_v1_I2CDeviceDeinitRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT32,    i2c_port_number,   1) \
X(a, STATIC,   SINGULAR, UINT32,   address,           2) \
X(a, STATIC,   SINGULAR, BOOL,     detach_device,     3) \
X(a, STATIC,   OPTIONAL, MESSAGE,  aht,               4) \
X(a, STATIC,   OPTIONAL, MESSAGE,  dps,               5) \
X(a, STATIC,   OPTIONAL, MESSAGE,  seesaw,            6)
#define wippersnapper_i2c_v1_I2CDeviceDeinitRequest_CALLBACK NULL
#define wippersnapper_i2c_v1_I2CDeviceDeinitRequest_DEFAULT NULL
#define wippersnapper_i2c_v1_I2CDeviceDeinitRequest_aht_MSGTYPE wippersnapper_i2c_v1_AHTDeinitRequest
#define wippersnapper_i2c_v1_I2CDeviceDeinitRequest_dps_MSGTYPE wippersnapper_i2c_v1_DPS310DeinitRequest
#define wippersnapper_i2c_v1_I2CDeviceDeinitRequest_seesaw_MSGTYPE wippersnapper_i2c_v1_SeesawDeinitRequest

#define wippersnapper_i2c_v1_I2CDeviceDeinitResponse_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     is_success,        1)
#define wippersnapper_i2c_v1_I2CDeviceDeinitResponse_CALLBACK NULL
#define wippersnapper_i2c_v1_I2CDeviceDeinitResponse_DEFAULT NULL

#define wippersnapper_i2c_v1_AHTInitRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     enable_temperature,   1) \
X(a, STATIC,   SINGULAR, BOOL,     enable_humidity,   2) \
X(a, STATIC,   SINGULAR, FLOAT,    period,            3) \
X(a, STATIC,   SINGULAR, UINT32,   address,           4)
#define wippersnapper_i2c_v1_AHTInitRequest_CALLBACK NULL
#define wippersnapper_i2c_v1_AHTInitRequest_DEFAULT NULL

#define wippersnapper_i2c_v1_AHTDeinitRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     disable_temperature,   1) \
X(a, STATIC,   SINGULAR, BOOL,     disable_humidity,   2)
#define wippersnapper_i2c_v1_AHTDeinitRequest_CALLBACK NULL
#define wippersnapper_i2c_v1_AHTDeinitRequest_DEFAULT NULL

#define wippersnapper_i2c_v1_DPS310InitRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     enable_temperature,   1) \
X(a, STATIC,   SINGULAR, BOOL,     enable_pressure,   2) \
X(a, STATIC,   SINGULAR, FLOAT,    period,            3) \
X(a, STATIC,   SINGULAR, UINT32,   address,           4)
#define wippersnapper_i2c_v1_DPS310InitRequest_CALLBACK NULL
#define wippersnapper_i2c_v1_DPS310InitRequest_DEFAULT NULL

#define wippersnapper_i2c_v1_DPS310DeinitRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     disable_pressure,   1) \
X(a, STATIC,   SINGULAR, BOOL,     disable_temperature,   2)
#define wippersnapper_i2c_v1_DPS310DeinitRequest_CALLBACK NULL
#define wippersnapper_i2c_v1_DPS310DeinitRequest_DEFAULT NULL

#define wippersnapper_i2c_v1_SeesawInitRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   address,           1) \
X(a, STATIC,   SINGULAR, FLOAT,    period,            2) \
X(a, STATIC,   SINGULAR, BOOL,     enable_temperature,   3) \
X(a, STATIC,   SINGULAR, BOOL,     enable_touch_read,   4) \
X(a, STATIC,   SINGULAR, UINT32,   touch_pin,         5)
#define wippersnapper_i2c_v1_SeesawInitRequest_CALLBACK NULL
#define wippersnapper_i2c_v1_SeesawInitRequest_DEFAULT NULL

#define wippersnapper_i2c_v1_SeesawDeinitRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     disable_temperature,   1) \
X(a, STATIC,   SINGULAR, BOOL,     disable_touch_read,   2) \
X(a, STATIC,   SINGULAR, UINT32,   touch_pin,         3)
#define wippersnapper_i2c_v1_SeesawDeinitRequest_CALLBACK NULL
#define wippersnapper_i2c_v1_SeesawDeinitRequest_DEFAULT NULL

#define wippersnapper_i2c_v1_SHT4XInitRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     enable_temperature,   1) \
X(a, STATIC,   SINGULAR, BOOL,     enable_humidity,   2) \
X(a, STATIC,   SINGULAR, FLOAT,    period,            4) \
X(a, STATIC,   SINGULAR, UENUM,    heater_mode,       5) \
X(a, STATIC,   SINGULAR, UENUM,    precision,         6) \
X(a, STATIC,   SINGULAR, UINT32,   address,           7)
#define wippersnapper_i2c_v1_SHT4XInitRequest_CALLBACK NULL
#define wippersnapper_i2c_v1_SHT4XInitRequest_DEFAULT NULL

#define wippersnapper_i2c_v1_SCD30InitRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     enable_temperature,   1) \
X(a, STATIC,   SINGULAR, BOOL,     enable_rel_humidity,   2) \
X(a, STATIC,   SINGULAR, BOOL,     enable_c02,        3) \
X(a, STATIC,   SINGULAR, FLOAT,    period,            4) \
X(a, STATIC,   SINGULAR, FLOAT,    measurement_interval,   5) \
X(a, STATIC,   SINGULAR, UINT32,   address,           6)
#define wippersnapper_i2c_v1_SCD30InitRequest_CALLBACK NULL
#define wippersnapper_i2c_v1_SCD30InitRequest_DEFAULT NULL

#define wippersnapper_i2c_v1_SCD30ReadEvent_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, FLOAT,    c_o2,              1) \
X(a, STATIC,   SINGULAR, FLOAT,    temperature,       2) \
X(a, STATIC,   SINGULAR, FLOAT,    relative_humidity,   3)
#define wippersnapper_i2c_v1_SCD30ReadEvent_CALLBACK NULL
#define wippersnapper_i2c_v1_SCD30ReadEvent_DEFAULT NULL

#define wippersnapper_i2c_v1_BH1750InitRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     enable_lux,        1) \
X(a, STATIC,   SINGULAR, FLOAT,    period,            2) \
X(a, STATIC,   SINGULAR, UINT32,   address,           3)
#define wippersnapper_i2c_v1_BH1750InitRequest_CALLBACK NULL
#define wippersnapper_i2c_v1_BH1750InitRequest_DEFAULT NULL

#define wippersnapper_i2c_v1_BH1750ReadEvent_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, FLOAT,    lux,               1)
#define wippersnapper_i2c_v1_BH1750ReadEvent_CALLBACK NULL
#define wippersnapper_i2c_v1_BH1750ReadEvent_DEFAULT NULL

#define wippersnapper_i2c_v1_SensorDetails_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   name,              1) \
X(a, STATIC,   SINGULAR, INT32,    version,           2) \
X(a, STATIC,   SINGULAR, INT32,    id,                3) \
X(a, STATIC,   SINGULAR, UENUM,    type,              4) \
X(a, STATIC,   SINGULAR, FLOAT,    max_value,         5) \
X(a, STATIC,   SINGULAR, FLOAT,    min_value,         6) \
X(a, STATIC,   SINGULAR, FLOAT,    resolution,        7) \
X(a, STATIC,   SINGULAR, INT32,    min_delay,         8)
#define wippersnapper_i2c_v1_SensorDetails_CALLBACK pb_default_field_callback
#define wippersnapper_i2c_v1_SensorDetails_DEFAULT NULL

#define wippersnapper_i2c_v1_SensorEvent_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT32,    version,           1) \
X(a, STATIC,   SINGULAR, INT32,    sensor_id,         2) \
X(a, STATIC,   SINGULAR, UENUM,    type,              3) \
X(a, STATIC,   SINGULAR, INT32,    timestamp,         4) \
X(a, STATIC,   ONEOF,    FLOAT,    (event_data,temperature,event_data.temperature),   5) \
X(a, STATIC,   ONEOF,    FLOAT,    (event_data,distance,event_data.distance),   6) \
X(a, STATIC,   ONEOF,    FLOAT,    (event_data,light,event_data.light),   7) \
X(a, STATIC,   ONEOF,    FLOAT,    (event_data,pressure,event_data.pressure),   8) \
X(a, STATIC,   ONEOF,    FLOAT,    (event_data,relative_humidity,event_data.relative_humidity),   9) \
X(a, STATIC,   ONEOF,    FLOAT,    (event_data,current,event_data.current),  10) \
X(a, STATIC,   ONEOF,    FLOAT,    (event_data,voltage,event_data.voltage),  11) \
X(a, STATIC,   ONEOF,    UINT32,   (event_data,raw_value,event_data.raw_value),  12)
#define wippersnapper_i2c_v1_SensorEvent_CALLBACK NULL
#define wippersnapper_i2c_v1_SensorEvent_DEFAULT NULL

#define wippersnapper_i2c_v1_I2CSensorEvent_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   sensor_address,    1) \
X(a, STATIC,   OPTIONAL, MESSAGE,  event,             2)
#define wippersnapper_i2c_v1_I2CSensorEvent_CALLBACK NULL
#define wippersnapper_i2c_v1_I2CSensorEvent_DEFAULT NULL
#define wippersnapper_i2c_v1_I2CSensorEvent_event_MSGTYPE wippersnapper_i2c_v1_SensorEvent

extern const pb_msgdesc_t wippersnapper_i2c_v1_I2CInitRequest_msg;
extern const pb_msgdesc_t wippersnapper_i2c_v1_I2CInitResponse_msg;
extern const pb_msgdesc_t wippersnapper_i2c_v1_I2CSetFrequency_msg;
extern const pb_msgdesc_t wippersnapper_i2c_v1_I2CScanRequest_msg;
extern const pb_msgdesc_t wippersnapper_i2c_v1_I2CScanResponse_msg;
extern const pb_msgdesc_t wippersnapper_i2c_v1_I2CDeviceInitRequest_msg;
extern const pb_msgdesc_t wippersnapper_i2c_v1_I2CDeviceInitResponse_msg;
extern const pb_msgdesc_t wippersnapper_i2c_v1_I2CDeviceDeinitRequest_msg;
extern const pb_msgdesc_t wippersnapper_i2c_v1_I2CDeviceDeinitResponse_msg;
extern const pb_msgdesc_t wippersnapper_i2c_v1_AHTInitRequest_msg;
extern const pb_msgdesc_t wippersnapper_i2c_v1_AHTDeinitRequest_msg;
extern const pb_msgdesc_t wippersnapper_i2c_v1_DPS310InitRequest_msg;
extern const pb_msgdesc_t wippersnapper_i2c_v1_DPS310DeinitRequest_msg;
extern const pb_msgdesc_t wippersnapper_i2c_v1_SeesawInitRequest_msg;
extern const pb_msgdesc_t wippersnapper_i2c_v1_SeesawDeinitRequest_msg;
extern const pb_msgdesc_t wippersnapper_i2c_v1_SHT4XInitRequest_msg;
extern const pb_msgdesc_t wippersnapper_i2c_v1_SCD30InitRequest_msg;
extern const pb_msgdesc_t wippersnapper_i2c_v1_SCD30ReadEvent_msg;
extern const pb_msgdesc_t wippersnapper_i2c_v1_BH1750InitRequest_msg;
extern const pb_msgdesc_t wippersnapper_i2c_v1_BH1750ReadEvent_msg;
extern const pb_msgdesc_t wippersnapper_i2c_v1_SensorDetails_msg;
extern const pb_msgdesc_t wippersnapper_i2c_v1_SensorEvent_msg;
extern const pb_msgdesc_t wippersnapper_i2c_v1_I2CSensorEvent_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define wippersnapper_i2c_v1_I2CInitRequest_fields &wippersnapper_i2c_v1_I2CInitRequest_msg
#define wippersnapper_i2c_v1_I2CInitResponse_fields &wippersnapper_i2c_v1_I2CInitResponse_msg
#define wippersnapper_i2c_v1_I2CSetFrequency_fields &wippersnapper_i2c_v1_I2CSetFrequency_msg
#define wippersnapper_i2c_v1_I2CScanRequest_fields &wippersnapper_i2c_v1_I2CScanRequest_msg
#define wippersnapper_i2c_v1_I2CScanResponse_fields &wippersnapper_i2c_v1_I2CScanResponse_msg
#define wippersnapper_i2c_v1_I2CDeviceInitRequest_fields &wippersnapper_i2c_v1_I2CDeviceInitRequest_msg
#define wippersnapper_i2c_v1_I2CDeviceInitResponse_fields &wippersnapper_i2c_v1_I2CDeviceInitResponse_msg
#define wippersnapper_i2c_v1_I2CDeviceDeinitRequest_fields &wippersnapper_i2c_v1_I2CDeviceDeinitRequest_msg
#define wippersnapper_i2c_v1_I2CDeviceDeinitResponse_fields &wippersnapper_i2c_v1_I2CDeviceDeinitResponse_msg
#define wippersnapper_i2c_v1_AHTInitRequest_fields &wippersnapper_i2c_v1_AHTInitRequest_msg
#define wippersnapper_i2c_v1_AHTDeinitRequest_fields &wippersnapper_i2c_v1_AHTDeinitRequest_msg
#define wippersnapper_i2c_v1_DPS310InitRequest_fields &wippersnapper_i2c_v1_DPS310InitRequest_msg
#define wippersnapper_i2c_v1_DPS310DeinitRequest_fields &wippersnapper_i2c_v1_DPS310DeinitRequest_msg
#define wippersnapper_i2c_v1_SeesawInitRequest_fields &wippersnapper_i2c_v1_SeesawInitRequest_msg
#define wippersnapper_i2c_v1_SeesawDeinitRequest_fields &wippersnapper_i2c_v1_SeesawDeinitRequest_msg
#define wippersnapper_i2c_v1_SHT4XInitRequest_fields &wippersnapper_i2c_v1_SHT4XInitRequest_msg
#define wippersnapper_i2c_v1_SCD30InitRequest_fields &wippersnapper_i2c_v1_SCD30InitRequest_msg
#define wippersnapper_i2c_v1_SCD30ReadEvent_fields &wippersnapper_i2c_v1_SCD30ReadEvent_msg
#define wippersnapper_i2c_v1_BH1750InitRequest_fields &wippersnapper_i2c_v1_BH1750InitRequest_msg
#define wippersnapper_i2c_v1_BH1750ReadEvent_fields &wippersnapper_i2c_v1_BH1750ReadEvent_msg
#define wippersnapper_i2c_v1_SensorDetails_fields &wippersnapper_i2c_v1_SensorDetails_msg
#define wippersnapper_i2c_v1_SensorEvent_fields &wippersnapper_i2c_v1_SensorEvent_msg
#define wippersnapper_i2c_v1_I2CSensorEvent_fields &wippersnapper_i2c_v1_I2CSensorEvent_msg

/* Maximum encoded size of messages (where known) */
#define wippersnapper_i2c_v1_I2CInitRequest_size 39
#define wippersnapper_i2c_v1_I2CInitResponse_size 2
#define wippersnapper_i2c_v1_I2CSetFrequency_size 17
#define wippersnapper_i2c_v1_I2CScanRequest_size 47
#define wippersnapper_i2c_v1_I2CScanResponse_size 6
#define wippersnapper_i2c_v1_I2CDeviceInitRequest_size 68
#define wippersnapper_i2c_v1_I2CDeviceInitResponse_size 2
#define wippersnapper_i2c_v1_I2CDeviceDeinitRequest_size 43
#define wippersnapper_i2c_v1_I2CDeviceDeinitResponse_size 2
#define wippersnapper_i2c_v1_AHTInitRequest_size 15
#define wippersnapper_i2c_v1_AHTDeinitRequest_size 4
#define wippersnapper_i2c_v1_DPS310InitRequest_size 15
#define wippersnapper_i2c_v1_DPS310DeinitRequest_size 4
#define wippersnapper_i2c_v1_SeesawInitRequest_size 21
#define wippersnapper_i2c_v1_SeesawDeinitRequest_size 10
#define wippersnapper_i2c_v1_SHT4XInitRequest_size 19
#define wippersnapper_i2c_v1_SCD30InitRequest_size 22
#define wippersnapper_i2c_v1_SCD30ReadEvent_size 15
#define wippersnapper_i2c_v1_BH1750InitRequest_size 13
#define wippersnapper_i2c_v1_BH1750ReadEvent_size 5
/* wippersnapper_i2c_v1_SensorDetails_size depends on runtime parameters */
#define wippersnapper_i2c_v1_SensorEvent_size    41
#define wippersnapper_i2c_v1_I2CSensorEvent_size 49

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
