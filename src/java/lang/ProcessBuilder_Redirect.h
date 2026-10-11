#ifndef HEADER_java_lang_ProcessBuilder$Redirect
#define HEADER_java_lang_ProcessBuilder$Redirect

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_ProcessBuilder$Redirect {
	java_lang_Object parent;
} java_lang_ProcessBuilder$Redirect;

extern Class class_java_lang_ProcessBuilder$Redirect;

extern jobject SF_java_lang_ProcessBuilder$Redirect_NULL_FILE;
extern jobject SF_java_lang_ProcessBuilder$Redirect_PIPE;
extern jobject SF_java_lang_ProcessBuilder$Redirect_INHERIT;
extern jobject SF_java_lang_ProcessBuilder$Redirect_DISCARD;
extern jbool SF_java_lang_ProcessBuilder$Redirect_$assertionsDisabled;

#define VTABLE_java_lang_ProcessBuilder$Redirect_hashCode_R_int 0
typedef jint (*func_java_lang_ProcessBuilder$Redirect_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_ProcessBuilder$Redirect_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ProcessBuilder$Redirect_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_ProcessBuilder$Redirect_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_ProcessBuilder$Redirect_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_ProcessBuilder$Redirect_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect_finalize 5
typedef void (*func_java_lang_ProcessBuilder$Redirect_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect_notify 6
typedef void (*func_java_lang_ProcessBuilder$Redirect_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect_notifyAll 7
typedef void (*func_java_lang_ProcessBuilder$Redirect_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect_wait 8
typedef void (*func_java_lang_ProcessBuilder$Redirect_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect_wait_long 9
typedef void (*func_java_lang_ProcessBuilder$Redirect_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_ProcessBuilder$Redirect_wait_long_int 10
typedef void (*func_java_lang_ProcessBuilder$Redirect_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_ProcessBuilder$Redirect_type_R_java_lang_ProcessBuilder$Redirect$Type 11
typedef jobject (*func_java_lang_ProcessBuilder$Redirect_type_R_java_lang_ProcessBuilder$Redirect$Type)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect_file_R_java_io_File 12
typedef jobject (*func_java_lang_ProcessBuilder$Redirect_file_R_java_io_File)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect_append_R_boolean 13
typedef jbool (*func_java_lang_ProcessBuilder$Redirect_append_R_boolean)(jcontext ctx, jobject self);

void mark_java_lang_ProcessBuilder$Redirect(jobject object, jint mark, jint depth);
void clinit_java_lang_ProcessBuilder$Redirect(jcontext ctx);
jobject M_java_lang_ProcessBuilder$Redirect_file_R_java_io_File(jcontext ctx, jobject self);
jbool M_java_lang_ProcessBuilder$Redirect_append_R_boolean(jcontext ctx, jobject self);
jobject SM_java_lang_ProcessBuilder$Redirect_from_java_io_File_R_java_lang_ProcessBuilder$Redirect(jcontext ctx, jobject param0);
jobject SM_java_lang_ProcessBuilder$Redirect_to_java_io_File_R_java_lang_ProcessBuilder$Redirect(jcontext ctx, jobject param0);
jobject SM_java_lang_ProcessBuilder$Redirect_appendTo_java_io_File_R_java_lang_ProcessBuilder$Redirect(jcontext ctx, jobject param0);
jbool M_java_lang_ProcessBuilder$Redirect_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_lang_ProcessBuilder$Redirect_hashCode_R_int(jcontext ctx, jobject self);
void init_java_lang_ProcessBuilder$Redirect(jcontext ctx, jobject self);
void init_java_lang_ProcessBuilder$Redirect_java_lang_ProcessBuilder$1(jcontext ctx, jobject self, jobject param0);
jobject SM_java_lang_ProcessBuilder$Redirect_access$100_R_java_io_File(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
