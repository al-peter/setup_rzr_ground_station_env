#pragma once
// MESSAGE RZR_LINK PACKING

#define MAVLINK_MSG_ID_RZR_LINK 5046


typedef struct __mavlink_rzr_link_t {
 uint16_t value3; /*<  Param 3*/
 uint16_t value4; /*<  Param 4*/
 uint8_t value1; /*<  Param 1*/
 uint8_t value2; /*<  Param 2*/
 int8_t value5; /*<  Param 5*/
 int8_t value6; /*<  Param 6*/
 int8_t value7; /*<  Param 7*/
 int8_t value8; /*<  Param 8*/
} mavlink_rzr_link_t;

#define MAVLINK_MSG_ID_RZR_LINK_LEN 10
#define MAVLINK_MSG_ID_RZR_LINK_MIN_LEN 10
#define MAVLINK_MSG_ID_5046_LEN 10
#define MAVLINK_MSG_ID_5046_MIN_LEN 10

#define MAVLINK_MSG_ID_RZR_LINK_CRC 46
#define MAVLINK_MSG_ID_5046_CRC 46



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RZR_LINK { \
    5046, \
    "RZR_LINK", \
    8, \
    {  { "value1", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_rzr_link_t, value1) }, \
         { "value2", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_rzr_link_t, value2) }, \
         { "value3", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_rzr_link_t, value3) }, \
         { "value4", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_rzr_link_t, value4) }, \
         { "value5", NULL, MAVLINK_TYPE_INT8_T, 0, 6, offsetof(mavlink_rzr_link_t, value5) }, \
         { "value6", NULL, MAVLINK_TYPE_INT8_T, 0, 7, offsetof(mavlink_rzr_link_t, value6) }, \
         { "value7", NULL, MAVLINK_TYPE_INT8_T, 0, 8, offsetof(mavlink_rzr_link_t, value7) }, \
         { "value8", NULL, MAVLINK_TYPE_INT8_T, 0, 9, offsetof(mavlink_rzr_link_t, value8) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RZR_LINK { \
    "RZR_LINK", \
    8, \
    {  { "value1", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_rzr_link_t, value1) }, \
         { "value2", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_rzr_link_t, value2) }, \
         { "value3", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_rzr_link_t, value3) }, \
         { "value4", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_rzr_link_t, value4) }, \
         { "value5", NULL, MAVLINK_TYPE_INT8_T, 0, 6, offsetof(mavlink_rzr_link_t, value5) }, \
         { "value6", NULL, MAVLINK_TYPE_INT8_T, 0, 7, offsetof(mavlink_rzr_link_t, value6) }, \
         { "value7", NULL, MAVLINK_TYPE_INT8_T, 0, 8, offsetof(mavlink_rzr_link_t, value7) }, \
         { "value8", NULL, MAVLINK_TYPE_INT8_T, 0, 9, offsetof(mavlink_rzr_link_t, value8) }, \
         } \
}
#endif

/**
 * @brief Pack a rzr_link message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param value1  Param 1
 * @param value2  Param 2
 * @param value3  Param 3
 * @param value4  Param 4
 * @param value5  Param 5
 * @param value6  Param 6
 * @param value7  Param 7
 * @param value8  Param 8
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rzr_link_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t value1, uint8_t value2, uint16_t value3, uint16_t value4, int8_t value5, int8_t value6, int8_t value7, int8_t value8)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RZR_LINK_LEN];
    _mav_put_uint16_t(buf, 0, value3);
    _mav_put_uint16_t(buf, 2, value4);
    _mav_put_uint8_t(buf, 4, value1);
    _mav_put_uint8_t(buf, 5, value2);
    _mav_put_int8_t(buf, 6, value5);
    _mav_put_int8_t(buf, 7, value6);
    _mav_put_int8_t(buf, 8, value7);
    _mav_put_int8_t(buf, 9, value8);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RZR_LINK_LEN);
#else
    mavlink_rzr_link_t packet;
    packet.value3 = value3;
    packet.value4 = value4;
    packet.value1 = value1;
    packet.value2 = value2;
    packet.value5 = value5;
    packet.value6 = value6;
    packet.value7 = value7;
    packet.value8 = value8;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RZR_LINK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RZR_LINK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RZR_LINK_MIN_LEN, MAVLINK_MSG_ID_RZR_LINK_LEN, MAVLINK_MSG_ID_RZR_LINK_CRC);
}

/**
 * @brief Pack a rzr_link message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param value1  Param 1
 * @param value2  Param 2
 * @param value3  Param 3
 * @param value4  Param 4
 * @param value5  Param 5
 * @param value6  Param 6
 * @param value7  Param 7
 * @param value8  Param 8
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rzr_link_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t value1, uint8_t value2, uint16_t value3, uint16_t value4, int8_t value5, int8_t value6, int8_t value7, int8_t value8)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RZR_LINK_LEN];
    _mav_put_uint16_t(buf, 0, value3);
    _mav_put_uint16_t(buf, 2, value4);
    _mav_put_uint8_t(buf, 4, value1);
    _mav_put_uint8_t(buf, 5, value2);
    _mav_put_int8_t(buf, 6, value5);
    _mav_put_int8_t(buf, 7, value6);
    _mav_put_int8_t(buf, 8, value7);
    _mav_put_int8_t(buf, 9, value8);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RZR_LINK_LEN);
#else
    mavlink_rzr_link_t packet;
    packet.value3 = value3;
    packet.value4 = value4;
    packet.value1 = value1;
    packet.value2 = value2;
    packet.value5 = value5;
    packet.value6 = value6;
    packet.value7 = value7;
    packet.value8 = value8;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RZR_LINK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RZR_LINK;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RZR_LINK_MIN_LEN, MAVLINK_MSG_ID_RZR_LINK_LEN, MAVLINK_MSG_ID_RZR_LINK_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RZR_LINK_MIN_LEN, MAVLINK_MSG_ID_RZR_LINK_LEN);
#endif
}

/**
 * @brief Pack a rzr_link message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param value1  Param 1
 * @param value2  Param 2
 * @param value3  Param 3
 * @param value4  Param 4
 * @param value5  Param 5
 * @param value6  Param 6
 * @param value7  Param 7
 * @param value8  Param 8
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rzr_link_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t value1,uint8_t value2,uint16_t value3,uint16_t value4,int8_t value5,int8_t value6,int8_t value7,int8_t value8)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RZR_LINK_LEN];
    _mav_put_uint16_t(buf, 0, value3);
    _mav_put_uint16_t(buf, 2, value4);
    _mav_put_uint8_t(buf, 4, value1);
    _mav_put_uint8_t(buf, 5, value2);
    _mav_put_int8_t(buf, 6, value5);
    _mav_put_int8_t(buf, 7, value6);
    _mav_put_int8_t(buf, 8, value7);
    _mav_put_int8_t(buf, 9, value8);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RZR_LINK_LEN);
#else
    mavlink_rzr_link_t packet;
    packet.value3 = value3;
    packet.value4 = value4;
    packet.value1 = value1;
    packet.value2 = value2;
    packet.value5 = value5;
    packet.value6 = value6;
    packet.value7 = value7;
    packet.value8 = value8;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RZR_LINK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RZR_LINK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RZR_LINK_MIN_LEN, MAVLINK_MSG_ID_RZR_LINK_LEN, MAVLINK_MSG_ID_RZR_LINK_CRC);
}

/**
 * @brief Encode a rzr_link struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rzr_link C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rzr_link_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rzr_link_t* rzr_link)
{
    return mavlink_msg_rzr_link_pack(system_id, component_id, msg, rzr_link->value1, rzr_link->value2, rzr_link->value3, rzr_link->value4, rzr_link->value5, rzr_link->value6, rzr_link->value7, rzr_link->value8);
}

/**
 * @brief Encode a rzr_link struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rzr_link C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rzr_link_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rzr_link_t* rzr_link)
{
    return mavlink_msg_rzr_link_pack_chan(system_id, component_id, chan, msg, rzr_link->value1, rzr_link->value2, rzr_link->value3, rzr_link->value4, rzr_link->value5, rzr_link->value6, rzr_link->value7, rzr_link->value8);
}

/**
 * @brief Encode a rzr_link struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param rzr_link C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rzr_link_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_rzr_link_t* rzr_link)
{
    return mavlink_msg_rzr_link_pack_status(system_id, component_id, _status, msg,  rzr_link->value1, rzr_link->value2, rzr_link->value3, rzr_link->value4, rzr_link->value5, rzr_link->value6, rzr_link->value7, rzr_link->value8);
}

/**
 * @brief Send a rzr_link message
 * @param chan MAVLink channel to send the message
 *
 * @param value1  Param 1
 * @param value2  Param 2
 * @param value3  Param 3
 * @param value4  Param 4
 * @param value5  Param 5
 * @param value6  Param 6
 * @param value7  Param 7
 * @param value8  Param 8
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rzr_link_send(mavlink_channel_t chan, uint8_t value1, uint8_t value2, uint16_t value3, uint16_t value4, int8_t value5, int8_t value6, int8_t value7, int8_t value8)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RZR_LINK_LEN];
    _mav_put_uint16_t(buf, 0, value3);
    _mav_put_uint16_t(buf, 2, value4);
    _mav_put_uint8_t(buf, 4, value1);
    _mav_put_uint8_t(buf, 5, value2);
    _mav_put_int8_t(buf, 6, value5);
    _mav_put_int8_t(buf, 7, value6);
    _mav_put_int8_t(buf, 8, value7);
    _mav_put_int8_t(buf, 9, value8);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RZR_LINK, buf, MAVLINK_MSG_ID_RZR_LINK_MIN_LEN, MAVLINK_MSG_ID_RZR_LINK_LEN, MAVLINK_MSG_ID_RZR_LINK_CRC);
#else
    mavlink_rzr_link_t packet;
    packet.value3 = value3;
    packet.value4 = value4;
    packet.value1 = value1;
    packet.value2 = value2;
    packet.value5 = value5;
    packet.value6 = value6;
    packet.value7 = value7;
    packet.value8 = value8;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RZR_LINK, (const char *)&packet, MAVLINK_MSG_ID_RZR_LINK_MIN_LEN, MAVLINK_MSG_ID_RZR_LINK_LEN, MAVLINK_MSG_ID_RZR_LINK_CRC);
#endif
}

/**
 * @brief Send a rzr_link message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_rzr_link_send_struct(mavlink_channel_t chan, const mavlink_rzr_link_t* rzr_link)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_rzr_link_send(chan, rzr_link->value1, rzr_link->value2, rzr_link->value3, rzr_link->value4, rzr_link->value5, rzr_link->value6, rzr_link->value7, rzr_link->value8);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RZR_LINK, (const char *)rzr_link, MAVLINK_MSG_ID_RZR_LINK_MIN_LEN, MAVLINK_MSG_ID_RZR_LINK_LEN, MAVLINK_MSG_ID_RZR_LINK_CRC);
#endif
}

#if MAVLINK_MSG_ID_RZR_LINK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rzr_link_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t value1, uint8_t value2, uint16_t value3, uint16_t value4, int8_t value5, int8_t value6, int8_t value7, int8_t value8)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, value3);
    _mav_put_uint16_t(buf, 2, value4);
    _mav_put_uint8_t(buf, 4, value1);
    _mav_put_uint8_t(buf, 5, value2);
    _mav_put_int8_t(buf, 6, value5);
    _mav_put_int8_t(buf, 7, value6);
    _mav_put_int8_t(buf, 8, value7);
    _mav_put_int8_t(buf, 9, value8);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RZR_LINK, buf, MAVLINK_MSG_ID_RZR_LINK_MIN_LEN, MAVLINK_MSG_ID_RZR_LINK_LEN, MAVLINK_MSG_ID_RZR_LINK_CRC);
#else
    mavlink_rzr_link_t *packet = (mavlink_rzr_link_t *)msgbuf;
    packet->value3 = value3;
    packet->value4 = value4;
    packet->value1 = value1;
    packet->value2 = value2;
    packet->value5 = value5;
    packet->value6 = value6;
    packet->value7 = value7;
    packet->value8 = value8;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RZR_LINK, (const char *)packet, MAVLINK_MSG_ID_RZR_LINK_MIN_LEN, MAVLINK_MSG_ID_RZR_LINK_LEN, MAVLINK_MSG_ID_RZR_LINK_CRC);
#endif
}
#endif

#endif

// MESSAGE RZR_LINK UNPACKING


/**
 * @brief Get field value1 from rzr_link message
 *
 * @return  Param 1
 */
static inline uint8_t mavlink_msg_rzr_link_get_value1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field value2 from rzr_link message
 *
 * @return  Param 2
 */
static inline uint8_t mavlink_msg_rzr_link_get_value2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field value3 from rzr_link message
 *
 * @return  Param 3
 */
static inline uint16_t mavlink_msg_rzr_link_get_value3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field value4 from rzr_link message
 *
 * @return  Param 4
 */
static inline uint16_t mavlink_msg_rzr_link_get_value4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field value5 from rzr_link message
 *
 * @return  Param 5
 */
static inline int8_t mavlink_msg_rzr_link_get_value5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  6);
}

/**
 * @brief Get field value6 from rzr_link message
 *
 * @return  Param 6
 */
static inline int8_t mavlink_msg_rzr_link_get_value6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  7);
}

/**
 * @brief Get field value7 from rzr_link message
 *
 * @return  Param 7
 */
static inline int8_t mavlink_msg_rzr_link_get_value7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  8);
}

/**
 * @brief Get field value8 from rzr_link message
 *
 * @return  Param 8
 */
static inline int8_t mavlink_msg_rzr_link_get_value8(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  9);
}

/**
 * @brief Decode a rzr_link message into a struct
 *
 * @param msg The message to decode
 * @param rzr_link C-struct to decode the message contents into
 */
static inline void mavlink_msg_rzr_link_decode(const mavlink_message_t* msg, mavlink_rzr_link_t* rzr_link)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    rzr_link->value3 = mavlink_msg_rzr_link_get_value3(msg);
    rzr_link->value4 = mavlink_msg_rzr_link_get_value4(msg);
    rzr_link->value1 = mavlink_msg_rzr_link_get_value1(msg);
    rzr_link->value2 = mavlink_msg_rzr_link_get_value2(msg);
    rzr_link->value5 = mavlink_msg_rzr_link_get_value5(msg);
    rzr_link->value6 = mavlink_msg_rzr_link_get_value6(msg);
    rzr_link->value7 = mavlink_msg_rzr_link_get_value7(msg);
    rzr_link->value8 = mavlink_msg_rzr_link_get_value8(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RZR_LINK_LEN? msg->len : MAVLINK_MSG_ID_RZR_LINK_LEN;
        memset(rzr_link, 0, MAVLINK_MSG_ID_RZR_LINK_LEN);
    memcpy(rzr_link, _MAV_PAYLOAD(msg), len);
#endif
}
