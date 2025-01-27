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
#ifndef TAP_DANCE_H
#define TAP_DANCE_H

#include QMK_KEYBOARD_H
#include "process_tap_dance.h"

// Declare the tap dance actions array
extern tap_dance_action_t tap_dance_actions[];

// Function prototypes
void esc_tap_dance_fn(tap_dance_state_t *state, void *user_data);

// Descriptive TD key codes
#define TD_ESC TD(0)

#endif // TAP_DANCE_H