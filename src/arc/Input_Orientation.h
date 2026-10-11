#ifndef HEADER_arc_Input$Orientation
#define HEADER_arc_Input$Orientation

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_Input$Orientation {
	java_lang_Enum parent;
} arc_Input$Orientation;

extern Class class_arc_Input$Orientation;

extern jobject SF_arc_Input$Orientation_landscape;
extern jobject SF_arc_Input$Orientation_portrait;
extern jobject SF_arc_Input$Orientation_$VALUES;

#define VTABLE_arc_Input$Orientation_hashCode_R_int 0
typedef jint (*func_arc_Input$Orientation_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$Orientation_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_Input$Orientation_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Input$Orientation_clone_R_java_lang_Object 2
typedef jobject (*func_arc_Input$Orientation_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$Orientation_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_Input$Orientation_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$Orientation_toString_R_java_lang_String 4
typedef jobject (*func_arc_Input$Orientation_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$Orientation_finalize 5
typedef void (*func_arc_Input$Orientation_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$Orientation_notify 6
typedef void (*func_arc_Input$Orientation_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$Orientation_notifyAll 7
typedef void (*func_arc_Input$Orientation_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$Orientation_wait 8
typedef void (*func_arc_Input$Orientation_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$Orientation_wait_long 9
typedef void (*func_arc_Input$Orientation_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_Input$Orientation_wait_long_int 10
typedef void (*func_arc_Input$Orientation_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_Input$Orientation_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_Input$Orientation_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Input$Orientation_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_Input$Orientation_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Input$Orientation_name_R_java_lang_String 13
typedef jobject (*func_arc_Input$Orientation_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$Orientation_ordinal_R_int 14
typedef jint (*func_arc_Input$Orientation_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$Orientation_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_Input$Orientation_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_arc_Input$Orientation(jobject object, jint mark, jint depth);
void clinit_arc_Input$Orientation(jcontext ctx);
jobject SM_arc_Input$Orientation_values_R_Array1_arc_Input$Orientation(jcontext ctx);
jobject SM_arc_Input$Orientation_valueOf_java_lang_String_R_arc_Input$Orientation(jcontext ctx, jobject param0);
void init_arc_Input$Orientation_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_arc_Input$Orientation_$values_R_Array1_arc_Input$Orientation(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
