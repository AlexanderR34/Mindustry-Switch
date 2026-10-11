#ifndef HEADER_java_util_Date
#define HEADER_java_util_Date

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Date {
	java_lang_Object parent;
	jlong F_date;
} java_util_Date;

extern Class class_java_util_Date;


#define VTABLE_java_util_Date_hashCode_R_int 0
typedef jint (*func_java_util_Date_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Date_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Date_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Date_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Date_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Date_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Date_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Date_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Date_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Date_finalize 5
typedef void (*func_java_util_Date_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Date_notify 6
typedef void (*func_java_util_Date_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Date_notifyAll 7
typedef void (*func_java_util_Date_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Date_wait 8
typedef void (*func_java_util_Date_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Date_wait_long 9
typedef void (*func_java_util_Date_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Date_wait_long_int 10
typedef void (*func_java_util_Date_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Date_compareTo_java_lang_Object_R_int 11
typedef jint (*func_java_util_Date_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Date_after_java_util_Date_R_boolean 12
typedef jbool (*func_java_util_Date_after_java_util_Date_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Date_getTime_R_long 13
typedef jlong (*func_java_util_Date_getTime_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_Date_setTime_long 14
typedef void (*func_java_util_Date_setTime_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Date_compareTo_java_util_Date_R_int 15
typedef jint (*func_java_util_Date_compareTo_java_util_Date_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_Date(jobject object, jint mark, jint depth);
void clinit_java_util_Date(jcontext ctx);
void init_java_util_Date(jcontext ctx, jobject self);
void init_java_util_Date_long(jcontext ctx, jobject self, jlong param0);
jbool M_java_util_Date_after_java_util_Date_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Date_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jlong M_java_util_Date_getTime_R_long(jcontext ctx, jobject self);
jint M_java_util_Date_hashCode_R_int(jcontext ctx, jobject self);
void M_java_util_Date_setTime_long(jcontext ctx, jobject self, jlong param0);
jobject M_java_util_Date_toString_R_java_lang_String(jcontext ctx, jobject self);
jint M_java_util_Date_compareTo_java_util_Date_R_int(jcontext ctx, jobject self, jobject param0);
jlong SM_java_util_Date_parse_java_lang_String_R_long(jcontext ctx, jobject param0);
jint M_java_util_Date_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
