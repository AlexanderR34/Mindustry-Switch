#ifndef HEADER_mindustry_ai_PathfindQueue
#define HEADER_mindustry_ai_PathfindQueue

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_PathfindQueue {
	java_lang_Object parent;
	jref F_queue;
	jref F_weights;
	jint F_size;
} mindustry_ai_PathfindQueue;

extern Class class_mindustry_ai_PathfindQueue;

extern jdouble SF_mindustry_ai_PathfindQueue_CAPACITY_RATIO_LOW;
extern jdouble SF_mindustry_ai_PathfindQueue_CAPACITY_RATIO_HI;

#define VTABLE_mindustry_ai_PathfindQueue_hashCode_R_int 0
typedef jint (*func_mindustry_ai_PathfindQueue_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_PathfindQueue_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_PathfindQueue_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_PathfindQueue_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_PathfindQueue_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_PathfindQueue_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_PathfindQueue_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_PathfindQueue_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_PathfindQueue_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_PathfindQueue_finalize 5
typedef void (*func_mindustry_ai_PathfindQueue_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_PathfindQueue_notify 6
typedef void (*func_mindustry_ai_PathfindQueue_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_PathfindQueue_notifyAll 7
typedef void (*func_mindustry_ai_PathfindQueue_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_PathfindQueue_wait 8
typedef void (*func_mindustry_ai_PathfindQueue_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_PathfindQueue_wait_long 9
typedef void (*func_mindustry_ai_PathfindQueue_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_PathfindQueue_wait_long_int 10
typedef void (*func_mindustry_ai_PathfindQueue_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ai_PathfindQueue_empty_R_boolean 11
typedef jbool (*func_mindustry_ai_PathfindQueue_empty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_PathfindQueue_add_int_float_R_boolean 12
typedef jbool (*func_mindustry_ai_PathfindQueue_add_int_float_R_boolean)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_mindustry_ai_PathfindQueue_peek_R_int 13
typedef jint (*func_mindustry_ai_PathfindQueue_peek_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_PathfindQueue_clear 14
typedef void (*func_mindustry_ai_PathfindQueue_clear)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_PathfindQueue_poll_R_int 15
typedef jint (*func_mindustry_ai_PathfindQueue_poll_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_PathfindQueue_siftUp_int_int_float 16
typedef void (*func_mindustry_ai_PathfindQueue_siftUp_int_int_float)(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2);
#define VTABLE_mindustry_ai_PathfindQueue_siftDown_int_int_float 17
typedef void (*func_mindustry_ai_PathfindQueue_siftDown_int_int_float)(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2);
#define VTABLE_mindustry_ai_PathfindQueue_growToSize_int 18
typedef void (*func_mindustry_ai_PathfindQueue_growToSize_int)(jcontext ctx, jobject self, jint param0);

void mark_mindustry_ai_PathfindQueue(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_PathfindQueue(jcontext ctx);
void init_mindustry_ai_PathfindQueue(jcontext ctx, jobject self);
void init_mindustry_ai_PathfindQueue_int(jcontext ctx, jobject self, jint param0);
jbool M_mindustry_ai_PathfindQueue_empty_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_ai_PathfindQueue_add_int_float_R_boolean(jcontext ctx, jobject self, jint param0, jfloat param1);
jint M_mindustry_ai_PathfindQueue_peek_R_int(jcontext ctx, jobject self);
void M_mindustry_ai_PathfindQueue_clear(jcontext ctx, jobject self);
jint M_mindustry_ai_PathfindQueue_poll_R_int(jcontext ctx, jobject self);
void M_mindustry_ai_PathfindQueue_siftUp_int_int_float(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2);
void M_mindustry_ai_PathfindQueue_siftDown_int_int_float(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2);
void M_mindustry_ai_PathfindQueue_growToSize_int(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
