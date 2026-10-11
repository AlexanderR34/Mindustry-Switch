#ifndef HEADER_mindustry_world_meta_StatCat
#define HEADER_mindustry_world_meta_StatCat

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_meta_StatCat {
	java_lang_Object parent;
	jref F_name;
	jint F_id;
} mindustry_world_meta_StatCat;

extern Class class_mindustry_world_meta_StatCat;

extern jobject SF_mindustry_world_meta_StatCat_all;
extern jobject SF_mindustry_world_meta_StatCat_general;
extern jobject SF_mindustry_world_meta_StatCat_power;
extern jobject SF_mindustry_world_meta_StatCat_liquids;
extern jobject SF_mindustry_world_meta_StatCat_items;
extern jobject SF_mindustry_world_meta_StatCat_crafting;
extern jobject SF_mindustry_world_meta_StatCat_function;
extern jobject SF_mindustry_world_meta_StatCat_optional;

#define VTABLE_mindustry_world_meta_StatCat_hashCode_R_int 0
typedef jint (*func_mindustry_world_meta_StatCat_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_StatCat_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_meta_StatCat_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_meta_StatCat_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_meta_StatCat_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_StatCat_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_meta_StatCat_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_StatCat_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_meta_StatCat_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_StatCat_finalize 5
typedef void (*func_mindustry_world_meta_StatCat_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_StatCat_notify 6
typedef void (*func_mindustry_world_meta_StatCat_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_StatCat_notifyAll 7
typedef void (*func_mindustry_world_meta_StatCat_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_StatCat_wait 8
typedef void (*func_mindustry_world_meta_StatCat_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_StatCat_wait_long 9
typedef void (*func_mindustry_world_meta_StatCat_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_meta_StatCat_wait_long_int 10
typedef void (*func_mindustry_world_meta_StatCat_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_meta_StatCat_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_world_meta_StatCat_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_meta_StatCat_localized_R_java_lang_String 12
typedef jobject (*func_mindustry_world_meta_StatCat_localized_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_StatCat_compareTo_mindustry_world_meta_StatCat_R_int 13
typedef jint (*func_mindustry_world_meta_StatCat_compareTo_mindustry_world_meta_StatCat_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_world_meta_StatCat(jobject object, jint mark, jint depth);
void clinit_mindustry_world_meta_StatCat(jcontext ctx);
void init_mindustry_world_meta_StatCat_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_meta_StatCat_localized_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_world_meta_StatCat_toString_R_java_lang_String(jcontext ctx, jobject self);
jint M_mindustry_world_meta_StatCat_compareTo_mindustry_world_meta_StatCat_R_int(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_world_meta_StatCat_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
