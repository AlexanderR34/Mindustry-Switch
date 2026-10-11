#ifndef HEADER_arc_audio_Filters
#define HEADER_arc_audio_Filters

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_audio_Filters {
	java_lang_Object parent;
} arc_audio_Filters;

extern Class class_arc_audio_Filters;

extern jint SF_arc_audio_Filters_paramWet;

#define VTABLE_arc_audio_Filters_hashCode_R_int 0
typedef jint (*func_arc_audio_Filters_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_audio_Filters_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_Filters_clone_R_java_lang_Object 2
typedef jobject (*func_arc_audio_Filters_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_audio_Filters_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters_toString_R_java_lang_String 4
typedef jobject (*func_arc_audio_Filters_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters_finalize 5
typedef void (*func_arc_audio_Filters_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters_notify 6
typedef void (*func_arc_audio_Filters_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters_notifyAll 7
typedef void (*func_arc_audio_Filters_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters_wait 8
typedef void (*func_arc_audio_Filters_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters_wait_long 9
typedef void (*func_arc_audio_Filters_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_audio_Filters_wait_long_int 10
typedef void (*func_arc_audio_Filters_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_audio_Filters(jobject object, jint mark, jint depth);
void clinit_arc_audio_Filters(jcontext ctx);
void init_arc_audio_Filters(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
