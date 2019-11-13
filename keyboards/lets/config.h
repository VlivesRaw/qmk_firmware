#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x3060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Vlad
#define PRODUCT         Split Atreus
#define DESCRIPTION     A split Atreus keyboard

#define USE_SERIAL
#define EE_HANDS

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS { B1, B3, B2, B6 }
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }
#define SOFT_SERIAL_PIN D0

/* Set 0 if debouncing isn't needed */
// #define DEBOUNCE 0

