/* Copyright 2020
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "keymap.h"

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ $ │ « │ » │ " │ ( │ ) │ % │ + │ - │ = │ / │ * │ # │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ À │ J │ O │ É │ B │ F │ D │ L │ ' │ Q │ X │ Ç │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ I │ E │ U │ , │ P │ T │ S │ R │ N │ ^ │ Z │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ K │ Y │ È │ . │ W │   │ G │ C │ M │ H │ V │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define OP_DLR  KC_GRV  // $
#define OP_LDAQ KC_1    // «
#define OP_RDAQ KC_2    // »
#define OP_DQUO KC_3    // "
#define OP_LPRN KC_4    // (
#define OP_RPRN KC_5    // )
#define OP_PERC KC_6    // %
#define OP_PLUS KC_7    // +
#define OP_MINS KC_8    // -
#define OP_EQL  KC_9    // =
#define OP_SLSH KC_0    // /
#define OP_ASTR KC_MINS // *
#define OP_HASH KC_EQL  // #
// Row 2
#define OP_AGRV KC_Q    // À
#define OP_J    KC_W    // J
#define OP_O    KC_E    // O
#define OP_EACU KC_R    // É
#define OP_B    KC_T    // B
#define OP_F    KC_Y    // F
#define OP_D    KC_U    // D
#define OP_L    KC_I    // L
#define OP_QUOT KC_O    // '
#define OP_Q    KC_P    // Q
#define OP_X    KC_LBRC // X
#define OP_CCED KC_RBRC // Ç
// Row 3
#define OP_A    KC_A    // A
#define OP_I    KC_S    // I
#define OP_E    KC_D    // E
#define OP_U    KC_F    // U
#define OP_COMM KC_G    // ,
#define OP_P    KC_H    // P
#define OP_T    KC_J    // T
#define OP_S    KC_K    // S
#define OP_R    KC_L    // R
#define OP_N    KC_SCLN // N
#define OP_CIR  KC_QUOT // ^
#define OP_Z    KC_BSLS // Z
// Row 4
#define OP_K    KC_NUBS // K
#define OP_Y    KC_Z    // Y
#define OP_EGRV KC_X    // È
#define OP_DOT  KC_C    // .
#define OP_W    KC_V    // W
#define OP_B    KC_B    // @TODO ?? backspace ??
#define OP_G    KC_N    // G
#define OP_C    KC_M    // C
#define OP_M    KC_COMM // M
#define OP_H    KC_DOT  // H
#define OP_V    KC_SLSH // V

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ € │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ _ │ º │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │ ? │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │ ; │   │   │   │   │   │ ! │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │ : │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define OP_EURO S(OP_DLR)  // €
#define OP_1    S(OP_LDAQ) // 1
#define OP_2    S(OP_RDAQ) // 2
#define OP_3    S(OP_DQUO) // 3
#define OP_4    S(OP_LPRN) // 4
#define OP_5    S(OP_RPRN) // 5
#define OP_6    S(OP_PERC) // 6
#define OP_7    S(OP_PLUS) // 7
#define OP_8    S(OP_MINS) // 8
#define OP_9    S(OP_EQL)  // 9
#define OP_0    S(OP_SLSH) // 0
#define OP_UNDS S(OP_ASTR) // _
#define OP_MORD S(OP_HASH) // º
// Row 2
#define OP_QUES S(OP_QUOT) // ?
// Row 3
#define OP_SCLN S(OP_COMM) // ;
// Row 4
#define OP_COLN S(OP_DOT)  // :
// Row 5
#define OP_NBSP S(KC_SPC)  //   (non-breaking space)

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ¤ │ “ │ ” │ „ │ [ │ ] │ @ │ ± │ − │ ≠ │ \ │ × │ ° │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ < │ > │ œ │ ´ │ — │ – │ { │ } │ ¿ │ ° │ | │ ➼ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ æ │ ¨ │ ᵉ │ ù │ ’ │ ` │ & │ ∞ │ L │ ~ │ ¡ │ – │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │  ̸ │  ̣ │ ` │ … │ • │   │ µ │  ̦ │ ¯ │ ˘ │ ˇ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │           _            │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define OP_CURR ALGR(OP_DLR)  // ¤
#define OP_LDQU ALGR(OP_LDAQ) // “
#define OP_RDQU ALGR(OP_RDAQ) // ”
#define OP_DLQU ALGR(OP_DQUO) // „
#define OP_LBRC ALGR(OP_LPRN) // [
#define OP_RBRC ALGR(OP_RPRN) // ]
#define OP_AT   ALGR(OP_PERC) // @
#define OP_PLMN ALGR(OP_PLUS) // ±
#define OP_MMNS ALGR(OP_MINS) // −
#define OP_NEQL ALGR(OP_EQL)  // ≠
#define OP_BSLS ALGR(OP_SLSH) // \ (backslash)
#define OP_MUL  ALGR(OP_ASTR) // ×
#define OP_DEG  ALGR(OP_HASH) // °
// Row 2
#define OP_LABK ALGR(OP_AGRV) // <
#define OP_RABK ALGR(OP_J)    // >
#define OP_OE   ALGR(OP_O)    // Œ
#define OP_ACUT ALGR(OP_EACU) // ´ (dead)
#define OP_MDSH ALGR(OP_B)    // —
#define OP_NDSH ALGR(OP_F)    // –
#define OP_LCBR ALGR(OP_D)    // {
#define OP_RCBR ALGR(OP_L)    // }
#define OP_IQUE ALGR(OP_QUOT) // ¿
#define OP_RNGA ALGR(OP_Q)    // °
#define OP_PIPE ALGR(OP_X)    // |
#define OP_WTRA ALGR(OP_CCED) // ➼
// Row 3
#define OP_AE   ALGR(OP_A)    // Æ
#define OP_DIAE ALGR(OP_I)    // ¨ (dead)
#define OP_LIGA ALGR(OP_E)    // ᵉ
#define OP_UGRV ALGR(OP_U)    // ù
#define OP_RSQU ALGR(OP_COMM) // ’
#define OP_LSQU ALGR(OP_P)    // `
#define OP_AMPR ALGR(OP_T)    // &
#define OP_INFI ALGR(OP_S)    // ∞
#define OP_DTIL ALGR(OP_R)    // L @TODO je sais pas comment s'appelle ce caractère
#define OP_DTIL ALGR(OP_N)    // ~ (dead)
#define OP_IEXL ALGR(OP_CIR)  // ¡
#define OP_NDSH ALGR(OP_Z)    // –
// Row 4
#define OP_BARR ALGR(OP_K)    //  ̸
#define OP_DOTB ALGR(OP_Y)    //  ̣
#define OP_GRV  ALGR(OP_EGRV) // `
#define OP_ELLP ALGR(OP_DOT)  // …
#define OP_BULL ALGR(OP_W)    // •
#define OP_NONE ALGR(OP_B)    // ???? @TODO y'a quoi ici ?
#define OP_DGRK ALGR(OP_G)    // µ (dead)
#define OP_DCMM ALGR(OP_C)    //  ̦
#define OP_MACR ALGR(OP_M)    // ¯
#define OP_BREV ALGR(OP_H)    // ˘ (dead)
#define OP_CARN ALGR(OP_V)    // ˇ (dead)
// Row 5
#define OP_UNDS ALGR(KC_SPC)  // _ @TODO qu'est-ce qu'il y a ici ?

/* Shift+AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ © │ ¼ │ ½ │ ¾ │ ⅓ │ ⅔ │ ′ │ ″ │ ‑ │ ≈ │ ÷ │ ‾ │ ª │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ ⩽ │ ⩾ │ Œ │ § │ ¶ │ ✦ │ ♠ │ ♥ │ ♦ │ ♣ │ ↪ │ ↩ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ Æ │ ̛ │ ̉ │ Ù │ ✓ │ ✻ │ ⬅│ ⬇ │ ⬆│ ➡ │ ⸮ │ 🄯 │   │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ ⎈ │ ⌥ │ ⌘ │ · │ ✗ │   │ ✣ │ † │ ‡ │ ® │ ™ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define OP_COPY S(ALGR(OP_DLR))  // ©
#define OP_QRTR S(ALGR(OP_LDAQ)) // ¼
#define OP_HALF S(ALGR(OP_RDAQ)) // ½
#define OP_TQTR S(ALGR(OP_DQUO)) // ¾
#define OP_OTRD S(ALGR(OP_LPRN)) // ⅓
#define OP_TTRD S(ALGR(OP_RPRN)) // ⅔
#define OP_PRIM S(ALGR(OP_PERC)) // ′
#define OP_DPRM S(ALGR(OP_PLUS)) // ″
#define OP_NBHY S(ALGR(OP_MINS)) // ‑
#define OP_AEQL S(ALGR(OP_EQL))  // ≈
#define OP_DIV  S(ALGR(OP_SLSH)) // ÷
#define OP_OVER S(ALGR(OP_ASTR)) // ‾
#define OP_ORDI S(ALGR(OP_HASH)) // ª
// Row 2
#define OP_LEQL S(ALGR(OP_AGRV)) // ⩽
#define OP_GEQL S(ALGR(OP_J))    // ⩾
#define OP_OE   S(ALGR(OP_O))    // Œ
#define OP_SECT S(ALGR(OP_EACU)) // §
#define OP_PARA S(ALGR(OP_B))    // ¶
#define OP_FSTA S(ALGR(OP_F))    // ✦
#define OP_SPAD S(ALGR(OP_D))    // ♠
#define OP_HEAR S(ALGR(OP_L))    // ♥
#define OP_DIAM S(ALGR(OP_QUOT)) // ♦
#define OP_CLU  S(ALGR(OP_Q))    // ♣
#define OP_RWAR S(ALGR(OP_X))    // ↪
#define OP_LWAR S(ALGR(OP_CCED)) // ↩
// Row 3
#define OP_AE   S(ALGR(OP_A)    // Æ
#define OP_HORN S(ALGR(OP_I)    //  ̛ (dead)
#define OP_HOKA S(ALGR(OP_E)    //  ̉ (dead)
#define OP_UGRV S(ALGR(OP_U)    // Ù
#define OP_CHEC S(ALGR(OP_COMM) // ✓
#define OP_TSAS S(ALGR(OP_P)    // ✻
#define OP_LWBA S(ALGR(OP_T)    // ⬅
#define OP_DWBA S(ALGR(OP_S)    // ⬇
#define OP_UWBA S(ALGR(OP_R)    // ⬆
#define OP_RWBA S(ALGR(OP_N)    // ➡
#define OP_RQUE S(ALGR(OP_CIR)  // ⸮
#define OP_NDSH S(ALGR(OP_Z)    // 🄯 @TODO c’est quoi ça ?
// Row 4
#define OP_HELM S(ALGR(OP_K))    // ⎈
#define OP_OPTI S(ALGR(OP_Y))    // ⌥
#define OP_PINT S(ALGR(OP_EGRV)) // ⌘
#define OP_MDDT S(ALGR(OP_DOT))  // ·
#define OP_BALX S(ALGR(OP_W))    // ✗
#define OP_NONE S(ALGR(OP_B))    // @TODO ??? c’est quoi ?
#define OP_FBAS S(ALGR(OP_G))    // ✣
#define OP_DAGG S(ALGR(OP_C))    // †
#define OP_DDAG S(ALGR(OP_M))    // ‡
#define OP_REGD S(ALGR(OP_H))    // ®
#define OP_NONE S(ALGR(OP_V))    // ™̸̣̦ @TODO ??? c’est quoi ?
// Row 5
#define OP_NNBS S(ALGR(KC_SPC))  //   (narrow non-breaking space)
