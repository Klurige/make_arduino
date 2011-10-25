# Your Arduino environment.
ARDUINO_MAKEFILE = /projects/tools/arduino/make_arduino/Makefile.arduino
ARD_HOME = /projects/tools/arduino/Arduino
#
# Your favorite serial monitor.
MON_CMD = screen
MON_SPEED = 115200

# Board settings.
BOARD = uno
PORT = /dev/ttyACM0
PROGRAMMER = arduino

# Where to find header files and libraries.
INC_DIRS = ./inc ..
LIB_DIRS = $(addprefix $(ARD_HOME)/libraries/, $(LIBS))
LIBS =

# Project name, if not same as directory.
# This is what Arduino folks call "sketch"
#PROJECT_NAME = test

include $(ARDUINO_MAKEFILE)

