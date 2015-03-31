#include "keymap_common.h"

// Poker fix with toggle and bit operation
// Fn + Esc = `
// Fn + {left, down, up, right}  = {home, pgdown, pgup, end}
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP_ANSI(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS, EQL,BSPC,      \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, APP, \
        FN0, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,      ENT,RGUI, \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,    RSFT,   UP, FN1, \
        LCTL,LALT,FN1,          SPC,                      FN0, RCTL,LEFT,DOWN,RGHT),
    /* 4: Poker Default + Fn'd */
    KEYMAP_ANSI(
        DEL,   F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,TRNS,     \
        CAPS,HOME,  UP, END,PGUP,TRNS,TRNS,TRNS,TRNS,MSEL,MPLY,MUTE,VOLU,VOLD,CALC,\
        TRNS,LEFT,DOWN,RGHT,PGDN,TRNS,TRNS,TRNS,TRNS,MPRV,MSTP,MNXT,     TRNS,PSCR,\
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,TRNS,\
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS,TRNS),
    /* 5: Poker with Arrow */
    KEYMAP_ANSI(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,\
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS,TRNS),
};
const uint16_t PROGMEM fn_actions[] = {
    /* Poker Layout */
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_MOMENTARY(2),
};
