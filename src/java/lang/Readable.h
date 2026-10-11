#ifndef HEADER_java_lang_Readable
#define HEADER_java_lang_Readable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Readable {
	java_lang_Object parent;
} java_lang_Readable;

extern Class class_java_lang_Readable;


#define INDEX_java_lang_Readable_read_java_nio_CharBuffer_R_int 0
typedef jint (*func_java_lang_Readable_read_java_nio_CharBuffer_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_java_lang_Readable(jobject object, jint mark, jint depth);
void clinit_java_lang_Readable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
