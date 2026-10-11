#ifndef HEADER_arc_util_Java16Buffers
#define HEADER_arc_util_Java16Buffers

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Java16Buffers {
	java_lang_Object parent;
} arc_util_Java16Buffers;

extern Class class_arc_util_Java16Buffers;


#define VTABLE_arc_util_Java16Buffers_hashCode_R_int 0
typedef jint (*func_arc_util_Java16Buffers_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Java16Buffers_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Java16Buffers_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Java16Buffers_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Java16Buffers_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Java16Buffers_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Java16Buffers_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Java16Buffers_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Java16Buffers_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Java16Buffers_finalize 5
typedef void (*func_arc_util_Java16Buffers_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Java16Buffers_notify 6
typedef void (*func_arc_util_Java16Buffers_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Java16Buffers_notifyAll 7
typedef void (*func_arc_util_Java16Buffers_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Java16Buffers_wait 8
typedef void (*func_arc_util_Java16Buffers_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Java16Buffers_wait_long 9
typedef void (*func_arc_util_Java16Buffers_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Java16Buffers_wait_long_int 10
typedef void (*func_arc_util_Java16Buffers_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_Java16Buffers(jobject object, jint mark, jint depth);
void clinit_arc_util_Java16Buffers(jcontext ctx);
void init_arc_util_Java16Buffers(jcontext ctx, jobject self);
void SM_arc_util_Java16Buffers_copy_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);

#ifdef __cplusplus
}
#endif

#endif
