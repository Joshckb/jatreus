// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

#define ___ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P    ,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN ,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH ,
    KC_ESC,  KC_TAB,  KC_LGUI, KC_LSFT, KC_BSPC, KC_LCTL, KC_LALT, KC_SPC,  KC_DEL,  KC_MINS, KC_QUOT, KC_ENT
  ),

  
  [1] = LAYOUT(
    ___, ___, ___, ___, ___,           ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___,           ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___,           ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___
  ),


  [2] = LAYOUT(
    ___, ___, ___, ___, ___,           ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___,           ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___,           ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___
  ),


  [3] = LAYOUT( 
    ___, ___, ___, ___, ___,           ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___,           ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___,           ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___
  ),
};
