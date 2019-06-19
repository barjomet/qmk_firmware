#include QMK_KEYBOARD_H

enum custom_keycodes {
	DS_3 = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_60_hhkb(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_TILD, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, TG(2), KC_LGUI, KC_LALT, LT(1,KC_SPC), KC_RALT, KC_RGUI),
	[1] = LAYOUT_60_hhkb(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_TRNS, KC_CAPS, KC_TRNS, KC_TRNS, KC_ESC, KC_SLCK, KC_NLCK, KC_TRNS, KC_TRNS, KC_INS, KC_PSCR, KC_PAUS, KC_BSPC, KC_DEL, KC_DEL, KC_TRNS, KC_VOLD, KC_MUTE, KC_VOLU, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_CAPS, LSFT(KC_RSFT), KC_TRNS, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, MO(2), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_60_hhkb(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_TRNS, KC_TRNS, KC_TAB, KC_Q, KC_W, KC_ESC, KC_R, KC_T, KC_Y, KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, KC_BTN5, KC_TRNS, KC_BSPC, KC_TRNS, KC_ACL0, KC_ACL1, KC_ACL2, KC_F, KC_G, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_SCLN, KC_QUOT, KC_TRNS, KC_TRNS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, MO(2), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LT(3,KC_SPC), KC_TRNS, KC_TRNS),
	[3] = LAYOUT_60_hhkb(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_TRNS, KC_CAPS, KC_TRNS, KC_TRNS, KC_ESC, KC_SLCK, KC_NLCK, KC_TRNS, KC_TRNS, KC_INS, KC_PSCR, KC_PAUS, KC_BSPC, KC_DEL, KC_DEL, KC_TRNS, KC_VOLD, KC_MUTE, KC_VOLU, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_CAPS, LSFT(KC_RSFT), KC_TRNS, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, DS_3, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case DS_3:
      if (record->event.pressed) {
        layer_off(3);
      }
      break;

  }
  return true;
};