#ifndef HEADER_arc_util_Reflect
#define HEADER_arc_util_Reflect

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Reflect {
	java_lang_Object parent;
} arc_util_Reflect;

extern Class class_arc_util_Reflect;


#define VTABLE_arc_util_Reflect_hashCode_R_int 0
typedef jint (*func_arc_util_Reflect_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Reflect_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Reflect_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Reflect_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Reflect_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Reflect_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Reflect_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Reflect_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Reflect_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Reflect_finalize 5
typedef void (*func_arc_util_Reflect_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Reflect_notify 6
typedef void (*func_arc_util_Reflect_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Reflect_notifyAll 7
typedef void (*func_arc_util_Reflect_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Reflect_wait 8
typedef void (*func_arc_util_Reflect_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Reflect_wait_long 9
typedef void (*func_arc_util_Reflect_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Reflect_wait_long_int 10
typedef void (*func_arc_util_Reflect_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_Reflect(jobject object, jint mark, jint depth);
void clinit_arc_util_Reflect(jcontext ctx);
void init_arc_util_Reflect(jcontext ctx, jobject self);
jobject SM_arc_util_Reflect_newArray_java_lang_Class_int_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jint param1);
jobject SM_arc_util_Reflect_newArray_Array1_java_lang_Object_int_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jint param1);
jbool SM_arc_util_Reflect_isWrapper_java_lang_Class_R_boolean(jcontext ctx, jobject param0);
jobject SM_arc_util_Reflect_cons_java_lang_Class_R_arc_func_Prov(jcontext ctx, jobject param0);
jobject SM_arc_util_Reflect_get_java_lang_reflect_Field_R_java_lang_Object(jcontext ctx, jobject param0);
jobject SM_arc_util_Reflect_get_java_lang_Object_java_lang_reflect_Field_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Reflect_get_java_lang_Class_java_lang_Object_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_arc_util_Reflect_get_java_lang_Object_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Reflect_get_java_lang_Class_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
void SM_arc_util_Reflect_set_java_lang_Class_java_lang_Object_java_lang_String_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
void SM_arc_util_Reflect_set_java_lang_Object_java_lang_reflect_Field_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_arc_util_Reflect_set_java_lang_Object_java_lang_String_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_arc_util_Reflect_set_java_lang_Class_java_lang_String_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_arc_util_Reflect_invoke_java_lang_Class_java_lang_Object_java_lang_String_Array1_java_lang_Object_Array1_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jobject SM_arc_util_Reflect_invoke_java_lang_Class_java_lang_String_Array1_java_lang_Object_Array1_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_arc_util_Reflect_invoke_java_lang_Class_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Reflect_invoke_java_lang_Object_java_lang_String_Array1_java_lang_Object_Array1_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_arc_util_Reflect_invoke_java_lang_Object_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Reflect_make_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0);
jobject SM_arc_util_Reflect_lambda$cons$0_java_lang_reflect_Constructor_R_java_lang_Object(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
