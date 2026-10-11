#ifndef HEADER_arc_audio_Audio$1
#define HEADER_arc_audio_Audio$1

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/ApplicationListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_audio_Audio$1 {
	java_lang_Object parent;
	jref F_this$0;
} arc_audio_Audio$1;

extern Class class_arc_audio_Audio$1;


#define VTABLE_arc_audio_Audio$1_hashCode_R_int 0
typedef jint (*func_arc_audio_Audio$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_audio_Audio$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_Audio$1_clone_R_java_lang_Object 2
typedef jobject (*func_arc_audio_Audio$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio$1_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_audio_Audio$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio$1_toString_R_java_lang_String 4
typedef jobject (*func_arc_audio_Audio$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio$1_finalize 5
typedef void (*func_arc_audio_Audio$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio$1_notify 6
typedef void (*func_arc_audio_Audio$1_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio$1_notifyAll 7
typedef void (*func_arc_audio_Audio$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio$1_wait 8
typedef void (*func_arc_audio_Audio$1_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio$1_wait_long 9
typedef void (*func_arc_audio_Audio$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_audio_Audio$1_wait_long_int 10
typedef void (*func_arc_audio_Audio$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_audio_Audio$1_init 11
typedef void (*func_arc_audio_Audio$1_init)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio$1_resize_int_int 12
typedef void (*func_arc_audio_Audio$1_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_audio_Audio$1_update 13
typedef void (*func_arc_audio_Audio$1_update)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio$1_pause 14
typedef void (*func_arc_audio_Audio$1_pause)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio$1_resume 15
typedef void (*func_arc_audio_Audio$1_resume)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio$1_dispose 16
typedef void (*func_arc_audio_Audio$1_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio$1_exit 17
typedef void (*func_arc_audio_Audio$1_exit)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio$1_fileDropped_arc_files_Fi 18
typedef void (*func_arc_audio_Audio$1_fileDropped_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);

void mark_arc_audio_Audio$1(jobject object, jint mark, jint depth);
void clinit_arc_audio_Audio$1(jcontext ctx);
void init_arc_audio_Audio$1_arc_audio_Audio(jcontext ctx, jobject self, jobject param0);
void M_arc_audio_Audio$1_update(jcontext ctx, jobject self);
void M_arc_audio_Audio$1_pause(jcontext ctx, jobject self);
void M_arc_audio_Audio$1_resume(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
