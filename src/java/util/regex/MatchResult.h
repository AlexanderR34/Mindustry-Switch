#ifndef HEADER_java_util_regex_MatchResult
#define HEADER_java_util_regex_MatchResult

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "regexodus/between/MatchResult.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_regex_MatchResult {
	java_lang_Object parent;
} java_util_regex_MatchResult;

extern Class class_java_util_regex_MatchResult;



void mark_java_util_regex_MatchResult(jobject object, jint mark, jint depth);
void clinit_java_util_regex_MatchResult(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
