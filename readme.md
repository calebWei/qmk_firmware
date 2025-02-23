# Quantum Mechanical Keyboard Firmware

[![Current Version](https://img.shields.io/github/tag/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/tags)
[![Discord](https://img.shields.io/discord/440868230475677696.svg)](https://discord.gg/qmk)
[![Docs Status](https://img.shields.io/badge/docs-ready-orange.svg)](https://docs.qmk.fm)
[![GitHub contributors](https://img.shields.io/github/contributors/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/pulse/monthly)
[![GitHub forks](https://img.shields.io/github/forks/qmk/qmk_firmware.svg?style=social&label=Fork)](https://github.com/qmk/qmk_firmware/)

This is a keyboard firmware based on the [tmk\_keyboard firmware](https://github.com/tmk/tmk_keyboard) with some useful features for Atmel AVR and ARM controllers, and more specifically, the [OLKB product line](https://olkb.com), the [ErgoDox EZ](https://ergodox-ez.com) keyboard, and the Clueboard product line.

## Documentation

* [See the official documentation on docs.qmk.fm](https://docs.qmk.fm)

The docs are powered by [VitePress](https://vitepress.dev/). They are also viewable offline; see [Previewing the Documentation](https://docs.qmk.fm/#/contributing?id=previewing-the-documentation) for more details.

You can request changes by making a fork and opening a [pull request](https://github.com/qmk/qmk_firmware/pulls).

## [Caleb's notes] Configuring, building and flashing the firmware file to an Keebio Iris rev5 keyboard
1. Configure keymap on the [official QMK configurator website]([url](https://config.qmk.fm)), and download the keymap json file.
2. Move the keymap json file to C://User/username/qmk_firmware (Essentially the root of this repo).
3. Open [QMK MSYS](https://config.qmk.fm/) and navigate to the root of qmk_firmware, run `qmk json2c [filename]` to convert the json file to c format.
4. Create a new folder in qmk_firmware/keyboards/keebio/iris/rev5/keymaps, and create a new keymap.c file with the c format generated from the previous step, and a rules.mk file with mouse keys enabled.
5. From qmk_firmware, run `make keebio/iris/rev5:[keymap folder name]` to compile the .hex firmware file.
6. Open the [QMK Toolbox](https://qmk.fm/toolbox) and connect the keyboard to the computer, hold the reset button on the connected side of split keyboard for 1 second before releasing, make sure the keyboard is connected to QMK Toolbox, then select the .hex firmware file and flash to the keyboard.
7. Unplug and repeat step 6 on the other side of the split keyboard. 

## Supported Keyboards

* [Planck](/keyboards/planck/)
* [Preonic](/keyboards/preonic/)
* [ErgoDox EZ](/keyboards/ergodox_ez/)
* [Clueboard](/keyboards/clueboard/)
* [Cluepad](/keyboards/clueboard/17/)
* [Atreus](/keyboards/atreus/)

The project also includes community support for [lots of other keyboards](/keyboards/).

## Maintainers

QMK is developed and maintained by Jack Humbert of OLKB with contributions from the community, and of course, [Hasu](https://github.com/tmk). The OLKB product firmwares are maintained by [Jack Humbert](https://github.com/jackhumbert), the Ergodox EZ by [ZSA Technology Labs](https://github.com/zsa), the Clueboard by [Zach White](https://github.com/skullydazed), and the Atreus by [Phil Hagelberg](https://github.com/technomancy).

## Official Website

[qmk.fm](https://qmk.fm) is the official website of QMK, where you can find links to this page, the documentation, and the keyboards supported by QMK.
