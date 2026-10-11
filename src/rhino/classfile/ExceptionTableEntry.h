#ifndef HEADER_rhino_classfile_ExceptionTableEntry
#define HEADER_rhino_classfile_ExceptionTableEntry

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_classfile_ExceptionTableEntry {
	java_lang_Object parent;
	jint F_itsStartLabel;
	jint F_itsEndLabel;
	jint F_itsHandlerLabel;
	jshort F_itsCatchType;
} rhino_classfile_ExceptionTableEntry;

extern Class class_rhino_classfile_ExceptionTableEntry;


#define VTABLE_rhino_classfile_ExceptionTableEntry_hashCode_R_int 0
typedef jint (*func_rhino_classfile_ExceptionTableEntry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ExceptionTableEntry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_classfile_ExceptionTableEntry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ExceptionTableEntry_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_classfile_ExceptionTableEntry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ExceptionTableEntry_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_classfile_ExceptionTableEntry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ExceptionTableEntry_toString_R_java_lang_String 4
typedef jobject (*func_rhino_classfile_ExceptionTableEntry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ExceptionTableEntry_finalize 5
typedef void (*func_rhino_classfile_ExceptionTableEntry_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ExceptionTableEntry_notify 6
typedef void (*func_rhino_classfile_ExceptionTableEntry_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ExceptionTableEntry_notifyAll 7
typedef void (*func_rhino_classfile_ExceptionTableEntry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ExceptionTableEntry_wait 8
typedef void (*func_rhino_classfile_ExceptionTableEntry_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ExceptionTableEntry_wait_long 9
typedef void (*func_rhino_classfile_ExceptionTableEntry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_classfile_ExceptionTableEntry_wait_long_int 10
typedef void (*func_rhino_classfile_ExceptionTableEntry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_classfile_ExceptionTableEntry(jobject object, jint mark, jint depth);
void clinit_rhino_classfile_ExceptionTableEntry(jcontext ctx);
void init_rhino_classfile_ExceptionTableEntry_int_int_int_short(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jshort param3);

#ifdef __cplusplus
}
#endif

#endif
