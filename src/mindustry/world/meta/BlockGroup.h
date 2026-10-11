#ifndef HEADER_mindustry_world_meta_BlockGroup
#define HEADER_mindustry_world_meta_BlockGroup

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_meta_BlockGroup {
	java_lang_Enum parent;
	jbool F_anyReplace;
} mindustry_world_meta_BlockGroup;

extern Class class_mindustry_world_meta_BlockGroup;

extern jobject SF_mindustry_world_meta_BlockGroup_none;
extern jobject SF_mindustry_world_meta_BlockGroup_walls;
extern jobject SF_mindustry_world_meta_BlockGroup_projectors;
extern jobject SF_mindustry_world_meta_BlockGroup_turrets;
extern jobject SF_mindustry_world_meta_BlockGroup_transportation;
extern jobject SF_mindustry_world_meta_BlockGroup_power;
extern jobject SF_mindustry_world_meta_BlockGroup_liquids;
extern jobject SF_mindustry_world_meta_BlockGroup_drills;
extern jobject SF_mindustry_world_meta_BlockGroup_units;
extern jobject SF_mindustry_world_meta_BlockGroup_logic;
extern jobject SF_mindustry_world_meta_BlockGroup_payloads;
extern jobject SF_mindustry_world_meta_BlockGroup_heat;
extern jobject SF_mindustry_world_meta_BlockGroup_$VALUES;

#define VTABLE_mindustry_world_meta_BlockGroup_hashCode_R_int 0
typedef jint (*func_mindustry_world_meta_BlockGroup_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_BlockGroup_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_meta_BlockGroup_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_meta_BlockGroup_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_meta_BlockGroup_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_BlockGroup_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_meta_BlockGroup_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_BlockGroup_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_meta_BlockGroup_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_BlockGroup_finalize 5
typedef void (*func_mindustry_world_meta_BlockGroup_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_BlockGroup_notify 6
typedef void (*func_mindustry_world_meta_BlockGroup_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_BlockGroup_notifyAll 7
typedef void (*func_mindustry_world_meta_BlockGroup_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_BlockGroup_wait 8
typedef void (*func_mindustry_world_meta_BlockGroup_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_BlockGroup_wait_long 9
typedef void (*func_mindustry_world_meta_BlockGroup_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_meta_BlockGroup_wait_long_int 10
typedef void (*func_mindustry_world_meta_BlockGroup_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_meta_BlockGroup_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_world_meta_BlockGroup_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_meta_BlockGroup_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_world_meta_BlockGroup_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_meta_BlockGroup_name_R_java_lang_String 13
typedef jobject (*func_mindustry_world_meta_BlockGroup_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_BlockGroup_ordinal_R_int 14
typedef jint (*func_mindustry_world_meta_BlockGroup_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_BlockGroup_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_world_meta_BlockGroup_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_mindustry_world_meta_BlockGroup(jobject object, jint mark, jint depth);
void clinit_mindustry_world_meta_BlockGroup(jcontext ctx);
jobject SM_mindustry_world_meta_BlockGroup_values_R_Array1_mindustry_world_meta_BlockGroup(jcontext ctx);
jobject SM_mindustry_world_meta_BlockGroup_valueOf_java_lang_String_R_mindustry_world_meta_BlockGroup(jcontext ctx, jobject param0);
void init_mindustry_world_meta_BlockGroup_java_lang_String_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2);
void init_mindustry_world_meta_BlockGroup_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_mindustry_world_meta_BlockGroup_$values_R_Array1_mindustry_world_meta_BlockGroup(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
