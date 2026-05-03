// GENERATED CODE. DO NOT CHANGE
// Trigger animations automatically using the configuration in the app, or callbacks in the BottangoArduinoCallbacks.cpp file
// Look at the method "onLateLoop" in the callbacks file for examples

// Animation Index Key:
// 0: handshake
// 1: left arm wave
// 2: sad rocket :(
// 3: dance party
// 4: No.
// 5: yes!
// 6: shrug
// 7: running arms
// 8: just lookin around


// !!! Do not change the below, unless you know what you are doing.
// !!!
// !!!


#include "GeneratedCodeAnimations.h"
#include "src/CodeCommandStreamDataSource.h"

namespace GeneratedCodeAnimations
{
    // setup
    const char SETUP_DATA_0[] PROGMEM = "rSVPin,22,2500,500,3000,2500\nrSVPin,18,500,2500,3000,1492\nrSVPin,23,2500,500,3000,500\nrSVPin,21,500,2500,3000,2500\nrSVPin,19,500,2500,3000,500\nrSVPin,5,1000,2000,3000,1500\n";
    const char *const SETUP_DATAARRAY[] PROGMEM = {SETUP_DATA_0};

    // animation 0, "handshake"
    const char ANIM_0_DATA0[] PROGMEM = "sC,19,0,500,0,124,0,0,-124,0\nsC,23,0,1000,8192,248,0,4062,-248,0\nsC,21,0,500,8192,124,0,8192,-124,0\nsC,22,0,500,0,124,0,25,-123,0\nsC,22,500,533,25,132,0,0,-132,0\nsC,19,500,2000,0,499,0,0,-498,0\nsC,21,500,2000,8192,499,0,8175,-499,0\nsC,23,1000,500,4062,124,0,6537,-124,0\nsC,22,1033,667,0,166,0,0,-166,0\nsC,23,1500,500,6537,124,0,4043,-125,0\nsC,22,1700,800,0,199,0,82,-199,0\nsC,23,2000,500,4043,125,0,6518,-125,0\nsC,21,2500,500,8175,121,0,8192,-121,0\nsC,23,2500,500,6518,125,0,4043,-125,0\nsC,19,2500,500,0,121,0,0,-121,0\nsC,23,3000,1000,4043,250,0,8192,-250,0\n\n";
    const char *const ANIM_0_DATAARRAY[] PROGMEM = {ANIM_0_DATA0};
    const char ANIM_0_LOOP[] PROGMEM = "sC,22,10000,14,82,7,0,0,-7,0\n";
    const uint16_t ANIM_0_CONFIG[] PROGMEM = {1, 0, 0, 0, 0, 0, 0, 0};

    // animation 1, "left arm wave"
    const char ANIM_1_DATA0[] PROGMEM = "sC,22,0,1000,0,246,0,8192,-242,0\nsC,23,0,233,8192,58,0,8192,-58,0\nsC,23,233,3234,8192,807,0,8192,-807,0\nsC,22,1000,500,8192,123,0,4881,-123,0\nsC,22,1500,500,4881,124,0,8192,-124,0\nsC,22,2000,500,8192,121,0,4918,-123,0\nsC,22,2500,500,4918,124,0,8192,-124,0\nsC,22,3000,500,8192,121,0,4900,-123,0\nsC,23,3467,533,8192,130,0,8192,-130,0\nsC,22,3500,500,4900,123,0,8192,-125,0\nsC,22,4000,1000,8192,250,0,0,-250,0\n\n";
    const char *const ANIM_1_DATAARRAY[] PROGMEM = {ANIM_1_DATA0};
    const char ANIM_1_LOOP[] PROGMEM = "";
    const uint16_t ANIM_1_CONFIG[] PROGMEM = {0, 0, 0, 0, 0, 0, 0, 0};

    // animation 2, "sad rocket :("
    const char ANIM_2_DATA0[] PROGMEM = "sC,22,0,500,0,124,0,4557,-124,0\nsC,18,0,300,4080,74,28,4080,-73,0\nsC,23,0,1500,8192,374,0,8192,-374,0\nsC,19,0,500,0,125,0,4614,-125,0\nsC,5,300,2200,4100,550,0,1262,-550,0\nsC,18,300,300,4080,74,0,3433,-74,0\nsC,19,500,1500,4614,375,0,0,-375,0\nsC,22,500,1500,4557,374,0,0,-374,0\nsC,18,600,300,3433,75,0,5604,-74,0\nsC,18,900,267,5604,66,0,3300,-65,0\nsC,18,1167,333,3300,82,0,5623,-83,0\nsC,23,1500,500,8192,125,0,8192,-125,0\nsC,18,1500,267,5623,66,0,3319,-66,0\nsC,18,1767,333,3319,83,0,5757,-83,0\nsC,18,2100,300,5757,75,0,3243,-75,0\nsC,18,2400,333,3243,83,0,5566,-83,0\nsC,5,2500,500,1262,125,0,4080,-125,0\nsC,18,2733,267,5566,66,0,4119,-66,0\n\n";
    const char *const ANIM_2_DATAARRAY[] PROGMEM = {ANIM_2_DATA0};
    const char ANIM_2_LOOP[] PROGMEM = "sC,5,20000,2,4080,1,0,4100,-1,0\nsC,18,20000,6,4119,3,0,4080,-3,0\nsC,19,20000,0,0,0,0,0,0,0\nsC,22,20000,0,0,0,0,0,0,0\n";
    const uint16_t ANIM_2_CONFIG[] PROGMEM = {0, 0, 0, 0, 0, 0, 0, 0};

    // animation 3, "dance party"
    const char ANIM_3_DATA0[] PROGMEM = "sC,23,0,500,8192,123,0,8192,-123,0\nsC,21,0,500,8192,123,0,8192,-123,0\nsC,22,0,500,0,123,0,8192,-123,0\nsC,19,0,500,0,123,0,825,-123,0\nsC,23,500,4500,8192,1125,0,8192,-1125,0\nsC,22,500,500,8192,125,0,825,-125,0\nsC,21,500,4500,8192,1125,0,8175,-1125,0\nsC,19,500,500,825,125,0,8192,-125,0\nsC,19,1000,500,8192,124,0,825,-124,0\nsC,22,1000,500,825,124,0,8192,-124,0\nsC,19,1500,500,825,125,0,8192,-125,0\nsC,22,1500,500,8192,124,0,805,-124,0\nsC,22,2000,500,805,125,0,8192,-125,0\nsC,19,2000,533,8192,133,0,805,-133,0\nsC,22,2500,500,8192,125,0,881,-125,0\nsC,19,2533,467,805,116,0,8192,-116,0\nsC,19,3000,500,8192,125,0,786,-125,0\nsC,22,3000,500,881,125,0,8192,-125,0\nsC,22,3500,500,8192,125,0,881,-125,0\nsC,19,3500,500,786,125,0,8080,-125,0\nsC,22,4000,500,881,125,0,7945,-125,0\nsC,19,4000,500,8080,125,0,674,-125,0\nsC,19,4500,500,674,133,0,8061,-125,0\nsC,22,4500,500,7945,125,0,920,-125,0\nsC,19,5000,500,8061,125,0,655,-125,0\nsC,23,5000,1000,8192,250,0,8192,-250,0\nsC,21,5000,1000,8175,250,0,8192,-250,0\nsC,22,5000,500,920,125,0,7887,-125,0\nsC,22,5500,500,7887,125,0,0,-125,0\nsC,19,5500,500,655,125,0,0,-125,0\n\n";
    const char *const ANIM_3_DATAARRAY[] PROGMEM = {ANIM_3_DATA0};
    const char ANIM_3_LOOP[] PROGMEM = "sC,19,20000,0,0,0,0,0,0,0\n";
    const uint16_t ANIM_3_CONFIG[] PROGMEM = {0, 0, 0, 0, 0, 0, 0, 0};

    // animation 4, "No."
    const char ANIM_4_DATA0[] PROGMEM = "sC,18,0,333,4119,83,0,6175,-82,0\nsC,5,0,100,4062,15,-26,2786,-24,0\nsC,5,100,2833,2786,708,0,2786,-707,0\nsC,18,333,334,6175,83,0,2043,-81,0\nsC,18,667,333,2043,81,0,6137,-83,0\nsC,18,1000,333,6137,83,0,2043,-83,0\nsC,18,1333,334,2043,83,0,6156,-83,0\nsC,18,1667,333,6156,83,0,2043,-83,0\nsC,18,2000,333,2043,83,0,6156,-83,0\nsC,18,2333,334,6156,83,0,2024,-83,0\nsC,18,2667,333,2024,83,0,4100,-83,0\nsC,5,2933,67,2786,16,0,3928,-16,0\n\n";
    const char *const ANIM_4_DATAARRAY[] PROGMEM = {ANIM_4_DATA0};
    const char ANIM_4_LOOP[] PROGMEM = "sC,18,20000,4,4100,2,0,4119,-2,0\nsC,5,20000,10,3928,5,0,4062,-5,0\n";
    const uint16_t ANIM_4_CONFIG[] PROGMEM = {0, 0, 0, 0, 0, 0, 0, 0};

    // animation 5, "yes!"
    const char ANIM_5_DATA0[] PROGMEM = "sC,5,0,500,4100,125,0,5338,-125,0\nsC,5,500,500,5338,125,0,2043,-125,0\nsC,5,1000,500,2043,125,0,5318,-125,0\nsC,5,1500,500,5318,125,0,2043,-125,0\nsC,5,2000,500,2043,125,0,5338,-125,0\nsC,5,2500,500,5338,125,0,2082,-125,0\nsC,5,3000,500,2082,125,0,5338,-125,0\nsC,5,3500,500,5338,125,0,4119,-125,0\n\n";
    const char *const ANIM_5_DATAARRAY[] PROGMEM = {ANIM_5_DATA0};
    const char ANIM_5_LOOP[] PROGMEM = "sC,5,20000,2,4119,1,0,4100,-1,0\n";
    const uint16_t ANIM_5_CONFIG[] PROGMEM = {0, 0, 0, 0, 0, 0, 0, 0};

    // animation 6, "shrug"
    const char ANIM_6_DATA0[] PROGMEM = "sC,22,0,333,0,83,0,4119,-83,0\nsC,19,0,333,0,83,0,4119,-83,0\nsC,22,333,2667,4119,666,0,8192,-666,0\nsC,19,333,2667,4119,666,0,8192,-666,0\nsC,22,3000,1000,8192,250,0,0,-250,0\nsC,19,3000,1000,8192,249,0,0,-249,0\n\n";
    const char *const ANIM_6_DATAARRAY[] PROGMEM = {ANIM_6_DATA0};
    const char ANIM_6_LOOP[] PROGMEM = "sC,22,20000,0,0,0,0,0,0,0\nsC,19,20000,0,0,0,0,0,0,0\n";
    const uint16_t ANIM_6_CONFIG[] PROGMEM = {0, 0, 0, 0, 0, 0, 0, 0};

    // animation 7, "running arms"
    const char ANIM_7_DATA0[] PROGMEM = "sC,23,0,500,8192,125,0,6575,-125,0\nsC,21,0,500,6575,125,0,8192,-125,0\nsC,23,500,500,6575,125,0,8192,-125,0\nsC,21,500,500,8192,125,0,6518,-125,0\nsC,23,1000,500,8192,125,0,6518,-125,0\nsC,21,1000,500,6518,125,0,8192,-125,0\nsC,21,1500,500,8192,125,0,6595,-125,0\nsC,23,1500,500,6518,125,0,8192,-125,0\nsC,21,2000,500,6595,125,0,8078,-125,0\nsC,23,2000,500,8192,125,0,6595,-125,0\nsC,21,2500,500,8078,125,0,6537,-125,0\nsC,23,2500,500,6595,125,0,8078,-125,0\nsC,21,3000,500,6537,125,0,8078,-125,0\nsC,23,3000,500,8078,125,0,6537,-125,0\nsC,21,3500,500,8078,125,0,6575,-125,0\nsC,23,3500,500,6537,125,0,8078,-125,0\nsC,21,4000,500,6575,125,0,8192,-125,0\nsC,23,4000,500,8078,125,0,6575,-125,0\nsC,23,4500,500,6575,125,0,8192,-125,0\nsC,21,4500,500,8192,125,0,8192,-125,0\n\n";
    const char *const ANIM_7_DATAARRAY[] PROGMEM = {ANIM_7_DATA0};
    const char ANIM_7_LOOP[] PROGMEM = "sC,21,20000,264,8192,132,0,6575,-132,0\n";
    const uint16_t ANIM_7_CONFIG[] PROGMEM = {0, 0, 0, 0, 0, 0, 0, 0};

    // animation 8, "just lookin around"
    const char ANIM_8_DATA0[] PROGMEM = "sC,18,0,500,4100,125,0,6042,-125,0\nsC,21,0,30000,8192,7500,0,8192,-7500,0\nsC,5,0,500,4119,125,0,3338,-125,0\nsC,18,500,4500,6042,1125,0,6080,-1125,0\nsC,5,500,4500,3338,1125,0,3300,-1123,0\nsC,18,5000,533,6080,133,0,3205,-133,0\nsC,5,5000,500,3300,125,0,3643,-125,0\nsC,5,5500,6500,3643,1625,0,3604,-1625,0\nsC,18,5533,6467,3205,1616,0,3262,-1616,0\nsC,18,12000,500,3262,124,0,1872,-124,0\nsC,5,12000,500,3604,125,0,2805,-124,0\nsC,18,12500,6500,1872,1625,0,1853,-1625,0\nsC,5,12500,6500,2805,1624,0,2766,-1623,0\nsC,18,19000,500,1853,125,0,6023,-125,0\nsC,5,19000,500,2766,125,0,4119,-125,0\nsC,18,19500,5500,6023,1375,0,6099,-1375,0\nsC,5,19500,5500,4119,1373,0,4100,-1374,0\nsC,5,25000,500,4100,124,0,3015,-124,0\nsC,18,25000,500,6099,125,0,3262,-125,0\nsC,5,25500,4000,3015,1000,0,3015,-1000,0\nsC,18,25500,4000,3262,1000,0,3243,-1000,0\nsC,18,29500,500,3243,125,0,4119,-125,0\nsC,5,29500,500,3015,125,0,4100,-125,0\n\n";
    const char *const ANIM_8_DATAARRAY[] PROGMEM = {ANIM_8_DATA0};
    const char ANIM_8_LOOP[] PROGMEM = "sC,5,40000,2,4100,1,0,4119,-1,0\nsC,18,40000,4,4119,2,0,4100,-2,0\n";
    const uint16_t ANIM_8_CONFIG[] PROGMEM = {0, 0, 1, 0, 0, 0, 0, 0};


    // configs
    const uint16_t *const CONFIGS_ARRAY[] PROGMEM = {ANIM_0_CONFIG, ANIM_1_CONFIG, ANIM_2_CONFIG, ANIM_3_CONFIG, ANIM_4_CONFIG, ANIM_5_CONFIG, ANIM_6_CONFIG, ANIM_7_CONFIG, ANIM_8_CONFIG};

    CommandStream *GenerateSetupCommandStream()
    {
        return new CommandStream(new CodeCommandStreamDataSource(SETUP_DATAARRAY, 1));
    }

    CommandStream *GenerateCommandStreamByIndex(byte animationIndex)
    {
        switch (animationIndex)
        {
        case 0:
            return new CommandStream(new CodeCommandStreamDataSource(ANIM_0_DATAARRAY, 1, ANIM_0_LOOP));
        case 1:
            return new CommandStream(new CodeCommandStreamDataSource(ANIM_1_DATAARRAY, 1, ANIM_1_LOOP));
        case 2:
            return new CommandStream(new CodeCommandStreamDataSource(ANIM_2_DATAARRAY, 1, ANIM_2_LOOP));
        case 3:
            return new CommandStream(new CodeCommandStreamDataSource(ANIM_3_DATAARRAY, 1, ANIM_3_LOOP));
        case 4:
            return new CommandStream(new CodeCommandStreamDataSource(ANIM_4_DATAARRAY, 1, ANIM_4_LOOP));
        case 5:
            return new CommandStream(new CodeCommandStreamDataSource(ANIM_5_DATAARRAY, 1, ANIM_5_LOOP));
        case 6:
            return new CommandStream(new CodeCommandStreamDataSource(ANIM_6_DATAARRAY, 1, ANIM_6_LOOP));
        case 7:
            return new CommandStream(new CodeCommandStreamDataSource(ANIM_7_DATAARRAY, 1, ANIM_7_LOOP));
        case 8:
            return new CommandStream(new CodeCommandStreamDataSource(ANIM_8_DATAARRAY, 1, ANIM_8_LOOP));

        }
        return nullptr;
    }

    byte getAnimationCount()
    {
        return 9;
    }

    const uint16_t *getConfigValues(uint8_t animationIndex)
    {
        // AVR Needs to move it to sram    
#if defined(ARDUINO_ARCH_AVR)
#define CONFIG_SIZE 8

        static uint16_t copy[CONFIG_SIZE];
        const uint16_t *flashPtr =
            (const uint16_t *)pgm_read_word_near(&CONFIGS_ARRAY[animationIndex]);

        for (uint8_t i = 0; i < CONFIG_SIZE; i++)
        {
            copy[i] = pgm_read_word_near(&flashPtr[i]);
        }
        return copy;
#else
        // Everything else can use normal accessing
        return CONFIGS_ARRAY[animationIndex];
#endif
    }
}
