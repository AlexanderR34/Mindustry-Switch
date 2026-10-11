#ifndef HEADER_arc_net_EndPoint
#define HEADER_arc_net_EndPoint

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Runnable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_EndPoint {
	java_lang_Object parent;
} arc_net_EndPoint;

extern Class class_arc_net_EndPoint;


#define INDEX_arc_net_EndPoint_addListener_arc_net_NetListener 0
typedef void (*func_arc_net_EndPoint_addListener_arc_net_NetListener)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_net_EndPoint_removeListener_arc_net_NetListener 1
typedef void (*func_arc_net_EndPoint_removeListener_arc_net_NetListener)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_net_EndPoint_run 2
typedef void (*func_arc_net_EndPoint_run)(jcontext ctx, jobject self);
#define INDEX_arc_net_EndPoint_start 3
typedef void (*func_arc_net_EndPoint_start)(jcontext ctx, jobject self);
#define INDEX_arc_net_EndPoint_stop 4
typedef void (*func_arc_net_EndPoint_stop)(jcontext ctx, jobject self);
#define INDEX_arc_net_EndPoint_close 5
typedef void (*func_arc_net_EndPoint_close)(jcontext ctx, jobject self);
#define INDEX_arc_net_EndPoint_update_int 6
typedef void (*func_arc_net_EndPoint_update_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_net_EndPoint_getUpdateThread_R_java_lang_Thread 7
typedef jobject (*func_arc_net_EndPoint_getUpdateThread_R_java_lang_Thread)(jcontext ctx, jobject self);

void mark_arc_net_EndPoint(jobject object, jint mark, jint depth);
void clinit_arc_net_EndPoint(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
