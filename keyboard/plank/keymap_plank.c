#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
KEYMAP( ESC,     Q,   W,    E,   R,   T,   Y,   U,   I,     O,     P, BSPC,  \
        FN0,     A,   S,    D,   F,   G,   H,   J,   K,     L,  SCLN,  FN0,  \
        LSFT, SLSH,   Z,   X,    C,   V,   B,   N,   M,  COMM,  DOT,  RSFT,  \
        LCTL, MENU,LALT, FN1, TAB,    SPC,    ENT, FN1,   DEL, RGUI, RCTRL), \
/* 1: FN 0 / layer 1 */
KEYMAP(TRNS, HOME,   UP,  END, PGUP,  GRV, QUOT, MINS,  EQL, LBRC, RBRC, TRNS,  \
       TRNS, LEFT, DOWN, RGHT, PGDN, BSLS, SLSH,  FN4,  FN5, FN2,   FN3, TRNS,  \
       LSFT,    1,    2,    3,    4,    5,    6,    7,    8,    9,    0, RSFT,  \
       TRNS, TRNS, TRNS, TRNS, TRNS,     TRNS,   TRNS,  FN6, TRNS, TRNS, TRNS), \
/* 2: FN 1 / layer 2 */
KEYMAP(TRNS, MPRV, MPLY, MSTP, MNXT, VOLU, TRNS, FN10, TRNS, FN9, TRNS, TRNS,  \
       TRNS,  FN7,  FN8, MRWD, MFFD, MUTE, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  \
       TRNS, TRNS, TRNS, TRNS, TRNS, VOLD, TRNS, TRNS, MAIL, CALC, MYCM, TRNS,  \
       TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS,   FN11, TRNS, TRNS, TRNS, TRNS), \
/* 3: FN 6 / layer 3 */
KEYMAP(TRNS,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10, TRNS,  \
       TRNS,  F11,  F12,  F13,  F14,  F15,  F16,  F17,  F18,  F19,  F20, TRNS,  \
       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  \
       TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS,   TRNS, TRNS, TRNS, TRNS, TRNS), \
/* 3: FN 11 / layer 4 */
KEYMAP(TRNS, NLCK, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PSCR, TRNS,  \
       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  \
       TRNS,  INS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  \
       TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS,   TRNS, TRNS, TRNS, TRNS, TRNS), \
};

enum macro_id {
  AE,
  SS,
  OE,
  UE,
};


const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  keyevent_t event = record->event;
# define MODS_SFT_MASK (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))


  static uint8_t shifted;
  shifted = get_mods()&MODS_SFT_MASK;
  switch(id) {
    case AE:
      if (!event.pressed)
        return MACRO( END );
      else
        if (shifted)
          return MACRO( D(ALT), T(P0), T(P2), T(P2), T(P8), U(ALT) )
        else
          return MACRO( D(ALT), T(P0), T(P1), T(P9), T(P6), U(ALT) )
    case SS:
      if (!event.pressed)
        return MACRO( END );
      else
        return MACRO( D(ALT), T(P0), T(P2), T(P2), T(P3), U(ALT) )
    case OE:
      if (!event.pressed)
        return MACRO( END );
      else
        if (shifted)
          return MACRO( D(ALT), T(P0), T(P2), T(P1), T(P4), U(ALT) )
        else
          return MACRO( D(ALT), T(P0), T(P2), T(P4), T(P6), U(ALT) )
    case UE:
      if (!event.pressed)
        return MACRO( END );
      else
        if (shifted)
          return MACRO( D(ALT), T(P0), T(P2), T(P2), T(P0), U(ALT) )
        else
          return MACRO( D(ALT), T(P0), T(P2), T(P5), T(P2), U(ALT) )
  }
  return MACRO_NONE;
}

const uint16_t PROGMEM fn_actions[] = {
	[0] = ACTION_LAYER_MOMENTARY(1),
	[1] = ACTION_LAYER_MOMENTARY(2),
	[2] = ACTION_MODS_KEY(MOD_LSFT, LBRC),
  [3] = ACTION_MODS_KEY(MOD_LSFT, RBRC),
	[4] = ACTION_MODS_KEY(MOD_LSFT, 9),
  [5] = ACTION_MODS_KEY(MOD_LSFT, 0),
	[6] = ACTION_LAYER_MOMENTARY(3),
  [7] = ACTION_MACRO(AE),/* ae AE */
  [8] = ACTION_MACRO(SS),/* ss */
  [9] = ACTION_MACRO(OE),/* oe OE */
  [10] = ACTION(UE),/* ue UE */
};
