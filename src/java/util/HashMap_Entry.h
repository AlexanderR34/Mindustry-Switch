#ifndef HEADER_java_util_HashMap$Entry
#define HEADER_java_util_HashMap$Entry

#include "Clearwing.h"
#include "java/util/MapEntry.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_HashMap$Entry {
	java_util_MapEntry parent;
	jint F_origKeyHash;
	jref F_next;
} java_util_HashMap$Entry;

extern Class class_java_util_HashMap$Entry;


#define VTABLE_java_util_HashMap$Entry_hashCode_R_int 0
typedef jint (*func_java_util_HashMap$Entry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap$Entry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_HashMap$Entry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_HashMap$Entry_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_HashMap$Entry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap$Entry_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_HashMap$Entry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap$Entry_toString_R_java_lang_String 4
typedef jobject (*func_java_util_HashMap$Entry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap$Entry_finalize 5
typedef void (*func_java_util_HashMap$Entry_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap$Entry_notify 6
typedef void (*func_java_util_HashMap$Entry_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap$Entry_notifyAll 7
typedef void (*func_java_util_HashMap$Entry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap$Entry_wait 8
typedef void (*func_java_util_HashMap$Entry_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap$Entry_wait_long 9
typedef void (*func_java_util_HashMap$Entry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_HashMap$Entry_wait_long_int 10
typedef void (*func_java_util_HashMap$Entry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_HashMap$Entry_getKey_R_java_lang_Object 11
typedef jobject (*func_java_util_HashMap$Entry_getKey_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap$Entry_getValue_R_java_lang_Object 12
typedef jobject (*func_java_util_HashMap$Entry_getValue_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap$Entry_setValue_java_lang_Object_R_java_lang_Object 13
typedef jobject (*func_java_util_HashMap$Entry_setValue_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_HashMap$Entry(jobject object, jint mark, jint depth);
void clinit_java_util_HashMap$Entry(jcontext ctx);
void init_java_util_HashMap$Entry_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1);
void init_java_util_HashMap$Entry_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
