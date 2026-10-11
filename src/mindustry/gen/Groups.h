#ifndef HEADER_mindustry_gen_Groups
#define HEADER_mindustry_gen_Groups

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Groups {
	java_lang_Object parent;
} mindustry_gen_Groups;

extern Class class_mindustry_gen_Groups;

extern jobject SF_mindustry_gen_Groups_all;
extern jobject SF_mindustry_gen_Groups_build;
extern jobject SF_mindustry_gen_Groups_bullet;
extern jobject SF_mindustry_gen_Groups_draw;
extern jobject SF_mindustry_gen_Groups_effect;
extern jobject SF_mindustry_gen_Groups_freeQueue;
extern jbool SF_mindustry_gen_Groups_isClearing;
extern jobject SF_mindustry_gen_Groups_player;
extern jobject SF_mindustry_gen_Groups_powerGraph;
extern jobject SF_mindustry_gen_Groups_sync;
extern jobject SF_mindustry_gen_Groups_unit;
extern jobject SF_mindustry_gen_Groups_weather;

#define VTABLE_mindustry_gen_Groups_hashCode_R_int 0
typedef jint (*func_mindustry_gen_Groups_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Groups_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_Groups_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Groups_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_Groups_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Groups_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_Groups_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Groups_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_Groups_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Groups_finalize 5
typedef void (*func_mindustry_gen_Groups_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Groups_notify 6
typedef void (*func_mindustry_gen_Groups_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Groups_notifyAll 7
typedef void (*func_mindustry_gen_Groups_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Groups_wait 8
typedef void (*func_mindustry_gen_Groups_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Groups_wait_long 9
typedef void (*func_mindustry_gen_Groups_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_Groups_wait_long_int 10
typedef void (*func_mindustry_gen_Groups_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_gen_Groups(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Groups(jcontext ctx);
void init_mindustry_gen_Groups(jcontext ctx, jobject self);
void SM_mindustry_gen_Groups_clear(jcontext ctx);
void SM_mindustry_gen_Groups_init(jcontext ctx);
void SM_mindustry_gen_Groups_queueFree_arc_util_pooling_Pool$Poolable(jcontext ctx, jobject param0);
void SM_mindustry_gen_Groups_resize_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void SM_mindustry_gen_Groups_update(jcontext ctx);
void SM_mindustry_gen_Groups_updatePooling(jcontext ctx);
void SM_mindustry_gen_Groups_lambda$init$9_mindustry_gen_Entityc_int(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_gen_Groups_lambda$init$8_mindustry_gen_Entityc_int(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_gen_Groups_lambda$init$7_mindustry_gen_Entityc_int(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_gen_Groups_lambda$init$6_mindustry_gen_Entityc_int(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_gen_Groups_lambda$init$5_mindustry_gen_Entityc_int(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_gen_Groups_lambda$init$4_mindustry_gen_Entityc_int(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_gen_Groups_lambda$init$3_mindustry_gen_Entityc_int(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_gen_Groups_lambda$init$2_mindustry_gen_Entityc_int(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_gen_Groups_lambda$init$1_mindustry_gen_Entityc_int(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_gen_Groups_lambda$init$0_mindustry_gen_Entityc_int(jcontext ctx, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
