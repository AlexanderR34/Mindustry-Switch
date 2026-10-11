#ifndef HEADER_arc_struct_EnumSet
#define HEADER_arc_struct_EnumSet

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_EnumSet {
	java_lang_Object parent;
	jint F_mask;
	jref F_array;
	jint F_size;
} arc_struct_EnumSet;

extern Class class_arc_struct_EnumSet;


#define VTABLE_arc_struct_EnumSet_hashCode_R_int 0
typedef jint (*func_arc_struct_EnumSet_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_EnumSet_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_EnumSet_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_EnumSet_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_EnumSet_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_EnumSet_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_EnumSet_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_EnumSet_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_EnumSet_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_EnumSet_finalize 5
typedef void (*func_arc_struct_EnumSet_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_EnumSet_notify 6
typedef void (*func_arc_struct_EnumSet_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_EnumSet_notifyAll 7
typedef void (*func_arc_struct_EnumSet_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_EnumSet_wait 8
typedef void (*func_arc_struct_EnumSet_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_EnumSet_wait_long 9
typedef void (*func_arc_struct_EnumSet_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_EnumSet_wait_long_int 10
typedef void (*func_arc_struct_EnumSet_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_EnumSet_with_java_lang_Enum_R_arc_struct_EnumSet 11
typedef jobject (*func_arc_struct_EnumSet_with_java_lang_Enum_R_arc_struct_EnumSet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_EnumSet_contains_java_lang_Enum_R_boolean 12
typedef jbool (*func_arc_struct_EnumSet_contains_java_lang_Enum_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_EnumSet_containsAny_arc_struct_EnumSet_R_boolean 13
typedef jbool (*func_arc_struct_EnumSet_containsAny_arc_struct_EnumSet_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_EnumSet_containsAll_arc_struct_EnumSet_R_boolean 14
typedef jbool (*func_arc_struct_EnumSet_containsAll_arc_struct_EnumSet_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_arc_struct_EnumSet(jobject object, jint mark, jint depth);
void clinit_arc_struct_EnumSet(jcontext ctx);
void init_arc_struct_EnumSet(jcontext ctx, jobject self);
void init_arc_struct_EnumSet_int(jcontext ctx, jobject self, jint param0);
jobject SM_arc_struct_EnumSet_of_Array1_java_lang_Enum_R_arc_struct_EnumSet(jcontext ctx, jobject param0);
jobject M_arc_struct_EnumSet_with_java_lang_Enum_R_arc_struct_EnumSet(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_EnumSet_contains_java_lang_Enum_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_EnumSet_containsAny_arc_struct_EnumSet_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_EnumSet_containsAll_arc_struct_EnumSet_R_boolean(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
