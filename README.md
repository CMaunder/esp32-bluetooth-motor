# esp32-bluetooth-motor

Template project, has bluepad32 working on esp idf 5.3.2, mini oled screen integration and motor control.

To initialize idf.py command

`. $HOME/esp/esp-idf/export.sh`

Linting issues:
run ESP-IDF: Add .vscode Configuration Folder on command pallete

bluepad32 github: https://github.com/ricardoquesada/esp-idf-arduino-bluepad32-template

Installation:
https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/linux-macos-setup.html#get-started-get-esp-idf

when switching versions (or upgrading??) for the esp-idf git use after checking out different version branch: `git submodule update --init --recursive`
then as usual, run `./install.sh esp32`

Add arduino component:

`cd components && \`
`git clone https://github.com/espressif/arduino-esp32.git arduino && \`
`cd arduino && \`
`git submodule update --init --recursive && \`
`cd ../.. && \`
`idf.py menuconfig`
