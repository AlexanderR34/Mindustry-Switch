#ifndef HEADER_arc_fx_filters_GaussianBlurFilter$BlurType
#define HEADER_arc_fx_filters_GaussianBlurFilter$BlurType

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_fx_filters_GaussianBlurFilter$BlurType {
	java_lang_Enum parent;
	jref F_tap;
} arc_fx_filters_GaussianBlurFilter$BlurType;

extern Class class_arc_fx_filters_GaussianBlurFilter$BlurType;

extern jobject SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian3x3;
extern jobject SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian3x3b;
extern jobject SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian5x5;
extern jobject SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian5x5b;
extern jobject SF_arc_fx_filters_GaussianBlurFilter$BlurType_$VALUES;

#define VTABLE_arc_fx_filters_GaussianBlurFilter$BlurType_hashCode_R_int 0
typedef jint (*func_arc_fx_filters_GaussianBlurFilter$BlurType_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter$BlurType_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_fx_filters_GaussianBlurFilter$BlurType_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_filters_GaussianBlurFilter$BlurType_clone_R_java_lang_Object 2
typedef jobject (*func_arc_fx_filters_GaussianBlurFilter$BlurType_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter$BlurType_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_fx_filters_GaussianBlurFilter$BlurType_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter$BlurType_toString_R_java_lang_String 4
typedef jobject (*func_arc_fx_filters_GaussianBlurFilter$BlurType_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter$BlurType_finalize 5
typedef void (*func_arc_fx_filters_GaussianBlurFilter$BlurType_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter$BlurType_notify 6
typedef void (*func_arc_fx_filters_GaussianBlurFilter$BlurType_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter$BlurType_notifyAll 7
typedef void (*func_arc_fx_filters_GaussianBlurFilter$BlurType_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter$BlurType_wait 8
typedef void (*func_arc_fx_filters_GaussianBlurFilter$BlurType_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter$BlurType_wait_long 9
typedef void (*func_arc_fx_filters_GaussianBlurFilter$BlurType_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_fx_filters_GaussianBlurFilter$BlurType_wait_long_int 10
typedef void (*func_arc_fx_filters_GaussianBlurFilter$BlurType_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_fx_filters_GaussianBlurFilter$BlurType_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_fx_filters_GaussianBlurFilter$BlurType_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_filters_GaussianBlurFilter$BlurType_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_fx_filters_GaussianBlurFilter$BlurType_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_filters_GaussianBlurFilter$BlurType_name_R_java_lang_String 13
typedef jobject (*func_arc_fx_filters_GaussianBlurFilter$BlurType_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter$BlurType_ordinal_R_int 14
typedef jint (*func_arc_fx_filters_GaussianBlurFilter$BlurType_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter$BlurType_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_fx_filters_GaussianBlurFilter$BlurType_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_arc_fx_filters_GaussianBlurFilter$BlurType(jobject object, jint mark, jint depth);
void clinit_arc_fx_filters_GaussianBlurFilter$BlurType(jcontext ctx);
jobject SM_arc_fx_filters_GaussianBlurFilter$BlurType_values_R_Array1_arc_fx_filters_GaussianBlurFilter$BlurType(jcontext ctx);
jobject SM_arc_fx_filters_GaussianBlurFilter$BlurType_valueOf_java_lang_String_R_arc_fx_filters_GaussianBlurFilter$BlurType(jcontext ctx, jobject param0);
void init_arc_fx_filters_GaussianBlurFilter$BlurType_java_lang_String_int_arc_fx_filters_GaussianBlurFilter$Tap(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jobject SM_arc_fx_filters_GaussianBlurFilter$BlurType_$values_R_Array1_arc_fx_filters_GaussianBlurFilter$BlurType(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
