define $(_flavor_)_$(_feat_)_MAKE
$(_flavor_)_$(_feat_)_inc=
$(_flavor_)_$(_feat_)_bin_objs=stair_stepper_gtest
$(_flavor_)_$(_feat_)_bin_libs=\
	arduino \
	dbg_log \
	stair_sweeper_$($(_flavor_)_build) \
	stair_stepper \
	AccelStepper \
	gtest_main
$(_flavor_)_$(_feat_)_bin=stair_stepper_gtest
endef

ifneq "arduino" "$($(_flavor_)_build)"
include $(PROJ_MAK_DIR)/epilog.mk
endif
