#ifndef HEADER_java_util_AbstractMap$SimpleImmutableEntry
#define HEADER_java_util_AbstractMap$SimpleImmutableEntry

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Map_Entry.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_AbstractMap$SimpleImmutableEntry {
	java_lang_Object parent;
	jref F_key;
	jref F_value;
} java_util_AbstractMap$SimpleImmutableEntry;

extern Class class_java_util_AbstractMap$SimpleImmutableEntry;

extern jlong SF_java_util_AbstractMap$SimpleImmutableEntry_serialVersionUID;

#define VTABLE_java_util_AbstractMap$SimpleImmutableEntry_hashCode_R_int 0
typedef jint (*func_java_util_AbstractMap$SimpleImmutableEntry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$SimpleImmutableEntry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_AbstractMap$SimpleImmutableEntry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractMap$SimpleImmutableEntry_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_AbstractMap$SimpleImmutableEntry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$SimpleImmutableEntry_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_AbstractMap$SimpleImmutableEntry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$SimpleImmutableEntry_toString_R_java_lang_String 4
typedef jobject (*func_java_util_AbstractMap$SimpleImmutableEntry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$SimpleImmutableEntry_finalize 5
typedef void (*func_java_util_AbstractMap$SimpleImmutableEntry_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$SimpleImmutableEntry_notify 6
typedef void (*func_java_util_AbstractMap$SimpleImmutableEntry_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$SimpleImmutableEntry_notifyAll 7
typedef void (*func_java_util_AbstractMap$SimpleImmutableEntry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$SimpleImmutableEntry_wait 8
typedef void (*func_java_util_AbstractMap$SimpleImmutableEntry_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$SimpleImmutableEntry_wait_long 9
typedef void (*func_java_util_AbstractMap$SimpleImmutableEntry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_AbstractMap$SimpleImmutableEntry_wait_long_int 10
typedef void (*func_java_util_AbstractMap$SimpleImmutableEntry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_AbstractMap$SimpleImmutableEntry_getKey_R_java_lang_Object 11
typedef jobject (*func_java_util_AbstractMap$SimpleImmutableEntry_getKey_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$SimpleImmutableEntry_getValue_R_java_lang_Object 12
typedef jobject (*func_java_util_AbstractMap$SimpleImmutableEntry_getValue_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$SimpleImmutableEntry_setValue_java_lang_Object_R_java_lang_Object 13
typedef jobject (*func_java_util_AbstractMap$SimpleImmutableEntry_setValue_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_AbstractMap$SimpleImmutableEntry(jobject object, jint mark, jint depth);
void clinit_java_util_AbstractMap$SimpleImmutableEntry(jcontext ctx);
void init_java_util_AbstractMap$SimpleImmutableEntry_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_util_AbstractMap$SimpleImmutableEntry_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_AbstractMap$SimpleImmutableEntry_getKey_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_AbstractMap$SimpleImmutableEntry_getValue_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_AbstractMap$SimpleImmutableEntry_setValue_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_AbstractMap$SimpleImmutableEntry_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_util_AbstractMap$SimpleImmutableEntry_hashCode_R_int(jcontext ctx, jobject self);
jobject M_java_util_AbstractMap$SimpleImmutableEntry_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
