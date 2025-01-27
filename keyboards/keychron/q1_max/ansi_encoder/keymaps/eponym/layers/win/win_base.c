// clang-format off
// Win Base Layer - Mostly in sync with the Mac Base Layer
// - Physical Switch Value: Win
// - Layer: Default
    [WIN_BASE] = LAYOUT_ansi_82(
        TD(TD_ESC),  KC_F1,   KC_F2,   KC_F3, KC_F4, KC_F5, KC_F6,  KC_F7, KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,               MT(MOD_LSFT | MOD_LCTL, KC_DEL),     KC_MUTE,
        KC_GRV,      KC_1,    KC_2,    KC_3,  KC_4,  KC_5,  KC_6,   KC_7,  KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,               KC_BSPC,    KC_INS,
        KC_TAB,      KC_Q,    KC_W,    KC_E,  KC_R,  KC_T,  KC_Y,   KC_U,  KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC,              KC_BSLS,    KC_PGUP,
        TD(TD_CAPS), KC_A,    KC_S,    KC_D,  KC_F,  KC_G,  KC_H,   KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOT,                       KC_ENT,     KC_PGDN,
        KC_LSFT,     KC_Z,    KC_X,    KC_C,  KC_V,  KC_B,  KC_N,   KC_M,  KC_COMM, KC_DOT, KC_SLSH,          KC_RSFT,                      KC_UP,
        KC_LCTL,     KC_LOPT, KC_LCMD,                      KC_SPC,                                 KC_RCMD,  KC_HOME, MT(MO(MAC_FN), TO(MAC_BASE)), KC_LEFT, KC_DOWN, KC_RGHT)
