#include "tap_dance.h"

//  Tap Dances for the future:
// - Send a password (only if secure enough)
// - Send even more modifiers
// - Switch layers
//      - Always go to a default layer
//      - Numbers keys might be perfect - move BT functions

// Define as escape key tap dance function
// Define the tap dance action for the ESC key
void esc_tap_dance_fn(tap_dance_state_t *state, void *user_data) {
    switch (state->count) {
        case 1:
            // Single tap = ESC key (normal behavior)
            tap_code(KC_ESC);
            break;
        case 2:
            // Double tap = Sytem Request
            tap_code(KC_SYRQ);
            break;
        case 3:
            // Triple tap = Print Screen
            tap_code(KC_PSCR);
            break;
        case 4:
            // Four taps = Scroll Lock
            tap_code(KC_SCRL);
            break;
        case 5:
            // Five taps = Pause/Break
            tap_code(KC_PAUS);
            break;
        default:
            // Default to ESC if more than 5 taps
            tap_code(KC_ESC);
            break;
    }
}

void esc_reset(tap_dance_state_t *state, void *user_data) {
    // reset logic
    // Left intentionally empty for now
    // TODO: Figure out why this would be needed or used
}
// Define the tap dance actions array
tap_dance_action_t tap_dance_actions[] = {
    [0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, esc_tap_dance_fn, esc_reset),
};