#ifndef HEADER_arc_net_NetListener
#define HEADER_arc_net_NetListener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_NetListener {
	java_lang_Object parent;
} arc_net_NetListener;

extern Class class_arc_net_NetListener;


#define INDEX_arc_net_NetListener_connected_arc_net_Connection 0
typedef void (*func_arc_net_NetListener_connected_arc_net_Connection)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_net_NetListener_disconnected_arc_net_Connection_arc_net_DcReason 1
typedef void (*func_arc_net_NetListener_disconnected_arc_net_Connection_arc_net_DcReason)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_arc_net_NetListener_received_arc_net_Connection_java_lang_Object 2
typedef void (*func_arc_net_NetListener_received_arc_net_Connection_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_arc_net_NetListener_idle_arc_net_Connection 3
typedef void (*func_arc_net_NetListener_idle_arc_net_Connection)(jcontext ctx, jobject self, jobject param0);

void mark_arc_net_NetListener(jobject object, jint mark, jint depth);
void clinit_arc_net_NetListener(jcontext ctx);
void M_arc_net_NetListener_connected_arc_net_Connection(jcontext ctx, jobject self, jobject param0);
void M_arc_net_NetListener_disconnected_arc_net_Connection_arc_net_DcReason(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_net_NetListener_received_arc_net_Connection_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_net_NetListener_idle_arc_net_Connection(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
