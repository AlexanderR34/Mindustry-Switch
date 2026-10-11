#ifndef HEADER_arc_flabel_FParser$InternalToken
#define HEADER_arc_flabel_FParser$InternalToken

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_flabel_FParser$InternalToken {
	java_lang_Enum parent;
	jref F_name;
	jref F_category;
} arc_flabel_FParser$InternalToken;

extern Class class_arc_flabel_FParser$InternalToken;

extern jobject SF_arc_flabel_FParser$InternalToken_wait;
extern jobject SF_arc_flabel_FParser$InternalToken_speed;
extern jobject SF_arc_flabel_FParser$InternalToken_slower;
extern jobject SF_arc_flabel_FParser$InternalToken_slow;
extern jobject SF_arc_flabel_FParser$InternalToken_normal;
extern jobject SF_arc_flabel_FParser$InternalToken_fast;
extern jobject SF_arc_flabel_FParser$InternalToken_faster;
extern jobject SF_arc_flabel_FParser$InternalToken_color;
extern jobject SF_arc_flabel_FParser$InternalToken_clearcolor;
extern jobject SF_arc_flabel_FParser$InternalToken_endcolor;
extern jobject SF_arc_flabel_FParser$InternalToken_var;
extern jobject SF_arc_flabel_FParser$InternalToken_event;
extern jobject SF_arc_flabel_FParser$InternalToken_reset;
extern jobject SF_arc_flabel_FParser$InternalToken_skip;
extern jobject SF_arc_flabel_FParser$InternalToken_all;
extern jobject SF_arc_flabel_FParser$InternalToken_$VALUES;

#define VTABLE_arc_flabel_FParser$InternalToken_hashCode_R_int 0
typedef jint (*func_arc_flabel_FParser$InternalToken_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$InternalToken_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_flabel_FParser$InternalToken_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FParser$InternalToken_clone_R_java_lang_Object 2
typedef jobject (*func_arc_flabel_FParser$InternalToken_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$InternalToken_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_flabel_FParser$InternalToken_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$InternalToken_toString_R_java_lang_String 4
typedef jobject (*func_arc_flabel_FParser$InternalToken_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$InternalToken_finalize 5
typedef void (*func_arc_flabel_FParser$InternalToken_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$InternalToken_notify 6
typedef void (*func_arc_flabel_FParser$InternalToken_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$InternalToken_notifyAll 7
typedef void (*func_arc_flabel_FParser$InternalToken_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$InternalToken_wait 8
typedef void (*func_arc_flabel_FParser$InternalToken_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$InternalToken_wait_long 9
typedef void (*func_arc_flabel_FParser$InternalToken_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_flabel_FParser$InternalToken_wait_long_int 10
typedef void (*func_arc_flabel_FParser$InternalToken_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_flabel_FParser$InternalToken_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_flabel_FParser$InternalToken_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FParser$InternalToken_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_flabel_FParser$InternalToken_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FParser$InternalToken_name_R_java_lang_String 13
typedef jobject (*func_arc_flabel_FParser$InternalToken_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$InternalToken_ordinal_R_int 14
typedef jint (*func_arc_flabel_FParser$InternalToken_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$InternalToken_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_flabel_FParser$InternalToken_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_arc_flabel_FParser$InternalToken(jobject object, jint mark, jint depth);
void clinit_arc_flabel_FParser$InternalToken(jcontext ctx);
jobject SM_arc_flabel_FParser$InternalToken_values_R_Array1_arc_flabel_FParser$InternalToken(jcontext ctx);
jobject SM_arc_flabel_FParser$InternalToken_valueOf_java_lang_String_R_arc_flabel_FParser$InternalToken(jcontext ctx, jobject param0);
void init_arc_flabel_FParser$InternalToken_java_lang_String_int_arc_flabel_FParser$TokenCategory(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jobject M_arc_flabel_FParser$InternalToken_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_arc_flabel_FParser$InternalToken_fromName_java_lang_String_R_arc_flabel_FParser$InternalToken(jcontext ctx, jobject param0);
jobject SM_arc_flabel_FParser$InternalToken_$values_R_Array1_arc_flabel_FParser$InternalToken(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
