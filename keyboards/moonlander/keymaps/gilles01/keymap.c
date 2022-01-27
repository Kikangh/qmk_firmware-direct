#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"  
#include "keymap_bepo.h"
#include "keymap_us_international.h"
#include "keymap_old_bepo_defs.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_86_255_255,
  HSV_172_255_255,
  HSV_215_255_128,
  HSV_27_255_255,
  HSV_88_161_246,
  HSV_0_255_255,
  HSV_131_229_237,
  HSV_222_255_255,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  BP_LSPO,
  BP_RSPC,
};

// Options added for combo and deprecated bepo keycodes support :
// #include "old_keymap_bepo.h"

// these keycodes exist in my combo def (trying to have the same version for moonlander and dactylmanuform).
#define _BASE 0
#define _ARROW 1
#define WkfyMirror LGUI(LSFT(BP_M)) 

//combo specific declaration and parameters :
#include "g/keymap_combo.h"
#define COMBO_ONLY_FROM_LAYER _BASE

enum tap_dance_codes {
  DANCE_0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      BP_DQOT,        BP_LGIL,        BP_RGIL,        BP_LPRN,        BP_RPRN,        KC_BSPACE,                                      KC_DELETE,      BP_AT,          BP_PLUS,        BP_MINS,        BP_SLSH,        BP_ASTR,        KC_BSPACE,      
    KC_TAB,         BP_B,           BP_ECUT,        BP_P,           BP_O,           BP_EGRV,        RGB_TOG,                                        KC_BSPACE,      KC_Y,           BP_V,           BP_D,           BP_L,           BP_J,           BP_Z,           
    KC_LSHIFT,      LT(1,BP_A),     LCTL_T(BP_U),   LALT_T(BP_I),   LGUI_T(BP_E),   BP_COMM,        LALT(LGUI(BP_C)),                                                                KC_ENTER,       BP_C,           RGUI_T(BP_T),   RALT_T(BP_S),   RCTL_T(BP_R),   RSFT_T(BP_N),   BP_M,           
    TD(DANCE_0),    BP_AGRV,        BP_Y,           BP_X,           BP_DOT,         BP_K,                                           BP_APOS,        BP_Q,           BP_G,           BP_H,           BP_F,           BP_CCED,        
    KC_F3,          TG(4),          OSL(3),         LT(3,KC_UP),    LSFT_T(KC_ENTER),LGUI(KC_SPACE),                                                                                                 RCTL(KC_SPACE), LT(4,BP_W),     KC_LEFT,        KC_RIGHT,       RCTL(KC_LEFT),  RCTL(KC_RIGHT), 
    LGUI_T(KC_SPACE),LGUI(BP_C),     LGUI(BP_V),                     LCTL(LGUI(LSFT(BP_LPRN))),BP_Z,           LT(2,KC_SPACE)
  ),
  [1] = LAYOUT_moonlander(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, TO(4),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_LEFT),  LCTL(KC_RIGHT),  LGUI(LSFT(BP_M)),KC_BSPACE,      KC_DELETE,                                      KC_TRANSPARENT, BP_AT,          LCTL(LGUI(LSFT(BP_DOT))),LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_TRANSPARENT, BP_W,           
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LCTRL,       KC_LALT,        KC_LGUI,        LALT(LGUI(LSFT(KC_SPACE))),LGUI(KC_F12),                                                                   KC_TRANSPARENT, BP_HASH,        KC_LEFT,        KC_UP,          KC_DOWN,        KC_RIGHT,       KC_F10,         
    RESET,          KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LSFT(BP_Z)),LGUI(BP_Z),     LGUI(KC_TAB),                                   LSFT(BP_APOS),  BP_DLR,         LGUI(LSFT(KC_UP)),LGUI(LSFT(KC_DOWN)),LGUI(LSFT(BP_F)),RALT(RCTL(RGUI(BP_T))),
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          LSFT_T(KC_ENTER),LALT(LSFT(KC_LEFT)),                                                                                                LGUI(LSFT(KC_LEFT)),KC_NO,          LCTL(LSFT(BP_SLSH)),LCTL(LSFT(BP_ASTR)),KC_TRANSPARENT, KC_TRANSPARENT, 
    LSFT_T(KC_SPACE),LGUI(BP_X),     LALT(LGUI(LSFT(BP_V))),                LGUI(LSFT(BP_LPRN)),KC_HOME,        KC_END
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_NO,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_TRANSPARENT, BP_DQOT,        BP_LGIL,        BP_RGIL,        BP_LPRN,        BP_RPRN,        KC_NO,                                          KC_TRANSPARENT, BP_AT,          BP_PLUS,        BP_MINS,        BP_SLSH,        BP_ASTR,        KC_F12,         
    KC_TRANSPARENT, KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_4,        KC_KP_5,        KC_NO,                                                                          KC_RGUI,        KC_KP_6,        KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_0,        BP_EQL,         
    KC_TRANSPARENT, KC_GRAVE,       LSFT(BP_COMM),  LSFT(BP_DOT),   KC_TRANSPARENT, LALT(BP_P),                                     BP_COMM,        KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          BP_PERC,        
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_LCTRL,       KC_LALT,        KC_LGUI,                                                                                                        KC_TRANSPARENT, KC_RALT,        KC_RCTRL,       KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LSHIFT,      KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,                                         KC_TRANSPARENT, LALT(LCTL(LSFT(KC_Y))),LALT(LCTL(LSFT(BP_V))),LALT(LCTL(LSFT(BP_D))),LALT(LCTL(LSFT(BP_L))),KC_NO,          KC_F12,         
    HSV_86_255_255, HSV_172_255_255,HSV_215_255_128,HSV_27_255_255, HSV_88_161_246, HSV_0_255_255,  LGUI(KC_F12),                                                                   KC_RGUI,        LALT(LCTL(LSFT(BP_C))),LALT(LCTL(LSFT(KC_LEFT))),LALT(LCTL(LSFT(KC_UP))),LALT(LCTL(LSFT(KC_DOWN))),LALT(LCTL(LSFT(KC_RIGHT))),KC_NO,          
    HSV_131_229_237,HSV_222_255_255,RGB_SAD,        RGB_SAI,        RGB_SPD,        RGB_SPI,                                        LALT(LCTL(LSFT(BP_APOS))),RCTL(RGUI(BP_Q)),LALT(LCTL(LSFT(BP_G))),LALT(LCTL(LSFT(BP_H))),RGUI(RSFT(BP_F)),LALT(LCTL(LGUI(BP_T))),
    KC_F10,         KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, RGB_MOD,                                                                                                        RGB_TOG,        KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_RALT,        KC_RCTRL,       
    RGB_VAD,        RGB_VAI,        TOGGLE_LAYER_COLOR,                RGB_SLD,        RGB_HUD,        RGB_HUI
  ),
  [4] = LAYOUT_moonlander(
    TO(0),          LALT(LGUI(KC_ESCAPE)),KC_TRANSPARENT, TO(1),          KC_TRANSPARENT, KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(LCTL(LGUI(LSFT(BP_O)))),LGUI(KC_LEFT),  KC_MS_UP,       LGUI(KC_RIGHT), LALT(LCTL(LSFT(KC_SPACE))),KC_NO,                                          KC_TRANSPARENT, KC_MS_BTN3,     KC_MS_WH_RIGHT, KC_MS_WH_LEFT,  LGUI(BP_M),     KC_AUDIO_VOL_UP,KC_F12,         
    LALT(LCTL(LGUI(LSFT(BP_O)))),RALT(RGUI(BP_COMM)),KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    LCTL(LSFT(KC_SPACE)),KC_NO,                                                                          KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MS_BTN1,     KC_MS_BTN2,     LGUI(LSFT(BP_M)),KC_AUDIO_VOL_DOWN,LALT(LGUI(BP_N)),
    KC_TRANSPARENT, LCTL(BP_E),     KC_HOME,        KC_PGUP,        KC_END,         LCTL(LGUI(KC_SPACE)),                                KC_MS_WH_UP,    KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_AUDIO_MUTE,  KC_TRANSPARENT, 
    WEBUSB_PAIR,    KC_TRANSPARENT, KC_NO,          KC_PGDOWN,      KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    LSFT_T(KC_SPACE),ST_MACRO_5,     ST_MACRO_6,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [1] = { {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160}, {165,255,160} },

    [4] = { {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

// void rgb_matrix_indicators_user(void) {
//   if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
//   switch (biton32(layer_state)) {
//     case 1:
//       set_layer_color(1);
//       break;
//     case 4:
//       set_layer_color(4);
//       break;
//    default:
//     if (rgb_matrix_get_flags() == LED_FLAG_NONE)
//       rgb_matrix_set_color_all(0, 0, 0);
//     break;
//   }
// }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_O)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_RBRACKET) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_L) SS_DELAY(100) SS_TAP(X_B)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_SCOLON)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_K) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_SLASH) SS_DELAY(100) SS_TAP(X_A)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_Q) SS_DELAY(100) SS_TAP(X_L) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_U)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS) SS_DELAY(100) SS_LALT(SS_TAP(X_3)));

    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_2)) SS_DELAY(100) SS_TAP(X_MINUS));

    }
    break;
    case BP_LSPO:
      perform_space_cadet(record, keycode, KC_LSFT, KC_TRNS, BP_LPRN);
      return false;
    case BP_RSPC:
      perform_space_cadet(record, keycode, KC_LSFT, KC_TRNS, BP_RPRN);
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_86_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(86,255,255);
      }
      return false;
    case HSV_172_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(172,255,255);
      }
      return false;
    case HSV_215_255_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(215,255,128);
      }
      return false;
    case HSV_27_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(27,255,255);
      }
      return false;
    case HSV_88_161_246:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(88,161,246);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_131_229_237:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(131,229,237);
      }
      return false;
    case HSV_222_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(222,255,255);
      }
      return false;
  }
  return true;
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_CAPSLOCK);
        tap_code16(KC_CAPSLOCK);
        tap_code16(KC_CAPSLOCK);
    }
    if(state->count > 3) {
        tap_code16(KC_CAPSLOCK);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_CAPSLOCK); break;
        case DOUBLE_TAP: register_code16(LALT(LGUI(LSFT(BP_C)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_CAPSLOCK); register_code16(KC_CAPSLOCK);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_CAPSLOCK); break;
        case DOUBLE_TAP: unregister_code16(LALT(LGUI(LSFT(BP_C)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_CAPSLOCK); break;
    }
    dance_state[0].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};

