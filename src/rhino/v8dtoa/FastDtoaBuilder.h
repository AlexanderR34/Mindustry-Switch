#ifndef HEADER_rhino_v8dtoa_FastDtoaBuilder
#define HEADER_rhino_v8dtoa_FastDtoaBuilder

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_v8dtoa_FastDtoaBuilder {
	java_lang_Object parent;
	jref F_chars;
	jint F_end;
	jint F_point;
	jbool F_formatted;
} rhino_v8dtoa_FastDtoaBuilder;

extern Class class_rhino_v8dtoa_FastDtoaBuilder;

extern jobject SF_rhino_v8dtoa_FastDtoaBuilder_digits;

#define VTABLE_rhino_v8dtoa_FastDtoaBuilder_hashCode_R_int 0
typedef jint (*func_rhino_v8dtoa_FastDtoaBuilder_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_FastDtoaBuilder_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_v8dtoa_FastDtoaBuilder_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_v8dtoa_FastDtoaBuilder_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_v8dtoa_FastDtoaBuilder_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_FastDtoaBuilder_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_v8dtoa_FastDtoaBuilder_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_FastDtoaBuilder_toString_R_java_lang_String 4
typedef jobject (*func_rhino_v8dtoa_FastDtoaBuilder_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_FastDtoaBuilder_finalize 5
typedef void (*func_rhino_v8dtoa_FastDtoaBuilder_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_FastDtoaBuilder_notify 6
typedef void (*func_rhino_v8dtoa_FastDtoaBuilder_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_FastDtoaBuilder_notifyAll 7
typedef void (*func_rhino_v8dtoa_FastDtoaBuilder_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_FastDtoaBuilder_wait 8
typedef void (*func_rhino_v8dtoa_FastDtoaBuilder_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_FastDtoaBuilder_wait_long 9
typedef void (*func_rhino_v8dtoa_FastDtoaBuilder_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_v8dtoa_FastDtoaBuilder_wait_long_int 10
typedef void (*func_rhino_v8dtoa_FastDtoaBuilder_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_v8dtoa_FastDtoaBuilder_append_char 11
typedef void (*func_rhino_v8dtoa_FastDtoaBuilder_append_char)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_rhino_v8dtoa_FastDtoaBuilder_decreaseLast 12
typedef void (*func_rhino_v8dtoa_FastDtoaBuilder_decreaseLast)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_FastDtoaBuilder_reset 13
typedef void (*func_rhino_v8dtoa_FastDtoaBuilder_reset)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_FastDtoaBuilder_format_R_java_lang_String 14
typedef jobject (*func_rhino_v8dtoa_FastDtoaBuilder_format_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_FastDtoaBuilder_toFixedFormat_int_int 15
typedef void (*func_rhino_v8dtoa_FastDtoaBuilder_toFixedFormat_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_v8dtoa_FastDtoaBuilder_toExponentialFormat_int_int 16
typedef void (*func_rhino_v8dtoa_FastDtoaBuilder_toExponentialFormat_int_int)(jcontext ctx, jobject self, jint param0, jint param1);

void mark_rhino_v8dtoa_FastDtoaBuilder(jobject object, jint mark, jint depth);
void clinit_rhino_v8dtoa_FastDtoaBuilder(jcontext ctx);
void init_rhino_v8dtoa_FastDtoaBuilder(jcontext ctx, jobject self);
void M_rhino_v8dtoa_FastDtoaBuilder_append_char(jcontext ctx, jobject self, jchar param0);
void M_rhino_v8dtoa_FastDtoaBuilder_decreaseLast(jcontext ctx, jobject self);
void M_rhino_v8dtoa_FastDtoaBuilder_reset(jcontext ctx, jobject self);
jobject M_rhino_v8dtoa_FastDtoaBuilder_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_rhino_v8dtoa_FastDtoaBuilder_format_R_java_lang_String(jcontext ctx, jobject self);
void M_rhino_v8dtoa_FastDtoaBuilder_toFixedFormat_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_rhino_v8dtoa_FastDtoaBuilder_toExponentialFormat_int_int(jcontext ctx, jobject self, jint param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
