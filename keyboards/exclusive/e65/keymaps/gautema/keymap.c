#include QMK_KEYBOARD_H

/*
 * ,---------------------------------------------------------------------|
 * |`  |1  |2  |3  |4  |5  |6  |7  |8  |9  |0   |-   |=  | |\ | `~ | HOME |
 * |---------------------------------------------------------------------|
 * |Tab  |Q  |W  |E  |R  |T  |Y  |U  |I  |O  |P  |[  | ]  |   BS     |Del|
 * |---------------------------------------------------------------------|
 * |Ctrl  |A  |S  |D  |F  |G  |H  |J  |K  |L  |;  |'  |  Enter     | PgUP|
 * |---------------------------------------------------------------------|
 * |Shft    |Z  |X  |C  |V  |B  |N  |M  |,  |.  |/  |Shift       |Up|PgDn|
 * |---------------------------------------------------------------------|
 * |Ctrl|Alt |Gui |     Space                    |Alt |Fn  |  Lt |Dn |Rt |
 * `---------------------------------------------------------------------|'
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_65_ansi_blocker_splitbs(
        KC_GESC, KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0, KC_MINS, KC_EQL,  KC_BSLS, KC_GRV, KC_HOME,
        KC_TAB,  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,  KC_P, KC_LBRC, KC_RBRC, KC_BSPC, KC_DEL,
        MO(1),   KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,  KC_SCLN,  KC_QUOT,        KC_ENT, KC_PGUP,
        KC_LSFT, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M, KC_COMM, KC_DOT,KC_SLSH,        KC_RSFT, KC_UP,  KC_PGDN,
        KC_LCTL, KC_LALT, KC_LGUI,                  KC_SPC,                      KC_RALT, MO(1), KC_LEFT, KC_DOWN, KC_RGHT),

    [1] = LAYOUT_65_ansi_blocker_splitbs(
        KC_GRV,  KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,  KC_F9, KC_F10, KC_F11, KC_F12, _______, _______, KC_VOLU,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL, KC_VOLD,
        _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, _______, KC_HOME,
        _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGUP,KC_END,
        _______, _______, _______,                  _______,                             MO(2),   MO(1), KC_HOME, KC_PGDN, KC_END),

    [2] = LAYOUT_65_ansi_blocker_splitbs(
        _______,  _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, RESET,
        BL_TOGG, BL_DEC, BL_INC, BL_STEP, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_VAI,_______,
        _______, _______, _______,                  _______,                             MO(2),   MO(1), RGB_SAI, RGB_VAD, RGB_SAD),
};
