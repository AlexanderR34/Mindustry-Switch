#ifndef HEADER_regexodus_Substitution
#define HEADER_regexodus_Substitution

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_Substitution {
	java_lang_Object parent;
} regexodus_Substitution;

extern Class class_regexodus_Substitution;


#define INDEX_regexodus_Substitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer 0
typedef void (*func_regexodus_Substitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_regexodus_Substitution(jobject object, jint mark, jint depth);
void clinit_regexodus_Substitution(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
