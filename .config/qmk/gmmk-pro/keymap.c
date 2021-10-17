#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,           KC_MUTE,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_HOME,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_PGDN,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_END,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(1),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [1] = LAYOUT(
        RGB_TOG, KC_BRID, KC_BRIU, KC_CALC, _______, _______, KC_SLEP, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, KC_PSCR,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, RGB_VAI, RGB_HUI, RGB_SAI, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,            _______,
        _______, RGB_VAD, RGB_HUD, RGB_SAD, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,
        _______,          _______, _______, _______, _______, _______, NK_TOGG, _______, _______, _______, _______,          _______, RGB_MOD, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, RGB_SPD, RGB_RMOD, RGB_SPI
    ),

};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
      tap_code(KC_VOLU);
    } else {
      tap_code(KC_VOLD);
    }
    return true;
}

void rgb_matrix_indicators_user(void) {
    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color(3, RGB_WHITE); // CAPS LED
        rgb_matrix_set_color(67, RGB_WHITE); // Left side LED 1
        rgb_matrix_set_color(68, RGB_WHITE); // Right side LED 1
        rgb_matrix_set_color(70, RGB_WHITE); // Left side LED 2
        rgb_matrix_set_color(71, RGB_WHITE); // Right side LED 2
        rgb_matrix_set_color(73, RGB_WHITE); // Left side LED 3
        rgb_matrix_set_color(74, RGB_WHITE); // Right side LED 3
        rgb_matrix_set_color(76, RGB_WHITE); // Left side LED 4
        rgb_matrix_set_color(77, RGB_WHITE); // Right side LED 4
        rgb_matrix_set_color(80, RGB_WHITE); // Left side LED 5
        rgb_matrix_set_color(81, RGB_WHITE); // Right side LED 5
        rgb_matrix_set_color(83, RGB_WHITE); // Left side LED 6
        rgb_matrix_set_color(84, RGB_WHITE); // Right side LED 6
        rgb_matrix_set_color(87, RGB_WHITE); // Left side LED 7
        rgb_matrix_set_color(88, RGB_WHITE); // Right side LED 7
        rgb_matrix_set_color(91, RGB_WHITE); // Left side LED 8
        rgb_matrix_set_color(92, RGB_WHITE); // Right side LED 8
    }
}
