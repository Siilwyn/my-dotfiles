#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_moonlander(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_NO,            KC_NO,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    MO(2),            KC_NO,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    MO(1),            KC_DEL,  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, KC_NO,   KC_NO,   KC_LEFT, KC_RIGHT,         KC_NO,            KC_LALT,          KC_UP,   KC_DOWN, KC_LBRC, KC_RBRC, KC_EQL,
                                            KC_SPC,  KC_BSPC, KC_LGUI,          KC_LCTL, KC_TAB,  KC_ENT
    ),

    [1] = LAYOUT_moonlander(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______,           _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
        _______, RGB_VAI, RGB_HUI, RGB_SAI, _______, _______, _______,           _______, _______, _______, _______, _______, _______, QK_BOOT,
        RGB_TOG, RGB_VAD, RGB_HUD, RGB_SAD, _______, _______, KC_TRNS,           KC_PSCR, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                             _______, _______, _______, _______, _______, _______,
        _______, _______, _______, RGB_SPD, RGB_SPI,          _______,           _______,          RGB_MOD, RGB_RMOD,_______, _______, _______,
                                            _______, _______, _______,           _______, _______, _______
    ),

    [2] = LAYOUT_moonlander(
        _______, KC_BRID, KC_BRIU, KC_CALC, _______, _______, _______,           _______, KC_SLEP, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, _______,
        _______, _______, _______, _______, _______, _______, KC_TRNS,           _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,           _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                             _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,          _______,           _______,          _______, _______, _______, _______, _______,
                                            _______, _______, _______,           _______, _______, _______
    ),

};

