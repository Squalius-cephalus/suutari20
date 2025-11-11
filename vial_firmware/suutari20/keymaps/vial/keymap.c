// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
     * │ 1 │ │ 1 │ │ 1 │ │ 1 │ │ 1 │ │ 1 │
     * ├───┤ ├───┤ ├───┤ ├───┤ ├───┤ ├───┤    ┌───┐
     * │   │ │   │ │   │ │   │ │   │ │   │    │   │ Bottom Row Left
     * ├───┤ ├───┤ ├───┤ ├───┤ ├───┤ ├───┤    ├───┤
     * │   │ │   │ │   │ │   │ │   │ │   │    │   │ Bottom Row Right
     * └───┘ └───┘ └───┘ └───┘ └───┘ └───┘    └───┘
     */
    [0] = LAYOUT(
        KC_1,      KC_2,      KC_3,      KC_4,    KC_5,      KC_6,      KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS
    )
};


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  }
};
#endif
