#ifndef HEADER_regexodus_between_MatchResult
#define HEADER_regexodus_between_MatchResult

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_between_MatchResult {
	java_lang_Object parent;
} regexodus_between_MatchResult;

extern Class class_regexodus_between_MatchResult;


#define INDEX_regexodus_between_MatchResult_start_R_int 0
typedef jint (*func_regexodus_between_MatchResult_start_R_int)(jcontext ctx, jobject self);
#define INDEX_regexodus_between_MatchResult_start_int_R_int 1
typedef jint (*func_regexodus_between_MatchResult_start_int_R_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_regexodus_between_MatchResult_start_java_lang_String_R_int 2
typedef jint (*func_regexodus_between_MatchResult_start_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define INDEX_regexodus_between_MatchResult_end_R_int 3
typedef jint (*func_regexodus_between_MatchResult_end_R_int)(jcontext ctx, jobject self);
#define INDEX_regexodus_between_MatchResult_end_int_R_int 4
typedef jint (*func_regexodus_between_MatchResult_end_int_R_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_regexodus_between_MatchResult_end_java_lang_String_R_int 5
typedef jint (*func_regexodus_between_MatchResult_end_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define INDEX_regexodus_between_MatchResult_group_R_java_lang_String 6
typedef jobject (*func_regexodus_between_MatchResult_group_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_regexodus_between_MatchResult_group_int_R_java_lang_String 7
typedef jobject (*func_regexodus_between_MatchResult_group_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define INDEX_regexodus_between_MatchResult_group_java_lang_String_R_java_lang_String 8
typedef jobject (*func_regexodus_between_MatchResult_group_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define INDEX_regexodus_between_MatchResult_groupCount_R_int 9
typedef jint (*func_regexodus_between_MatchResult_groupCount_R_int)(jcontext ctx, jobject self);

void mark_regexodus_between_MatchResult(jobject object, jint mark, jint depth);
void clinit_regexodus_between_MatchResult(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
