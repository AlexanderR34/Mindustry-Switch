#ifndef HEADER_mindustry_net_ArcNetProvider$2
#define HEADER_mindustry_net_ArcNetProvider$2

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/net/NetListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_ArcNetProvider$2 {
	java_lang_Object parent;
	jref F_this$0;
} mindustry_net_ArcNetProvider$2;

extern Class class_mindustry_net_ArcNetProvider$2;


#define VTABLE_mindustry_net_ArcNetProvider$2_hashCode_R_int 0
typedef jint (*func_mindustry_net_ArcNetProvider$2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_ArcNetProvider$2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$2_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_ArcNetProvider$2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$2_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_ArcNetProvider$2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$2_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_ArcNetProvider$2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$2_finalize 5
typedef void (*func_mindustry_net_ArcNetProvider$2_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$2_notify 6
typedef void (*func_mindustry_net_ArcNetProvider$2_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$2_notifyAll 7
typedef void (*func_mindustry_net_ArcNetProvider$2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$2_wait 8
typedef void (*func_mindustry_net_ArcNetProvider$2_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$2_wait_long 9
typedef void (*func_mindustry_net_ArcNetProvider$2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_ArcNetProvider$2_wait_long_int 10
typedef void (*func_mindustry_net_ArcNetProvider$2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_net_ArcNetProvider$2_connected_arc_net_Connection 11
typedef void (*func_mindustry_net_ArcNetProvider$2_connected_arc_net_Connection)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$2_disconnected_arc_net_Connection_arc_net_DcReason 12
typedef void (*func_mindustry_net_ArcNetProvider$2_disconnected_arc_net_Connection_arc_net_DcReason)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_net_ArcNetProvider$2_received_arc_net_Connection_java_lang_Object 13
typedef void (*func_mindustry_net_ArcNetProvider$2_received_arc_net_Connection_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_net_ArcNetProvider$2_idle_arc_net_Connection 14
typedef void (*func_mindustry_net_ArcNetProvider$2_idle_arc_net_Connection)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_net_ArcNetProvider$2(jobject object, jint mark, jint depth);
void clinit_mindustry_net_ArcNetProvider$2(jcontext ctx);
void init_mindustry_net_ArcNetProvider$2_mindustry_net_ArcNetProvider(jcontext ctx, jobject self, jobject param0);
void M_mindustry_net_ArcNetProvider$2_connected_arc_net_Connection(jcontext ctx, jobject self, jobject param0);
void M_mindustry_net_ArcNetProvider$2_disconnected_arc_net_Connection_arc_net_DcReason(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_net_ArcNetProvider$2_received_arc_net_Connection_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void SM_mindustry_net_ArcNetProvider$2_lambda$received$0_mindustry_net_Packet(jcontext ctx, jobject param0);
void SM_mindustry_net_ArcNetProvider$2_lambda$disconnected$0_mindustry_net_Packets$Disconnect(jcontext ctx, jobject param0);
void SM_mindustry_net_ArcNetProvider$2_lambda$connected$0_mindustry_net_Packets$Connect(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
