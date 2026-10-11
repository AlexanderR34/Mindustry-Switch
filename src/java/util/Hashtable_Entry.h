#ifndef HEADER_java_util_Hashtable$Entry
#define HEADER_java_util_Hashtable$Entry

#include "Clearwing.h"
#include "java/util/MapEntry.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Hashtable$Entry {
	java_util_MapEntry parent;
	jref F_next;
	jint F_hashcode;
} java_util_Hashtable$Entry;

extern Class class_java_util_Hashtable$Entry;


#define VTABLE_java_util_Hashtable$Entry_hashCode_R_int 0
typedef jint (*func_java_util_Hashtable$Entry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$Entry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Hashtable$Entry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Hashtable$Entry_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Hashtable$Entry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$Entry_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Hashtable$Entry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$Entry_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Hashtable$Entry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$Entry_finalize 5
typedef void (*func_java_util_Hashtable$Entry_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$Entry_notify 6
typedef void (*func_java_util_Hashtable$Entry_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$Entry_notifyAll 7
typedef void (*func_java_util_Hashtable$Entry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$Entry_wait 8
typedef void (*func_java_util_Hashtable$Entry_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$Entry_wait_long 9
typedef void (*func_java_util_Hashtable$Entry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Hashtable$Entry_wait_long_int 10
typedef void (*func_java_util_Hashtable$Entry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Hashtable$Entry_getKey_R_java_lang_Object 11
typedef jobject (*func_java_util_Hashtable$Entry_getKey_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$Entry_getValue_R_java_lang_Object 12
typedef jobject (*func_java_util_Hashtable$Entry_getValue_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$Entry_setValue_java_lang_Object_R_java_lang_Object 13
typedef jobject (*func_java_util_Hashtable$Entry_setValue_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Hashtable$Entry_getKeyHash_R_int 14
typedef jint (*func_java_util_Hashtable$Entry_getKeyHash_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$Entry_equalsKey_java_lang_Object_int_R_boolean 15
typedef jbool (*func_java_util_Hashtable$Entry_equalsKey_java_lang_Object_int_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1);

void mark_java_util_Hashtable$Entry(jobject object, jint mark, jint depth);
void clinit_java_util_Hashtable$Entry(jcontext ctx);
void init_java_util_Hashtable$Entry_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_Hashtable$Entry_setValue_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jint M_java_util_Hashtable$Entry_getKeyHash_R_int(jcontext ctx, jobject self);
jbool M_java_util_Hashtable$Entry_equalsKey_java_lang_Object_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_java_util_Hashtable$Entry_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
