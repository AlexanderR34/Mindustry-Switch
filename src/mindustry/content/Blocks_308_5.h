#ifndef HEADER_mindustry_content_Blocks$308$5
#define HEADER_mindustry_content_Blocks$308$5

#include "Clearwing.h"
#include "mindustry/entities/pattern/ShootBarrel.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_Blocks$308$5 {
	mindustry_entities_pattern_ShootBarrel parent;
	jref F_this$0;
} mindustry_content_Blocks$308$5;

extern Class class_mindustry_content_Blocks$308$5;


#define VTABLE_mindustry_content_Blocks$308$5_hashCode_R_int 0
typedef jint (*func_mindustry_content_Blocks$308$5_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$308$5_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_Blocks$308$5_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$308$5_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_Blocks$308$5_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$308$5_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_Blocks$308$5_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$308$5_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_Blocks$308$5_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$308$5_finalize 5
typedef void (*func_mindustry_content_Blocks$308$5_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$308$5_notify 6
typedef void (*func_mindustry_content_Blocks$308$5_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$308$5_notifyAll 7
typedef void (*func_mindustry_content_Blocks$308$5_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$308$5_wait 8
typedef void (*func_mindustry_content_Blocks$308$5_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$308$5_wait_long 9
typedef void (*func_mindustry_content_Blocks$308$5_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_Blocks$308$5_wait_long_int 10
typedef void (*func_mindustry_content_Blocks$308$5_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_content_Blocks$308$5_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable 11
typedef void (*func_mindustry_content_Blocks$308$5_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_mindustry_content_Blocks$308$5_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler 12
typedef void (*func_mindustry_content_Blocks$308$5_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_content_Blocks$308$5_flip 13
typedef void (*func_mindustry_content_Blocks$308$5_flip)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$308$5_copy_R_mindustry_entities_pattern_ShootPattern 14
typedef jobject (*func_mindustry_content_Blocks$308$5_copy_R_mindustry_entities_pattern_ShootPattern)(jcontext ctx, jobject self);

void mark_mindustry_content_Blocks$308$5(jobject object, jint mark, jint depth);
void clinit_mindustry_content_Blocks$308$5(jcontext ctx);
void init_mindustry_content_Blocks$308$5_mindustry_content_Blocks$308(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
