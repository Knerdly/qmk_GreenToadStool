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
void matrix_init_user(void) {
    rgblight_enable(); // Enable RGB lighting
    rgblight_sethsv_noeeprom(HSV_CHARTREUSE); // Set your favorite color
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        for (uint8_t i = led_min; i < led_max; i++) {
            if (g_led_config.flags[i] & LED_FLAG_KEYLIGHT) {
                rgb_matrix_set_color(i, RGB_RED);
            }
        }
    }
        switch (biton32(layer_state)) {
        case 0: // Base layer
            rgblight_sethsv_noeeprom(HSV_BLUE);
            break;
        case 1: // Function layer
            rgblight_sethsv_noeeprom(HSV_GREEN);
            break;
        case 2: // Gaming layer
            rgblight_sethsv_noeeprom(HSV_RED);
            break;
        default: // Any other layers
            rgblight_sethsv_noeeprom(HSV_WHITE);
            break;
    }

    return false;
}
