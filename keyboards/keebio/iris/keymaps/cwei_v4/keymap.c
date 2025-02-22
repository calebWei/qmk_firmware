#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_PSCR, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, RSFT_T(KC_QUOT), KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_UP, KC_DOWN, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RCTL, LALT_T(KC_LGUI), MO(1), KC_SPC, KC_ENT, MO(2), KC_RALT),
        [1] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ESC, KC_LBRC, KC_LPRN, KC_RPRN, KC_RBRC, KC_PIPE, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_PLUS, KC_BSPC, KC_LSFT, KC_DQUO, KC_LCBR, KC_RCBR, KC_QUOT, KC_AMPR, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_PMNS, RSFT_T(KC_ENT), KC_LCTL, KC_EXLM, KC_LT, KC_GT, KC_QUES, KC_CIRC, TO(3), KC_BSLS, KC_AT, KC_HASH, KC_DLR, KC_P3, KC_PERC, KC_RCTL, KC_GRV, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UNDS),
        [2] = LAYOUT(RGB_VAI, BL_STEP, BL_BRTG, BL_UP, BL_DOWN, BL_TOGG, RGB_TOG, RGB_MOD, RGB_RMOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_VAD, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, RGB_SAD, RGB_SPI, KC_P1, KC_P2, KC_P3, KC_P4, KC_P5, KC_P6, KC_P7, KC_P8, KC_P9, KC_P0, KC_RSFT, RGB_SPD, KC_VOLD, KC_VOLU, KC_PAUS, KC_NUM, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F11, KC_F12, KC_RCTL, KC_TRNS, KC_TRNS, KC_LALT, KC_RALT, KC_TRNS, KC_TRNS),
        [3] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN3, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_ACL2, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(0), KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)