#ifndef HEADER_java_lang_ProcessBuilder$Redirect$4
#define HEADER_java_lang_ProcessBuilder$Redirect$4

#include "Clearwing.h"
#include "java/lang/ProcessBuilder_Redirect.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_ProcessBuilder$Redirect$4 {
	java_lang_ProcessBuilder$Redirect parent;
	jref F_val$file;
} java_lang_ProcessBuilder$Redirect$4;

extern Class class_java_lang_ProcessBuilder$Redirect$4;


#define VTABLE_java_lang_ProcessBuilder$Redirect$4_hashCode_R_int 0
typedef jint (*func_java_lang_ProcessBuilder$Redirect$4_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$4_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_ProcessBuilder$Redirect$4_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ProcessBuilder$Redirect$4_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_ProcessBuilder$Redirect$4_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$4_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_ProcessBuilder$Redirect$4_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$4_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_ProcessBuilder$Redirect$4_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$4_finalize 5
typedef void (*func_java_lang_ProcessBuilder$Redirect$4_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$4_notify 6
typedef void (*func_java_lang_ProcessBuilder$Redirect$4_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$4_notifyAll 7
typedef void (*func_java_lang_ProcessBuilder$Redirect$4_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$4_wait 8
typedef void (*func_java_lang_ProcessBuilder$Redirect$4_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$4_wait_long 9
typedef void (*func_java_lang_ProcessBuilder$Redirect$4_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_ProcessBuilder$Redirect$4_wait_long_int 10
typedef void (*func_java_lang_ProcessBuilder$Redirect$4_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_ProcessBuilder$Redirect$4_type_R_java_lang_ProcessBuilder$Redirect$Type 11
typedef jobject (*func_java_lang_ProcessBuilder$Redirect$4_type_R_java_lang_ProcessBuilder$Redirect$Type)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$4_file_R_java_io_File 12
typedef jobject (*func_java_lang_ProcessBuilder$Redirect$4_file_R_java_io_File)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$4_append_R_boolean 13
typedef jbool (*func_java_lang_ProcessBuilder$Redirect$4_append_R_boolean)(jcontext ctx, jobject self);

void mark_java_lang_ProcessBuilder$Redirect$4(jobject object, jint mark, jint depth);
void clinit_java_lang_ProcessBuilder$Redirect$4(jcontext ctx);
void init_java_lang_ProcessBuilder$Redirect$4_java_io_File(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_ProcessBuilder$Redirect$4_type_R_java_lang_ProcessBuilder$Redirect$Type(jcontext ctx, jobject self);
jobject M_java_lang_ProcessBuilder$Redirect$4_file_R_java_io_File(jcontext ctx, jobject self);
jobject M_java_lang_ProcessBuilder$Redirect$4_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
