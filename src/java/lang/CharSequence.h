#ifndef HEADER_java_lang_CharSequence
#define HEADER_java_lang_CharSequence

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_CharSequence {
	java_lang_Object parent;
} java_lang_CharSequence;

extern Class class_java_lang_CharSequence;


#define INDEX_java_lang_CharSequence_length_R_int 0
typedef jint (*func_java_lang_CharSequence_length_R_int)(jcontext ctx, jobject self);
#define INDEX_java_lang_CharSequence_charAt_int_R_char 1
typedef jchar (*func_java_lang_CharSequence_charAt_int_R_char)(jcontext ctx, jobject self, jint param0);
#define INDEX_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence 2
typedef jobject (*func_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence)(jcontext ctx, jobject self, jint param0, jint param1);
#define INDEX_java_lang_CharSequence_toString_R_java_lang_String 3
typedef jobject (*func_java_lang_CharSequence_toString_R_java_lang_String)(jcontext ctx, jobject self);

void mark_java_lang_CharSequence(jobject object, jint mark, jint depth);
void clinit_java_lang_CharSequence(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
