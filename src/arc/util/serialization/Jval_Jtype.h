#ifndef HEADER_arc_util_serialization_Jval$Jtype
#define HEADER_arc_util_serialization_Jval$Jtype

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_serialization_Jval$Jtype {
	java_lang_Enum parent;
} arc_util_serialization_Jval$Jtype;

extern Class class_arc_util_serialization_Jval$Jtype;

extern jobject SF_arc_util_serialization_Jval$Jtype_string;
extern jobject SF_arc_util_serialization_Jval$Jtype_number;
extern jobject SF_arc_util_serialization_Jval$Jtype_object;
extern jobject SF_arc_util_serialization_Jval$Jtype_array;
extern jobject SF_arc_util_serialization_Jval$Jtype_bool;
extern jobject SF_arc_util_serialization_Jval$Jtype_nil;
extern jobject SF_arc_util_serialization_Jval$Jtype_$VALUES;

#define VTABLE_arc_util_serialization_Jval$Jtype_hashCode_R_int 0
typedef jint (*func_arc_util_serialization_Jval$Jtype_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jtype_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_serialization_Jval$Jtype_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$Jtype_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_serialization_Jval$Jtype_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jtype_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_serialization_Jval$Jtype_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jtype_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_serialization_Jval$Jtype_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jtype_finalize 5
typedef void (*func_arc_util_serialization_Jval$Jtype_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jtype_notify 6
typedef void (*func_arc_util_serialization_Jval$Jtype_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jtype_notifyAll 7
typedef void (*func_arc_util_serialization_Jval$Jtype_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jtype_wait 8
typedef void (*func_arc_util_serialization_Jval$Jtype_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jtype_wait_long 9
typedef void (*func_arc_util_serialization_Jval$Jtype_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_serialization_Jval$Jtype_wait_long_int 10
typedef void (*func_arc_util_serialization_Jval$Jtype_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_serialization_Jval$Jtype_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_util_serialization_Jval$Jtype_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$Jtype_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_util_serialization_Jval$Jtype_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$Jtype_name_R_java_lang_String 13
typedef jobject (*func_arc_util_serialization_Jval$Jtype_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jtype_ordinal_R_int 14
typedef jint (*func_arc_util_serialization_Jval$Jtype_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jtype_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_util_serialization_Jval$Jtype_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_arc_util_serialization_Jval$Jtype(jobject object, jint mark, jint depth);
void clinit_arc_util_serialization_Jval$Jtype(jcontext ctx);
jobject SM_arc_util_serialization_Jval$Jtype_values_R_Array1_arc_util_serialization_Jval$Jtype(jcontext ctx);
jobject SM_arc_util_serialization_Jval$Jtype_valueOf_java_lang_String_R_arc_util_serialization_Jval$Jtype(jcontext ctx, jobject param0);
void init_arc_util_serialization_Jval$Jtype_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_arc_util_serialization_Jval$Jtype_$values_R_Array1_arc_util_serialization_Jval$Jtype(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
