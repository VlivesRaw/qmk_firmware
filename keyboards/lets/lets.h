#pragma once

#include "quantum.h"

#define LAYOUT( \
	L00, L01, L02, L03, L04,           R01, R02, R03, R04, R05, \
	L10, L11, L12, L13, L14,           R11, R12, R13, R14, R15, \
	L20, L21, L22, L23, L24,           R21, R22, R23, R24, R25, \
	L30, L31, L32, L33, L34, L35, R30, R31, R32, R33, R34, R35 \
	) \
	{ \
		{ L00, L01, L02, L03, L04, KC_NO }, \
		{ L10, L11, L12, L13, L14, KC_NO }, \
		{ L20, L21, L22, L23, L24, KC_NO }, \
		{ L30, L31, L32, L33, L34, L35 }, \
		{ R05, R04, R03, R02, R01, KC_NO }, \
		{ R15, R14, R13, R12, R11, KC_NO }, \
		{ R25, R24, R23, R22, R21, KC_NO }, \
		{ R35, R34, R33, R32, R31, R30 } \
	}
