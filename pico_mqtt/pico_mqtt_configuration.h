#ifndef PICO_MQTT_CONFIGURATION_H
#define PICO_MQTT_CONFIGURATION_H
/**
* Library Configuration
**/

/* set to production mode to strip all macro's and debug related code */
/* #define PRODUCTION */
#define AUTO_RECONNECT 1

#define ALLOW_WILDCARDS 0
#define ALLOW_SYSTEM_TOPICS 0

#define ALLOW_LONG_CLIENT_ID 0
#define ALLOW_EMPTY_CLIENT_ID 0
#define ALLOW_NON_ALPHNUMERIC_CLIENT_ID 0
#define ALLOW_EMPTY_MESSAGE 0
#define ALLOW_EMPTY_USERNAME 0

#define MAXIMUM_MESSAGE_SIZE 500
#define MAXIMUM_ACTIVE_MESSAGES 50
#define MAXIMUM_MEMORY_USE 2048
#define MAXIMUM_STRING_LENGTH 100

#define ENABLE_QUALITY_OF_SERVICE_1_AND_2 1
#define ENBABLE_DNS_LOOKUP 1

#endif