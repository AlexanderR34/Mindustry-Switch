#ifndef HEADER_rhino_classfile_ClassFileWriter$MHandle
#define HEADER_rhino_classfile_ClassFileWriter$MHandle

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_classfile_ClassFileWriter$MHandle {
	java_lang_Object parent;
	jbyte F_tag;
	jref F_owner;
	jref F_name;
	jref F_desc;
} rhino_classfile_ClassFileWriter$MHandle;

extern Class class_rhino_classfile_ClassFileWriter$MHandle;


#define VTABLE_rhino_classfile_ClassFileWriter$MHandle_hashCode_R_int 0
typedef jint (*func_rhino_classfile_ClassFileWriter$MHandle_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$MHandle_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_classfile_ClassFileWriter$MHandle_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ClassFileWriter$MHandle_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_classfile_ClassFileWriter$MHandle_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$MHandle_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_classfile_ClassFileWriter$MHandle_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$MHandle_toString_R_java_lang_String 4
typedef jobject (*func_rhino_classfile_ClassFileWriter$MHandle_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$MHandle_finalize 5
typedef void (*func_rhino_classfile_ClassFileWriter$MHandle_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$MHandle_notify 6
typedef void (*func_rhino_classfile_ClassFileWriter$MHandle_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$MHandle_notifyAll 7
typedef void (*func_rhino_classfile_ClassFileWriter$MHandle_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$MHandle_wait 8
typedef void (*func_rhino_classfile_ClassFileWriter$MHandle_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$MHandle_wait_long 9
typedef void (*func_rhino_classfile_ClassFileWriter$MHandle_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_classfile_ClassFileWriter$MHandle_wait_long_int 10
typedef void (*func_rhino_classfile_ClassFileWriter$MHandle_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_classfile_ClassFileWriter$MHandle(jobject object, jint mark, jint depth);
void clinit_rhino_classfile_ClassFileWriter$MHandle(jcontext ctx);
void init_rhino_classfile_ClassFileWriter$MHandle_byte_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jbyte param0, jobject param1, jobject param2, jobject param3);
jbool M_rhino_classfile_ClassFileWriter$MHandle_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_rhino_classfile_ClassFileWriter$MHandle_hashCode_R_int(jcontext ctx, jobject self);
jobject M_rhino_classfile_ClassFileWriter$MHandle_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
