#ifndef HEADER_java_util_EnumMap$EntryIterator$Entry
#define HEADER_java_util_EnumMap$EntryIterator$Entry

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Map_Entry.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_EnumMap$EntryIterator$Entry {
	java_lang_Object parent;
	jint F_index;
	jref F_this$1;
} java_util_EnumMap$EntryIterator$Entry;

extern Class class_java_util_EnumMap$EntryIterator$Entry;


#define VTABLE_java_util_EnumMap$EntryIterator$Entry_hashCode_R_int 0
typedef jint (*func_java_util_EnumMap$EntryIterator$Entry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntryIterator$Entry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_EnumMap$EntryIterator$Entry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap$EntryIterator$Entry_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_EnumMap$EntryIterator$Entry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntryIterator$Entry_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_EnumMap$EntryIterator$Entry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntryIterator$Entry_toString_R_java_lang_String 4
typedef jobject (*func_java_util_EnumMap$EntryIterator$Entry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntryIterator$Entry_finalize 5
typedef void (*func_java_util_EnumMap$EntryIterator$Entry_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntryIterator$Entry_notify 6
typedef void (*func_java_util_EnumMap$EntryIterator$Entry_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntryIterator$Entry_notifyAll 7
typedef void (*func_java_util_EnumMap$EntryIterator$Entry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntryIterator$Entry_wait 8
typedef void (*func_java_util_EnumMap$EntryIterator$Entry_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntryIterator$Entry_wait_long 9
typedef void (*func_java_util_EnumMap$EntryIterator$Entry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_EnumMap$EntryIterator$Entry_wait_long_int 10
typedef void (*func_java_util_EnumMap$EntryIterator$Entry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_EnumMap$EntryIterator$Entry_getKey_R_java_lang_Object 11
typedef jobject (*func_java_util_EnumMap$EntryIterator$Entry_getKey_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntryIterator$Entry_getValue_R_java_lang_Object 12
typedef jobject (*func_java_util_EnumMap$EntryIterator$Entry_getValue_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntryIterator$Entry_setValue_java_lang_Object_R_java_lang_Object 13
typedef jobject (*func_java_util_EnumMap$EntryIterator$Entry_setValue_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap$EntryIterator$Entry_getKey_R_java_lang_Enum 14
typedef jobject (*func_java_util_EnumMap$EntryIterator$Entry_getKey_R_java_lang_Enum)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntryIterator$Entry_checkIndexForEntryUse 15
typedef void (*func_java_util_EnumMap$EntryIterator$Entry_checkIndexForEntryUse)(jcontext ctx, jobject self);

void mark_java_util_EnumMap$EntryIterator$Entry(jobject object, jint mark, jint depth);
void clinit_java_util_EnumMap$EntryIterator$Entry(jcontext ctx);
void init_java_util_EnumMap$EntryIterator$Entry_java_util_EnumMap$EntryIterator_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_java_util_EnumMap$EntryIterator$Entry_getKey_R_java_lang_Enum(jcontext ctx, jobject self);
jobject M_java_util_EnumMap$EntryIterator$Entry_getValue_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_EnumMap$EntryIterator$Entry_setValue_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_EnumMap$EntryIterator$Entry_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_util_EnumMap$EntryIterator$Entry_hashCode_R_int(jcontext ctx, jobject self);
jobject M_java_util_EnumMap$EntryIterator$Entry_toString_R_java_lang_String(jcontext ctx, jobject self);
void M_java_util_EnumMap$EntryIterator$Entry_checkIndexForEntryUse(jcontext ctx, jobject self);
jobject M_java_util_EnumMap$EntryIterator$Entry_getKey_R_java_lang_Object(jcontext ctx, jobject self);
void init_java_util_EnumMap$EntryIterator$Entry_java_util_EnumMap$EntryIterator_int_java_util_EnumMap$1(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jint SM_java_util_EnumMap$EntryIterator$Entry_access$1500_java_util_EnumMap$EntryIterator$Entry_R_int(jcontext ctx, jobject param0);
jint SM_java_util_EnumMap$EntryIterator$Entry_access$1502_java_util_EnumMap$EntryIterator$Entry_int_R_int(jcontext ctx, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
