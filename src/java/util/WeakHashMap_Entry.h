#ifndef HEADER_java_util_WeakHashMap$Entry
#define HEADER_java_util_WeakHashMap$Entry

#include "Clearwing.h"
#include "java/lang/ref/WeakReference.h"
#include "java/util/Map_Entry.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_WeakHashMap$Entry {
	java_lang_ref_WeakReference parent;
	jref F_value;
	jint F_hash;
	jref F_next;
} java_util_WeakHashMap$Entry;

extern Class class_java_util_WeakHashMap$Entry;


#define VTABLE_java_util_WeakHashMap$Entry_hashCode_R_int 0
typedef jint (*func_java_util_WeakHashMap$Entry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$Entry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_WeakHashMap$Entry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap$Entry_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_WeakHashMap$Entry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$Entry_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_WeakHashMap$Entry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$Entry_toString_R_java_lang_String 4
typedef jobject (*func_java_util_WeakHashMap$Entry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$Entry_finalize 5
typedef void (*func_java_util_WeakHashMap$Entry_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$Entry_notify 6
typedef void (*func_java_util_WeakHashMap$Entry_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$Entry_notifyAll 7
typedef void (*func_java_util_WeakHashMap$Entry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$Entry_wait 8
typedef void (*func_java_util_WeakHashMap$Entry_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$Entry_wait_long 9
typedef void (*func_java_util_WeakHashMap$Entry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_WeakHashMap$Entry_wait_long_int 10
typedef void (*func_java_util_WeakHashMap$Entry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_WeakHashMap$Entry_clear 11
typedef void (*func_java_util_WeakHashMap$Entry_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$Entry_get_R_java_lang_Object 12
typedef jobject (*func_java_util_WeakHashMap$Entry_get_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$Entry_refersTo_java_lang_Object_R_boolean 13
typedef jbool (*func_java_util_WeakHashMap$Entry_refersTo_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap$Entry_init_java_lang_Object 14
typedef void (*func_java_util_WeakHashMap$Entry_init_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap$Entry_getKey_R_java_lang_Object 15
typedef jobject (*func_java_util_WeakHashMap$Entry_getKey_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$Entry_getValue_R_java_lang_Object 16
typedef jobject (*func_java_util_WeakHashMap$Entry_getValue_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$Entry_setValue_java_lang_Object_R_java_lang_Object 17
typedef jobject (*func_java_util_WeakHashMap$Entry_setValue_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_WeakHashMap$Entry(jobject object, jint mark, jint depth);
void clinit_java_util_WeakHashMap$Entry(jcontext ctx);
void init_java_util_WeakHashMap$Entry_java_lang_Object_java_lang_Object_int_java_util_WeakHashMap$Entry(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3);
jobject M_java_util_WeakHashMap$Entry_getKey_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_WeakHashMap$Entry_getValue_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_WeakHashMap$Entry_setValue_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_WeakHashMap$Entry_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_util_WeakHashMap$Entry_hashCode_R_int(jcontext ctx, jobject self);
jobject M_java_util_WeakHashMap$Entry_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
