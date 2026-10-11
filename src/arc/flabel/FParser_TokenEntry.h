#ifndef HEADER_arc_flabel_FParser$TokenEntry
#define HEADER_arc_flabel_FParser$TokenEntry

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_flabel_FParser$TokenEntry {
	java_lang_Object parent;
	jref F_token;
	jref F_category;
	jint F_index;
	jfloat F_floatValue;
	jref F_stringValue;
	jref F_effect;
} arc_flabel_FParser$TokenEntry;

extern Class class_arc_flabel_FParser$TokenEntry;


#define VTABLE_arc_flabel_FParser$TokenEntry_hashCode_R_int 0
typedef jint (*func_arc_flabel_FParser$TokenEntry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$TokenEntry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_flabel_FParser$TokenEntry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FParser$TokenEntry_clone_R_java_lang_Object 2
typedef jobject (*func_arc_flabel_FParser$TokenEntry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$TokenEntry_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_flabel_FParser$TokenEntry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$TokenEntry_toString_R_java_lang_String 4
typedef jobject (*func_arc_flabel_FParser$TokenEntry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$TokenEntry_finalize 5
typedef void (*func_arc_flabel_FParser$TokenEntry_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$TokenEntry_notify 6
typedef void (*func_arc_flabel_FParser$TokenEntry_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$TokenEntry_notifyAll 7
typedef void (*func_arc_flabel_FParser$TokenEntry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$TokenEntry_wait 8
typedef void (*func_arc_flabel_FParser$TokenEntry_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser$TokenEntry_wait_long 9
typedef void (*func_arc_flabel_FParser$TokenEntry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_flabel_FParser$TokenEntry_wait_long_int 10
typedef void (*func_arc_flabel_FParser$TokenEntry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_flabel_FParser$TokenEntry_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_flabel_FParser$TokenEntry_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FParser$TokenEntry_compareTo_arc_flabel_FParser$TokenEntry_R_int 12
typedef jint (*func_arc_flabel_FParser$TokenEntry_compareTo_arc_flabel_FParser$TokenEntry_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_arc_flabel_FParser$TokenEntry(jobject object, jint mark, jint depth);
void clinit_arc_flabel_FParser$TokenEntry(jcontext ctx);
void init_arc_flabel_FParser$TokenEntry_java_lang_String_arc_flabel_FParser$TokenCategory_int_float_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3, jobject param4);
jint M_arc_flabel_FParser$TokenEntry_compareTo_arc_flabel_FParser$TokenEntry_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_flabel_FParser$TokenEntry_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
