// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT( 
		KC_P0,	KC_P1,	KC_P2,	KC_P3,	KC_P4,	KC_P5,	KC_P6 )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][5][2] = {
	[0] = { 
ENCODER_CCW_CW(KC_F13, KC_F14),	ENCODER_CCW_CW(KC_F15, KC_F16),	ENCODER_CCW_CW(KC_F17, KC_F18),	ENCODER_CCW_CW(KC_F19, KC_F20),	ENCODER_CCW_CW(KC_F21, KC_F22)	},
};
#endif