#ifndef HEADER_mindustry_ui_builder_MenuResult
#define HEADER_mindustry_ui_builder_MenuResult

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_builder_MenuResult {
	java_lang_Object parent;
	jlong F_token;
	jref F_result;
	jref F_values;
} mindustry_ui_builder_MenuResult;

extern Class class_mindustry_ui_builder_MenuResult;

extern jint SF_mindustry_ui_builder_MenuResult_maxResultLen;
extern jint SF_mindustry_ui_builder_MenuResult_maxValueLen;
extern jint SF_mindustry_ui_builder_MenuResult_maxTotalStringLen;
extern jint SF_mindustry_ui_builder_MenuResult_maxTotalValues;

#define VTABLE_mindustry_ui_builder_MenuResult_hashCode_R_int 0
typedef jint (*func_mindustry_ui_builder_MenuResult_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_MenuResult_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_builder_MenuResult_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_builder_MenuResult_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_builder_MenuResult_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_MenuResult_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_builder_MenuResult_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_MenuResult_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_builder_MenuResult_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_MenuResult_finalize 5
typedef void (*func_mindustry_ui_builder_MenuResult_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_MenuResult_notify 6
typedef void (*func_mindustry_ui_builder_MenuResult_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_MenuResult_notifyAll 7
typedef void (*func_mindustry_ui_builder_MenuResult_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_MenuResult_wait 8
typedef void (*func_mindustry_ui_builder_MenuResult_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_MenuResult_wait_long 9
typedef void (*func_mindustry_ui_builder_MenuResult_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_builder_MenuResult_wait_long_int 10
typedef void (*func_mindustry_ui_builder_MenuResult_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_builder_MenuResult_wasCancelled_R_boolean 11
typedef jbool (*func_mindustry_ui_builder_MenuResult_wasCancelled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_MenuResult_is_java_lang_String_R_boolean 12
typedef jbool (*func_mindustry_ui_builder_MenuResult_is_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_builder_MenuResult_getString_java_lang_String_java_lang_String_R_java_lang_String 13
typedef jobject (*func_mindustry_ui_builder_MenuResult_getString_java_lang_String_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_builder_MenuResult_getString_java_lang_String_R_java_lang_String 14
typedef jobject (*func_mindustry_ui_builder_MenuResult_getString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_builder_MenuResult_getFloat_java_lang_String_float_R_float 15
typedef jfloat (*func_mindustry_ui_builder_MenuResult_getFloat_java_lang_String_float_R_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_ui_builder_MenuResult_getFloat_java_lang_String_R_float 16
typedef jfloat (*func_mindustry_ui_builder_MenuResult_getFloat_java_lang_String_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_builder_MenuResult_getBool_java_lang_String_boolean_R_boolean 17
typedef jbool (*func_mindustry_ui_builder_MenuResult_getBool_java_lang_String_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_ui_builder_MenuResult_getBool_java_lang_String_R_boolean 18
typedef jbool (*func_mindustry_ui_builder_MenuResult_getBool_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ui_builder_MenuResult(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_builder_MenuResult(jcontext ctx);
void init_mindustry_ui_builder_MenuResult(jcontext ctx, jobject self);
void init_mindustry_ui_builder_MenuResult_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_ui_builder_MenuResult_wasCancelled_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_ui_builder_MenuResult_is_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_ui_builder_MenuResult_getString_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_ui_builder_MenuResult_getString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_ui_builder_MenuResult_getFloat_java_lang_String_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
jfloat M_mindustry_ui_builder_MenuResult_getFloat_java_lang_String_R_float(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_ui_builder_MenuResult_getBool_java_lang_String_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jbool M_mindustry_ui_builder_MenuResult_getBool_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_ui_builder_MenuResult_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
