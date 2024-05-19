// Protocol version
#define PROTOCOL_VERSION 1.0  // Protocol for the old robots

// Control table address for RX28
#define ADDR_TORQUE_ENABLE      24      // 1 Byte
#define ADDR_PROFILE_VELOCITY   32      // 2 Byte (Moving Speed)
#define ADDR_GOAL_POSITION      30      // 2 Byte 
#define ADDR_PRESENT_POSITION   36      // 2 Byte