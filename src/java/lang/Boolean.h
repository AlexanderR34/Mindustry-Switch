#ifndef HEADER_java_lang_Boolean
#define HEADER_java_lang_Boolean

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Boolean {
	java_lang_Object parent;
	jbool F_value;
} java_lang_Boolean;

extern Class class_java_lang_Boolean;

extern jobject SF_java_lang_Boolean_FALSE;
extern jobject SF_java_lang_Boolean_TRUE;
extern jobject SF_java_lang_Boolean_TYPE;

#define VTABLE_java_lang_Boolean_hashCode_R_int 0
typedef jint (*func_java_lang_Boolean_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Boolean_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_Boolean_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Boolean_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_Boolean_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Boolean_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_Boolean_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Boolean_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_Boolean_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Boolean_finalize 5
typedef void (*func_java_lang_Boolean_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Boolean_notify 6
typedef void (*func_java_lang_Boolean_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Boolean_notifyAll 7
typedef void (*func_java_lang_Boolean_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Boolean_wait 8
typedef void (*func_java_lang_Boolean_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Boolean_wait_long 9
typedef void (*func_java_lang_Boolean_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_Boolean_wait_long_int 10
typedef void (*func_java_lang_Boolean_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_Boolean_compareTo_java_lang_Object_R_int 11
typedef jint (*func_java_lang_Boolean_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Boolean_booleanValue_R_boolean 12
typedef jbool (*func_java_lang_Boolean_booleanValue_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Boolean_compareTo_java_lang_Boolean_R_int 13
typedef jint (*func_java_lang_Boolean_compareTo_java_lang_Boolean_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_java_lang_Boolean(jobject object, jint mark, jint depth);
void clinit_java_lang_Boolean(jcontext ctx);
void init_java_lang_Boolean_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_java_lang_Boolean_booleanValue_R_boolean(jcontext ctx, jobject self);
jbool M_java_lang_Boolean_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_lang_Boolean_hashCode_R_int(jcontext ctx, jobject self);
jint SM_java_lang_Boolean_hashCode_boolean_R_int(jcontext ctx, jbool param0);
jobject SM_java_lang_Boolean_toString_boolean_R_java_lang_String(jcontext ctx, jbool param0);
jobject M_java_lang_Boolean_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(jcontext ctx, jbool param0);
jobject SM_java_lang_Boolean_valueOf_java_lang_String_R_java_lang_Boolean(jcontext ctx, jobject param0);
jbool SM_java_lang_Boolean_parseBoolean_java_lang_String_R_boolean(jcontext ctx, jobject param0);
jint M_java_lang_Boolean_compareTo_java_lang_Boolean_R_int(jcontext ctx, jobject self, jobject param0);
jint SM_java_lang_Boolean_compare_boolean_boolean_R_int(jcontext ctx, jbool param0, jbool param1);
jint M_java_lang_Boolean_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
