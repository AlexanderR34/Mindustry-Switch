#ifndef HEADER_java_text_DateFormat
#define HEADER_java_text_DateFormat

#include "Clearwing.h"
#include "java/text/Format.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_text_DateFormat {
	java_text_Format parent;
	jint F_dateStyle;
	jint F_timeStyle;
} java_text_DateFormat;

extern Class class_java_text_DateFormat;

extern jint SF_java_text_DateFormat_FULL;
extern jint SF_java_text_DateFormat_LONG;
extern jint SF_java_text_DateFormat_MEDIUM;
extern jint SF_java_text_DateFormat_SHORT;
extern jint SF_java_text_DateFormat_DEFAULT;
extern jint SF_java_text_DateFormat_NONE;

#define VTABLE_java_text_DateFormat_hashCode_R_int 0
typedef jint (*func_java_text_DateFormat_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_text_DateFormat_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_text_DateFormat_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_text_DateFormat_clone_R_java_lang_Object 2
typedef jobject (*func_java_text_DateFormat_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_text_DateFormat_getClass_R_java_lang_Class 3
typedef jobject (*func_java_text_DateFormat_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_text_DateFormat_toString_R_java_lang_String 4
typedef jobject (*func_java_text_DateFormat_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_text_DateFormat_finalize 5
typedef void (*func_java_text_DateFormat_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_text_DateFormat_notify 6
typedef void (*func_java_text_DateFormat_notify)(jcontext ctx, jobject self);
#define VTABLE_java_text_DateFormat_notifyAll 7
typedef void (*func_java_text_DateFormat_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_text_DateFormat_wait 8
typedef void (*func_java_text_DateFormat_wait)(jcontext ctx, jobject self);
#define VTABLE_java_text_DateFormat_wait_long 9
typedef void (*func_java_text_DateFormat_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_text_DateFormat_wait_long_int 10
typedef void (*func_java_text_DateFormat_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_text_DateFormat_format_java_lang_Object_R_java_lang_String 11
typedef jobject (*func_java_text_DateFormat_format_java_lang_Object_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_text_DateFormat_parseObject_java_lang_String_R_java_lang_Object 12
typedef jobject (*func_java_text_DateFormat_parseObject_java_lang_String_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_text_DateFormat_format_java_lang_Object_java_lang_StringBuffer_R_java_lang_String 13
typedef jobject (*func_java_text_DateFormat_format_java_lang_Object_java_lang_StringBuffer_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_text_DateFormat_format_java_util_Date_R_java_lang_String 14
typedef jobject (*func_java_text_DateFormat_format_java_util_Date_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_text_DateFormat_format_java_util_Date_java_lang_StringBuffer_R_java_lang_String 15
typedef jobject (*func_java_text_DateFormat_format_java_util_Date_java_lang_StringBuffer_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_text_DateFormat_parse_java_lang_String_R_java_util_Date 16
typedef jobject (*func_java_text_DateFormat_parse_java_lang_String_R_java_util_Date)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_text_DateFormat_setTimeZone_java_util_TimeZone 17
typedef void (*func_java_text_DateFormat_setTimeZone_java_util_TimeZone)(jcontext ctx, jobject self, jobject param0);

void mark_java_text_DateFormat(jobject object, jint mark, jint depth);
void clinit_java_text_DateFormat(jcontext ctx);
void init_java_text_DateFormat(jcontext ctx, jobject self);
void init_java_text_DateFormat_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_java_text_DateFormat_format_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_java_text_DateFormat_format_java_lang_Object_java_lang_StringBuffer_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_text_DateFormat_format_java_util_Date_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_java_text_DateFormat_format_java_util_Date_java_lang_StringBuffer_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_text_DateFormat_parseObject_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_text_DateFormat_parse_java_lang_String_R_java_util_Date(jcontext ctx, jobject self, jobject param0);
jobject SM_java_text_DateFormat_getInstance_R_java_text_DateFormat(jcontext ctx);
jobject SM_java_text_DateFormat_getDateInstance_R_java_text_DateFormat(jcontext ctx);
jobject SM_java_text_DateFormat_getTimeInstance_R_java_text_DateFormat(jcontext ctx);
jobject SM_java_text_DateFormat_getDateInstance_int_R_java_text_DateFormat(jcontext ctx, jint param0);
jobject SM_java_text_DateFormat_getTimeInstance_int_R_java_text_DateFormat(jcontext ctx, jint param0);
jobject SM_java_text_DateFormat_getDateTimeInstance_int_int_R_java_text_DateFormat(jcontext ctx, jint param0, jint param1);
jobject SM_java_text_DateFormat_getDateTimeInstance_R_java_text_DateFormat(jcontext ctx);
void M_java_text_DateFormat_setTimeZone_java_util_TimeZone(jcontext ctx, jobject self, jobject param0);
jint M_java_text_DateFormat_hashCode_R_int(jcontext ctx, jobject self);
jbool M_java_text_DateFormat_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_text_DateFormat_clone_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
