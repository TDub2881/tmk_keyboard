#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
		/* 1     2    3    4    5    6    7    8    9   10   11   12    13    14    15    16
   KEYMAP(ESC,  ESC,  1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS, EQL,  BSPC, BSPC, \
           TAB, TAB,  Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC, RBRC, BSLS, GRV,  \
           LCTL,LCTL, A,   S,   D,   F,   G,   H,   J,   K,   L, SCLN,  QUOT, ENT,  ENT,  ENT,  \
           LSFT,LSFT, Z,   X,   C,   V,   B,   N,   M, COMM, DOT,SLSH,  RSFT, RSFT, FN0,  FN0,  \
           LCTL,LCTL,LALT,LALT,FN1,FN1, SPC, SPC, SPC,  SPC, FN1,FN1,KC_RGUI,KC_RGUI,RCTL,RCTL, \
		   LCTL,LCTL,LALT,LALT,FN1,FN1,LSFT,LSFT,RSFT, RSFT, FN1,FN1,KC_RGUI,KC_RGUI,RCTL,RCTL),\
		   
};
const uint16_t PROGMEM fn_actions[] = {
    /* Poker Layout */
    [0] = ACTION_LAYER_MOMENTARY(6),  // to Fn overlay
    [1] = ACTION_LAYER_TOGGLE(4),     // toggle arrow overlay
    [2] = ACTION_LAYER_TOGGLE(5),     // toggle Esc overlay
    [3] = ACTION_MODS_KEY(MOD_RCTL|MOD_RSFT, KC_ESC), // Task(RControl,RShift+Esc)
    [4] = ACTION_LAYER_MOMENTARY(7),  // to Layout selector
    [5] = ACTION_DEFAULT_LAYER_SET(0),  // set qwerty layout
    [6] = ACTION_DEFAULT_LAYER_SET(1),  // set colemak layout
    [7] = ACTION_DEFAULT_LAYER_SET(2),  // set dvorak layout
    [8] = ACTION_DEFAULT_LAYER_SET(3),  // set workman layout
};
