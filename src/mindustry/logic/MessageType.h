#ifndef HEADER_mindustry_logic_MessageType
#define HEADER_mindustry_logic_MessageType

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_MessageType {
	java_lang_Enum parent;
} mindustry_logic_MessageType;

extern Class class_mindustry_logic_MessageType;

extern jobject SF_mindustry_logic_MessageType_notify;
extern jobject SF_mindustry_logic_MessageType_announce;
extern jobject SF_mindustry_logic_MessageType_toast;
extern jobject SF_mindustry_logic_MessageType_mission;
extern jobject SF_mindustry_logic_MessageType_all;
extern jobject SF_mindustry_logic_MessageType_$VALUES;

#define VTABLE_mindustry_logic_MessageType_hashCode_R_int 0
typedef jint (*func_mindustry_logic_MessageType_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_MessageType_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_MessageType_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_MessageType_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_MessageType_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_MessageType_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_MessageType_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_MessageType_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_MessageType_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_MessageType_finalize 5
typedef void (*func_mindustry_logic_MessageType_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_MessageType_notify 6
typedef void (*func_mindustry_logic_MessageType_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_MessageType_notifyAll 7
typedef void (*func_mindustry_logic_MessageType_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_MessageType_wait 8
typedef void (*func_mindustry_logic_MessageType_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_MessageType_wait_long 9
typedef void (*func_mindustry_logic_MessageType_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_MessageType_wait_long_int 10
typedef void (*func_mindustry_logic_MessageType_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_MessageType_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_logic_MessageType_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_MessageType_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_logic_MessageType_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_MessageType_name_R_java_lang_String 13
typedef jobject (*func_mindustry_logic_MessageType_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_MessageType_ordinal_R_int 14
typedef jint (*func_mindustry_logic_MessageType_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_MessageType_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_logic_MessageType_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_mindustry_logic_MessageType(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_MessageType(jcontext ctx);
jobject SM_mindustry_logic_MessageType_values_R_Array1_mindustry_logic_MessageType(jcontext ctx);
jobject SM_mindustry_logic_MessageType_valueOf_java_lang_String_R_mindustry_logic_MessageType(jcontext ctx, jobject param0);
void init_mindustry_logic_MessageType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_mindustry_logic_MessageType_$values_R_Array1_mindustry_logic_MessageType(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
