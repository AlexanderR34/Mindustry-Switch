#ifndef HEADER_rhino_classfile_ConstantEntry
#define HEADER_rhino_classfile_ConstantEntry

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_classfile_ConstantEntry {
	java_lang_Object parent;
	jint F_type;
	jint F_intval;
	jlong F_longval;
	jref F_str1;
	jref F_str2;
	jint F_hashcode;
} rhino_classfile_ConstantEntry;

extern Class class_rhino_classfile_ConstantEntry;


#define VTABLE_rhino_classfile_ConstantEntry_hashCode_R_int 0
typedef jint (*func_rhino_classfile_ConstantEntry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ConstantEntry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_classfile_ConstantEntry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ConstantEntry_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_classfile_ConstantEntry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ConstantEntry_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_classfile_ConstantEntry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ConstantEntry_toString_R_java_lang_String 4
typedef jobject (*func_rhino_classfile_ConstantEntry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ConstantEntry_finalize 5
typedef void (*func_rhino_classfile_ConstantEntry_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ConstantEntry_notify 6
typedef void (*func_rhino_classfile_ConstantEntry_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ConstantEntry_notifyAll 7
typedef void (*func_rhino_classfile_ConstantEntry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ConstantEntry_wait 8
typedef void (*func_rhino_classfile_ConstantEntry_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ConstantEntry_wait_long 9
typedef void (*func_rhino_classfile_ConstantEntry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_classfile_ConstantEntry_wait_long_int 10
typedef void (*func_rhino_classfile_ConstantEntry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_classfile_ConstantEntry(jobject object, jint mark, jint depth);
void clinit_rhino_classfile_ConstantEntry(jcontext ctx);
void init_rhino_classfile_ConstantEntry_int_int_java_lang_String_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3);
jint M_rhino_classfile_ConstantEntry_hashCode_R_int(jcontext ctx, jobject self);
jbool M_rhino_classfile_ConstantEntry_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
