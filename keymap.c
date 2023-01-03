#include QMK_KEYBOARD_H
#include "keymap_german.h"

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

enum qmk_layers { _TRANSPARENT, _EXTRA_NEO, _NEO_QWERTZ, _EXTRA_QWERTZ, _NUMBERS, _CONTROLS };

bool transparent = true;

enum custom_keys {
  EXTRAS_BACK_TO_TRANSPARENT = SAFE_RANGE,
  BACK_TO_ALPHA,
  LET_GO_CAPS,
  EXTRAS_ENTER_BACK_TO_TRANSPARENT,
};

// void td_extras_layer(qk_tap_dance_state_t *state, void *user_data) {
//   if (state->count == 1) {
//     reset_tap_dance(state)
//   }
// };

const uint16_t PROGMEM number_combo[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM controls_combo[] = {KC_U, KC_O, COMBO_END};
const uint16_t PROGMEM enter_combo[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM esc_combo[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM tap_combo[] = {KC_W, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM layer_control_combo[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM layer_number_combo[] = {KC_E, KC_R, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  COMBO(number_combo, TO(_NUMBERS)),
  COMBO(controls_combo, TO(_CONTROLS)),
  COMBO(enter_combo, KC_ENT),
  COMBO(esc_combo, KC_ESC),
  COMBO(tap_combo, KC_TAB),
  COMBO(layer_control_combo, MO(_CONTROLS)),
  COMBO(layer_number_combo, MO(_NUMBERS)),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  /*
  LT(0, KC_P) -> p on tap, KC_LBRC (ß on neo) on hold 
  LT(0, KC_SCLN) -> ; on tap, KC_QUOT (y on neo) on hold
  LT(1, KC_Q) -> DE_SS
  LT(1, KC_D) -> DE_Y
  LT(2, DE_COLN) -> DE_AT
  */
    switch (keycode) {
        case LT(0, KC_SCLN):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_QUOT); // Intercept hold function
                return false;
            }
            return true;

        case LT(0, KC_P):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_LBRC); // Intercept hold function
                return false;
            }
            return true;

        case LT(1, KC_Q):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(DE_SS); // Intercept hold function
                return false;
            }
            return true;

        case LT(1, KC_D):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(DE_Y); // Intercept hold function
                return false;
            }
            return true;

        case LT(2, DE_COLN):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(DE_AT); // Intercept hold function
                return false;
            }
            return true;

        case RSFT_T(KC_ENT): // hold caps and layer on hold, toggle layer on tap
            if (!record->tap.count && record->event.pressed) {
                // Intercept hold function
                if (transparent) {
                  layer_on(_EXTRA_NEO);
                  register_code(KC_CAPS);
                }
                return false;
            } else if (!record->tap.count) {
              if (transparent) {
                unregister_code(KC_CAPS);
                layer_off(_EXTRA_NEO);
              }
              return false;
            } else if (record->tap.count && record->event.pressed) {
              if (transparent) {
                layer_on(_EXTRA_NEO);
                register_code(KC_CAPS);
              }
              return false;
            }

        case BACK_TO_ALPHA: // go back to transparent 
          if (record->event.pressed) {
            if (transparent)
              layer_move(_TRANSPARENT);
          }
          return false;

        case LET_GO_CAPS:
          if (record->event.pressed) {
            unregister_code(KC_CAPS);
          }
          return false;

        case EXTRAS_BACK_TO_TRANSPARENT:
          if (record->event.pressed) {
            layer_move(_TRANSPARENT);
            unregister_code(KC_CAPS);
          }
          return false;

        case EXTRAS_ENTER_BACK_TO_TRANSPARENT:
          if (record->event.pressed) {
            layer_move(_TRANSPARENT);
            unregister_code(KC_CAPS);
            SEND_STRING(SS_DOWN(X_ENT) SS_DELAY(100) SS_UP(X_ENT));
          }
          return false;

    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_TRANSPARENT] = LAYOUT_split_3x5_2(
      KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, LT(0, KC_P),
      KC_A, LALT_T(KC_S), LCTL_T(KC_D), KC_F, KC_G, KC_H, KC_J, LCTL_T(KC_K), LALT_T(KC_L), LT(0, KC_SCLN),
      LGUI_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,

      KC_BSPC, KC_LSFT, KC_SPC, RSFT_T(KC_ENT)),

    [_EXTRA_NEO] = LAYOUT_split_3x5_2(
      QK_BOOTLOADER, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
      KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, LT(0, KC_SCLN),
      KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,

      KC_BSPC, EXTRAS_BACK_TO_TRANSPARENT, KC_SPC, EXTRAS_ENTER_BACK_TO_TRANSPARENT),

    [_NEO_QWERTZ] = LAYOUT_split_3x5_2(
      KC_X, KC_V, KC_L, KC_C, KC_W, KC_K, KC_H, KC_G, KC_F, LT(1, KC_Q),
      KC_U, LALT_T(KC_I), LCTL_T(KC_A), KC_E, KC_O, KC_S, KC_N, LCTL_T(KC_R), LALT_T(KC_T), LT(1, KC_D),
      LGUI_T(DE_UDIA), DE_ODIA, DE_ADIA, KC_P, DE_Z, KC_B, KC_M, KC_COMM, KC_DOT, KC_J,

      LT(2, KC_BSPC), KC_LSFT, LT(1, KC_SPC), RSFT_T(KC_ENT)),

    [_EXTRA_QWERTZ] = LAYOUT_split_3x5_2(
      _______, S(DE_MINS), DE_LBRC, DE_RBRC, KC_GRV, DE_EXLM, DE_LABK, DE_RABK, DE_EQL, DE_AMPR,
      DE_BSLS, DE_SLSH, DE_LCBR, DE_RCBR, DE_ASTR, DE_QUES, DE_LPRN, DE_RPRN, DE_MINS, LT(2, DE_COLN),
      DE_HASH, DE_DLR, DE_PIPE, DE_TILD, DE_GRV, DE_PLUS, DE_PERC, DE_DQUO, DE_QUOT, DE_SCLN,

      LT(2, KC_BSPC), KC_LSFT, LT(1, KC_SPC), RSFT_T(KC_ENT)),

    [_NUMBERS] = LAYOUT_split_3x5_2(
      KC_GRV, KC_NO, C(KC_PAGE_UP), C(KC_PAGE_DOWN), KC_NO, TO(_CONTROLS), KC_7, KC_8, KC_9, KC_LBRC,
      KC_NO, KC_NO, KC_PPLS, KC_PMNS, KC_ENT, KC_COMM, KC_4, KC_5, KC_6, KC_RBRC,
      KC_NO, KC_NO, KC_PAST, KC_PSLS, KC_NO, KC_DOT, KC_1, KC_2, KC_3, KC_NO,

      KC_BSPC, BACK_TO_ALPHA, KC_LSFT, KC_0),

    [_CONTROLS] = LAYOUT_split_3x5_2(
      KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
      KC_F11, KC_LALT, KC_LCTL, KC_ESC, KC_TAB, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_F12,
      KC_MUTE, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, TO(_NUMBERS), KC_HOME, KC_DEL, KC_END, KC_PRINT_SCREEN,

      KC_BSPC, BACK_TO_ALPHA, KC_LSFT, KC_ENT),
};
