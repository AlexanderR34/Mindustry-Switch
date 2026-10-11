#ifndef HEADER_arc_flabel_FParser$TokenCategory
#define HEADER_arc_flabel_FParser$TokenCategory

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_flabel_FParser$TokenCategory {
	java_lang_Enum parent;
} arc_flabel_FParser$TokenCategory;

extern Class class_arc_flabel_FParser$TokenCategory;

extern jobject SF_arc_flabel_FParser$TokenCategory_wait;
extern jobject SF_arc_flabel_FParser$TokenCategory_speed;
extern jobject SF_arc_flabel_FParser$TokenCategory_color;
extern jobject SF_arc_flabel_FParser$TokenCategory_variable;
extern jobject SF_arc_flabel_FParser$TokenCategory_event;
extern jobject SF_arc_flabel_FParser$TokenCategory_reset;
extern jobject SF_arc_flabel_FParser$TokenCategory_skip;
extern jobject SF_arc_flabel_FParser$TokenCategory_effectStart;
extern jobject SF_arc_flabel_FParser$TokenCategory_effectEnd;
extern jobject SF_arc_flabel_FParser$TokenCategory_$VALUES;

#define VTABLE_arc_flabel_FParser$TokenCategory_hashCode_R_int 0
typedef jint (*func_arc_flabel_FParser$TokenCategory_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$TokenCategory_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_flabel_FParser$TokenCategory_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FParser$TokenCategory_clone_R_java_lang_Object 2
typedef jobject (*func_arc_flabel_FParser$TokenCategory_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$TokenCategory_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_flabel_FParser$TokenCategory_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$TokenCategory_toString_R_java_lang_String 4
typedef jobject (*func_arc_flabel_FParser$TokenCategory_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$TokenCategory_finalize 5
typedef void (*func_arc_flabel_FParser$TokenCategory_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$TokenCategory_notify 6
typedef void (*func_arc_flabel_FParser$TokenCategory_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$TokenCategory_notifyAll 7
typedef void (*func_arc_flabel_FParser$TokenCategory_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$TokenCategory_wait 8
typedef void (*func_arc_flabel_FParser$TokenCategory_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$TokenCategory_wait_long 9
typedef void (*func_arc_flabel_FParser$TokenCategory_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_flabel_FParser$TokenCategory_wait_long_int 10
typedef void (*func_arc_flabel_FParser$TokenCategory_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_flabel_FParser$TokenCategory_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_flabel_FParser$TokenCategory_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FParser$TokenCategory_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_flabel_FParser$TokenCategory_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FParser$TokenCategory_name_R_java_lang_String 13
typedef jobject (*func_arc_flabel_FParser$TokenCategory_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$TokenCategory_ordinal_R_int 14
typedef jint (*func_arc_flabel_FParser$TokenCategory_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$TokenCategory_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_flabel_FParser$TokenCategory_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_arc_flabel_FParser$TokenCategory(jobject object, jint mark, jint depth);
void clinit_arc_flabel_FParser$TokenCategory(jcontext ctx);
jobject SM_arc_flabel_FParser$TokenCategory_values_R_Array1_arc_flabel_FParser$TokenCategory(jcontext ctx);
jobject SM_arc_flabel_FParser$TokenCategory_valueOf_java_lang_String_R_arc_flabel_FParser$TokenCategory(jcontext ctx, jobject param0);
void init_arc_flabel_FParser$TokenCategory_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_arc_flabel_FParser$TokenCategory_$values_R_Array1_arc_flabel_FParser$TokenCategory(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
