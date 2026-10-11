#ifndef HEADER_regexodus_TextBuffer
#define HEADER_regexodus_TextBuffer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_TextBuffer {
	java_lang_Object parent;
} regexodus_TextBuffer;

extern Class class_regexodus_TextBuffer;


#define INDEX_regexodus_TextBuffer_append_char 0
typedef void (*func_regexodus_TextBuffer_append_char)(jcontext ctx, jobject self, jchar param0);
#define INDEX_regexodus_TextBuffer_append_Array1_char_int_int 1
typedef void (*func_regexodus_TextBuffer_append_Array1_char_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define INDEX_regexodus_TextBuffer_append_java_lang_String 2
typedef void (*func_regexodus_TextBuffer_append_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_regexodus_TextBuffer(jobject object, jint mark, jint depth);
void clinit_regexodus_TextBuffer(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
