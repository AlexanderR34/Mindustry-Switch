#ifndef HEADER_java_lang_ProcessBuilder$Redirect$1
#define HEADER_java_lang_ProcessBuilder$Redirect$1

#include "Clearwing.h"
#include "java/lang/ProcessBuilder_Redirect.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_ProcessBuilder$Redirect$1 {
	java_lang_ProcessBuilder$Redirect parent;
} java_lang_ProcessBuilder$Redirect$1;

extern Class class_java_lang_ProcessBuilder$Redirect$1;


#define VTABLE_java_lang_ProcessBuilder$Redirect$1_hashCode_R_int 0
typedef jint (*func_java_lang_ProcessBuilder$Redirect$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_ProcessBuilder$Redirect$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ProcessBuilder$Redirect$1_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_ProcessBuilder$Redirect$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$1_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_ProcessBuilder$Redirect$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$1_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_ProcessBuilder$Redirect$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$1_finalize 5
typedef void (*func_java_lang_ProcessBuilder$Redirect$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$1_notify 6
typedef void (*func_java_lang_ProcessBuilder$Redirect$1_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$1_notifyAll 7
typedef void (*func_java_lang_ProcessBuilder$Redirect$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$1_wait 8
typedef void (*func_java_lang_ProcessBuilder$Redirect$1_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$1_wait_long 9
typedef void (*func_java_lang_ProcessBuilder$Redirect$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_ProcessBuilder$Redirect$1_wait_long_int 10
typedef void (*func_java_lang_ProcessBuilder$Redirect$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_ProcessBuilder$Redirect$1_type_R_java_lang_ProcessBuilder$Redirect$Type 11
typedef jobject (*func_java_lang_ProcessBuilder$Redirect$1_type_R_java_lang_ProcessBuilder$Redirect$Type)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$1_file_R_java_io_File 12
typedef jobject (*func_java_lang_ProcessBuilder$Redirect$1_file_R_java_io_File)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$1_append_R_boolean 13
typedef jbool (*func_java_lang_ProcessBuilder$Redirect$1_append_R_boolean)(jcontext ctx, jobject self);

void mark_java_lang_ProcessBuilder$Redirect$1(jobject object, jint mark, jint depth);
void clinit_java_lang_ProcessBuilder$Redirect$1(jcontext ctx);
void init_java_lang_ProcessBuilder$Redirect$1(jcontext ctx, jobject self);
jobject M_java_lang_ProcessBuilder$Redirect$1_type_R_java_lang_ProcessBuilder$Redirect$Type(jcontext ctx, jobject self);
jobject M_java_lang_ProcessBuilder$Redirect$1_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
