#ifndef HEADER_java_lang_Appendable
#define HEADER_java_lang_Appendable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Appendable {
	java_lang_Object parent;
} java_lang_Appendable;

extern Class class_java_lang_Appendable;


#define INDEX_java_lang_Appendable_append_char_R_java_lang_Appendable 0
typedef jobject (*func_java_lang_Appendable_append_char_R_java_lang_Appendable)(jcontext ctx, jobject self, jchar param0);
#define INDEX_java_lang_Appendable_append_java_lang_CharSequence_R_java_lang_Appendable 1
typedef jobject (*func_java_lang_Appendable_append_java_lang_CharSequence_R_java_lang_Appendable)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_lang_Appendable_append_java_lang_CharSequence_int_int_R_java_lang_Appendable 2
typedef jobject (*func_java_lang_Appendable_append_java_lang_CharSequence_int_int_R_java_lang_Appendable)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);

void mark_java_lang_Appendable(jobject object, jint mark, jint depth);
void clinit_java_lang_Appendable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
