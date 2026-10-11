#ifndef HEADER_mindustry_content_Blocks$302$4
#define HEADER_mindustry_content_Blocks$302$4

#include "Clearwing.h"
#include "mindustry/entities/pattern/ShootBarrel.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_Blocks$302$4 {
	mindustry_entities_pattern_ShootBarrel parent;
	jref F_this$0;
} mindustry_content_Blocks$302$4;

extern Class class_mindustry_content_Blocks$302$4;


#define VTABLE_mindustry_content_Blocks$302$4_hashCode_R_int 0
typedef jint (*func_mindustry_content_Blocks$302$4_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$302$4_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_Blocks$302$4_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$302$4_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_Blocks$302$4_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$302$4_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_Blocks$302$4_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$302$4_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_Blocks$302$4_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$302$4_finalize 5
typedef void (*func_mindustry_content_Blocks$302$4_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$302$4_notify 6
typedef void (*func_mindustry_content_Blocks$302$4_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$302$4_notifyAll 7
typedef void (*func_mindustry_content_Blocks$302$4_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$302$4_wait 8
typedef void (*func_mindustry_content_Blocks$302$4_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$302$4_wait_long 9
typedef void (*func_mindustry_content_Blocks$302$4_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_Blocks$302$4_wait_long_int 10
typedef void (*func_mindustry_content_Blocks$302$4_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_content_Blocks$302$4_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable 11
typedef void (*func_mindustry_content_Blocks$302$4_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_mindustry_content_Blocks$302$4_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler 12
typedef void (*func_mindustry_content_Blocks$302$4_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_content_Blocks$302$4_flip 13
typedef void (*func_mindustry_content_Blocks$302$4_flip)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$302$4_copy_R_mindustry_entities_pattern_ShootPattern 14
typedef jobject (*func_mindustry_content_Blocks$302$4_copy_R_mindustry_entities_pattern_ShootPattern)(jcontext ctx, jobject self);

void mark_mindustry_content_Blocks$302$4(jobject object, jint mark, jint depth);
void clinit_mindustry_content_Blocks$302$4(jcontext ctx);
void init_mindustry_content_Blocks$302$4_mindustry_content_Blocks$302(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
