#ifndef HEADER_mindustry_net_ArcNetProvider$3
#define HEADER_mindustry_net_ArcNetProvider$3

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/net/NetListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_ArcNetProvider$3 {
	java_lang_Object parent;
	jref F_this$0;
} mindustry_net_ArcNetProvider$3;

extern Class class_mindustry_net_ArcNetProvider$3;


#define VTABLE_mindustry_net_ArcNetProvider$3_hashCode_R_int 0
typedef jint (*func_mindustry_net_ArcNetProvider$3_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$3_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_ArcNetProvider$3_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$3_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_ArcNetProvider$3_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$3_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_ArcNetProvider$3_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$3_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_ArcNetProvider$3_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$3_finalize 5
typedef void (*func_mindustry_net_ArcNetProvider$3_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$3_notify 6
typedef void (*func_mindustry_net_ArcNetProvider$3_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$3_notifyAll 7
typedef void (*func_mindustry_net_ArcNetProvider$3_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$3_wait 8
typedef void (*func_mindustry_net_ArcNetProvider$3_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$3_wait_long 9
typedef void (*func_mindustry_net_ArcNetProvider$3_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_ArcNetProvider$3_wait_long_int 10
typedef void (*func_mindustry_net_ArcNetProvider$3_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_net_ArcNetProvider$3_connected_arc_net_Connection 11
typedef void (*func_mindustry_net_ArcNetProvider$3_connected_arc_net_Connection)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$3_disconnected_arc_net_Connection_arc_net_DcReason 12
typedef void (*func_mindustry_net_ArcNetProvider$3_disconnected_arc_net_Connection_arc_net_DcReason)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_net_ArcNetProvider$3_received_arc_net_Connection_java_lang_Object 13
typedef void (*func_mindustry_net_ArcNetProvider$3_received_arc_net_Connection_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_net_ArcNetProvider$3_idle_arc_net_Connection 14
typedef void (*func_mindustry_net_ArcNetProvider$3_idle_arc_net_Connection)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$3_lambda$disconnected$0_mindustry_net_ArcNetProvider$ArcConnection_mindustry_net_Packets$Disconnect 15
typedef void (*func_mindustry_net_ArcNetProvider$3_lambda$disconnected$0_mindustry_net_ArcNetProvider$ArcConnection_mindustry_net_Packets$Disconnect)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_net_ArcNetProvider$3(jobject object, jint mark, jint depth);
void clinit_mindustry_net_ArcNetProvider$3(jcontext ctx);
void init_mindustry_net_ArcNetProvider$3_mindustry_net_ArcNetProvider(jcontext ctx, jobject self, jobject param0);
void M_mindustry_net_ArcNetProvider$3_connected_arc_net_Connection(jcontext ctx, jobject self, jobject param0);
void M_mindustry_net_ArcNetProvider$3_disconnected_arc_net_Connection_arc_net_DcReason(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_net_ArcNetProvider$3_received_arc_net_Connection_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void SM_mindustry_net_ArcNetProvider$3_lambda$received$0_mindustry_net_ArcNetProvider$ArcConnection_mindustry_net_Packet(jcontext ctx, jobject param0, jobject param1);
void M_mindustry_net_ArcNetProvider$3_lambda$disconnected$0_mindustry_net_ArcNetProvider$ArcConnection_mindustry_net_Packets$Disconnect(jcontext ctx, jobject self, jobject param0, jobject param1);
void SM_mindustry_net_ArcNetProvider$3_lambda$connected$0_mindustry_net_ArcNetProvider$ArcConnection_mindustry_net_Packets$Connect(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
