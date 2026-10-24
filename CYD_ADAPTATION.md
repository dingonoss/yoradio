# CYD ESP32-2432S028 adaptation (work in progress)

Hardware: classic ESP-WROOM-32, ILI9341 320x240 landscape, XPT2046 touch, on-board speaker amplifier tied to GPIO26.

## Status
This branch is **not yet a ready-to-flash firmware**. The initial myoptions.h selects the display, HSPI bus and internal DAC. Touch is deliberately disabled: the internal DAC can claim GPIO25 (shared with touch clock on this CYD). Do not enable XPT2046 until audio is verified to use **GPIO26 only**; simply enabling both DAC channels may interfere with touch.

The bundled yoRadio Audio.cpp explicitly cautions that its internal DAC was last known working with Arduino ESP32 2.0.0-RC2. **Do not assume Arduino ESP32 3.x works.** Verify supported core/API before patching audio.

## Connection
Keep the existing 8-ohm speaker on the board's SPEAK socket. Do NOT wire speaker to GPIO26 directly. USB-C is used for flashing. MicroSD alone does not install firmware.

## Configuration
The branch-local file `yoRadio/myoptions.h` does not contain Wi-Fi passwords. Use yoRadio's local captive portal to configure network after first flash. Weather city/time zone are configured via yoRadio web settings. Playlists can contain stations from many countries via its web UI.

## Next engineering tasks
1. Compile this profile using an Arduino ESP32 core compatible with the bundled internal DAC implementation (the original code warns about core 2.0.0-RC2).
2. Check touchscreen coordinates and calibrate XPT2046 raw ranges.
3. Verify 320x240 display rendering on this exact USB-C revision.
4. Compile firmware plus web assets using a compatible Arduino ESP32 core version and flash over USB-C.
5. Confirm streamed MP3 audio, touch, weather, and Wi-Fi on hardware.

Original project: https://github.com/e2002/yoradio
