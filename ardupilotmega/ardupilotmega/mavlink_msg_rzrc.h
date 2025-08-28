#pragma once
// MESSAGE rzrc PACKING

#define MAVLINK_MSG_ID_rzrc 5045


typedef struct __mavlink_rzrc_t {
 int8_t rX; /*<  VALUE RX*/
 int8_t rY; /*<  VALUE RY*/
 int8_t lY; /*<  VALUE LY*/
 int8_t lX; /*<  VALUE LX*/
 int8_t tumbl; /*<  VALUE TUMBLER*/
} mavlink_rzrc_t;

#define MAVLINK_MSG_ID_rzrc_LEN 5
#define MAVLINK_MSG_ID_rzrc_MIN_LEN 5
#define MAVLINK_MSG_ID_5045_LEN 5
#define MAVLINK_MSG_ID_5045_MIN_LEN 5

#define MAVLINK_MSG_ID_rzrc_CRC 67
#define MAVLINK_MSG_ID_5045_CRC 67



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_rzrc { \
    5045, \
    "rzrc", \
    5, \
    {  { "rX", NULL, MAVLINK_TYPE_INT8_T, 0, 0, offsetof(mavlink_rzrc_t, rX) }, \
         { "rY", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_rzrc_t, rY) }, \
         { "lY", NULL, MAVLINK_TYPE_INT8_T, 0, 2, offsetof(mavlink_rzrc_t, lY) }, \
         { "lX", NULL, MAVLINK_TYPE_INT8_T, 0, 3, offsetof(mavlink_rzrc_t, lX) }, \
         { "tumbl", NULL, MAVLINK_TYPE_INT8_T, 0, 4, offsetof(mavlink_rzrc_t, tumbl) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_rzrc { \
    "rzrc", \
    5, \
    {  { "rX", NULL, MAVLINK_TYPE_INT8_T, 0, 0, offsetof(mavlink_rzrc_t, rX) }, \
         { "rY", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_rzrc_t, rY) }, \
         { "lY", NULL, MAVLINK_TYPE_INT8_T, 0, 2, offsetof(mavlink_rzrc_t, lY) }, \
         { "lX", NULL, MAVLINK_TYPE_INT8_T, 0, 3, offsetof(mavlink_rzrc_t, lX) }, \
         { "tumbl", NULL, MAVLINK_TYPE_INT8_T, 0, 4, offsetof(mavlink_rzrc_t, tumbl) }, \
         } \
}
#endif

/**
 * @brief Pack a rzrc message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param rX  VALUE RX
 * @param rY  VALUE RY
 * @param lY  VALUE LY
 * @param lX  VALUE LX
 * @param tumbl  VALUE TUMBLER
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rzrc_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int8_t rX, int8_t rY, int8_t lY, int8_t lX, int8_t tumbl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_rzrc_LEN];
    _mav_put_int8_t(buf, 0, rX);
    _mav_put_int8_t(buf, 1, rY);
    _mav_put_int8_t(buf, 2, lY);
    _mav_put_int8_t(buf, 3, lX);
    _mav_put_int8_t(buf, 4, tumbl);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_rzrc_LEN);
#else
    mavlink_rzrc_t packet;
    packet.rX = rX;
    packet.rY = rY;
    packet.lY = lY;
    packet.lX = lX;
    packet.tumbl = tumbl;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_rzrc_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_rzrc;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_rzrc_MIN_LEN, MAVLINK_MSG_ID_rzrc_LEN, MAVLINK_MSG_ID_rzrc_CRC);
}

/**
 * @brief Pack a rzrc message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param rX  VALUE RX
 * @param rY  VALUE RY
 * @param lY  VALUE LY
 * @param lX  VALUE LX
 * @param tumbl  VALUE TUMBLER
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rzrc_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int8_t rX, int8_t rY, int8_t lY, int8_t lX, int8_t tumbl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_rzrc_LEN];
    _mav_put_int8_t(buf, 0, rX);
    _mav_put_int8_t(buf, 1, rY);
    _mav_put_int8_t(buf, 2, lY);
    _mav_put_int8_t(buf, 3, lX);
    _mav_put_int8_t(buf, 4, tumbl);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_rzrc_LEN);
#else
    mavlink_rzrc_t packet;
    packet.rX = rX;
    packet.rY = rY;
    packet.lY = lY;
    packet.lX = lX;
    packet.tumbl = tumbl;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_rzrc_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_rzrc;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_rzrc_MIN_LEN, MAVLINK_MSG_ID_rzrc_LEN, MAVLINK_MSG_ID_rzrc_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_rzrc_MIN_LEN, MAVLINK_MSG_ID_rzrc_LEN);
#endif
}

/**
 * @brief Pack a rzrc message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rX  VALUE RX
 * @param rY  VALUE RY
 * @param lY  VALUE LY
 * @param lX  VALUE LX
 * @param tumbl  VALUE TUMBLER
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rzrc_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int8_t rX,int8_t rY,int8_t lY,int8_t lX,int8_t tumbl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_rzrc_LEN];
    _mav_put_int8_t(buf, 0, rX);
    _mav_put_int8_t(buf, 1, rY);
    _mav_put_int8_t(buf, 2, lY);
    _mav_put_int8_t(buf, 3, lX);
    _mav_put_int8_t(buf, 4, tumbl);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_rzrc_LEN);
#else
    mavlink_rzrc_t packet;
    packet.rX = rX;
    packet.rY = rY;
    packet.lY = lY;
    packet.lX = lX;
    packet.tumbl = tumbl;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_rzrc_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_rzrc;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_rzrc_MIN_LEN, MAVLINK_MSG_ID_rzrc_LEN, MAVLINK_MSG_ID_rzrc_CRC);
}

/**
 * @brief Encode a rzrc struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rzrc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rzrc_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rzrc_t* rzrc)
{
    return mavlink_msg_rzrc_pack(system_id, component_id, msg, rzrc->rX, rzrc->rY, rzrc->lY, rzrc->lX, rzrc->tumbl);
}

/**
 * @brief Encode a rzrc struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rzrc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rzrc_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rzrc_t* rzrc)
{
    return mavlink_msg_rzrc_pack_chan(system_id, component_id, chan, msg, rzrc->rX, rzrc->rY, rzrc->lY, rzrc->lX, rzrc->tumbl);
}

/**
 * @brief Encode a rzrc struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param rzrc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rzrc_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_rzrc_t* rzrc)
{
    return mavlink_msg_rzrc_pack_status(system_id, component_id, _status, msg,  rzrc->rX, rzrc->rY, rzrc->lY, rzrc->lX, rzrc->tumbl);
}

/**
 * @brief Send a rzrc message
 * @param chan MAVLink channel to send the message
 *
 * @param rX  VALUE RX
 * @param rY  VALUE RY
 * @param lY  VALUE LY
 * @param lX  VALUE LX
 * @param tumbl  VALUE TUMBLER
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rzrc_send(mavlink_channel_t chan, int8_t rX, int8_t rY, int8_t lY, int8_t lX, int8_t tumbl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_rzrc_LEN];
    _mav_put_int8_t(buf, 0, rX);
    _mav_put_int8_t(buf, 1, rY);
    _mav_put_int8_t(buf, 2, lY);
    _mav_put_int8_t(buf, 3, lX);
    _mav_put_int8_t(buf, 4, tumbl);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_rzrc, buf, MAVLINK_MSG_ID_rzrc_MIN_LEN, MAVLINK_MSG_ID_rzrc_LEN, MAVLINK_MSG_ID_rzrc_CRC);
#else
    mavlink_rzrc_t packet;
    packet.rX = rX;
    packet.rY = rY;
    packet.lY = lY;
    packet.lX = lX;
    packet.tumbl = tumbl;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_rzrc, (const char *)&packet, MAVLINK_MSG_ID_rzrc_MIN_LEN, MAVLINK_MSG_ID_rzrc_LEN, MAVLINK_MSG_ID_rzrc_CRC);
#endif
}

/**
 * @brief Send a rzrc message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_rzrc_send_struct(mavlink_channel_t chan, const mavlink_rzrc_t* rzrc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_rzrc_send(chan, rzrc->rX, rzrc->rY, rzrc->lY, rzrc->lX, rzrc->tumbl);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_rzrc, (const char *)rzrc, MAVLINK_MSG_ID_rzrc_MIN_LEN, MAVLINK_MSG_ID_rzrc_LEN, MAVLINK_MSG_ID_rzrc_CRC);
#endif
}

#if MAVLINK_MSG_ID_rzrc_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rzrc_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int8_t rX, int8_t rY, int8_t lY, int8_t lX, int8_t tumbl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int8_t(buf, 0, rX);
    _mav_put_int8_t(buf, 1, rY);
    _mav_put_int8_t(buf, 2, lY);
    _mav_put_int8_t(buf, 3, lX);
    _mav_put_int8_t(buf, 4, tumbl);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_rzrc, buf, MAVLINK_MSG_ID_rzrc_MIN_LEN, MAVLINK_MSG_ID_rzrc_LEN, MAVLINK_MSG_ID_rzrc_CRC);
#else
    mavlink_rzrc_t *packet = (mavlink_rzrc_t *)msgbuf;
    packet->rX = rX;
    packet->rY = rY;
    packet->lY = lY;
    packet->lX = lX;
    packet->tumbl = tumbl;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_rzrc, (const char *)packet, MAVLINK_MSG_ID_rzrc_MIN_LEN, MAVLINK_MSG_ID_rzrc_LEN, MAVLINK_MSG_ID_rzrc_CRC);
#endif
}
#endif

#endif

// MESSAGE rzrc UNPACKING


/**
 * @brief Get field rX from rzrc message
 *
 * @return  VALUE RX
 */
static inline int8_t mavlink_msg_rzrc_get_rX(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  0);
}

/**
 * @brief Get field rY from rzrc message
 *
 * @return  VALUE RY
 */
static inline int8_t mavlink_msg_rzrc_get_rY(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  1);
}

/**
 * @brief Get field lY from rzrc message
 *
 * @return  VALUE LY
 */
static inline int8_t mavlink_msg_rzrc_get_lY(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  2);
}

/**
 * @brief Get field lX from rzrc message
 *
 * @return  VALUE LX
 */
static inline int8_t mavlink_msg_rzrc_get_lX(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  3);
}

/**
 * @brief Get field tumbl from rzrc message
 *
 * @return  VALUE TUMBLER
 */
static inline int8_t mavlink_msg_rzrc_get_tumbl(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  4);
}

/**
 * @brief Decode a rzrc message into a struct
 *
 * @param msg The message to decode
 * @param rzrc C-struct to decode the message contents into
 */
static inline void mavlink_msg_rzrc_decode(const mavlink_message_t* msg, mavlink_rzrc_t* rzrc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    rzrc->rX = mavlink_msg_rzrc_get_rX(msg);
    rzrc->rY = mavlink_msg_rzrc_get_rY(msg);
    rzrc->lY = mavlink_msg_rzrc_get_lY(msg);
    rzrc->lX = mavlink_msg_rzrc_get_lX(msg);
    rzrc->tumbl = mavlink_msg_rzrc_get_tumbl(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_rzrc_LEN? msg->len : MAVLINK_MSG_ID_rzrc_LEN;
        memset(rzrc, 0, MAVLINK_MSG_ID_rzrc_LEN);
    memcpy(rzrc, _MAV_PAYLOAD(msg), len);
#endif
}
