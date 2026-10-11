#ifndef HEADER_java_text_AttributedCharacterIterator
#define HEADER_java_text_AttributedCharacterIterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/text/CharacterIterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_text_AttributedCharacterIterator {
	java_lang_Object parent;
} java_text_AttributedCharacterIterator;

extern Class class_java_text_AttributedCharacterIterator;



void mark_java_text_AttributedCharacterIterator(jobject object, jint mark, jint depth);
void clinit_java_text_AttributedCharacterIterator(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
