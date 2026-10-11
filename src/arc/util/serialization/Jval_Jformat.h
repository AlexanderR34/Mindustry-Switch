#ifndef HEADER_arc_util_serialization_Jval$Jformat
#define HEADER_arc_util_serialization_Jval$Jformat

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_serialization_Jval$Jformat {
	java_lang_Enum parent;
} arc_util_serialization_Jval$Jformat;

extern Class class_arc_util_serialization_Jval$Jformat;

extern jobject SF_arc_util_serialization_Jval$Jformat_plain;
extern jobject SF_arc_util_serialization_Jval$Jformat_minimal;
extern jobject SF_arc_util_serialization_Jval$Jformat_formatted;
extern jobject SF_arc_util_serialization_Jval$Jformat_hjson;
extern jobject SF_arc_util_serialization_Jval$Jformat_$VALUES;

#define VTABLE_arc_util_serialization_Jval$Jformat_hashCode_R_int 0
typedef jint (*func_arc_util_serialization_Jval$Jformat_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jformat_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_serialization_Jval$Jformat_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$Jformat_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_serialization_Jval$Jformat_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jformat_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_serialization_Jval$Jformat_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jformat_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_serialization_Jval$Jformat_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jformat_finalize 5
typedef void (*func_arc_util_serialization_Jval$Jformat_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jformat_notify 6
typedef void (*func_arc_util_serialization_Jval$Jformat_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jformat_notifyAll 7
typedef void (*func_arc_util_serialization_Jval$Jformat_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jformat_wait 8
typedef void (*func_arc_util_serialization_Jval$Jformat_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jformat_wait_long 9
typedef void (*func_arc_util_serialization_Jval$Jformat_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_serialization_Jval$Jformat_wait_long_int 10
typedef void (*func_arc_util_serialization_Jval$Jformat_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_serialization_Jval$Jformat_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_util_serialization_Jval$Jformat_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$Jformat_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_util_serialization_Jval$Jformat_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$Jformat_name_R_java_lang_String 13
typedef jobject (*func_arc_util_serialization_Jval$Jformat_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jformat_ordinal_R_int 14
typedef jint (*func_arc_util_serialization_Jval$Jformat_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jformat_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_util_serialization_Jval$Jformat_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_arc_util_serialization_Jval$Jformat(jobject object, jint mark, jint depth);
void clinit_arc_util_serialization_Jval$Jformat(jcontext ctx);
jobject SM_arc_util_serialization_Jval$Jformat_values_R_Array1_arc_util_serialization_Jval$Jformat(jcontext ctx);
jobject SM_arc_util_serialization_Jval$Jformat_valueOf_java_lang_String_R_arc_util_serialization_Jval$Jformat(jcontext ctx, jobject param0);
void init_arc_util_serialization_Jval$Jformat_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_arc_util_serialization_Jval$Jformat_$values_R_Array1_arc_util_serialization_Jval$Jformat(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
