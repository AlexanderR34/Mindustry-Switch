#ifndef HEADER_mindustry_ai_BaseRegistry
#define HEADER_mindustry_ai_BaseRegistry

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_BaseRegistry {
	java_lang_Object parent;
	jref F_cores;
	jref F_parts;
	jref F_reqParts;
	jref F_ores;
	jref F_oreFloors;
} mindustry_ai_BaseRegistry;

extern Class class_mindustry_ai_BaseRegistry;


#define VTABLE_mindustry_ai_BaseRegistry_hashCode_R_int 0
typedef jint (*func_mindustry_ai_BaseRegistry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BaseRegistry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_BaseRegistry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_BaseRegistry_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_BaseRegistry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BaseRegistry_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_BaseRegistry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BaseRegistry_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_BaseRegistry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BaseRegistry_finalize 5
typedef void (*func_mindustry_ai_BaseRegistry_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BaseRegistry_notify 6
typedef void (*func_mindustry_ai_BaseRegistry_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BaseRegistry_notifyAll 7
typedef void (*func_mindustry_ai_BaseRegistry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BaseRegistry_wait 8
typedef void (*func_mindustry_ai_BaseRegistry_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BaseRegistry_wait_long 9
typedef void (*func_mindustry_ai_BaseRegistry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_BaseRegistry_wait_long_int 10
typedef void (*func_mindustry_ai_BaseRegistry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ai_BaseRegistry_forResource_mindustry_ctype_Content_R_arc_struct_Seq 11
typedef jobject (*func_mindustry_ai_BaseRegistry_forResource_mindustry_ctype_Content_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_BaseRegistry_load 12
typedef void (*func_mindustry_ai_BaseRegistry_load)(jcontext ctx, jobject self);

void mark_mindustry_ai_BaseRegistry(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_BaseRegistry(jcontext ctx);
void init_mindustry_ai_BaseRegistry(jcontext ctx, jobject self);
jobject M_mindustry_ai_BaseRegistry_forResource_mindustry_ctype_Content_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_BaseRegistry_load(jcontext ctx, jobject self);
void SM_mindustry_ai_BaseRegistry_lambda$load$3_mindustry_ctype_Content_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1);
jfloat SM_mindustry_ai_BaseRegistry_lambda$load$2_mindustry_ai_BaseRegistry$BasePart_R_float(jcontext ctx, jobject param0);
jfloat SM_mindustry_ai_BaseRegistry_lambda$load$1_mindustry_game_Schematic$Stile_R_float(jcontext ctx, jobject param0);
jbool SM_mindustry_ai_BaseRegistry_lambda$load$0_mindustry_game_Schematic$Stile_R_boolean(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
