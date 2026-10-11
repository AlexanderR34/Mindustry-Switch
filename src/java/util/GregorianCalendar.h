#ifndef HEADER_java_util_GregorianCalendar
#define HEADER_java_util_GregorianCalendar

#include "Clearwing.h"
#include "java/util/Calendar.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_GregorianCalendar {
	java_util_Calendar parent;
	jlong F_gregorianCutover;
	jint F_changeYear;
	jint F_julianSkew;
	jbool F_isCached;
	jref F_cachedFields;
	jlong F_nextMidnightMillis;
	jlong F_lastMidnightMillis;
	jint F_currentYearSkew;
	jint F_lastYearSkew;
} java_util_GregorianCalendar;

extern Class class_java_util_GregorianCalendar;

extern jint SF_java_util_GregorianCalendar_BC;
extern jint SF_java_util_GregorianCalendar_AD;
extern jlong SF_java_util_GregorianCalendar_defaultGregorianCutover;
extern jobject SF_java_util_GregorianCalendar_DaysInMonth;
extern jobject SF_java_util_GregorianCalendar_DaysInYear;
extern jobject SF_java_util_GregorianCalendar_maximums;
extern jobject SF_java_util_GregorianCalendar_minimums;
extern jobject SF_java_util_GregorianCalendar_leastMaximums;

#define VTABLE_java_util_GregorianCalendar_hashCode_R_int 0
typedef jint (*func_java_util_GregorianCalendar_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_GregorianCalendar_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_GregorianCalendar_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_GregorianCalendar_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_GregorianCalendar_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_GregorianCalendar_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_GregorianCalendar_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_GregorianCalendar_toString_R_java_lang_String 4
typedef jobject (*func_java_util_GregorianCalendar_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_GregorianCalendar_finalize 5
typedef void (*func_java_util_GregorianCalendar_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_GregorianCalendar_notify 6
typedef void (*func_java_util_GregorianCalendar_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_GregorianCalendar_notifyAll 7
typedef void (*func_java_util_GregorianCalendar_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_GregorianCalendar_wait 8
typedef void (*func_java_util_GregorianCalendar_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_GregorianCalendar_wait_long 9
typedef void (*func_java_util_GregorianCalendar_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_GregorianCalendar_wait_long_int 10
typedef void (*func_java_util_GregorianCalendar_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_GregorianCalendar_after_java_lang_Object_R_boolean 11
typedef jbool (*func_java_util_GregorianCalendar_after_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_GregorianCalendar_before_java_lang_Object_R_boolean 12
typedef jbool (*func_java_util_GregorianCalendar_before_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_GregorianCalendar_computeFields 13
typedef void (*func_java_util_GregorianCalendar_computeFields)(jcontext ctx, jobject self);
#define VTABLE_java_util_GregorianCalendar_computeTime 14
typedef void (*func_java_util_GregorianCalendar_computeTime)(jcontext ctx, jobject self);
#define VTABLE_java_util_GregorianCalendar_get_int_R_int 15
typedef jint (*func_java_util_GregorianCalendar_get_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_GregorianCalendar_complete 16
typedef void (*func_java_util_GregorianCalendar_complete)(jcontext ctx, jobject self);
#define VTABLE_java_util_GregorianCalendar_getTime_R_java_util_Date 17
typedef jobject (*func_java_util_GregorianCalendar_getTime_R_java_util_Date)(jcontext ctx, jobject self);
#define VTABLE_java_util_GregorianCalendar_getTimeInMillis_R_long 18
typedef jlong (*func_java_util_GregorianCalendar_getTimeInMillis_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_GregorianCalendar_getTimeZone_R_java_util_TimeZone 19
typedef jobject (*func_java_util_GregorianCalendar_getTimeZone_R_java_util_TimeZone)(jcontext ctx, jobject self);
#define VTABLE_java_util_GregorianCalendar_set_int_int 20
typedef void (*func_java_util_GregorianCalendar_set_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_util_GregorianCalendar_add_int_int 21
typedef void (*func_java_util_GregorianCalendar_add_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_util_GregorianCalendar_addImpl_int_int 22
typedef void (*func_java_util_GregorianCalendar_addImpl_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_util_GregorianCalendar_setTime_java_util_Date 23
typedef void (*func_java_util_GregorianCalendar_setTime_java_util_Date)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_GregorianCalendar_setTimeInMillis_long 24
typedef void (*func_java_util_GregorianCalendar_setTimeInMillis_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_GregorianCalendar_setTimeZone_java_util_TimeZone 25
typedef void (*func_java_util_GregorianCalendar_setTimeZone_java_util_TimeZone)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_GregorianCalendar_getFirstDayOfWeek_R_int 26
typedef jint (*func_java_util_GregorianCalendar_getFirstDayOfWeek_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_GregorianCalendar_getMinimalDaysInFirstWeek_R_int 27
typedef jint (*func_java_util_GregorianCalendar_getMinimalDaysInFirstWeek_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_GregorianCalendar_julianError_R_int 28
typedef jint (*func_java_util_GregorianCalendar_julianError_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_GregorianCalendar_daysInMonth_R_int 29
typedef jint (*func_java_util_GregorianCalendar_daysInMonth_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_GregorianCalendar_daysInMonth_boolean_int_R_int 30
typedef jint (*func_java_util_GregorianCalendar_daysInMonth_boolean_int_R_int)(jcontext ctx, jobject self, jbool param0, jint param1);
#define VTABLE_java_util_GregorianCalendar_daysInYear_int_R_int 31
typedef jint (*func_java_util_GregorianCalendar_daysInYear_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_GregorianCalendar_daysInYear_boolean_int_R_int 32
typedef jint (*func_java_util_GregorianCalendar_daysInYear_boolean_int_R_int)(jcontext ctx, jobject self, jbool param0, jint param1);
#define VTABLE_java_util_GregorianCalendar_isLeapYear_int_R_boolean 33
typedef jbool (*func_java_util_GregorianCalendar_isLeapYear_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_GregorianCalendar_cachedFieldsCheckAndGet_long_long_long_int_int 34
typedef void (*func_java_util_GregorianCalendar_cachedFieldsCheckAndGet_long_long_long_int_int)(jcontext ctx, jobject self, jlong param0, jlong param1, jlong param2, jint param3, jint param4);
#define VTABLE_java_util_GregorianCalendar_fullFieldsCalc_long_int_int 35
typedef void (*func_java_util_GregorianCalendar_fullFieldsCalc_long_int_int)(jcontext ctx, jobject self, jlong param0, jint param1, jint param2);
#define VTABLE_java_util_GregorianCalendar_isLenient_R_boolean 36
typedef jbool (*func_java_util_GregorianCalendar_isLenient_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_GregorianCalendar_daysFromBaseYear_int_R_long 37
typedef jlong (*func_java_util_GregorianCalendar_daysFromBaseYear_int_R_long)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_GregorianCalendar_mod_int_int_R_int 38
typedef jint (*func_java_util_GregorianCalendar_mod_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_util_GregorianCalendar_mod7_long_R_int 39
typedef jint (*func_java_util_GregorianCalendar_mod7_long_R_int)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_GregorianCalendar_computeYearAndDay_long_long_R_int 40
typedef jint (*func_java_util_GregorianCalendar_computeYearAndDay_long_long_R_int)(jcontext ctx, jobject self, jlong param0, jlong param1);
#define VTABLE_java_util_GregorianCalendar_getOffset_long_R_int 41
typedef jint (*func_java_util_GregorianCalendar_getOffset_long_R_int)(jcontext ctx, jobject self, jlong param0);

void mark_java_util_GregorianCalendar(jobject object, jint mark, jint depth);
void clinit_java_util_GregorianCalendar(jcontext ctx);
void init_java_util_GregorianCalendar(jcontext ctx, jobject self);
void init_java_util_GregorianCalendar_java_util_TimeZone(jcontext ctx, jobject self, jobject param0);
void M_java_util_GregorianCalendar_computeFields(jcontext ctx, jobject self);
void M_java_util_GregorianCalendar_computeTime(jcontext ctx, jobject self);
void M_java_util_GregorianCalendar_addImpl_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jint M_java_util_GregorianCalendar_julianError_R_int(jcontext ctx, jobject self);
jint M_java_util_GregorianCalendar_daysInMonth_R_int(jcontext ctx, jobject self);
jint M_java_util_GregorianCalendar_daysInMonth_boolean_int_R_int(jcontext ctx, jobject self, jbool param0, jint param1);
jint M_java_util_GregorianCalendar_daysInYear_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_java_util_GregorianCalendar_daysInYear_boolean_int_R_int(jcontext ctx, jobject self, jbool param0, jint param1);
jbool M_java_util_GregorianCalendar_isLeapYear_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_java_util_GregorianCalendar_cachedFieldsCheckAndGet_long_long_long_int_int(jcontext ctx, jobject self, jlong param0, jlong param1, jlong param2, jint param3, jint param4);
void M_java_util_GregorianCalendar_fullFieldsCalc_long_int_int(jcontext ctx, jobject self, jlong param0, jint param1, jint param2);
jbool M_java_util_GregorianCalendar_isLenient_R_boolean(jcontext ctx, jobject self);
jlong M_java_util_GregorianCalendar_daysFromBaseYear_int_R_long(jcontext ctx, jobject self, jint param0);
jint M_java_util_GregorianCalendar_mod_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
jint M_java_util_GregorianCalendar_mod7_long_R_int(jcontext ctx, jobject self, jlong param0);
jint M_java_util_GregorianCalendar_computeYearAndDay_long_long_R_int(jcontext ctx, jobject self, jlong param0, jlong param1);
jint M_java_util_GregorianCalendar_getOffset_long_R_int(jcontext ctx, jobject self, jlong param0);

#ifdef __cplusplus
}
#endif

#endif
