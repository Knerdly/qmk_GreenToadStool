LEADER_ENABLE = yes
LEADER_TIMEOUT = 300

TAP_DANCE_ENABLE = yes

# Custom source file based on toggles:
ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
	SRC += ./tap_dance/tap_dance.c
endif

ifeq ($(strip $(LEADER_KEY_ENABLE)), yes)
	SRC += ./leader_key/leader_key.c
endif

ifeq ($(strip $(RGB_ENABLE)), yes)
	SRC += ./rgb/rgb.c
endif
