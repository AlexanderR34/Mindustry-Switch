#ifndef HEADER_mindustry_logic_QueryType
#define HEADER_mindustry_logic_QueryType

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_QueryType {
	java_lang_Enum parent;
} mindustry_logic_QueryType;

extern Class class_mindustry_logic_QueryType;

extern jobject SF_mindustry_logic_QueryType_unit;
extern jobject SF_mindustry_logic_QueryType_building;
extern jobject SF_mindustry_logic_QueryType_bullet;
extern jobject SF_mindustry_logic_QueryType_queryable;
extern jobject SF_mindustry_logic_QueryType_$VALUES;

#define VTABLE_mindustry_logic_QueryType_hashCode_R_int 0
typedef jint (*func_mindustry_logic_QueryType_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_QueryType_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_QueryType_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_QueryType_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_QueryType_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_QueryType_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_QueryType_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_QueryType_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_QueryType_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_QueryType_finalize 5
typedef void (*func_mindustry_logic_QueryType_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_QueryType_notify 6
typedef void (*func_mindustry_logic_QueryType_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_QueryType_notifyAll 7
typedef void (*func_mindustry_logic_QueryType_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_QueryType_wait 8
typedef void (*func_mindustry_logic_QueryType_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_QueryType_wait_long 9
typedef void (*func_mindustry_logic_QueryType_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_QueryType_wait_long_int 10
typedef void (*func_mindustry_logic_QueryType_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_QueryType_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_logic_QueryType_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_QueryType_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_logic_QueryType_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_QueryType_name_R_java_lang_String 13
typedef jobject (*func_mindustry_logic_QueryType_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_QueryType_ordinal_R_int 14
typedef jint (*func_mindustry_logic_QueryType_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_QueryType_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_logic_QueryType_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_mindustry_logic_QueryType(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_QueryType(jcontext ctx);
jobject SM_mindustry_logic_QueryType_values_R_Array1_mindustry_logic_QueryType(jcontext ctx);
jobject SM_mindustry_logic_QueryType_valueOf_java_lang_String_R_mindustry_logic_QueryType(jcontext ctx, jobject param0);
void init_mindustry_logic_QueryType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_mindustry_logic_QueryType_$values_R_Array1_mindustry_logic_QueryType(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
