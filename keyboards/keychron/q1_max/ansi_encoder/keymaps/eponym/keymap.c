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

// Keys to consider for future use/expantion:
// KC_SLCK - Scroll Lock - Nearly obsolete
// KC_PAUS - Pause/Break
// KC_INS - Insert
// KC_APP - Application/Menu Key (on some Win keyboards
//          but rarely used otherwise)
/* TODO: Update for my keyboard
* ┌───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌──────┐┌────┐
* │esc││F1 │F2 │F3 │F4 ││F5 │ 6 │ 7 │ 8 ││ 9 │ 0 │ - │ = ││ bsp  ││ins │
* └───┘└───┴───┴───┴───┘└───┴───┴───┴───┘└───┴───┴───┴───┘└──────┘└────┘ 
* ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────────┐ ┌────┐
* │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │  bsp    │ │ins │
* ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───────┤ ├────┤
* │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \    │ │pgup│
* ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴───────┤ ├────┤
* │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  enter   │ │pgdn│
* ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──────┬───┘ └────┘
* │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ shift  │     ┌────┐
* ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬──┘     │ up │ 
* │ctrl│opt │cmd │                        │ cmd│home│ fn │ ┌─────┬┴────┴─┬─────┐
* └────┴────┴────┴────────────────────────┴────┴────┴────┘ │left │ down  │right│
                                                           └─────┴───────┴─────┘
*/

#include QMK_KEYBOARD_H
#include "keychron_common.h"

#include "./features/features.c"

#include "./layers/layers.c"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron_common(keycode, record)) {
        return false;
    }

    switch (keycode) {
    case KC_ENTER:
        rgb_matrix_set_color_all(RGB_GREEN);
        return true;
    default:
        return true;
    }
}

void leader_start_user(void) {}
void leader_end_user(void) {
    if (leader_sequence_one_key(KC_S)) {
        SEND_STRING(":wq\n");
    } else if (leader_sequence_two_keys(KC_D, KC_W)) {
        SEND_STRING(":q!\n");
    }
}
