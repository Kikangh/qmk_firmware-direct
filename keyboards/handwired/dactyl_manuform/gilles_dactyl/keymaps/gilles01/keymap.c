/*
  Copyright (c) 2021 Gilles HEMARD

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include QMK_KEYBOARD_H
#include "keymap_bepo.h"


extern keymap_config_t keymap_config;

//Layers declaration
enum custom_layers {
_BASE,
_RAISE,
_LOWER,
_FUNCT,
_ARROW,
_NUMBERS
};

/*#define _BASE    0
#define _RAISE   1
#define _LOWER   2
#define _FUNCT   3
#define _ARROW   4
#define _NUMBERS 5*/

// Fillers to make layering more clear
#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

//custom keycodes definitions
#define ____ KC_TRNS
#define LCS(code) LCTL(LSFT(code))

//MacOS Shorcuts
#define UNDO         LGUI(BP_Z)
#define REDO         SGUI(BP_Z)
#define KC_MAC_CUT   LGUI(BP_X)
#define KC_MAC_COPY  LGUI(BP_C)
#define KC_MAC_PASTE LGUI(BP_V)

//Move to the specified MacOs Destkop
#define GoToDesk1  LCTL(KC_1)
#define GoToDesk2  LCTL(KC_2)

//Shortcuts for the Workflowy Note taking App
#define WkfyMirror SGUI(BP_M) 
#define WkfyMovUp  SGUI(KC_UP)
#define WkfyMovDw  SGUI(KC_DOWN)
#define WkfyPreNod LCS(KC_9)
#define WkfyNxtNod LCS(KC_0)

//


#define SFT_ESC  SFT_T(KC_ESC)
#define CTL_BSPC CTL_T(KC_BSPC)
#define ALT_SPC  ALT_T(KC_SPC)
#define SFT_ENT  SFT_T(KC_ENT)

#define KC_ML KC_MS_LEFT
#define KC_MR KC_MS_RIGHT
#define KC_MU KC_MS_UP
#define KC_MD KC_MS_DOWN
#define KC_MB1 KC_MS_BTN1
#define KC_MB2 KC_MS_BTN1
#include "g/keymap_combo.h"

//combo parameters :
#define COMBO_ONLY_FROM_LAYER _BASE

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_5x6_5_gilles(
/*left hand
+-------+-------+-----+----------+----------+-----------+
|  Esc  |   "   |  «  |     »    |     (    |     )     |
+-------+-------+-----+----------+----------+-----------+
|  Tab  |   b   |  é  |     p    |     o    |     è     |
+-------+-------+-----+----------+----------+-----------+
| Shift | Arrow | ctl/|    alt/  |   cmd/   |     ,     |
|       |   /a  |  u  |     i    |     e    |           |
+-------+-------+-----+----------+----------+-----------+
|   F3  |   à   |  y  |     x    |     .    |     k     |
+-------+-------+-----+----------+----------+-----------+
                |  up | Layer_FN |
                |     |   /down  |
                +-----+----------+          +-----------+
                                            | Lower/Tab |
                                            +-----------+---------+----------+
                                                        |  CMD/   | Layer_FN |
                                                        |   SPC   |   /BSPC  |
                                                        +---------+----------+
                                                        |   Copy  |   Paste  |
                                                        +---------+----------+
*/
  KC_ESC,    KC_1,            KC_2,          KC_3,               KC_4,          KC_5,                                             			                                  					KC_6,       		 KC_7,         KC_8,            KC_9,            KC_0,            KC_BSPC, 
  KC_TAB,    KC_Q,            KC_W,          KC_E,               KC_R,          KC_T,                                             			                                  					KC_Y,       		 KC_U,         KC_I,            KC_O,            KC_P,            KC_BSPC, 
  KC_LSHIFT, LT(_ARROW,KC_A), LCTL_T(KC_S),  LALT_T(KC_D),       LGUI_T(KC_F),  BP_COMM,                                          			                                  					KC_H,       		 RGUI_T(KC_J), RALT_T(KC_K),    RCTL_T(KC_L),    RSFT_T(KC_SCLN), KC_QUOT, 
  KC_F3,     KC_Z,            KC_X,          KC_C,               KC_V,          KC_B,                                             			                                  					KC_N,       		 KC_M,         BP_G,            BP_H,            KC_SLSH,         KC_BSLS, 
                              LCTL(KC_LEFT), LGUI(LALT(BP_C)),                  LT(_LOWER,KC_TAB), LGUI_T(KC_SPC), LT(_FUNCT,KC_BSPC),    SGUI(KC_4),       LT(_NUMBERS,KC_SPC),		LT(_RAISE,BP_W),               RCTL(KC_SPACE),           RCTL(KC_RGHT),
                                                                                             			 LGUI(BP_C),     LGUI(KC_U),            LCTL(SGUI(KC_4)), KC_ENT
/* right hand
                            +-------------+-------+-------+-------+---------+------+
                            |      @      |   +   |   -   |   /   |    *    | BSPC |
                            +-------------+-------+-------+-------+---------+------+
                            |      ^      |   v   |   d   |   l   |    j    |   z  |
                            +-------------+-------+-------+-------+---------+------+
                            |      c      | rcmd/ | ralt/ | rctl/ | rshift/ |   m  |
                            |             |   t   |   s   |   r   |    n    |      |
                            +-------------+-------+-------+-------+---------+------+
                            |      ’      |   q   |   g   |   h   |    f    |   ç  |
                            +-------------+-------+-------+-------+---------+------+
                                                  | ralt/ | rctl/ |
                                                  |  left | right |
                            +-------------+       +-------+-------+
                            | Layer_Mouse |
                            |      /W     |
+-----------+---------------+-------------+
| ScrSht_to | Layer_Numbers |
|    File   |      /SPC     |
+-----------+---------------+
| ScrSht_to |     ENTER     |
| Clipboard |               |
+-----------+---------------+
*/

),

[_RAISE] = LAYOUT_5x6_5_gilles(
  // left hand
____,  LALT(LGUI(KC_ESC)), KC_ACL0, KC_ACL1, KC_ACL2, ____,          																					                 KC_PWR,      KC_ACL0,      KC_ACL1,             KC_ACL2,          ____,    ____,  
____,  HYPR(KC_R),         KC_WH_R, KC_MS_U, KC_WH_L, LSFT(LCA(KC_SPC)),      																                 KC_BTN3, 		KC_HOME,      KC_END,              LGUI(KC_QUOT), KC_VOLU, ____,
____,  RALT(RGUI(KC_G)),   KC_MS_L, KC_MS_D, KC_MS_R, LCS(KC_SPC),      																			                 KC_PGUP,     KC_BTN1,      KC_BTN2,             SGUI(KC_QUOT), KC_VOLD, KC_ENT,
____,  LCTL(KC_F),         KC_PGUP, KC_F10,  KC_PGDN, LCTL(LGUI(KC_SPC)),																			                 KC_PGDN,     KC_WH_D,      KC_WH_U,             SGUI(KC_SLSH), KC_MUTE, ____,
                           KC_HOME, KC_END,           LOWER,          		KC_SPC,  		KC_BSPC, 								KC_DEL, KC_NO,   RAISE,                     LCTL(KC_LEFT),       LCTL(KC_RGHT),                   
                                                                          LCTL(KC_SPC), LALT(SGUI(KC_U)), 		RESET, KC_END
),

[_LOWER] = LAYOUT_5x6_5_gilles(
  // left hand
  ____,    KC_F1,   KC_F2,         KC_F3,         KC_F4,  KC_F5, 																	                        KC_DEL,             KC_F7,              KC_F8,              KC_F9,              KC_F10,             KC_DEL,
  KC_F6,   KC_F7,   KC_F8,         KC_F9,         KC_F10, KC_F11,																	                        LCA(LSFT(KC_Y)),    LCA(LSFT(KC_U)),    LCA(LSFT(KC_I)),    LCA(LSFT(KC_O)),    ____,               ____,
  KC_CLCK, KC_HOME, KC_PGUP,       KC_PGDN,       KC_END, KC_F12,																	                        LCA(LSFT(KC_H)),    LCA(LSFT(KC_LEFT)), LCA(LSFT(KC_UP)),   LCA(LSFT(KC_DOWN)), LCA(LSFT(KC_RGHT)), KC_ENT,
  KC_F10,  KC_F11,  HYPR(KC_LEFT), HYPR(KC_RGHT), ____,   LGUI(KC_F12),           								                        LCA(LSFT(KC_N)),    LCTL(LGUI(KC_M)),   LCA(LSFT(KC_COMM)), LCA(LSFT(KC_DOT)),  RSFT(RGUI(BP_F)),   LCA(LGUI(BP_T)),
                    LCTL(KC_LEFT), LCTL(KC_RGHT),         LOWER,        KC_SPC,  LCTL(KC_SPC),		 RALT(KC_BSPC), KC_ENT, ____,               RCTL(KC_LEFT),      RCTL(KC_RGHT),
                                                                        KC_HOME,   KC_NO,					 ____,          ____
  // Right hand

),

[_FUNCT] = LAYOUT_5x6_5_gilles(
  // left hand
  ____,    KC_F1,   KC_F2, KC_F3, KC_F4,  	 KC_F5,                           			                    KC_F6,  KC_F7,   KC_F8, KC_F9, 		 KC_F10, ____,   
  KC_F6,   KC_F7,   KC_F8, KC_F9, KC_F10, 	 KC_F11,                  						                      ____, 	____,    ____,    ____,    ____,   ____,  
  ____,    KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_F12,             							                          KC_ENT, KC_MPRV, KC_MPLY, KC_MNXT, ____,   ____,
  ____,    ____,    ____,  ____,    ____ , 	 LGUI(KC_F12),             						                      ____, ____,      ____,    ____,    ____,   ____,
                    ____,  ____,           	 KC_NO,        ____,  ____, 				____,  KC_NO,  KC_NO,                    ____,    ____,                   
                                           	           		 ____,  ____, 				KC_NO, KC_NO
  // Right hand

),

[_ARROW] = LAYOUT_5x6_5_gilles( \
  // left hand
  TO(_BASE),       ____,            ____,         ____,       ____,       KC_BSPC,            																				                      KC_DEL,        			 ____,                   ____,               ____,           ____,    KC_BSPC,
  TO(_BASE),       ____,            LCTL(KC_1),   LCTL(KC_2), WkfyMirror, KC_DEL,            																					                      BP_AT,         			 LALT(LGUI(LSFT(KC_V))), LCTL(LSFT(KC_TAB)), LCTL(KC_TAB),   ____,    BP_Z,
  ____,            ____,            KC_LCTRL,     KC_LALT,    KC_LGUI,    KC_ENT,            																				                        KC_TILD,       			 KC_LEFT,                KC_UP,              KC_DOWN,        KC_RGHT, KC_ENT,
  RESET,           ____,            ____,         REDO,       UNDO,       LGUI(KC_TAB),            																	                        LSFT(BP_QUOT), 			 KC_GRV,                 WkfyMovUp,          WkfyMovDw,			 ____,    ____,
                                                  ____,       ____,				SGUI(KC_LEFT), LSFT_T(KC_SPC), KC_BSPC,               RALT_T(KC_BSPC), KC_LSHIFT, LALT(LSFT(KC_LEFT)),                         WkfyPreNod,         WkfyNxtNod,
                                                                                         LGUI(BP_X),     LALT(SGUI(KC_U)), 			KC_LALT,         ____
// Right hand

),

[_NUMBERS] = LAYOUT_5x6_5_gilles(
  // left hand
  ____, ____,    				 ____,    			____,   	  ____,   ____,   																						                KC_F6,   KC_F7, KC_F8,         KC_F9,         KC_F10, KC_BSPC,
  ____, KC_1,            KC_2,          KC_3,       KC_4,   KC_5,      																						                KC_6,    KC_7,  KC_8,          KC_9,          KC_0,   KC_F12,
  ____, KC_P1,           KC_P2,         KC_P3,      KC_P4,  KC_P5,     																						                KC_P6,   KC_P7, KC_P8,         KC_P9,         KC_P0,  BP_EQL,
  ____, KC_NONUS_BSLASH, LSFT(BP_COMM), LSFT(KC_V), ____,   LALT(KC_E),																						                BP_COMM, KC_NO, KC_NO,         ____,          ____,   BP_PERC,
                                        KC_HOME,    KC_END, LGUI_T(KC_ENT), LSFT_T(KC_SPC), KC_BSPC,							KC_DEL, ____,   KC_NO,        LCTL(KC_LEFT), LCTL(KC_RGHT),
                                                                            KC_LALT,        LALT(SGUI(KC_U)),  		KC_F11, KC_F12
// right hand

),

};

