#ifndef HEADER_java_math_RoundingMode
#define HEADER_java_math_RoundingMode

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_math_RoundingMode {
	java_lang_Enum parent;
	jint F_oldMode;
} java_math_RoundingMode;

extern Class class_java_math_RoundingMode;

extern jobject SF_java_math_RoundingMode_UP;
extern jobject SF_java_math_RoundingMode_DOWN;
extern jobject SF_java_math_RoundingMode_CEILING;
extern jobject SF_java_math_RoundingMode_FLOOR;
extern jobject SF_java_math_RoundingMode_HALF_UP;
extern jobject SF_java_math_RoundingMode_HALF_DOWN;
extern jobject SF_java_math_RoundingMode_HALF_EVEN;
extern jobject SF_java_math_RoundingMode_UNNECESSARY;
extern jobject SF_java_math_RoundingMode_$VALUES;

#define VTABLE_java_math_RoundingMode_hashCode_R_int 0
typedef jint (*func_java_math_RoundingMode_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_RoundingMode_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_math_RoundingMode_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_RoundingMode_clone_R_java_lang_Object 2
typedef jobject (*func_java_math_RoundingMode_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_math_RoundingMode_getClass_R_java_lang_Class 3
typedef jobject (*func_java_math_RoundingMode_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_math_RoundingMode_toString_R_java_lang_String 4
typedef jobject (*func_java_math_RoundingMode_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_math_RoundingMode_finalize 5
typedef void (*func_java_math_RoundingMode_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_math_RoundingMode_notify 6
typedef void (*func_java_math_RoundingMode_notify)(jcontext ctx, jobject self);
#define VTABLE_java_math_RoundingMode_notifyAll 7
typedef void (*func_java_math_RoundingMode_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_math_RoundingMode_wait 8
typedef void (*func_java_math_RoundingMode_wait)(jcontext ctx, jobject self);
#define VTABLE_java_math_RoundingMode_wait_long 9
typedef void (*func_java_math_RoundingMode_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_math_RoundingMode_wait_long_int 10
typedef void (*func_java_math_RoundingMode_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_math_RoundingMode_compareTo_java_lang_Object_R_int 11
typedef jint (*func_java_math_RoundingMode_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_RoundingMode_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_java_math_RoundingMode_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_RoundingMode_name_R_java_lang_String 13
typedef jobject (*func_java_math_RoundingMode_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_math_RoundingMode_ordinal_R_int 14
typedef jint (*func_java_math_RoundingMode_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_RoundingMode_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_java_math_RoundingMode_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_java_math_RoundingMode(jobject object, jint mark, jint depth);
void clinit_java_math_RoundingMode(jcontext ctx);
jobject SM_java_math_RoundingMode_values_R_Array1_java_math_RoundingMode(jcontext ctx);
jobject SM_java_math_RoundingMode_valueOf_java_lang_String_R_java_math_RoundingMode(jcontext ctx, jobject param0);
void init_java_math_RoundingMode_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject SM_java_math_RoundingMode_valueOf_int_R_java_math_RoundingMode(jcontext ctx, jint param0);
jobject SM_java_math_RoundingMode_$values_R_Array1_java_math_RoundingMode(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
