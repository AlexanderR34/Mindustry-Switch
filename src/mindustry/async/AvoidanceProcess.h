#ifndef HEADER_mindustry_async_AvoidanceProcess
#define HEADER_mindustry_async_AvoidanceProcess

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/async/AsyncProcess.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_async_AvoidanceProcess {
	java_lang_Object parent;
	jref F_buffer1;
	jref F_buffer2;
	volatile jbool F_swap;
	jref F_requests;
	jref F_avoidance;
	jbool F_modified;
	jbool F_active;
} mindustry_async_AvoidanceProcess;

extern Class class_mindustry_async_AvoidanceProcess;

extern jint SF_mindustry_async_AvoidanceProcess_wwidth;
extern jint SF_mindustry_async_AvoidanceProcess_wheight;

#define VTABLE_mindustry_async_AvoidanceProcess_hashCode_R_int 0
typedef jint (*func_mindustry_async_AvoidanceProcess_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AvoidanceProcess_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_async_AvoidanceProcess_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_async_AvoidanceProcess_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_async_AvoidanceProcess_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AvoidanceProcess_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_async_AvoidanceProcess_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AvoidanceProcess_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_async_AvoidanceProcess_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AvoidanceProcess_finalize 5
typedef void (*func_mindustry_async_AvoidanceProcess_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AvoidanceProcess_notify 6
typedef void (*func_mindustry_async_AvoidanceProcess_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AvoidanceProcess_notifyAll 7
typedef void (*func_mindustry_async_AvoidanceProcess_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AvoidanceProcess_wait 8
typedef void (*func_mindustry_async_AvoidanceProcess_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AvoidanceProcess_wait_long 9
typedef void (*func_mindustry_async_AvoidanceProcess_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_async_AvoidanceProcess_wait_long_int 10
typedef void (*func_mindustry_async_AvoidanceProcess_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_async_AvoidanceProcess_init 11
typedef void (*func_mindustry_async_AvoidanceProcess_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AvoidanceProcess_reset 12
typedef void (*func_mindustry_async_AvoidanceProcess_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AvoidanceProcess_begin 13
typedef void (*func_mindustry_async_AvoidanceProcess_begin)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AvoidanceProcess_process 14
typedef void (*func_mindustry_async_AvoidanceProcess_process)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AvoidanceProcess_end 15
typedef void (*func_mindustry_async_AvoidanceProcess_end)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AvoidanceProcess_shouldProcess_R_boolean 16
typedef jbool (*func_mindustry_async_AvoidanceProcess_shouldProcess_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AvoidanceProcess_getAvoidance_R_Array1_int 17
typedef jobject (*func_mindustry_async_AvoidanceProcess_getAvoidance_R_Array1_int)(jcontext ctx, jobject self);

void mark_mindustry_async_AvoidanceProcess(jobject object, jint mark, jint depth);
void clinit_mindustry_async_AvoidanceProcess(jcontext ctx);
void init_mindustry_async_AvoidanceProcess(jcontext ctx, jobject self);
jobject M_mindustry_async_AvoidanceProcess_getAvoidance_R_Array1_int(jcontext ctx, jobject self);
void M_mindustry_async_AvoidanceProcess_init(jcontext ctx, jobject self);
void M_mindustry_async_AvoidanceProcess_reset(jcontext ctx, jobject self);
void M_mindustry_async_AvoidanceProcess_begin(jcontext ctx, jobject self);
void M_mindustry_async_AvoidanceProcess_process(jcontext ctx, jobject self);
jbool M_mindustry_async_AvoidanceProcess_shouldProcess_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
