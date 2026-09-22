// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define SPLIT_HAND_PIN GP12

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
        KC_X,   KC_Y,   KC_Q,   KC_U,  KC_L ,KC_J,
        MT(KC_LSFT,KC_ESC),  KC_I,   KC_E,   KC_A, KC_O, KC_COMM,
        MT(KC_LCTL,KC_SPC),  MT(KC_LALT,KC_INT5), KC_W, KC_V, KC_DOT, LT(1,KC_ENT),

        KC_Z,   KC_C, KC_R, KC_F,KC_B,   KC_P,
        KC_K,   KC_T, KC_N, KC_S,KC_H,   MT(KC_RSFT,KC_PSCR),
        LT(2,KC_TAB),   KC_D, KC_M, KC_G, MT(KC_RALT,KC_INT4), MT(KC_RCTL,KC_BSPC)
    ),
    [1] = LAYOUT(
        KC_BSLS,   KC_SLSH,   KC_LBRC,   KC_RBRC,  KC_MINS ,KC_SCLN,
        MT(KC_LSFT,KC_ESC), KC_QUOT,   KC_LEFT,   KC_UP, KC_RIGHT, KC_GRV,
        MT(KC_LCTL,KC_SPC), MT(KC_LALT,KC_END), KC_LWIN, KC_DOWN, KC_PGDN, LT(1,KC_ENT),

        KC_1, KC_2, KC_3, KC_4, KC_5, KC_PSCR,
        KC_6, KC_7, KC_8, KC_9, KC_0, MT(KC_RSFT,KC_DEL),
        LT(2,KC_TAB), KC_PGUP, KC_EQL, KC_RWIN, MT(KC_RALT,KC_HOME), MT(KC_RCTL,KC_BSPC)
    ),
    [2] = LAYOUT(
        UG_TOGG, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,
        MT(KC_LSFT,KC_ESC),   KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
        MT(KC_LCTL,KC_SPC), MT(KC_LALT,MS_BTN5), KC_F11, KC_F12, KC_F13, LT(1,KC_ENT),
        KC_F14,  KC_F15, KC_F16, KC_F17, KC_F18, KC_F19,
        KC_F20,  MS_BTN1, MS_BTN2, MS_BTN3, KC_F24, MT(KC_RSFT,KC_DEL),
        LT(2,KC_TAB), KC_F21, KC_F22, KC_F23, MT(KC_RALT,MS_BTN4), MT(KC_RCTL,KC_BSPC)
    ),
    [3] = LAYOUT(
        KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        MT(KC_LSFT,KC_ESC),   KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        MT(KC_LCTL,KC_SPC), MT(KC_LALT,MS_BTN5),KC_TRNS,KC_TRNS,KC_TRNS,LT(1,KC_ENT),
        KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,MT(KC_RSFT,KC_DEL),
        LT(2,KC_TAB),  KC_TRNS,KC_TRNS,KC_TRNS, MT(KC_RALT,MS_BTN4), MT(KC_RCTL,KC_BSPC)
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
