#ifndef HEADER_mindustry_ui_IntFormat
#define HEADER_mindustry_ui_IntFormat

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_IntFormat {
	java_lang_Object parent;
	jref F_builder;
	jref F_text;
	jint F_lastValue;
	jint F_lastValue2;
	jref F_converter;
} mindustry_ui_IntFormat;

extern Class class_mindustry_ui_IntFormat;


#define VTABLE_mindustry_ui_IntFormat_hashCode_R_int 0
typedef jint (*func_mindustry_ui_IntFormat_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_IntFormat_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_IntFormat_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_IntFormat_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_IntFormat_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_IntFormat_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_IntFormat_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_IntFormat_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_IntFormat_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_IntFormat_finalize 5
typedef void (*func_mindustry_ui_IntFormat_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_IntFormat_notify 6
typedef void (*func_mindustry_ui_IntFormat_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_IntFormat_notifyAll 7
typedef void (*func_mindustry_ui_IntFormat_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_IntFormat_wait 8
typedef void (*func_mindustry_ui_IntFormat_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_IntFormat_wait_long 9
typedef void (*func_mindustry_ui_IntFormat_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_IntFormat_wait_long_int 10
typedef void (*func_mindustry_ui_IntFormat_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence 11
typedef jobject (*func_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_IntFormat_get_int_int_R_java_lang_CharSequence 12
typedef jobject (*func_mindustry_ui_IntFormat_get_int_int_R_java_lang_CharSequence)(jcontext ctx, jobject self, jint param0, jint param1);

void mark_mindustry_ui_IntFormat(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_IntFormat(jcontext ctx);
void init_mindustry_ui_IntFormat_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_mindustry_ui_IntFormat_java_lang_String_arc_func_Func(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence(jcontext ctx, jobject self, jint param0);
jobject M_mindustry_ui_IntFormat_get_int_int_R_java_lang_CharSequence(jcontext ctx, jobject self, jint param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
