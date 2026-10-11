#ifndef HEADER_java_util_TimeZone
#define HEADER_java_util_TimeZone

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_TimeZone {
	java_lang_Object parent;
	jref F_ID;
} java_util_TimeZone;

extern Class class_java_util_TimeZone;

extern jint SF_java_util_TimeZone_SHORT;
extern jint SF_java_util_TimeZone_LONG;
extern jobject SF_java_util_TimeZone_GMT;
extern jobject SF_java_util_TimeZone_defaultTimeZone;

#define VTABLE_java_util_TimeZone_hashCode_R_int 0
typedef jint (*func_java_util_TimeZone_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_TimeZone_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TimeZone_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_TimeZone_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_TimeZone_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone_toString_R_java_lang_String 4
typedef jobject (*func_java_util_TimeZone_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone_finalize 5
typedef void (*func_java_util_TimeZone_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone_notify 6
typedef void (*func_java_util_TimeZone_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone_notifyAll 7
typedef void (*func_java_util_TimeZone_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone_wait 8
typedef void (*func_java_util_TimeZone_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone_wait_long 9
typedef void (*func_java_util_TimeZone_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_TimeZone_wait_long_int 10
typedef void (*func_java_util_TimeZone_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_TimeZone_setID_java_lang_String 11
typedef void (*func_java_util_TimeZone_setID_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TimeZone_getDSTSavings_R_int 12
typedef jint (*func_java_util_TimeZone_getDSTSavings_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone_inDaylightTime_java_util_Date_R_boolean 13
typedef jbool (*func_java_util_TimeZone_inDaylightTime_java_util_Date_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TimeZone_getID_R_java_lang_String 14
typedef jobject (*func_java_util_TimeZone_getID_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone_getOffset_int_int_int_int_int_int_R_int 15
typedef jint (*func_java_util_TimeZone_getOffset_int_int_int_int_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5);
#define VTABLE_java_util_TimeZone_getRawOffset_R_int 16
typedef jint (*func_java_util_TimeZone_getRawOffset_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone_useDaylightTime_R_boolean 17
typedef jbool (*func_java_util_TimeZone_useDaylightTime_R_boolean)(jcontext ctx, jobject self);

void mark_java_util_TimeZone(jobject object, jint mark, jint depth);
void clinit_java_util_TimeZone(jcontext ctx);
void init_java_util_TimeZone(jcontext ctx, jobject self);
void M_java_util_TimeZone_setID_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject SM_java_util_TimeZone_getAvailableIDs_R_Array1_java_lang_String(jcontext ctx);
jobject SM_java_util_TimeZone_getTimezoneId_R_java_lang_String(jcontext ctx);
jint SM_java_util_TimeZone_getTimezoneOffset_java_lang_String_int_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4);
jint SM_java_util_TimeZone_getTimezoneRawOffset_java_lang_String_R_int(jcontext ctx, jobject param0);
jbool SM_java_util_TimeZone_isTimezoneDST_java_lang_String_long_R_boolean(jcontext ctx, jobject param0, jlong param1);
jlong SM_java_util_TimeZone_getJuly1_R_long(jcontext ctx);
jlong SM_java_util_TimeZone_getDec30_R_long(jcontext ctx);
jobject SM_java_util_TimeZone_getDefault_R_java_util_TimeZone(jcontext ctx);
jint M_java_util_TimeZone_getDSTSavings_R_int(jcontext ctx, jobject self);
jbool M_java_util_TimeZone_inDaylightTime_java_util_Date_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TimeZone_getID_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_java_util_TimeZone_getTimeZone_java_lang_String_R_java_util_TimeZone(jcontext ctx, jobject param0);
jint SM_java_util_TimeZone_access$000_java_lang_String_int_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4);
jint SM_java_util_TimeZone_access$100_java_lang_String_R_int(jcontext ctx, jobject param0);
jbool SM_java_util_TimeZone_access$200_java_lang_String_long_R_boolean(jcontext ctx, jobject param0, jlong param1);
jlong SM_java_util_TimeZone_access$300_R_long(jcontext ctx);
jlong SM_java_util_TimeZone_access$400_R_long(jcontext ctx);
jobject SM_java_util_TimeZone_access$500_java_util_TimeZone_R_java_lang_String(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
