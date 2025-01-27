// clang-format off
/* Copyright 2023 @ Keychron (https://www.keychron.com)
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
enum layers {
    MAC_BASE,
    MAC_FN,
    WIN_BASE,
    WIN_FN,
    GAME_BASE,
    GAME_FN
};
/////////////////////////////////////////////////////////////////////
//
// Keymaps
// - Important: These have to be formatted probably or you might be
// fubar
// - KC_* - Default names
// - QK_* - QMK Defined
// - TD_* - Tap Dance - custom
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#include "./layers/mac/mac_base.c"
,
#include "./layers/mac/mac_fn.c"
    ,
#include "./layers/win/win_base.c"
    ,
#include "./layers/win/win_fn.c"
    ,
#include "./layers/game/game_base.c"
    ,
#include "./layers/game/game_fn.c"
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [MAC_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [WIN_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [GAME_BASE]   = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [GAME_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
};
#endif // ENCODER_MAP_ENABLE