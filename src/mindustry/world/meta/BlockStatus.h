#ifndef HEADER_mindustry_world_meta_BlockStatus
#define HEADER_mindustry_world_meta_BlockStatus

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_meta_BlockStatus {
	java_lang_Enum parent;
	jref F_color;
} mindustry_world_meta_BlockStatus;

extern Class class_mindustry_world_meta_BlockStatus;

extern jobject SF_mindustry_world_meta_BlockStatus_active;
extern jobject SF_mindustry_world_meta_BlockStatus_noOutput;
extern jobject SF_mindustry_world_meta_BlockStatus_noInput;
extern jobject SF_mindustry_world_meta_BlockStatus_logicDisable;
extern jobject SF_mindustry_world_meta_BlockStatus_inactiveUnitFactory;
extern jobject SF_mindustry_world_meta_BlockStatus_inactive;
extern jobject SF_mindustry_world_meta_BlockStatus_$VALUES;

#define VTABLE_mindustry_world_meta_BlockStatus_hashCode_R_int 0
typedef jint (*func_mindustry_world_meta_BlockStatus_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_BlockStatus_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_meta_BlockStatus_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_meta_BlockStatus_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_meta_BlockStatus_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_BlockStatus_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_meta_BlockStatus_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_BlockStatus_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_meta_BlockStatus_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_BlockStatus_finalize 5
typedef void (*func_mindustry_world_meta_BlockStatus_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_BlockStatus_notify 6
typedef void (*func_mindustry_world_meta_BlockStatus_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_BlockStatus_notifyAll 7
typedef void (*func_mindustry_world_meta_BlockStatus_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_BlockStatus_wait 8
typedef void (*func_mindustry_world_meta_BlockStatus_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_BlockStatus_wait_long 9
typedef void (*func_mindustry_world_meta_BlockStatus_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_meta_BlockStatus_wait_long_int 10
typedef void (*func_mindustry_world_meta_BlockStatus_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_meta_BlockStatus_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_world_meta_BlockStatus_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_meta_BlockStatus_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_world_meta_BlockStatus_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_meta_BlockStatus_name_R_java_lang_String 13
typedef jobject (*func_mindustry_world_meta_BlockStatus_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_BlockStatus_ordinal_R_int 14
typedef jint (*func_mindustry_world_meta_BlockStatus_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_BlockStatus_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_world_meta_BlockStatus_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_mindustry_world_meta_BlockStatus(jobject object, jint mark, jint depth);
void clinit_mindustry_world_meta_BlockStatus(jcontext ctx);
jobject SM_mindustry_world_meta_BlockStatus_values_R_Array1_mindustry_world_meta_BlockStatus(jcontext ctx);
jobject SM_mindustry_world_meta_BlockStatus_valueOf_java_lang_String_R_mindustry_world_meta_BlockStatus(jcontext ctx, jobject param0);
void init_mindustry_world_meta_BlockStatus_java_lang_String_int_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jobject SM_mindustry_world_meta_BlockStatus_$values_R_Array1_mindustry_world_meta_BlockStatus(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
