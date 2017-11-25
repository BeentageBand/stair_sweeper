PROJ_DIR=.
PROJ_MAK_DIR=$(PROJ_DIR)/project_make

#Arduino Path
ARDUINO_PACKAGE_PATH=~/arduino-1.8.5

#OUT_DIR=$(HOME)/projects/suite_object_out

include $(PROJ_MAK_DIR)/prolog.mk 

define Project_Make

PROJ_DIR=.
PROJ_MAK_DIR=$(PROJ_DIR)/project_make
#OUT_DIR=$(HOME)/projects/suite_object_out

FLAVOR_LIST=host linux arduino

#Flavor
host_build=linux
linux_build=linux
arduino_build=arduino

#MACRO
linux_MACROS=-DARDUINO=106

host_PROJ_INC=include include/linux
linux_PROJ_INC=include include/linux
arduino_PROJ_INC=include include/arduino

endef

include $(PROJ_MAK_DIR)/project.mk
