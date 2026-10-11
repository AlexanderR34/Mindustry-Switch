#ifndef HEADER_regexodus_MemReg
#define HEADER_regexodus_MemReg

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_MemReg {
	java_lang_Object parent;
	jint F_index;
	jint F_in;
	jint F_out;
	jint F_tmp;
} regexodus_MemReg;

extern Class class_regexodus_MemReg;

extern jlong SF_regexodus_MemReg_serialVersionUID;

#define VTABLE_regexodus_MemReg_hashCode_R_int 0
typedef jint (*func_regexodus_MemReg_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_MemReg_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_MemReg_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_MemReg_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_MemReg_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_MemReg_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_MemReg_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_MemReg_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_MemReg_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_MemReg_finalize 5
typedef void (*func_regexodus_MemReg_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_MemReg_notify 6
typedef void (*func_regexodus_MemReg_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_MemReg_notifyAll 7
typedef void (*func_regexodus_MemReg_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_MemReg_wait 8
typedef void (*func_regexodus_MemReg_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_MemReg_wait_long 9
typedef void (*func_regexodus_MemReg_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_MemReg_wait_long_int 10
typedef void (*func_regexodus_MemReg_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_MemReg_reset 11
typedef void (*func_regexodus_MemReg_reset)(jcontext ctx, jobject self);

void mark_regexodus_MemReg(jobject object, jint mark, jint depth);
void clinit_regexodus_MemReg(jcontext ctx);
void init_regexodus_MemReg_int(jcontext ctx, jobject self, jint param0);
void M_regexodus_MemReg_reset(jcontext ctx, jobject self);
jbool M_regexodus_MemReg_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_regexodus_MemReg_hashCode_R_int(jcontext ctx, jobject self);
jobject M_regexodus_MemReg_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
