// MESSAGE rzrc support class

#pragma once

namespace mavlink {
namespace ardupilotmega {
namespace msg {

/**
 * @brief rzrc message
 *
 * send rzrc axes
 */
struct rzrc : mavlink::Message {
    static constexpr msgid_t MSG_ID = 5045;
    static constexpr size_t LENGTH = 5;
    static constexpr size_t MIN_LENGTH = 5;
    static constexpr uint8_t CRC_EXTRA = 67;
    static constexpr auto NAME = "rzrc";


    int8_t rX; /*<  VALUE RX */
    int8_t rY; /*<  VALUE RY */
    int8_t lY; /*<  VALUE LY */
    int8_t lX; /*<  VALUE LX */
    int8_t tumbl; /*<  VALUE TUMBLER */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  rX: " << +rX << std::endl;
        ss << "  rY: " << +rY << std::endl;
        ss << "  lY: " << +lY << std::endl;
        ss << "  lX: " << +lX << std::endl;
        ss << "  tumbl: " << +tumbl << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << rX;                            // offset: 0
        map << rY;                            // offset: 1
        map << lY;                            // offset: 2
        map << lX;                            // offset: 3
        map << tumbl;                         // offset: 4
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> rX;                            // offset: 0
        map >> rY;                            // offset: 1
        map >> lY;                            // offset: 2
        map >> lX;                            // offset: 3
        map >> tumbl;                         // offset: 4
    }
};

} // namespace msg
} // namespace ardupilotmega
} // namespace mavlink
