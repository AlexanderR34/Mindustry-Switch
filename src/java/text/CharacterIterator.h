#ifndef HEADER_java_text_CharacterIterator
#define HEADER_java_text_CharacterIterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_text_CharacterIterator {
	java_lang_Object parent;
} java_text_CharacterIterator;

extern Class class_java_text_CharacterIterator;

extern jchar SF_java_text_CharacterIterator_DONE;

#define INDEX_java_text_CharacterIterator_first_R_char 0
typedef jchar (*func_java_text_CharacterIterator_first_R_char)(jcontext ctx, jobject self);
#define INDEX_java_text_CharacterIterator_last_R_char 1
typedef jchar (*func_java_text_CharacterIterator_last_R_char)(jcontext ctx, jobject self);
#define INDEX_java_text_CharacterIterator_current_R_char 2
typedef jchar (*func_java_text_CharacterIterator_current_R_char)(jcontext ctx, jobject self);
#define INDEX_java_text_CharacterIterator_next_R_char 3
typedef jchar (*func_java_text_CharacterIterator_next_R_char)(jcontext ctx, jobject self);
#define INDEX_java_text_CharacterIterator_previous_R_char 4
typedef jchar (*func_java_text_CharacterIterator_previous_R_char)(jcontext ctx, jobject self);
#define INDEX_java_text_CharacterIterator_setIndex_int_R_char 5
typedef jchar (*func_java_text_CharacterIterator_setIndex_int_R_char)(jcontext ctx, jobject self, jint param0);
#define INDEX_java_text_CharacterIterator_getBeginIndex_R_int 6
typedef jint (*func_java_text_CharacterIterator_getBeginIndex_R_int)(jcontext ctx, jobject self);
#define INDEX_java_text_CharacterIterator_getEndIndex_R_int 7
typedef jint (*func_java_text_CharacterIterator_getEndIndex_R_int)(jcontext ctx, jobject self);
#define INDEX_java_text_CharacterIterator_getIndex_R_int 8
typedef jint (*func_java_text_CharacterIterator_getIndex_R_int)(jcontext ctx, jobject self);
#define INDEX_java_text_CharacterIterator_clone_R_java_lang_Object 9
typedef jobject (*func_java_text_CharacterIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_java_text_CharacterIterator(jobject object, jint mark, jint depth);
void clinit_java_text_CharacterIterator(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
