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
#include "tap_dance.h"

//  Tap Dances for the future:
// - Send even more modifiers
// - Switch layers
//      - Always go to a default layer
//      - Numbers keys might be perfect - move BT functions

#include "esc_key.c"
#include "caps_key.c"


// Define the tap dance actions array
tap_dance_action_t tap_dance_actions[] = {
    [0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, esc_tap_dance_fn, esc_reset),
    [1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, caps_tap_dance_fn, caps_reset),
};