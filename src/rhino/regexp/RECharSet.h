#ifndef HEADER_rhino_regexp_RECharSet
#define HEADER_rhino_regexp_RECharSet

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_regexp_RECharSet {
	java_lang_Object parent;
	jint F_length;
	jint F_startIndex;
	jint F_strlength;
	jbool F_sense;
	volatile jbool F_converted;
	volatile jref F_bits;
} rhino_regexp_RECharSet;

extern Class class_rhino_regexp_RECharSet;


#define VTABLE_rhino_regexp_RECharSet_hashCode_R_int 0
typedef jint (*func_rhino_regexp_RECharSet_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RECharSet_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_regexp_RECharSet_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_regexp_RECharSet_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_regexp_RECharSet_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RECharSet_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_regexp_RECharSet_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RECharSet_toString_R_java_lang_String 4
typedef jobject (*func_rhino_regexp_RECharSet_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RECharSet_finalize 5
typedef void (*func_rhino_regexp_RECharSet_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RECharSet_notify 6
typedef void (*func_rhino_regexp_RECharSet_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RECharSet_notifyAll 7
typedef void (*func_rhino_regexp_RECharSet_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RECharSet_wait 8
typedef void (*func_rhino_regexp_RECharSet_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RECharSet_wait_long 9
typedef void (*func_rhino_regexp_RECharSet_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_regexp_RECharSet_wait_long_int 10
typedef void (*func_rhino_regexp_RECharSet_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_regexp_RECharSet(jobject object, jint mark, jint depth);
void clinit_rhino_regexp_RECharSet(jcontext ctx);
void init_rhino_regexp_RECharSet_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3);

#ifdef __cplusplus
}
#endif

#endif
