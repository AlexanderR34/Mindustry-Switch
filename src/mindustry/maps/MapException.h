#ifndef HEADER_mindustry_maps_MapException
#define HEADER_mindustry_maps_MapException

#include "Clearwing.h"
#include "java/lang/RuntimeException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_maps_MapException {
	java_lang_RuntimeException parent;
	jref F_map;
} mindustry_maps_MapException;

extern Class class_mindustry_maps_MapException;


#define VTABLE_mindustry_maps_MapException_hashCode_R_int 0
typedef jint (*func_mindustry_maps_MapException_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapException_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_maps_MapException_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_MapException_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_maps_MapException_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapException_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_maps_MapException_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapException_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_maps_MapException_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapException_finalize 5
typedef void (*func_mindustry_maps_MapException_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapException_notify 6
typedef void (*func_mindustry_maps_MapException_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapException_notifyAll 7
typedef void (*func_mindustry_maps_MapException_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapException_wait 8
typedef void (*func_mindustry_maps_MapException_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapException_wait_long 9
typedef void (*func_mindustry_maps_MapException_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_maps_MapException_wait_long_int 10
typedef void (*func_mindustry_maps_MapException_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_maps_MapException_initCause_java_lang_Throwable_R_java_lang_Throwable 11
typedef jobject (*func_mindustry_maps_MapException_initCause_java_lang_Throwable_R_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_MapException_getStack_R_java_lang_String 12
typedef jobject (*func_mindustry_maps_MapException_getStack_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapException_getCause_R_java_lang_Throwable 13
typedef jobject (*func_mindustry_maps_MapException_getCause_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapException_getMessage_R_java_lang_String 14
typedef jobject (*func_mindustry_maps_MapException_getMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapException_fillInStack 15
typedef void (*func_mindustry_maps_MapException_fillInStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapException_fillInStackTrace_R_java_lang_Throwable 16
typedef jobject (*func_mindustry_maps_MapException_fillInStackTrace_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapException_printStackTrace 17
typedef void (*func_mindustry_maps_MapException_printStackTrace)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapException_printStackTrace_java_io_PrintStream 18
typedef void (*func_mindustry_maps_MapException_printStackTrace_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_MapException_printStackTrace_java_io_PrintWriter 19
typedef void (*func_mindustry_maps_MapException_printStackTrace_java_io_PrintWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_MapException_getStackTrace_R_Array1_java_lang_StackTraceElement 20
typedef jobject (*func_mindustry_maps_MapException_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapException_setStackTrace_Array1_java_lang_StackTraceElement 21
typedef void (*func_mindustry_maps_MapException_setStackTrace_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_MapException_addSuppressed_java_lang_Throwable 22
typedef void (*func_mindustry_maps_MapException_addSuppressed_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_MapException_getSuppressed_R_Array1_java_lang_Throwable 23
typedef jobject (*func_mindustry_maps_MapException_getSuppressed_R_Array1_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapException_getLocalizedMessage_R_java_lang_String 24
typedef jobject (*func_mindustry_maps_MapException_getLocalizedMessage_R_java_lang_String)(jcontext ctx, jobject self);

void mark_mindustry_maps_MapException(jobject object, jint mark, jint depth);
void clinit_mindustry_maps_MapException(jcontext ctx);
void init_mindustry_maps_MapException_mindustry_maps_Map_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
