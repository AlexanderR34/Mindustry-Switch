#ifndef HEADER_regexodus_ds_CharCharMap$Entry
#define HEADER_regexodus_ds_CharCharMap$Entry

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_ds_CharCharMap$Entry {
	java_lang_Object parent;
	jchar F_key;
	jchar F_value;
} regexodus_ds_CharCharMap$Entry;

extern Class class_regexodus_ds_CharCharMap$Entry;


#define VTABLE_regexodus_ds_CharCharMap$Entry_hashCode_R_int 0
typedef jint (*func_regexodus_ds_CharCharMap$Entry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap$Entry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_ds_CharCharMap$Entry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_ds_CharCharMap$Entry_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_ds_CharCharMap$Entry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap$Entry_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_ds_CharCharMap$Entry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap$Entry_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_ds_CharCharMap$Entry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap$Entry_finalize 5
typedef void (*func_regexodus_ds_CharCharMap$Entry_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap$Entry_notify 6
typedef void (*func_regexodus_ds_CharCharMap$Entry_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap$Entry_notifyAll 7
typedef void (*func_regexodus_ds_CharCharMap$Entry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap$Entry_wait 8
typedef void (*func_regexodus_ds_CharCharMap$Entry_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap$Entry_wait_long 9
typedef void (*func_regexodus_ds_CharCharMap$Entry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_ds_CharCharMap$Entry_wait_long_int 10
typedef void (*func_regexodus_ds_CharCharMap$Entry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_ds_CharCharMap$Entry_getKey_R_char 11
typedef jchar (*func_regexodus_ds_CharCharMap$Entry_getKey_R_char)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap$Entry_getValue_R_char 12
typedef jchar (*func_regexodus_ds_CharCharMap$Entry_getValue_R_char)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap$Entry_setValue_char_R_char 13
typedef jchar (*func_regexodus_ds_CharCharMap$Entry_setValue_char_R_char)(jcontext ctx, jobject self, jchar param0);

void mark_regexodus_ds_CharCharMap$Entry(jobject object, jint mark, jint depth);
void clinit_regexodus_ds_CharCharMap$Entry(jcontext ctx);
void init_regexodus_ds_CharCharMap$Entry(jcontext ctx, jobject self);
jobject M_regexodus_ds_CharCharMap$Entry_toString_R_java_lang_String(jcontext ctx, jobject self);
jchar M_regexodus_ds_CharCharMap$Entry_getKey_R_char(jcontext ctx, jobject self);
jchar M_regexodus_ds_CharCharMap$Entry_getValue_R_char(jcontext ctx, jobject self);
jchar M_regexodus_ds_CharCharMap$Entry_setValue_char_R_char(jcontext ctx, jobject self, jchar param0);
jbool M_regexodus_ds_CharCharMap$Entry_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_regexodus_ds_CharCharMap$Entry_hashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
