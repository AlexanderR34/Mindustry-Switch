#ifndef HEADER_java_lang_reflect_Array
#define HEADER_java_lang_reflect_Array

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_reflect_Array {
	java_lang_Object parent;
} java_lang_reflect_Array;

extern Class class_java_lang_reflect_Array;


#define VTABLE_java_lang_reflect_Array_hashCode_R_int 0
typedef jint (*func_java_lang_reflect_Array_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Array_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_reflect_Array_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_reflect_Array_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_reflect_Array_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Array_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_reflect_Array_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Array_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_reflect_Array_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Array_finalize 5
typedef void (*func_java_lang_reflect_Array_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Array_notify 6
typedef void (*func_java_lang_reflect_Array_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Array_notifyAll 7
typedef void (*func_java_lang_reflect_Array_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Array_wait 8
typedef void (*func_java_lang_reflect_Array_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Array_wait_long 9
typedef void (*func_java_lang_reflect_Array_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_reflect_Array_wait_long_int 10
typedef void (*func_java_lang_reflect_Array_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_lang_reflect_Array(jobject object, jint mark, jint depth);
void clinit_java_lang_reflect_Array(jcontext ctx);
void init_java_lang_reflect_Array(jcontext ctx, jobject self);
jobject SM_java_lang_reflect_Array_newInstance_java_lang_Class_Array1_int_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(jcontext ctx, jobject param0, jint param1);
jobject SM_java_lang_reflect_Array_newInstanceImpl_java_lang_Class_int_R_java_lang_Object(jcontext ctx, jobject param0, jint param1);
void SM_java_lang_reflect_Array_set_java_lang_Object_int_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2);
jobject SM_java_lang_reflect_Array_get_java_lang_Object_int_R_java_lang_Object(jcontext ctx, jobject param0, jint param1);
jint SM_java_lang_reflect_Array_getLength_java_lang_Object_R_int(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
