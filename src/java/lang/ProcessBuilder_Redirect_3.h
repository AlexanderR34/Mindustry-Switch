#ifndef HEADER_java_lang_ProcessBuilder$Redirect$3
#define HEADER_java_lang_ProcessBuilder$Redirect$3

#include "Clearwing.h"
#include "java/lang/ProcessBuilder_Redirect.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_ProcessBuilder$Redirect$3 {
	java_lang_ProcessBuilder$Redirect parent;
} java_lang_ProcessBuilder$Redirect$3;

extern Class class_java_lang_ProcessBuilder$Redirect$3;


#define VTABLE_java_lang_ProcessBuilder$Redirect$3_hashCode_R_int 0
typedef jint (*func_java_lang_ProcessBuilder$Redirect$3_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$3_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_ProcessBuilder$Redirect$3_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ProcessBuilder$Redirect$3_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_ProcessBuilder$Redirect$3_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$3_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_ProcessBuilder$Redirect$3_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$3_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_ProcessBuilder$Redirect$3_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$3_finalize 5
typedef void (*func_java_lang_ProcessBuilder$Redirect$3_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$3_notify 6
typedef void (*func_java_lang_ProcessBuilder$Redirect$3_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$3_notifyAll 7
typedef void (*func_java_lang_ProcessBuilder$Redirect$3_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$3_wait 8
typedef void (*func_java_lang_ProcessBuilder$Redirect$3_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$3_wait_long 9
typedef void (*func_java_lang_ProcessBuilder$Redirect$3_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_ProcessBuilder$Redirect$3_wait_long_int 10
typedef void (*func_java_lang_ProcessBuilder$Redirect$3_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_ProcessBuilder$Redirect$3_type_R_java_lang_ProcessBuilder$Redirect$Type 11
typedef jobject (*func_java_lang_ProcessBuilder$Redirect$3_type_R_java_lang_ProcessBuilder$Redirect$Type)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$3_file_R_java_io_File 12
typedef jobject (*func_java_lang_ProcessBuilder$Redirect$3_file_R_java_io_File)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$3_append_R_boolean 13
typedef jbool (*func_java_lang_ProcessBuilder$Redirect$3_append_R_boolean)(jcontext ctx, jobject self);

void mark_java_lang_ProcessBuilder$Redirect$3(jobject object, jint mark, jint depth);
void clinit_java_lang_ProcessBuilder$Redirect$3(jcontext ctx);
void init_java_lang_ProcessBuilder$Redirect$3(jcontext ctx, jobject self);
jobject M_java_lang_ProcessBuilder$Redirect$3_type_R_java_lang_ProcessBuilder$Redirect$Type(jcontext ctx, jobject self);
jobject M_java_lang_ProcessBuilder$Redirect$3_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_lang_ProcessBuilder$Redirect$3_file_R_java_io_File(jcontext ctx, jobject self);
jbool M_java_lang_ProcessBuilder$Redirect$3_append_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
