#ifndef HEADER_arc_util_Select
#define HEADER_arc_util_Select

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Select {
	java_lang_Object parent;
	jref F_quickSelect;
} arc_util_Select;

extern Class class_arc_util_Select;

extern jobject SF_arc_util_Select_instance;

#define VTABLE_arc_util_Select_hashCode_R_int 0
typedef jint (*func_arc_util_Select_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Select_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Select_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Select_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Select_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Select_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Select_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Select_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Select_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Select_finalize 5
typedef void (*func_arc_util_Select_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Select_notify 6
typedef void (*func_arc_util_Select_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Select_notifyAll 7
typedef void (*func_arc_util_Select_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Select_wait 8
typedef void (*func_arc_util_Select_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Select_wait_long 9
typedef void (*func_arc_util_Select_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Select_wait_long_int 10
typedef void (*func_arc_util_Select_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_Select_select_Array1_java_lang_Object_java_util_Comparator_int_int_R_java_lang_Object 11
typedef jobject (*func_arc_util_Select_select_Array1_java_lang_Object_java_util_Comparator_int_int_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_util_Select_selectIndex_Array1_java_lang_Object_java_util_Comparator_int_int_R_int 12
typedef jint (*func_arc_util_Select_selectIndex_Array1_java_lang_Object_java_util_Comparator_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_util_Select_fastMin_Array1_java_lang_Object_java_util_Comparator_int_R_int 13
typedef jint (*func_arc_util_Select_fastMin_Array1_java_lang_Object_java_util_Comparator_int_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_arc_util_Select_fastMax_Array1_java_lang_Object_java_util_Comparator_int_R_int 14
typedef jint (*func_arc_util_Select_fastMax_Array1_java_lang_Object_java_util_Comparator_int_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);

void mark_arc_util_Select(jobject object, jint mark, jint depth);
void clinit_arc_util_Select(jcontext ctx);
void init_arc_util_Select(jcontext ctx, jobject self);
jobject SM_arc_util_Select_instance_R_arc_util_Select(jcontext ctx);
jobject M_arc_util_Select_select_Array1_java_lang_Object_java_util_Comparator_int_int_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
jint M_arc_util_Select_selectIndex_Array1_java_lang_Object_java_util_Comparator_int_int_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
jint M_arc_util_Select_fastMin_Array1_java_lang_Object_java_util_Comparator_int_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
jint M_arc_util_Select_fastMax_Array1_java_lang_Object_java_util_Comparator_int_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);

#ifdef __cplusplus
}
#endif

#endif
