#ifndef HEADER_mindustry_gen_TiledState
#define HEADER_mindustry_gen_TiledState

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_TiledState {
	java_lang_Object parent;
} mindustry_gen_TiledState;

extern Class class_mindustry_gen_TiledState;

extern jlong SF_mindustry_gen_TiledState_bitMaskX;
extern jlong SF_mindustry_gen_TiledState_bitMaskY;
extern jlong SF_mindustry_gen_TiledState_bitMaskSize;
extern jlong SF_mindustry_gen_TiledState_bitMaskChanges;

#define VTABLE_mindustry_gen_TiledState_hashCode_R_int 0
typedef jint (*func_mindustry_gen_TiledState_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TiledState_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_TiledState_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TiledState_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_TiledState_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TiledState_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_TiledState_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TiledState_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_TiledState_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TiledState_finalize 5
typedef void (*func_mindustry_gen_TiledState_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TiledState_notify 6
typedef void (*func_mindustry_gen_TiledState_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TiledState_notifyAll 7
typedef void (*func_mindustry_gen_TiledState_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TiledState_wait 8
typedef void (*func_mindustry_gen_TiledState_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TiledState_wait_long 9
typedef void (*func_mindustry_gen_TiledState_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_TiledState_wait_long_int 10
typedef void (*func_mindustry_gen_TiledState_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_gen_TiledState(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_TiledState(jcontext ctx);
void init_mindustry_gen_TiledState(jcontext ctx, jobject self);
jint SM_mindustry_gen_TiledState_x_long_R_int(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_TiledState_x_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jint SM_mindustry_gen_TiledState_y_long_R_int(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_TiledState_y_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jint SM_mindustry_gen_TiledState_size_long_R_int(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_TiledState_size_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jint SM_mindustry_gen_TiledState_changes_long_R_int(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_TiledState_changes_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jlong SM_mindustry_gen_TiledState_get_int_int_int_int_R_long(jcontext ctx, jint param0, jint param1, jint param2, jint param3);

#ifdef __cplusplus
}
#endif

#endif
