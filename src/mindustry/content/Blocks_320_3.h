#ifndef HEADER_mindustry_content_Blocks$320$3
#define HEADER_mindustry_content_Blocks$320$3

#include "Clearwing.h"
#include "mindustry/entities/pattern/ShootHelix.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_Blocks$320$3 {
	mindustry_entities_pattern_ShootHelix parent;
	jref F_this$0;
} mindustry_content_Blocks$320$3;

extern Class class_mindustry_content_Blocks$320$3;


#define VTABLE_mindustry_content_Blocks$320$3_hashCode_R_int 0
typedef jint (*func_mindustry_content_Blocks$320$3_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$320$3_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_Blocks$320$3_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$320$3_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_Blocks$320$3_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$320$3_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_Blocks$320$3_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$320$3_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_Blocks$320$3_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$320$3_finalize 5
typedef void (*func_mindustry_content_Blocks$320$3_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$320$3_notify 6
typedef void (*func_mindustry_content_Blocks$320$3_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$320$3_notifyAll 7
typedef void (*func_mindustry_content_Blocks$320$3_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$320$3_wait 8
typedef void (*func_mindustry_content_Blocks$320$3_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$320$3_wait_long 9
typedef void (*func_mindustry_content_Blocks$320$3_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_Blocks$320$3_wait_long_int 10
typedef void (*func_mindustry_content_Blocks$320$3_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_content_Blocks$320$3_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable 11
typedef void (*func_mindustry_content_Blocks$320$3_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_mindustry_content_Blocks$320$3_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler 12
typedef void (*func_mindustry_content_Blocks$320$3_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_content_Blocks$320$3_flip 13
typedef void (*func_mindustry_content_Blocks$320$3_flip)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$320$3_copy_R_mindustry_entities_pattern_ShootPattern 14
typedef jobject (*func_mindustry_content_Blocks$320$3_copy_R_mindustry_entities_pattern_ShootPattern)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$320$3_lambda$shoot$0_int_mindustry_gen_Bullet 15
typedef void (*func_mindustry_content_Blocks$320$3_lambda$shoot$0_int_mindustry_gen_Bullet)(jcontext ctx, jobject self, jint param0, jobject param1);

void mark_mindustry_content_Blocks$320$3(jobject object, jint mark, jint depth);
void clinit_mindustry_content_Blocks$320$3(jcontext ctx);
void init_mindustry_content_Blocks$320$3_mindustry_content_Blocks$320(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
