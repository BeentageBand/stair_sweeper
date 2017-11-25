#stair_stepper_make.mk
# Created on: Nov 25, 2017
#     Author: puch

define $(_flavor_)_$(_feat_)_MAKE
$(_flavor_)_$(_feat_)_inc=stair_stepper.h
$(_flavor_)_$(_feat_)_lib_objs=stair_stepper
$(_flavor_)_$(_feat_)_lib=stair_stepper
endef

include $(PROJ_MAK_DIR)/epilog.mk