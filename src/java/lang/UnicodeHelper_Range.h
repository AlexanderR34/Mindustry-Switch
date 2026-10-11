#ifndef HEADER_java_lang_UnicodeHelper$Range
#define HEADER_java_lang_UnicodeHelper$Range

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_UnicodeHelper$Range {
	java_lang_Object parent;
	jint F_start;
	jint F_end;
	jref F_data;
} java_lang_UnicodeHelper$Range;

extern Class class_java_lang_UnicodeHelper$Range;


#define VTABLE_java_lang_UnicodeHelper$Range_hashCode_R_int 0
typedef jint (*func_java_lang_UnicodeHelper$Range_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_UnicodeHelper$Range_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_UnicodeHelper$Range_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_UnicodeHelper$Range_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_UnicodeHelper$Range_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_UnicodeHelper$Range_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_UnicodeHelper$Range_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_UnicodeHelper$Range_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_UnicodeHelper$Range_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_UnicodeHelper$Range_finalize 5
typedef void (*func_java_lang_UnicodeHelper$Range_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_UnicodeHelper$Range_notify 6
typedef void (*func_java_lang_UnicodeHelper$Range_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_UnicodeHelper$Range_notifyAll 7
typedef void (*func_java_lang_UnicodeHelper$Range_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_UnicodeHelper$Range_wait 8
typedef void (*func_java_lang_UnicodeHelper$Range_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_UnicodeHelper$Range_wait_long 9
typedef void (*func_java_lang_UnicodeHelper$Range_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_UnicodeHelper$Range_wait_long_int 10
typedef void (*func_java_lang_UnicodeHelper$Range_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_lang_UnicodeHelper$Range(jobject object, jint mark, jint depth);
void clinit_java_lang_UnicodeHelper$Range(jcontext ctx);
void init_java_lang_UnicodeHelper$Range_int_int_Array1_byte(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
