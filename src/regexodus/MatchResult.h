#ifndef HEADER_regexodus_MatchResult
#define HEADER_regexodus_MatchResult

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "regexodus/between/MatchResult.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_MatchResult {
	java_lang_Object parent;
} regexodus_MatchResult;

extern Class class_regexodus_MatchResult;

extern jint SF_regexodus_MatchResult_MATCH;
extern jint SF_regexodus_MatchResult_PREFIX;
extern jint SF_regexodus_MatchResult_SUFFIX;
extern jint SF_regexodus_MatchResult_TARGET;

#define INDEX_regexodus_MatchResult_pattern_R_regexodus_Pattern 0
typedef jobject (*func_regexodus_MatchResult_pattern_R_regexodus_Pattern)(jcontext ctx, jobject self);
#define INDEX_regexodus_MatchResult_groupCount_R_int 1
typedef jint (*func_regexodus_MatchResult_groupCount_R_int)(jcontext ctx, jobject self);
#define INDEX_regexodus_MatchResult_isCaptured_R_boolean 2
typedef jbool (*func_regexodus_MatchResult_isCaptured_R_boolean)(jcontext ctx, jobject self);
#define INDEX_regexodus_MatchResult_isCaptured_int_R_boolean 3
typedef jbool (*func_regexodus_MatchResult_isCaptured_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define INDEX_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean 4
typedef jbool (*func_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_regexodus_MatchResult_group_R_java_lang_String 5
typedef jobject (*func_regexodus_MatchResult_group_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_regexodus_MatchResult_group_int_R_java_lang_String 6
typedef jobject (*func_regexodus_MatchResult_group_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define INDEX_regexodus_MatchResult_group_java_lang_String_R_java_lang_String 7
typedef jobject (*func_regexodus_MatchResult_group_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define INDEX_regexodus_MatchResult_getGroup_int_java_lang_StringBuilder_int_R_boolean 8
typedef jbool (*func_regexodus_MatchResult_getGroup_int_java_lang_StringBuilder_int_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
#define INDEX_regexodus_MatchResult_getGroup_int_regexodus_TextBuffer_int_R_boolean 9
typedef jbool (*func_regexodus_MatchResult_getGroup_int_regexodus_TextBuffer_int_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
#define INDEX_regexodus_MatchResult_getGroup_int_java_lang_StringBuilder_R_boolean 10
typedef jbool (*func_regexodus_MatchResult_getGroup_int_java_lang_StringBuilder_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define INDEX_regexodus_MatchResult_getGroup_int_regexodus_TextBuffer_R_boolean 11
typedef jbool (*func_regexodus_MatchResult_getGroup_int_regexodus_TextBuffer_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define INDEX_regexodus_MatchResult_getGroup_java_lang_String_java_lang_StringBuilder_int_R_boolean 12
typedef jbool (*func_regexodus_MatchResult_getGroup_java_lang_String_java_lang_StringBuilder_int_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define INDEX_regexodus_MatchResult_getGroup_java_lang_String_regexodus_TextBuffer_int_R_boolean 13
typedef jbool (*func_regexodus_MatchResult_getGroup_java_lang_String_regexodus_TextBuffer_int_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define INDEX_regexodus_MatchResult_getGroup_java_lang_String_java_lang_StringBuilder_R_boolean 14
typedef jbool (*func_regexodus_MatchResult_getGroup_java_lang_String_java_lang_StringBuilder_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_regexodus_MatchResult_getGroup_java_lang_String_regexodus_TextBuffer_R_boolean 15
typedef jbool (*func_regexodus_MatchResult_getGroup_java_lang_String_regexodus_TextBuffer_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_regexodus_MatchResult_prefix_R_java_lang_String 16
typedef jobject (*func_regexodus_MatchResult_prefix_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_regexodus_MatchResult_suffix_R_java_lang_String 17
typedef jobject (*func_regexodus_MatchResult_suffix_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_regexodus_MatchResult_target_R_java_lang_String 18
typedef jobject (*func_regexodus_MatchResult_target_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_regexodus_MatchResult_targetStart_R_int 19
typedef jint (*func_regexodus_MatchResult_targetStart_R_int)(jcontext ctx, jobject self);
#define INDEX_regexodus_MatchResult_targetEnd_R_int 20
typedef jint (*func_regexodus_MatchResult_targetEnd_R_int)(jcontext ctx, jobject self);
#define INDEX_regexodus_MatchResult_targetChars_R_Array1_char 21
typedef jobject (*func_regexodus_MatchResult_targetChars_R_Array1_char)(jcontext ctx, jobject self);
#define INDEX_regexodus_MatchResult_start_R_int 22
typedef jint (*func_regexodus_MatchResult_start_R_int)(jcontext ctx, jobject self);
#define INDEX_regexodus_MatchResult_end_R_int 23
typedef jint (*func_regexodus_MatchResult_end_R_int)(jcontext ctx, jobject self);
#define INDEX_regexodus_MatchResult_length_R_int 24
typedef jint (*func_regexodus_MatchResult_length_R_int)(jcontext ctx, jobject self);
#define INDEX_regexodus_MatchResult_start_int_R_int 25
typedef jint (*func_regexodus_MatchResult_start_int_R_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_regexodus_MatchResult_end_int_R_int 26
typedef jint (*func_regexodus_MatchResult_end_int_R_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_regexodus_MatchResult_length_int_R_int 27
typedef jint (*func_regexodus_MatchResult_length_int_R_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_regexodus_MatchResult_charAt_int_R_char 28
typedef jchar (*func_regexodus_MatchResult_charAt_int_R_char)(jcontext ctx, jobject self, jint param0);
#define INDEX_regexodus_MatchResult_charAt_int_int_R_char 29
typedef jchar (*func_regexodus_MatchResult_charAt_int_int_R_char)(jcontext ctx, jobject self, jint param0, jint param1);

void mark_regexodus_MatchResult(jobject object, jint mark, jint depth);
void clinit_regexodus_MatchResult(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
