#ifndef HEADER_mindustry_gen_EntityMapping
#define HEADER_mindustry_gen_EntityMapping

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_EntityMapping {
	java_lang_Object parent;
} mindustry_gen_EntityMapping;

extern Class class_mindustry_gen_EntityMapping;

extern jobject SF_mindustry_gen_EntityMapping_customIdMap;
extern jobject SF_mindustry_gen_EntityMapping_idMap;
extern jobject SF_mindustry_gen_EntityMapping_nameMap;

#define VTABLE_mindustry_gen_EntityMapping_hashCode_R_int 0
typedef jint (*func_mindustry_gen_EntityMapping_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EntityMapping_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_EntityMapping_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_EntityMapping_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_EntityMapping_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EntityMapping_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_EntityMapping_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EntityMapping_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_EntityMapping_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EntityMapping_finalize 5
typedef void (*func_mindustry_gen_EntityMapping_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EntityMapping_notify 6
typedef void (*func_mindustry_gen_EntityMapping_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EntityMapping_notifyAll 7
typedef void (*func_mindustry_gen_EntityMapping_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EntityMapping_wait 8
typedef void (*func_mindustry_gen_EntityMapping_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EntityMapping_wait_long 9
typedef void (*func_mindustry_gen_EntityMapping_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_EntityMapping_wait_long_int 10
typedef void (*func_mindustry_gen_EntityMapping_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_gen_EntityMapping(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_EntityMapping(jcontext ctx);
void init_mindustry_gen_EntityMapping(jcontext ctx, jobject self);
jint SM_mindustry_gen_EntityMapping_register_java_lang_String_arc_func_Prov_R_int(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_gen_EntityMapping_map_int_R_arc_func_Prov(jcontext ctx, jint param0);
jobject SM_mindustry_gen_EntityMapping_map_java_lang_String_R_arc_func_Prov(jcontext ctx, jobject param0);
jbool SM_mindustry_gen_EntityMapping_lambda$register$0_arc_func_Prov_R_boolean(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
