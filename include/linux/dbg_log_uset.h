#ifndef DBG_LOG_USET_H_
#define DBG_LOG_USET_H_

#define DBG_FID_LIST(FID) \
   FID(SKETCH_FID, DBG_WARN_LVL, "Gtest Framework ID") \
   FID(IPC_FID,   DBG_WARN_LVL, "IPC ID") \

#define Dbg_Log_Print(feat_id, lvl, line, ...) \
    Dbg_Log(lvl, IFF_1(__VA_ARGS__), feat_id, line, IFF_0(__VA_ARGS__))
 
#endif /*DBG_LOG_USET_H_*/
