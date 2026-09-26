// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */

    [0] = LAYOUT(
        LT(1,KC_SPC),  MT(KC_LALT,KC_INT5),   KC_Q,   KC_U,  KC_X ,KC_V,
        MT(KC_LSFT,KC_ESC),  KC_I,   KC_E,   KC_A, KC_O,  KC_L,
        KC_J,   KC_Y,KC_W,KC_COMM, KC_DOT, MT(KC_LCTL,KC_ENT),

        KC_P,   KC_F, KC_R, KC_C, MT(KC_RALT,KC_INT4), LT(2,KC_BSPC),
        KC_K,   KC_T, KC_N, KC_S,KC_H,   MT(KC_RSFT,KC_DEL),
        MT(KC_RCTL,KC_TAB),   KC_D, KC_M, KC_G,KC_Z,   KC_B
    ),
    [1] = LAYOUT(
        KC_BSLS,   KC_SLSH,   KC_LBRC,   KC_RBRC,  KC_MINS ,KC_SCLN,
        MT(KC_LSFT,KC_ESC), KC_QUOT,   KC_LEFT,   KC_UP, KC_RIGHT, KC_GRV,
        LT(1,KC_SPC), MT(KC_LALT,KC_END), KC_LWIN, KC_DOWN, KC_PGDN, MT(KC_LCTL,KC_ENT),

        KC_1, KC_2, KC_3, KC_4, KC_5, KC_PSCR,
        KC_6, KC_7, KC_8, KC_9, KC_0, MT(KC_RSFT,KC_DEL),
        MT(KC_RCTL,KC_TAB), KC_PGUP, KC_EQL, KC_RWIN, MT(KC_RALT,KC_HOME), LT(2,KC_BSPC)
    ),
    [2] = LAYOUT(
        UG_TOGG, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,
        MT(KC_LSFT,KC_ESC),   KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
        LT(1,KC_SPC), MT(KC_LALT,MS_BTN5), KC_F11, KC_F12, KC_F13, MT(KC_LCTL,KC_ENT),
        KC_F14,  KC_F15, KC_F16, KC_F17, KC_F18, KC_F19,
        KC_F20,  MS_BTN1, MS_BTN2, MS_BTN3, KC_F24, MT(KC_RSFT,KC_DEL),
        MT(KC_RCTL,KC_TAB), KC_F21, KC_F22, KC_F23, MT(KC_RALT,MS_BTN4), LT(2,KC_BSPC)
    ),
    [3] = LAYOUT(
        KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        MT(KC_LSFT,KC_ESC),   KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        LT(1,KC_SPC), MT(KC_LALT,MS_BTN5),KC_TRNS,KC_TRNS,KC_TRNS,MT(KC_LCTL,KC_ENT),
        KC_TRNS,  KC_TRNS,KC_TRNS,KC_F15,KC_TRNS,KC_TRNS,
        KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,MT(KC_RSFT,KC_DEL),
        MT(KC_RCTL,KC_TAB),  KC_TRNS,KC_TRNS,KC_TRNS, MT(KC_RALT,MS_BTN4),LT(2,KC_BSPC)
    ),
    [4] = LAYOUT(
        KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        MT(KC_LSFT,KC_ESC),   KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        LT(1,KC_SPC), MT(KC_LALT,MS_BTN5),KC_TRNS,KC_TRNS,KC_TRNS,MT(KC_LCTL,KC_ENT),
        KC_TRNS,  KC_TRNS,KC_TRNS,KC_F15,KC_TRNS,KC_TRNS,
        KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,MT(KC_RSFT,KC_DEL),
        MT(KC_RCTL,KC_TAB),  KC_TRNS,KC_TRNS,KC_TRNS, MT(KC_RALT,MS_BTN4),LT(2,KC_BSPC)
    ),
    [5] = LAYOUT(
        KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        MT(KC_LSFT,KC_ESC),   KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        LT(1,KC_SPC), MT(KC_LALT,MS_BTN5),KC_TRNS,KC_TRNS,KC_TRNS,MT(KC_LCTL,KC_ENT),
        KC_TRNS,  KC_TRNS,KC_TRNS,KC_F15,KC_TRNS,KC_TRNS,
        KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,MT(KC_RSFT,KC_DEL),
        MT(KC_RCTL,KC_TAB),  KC_TRNS,KC_TRNS,KC_TRNS, MT(KC_RALT,MS_BTN4),LT(2,KC_BSPC)
    ),
    [6] = LAYOUT(
        KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        MT(KC_LSFT,KC_ESC),   KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        LT(1,KC_SPC), MT(KC_LALT,MS_BTN5),KC_TRNS,KC_TRNS,KC_TRNS,MT(KC_LCTL,KC_ENT),
        KC_TRNS,  KC_TRNS,KC_TRNS,KC_F15,KC_TRNS,KC_TRNS,
        KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,MT(KC_RSFT,KC_DEL),
        MT(KC_RCTL,KC_TAB),  KC_TRNS,KC_TRNS,KC_TRNS, MT(KC_RALT,MS_BTN4),LT(2,KC_BSPC)
    ),
    [7] = LAYOUT(
        KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        MT(KC_LSFT,KC_ESC),   KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        LT(1,KC_SPC), MT(KC_LALT,MS_BTN5),KC_TRNS,KC_TRNS,KC_TRNS,MT(KC_LCTL,KC_ENT),
        KC_TRNS,  KC_TRNS,KC_TRNS,KC_F15,KC_TRNS,KC_TRNS,
        KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,MT(KC_RSFT,KC_DEL),
        MT(KC_RCTL,KC_TAB),  KC_TRNS,KC_TRNS,KC_TRNS, MT(KC_RALT,MS_BTN4),LT(2,KC_BSPC)
    ),
    
};
// AZ1UBALL
void pointing_device_init_kb(void) {
    uint8_t addr=(0x0a << 1 );// ic2 address with 1bit shift up 
    //uint8_t data[]={0x90, 0x00};// AZ1UBALL normal speed mode
    uint8_t data[]={0x91, 0x00};      // AZ1UBALL accellaration mode
    uint16_t timeout=100;         // in milli-seconds
    i2c_status_t status;
    status  = i2c_transmit (addr, data, 1, timeout);
    //if (status != I2C_STATUS_SCCESS) {
    if (status != 0) {
        return;
    }
}
void set_layer_rgb(layer_state_t state) {
    int layer = get_highest_layer(state);

    for (int i = 0; i < 3; i++) {
        if (((layer) >> i) & 1) {
            rgblight_setrgb_at(0, 0, 4, i);
        } else 
            rgblight_setrgb_at(0, 2, 3, i); 
        
    }
    for (int i = 0; i < 3; i++) {
        if (((layer ) >> i) & 1) {
            rgblight_setrgb_at(0, 0, 4, i+4);
        } else 
            rgblight_setrgb_at(0, 2, 3, i+4); 
        
    }
}
layer_state_t layer_state_set_user(layer_state_t state) {
    set_layer_rgb(state);
    return state;
}
void keyboard_post_init_user(void) {
    rgblight_enable();
    rgblight_setrgb(3, 1,4);
    //rgblight_setrgb_at(0, 0, 255, 4);
    //rgblight_setrgb_at(0, 255, 255, 5);
    //rgblight_setrgb_at(255, 0, 255, 6);
    //rgblight_setrgb_at(255, 255, 0, 7);
}