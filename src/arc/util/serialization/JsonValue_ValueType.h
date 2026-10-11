#ifndef HEADER_arc_util_serialization_JsonValue$ValueType
#define HEADER_arc_util_serialization_JsonValue$ValueType

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_serialization_JsonValue$ValueType {
	java_lang_Enum parent;
} arc_util_serialization_JsonValue$ValueType;

extern Class class_arc_util_serialization_JsonValue$ValueType;

extern jobject SF_arc_util_serialization_JsonValue$ValueType_object;
extern jobject SF_arc_util_serialization_JsonValue$ValueType_array;
extern jobject SF_arc_util_serialization_JsonValue$ValueType_stringValue;
extern jobject SF_arc_util_serialization_JsonValue$ValueType_doubleValue;
extern jobject SF_arc_util_serialization_JsonValue$ValueType_longValue;
extern jobject SF_arc_util_serialization_JsonValue$ValueType_booleanValue;
extern jobject SF_arc_util_serialization_JsonValue$ValueType_nullValue;
extern jobject SF_arc_util_serialization_JsonValue$ValueType_$VALUES;

#define VTABLE_arc_util_serialization_JsonValue$ValueType_hashCode_R_int 0
typedef jint (*func_arc_util_serialization_JsonValue$ValueType_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$ValueType_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_serialization_JsonValue$ValueType_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_JsonValue$ValueType_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_serialization_JsonValue$ValueType_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$ValueType_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_serialization_JsonValue$ValueType_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$ValueType_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_serialization_JsonValue$ValueType_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$ValueType_finalize 5
typedef void (*func_arc_util_serialization_JsonValue$ValueType_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$ValueType_notify 6
typedef void (*func_arc_util_serialization_JsonValue$ValueType_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$ValueType_notifyAll 7
typedef void (*func_arc_util_serialization_JsonValue$ValueType_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$ValueType_wait 8
typedef void (*func_arc_util_serialization_JsonValue$ValueType_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$ValueType_wait_long 9
typedef void (*func_arc_util_serialization_JsonValue$ValueType_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_serialization_JsonValue$ValueType_wait_long_int 10
typedef void (*func_arc_util_serialization_JsonValue$ValueType_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_serialization_JsonValue$ValueType_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_util_serialization_JsonValue$ValueType_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_JsonValue$ValueType_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_util_serialization_JsonValue$ValueType_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_JsonValue$ValueType_name_R_java_lang_String 13
typedef jobject (*func_arc_util_serialization_JsonValue$ValueType_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$ValueType_ordinal_R_int 14
typedef jint (*func_arc_util_serialization_JsonValue$ValueType_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$ValueType_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_util_serialization_JsonValue$ValueType_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_arc_util_serialization_JsonValue$ValueType(jobject object, jint mark, jint depth);
void clinit_arc_util_serialization_JsonValue$ValueType(jcontext ctx);
jobject SM_arc_util_serialization_JsonValue$ValueType_values_R_Array1_arc_util_serialization_JsonValue$ValueType(jcontext ctx);
jobject SM_arc_util_serialization_JsonValue$ValueType_valueOf_java_lang_String_R_arc_util_serialization_JsonValue$ValueType(jcontext ctx, jobject param0);
void init_arc_util_serialization_JsonValue$ValueType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_arc_util_serialization_JsonValue$ValueType_$values_R_Array1_arc_util_serialization_JsonValue$ValueType(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
