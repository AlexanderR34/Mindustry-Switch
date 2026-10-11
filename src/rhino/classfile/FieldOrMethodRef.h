#ifndef HEADER_rhino_classfile_FieldOrMethodRef
#define HEADER_rhino_classfile_FieldOrMethodRef

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_classfile_FieldOrMethodRef {
	java_lang_Object parent;
	jref F_className;
	jref F_name;
	jref F_type;
	jint F_hashCode;
} rhino_classfile_FieldOrMethodRef;

extern Class class_rhino_classfile_FieldOrMethodRef;


#define VTABLE_rhino_classfile_FieldOrMethodRef_hashCode_R_int 0
typedef jint (*func_rhino_classfile_FieldOrMethodRef_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_FieldOrMethodRef_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_classfile_FieldOrMethodRef_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_FieldOrMethodRef_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_classfile_FieldOrMethodRef_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_FieldOrMethodRef_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_classfile_FieldOrMethodRef_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_FieldOrMethodRef_toString_R_java_lang_String 4
typedef jobject (*func_rhino_classfile_FieldOrMethodRef_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_FieldOrMethodRef_finalize 5
typedef void (*func_rhino_classfile_FieldOrMethodRef_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_FieldOrMethodRef_notify 6
typedef void (*func_rhino_classfile_FieldOrMethodRef_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_FieldOrMethodRef_notifyAll 7
typedef void (*func_rhino_classfile_FieldOrMethodRef_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_FieldOrMethodRef_wait 8
typedef void (*func_rhino_classfile_FieldOrMethodRef_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_FieldOrMethodRef_wait_long 9
typedef void (*func_rhino_classfile_FieldOrMethodRef_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_classfile_FieldOrMethodRef_wait_long_int 10
typedef void (*func_rhino_classfile_FieldOrMethodRef_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_classfile_FieldOrMethodRef_getClassName_R_java_lang_String 11
typedef jobject (*func_rhino_classfile_FieldOrMethodRef_getClassName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_FieldOrMethodRef_getName_R_java_lang_String 12
typedef jobject (*func_rhino_classfile_FieldOrMethodRef_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_FieldOrMethodRef_getType_R_java_lang_String 13
typedef jobject (*func_rhino_classfile_FieldOrMethodRef_getType_R_java_lang_String)(jcontext ctx, jobject self);

void mark_rhino_classfile_FieldOrMethodRef(jobject object, jint mark, jint depth);
void clinit_rhino_classfile_FieldOrMethodRef(jcontext ctx);
void init_rhino_classfile_FieldOrMethodRef_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_rhino_classfile_FieldOrMethodRef_getClassName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_rhino_classfile_FieldOrMethodRef_getName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_rhino_classfile_FieldOrMethodRef_getType_R_java_lang_String(jcontext ctx, jobject self);
jbool M_rhino_classfile_FieldOrMethodRef_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_rhino_classfile_FieldOrMethodRef_hashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
