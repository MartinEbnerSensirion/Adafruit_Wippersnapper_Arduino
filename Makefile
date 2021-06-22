# Rules to build Wippersnapper UF2 files
#
# SPDX-License-Identifier: MIT

PROJECT_NAME := adafruit-wippersnapper
PROJECT_VER_MAJOR := 0
PROJECT_VER_MINOR := 1
PROJECT_VER_PATCH := 0

BOARD_PYPORTAL := samd51-pyportal

# NOTE: path to "ci-arduino/build_platform.py" must be set prior to running

# Path to uf2conv, be sure to init submodule prior to running!
UF2CONV = tools/uf2/utils/uf2conv.py

# SAMD51 - base address and familyID
UF2_BASE_SAMD51   := 0x4000
UF2_FAMILY_SAMD51 := 0x55114460

# ESP32-S2 - base address and familyID
UF2_BASE_ESP32S2   := 0x00
UF2_FAMILY_ESP32S2 := 0xbfdd4eee

samd51-metro-airlift:
			mkdir -p build/samd51-metro-airlift/
			python3 $(BUILD_PLATFORM) metro_m4_airliftlite_tinyusb --export-binaries
			python3 $(UF2CONV) examples/Wippersnapper_demo/build/adafruit.samd.adafruit_metro_m4_airliftlite/Wippersnapper_demo.ino.bin --base $(UF2_BASE_SAMD51) --family $(UF2_FAMILY_SAMD51) -o build/samd51-metro-airlift/$(PROJECT_NAME)-$(PROJECT_VER_MAJOR)-$(PROJECT_VER_MINOR)-$(PROJECT_VER_PATCH).uf2

samd51-pyportal:
			mkdir -p build/$(BOARD_PYPORTAL))/
			python3 $(BUILD_PLATFORM) pyportal_tinyusb --export-binaries
			python3 $(UF2CONV) examples/Wippersnapper_demo/build/adafruit.samd.adafruit_pyportal_m4/Wippersnapper_demo.ino.bin --base $(UF2_BASE_SAMD51) --family $(UF2_FAMILY_SAMD51) -o build/samd51-pyportal/$(PROJECT_NAME)-$(BOARD_PYPORTAL)-$(PROJECT_VER_MAJOR)-$(PROJECT_VER_MINOR)-$(PROJECT_VER_PATCH).uf2

clean-samd51-metro-airlift:
			rm -r build/samd51-metro-airlift/

clean-samd51-pyportal:
			rm -r build/$(BOARD_PYPORTAL)/
			rm -r examples/Wippersnapper_demo/build/adafruit.samd.adafruit_pyportal_m4

.PHONY: clean
clean:
			rm -r build/*
			rm -r examples/Wippersnapper_demo/build/*
			rm -r examples/wippersnapper-simpletest-esp8266/build/*
