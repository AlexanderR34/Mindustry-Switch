#ifndef HEADER_mindustry_world_blocks_Autotiler$AutotilerHolder
#define HEADER_mindustry_world_blocks_Autotiler$AutotilerHolder

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_blocks_Autotiler$AutotilerHolder {
	java_lang_Object parent;
} mindustry_world_blocks_Autotiler$AutotilerHolder;

extern Class class_mindustry_world_blocks_Autotiler$AutotilerHolder;

extern jobject SF_mindustry_world_blocks_Autotiler$AutotilerHolder_blendresult;
extern jobject SF_mindustry_world_blocks_Autotiler$AutotilerHolder_directionals;
extern jobject SF_mindustry_world_blocks_Autotiler$AutotilerHolder_plan;
extern jobject SF_mindustry_world_blocks_Autotiler$AutotilerHolder_blendFinder;

#define VTABLE_mindustry_world_blocks_Autotiler$AutotilerHolder_hashCode_R_int 0
typedef jint (*func_mindustry_world_blocks_Autotiler$AutotilerHolder_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Autotiler$AutotilerHolder_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_blocks_Autotiler$AutotilerHolder_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_blocks_Autotiler$AutotilerHolder_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_blocks_Autotiler$AutotilerHolder_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Autotiler$AutotilerHolder_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_blocks_Autotiler$AutotilerHolder_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Autotiler$AutotilerHolder_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_blocks_Autotiler$AutotilerHolder_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Autotiler$AutotilerHolder_finalize 5
typedef void (*func_mindustry_world_blocks_Autotiler$AutotilerHolder_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Autotiler$AutotilerHolder_notify 6
typedef void (*func_mindustry_world_blocks_Autotiler$AutotilerHolder_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Autotiler$AutotilerHolder_notifyAll 7
typedef void (*func_mindustry_world_blocks_Autotiler$AutotilerHolder_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Autotiler$AutotilerHolder_wait 8
typedef void (*func_mindustry_world_blocks_Autotiler$AutotilerHolder_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Autotiler$AutotilerHolder_wait_long 9
typedef void (*func_mindustry_world_blocks_Autotiler$AutotilerHolder_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_blocks_Autotiler$AutotilerHolder_wait_long_int 10
typedef void (*func_mindustry_world_blocks_Autotiler$AutotilerHolder_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_world_blocks_Autotiler$AutotilerHolder(jobject object, jint mark, jint depth);
void clinit_mindustry_world_blocks_Autotiler$AutotilerHolder(jcontext ctx);
void init_mindustry_world_blocks_Autotiler$AutotilerHolder(jcontext ctx, jobject self);
jbool SM_mindustry_world_blocks_Autotiler$AutotilerHolder_lambda$static$0_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
