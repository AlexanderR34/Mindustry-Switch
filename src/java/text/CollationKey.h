#ifndef HEADER_java_text_CollationKey
#define HEADER_java_text_CollationKey

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_text_CollationKey {
	java_lang_Object parent;
	jref F_source;
} java_text_CollationKey;

extern Class class_java_text_CollationKey;


#define VTABLE_java_text_CollationKey_hashCode_R_int 0
typedef jint (*func_java_text_CollationKey_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_text_CollationKey_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_text_CollationKey_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_text_CollationKey_clone_R_java_lang_Object 2
typedef jobject (*func_java_text_CollationKey_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_text_CollationKey_getClass_R_java_lang_Class 3
typedef jobject (*func_java_text_CollationKey_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_text_CollationKey_toString_R_java_lang_String 4
typedef jobject (*func_java_text_CollationKey_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_text_CollationKey_finalize 5
typedef void (*func_java_text_CollationKey_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_text_CollationKey_notify 6
typedef void (*func_java_text_CollationKey_notify)(jcontext ctx, jobject self);
#define VTABLE_java_text_CollationKey_notifyAll 7
typedef void (*func_java_text_CollationKey_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_text_CollationKey_wait 8
typedef void (*func_java_text_CollationKey_wait)(jcontext ctx, jobject self);
#define VTABLE_java_text_CollationKey_wait_long 9
typedef void (*func_java_text_CollationKey_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_text_CollationKey_wait_long_int 10
typedef void (*func_java_text_CollationKey_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_text_CollationKey_compareTo_java_lang_Object_R_int 11
typedef jint (*func_java_text_CollationKey_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_text_CollationKey_compareTo_java_text_CollationKey_R_int 12
typedef jint (*func_java_text_CollationKey_compareTo_java_text_CollationKey_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_text_CollationKey_getSourceString_R_java_lang_String 13
typedef jobject (*func_java_text_CollationKey_getSourceString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_text_CollationKey_toByteArray_R_Array1_byte 14
typedef jobject (*func_java_text_CollationKey_toByteArray_R_Array1_byte)(jcontext ctx, jobject self);

void mark_java_text_CollationKey(jobject object, jint mark, jint depth);
void clinit_java_text_CollationKey(jcontext ctx);
void init_java_text_CollationKey_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_java_text_CollationKey_getSourceString_R_java_lang_String(jcontext ctx, jobject self);
jint M_java_text_CollationKey_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
