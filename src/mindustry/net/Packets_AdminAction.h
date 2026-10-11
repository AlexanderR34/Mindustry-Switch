#ifndef HEADER_mindustry_net_Packets$AdminAction
#define HEADER_mindustry_net_Packets$AdminAction

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_Packets$AdminAction {
	java_lang_Enum parent;
} mindustry_net_Packets$AdminAction;

extern Class class_mindustry_net_Packets$AdminAction;

extern jobject SF_mindustry_net_Packets$AdminAction_kick;
extern jobject SF_mindustry_net_Packets$AdminAction_ban;
extern jobject SF_mindustry_net_Packets$AdminAction_trace;
extern jobject SF_mindustry_net_Packets$AdminAction_wave;
extern jobject SF_mindustry_net_Packets$AdminAction_switchTeam;
extern jobject SF_mindustry_net_Packets$AdminAction_all;
extern jobject SF_mindustry_net_Packets$AdminAction_$VALUES;

#define VTABLE_mindustry_net_Packets$AdminAction_hashCode_R_int 0
typedef jint (*func_mindustry_net_Packets$AdminAction_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$AdminAction_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_Packets$AdminAction_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Packets$AdminAction_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_Packets$AdminAction_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$AdminAction_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_Packets$AdminAction_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$AdminAction_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_Packets$AdminAction_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$AdminAction_finalize 5
typedef void (*func_mindustry_net_Packets$AdminAction_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$AdminAction_notify 6
typedef void (*func_mindustry_net_Packets$AdminAction_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$AdminAction_notifyAll 7
typedef void (*func_mindustry_net_Packets$AdminAction_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$AdminAction_wait 8
typedef void (*func_mindustry_net_Packets$AdminAction_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$AdminAction_wait_long 9
typedef void (*func_mindustry_net_Packets$AdminAction_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_Packets$AdminAction_wait_long_int 10
typedef void (*func_mindustry_net_Packets$AdminAction_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_net_Packets$AdminAction_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_net_Packets$AdminAction_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Packets$AdminAction_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_net_Packets$AdminAction_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Packets$AdminAction_name_R_java_lang_String 13
typedef jobject (*func_mindustry_net_Packets$AdminAction_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$AdminAction_ordinal_R_int 14
typedef jint (*func_mindustry_net_Packets$AdminAction_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$AdminAction_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_net_Packets$AdminAction_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_mindustry_net_Packets$AdminAction(jobject object, jint mark, jint depth);
void clinit_mindustry_net_Packets$AdminAction(jcontext ctx);
jobject SM_mindustry_net_Packets$AdminAction_values_R_Array1_mindustry_net_Packets$AdminAction(jcontext ctx);
jobject SM_mindustry_net_Packets$AdminAction_valueOf_java_lang_String_R_mindustry_net_Packets$AdminAction(jcontext ctx, jobject param0);
void init_mindustry_net_Packets$AdminAction_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_mindustry_net_Packets$AdminAction_$values_R_Array1_mindustry_net_Packets$AdminAction(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
