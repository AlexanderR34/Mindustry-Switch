#ifndef HEADER_rhino_Symbol
#define HEADER_rhino_Symbol

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Symbol {
	java_lang_Object parent;
} rhino_Symbol;

extern Class class_rhino_Symbol;



void mark_rhino_Symbol(jobject object, jint mark, jint depth);
void clinit_rhino_Symbol(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
