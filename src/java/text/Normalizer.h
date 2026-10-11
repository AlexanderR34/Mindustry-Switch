#ifndef HEADER_java_text_Normalizer
#define HEADER_java_text_Normalizer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_text_Normalizer {
	java_lang_Object parent;
} java_text_Normalizer;

extern Class class_java_text_Normalizer;


#define VTABLE_java_text_Normalizer_hashCode_R_int 0
typedef jint (*func_java_text_Normalizer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_text_Normalizer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_text_Normalizer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_text_Normalizer_clone_R_java_lang_Object 2
typedef jobject (*func_java_text_Normalizer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_text_Normalizer_getClass_R_java_lang_Class 3
typedef jobject (*func_java_text_Normalizer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_text_Normalizer_toString_R_java_lang_String 4
typedef jobject (*func_java_text_Normalizer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_text_Normalizer_finalize 5
typedef void (*func_java_text_Normalizer_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_text_Normalizer_notify 6
typedef void (*func_java_text_Normalizer_notify)(jcontext ctx, jobject self);
#define VTABLE_java_text_Normalizer_notifyAll 7
typedef void (*func_java_text_Normalizer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_text_Normalizer_wait 8
typedef void (*func_java_text_Normalizer_wait)(jcontext ctx, jobject self);
#define VTABLE_java_text_Normalizer_wait_long 9
typedef void (*func_java_text_Normalizer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_text_Normalizer_wait_long_int 10
typedef void (*func_java_text_Normalizer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_text_Normalizer(jobject object, jint mark, jint depth);
void clinit_java_text_Normalizer(jcontext ctx);
jbool SM_java_text_Normalizer_isNormalized_java_lang_CharSequence_java_text_Normalizer$Form_R_boolean(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_text_Normalizer_normalize_java_lang_CharSequence_java_text_Normalizer$Form_R_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void init_java_text_Normalizer(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
