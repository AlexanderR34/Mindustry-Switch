#ifndef HEADER_mindustry_type_PayloadStack
#define HEADER_mindustry_type_PayloadStack

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_type_PayloadStack {
	java_lang_Object parent;
	jref F_item;
	jint F_amount;
} mindustry_type_PayloadStack;

extern Class class_mindustry_type_PayloadStack;


#define VTABLE_mindustry_type_PayloadStack_hashCode_R_int 0
typedef jint (*func_mindustry_type_PayloadStack_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_PayloadStack_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_type_PayloadStack_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_PayloadStack_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_type_PayloadStack_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_PayloadStack_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_type_PayloadStack_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_PayloadStack_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_type_PayloadStack_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_PayloadStack_finalize 5
typedef void (*func_mindustry_type_PayloadStack_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_PayloadStack_notify 6
typedef void (*func_mindustry_type_PayloadStack_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_PayloadStack_notifyAll 7
typedef void (*func_mindustry_type_PayloadStack_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_PayloadStack_wait 8
typedef void (*func_mindustry_type_PayloadStack_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_PayloadStack_wait_long 9
typedef void (*func_mindustry_type_PayloadStack_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_type_PayloadStack_wait_long_int 10
typedef void (*func_mindustry_type_PayloadStack_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_type_PayloadStack_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_type_PayloadStack_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_PayloadStack_compareTo_mindustry_type_PayloadStack_R_int 12
typedef jint (*func_mindustry_type_PayloadStack_compareTo_mindustry_type_PayloadStack_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_type_PayloadStack(jobject object, jint mark, jint depth);
void clinit_mindustry_type_PayloadStack(jcontext ctx);
void init_mindustry_type_PayloadStack_mindustry_ctype_UnlockableContent_int(jcontext ctx, jobject self, jobject param0, jint param1);
void init_mindustry_type_PayloadStack_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self, jobject param0);
void init_mindustry_type_PayloadStack(jcontext ctx, jobject self);
jobject SM_mindustry_type_PayloadStack_with_Array1_java_lang_Object_R_Array1_mindustry_type_PayloadStack(jcontext ctx, jobject param0);
jobject SM_mindustry_type_PayloadStack_list_Array1_java_lang_Object_R_arc_struct_Seq(jcontext ctx, jobject param0);
jint M_mindustry_type_PayloadStack_compareTo_mindustry_type_PayloadStack_R_int(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_type_PayloadStack_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_type_PayloadStack_toString_R_java_lang_String(jcontext ctx, jobject self);
jint M_mindustry_type_PayloadStack_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
