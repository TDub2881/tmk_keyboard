#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
KEYMAP( ESC,     Q,   W,    E,   R,   T,   Y,   U,   I,     O,     P, BSPC,  \
        FN0,     A,   S,    D,   F,   G,   H,   J,   K,     L,  SCLN, QUOT,  \
        FN1,     Z,   X,    C,   V,   B,   N,   M, COMM,  DOT,  SLSH,  ENT,  \
        LCTL, LALT, FN2, LSFT, TAB,    SPC,   FN1, RALT, RGUI, RCTRL, RSFT), \
/* 1: FN 1 */
KEYMAP(   1,    2,    3,    4,    5,    6,    7,    8,    9,    0, MINS,  EQL,  \
       TRNS, HOME,   UP,  END, PGUP, TRNS, TRNS, TRNS, TRNS, LBRC, RBRC,  DEL,  \
       TRNS, LEFT, DOWN, RGHT, PGDN, TRNS, TRNS, TRNS, TRNS, BSLS,  GRV,  INS,  \
       TRNS, TRNS, TRNS, TRNS, TRNS,     LGUI,   TRNS, TRNS, TRNS, TRNS, TRNS), \
/* 2: FN 2 */
KEYMAP(  F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10,  F11,  F12,  \
       TRNS, HOME,   UP,  END, PGUP, TRNS, MPLY, MSEL, MUTE, VOLU, VOLD, TRNS,  \
       TRNS, LEFT, DOWN, RGHT, PGDN, MPRV, MSTP, MNXT, MAIL, CALC, MYCM, TRNS,  \
       TRNS, TRNS, TRNS, TRNS, TRNS,     MENU,   TRNS, TRNS, TRNS, TRNS, TRNS), \
/* 3: FN 3 */
KEYMAP(TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,   P7,   P8,   P9, PPLS,  \
       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,   P4,   P5,   P6, PMNS,  \
       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,   P7,   P7,   P7,  ENT,  \
       TRNS, TRNS, TRNS, TRNS, TRNS,     TRNS,   TRNS,   P0, PDOT, PAST, PSLS), \
};



const uint16_t PROGMEM fn_actions[] = {
	[0] = ACTION_LAYER_MOMENTARY(1),
	[1] = ACTION_LAYER_MOMENTARY(2),
	[2] = ACTION_LAYER_TOGGLE(3),
};