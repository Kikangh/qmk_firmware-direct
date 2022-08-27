/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#undef TAPPING_TERM
#define TAPPING_TERM 240

#define TAPPING_FORCE_HOLD

#define USB_SUSPEND_WAKEUP_DELAY 0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 16
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY       25
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 40

#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 50

#define FIRMWARE_VERSION u8"EnMWb/m7JWN"
#define RGB_MATRIX_STARTUP_SPD 60

// Added for combo support
#define COMBO_VARIABLE_LEN

#undef PERMISSIVE_HOLD

#define IGNORE_MOD_TAP_INTERRUPT

#define TAPPING_FORCE_HOLD

#undef RETRO_TAPPING


#define TAPPING_TOGGLE  1

#define PREVENT_STUCK_MODIFIERS

#define TAPPING_TERM_PER_KEY
