#include "quantum.h"
#include "rgb_matrix_types.h"

#if defined(RGB_ENCODER_LEFT)
#endif
#if defined(RGB_ENCODER_RIGHT)
#endif

#if defined(RGB_MATRIX_ENABLE)
    led_config_t g_led_config = { {
       { 0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12 },
       { 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 0  },
       { 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 0  },
       { 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 },
       { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 0  }
    }, {
#if defined(RGB_ENCODER_LEFT)
    {0, 0},
#endif
#if defined(RGB_ENCODER_RIGHT)
    {228, 0},
#endif
        {0, 0}, {19, 0}, {38, 0}, {57, 0}, {76, 0}, {95, 0}, {114, 0}, {133, 0}, {152, 0}, {171, 0}, {190, 0}, {209, 0}, {228, 0} ,
        {0, 13}, {19, 13}, {38, 13}, {57, 13}, {76, 13}, {95, 13}, {114, 13}, {133, 13}, {152, 13}, {171, 13}, {190, 13}, {209, 13},
        {0, 26}, {19, 26}, {38, 26}, {57, 26}, {76, 26}, {95, 26}, {114, 26}, {133, 26}, {152, 26}, {171, 26}, {190, 26}, {209, 26},
        {0, 38}, {19, 38}, {38, 38}, {57, 38}, {76, 38}, {95, 38}, {114, 38}, {133, 38}, {152, 38}, {171, 38}, {190, 38}, {209, 38}, {228, 38} ,
        {0, 51}, {19, 51}, {38, 51}, {57, 51}, {76, 51}, {95, 51}, {114, 51}, {133, 51}, {152, 51}, {171, 51}, {190, 51}, {209, 51},
    }, {
#if defined(RGB_ENCODER_LEFT)
    0,
#endif
#if defined(RGB_ENCODER_RIGHT)
    0,
#endif
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
    } };
#endif
