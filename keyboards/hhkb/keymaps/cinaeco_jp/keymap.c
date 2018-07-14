/*
 * cinaeco's HHKB JP Layout
 */
#include QMK_KEYBOARD_H

// Layers.
#define QWER 0
#define COLE 1
#define DVOR 2
#define HHKB 3
#define UTIL 4
#define MARC 5

#define _______ KC_TRNS

enum hhkb_keycodes
{
    DYNAMIC_MACRO_RANGE = SAFE_RANGE,
};

#include "dynamic_macro.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Qwerty Layer
     *
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|     |
     * |------------------------------------------------------` Bsp|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Ent|    |
     * |-----------------------------------------------------------|
     * |Shft   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Sft| Up|Sft|
     * |-----------------------------------------------------------|
     * |HHKB|RCtl|Cmd|Alt|UTIL|  Spc |Ent|MARC|Alt|HHKB|Lft|Dwn|Rgh|
     * `-----------------------------------------------------------'
     */

    [QWER] = LAYOUT_JP(
        KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,     KC_5,   KC_6,   KC_7,     KC_8,    KC_9,     KC_0,    KC_MINS, KC_EQL,   KC_BSLS, KC_GRV,
        KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,   KC_Y,   KC_U,     KC_I,    KC_O,     KC_P,    KC_LBRC, KC_RBRC,
        KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,     KC_G,   KC_H,   KC_J,     KC_K,    KC_L,     KC_SCLN, KC_QUOT, KC_ENT,   KC_BSPC,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,   KC_N,   KC_M,     KC_COMM, KC_DOT,   KC_SLSH, KC_RSFT, KC_UP,    KC_RSFT,
        MO(HHKB), KC_RCTL, KC_LGUI, KC_LALT, MO(UTIL), KC_SPC, KC_ENT, MO(MARC), KC_RALT, MO(HHKB), KC_LEFT, KC_DOWN, KC_RGHT),

    /* Colemak Layer
     *
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  F|  P|  G|  J|  L|  U|  Y|  ;|  [|  ]|     |
     * |------------------------------------------------------` Bsp|
     * |Ctrl  |  A|  R|  S|  T|  D|  H|  N|  E|  I|  O|  '|Ent|    |
     * |-----------------------------------------------------------|
     * |Shft   |  Z|  X|  C|  V|  B|  K|  M|  ,|  .|  /|Sft| Up|Sft|
     * |-----------------------------------------------------------|
     * |HHKB|RCtl|Cmd|Alt|UTIL|  Spc |Ent|MARC|Alt|HHKB|Lft|Dwn|Rgh|
     * `-----------------------------------------------------------'
     */

    [COLE] = LAYOUT_JP(
        KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,     KC_5,   KC_6,   KC_7,     KC_8,    KC_9,     KC_0,    KC_MINS, KC_EQL,   KC_BSLS, KC_GRV,
        KC_TAB,   KC_Q,    KC_W,    KC_F,    KC_P,     KC_G,   KC_J,   KC_L,     KC_U,    KC_Y,     KC_SCLN, KC_LBRC, KC_RBRC,
        KC_LCTL,  KC_A,    KC_R,    KC_S,    KC_T,     KC_D,   KC_H,   KC_N,     KC_E,    KC_I,     KC_O,    KC_QUOT, KC_ENT,   KC_BSPC,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,   KC_K,   KC_M,     KC_COMM, KC_DOT,   KC_SLSH, KC_RSFT, KC_UP,    KC_RSFT,
        MO(HHKB), KC_RCTL, KC_LGUI, KC_LALT, MO(UTIL), KC_SPC, KC_ENT, MO(MARC), KC_RALT, MO(HHKB), KC_LEFT, KC_DOWN, KC_RGHT),

    /* Dvorak Layer
     *
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  [|  ]|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  '|  ,|  .|  P|  Y|  F|  G|  C|  R|  L|  /|  =|     |
     * |------------------------------------------------------` Bsp|
     * |Ctrl  |  A|  O|  E|  U|  I|  D|  H|  T|  N|  S|  -|Ent|    |
     * |-----------------------------------------------------------|
     * |Shft   |  ;|  Q|  J|  K|  X|  B|  M|  W|  V|  Z|Sft| Up|  \|
     * |-----------------------------------------------------------|
     * |HHKB|RCtl|Cmd|Alt|UTIL|  Spc |Ent|MARC|Alt|HHKB|Lft|Dwn|Rgh|
     * `-----------------------------------------------------------'
     */

    [DVOR] = LAYOUT_JP(
        KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,     KC_5,   KC_6,   KC_7,     KC_8,    KC_9,     KC_0,    KC_LBRC, KC_RBRC,  KC_BSLS, KC_GRV,
        KC_TAB,   KC_QUOT, KC_COMM, KC_DOT,  KC_P,     KC_Y,   KC_F,   KC_G,     KC_C,    KC_R,     KC_L,    KC_SLSH, KC_EQL,
        KC_LCTL,  KC_A,    KC_O,    KC_E,    KC_U,     KC_I,   KC_D,   KC_H,     KC_T,    KC_N,     KC_S,    KC_MINS, KC_ENT,   KC_BSPC,
        KC_LSFT,  KC_SCLN, KC_Q,    KC_J,    KC_K,     KC_X,   KC_B,   KC_M,     KC_W,    KC_V,     KC_Z,    KC_RSFT, KC_UP,    KC_RSFT,
        MO(HHKB), KC_RCTL, KC_LGUI, KC_LALT, MO(UTIL), KC_SPC, KC_ENT, MO(MARC), KC_RALT, MO(HHKB), KC_LEFT, KC_DOWN, KC_RGHT),

    /* HHKB mode (HHKB Fn)
     *
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |PLA|PRV|NXT|   |   |   |   |Psc|Slk|Pus|Up |   |     |
     * |------------------------------------------------------`    |
     * |      |VoD|VoU|Mut|Ejc|   |  *|  /|Hom|PgU|Lef|Rig|   |    |
     * |-----------------------------------------------------------|
     * |       |   |   |   |   |   |  +|  -|End|PgD|Dow|   |Sft|   |
     * |-----------------------------------------------------------|
     * |   ||   |   |   |   |         |   |   |   |   ||Del|Cmd|Ctl|
     * `-----------------------------------------------------------'
     */

    [HHKB] = LAYOUT_JP(
        KC_PWR,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,   KC_INS,  KC_DEL,
        KC_CAPS, KC_MPLY, KC_MPRV, KC_MNXT, _______, _______, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP,   _______,
        _______, KC_VOLD, KC_VOLU, KC_MUTE, KC_EJCT, _______, KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, _______,  _______,
        _______, _______, _______, _______, _______, _______, KC_PPLS, KC_PMNS, KC_END,  KC_PGDN, KC_DOWN, _______, KC_RSFT,  _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL,  KC_RGUI, KC_RCTL),

    /* Utility Layer
     *
     * ,-----------------------------------------------------------.
     * |DFU|   |   |   |   |   |   |   |   |   |   |QWE|COL|DVO|DBG|
     * |-----------------------------------------------------------|
     * |     |   |C-w|   |   |   |   |C-u|C-i|C-o|C-p|   |   |     |
     * |------------------------------------------------------`    |
     * |      |C-a|C-s|C-d|C-f|   |LEF|DOW| UP|RIG|   |   |   |    |
     * |-----------------------------------------------------------|
     * |       |C-z|C-x|C-c|C-v|C-b|C-n|   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |   ||   |   |   |   |         |   |   |   |   ||   |   |   |
     * `-----------------------------------------------------------'
     */

    [UTIL] = LAYOUT_JP(
        RESET,   _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    DF(QWER), DF(COLE), DF(DVOR), DEBUG,
        _______, _______,    LCTL(KC_W), _______,    _______,    _______,    _______,    LCTL(KC_U), LCTL(KC_I), LCTL(KC_O), LCTL(KC_P), _______,  _______,
        _______, LCTL(KC_A), LCTL(KC_S), LCTL(KC_D), LCTL(KC_F), _______,    KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    _______,    _______,  _______,  _______,
        _______, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), LCTL(KC_B), LCTL(KC_N), _______,    _______,    _______,    _______,    _______,  _______,  _______,
        _______, _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,  _______),

    /* Macro Layer
     *
     * ,-----------------------------------------------------------.
     * |  |REC1|REC2|   |   |   |   |   |   |   |   |   |   |   |   |
     * |------------------------------------------------------------|
     * |    |PLY1|PLY2|   |   |   |   |   |   |   |   |   |   |     |
     * |-------------------------------------------------------`    |
     * |       |   |   |   |   |   |   |   |   |   |   |   |   |    |
     * |------------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |------------------------------------------------------------|
     * |    ||   |   |   |   |         |   |   |   |   ||   |   |   |
     * `------------------------------------------------------------'
     */

    [MARC] = LAYOUT_JP(
        _______, DYN_REC_START1,  DYN_REC_START2,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, DYN_MACRO_PLAY1, DYN_MACRO_PLAY2, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______,         _______,         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______,         _______,         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______,         _______,         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t macro_id, uint8_t opt)
{
    return MACRO_NONE;
}

const uint16_t PROGMEM fn_actions[] = {

};

// For Dynamic Macros.
bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    uint16_t macro_kc = (keycode == MO(MARC) ? DYN_REC_STOP : keycode);

    if (!process_record_dynamic_macro(macro_kc, record)) {
      return false;
    }
    return true;
}
