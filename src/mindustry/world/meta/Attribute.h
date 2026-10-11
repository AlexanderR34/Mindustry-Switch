#ifndef HEADER_mindustry_world_meta_Attribute
#define HEADER_mindustry_world_meta_Attribute

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_meta_Attribute {
	java_lang_Object parent;
	jint F_id;
	jref F_name;
} mindustry_world_meta_Attribute;

extern Class class_mindustry_world_meta_Attribute;

extern jobject SF_mindustry_world_meta_Attribute_all;
extern jobject SF_mindustry_world_meta_Attribute_map;
extern jobject SF_mindustry_world_meta_Attribute_heat;
extern jobject SF_mindustry_world_meta_Attribute_spores;
extern jobject SF_mindustry_world_meta_Attribute_water;
extern jobject SF_mindustry_world_meta_Attribute_oil;
extern jobject SF_mindustry_world_meta_Attribute_light;
extern jobject SF_mindustry_world_meta_Attribute_sand;
extern jobject SF_mindustry_world_meta_Attribute_steam;

#define VTABLE_mindustry_world_meta_Attribute_hashCode_R_int 0
typedef jint (*func_mindustry_world_meta_Attribute_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Attribute_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_meta_Attribute_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_meta_Attribute_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_meta_Attribute_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Attribute_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_meta_Attribute_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Attribute_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_meta_Attribute_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Attribute_finalize 5
typedef void (*func_mindustry_world_meta_Attribute_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Attribute_notify 6
typedef void (*func_mindustry_world_meta_Attribute_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Attribute_notifyAll 7
typedef void (*func_mindustry_world_meta_Attribute_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Attribute_wait 8
typedef void (*func_mindustry_world_meta_Attribute_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Attribute_wait_long 9
typedef void (*func_mindustry_world_meta_Attribute_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_meta_Attribute_wait_long_int 10
typedef void (*func_mindustry_world_meta_Attribute_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_meta_Attribute_env_R_float 11
typedef jfloat (*func_mindustry_world_meta_Attribute_env_R_float)(jcontext ctx, jobject self);

void mark_mindustry_world_meta_Attribute(jobject object, jint mark, jint depth);
void clinit_mindustry_world_meta_Attribute(jcontext ctx);
jfloat M_mindustry_world_meta_Attribute_env_R_float(jcontext ctx, jobject self);
void init_mindustry_world_meta_Attribute_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_mindustry_world_meta_Attribute_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_mindustry_world_meta_Attribute_get_java_lang_String_R_mindustry_world_meta_Attribute(jcontext ctx, jobject param0);
jobject SM_mindustry_world_meta_Attribute_getOrNull_java_lang_String_R_mindustry_world_meta_Attribute(jcontext ctx, jobject param0);
jbool SM_mindustry_world_meta_Attribute_exists_java_lang_String_R_boolean(jcontext ctx, jobject param0);
jobject SM_mindustry_world_meta_Attribute_add_java_lang_String_R_mindustry_world_meta_Attribute(jcontext ctx, jobject param0);
jobject SM_mindustry_world_meta_Attribute_lambda$get$0_java_lang_String_R_java_lang_RuntimeException(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
