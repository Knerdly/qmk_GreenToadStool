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