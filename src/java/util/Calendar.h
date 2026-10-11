#ifndef HEADER_java_util_Calendar
#define HEADER_java_util_Calendar

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Calendar {
	java_lang_Object parent;
	jref F_fields;
	jref F_isSet;
	jlong F_time;
	jint F_lastTimeFieldSet;
	jint F_lastDateFieldSet;
	jint F_minimalDaysInFirstWeek;
	jbool F_isTimeSet;
	jbool F_areFieldsSet;
	jref F_zone;
} java_util_Calendar;

extern Class class_java_util_Calendar;

extern jint SF_java_util_Calendar_FIELD_COUNT;
extern jint SF_java_util_Calendar_DAY_OF_WEEK_IN_MONTH;
extern jint SF_java_util_Calendar_DAY_OF_YEAR;
extern jint SF_java_util_Calendar_WEEK_OF_MONTH;
extern jint SF_java_util_Calendar_WEEK_OF_YEAR;
extern jint SF_java_util_Calendar_ERA;
extern jint SF_java_util_Calendar_ZONE_OFFSET;
extern jint SF_java_util_Calendar_DST_OFFSET;
extern jint SF_java_util_Calendar_AM;
extern jint SF_java_util_Calendar_AM_PM;
extern jint SF_java_util_Calendar_APRIL;
extern jint SF_java_util_Calendar_AUGUST;
extern jint SF_java_util_Calendar_DATE;
extern jint SF_java_util_Calendar_DAY_OF_MONTH;
extern jint SF_java_util_Calendar_DAY_OF_WEEK;
extern jint SF_java_util_Calendar_DECEMBER;
extern jint SF_java_util_Calendar_FEBRUARY;
extern jint SF_java_util_Calendar_FRIDAY;
extern jint SF_java_util_Calendar_HOUR;
extern jint SF_java_util_Calendar_HOUR_OF_DAY;
extern jint SF_java_util_Calendar_JANUARY;
extern jint SF_java_util_Calendar_JULY;
extern jint SF_java_util_Calendar_JUNE;
extern jint SF_java_util_Calendar_MARCH;
extern jint SF_java_util_Calendar_MAY;
extern jint SF_java_util_Calendar_MILLISECOND;
extern jint SF_java_util_Calendar_MINUTE;
extern jint SF_java_util_Calendar_MONDAY;
extern jint SF_java_util_Calendar_MONTH;
extern jint SF_java_util_Calendar_NOVEMBER;
extern jint SF_java_util_Calendar_OCTOBER;
extern jint SF_java_util_Calendar_PM;
extern jint SF_java_util_Calendar_SATURDAY;
extern jint SF_java_util_Calendar_SECOND;
extern jint SF_java_util_Calendar_SEPTEMBER;
extern jint SF_java_util_Calendar_SUNDAY;
extern jint SF_java_util_Calendar_THURSDAY;
extern jint SF_java_util_Calendar_TUESDAY;
extern jint SF_java_util_Calendar_WEDNESDAY;
extern jint SF_java_util_Calendar_YEAR;

#define VTABLE_java_util_Calendar_hashCode_R_int 0
typedef jint (*func_java_util_Calendar_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Calendar_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Calendar_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Calendar_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Calendar_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Calendar_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Calendar_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Calendar_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Calendar_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Calendar_finalize 5
typedef void (*func_java_util_Calendar_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Calendar_notify 6
typedef void (*func_java_util_Calendar_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Calendar_notifyAll 7
typedef void (*func_java_util_Calendar_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Calendar_wait 8
typedef void (*func_java_util_Calendar_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Calendar_wait_long 9
typedef void (*func_java_util_Calendar_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Calendar_wait_long_int 10
typedef void (*func_java_util_Calendar_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Calendar_after_java_lang_Object_R_boolean 11
typedef jbool (*func_java_util_Calendar_after_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Calendar_before_java_lang_Object_R_boolean 12
typedef jbool (*func_java_util_Calendar_before_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Calendar_computeFields 13
typedef void (*func_java_util_Calendar_computeFields)(jcontext ctx, jobject self);
#define VTABLE_java_util_Calendar_computeTime 14
typedef void (*func_java_util_Calendar_computeTime)(jcontext ctx, jobject self);
#define VTABLE_java_util_Calendar_get_int_R_int 15
typedef jint (*func_java_util_Calendar_get_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Calendar_complete 16
typedef void (*func_java_util_Calendar_complete)(jcontext ctx, jobject self);
#define VTABLE_java_util_Calendar_getTime_R_java_util_Date 17
typedef jobject (*func_java_util_Calendar_getTime_R_java_util_Date)(jcontext ctx, jobject self);
#define VTABLE_java_util_Calendar_getTimeInMillis_R_long 18
typedef jlong (*func_java_util_Calendar_getTimeInMillis_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_Calendar_getTimeZone_R_java_util_TimeZone 19
typedef jobject (*func_java_util_Calendar_getTimeZone_R_java_util_TimeZone)(jcontext ctx, jobject self);
#define VTABLE_java_util_Calendar_set_int_int 20
typedef void (*func_java_util_Calendar_set_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_util_Calendar_add_int_int 21
typedef void (*func_java_util_Calendar_add_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_util_Calendar_addImpl_int_int 22
typedef void (*func_java_util_Calendar_addImpl_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_util_Calendar_setTime_java_util_Date 23
typedef void (*func_java_util_Calendar_setTime_java_util_Date)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Calendar_setTimeInMillis_long 24
typedef void (*func_java_util_Calendar_setTimeInMillis_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Calendar_setTimeZone_java_util_TimeZone 25
typedef void (*func_java_util_Calendar_setTimeZone_java_util_TimeZone)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Calendar_getFirstDayOfWeek_R_int 26
typedef jint (*func_java_util_Calendar_getFirstDayOfWeek_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Calendar_getMinimalDaysInFirstWeek_R_int 27
typedef jint (*func_java_util_Calendar_getMinimalDaysInFirstWeek_R_int)(jcontext ctx, jobject self);

void mark_java_util_Calendar(jobject object, jint mark, jint depth);
void clinit_java_util_Calendar(jcontext ctx);
void init_java_util_Calendar(jcontext ctx, jobject self);
jbool M_java_util_Calendar_after_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Calendar_before_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Calendar_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_util_Calendar_get_int_R_int(jcontext ctx, jobject self, jint param0);
void M_java_util_Calendar_complete(jcontext ctx, jobject self);
jobject SM_java_util_Calendar_getInstance_R_java_util_Calendar(jcontext ctx);
jobject SM_java_util_Calendar_getInstance_java_util_TimeZone_R_java_util_Calendar(jcontext ctx, jobject param0);
jobject M_java_util_Calendar_getTime_R_java_util_Date(jcontext ctx, jobject self);
jlong M_java_util_Calendar_getTimeInMillis_R_long(jcontext ctx, jobject self);
jobject M_java_util_Calendar_getTimeZone_R_java_util_TimeZone(jcontext ctx, jobject self);
void M_java_util_Calendar_set_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_java_util_Calendar_add_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_java_util_Calendar_setTime_java_util_Date(jcontext ctx, jobject self, jobject param0);
void M_java_util_Calendar_setTimeInMillis_long(jcontext ctx, jobject self, jlong param0);
void M_java_util_Calendar_setTimeZone_java_util_TimeZone(jcontext ctx, jobject self, jobject param0);
jint M_java_util_Calendar_getFirstDayOfWeek_R_int(jcontext ctx, jobject self);
jint M_java_util_Calendar_getMinimalDaysInFirstWeek_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
