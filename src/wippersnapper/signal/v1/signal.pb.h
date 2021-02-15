/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5-dev at Mon Feb 15 19:21:38 2021. */

#ifndef PB_WIPPERSNAPPER_SIGNAL_V1_WIPPERSNAPPER_SIGNAL_V1_SIGNAL_PB_H_INCLUDED
#define PB_WIPPERSNAPPER_SIGNAL_V1_WIPPERSNAPPER_SIGNAL_V1_SIGNAL_PB_H_INCLUDED
#include <pb.h>
#include "wippersnapper/pin/v1/pin.pb.h"
#include "wippersnapper/sensor/v1/sensor.pb.h"
#include "wippersnapper/pixel/v1/pixel.pb.h"
#include "nanopb/nanopb.pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _wippersnapper_signal_v1_CreateSignalResponse {
    pb_callback_t pin_create_resps;
    pb_callback_t pin_update_resps;
    pb_callback_t sensor_attach_resps;
    pb_callback_t sensor_event_resps;
} wippersnapper_signal_v1_CreateSignalResponse;

typedef struct _wippersnapper_signal_v1_CreateSignalRequest {
    pb_callback_t cb_payload;
    pb_size_t which_payload;
    union {
        wippersnapper_pin_v1_ConfigurePinRequests pin_configs;
        wippersnapper_pin_v1_PinEvents pin_events;
        wippersnapper_sensor_v1_AttachOrUpdateSensorRequests sensor_configs;
        wippersnapper_sensor_v1_SensorEventRequests sensor_events;
        wippersnapper_pin_v1_ConfigurePWMPinRequests pwm_pin_config;
        wippersnapper_pin_v1_PWMPinEvents pwm_pin_event;
        wippersnapper_pixel_v1_ConfigurePixels pixel_config;
        wippersnapper_pixel_v1_PixelEvent pixel_event;
    } payload;
} wippersnapper_signal_v1_CreateSignalRequest;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define wippersnapper_signal_v1_CreateSignalRequest_init_default {{{NULL}, NULL}, 0, {wippersnapper_pin_v1_ConfigurePinRequests_init_default}}
#define wippersnapper_signal_v1_CreateSignalResponse_init_default {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define wippersnapper_signal_v1_CreateSignalRequest_init_zero {{{NULL}, NULL}, 0, {wippersnapper_pin_v1_ConfigurePinRequests_init_zero}}
#define wippersnapper_signal_v1_CreateSignalResponse_init_zero {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define wippersnapper_signal_v1_CreateSignalResponse_pin_create_resps_tag 6
#define wippersnapper_signal_v1_CreateSignalResponse_pin_update_resps_tag 7
#define wippersnapper_signal_v1_CreateSignalResponse_sensor_attach_resps_tag 8
#define wippersnapper_signal_v1_CreateSignalResponse_sensor_event_resps_tag 9
#define wippersnapper_signal_v1_CreateSignalRequest_pin_configs_tag 6
#define wippersnapper_signal_v1_CreateSignalRequest_pin_events_tag 7
#define wippersnapper_signal_v1_CreateSignalRequest_sensor_configs_tag 8
#define wippersnapper_signal_v1_CreateSignalRequest_sensor_events_tag 9
#define wippersnapper_signal_v1_CreateSignalRequest_pwm_pin_config_tag 10
#define wippersnapper_signal_v1_CreateSignalRequest_pwm_pin_event_tag 12
#define wippersnapper_signal_v1_CreateSignalRequest_pixel_config_tag 13
#define wippersnapper_signal_v1_CreateSignalRequest_pixel_event_tag 14

/* Struct field encoding specification for nanopb */
#define wippersnapper_signal_v1_CreateSignalRequest_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,pin_configs,payload.pin_configs),   6) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,pin_events,payload.pin_events),   7) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,sensor_configs,payload.sensor_configs),   8) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,sensor_events,payload.sensor_events),   9) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,pwm_pin_config,payload.pwm_pin_config),  10) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,pwm_pin_event,payload.pwm_pin_event),  12) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,pixel_config,payload.pixel_config),  13) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,pixel_event,payload.pixel_event),  14)
#define wippersnapper_signal_v1_CreateSignalRequest_CALLBACK NULL
#define wippersnapper_signal_v1_CreateSignalRequest_DEFAULT NULL
#define wippersnapper_signal_v1_CreateSignalRequest_payload_pin_configs_MSGTYPE wippersnapper_pin_v1_ConfigurePinRequests
#define wippersnapper_signal_v1_CreateSignalRequest_payload_pin_events_MSGTYPE wippersnapper_pin_v1_PinEvents
#define wippersnapper_signal_v1_CreateSignalRequest_payload_sensor_configs_MSGTYPE wippersnapper_sensor_v1_AttachOrUpdateSensorRequests
#define wippersnapper_signal_v1_CreateSignalRequest_payload_sensor_events_MSGTYPE wippersnapper_sensor_v1_SensorEventRequests
#define wippersnapper_signal_v1_CreateSignalRequest_payload_pwm_pin_config_MSGTYPE wippersnapper_pin_v1_ConfigurePWMPinRequests
#define wippersnapper_signal_v1_CreateSignalRequest_payload_pwm_pin_event_MSGTYPE wippersnapper_pin_v1_PWMPinEvents
#define wippersnapper_signal_v1_CreateSignalRequest_payload_pixel_config_MSGTYPE wippersnapper_pixel_v1_ConfigurePixels
#define wippersnapper_signal_v1_CreateSignalRequest_payload_pixel_event_MSGTYPE wippersnapper_pixel_v1_PixelEvent

#define wippersnapper_signal_v1_CreateSignalResponse_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  pin_create_resps,   6) \
X(a, CALLBACK, REPEATED, MESSAGE,  pin_update_resps,   7) \
X(a, CALLBACK, REPEATED, MESSAGE,  sensor_attach_resps,   8) \
X(a, CALLBACK, REPEATED, MESSAGE,  sensor_event_resps,   9)
#define wippersnapper_signal_v1_CreateSignalResponse_CALLBACK pb_default_field_callback
#define wippersnapper_signal_v1_CreateSignalResponse_DEFAULT NULL
#define wippersnapper_signal_v1_CreateSignalResponse_pin_create_resps_MSGTYPE wippersnapper_pin_v1_ConfigurePinResponse
#define wippersnapper_signal_v1_CreateSignalResponse_pin_update_resps_MSGTYPE wippersnapper_pin_v1_PinEventResponse
#define wippersnapper_signal_v1_CreateSignalResponse_sensor_attach_resps_MSGTYPE wippersnapper_sensor_v1_AttachOrUpdateSensorResponse
#define wippersnapper_signal_v1_CreateSignalResponse_sensor_event_resps_MSGTYPE wippersnapper_sensor_v1_SensorEventResponse

extern const pb_msgdesc_t wippersnapper_signal_v1_CreateSignalRequest_msg;
extern const pb_msgdesc_t wippersnapper_signal_v1_CreateSignalResponse_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define wippersnapper_signal_v1_CreateSignalRequest_fields &wippersnapper_signal_v1_CreateSignalRequest_msg
#define wippersnapper_signal_v1_CreateSignalResponse_fields &wippersnapper_signal_v1_CreateSignalResponse_msg

/* Maximum encoded size of messages (where known) */
#if defined(wippersnapper_pin_v1_ConfigurePinRequests_size) && defined(wippersnapper_pin_v1_PinEvents_size) && defined(wippersnapper_sensor_v1_AttachOrUpdateSensorRequests_size) && defined(wippersnapper_sensor_v1_SensorEventRequests_size) && defined(wippersnapper_pin_v1_ConfigurePWMPinRequests_size) && defined(wippersnapper_pin_v1_PWMPinEvents_size) && defined(wippersnapper_pixel_v1_ConfigurePixels_size)
union wippersnapper_signal_v1_CreateSignalRequest_payload_size_union {char f6[(6 + wippersnapper_pin_v1_ConfigurePinRequests_size)]; char f7[(6 + wippersnapper_pin_v1_PinEvents_size)]; char f8[(6 + wippersnapper_sensor_v1_AttachOrUpdateSensorRequests_size)]; char f9[(6 + wippersnapper_sensor_v1_SensorEventRequests_size)]; char f10[(6 + wippersnapper_pin_v1_ConfigurePWMPinRequests_size)]; char f12[(6 + wippersnapper_pin_v1_PWMPinEvents_size)]; char f13[(6 + wippersnapper_pixel_v1_ConfigurePixels_size)]; char f0[20];};
#define wippersnapper_signal_v1_CreateSignalRequest_size (0 + sizeof(union wippersnapper_signal_v1_CreateSignalRequest_payload_size_union))
#endif
/* wippersnapper_signal_v1_CreateSignalResponse_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
