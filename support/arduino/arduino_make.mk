define $(_flavor_)_$(_feat_)_MAKE
$(_flavor_)_$(_feat_)_inc=\
	Arduino.h \
	binary.h \
	Client.h \
	HardwareSerial.h \
	HardwareSerial_private.h \
	IPAddress.h \
	new.h \
	PluggableUSB.h \
	Printable.h \
	Print.h \
	Server.h \
	Stream.h \
	Udp.h \
	USBAPI.h \
	USBCore.h \
	USBDesc.h \
	wiring_private.h \
	WCharacter.h \
	WString.h 

$(_flavor_)_$(_feat_)_lib_objs=arduino_stubs Print Stream
$(_flavor_)_$(_feat_)_lib=arduino
$(_flavor_)_PROJ_INC+=$($(_flavor_)_$(_feat_)_dir)/variants/$($(_flavor_)_board)

endef

$(_flavor_)_board=standard #default

ifneq "arduino" "$($(_flavor_)_build)"
include $(PROJ_MAK_DIR)/epilog.mk
endif
