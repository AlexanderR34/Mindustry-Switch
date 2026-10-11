#ifndef HEADER_mindustry_net_ArcNetProvider$ArcConnection$1
#define HEADER_mindustry_net_ArcNetProvider$ArcConnection$1

#include "Clearwing.h"
#include "arc/net/InputStreamSender.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_ArcNetProvider$ArcConnection$1 {
	arc_net_InputStreamSender parent;
	jint F_id;
	jref F_val$stream;
	jref F_this$1;
} mindustry_net_ArcNetProvider$ArcConnection$1;

extern Class class_mindustry_net_ArcNetProvider$ArcConnection$1;


#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection$1_hashCode_R_int 0
typedef jint (*func_mindustry_net_ArcNetProvider$ArcConnection$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_ArcNetProvider$ArcConnection$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection$1_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_ArcNetProvider$ArcConnection$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection$1_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_ArcNetProvider$ArcConnection$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection$1_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_ArcNetProvider$ArcConnection$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection$1_finalize 5
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection$1_notify 6
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection$1_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection$1_notifyAll 7
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection$1_wait 8
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection$1_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection$1_wait_long 9
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection$1_wait_long_int 10
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection$1_connected_arc_net_Connection 11
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection$1_connected_arc_net_Connection)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection$1_disconnected_arc_net_Connection_arc_net_DcReason 12
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection$1_disconnected_arc_net_Connection_arc_net_DcReason)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection$1_received_arc_net_Connection_java_lang_Object 13
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection$1_received_arc_net_Connection_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection$1_idle_arc_net_Connection 14
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection$1_idle_arc_net_Connection)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection$1_start 15
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection$1_start)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection$1_next_R_java_lang_Object 16
typedef jobject (*func_mindustry_net_ArcNetProvider$ArcConnection$1_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection$1_next_Array1_byte_R_java_lang_Object 17
typedef jobject (*func_mindustry_net_ArcNetProvider$ArcConnection$1_next_Array1_byte_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_net_ArcNetProvider$ArcConnection$1(jobject object, jint mark, jint depth);
void clinit_mindustry_net_ArcNetProvider$ArcConnection$1(jcontext ctx);
void init_mindustry_net_ArcNetProvider$ArcConnection$1_mindustry_net_ArcNetProvider$ArcConnection_java_io_InputStream_int_mindustry_net_Streamable(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3);
void M_mindustry_net_ArcNetProvider$ArcConnection$1_start(jcontext ctx, jobject self);
jobject M_mindustry_net_ArcNetProvider$ArcConnection$1_next_Array1_byte_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
