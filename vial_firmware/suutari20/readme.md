# suutari20

![suutari20](https://i.imgur.com/a4HQo5I.png)

Suutari20 is a RP2040 based modular macro keyboard. It uses TRRS sockets and supports 3.5mm jacks from TS to TRRS.

* Keyboard Maintainer: [squalius-cephalus](https://github.com/squalius-cephalus)
* Hardware Supported: *RP2040 Pi Pico*

Make example for this keyboard (after setting up your build environment):

    make suutari20:vial

Flashing example for this keyboard:

    make suutari20:vial:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 2 ways:

* **Physical boot button**: Hold BOOT button down and connect MCU to the PC
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
