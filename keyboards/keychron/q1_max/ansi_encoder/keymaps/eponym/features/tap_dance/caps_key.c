// caps lock ////////////////////////////////////////////////////////
void caps_tap_dance_fn(tap_dance_state_t *state, void *user_data) {
    switch (state->count) {
        case 1:
            // Single tap =
            break;
        case 2:
            // Double tap = caps lock
            tap_code(KC_CAPS);
            break;
        default:

            break;
    }
}

void caps_reset(tap_dance_state_t *state, void *user_data) {
    // reset logic
    // Left intentionally empty for now
    // TODO: Figure out why this would be needed or used
}