#ifndef HEADER_java_util_SimpleTimeZone
#define HEADER_java_util_SimpleTimeZone

#include "Clearwing.h"
#include "java/util/TimeZone.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_SimpleTimeZone {
	java_util_TimeZone parent;
	jint F_rawOffset;
	jint F_startYear;
	jint F_startMonth;
	jint F_startDay;
	jint F_startDayOfWeek;
	jint F_startTime;
	jint F_endMonth;
	jint F_endDay;
	jint F_endDayOfWeek;
	jint F_endTime;
	jint F_startMode;
	jint F_endMode;
	jbool F_useDaylight;
	jint F_dstSavings;
} java_util_SimpleTimeZone;

extern Class class_java_util_SimpleTimeZone;

extern jint SF_java_util_SimpleTimeZone_DOM_MODE;
extern jint SF_java_util_SimpleTimeZone_DOW_IN_MONTH_MODE;
extern jint SF_java_util_SimpleTimeZone_DOW_GE_DOM_MODE;
extern jint SF_java_util_SimpleTimeZone_DOW_LE_DOM_MODE;
extern jint SF_java_util_SimpleTimeZone_UTC_TIME;
extern jint SF_java_util_SimpleTimeZone_STANDARD_TIME;
extern jint SF_java_util_SimpleTimeZone_WALL_TIME;
extern jint SF_java_util_SimpleTimeZone_MILLIS_PER_SECOND;
extern jint SF_java_util_SimpleTimeZone_MILLIS_PER_MINUTE;
extern jint SF_java_util_SimpleTimeZone_MILLIS_PER_HOUR;
extern jint SF_java_util_SimpleTimeZone_JULIAN_1_CE;
extern jint SF_java_util_SimpleTimeZone_JULIAN_1970_CE;
extern jobject SF_java_util_SimpleTimeZone_MONTH_LENGTH;
extern jobject SF_java_util_SimpleTimeZone_DAYS_BEFORE;

#define VTABLE_java_util_SimpleTimeZone_hashCode_R_int 0
typedef jint (*func_java_util_SimpleTimeZone_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_SimpleTimeZone_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_SimpleTimeZone_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_SimpleTimeZone_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_SimpleTimeZone_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_SimpleTimeZone_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_SimpleTimeZone_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_SimpleTimeZone_toString_R_java_lang_String 4
typedef jobject (*func_java_util_SimpleTimeZone_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_SimpleTimeZone_finalize 5
typedef void (*func_java_util_SimpleTimeZone_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_SimpleTimeZone_notify 6
typedef void (*func_java_util_SimpleTimeZone_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_SimpleTimeZone_notifyAll 7
typedef void (*func_java_util_SimpleTimeZone_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_SimpleTimeZone_wait 8
typedef void (*func_java_util_SimpleTimeZone_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_SimpleTimeZone_wait_long 9
typedef void (*func_java_util_SimpleTimeZone_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_SimpleTimeZone_wait_long_int 10
typedef void (*func_java_util_SimpleTimeZone_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_SimpleTimeZone_setID_java_lang_String 11
typedef void (*func_java_util_SimpleTimeZone_setID_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_SimpleTimeZone_getDSTSavings_R_int 12
typedef jint (*func_java_util_SimpleTimeZone_getDSTSavings_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_SimpleTimeZone_inDaylightTime_java_util_Date_R_boolean 13
typedef jbool (*func_java_util_SimpleTimeZone_inDaylightTime_java_util_Date_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_SimpleTimeZone_getID_R_java_lang_String 14
typedef jobject (*func_java_util_SimpleTimeZone_getID_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_SimpleTimeZone_getOffset_int_int_int_int_int_int_R_int 15
typedef jint (*func_java_util_SimpleTimeZone_getOffset_int_int_int_int_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5);
#define VTABLE_java_util_SimpleTimeZone_getRawOffset_R_int 16
typedef jint (*func_java_util_SimpleTimeZone_getRawOffset_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_SimpleTimeZone_useDaylightTime_R_boolean 17
typedef jbool (*func_java_util_SimpleTimeZone_useDaylightTime_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_SimpleTimeZone_getOffset_long_R_int 18
typedef jint (*func_java_util_SimpleTimeZone_getOffset_long_R_int)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_SimpleTimeZone_hasSameRules_java_util_TimeZone_R_boolean 19
typedef jbool (*func_java_util_SimpleTimeZone_hasSameRules_java_util_TimeZone_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_SimpleTimeZone_mod7_int_R_int 20
typedef jint (*func_java_util_SimpleTimeZone_mod7_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_SimpleTimeZone_setDSTSavings_int 21
typedef void (*func_java_util_SimpleTimeZone_setDSTSavings_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_SimpleTimeZone_checkRange_int_int_int 22
typedef void (*func_java_util_SimpleTimeZone_checkRange_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_java_util_SimpleTimeZone_checkDay_int_int 23
typedef void (*func_java_util_SimpleTimeZone_checkDay_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_util_SimpleTimeZone_setEndMode 24
typedef void (*func_java_util_SimpleTimeZone_setEndMode)(jcontext ctx, jobject self);
#define VTABLE_java_util_SimpleTimeZone_setEndRule_int_int_int 25
typedef void (*func_java_util_SimpleTimeZone_setEndRule_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_java_util_SimpleTimeZone_setEndRule_int_int_int_int 26
typedef void (*func_java_util_SimpleTimeZone_setEndRule_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_java_util_SimpleTimeZone_setEndRule_int_int_int_int_boolean 27
typedef void (*func_java_util_SimpleTimeZone_setEndRule_int_int_int_int_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jbool param4);
#define VTABLE_java_util_SimpleTimeZone_setRawOffset_int 28
typedef void (*func_java_util_SimpleTimeZone_setRawOffset_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_SimpleTimeZone_setStartMode 29
typedef void (*func_java_util_SimpleTimeZone_setStartMode)(jcontext ctx, jobject self);
#define VTABLE_java_util_SimpleTimeZone_setStartRule_int_int_int 30
typedef void (*func_java_util_SimpleTimeZone_setStartRule_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_java_util_SimpleTimeZone_setStartRule_int_int_int_int 31
typedef void (*func_java_util_SimpleTimeZone_setStartRule_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_java_util_SimpleTimeZone_setStartRule_int_int_int_int_boolean 32
typedef void (*func_java_util_SimpleTimeZone_setStartRule_int_int_int_int_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jbool param4);
#define VTABLE_java_util_SimpleTimeZone_setStartYear_int 33
typedef void (*func_java_util_SimpleTimeZone_setStartYear_int)(jcontext ctx, jobject self, jint param0);

void mark_java_util_SimpleTimeZone(jobject object, jint mark, jint depth);
void clinit_java_util_SimpleTimeZone(jcontext ctx);
jint SM_java_util_SimpleTimeZone_monthLength_int_int_R_int(jcontext ctx, jint param0, jint param1);
void init_java_util_SimpleTimeZone_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1);
void init_java_util_SimpleTimeZone_int_java_lang_String_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9);
void init_java_util_SimpleTimeZone_int_java_lang_String_int_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10);
void init_java_util_SimpleTimeZone_int_java_lang_String_int_int_int_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10, jint param11, jint param12);
jbool M_java_util_SimpleTimeZone_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_util_SimpleTimeZone_getDSTSavings_R_int(jcontext ctx, jobject self);
jint M_java_util_SimpleTimeZone_getOffset_int_int_int_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5);
jint M_java_util_SimpleTimeZone_getOffset_long_R_int(jcontext ctx, jobject self, jlong param0);
jobject SM_java_util_SimpleTimeZone_timeToFields_long_Array1_int_R_Array1_int(jcontext ctx, jlong param0, jobject param1);
jlong SM_java_util_SimpleTimeZone_floorDivide_long_long_R_long(jcontext ctx, jlong param0, jlong param1);
jlong SM_java_util_SimpleTimeZone_floorDivide_long_long_Array1_long_R_long(jcontext ctx, jlong param0, jlong param1, jobject param2);
jobject SM_java_util_SimpleTimeZone_dayToFields_long_Array1_int_R_Array1_int(jcontext ctx, jlong param0, jobject param1);
jint M_java_util_SimpleTimeZone_getRawOffset_R_int(jcontext ctx, jobject self);
jint M_java_util_SimpleTimeZone_hashCode_R_int(jcontext ctx, jobject self);
jbool M_java_util_SimpleTimeZone_hasSameRules_java_util_TimeZone_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_SimpleTimeZone_inDaylightTime_java_util_Date_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool SM_java_util_SimpleTimeZone_isLeapYear_int_R_boolean(jcontext ctx, jint param0);
jint M_java_util_SimpleTimeZone_mod7_int_R_int(jcontext ctx, jobject self, jint param0);
void M_java_util_SimpleTimeZone_setDSTSavings_int(jcontext ctx, jobject self, jint param0);
void M_java_util_SimpleTimeZone_checkRange_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_java_util_SimpleTimeZone_checkDay_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_java_util_SimpleTimeZone_setEndMode(jcontext ctx, jobject self);
void M_java_util_SimpleTimeZone_setEndRule_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_java_util_SimpleTimeZone_setEndRule_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_java_util_SimpleTimeZone_setEndRule_int_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jbool param4);
void M_java_util_SimpleTimeZone_setRawOffset_int(jcontext ctx, jobject self, jint param0);
void M_java_util_SimpleTimeZone_setStartMode(jcontext ctx, jobject self);
void M_java_util_SimpleTimeZone_setStartRule_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_java_util_SimpleTimeZone_setStartRule_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_java_util_SimpleTimeZone_setStartRule_int_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jbool param4);
void M_java_util_SimpleTimeZone_setStartYear_int(jcontext ctx, jobject self, jint param0);
jobject M_java_util_SimpleTimeZone_toString_R_java_lang_String(jcontext ctx, jobject self);
jbool M_java_util_SimpleTimeZone_useDaylightTime_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
