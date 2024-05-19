// #define PROTOCOL_VERSION 2.0 

// Control table address for X series (except XL-320)
#define ADDR_OPERATING_MODE     11      // 1 Byte (testar remover)
#define ADDR_TORQUE_ENABLE      64      // 1 Byte
#define ADDR_PROFILE_VELOCITY   112     // 4 Byte
#define ADDR_GOAL_POSITION      116     // 4 Byte
#define ADDR_PRESENT_POSITION   132     // 4 Byte