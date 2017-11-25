define $(_flavor_)_$(_feat_)_MAKE
$(_flavor_)_$(_feat_)_inc=
$(_flavor_)_$(_feat_)_bin_objs=stair_sweeper_sketch
$(_flavor_)_$(_feat_)_bin_libs=\
	dbg_log \
	stair_sweeper_$($(_flavor_)_build_) \

$(_flavor_)_$(_feat_)_bin=stair_sweeper_sketch
endef

include $(PROJ_MAK_DIR)/epilog.mk

ifneq "arduino" "$($(_flavor_)_build)"
$(_flavor_)_$(_feat_)_bin_libs+=arduino
endif
