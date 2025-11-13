// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT( 
		KC_SPACE,	KC_L,	KC_U,	KC_Y,
					KC_O,	KC_J, KC_K,	
		KC_E,		KC_F,	KC_N,	KC_M,
		KC_Q,		KC_T,	KC_P			
	)	
};