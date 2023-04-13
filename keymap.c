#include QMK_KEYBOARD_H
#include "rgb_matrix.h"
#include "keymap_german.h"

enum layer_names {
  _BASE,
  _NUMBERS,
  _CONTROL,
  _RGB,
  _NEO,
  _NEO_EXTRA,
  _LEAGUE
};

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

// rgb_matrix_disable();

led_config_t g_led_config = {{
                                 // Key Matrix to LED Index
                                 {4, 3, 2, 1, 0},
                                 {9, 8, 7, 6, 5},
                                 {14, 13, 12, 11, 10},
                                 {16, 15},
                                 {17, 18, 19, 20, 21},
                                 {22, 23, 24, 25, 26},
                                 {27, 28, 29, 30, 31},
                                 {32, 33},
                             },
                             {
                                 // LED Index to Physical Position
                                 {0, 15}, {20, 5}, {41, 0}, {61, 4}, {81, 7}, {0, 31}, {20, 21}, {41, 16}, {61, 20}, {81, 23}, {0, 47}, {20, 37}, {41, 32}, {61, 36}, {81, 39}, {71, 60}, {92, 64}, {143, 7}, {163, 4}, {183, 0}, {204, 5}, {224, 15}, {143, 23}, {163, 20}, {183, 16}, {204, 21}, {224, 31}, {143, 39}, {163, 36}, {183, 32}, {204, 37}, {224, 47}, {132, 64}, {153, 60},
                             },
                             {// LED Index to Flag
                              4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}};

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][4] = {{{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 255, 255}, {159, 255, 255}, {68, 255, 255}, {23, 255, 255}, {215, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 255, 255}, {159, 255, 255}, {68, 255, 255}, {23, 255, 255}, {215, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 255, 255}, {159, 255, 255}, {68, 255, 255}, {23, 255, 255}, {215, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 255, 255}, {159, 255, 255}},
                                                                   {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
                                                                   {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
                                                                   {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}};

// void set_layer_color(int layer) {
//   rgb_matrix_enable_noeeprom();
//   rgb_matrix_mode_noeeprom(RGB_MATRIX_NONE);
//   for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
//     int r = pgm_read_byte(&ledmap[layer][i][0]);
//     int g = pgm_read_byte(&ledmap[layer][i][1]);
//     int b = pgm_read_byte(&ledmap[layer][i][2]);
//     rgb_matrix_set_color(i, r, g, b);
//   }
// }

// void keyboard_post_init_user(void) {
//     rgb_matrix_enable();
//     rgb_matrix_mode(RGB_MATRIX_CYCLE_LEFT_RIGHT);
//     // rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
//     // rgb_matrix_sethsv_noeeprom(HSV_OFF);
//     // rgb_matrix_mode(RGB_MATRIX_SOLID_REACTIVE_SIMPLE);
//     // set_layer_color(0);
//     // rgb_matrix_set_color_all(200, 100, 200);
//     // const uint8_t layer = 0;
//     // for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
//     //   int r = pgm_read_byte(&ledmap[layer][i][0]);
//     //   int g = pgm_read_byte(&ledmap[layer][i][1]);
//     //   int b = pgm_read_byte(&ledmap[layer][i][2]);
//     //   rgb_matrix_set_color(i, r, g, b);
//     // }
// }

bool neo_on = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(0,KC_SCLN):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_QUOT); // Intercept hold function
                return false;
            }
            return true;

        case LT(1,KC_NUBS):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_Z); // Intercept hold function
                return false;
            }
            return true;

        case LT(1,KC_D):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(DE_Y); // Intercept hold function
                return false;
            }
            return true;

        case LT(1,DE_COLN):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(DE_AT); // Intercept hold function
                return false;
            }
            return true;

        case RSFT_T(KC_ENT):
          if (!record->tap.count && record->event.pressed) {
              register_code(KC_CAPS); // Intercept hold function
              return false;
          } else if (!record->tap.count) {
            unregister_code(KC_CAPS);
            return false;
          }
          return true;

        case TO(_NEO):
          if (!record->event.pressed) return false; // dont do anything on lift button
          if (neo_on) { //toggle neo layer
            layer_off(_NEO);
            rgb_matrix_mode_noeeprom(RGB_MATRIX_CYCLE_LEFT_RIGHT);
            neo_on = false;
          } else {
            layer_on(_NEO);
            rgb_matrix_mode_noeeprom(RGB_MATRIX_NONE);
            rgb_matrix_sethsv_noeeprom(HSV_GREEN);
            neo_on = true;
          }
          return false;
      
        case RSFT_T(KC_SPC): // magic key for toggling numbers from neo layer
            if (!record->tap.count && record->event.pressed) {
                layer_off(_NEO);
                layer_on(_NUMBERS);
                return false;
            } else if (!record->tap.count) {
              if (neo_on == true) layer_on(_NEO);
              layer_off(_NUMBERS);
              return false;
            }
            return true;

        case RSFT_T(KC_BSPC): // magic key for toggling controls from neo layer
            if (!record->tap.count && record->event.pressed) {
                layer_off(_NEO);
                layer_on(_CONTROL);
                return false;
            } else if (!record->tap.count) {
              if (neo_on == true) layer_on(_NEO);
              layer_off(_CONTROL);
              return false;
            }
            return true;

        case TO(_LEAGUE):
          if (record->event.pressed) {
            rgb_matrix_mode_noeeprom(RGB_MATRIX_CYCLE_ALL);
          }
          return true;

        case TO(_BASE):
          if (record->event.pressed) {
            rgb_matrix_mode_noeeprom(RGB_MATRIX_CYCLE_LEFT_RIGHT);
          }
          return true;
    }
    return true;
}


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x5_2(
      KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
      KC_A, LALT_T(KC_S), LCTL_T(KC_D), KC_F, KC_G, KC_H, KC_J, LCTL_T(KC_K), LALT_T(KC_L), LT(0,KC_SCLN),
      LGUI_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,

      LT(_CONTROL, KC_BSPC), KC_LSFT, LT(_NUMBERS, KC_SPC), RSFT_T(KC_ENT)
      ),
    [_NUMBERS] = LAYOUT_split_3x5_2(
      KC_GRV, KC_NO, KC_PAGE_UP, KC_PAGE_DOWN, KC_NO, KC_LCTL, KC_7, KC_8, KC_9, KC_LBRC,
      KC_NO, KC_NO, KC_PPLS, KC_PMNS, KC_NO, KC_COMM, KC_4, KC_5, KC_6, KC_RBRC,
      TO(_LEAGUE), TO(_NEO), KC_PAST, KC_PSLS, KC_NO, KC_DOT, KC_1, KC_2, KC_3, KC_NO,

      KC_BSPC, KC_LSFT, RSFT_T(KC_SPC), KC_0 //have the magic key here to go back to neo if needed. normaly not called at all bc of LT in _BASE
      ),
    [_CONTROL] = LAYOUT_split_3x5_2(
      KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
      KC_F11, KC_LALT, KC_LCTL, KC_ESC, KC_TAB, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_F12,
      KC_MUTE, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, KC_HOME, KC_TAB, KC_DEL, KC_END, KC_PRINT_SCREEN,

      KC_NO, TO(_RGB), KC_LSFT, KC_ENT
      ),
    [_RGB] = LAYOUT_split_3x5_2(
      KC_NO, KC_NO, KC_NO, RGB_TOG, KC_NO, RGB_VAI, RGB_SPD, RGB_SPI, KC_NO, KC_NO,
      KC_NO, KC_NO, RGB_MODE_REVERSE, RGB_MODE_FORWARD, KC_NO, RGB_VAD, RGB_HUD, RGB_HUI, KC_NO, KC_NO,
      QK_BOOTLOADER, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_SAD, RGB_SAI, KC_NO, KC_NO,
      KC_NO, TO(_BASE), KC_LSFT, KC_NO
    ),
    [_NEO] = LAYOUT_split_3x5_2(
      KC_X, KC_V, KC_L, KC_C, KC_W, KC_K, KC_H, KC_G, KC_F, KC_Q,
      KC_U, LALT_T(KC_I), LCTL_T(KC_A), KC_E, KC_O, KC_S, KC_N, LCTL_T(KC_R), LALT_T(KC_T), LT(1, KC_D),
      LGUI_T(DE_UDIA), DE_ODIA, DE_ADIA, KC_P, DE_Z, KC_B, KC_M, KC_COMM, KC_DOT, KC_J,

      RSFT_T(KC_BSPC), KC_LSFT, RSFT_T(KC_SPC), LT(_NEO_EXTRA, KC_ENT)),

    [_NEO_EXTRA] = LAYOUT_split_3x5_2(
      DE_AT, S(DE_MINS), DE_LBRC, DE_RBRC, KC_GRV, DE_EXLM, DE_LABK, DE_RABK, DE_EQL, DE_AMPR,
      DE_BSLS, DE_SLSH, DE_LCBR, DE_RCBR, DE_ASTR, DE_QUES, DE_LPRN, DE_RPRN, DE_MINS, LT(1, DE_COLN),
      DE_HASH, DE_DLR, DE_PIPE, DE_TILD, DE_GRV, DE_PLUS, DE_PERC, DE_DQUO, DE_QUOT, DE_SCLN,

      RSFT_T(KC_BSPC), KC_LSFT, RSFT_T(KC_SPC), RSFT_T(KC_ENT)),
    [_LEAGUE] = LAYOUT_split_3x5_2(
      KC_TAB, KC_2, KC_3, KC_4, KC_5,   KC_Y, KC_U, KC_I, KC_O, KC_P,
      KC_Q, KC_W, KC_E, KC_R, KC_T,   KC_H, KC_J, LCTL_T(KC_K), LALT_T(KC_L), LT(0,KC_SCLN),
      LT(1, KC_NUBS), KC_S, KC_LCTL, KC_D, KC_F,  KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,

      KC_LALT, KC_SPC, LT(_NUMBERS, KC_SPC), TO(_BASE)
      ),
};
