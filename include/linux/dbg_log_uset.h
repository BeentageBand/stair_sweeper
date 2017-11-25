#ifndef DBG_LOG_USET_H_
#define DBG_LOG_USET_H_

#define DBG_FID_LIST(FID) \
	/*  Feature ID,        Dbg Level,    Description */ \
   FID(SKETCH_FID,         DBG_INFO_LVL, "Sketch ID") \
   FID(ACCEL_STEPPER_ID,   DBG_INFO_LVL, "Accel Stepper") \

#define Dbg_Log_Print(feat_id, lvl, line, ...) \
    Dbg_Log(lvl, IFF_1(__VA_ARGS__), feat_id, line, IFF_0(__VA_ARGS__))
 
#endif /*DBG_LOG_USET_H_*/
