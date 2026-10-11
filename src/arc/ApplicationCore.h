#ifndef HEADER_arc_ApplicationCore
#define HEADER_arc_ApplicationCore

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/ApplicationListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_ApplicationCore {
	java_lang_Object parent;
	jref F_modules;
} arc_ApplicationCore;

extern Class class_arc_ApplicationCore;


#define VTABLE_arc_ApplicationCore_hashCode_R_int 0
typedef jint (*func_arc_ApplicationCore_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_ApplicationCore_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_ApplicationCore_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_ApplicationCore_clone_R_java_lang_Object 2
typedef jobject (*func_arc_ApplicationCore_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_ApplicationCore_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_ApplicationCore_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_ApplicationCore_toString_R_java_lang_String 4
typedef jobject (*func_arc_ApplicationCore_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_ApplicationCore_finalize 5
typedef void (*func_arc_ApplicationCore_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_ApplicationCore_notify 6
typedef void (*func_arc_ApplicationCore_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_ApplicationCore_notifyAll 7
typedef void (*func_arc_ApplicationCore_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_ApplicationCore_wait 8
typedef void (*func_arc_ApplicationCore_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_ApplicationCore_wait_long 9
typedef void (*func_arc_ApplicationCore_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_ApplicationCore_wait_long_int 10
typedef void (*func_arc_ApplicationCore_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_ApplicationCore_init 11
typedef void (*func_arc_ApplicationCore_init)(jcontext ctx, jobject self);
#define VTABLE_arc_ApplicationCore_resize_int_int 12
typedef void (*func_arc_ApplicationCore_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_ApplicationCore_update 13
typedef void (*func_arc_ApplicationCore_update)(jcontext ctx, jobject self);
#define VTABLE_arc_ApplicationCore_pause 14
typedef void (*func_arc_ApplicationCore_pause)(jcontext ctx, jobject self);
#define VTABLE_arc_ApplicationCore_resume 15
typedef void (*func_arc_ApplicationCore_resume)(jcontext ctx, jobject self);
#define VTABLE_arc_ApplicationCore_dispose 16
typedef void (*func_arc_ApplicationCore_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_ApplicationCore_exit 17
typedef void (*func_arc_ApplicationCore_exit)(jcontext ctx, jobject self);
#define VTABLE_arc_ApplicationCore_fileDropped_arc_files_Fi 18
typedef void (*func_arc_ApplicationCore_fileDropped_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_ApplicationCore_add_arc_ApplicationListener 19
typedef void (*func_arc_ApplicationCore_add_arc_ApplicationListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_ApplicationCore_setup 20
typedef void (*func_arc_ApplicationCore_setup)(jcontext ctx, jobject self);

void mark_arc_ApplicationCore(jobject object, jint mark, jint depth);
void clinit_arc_ApplicationCore(jcontext ctx);
void init_arc_ApplicationCore(jcontext ctx, jobject self);
void M_arc_ApplicationCore_add_arc_ApplicationListener(jcontext ctx, jobject self, jobject param0);
void M_arc_ApplicationCore_init(jcontext ctx, jobject self);
void M_arc_ApplicationCore_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_ApplicationCore_update(jcontext ctx, jobject self);
void M_arc_ApplicationCore_pause(jcontext ctx, jobject self);
void M_arc_ApplicationCore_resume(jcontext ctx, jobject self);
void M_arc_ApplicationCore_dispose(jcontext ctx, jobject self);
void M_arc_ApplicationCore_fileDropped_arc_files_Fi(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
