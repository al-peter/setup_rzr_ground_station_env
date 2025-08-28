// MESSAGE RZR_LINK support class

#pragma once

namespace mavlink {
namespace ardupilotmega {
namespace msg {

/**
 * @brief RZR_LINK message
 *
 * RZR_LINK MAVLink message.
 */
struct RZR_LINK : mavlink::Message {
    static constexpr msgid_t MSG_ID = 5046;
    static constexpr size_t LENGTH = 10;
    static constexpr size_t MIN_LENGTH = 10;
    static constexpr uint8_t CRC_EXTRA = 46;
    static constexpr auto NAME = "RZR_LINK";


    uint8_t value1; /*<  Param 1 */
    uint8_t value2; /*<  Param 2 */
    uint16_t value3; /*<  Param 3 */
    uint16_t value4; /*<  Param 4 */
    int8_t value5; /*<  Param 5 */
    int8_t value6; /*<  Param 6 */
    int8_t value7; /*<  Param 7 */
    int8_t value8; /*<  Param 8 */


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
        ss << "  value1: " << +value1 << std::endl;
        ss << "  value2: " << +value2 << std::endl;
        ss << "  value3: " << value3 << std::endl;
        ss << "  value4: " << value4 << std::endl;
        ss << "  value5: " << +value5 << std::endl;
        ss << "  value6: " << +value6 << std::endl;
        ss << "  value7: " << +value7 << std::endl;
        ss << "  value8: " << +value8 << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << value3;                        // offset: 0
        map << value4;                        // offset: 2
        map << value1;                        // offset: 4
        map << value2;                        // offset: 5
        map << value5;                        // offset: 6
        map << value6;                        // offset: 7
        map << value7;                        // offset: 8
        map << value8;                        // offset: 9
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> value3;                        // offset: 0
        map >> value4;                        // offset: 2
        map >> value1;                        // offset: 4
        map >> value2;                        // offset: 5
        map >> value5;                        // offset: 6
        map >> value6;                        // offset: 7
        map >> value7;                        // offset: 8
        map >> value8;                        // offset: 9
    }
};

} // namespace msg
} // namespace ardupilotmega
} // namespace mavlink
