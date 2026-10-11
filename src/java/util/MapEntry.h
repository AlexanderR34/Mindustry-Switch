#ifndef HEADER_java_util_MapEntry
#define HEADER_java_util_MapEntry

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Map_Entry.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_MapEntry {
	java_lang_Object parent;
	jref F_key;
	jref F_value;
} java_util_MapEntry;

extern Class class_java_util_MapEntry;


#define VTABLE_java_util_MapEntry_hashCode_R_int 0
typedef jint (*func_java_util_MapEntry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_MapEntry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_MapEntry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_MapEntry_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_MapEntry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_MapEntry_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_MapEntry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_MapEntry_toString_R_java_lang_String 4
typedef jobject (*func_java_util_MapEntry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_MapEntry_finalize 5
typedef void (*func_java_util_MapEntry_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_MapEntry_notify 6
typedef void (*func_java_util_MapEntry_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_MapEntry_notifyAll 7
typedef void (*func_java_util_MapEntry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_MapEntry_wait 8
typedef void (*func_java_util_MapEntry_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_MapEntry_wait_long 9
typedef void (*func_java_util_MapEntry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_MapEntry_wait_long_int 10
typedef void (*func_java_util_MapEntry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_MapEntry_getKey_R_java_lang_Object 11
typedef jobject (*func_java_util_MapEntry_getKey_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_MapEntry_getValue_R_java_lang_Object 12
typedef jobject (*func_java_util_MapEntry_getValue_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_MapEntry_setValue_java_lang_Object_R_java_lang_Object 13
typedef jobject (*func_java_util_MapEntry_setValue_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_MapEntry(jobject object, jint mark, jint depth);
void clinit_java_util_MapEntry(jcontext ctx);
void init_java_util_MapEntry_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void init_java_util_MapEntry_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_java_util_MapEntry_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_MapEntry_getKey_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_MapEntry_getValue_R_java_lang_Object(jcontext ctx, jobject self);
jint M_java_util_MapEntry_hashCode_R_int(jcontext ctx, jobject self);
jobject M_java_util_MapEntry_setValue_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_MapEntry_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
