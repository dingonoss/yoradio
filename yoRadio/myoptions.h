#ifndef myoptions_h
#define myoptions_h
// CYD ESP32-2432S028 (classic ESP-WROOM-32), experimental hardware profile.
// This file is intentionally free of network credentials.
#define L10N_LANGUAGE RU
#define DSP_MODEL DSP_ILI9341
#define DSP_HSPI true
#define TFT_CS 15
#define TFT_DC 2
#define TFT_RST -1
#define TFT_ROTATE 1
#define BRIGHTNESS_PIN 21
#define VS1053_CS 255
#define I2S_INTERNAL true
#define I2S_DOUT 255
#define PLAYER_FORCE_MONO true
// CAUTION: GPIO25 is shared with CYD touch SPI. Disable touch until a
// GPIO26-only internal DAC implementation has been verified.
#define TS_MODEL TS_MODEL_UNDEFINED
#endif
