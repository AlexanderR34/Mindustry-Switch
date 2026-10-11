#ifndef HEADER_rhino_classfile_ClassFileWriter$BootstrapEntry
#define HEADER_rhino_classfile_ClassFileWriter$BootstrapEntry

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_classfile_ClassFileWriter$BootstrapEntry {
	java_lang_Object parent;
	jref F_code;
	jref F_this$0;
} rhino_classfile_ClassFileWriter$BootstrapEntry;

extern Class class_rhino_classfile_ClassFileWriter$BootstrapEntry;


#define VTABLE_rhino_classfile_ClassFileWriter$BootstrapEntry_hashCode_R_int 0
typedef jint (*func_rhino_classfile_ClassFileWriter$BootstrapEntry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$BootstrapEntry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_classfile_ClassFileWriter$BootstrapEntry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ClassFileWriter$BootstrapEntry_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_classfile_ClassFileWriter$BootstrapEntry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$BootstrapEntry_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_classfile_ClassFileWriter$BootstrapEntry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$BootstrapEntry_toString_R_java_lang_String 4
typedef jobject (*func_rhino_classfile_ClassFileWriter$BootstrapEntry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$BootstrapEntry_finalize 5
typedef void (*func_rhino_classfile_ClassFileWriter$BootstrapEntry_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$BootstrapEntry_notify 6
typedef void (*func_rhino_classfile_ClassFileWriter$BootstrapEntry_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$BootstrapEntry_notifyAll 7
typedef void (*func_rhino_classfile_ClassFileWriter$BootstrapEntry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$BootstrapEntry_wait 8
typedef void (*func_rhino_classfile_ClassFileWriter$BootstrapEntry_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$BootstrapEntry_wait_long 9
typedef void (*func_rhino_classfile_ClassFileWriter$BootstrapEntry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_classfile_ClassFileWriter$BootstrapEntry_wait_long_int 10
typedef void (*func_rhino_classfile_ClassFileWriter$BootstrapEntry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_classfile_ClassFileWriter$BootstrapEntry(jobject object, jint mark, jint depth);
void clinit_rhino_classfile_ClassFileWriter$BootstrapEntry(jcontext ctx);
void init_rhino_classfile_ClassFileWriter$BootstrapEntry_rhino_classfile_ClassFileWriter_rhino_classfile_ClassFileWriter$MHandle_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jbool M_rhino_classfile_ClassFileWriter$BootstrapEntry_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_rhino_classfile_ClassFileWriter$BootstrapEntry_hashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
