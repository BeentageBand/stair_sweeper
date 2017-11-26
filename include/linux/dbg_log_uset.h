#ifndef DBG_LOG_USET_H_
#define DBG_LOG_USET_H_

#define DBG_FID_LIST(FID) \
	/*  Feature ID,        Dbg Level,    Description */ \
   FID(GTEST_FID,          DBG_WARN_LVL, "Gtest Framework") \
   FID(SKETCH_FID,         DBG_INFO_LVL, "Sketch ID") \
   FID(ACCEL_STEPPER_FID,   DBG_WARN_LVL, "Accel Stepper") \
   FID(STAIR_STEPPER_FID,   DBG_INFO_LVL, "Stair Stepper App") \

#define Dbg_Log_Print(feat_id, lvl, line, ...) \
    Dbg_Log(lvl, IFF_1(__VA_ARGS__), feat_id, line, IFF_0(__VA_ARGS__))
 
#endif /*DBG_LOG_USET_H_*/
