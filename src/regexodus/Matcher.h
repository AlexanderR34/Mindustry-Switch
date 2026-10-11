#ifndef HEADER_regexodus_Matcher
#define HEADER_regexodus_Matcher

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "regexodus/MatchResult.h"
#include "java/io/Serializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_Matcher {
	java_lang_Object parent;
	jref F_re;
	jref F_counters;
	jref F_memregs;
	jref F_lookaheads;
	jint F_counterCount;
	jint F_memregCount;
	jint F_lookaheadCount;
	jref F_data;
	jint F_offset;
	jint F_end;
	jint F_wOffset;
	jint F_wEnd;
	jbool F_shared;
	jref F_top;
	jref F_first;
	jref F_defaultEntry;
	jbool F_called;
	jint F_minQueueLength;
	jref F_cache;
	jint F_cacheOffset;
	jint F_cacheLength;
	jref F_prefixBounds;
	jref F_suffixBounds;
	jref F_targetBounds;
} regexodus_Matcher;

extern Class class_regexodus_Matcher;

extern jlong SF_regexodus_Matcher_serialVersionUID;
extern jint SF_regexodus_Matcher_ANCHOR_START;
extern jint SF_regexodus_Matcher_ANCHOR_LASTMATCH;
extern jint SF_regexodus_Matcher_ANCHOR_END;
extern jint SF_regexodus_Matcher_ACCEPT_INCOMPLETE;
extern jobject SF_regexodus_Matcher_startAnchor;
extern jobject SF_regexodus_Matcher_lastMatchAnchor;

#define VTABLE_regexodus_Matcher_hashCode_R_int 0
typedef jint (*func_regexodus_Matcher_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_Matcher_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Matcher_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_Matcher_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_Matcher_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_Matcher_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_finalize 5
typedef void (*func_regexodus_Matcher_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_notify 6
typedef void (*func_regexodus_Matcher_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_notifyAll 7
typedef void (*func_regexodus_Matcher_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_wait 8
typedef void (*func_regexodus_Matcher_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_wait_long 9
typedef void (*func_regexodus_Matcher_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_Matcher_wait_long_int 10
typedef void (*func_regexodus_Matcher_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_Matcher_start_R_int 11
typedef jint (*func_regexodus_Matcher_start_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_start_int_R_int 12
typedef jint (*func_regexodus_Matcher_start_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_Matcher_start_java_lang_String_R_int 13
typedef jint (*func_regexodus_Matcher_start_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Matcher_end_R_int 14
typedef jint (*func_regexodus_Matcher_end_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_end_int_R_int 15
typedef jint (*func_regexodus_Matcher_end_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_Matcher_end_java_lang_String_R_int 16
typedef jint (*func_regexodus_Matcher_end_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Matcher_group_R_java_lang_String 17
typedef jobject (*func_regexodus_Matcher_group_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_group_int_R_java_lang_String 18
typedef jobject (*func_regexodus_Matcher_group_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_Matcher_group_java_lang_String_R_java_lang_String 19
typedef jobject (*func_regexodus_Matcher_group_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Matcher_groupCount_R_int 20
typedef jint (*func_regexodus_Matcher_groupCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_pattern_R_regexodus_Pattern 21
typedef jobject (*func_regexodus_Matcher_pattern_R_regexodus_Pattern)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_isCaptured_R_boolean 22
typedef jbool (*func_regexodus_Matcher_isCaptured_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_isCaptured_int_R_boolean 23
typedef jbool (*func_regexodus_Matcher_isCaptured_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_Matcher_isCaptured_java_lang_String_R_boolean 24
typedef jbool (*func_regexodus_Matcher_isCaptured_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Matcher_getGroup_int_java_lang_StringBuilder_int_R_boolean 25
typedef jbool (*func_regexodus_Matcher_getGroup_int_java_lang_StringBuilder_int_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
#define VTABLE_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_int_R_boolean 26
typedef jbool (*func_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_int_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
#define VTABLE_regexodus_Matcher_getGroup_int_java_lang_StringBuilder_R_boolean 27
typedef jbool (*func_regexodus_Matcher_getGroup_int_java_lang_StringBuilder_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_R_boolean 28
typedef jbool (*func_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_regexodus_Matcher_getGroup_java_lang_String_java_lang_StringBuilder_int_R_boolean 29
typedef jbool (*func_regexodus_Matcher_getGroup_java_lang_String_java_lang_StringBuilder_int_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_regexodus_Matcher_getGroup_java_lang_String_regexodus_TextBuffer_int_R_boolean 30
typedef jbool (*func_regexodus_Matcher_getGroup_java_lang_String_regexodus_TextBuffer_int_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_regexodus_Matcher_getGroup_java_lang_String_java_lang_StringBuilder_R_boolean 31
typedef jbool (*func_regexodus_Matcher_getGroup_java_lang_String_java_lang_StringBuilder_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_regexodus_Matcher_getGroup_java_lang_String_regexodus_TextBuffer_R_boolean 32
typedef jbool (*func_regexodus_Matcher_getGroup_java_lang_String_regexodus_TextBuffer_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_regexodus_Matcher_prefix_R_java_lang_String 33
typedef jobject (*func_regexodus_Matcher_prefix_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_suffix_R_java_lang_String 34
typedef jobject (*func_regexodus_Matcher_suffix_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_target_R_java_lang_String 35
typedef jobject (*func_regexodus_Matcher_target_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_targetStart_R_int 36
typedef jint (*func_regexodus_Matcher_targetStart_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_targetEnd_R_int 37
typedef jint (*func_regexodus_Matcher_targetEnd_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_targetChars_R_Array1_char 38
typedef jobject (*func_regexodus_Matcher_targetChars_R_Array1_char)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_length_R_int 39
typedef jint (*func_regexodus_Matcher_length_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_length_int_R_int 40
typedef jint (*func_regexodus_Matcher_length_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_Matcher_charAt_int_R_char 41
typedef jchar (*func_regexodus_Matcher_charAt_int_R_char)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_Matcher_charAt_int_int_R_char 42
typedef jchar (*func_regexodus_Matcher_charAt_int_int_R_char)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_regexodus_Matcher_copy_R_regexodus_Matcher 43
typedef jobject (*func_regexodus_Matcher_copy_R_regexodus_Matcher)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_setPattern_regexodus_Pattern 44
typedef void (*func_regexodus_Matcher_setPattern_regexodus_Pattern)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Matcher_setTarget_regexodus_Matcher_int 45
typedef void (*func_regexodus_Matcher_setTarget_regexodus_Matcher_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_regexodus_Matcher_setTarget_java_lang_CharSequence 46
typedef void (*func_regexodus_Matcher_setTarget_java_lang_CharSequence)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Matcher_setTarget_java_lang_CharSequence_int_int 47
typedef void (*func_regexodus_Matcher_setTarget_java_lang_CharSequence_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_regexodus_Matcher_setTarget_Array1_char_int_int 48
typedef void (*func_regexodus_Matcher_setTarget_Array1_char_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_regexodus_Matcher_setTarget_Array1_char_int_int_boolean 49
typedef void (*func_regexodus_Matcher_setTarget_Array1_char_int_int_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3);
#define VTABLE_regexodus_Matcher_setTarget_java_io_Reader_int 50
typedef void (*func_regexodus_Matcher_setTarget_java_io_Reader_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_regexodus_Matcher_setAll_java_io_Reader 51
typedef void (*func_regexodus_Matcher_setAll_java_io_Reader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Matcher_getString_int_int_R_java_lang_String 52
typedef jobject (*func_regexodus_Matcher_getString_int_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_regexodus_Matcher_matchesPrefix_R_boolean 53
typedef jbool (*func_regexodus_Matcher_matchesPrefix_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_isStart_R_boolean 54
typedef jbool (*func_regexodus_Matcher_isStart_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_matches_R_boolean 55
typedef jbool (*func_regexodus_Matcher_matches_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_matches_java_lang_String_R_boolean 56
typedef jbool (*func_regexodus_Matcher_matches_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Matcher_setPosition_int 57
typedef void (*func_regexodus_Matcher_setPosition_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_Matcher_find_R_boolean 58
typedef jbool (*func_regexodus_Matcher_find_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_find_int_R_boolean 59
typedef jbool (*func_regexodus_Matcher_find_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_Matcher_findAll_R_regexodus_MatchIterator 60
typedef jobject (*func_regexodus_Matcher_findAll_R_regexodus_MatchIterator)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_findAll_int_R_regexodus_MatchIterator 61
typedef jobject (*func_regexodus_Matcher_findAll_int_R_regexodus_MatchIterator)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_Matcher_foundStrings_R_java_util_ArrayList 62
typedef jobject (*func_regexodus_Matcher_foundStrings_R_java_util_ArrayList)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_proceed_R_boolean 63
typedef jbool (*func_regexodus_Matcher_proceed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_proceed_int_R_boolean 64
typedef jbool (*func_regexodus_Matcher_proceed_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_Matcher_skip 65
typedef void (*func_regexodus_Matcher_skip)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_init 66
typedef void (*func_regexodus_Matcher_init)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_flush 67
typedef void (*func_regexodus_Matcher_flush)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_rflush 68
typedef void (*func_regexodus_Matcher_rflush)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_dataStart_R_int 69
typedef jint (*func_regexodus_Matcher_dataStart_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_dataEnd_R_int 70
typedef jint (*func_regexodus_Matcher_dataEnd_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_groups_R_Array1_java_lang_String 71
typedef jobject (*func_regexodus_Matcher_groups_R_Array1_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_groupv_R_java_util_ArrayList 72
typedef jobject (*func_regexodus_Matcher_groupv_R_java_util_ArrayList)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_bounds_int_R_regexodus_MemReg 73
typedef jobject (*func_regexodus_Matcher_bounds_int_R_regexodus_MemReg)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_Matcher_search_int_R_boolean 74
typedef jbool (*func_regexodus_Matcher_search_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_Matcher_toString_d_R_java_lang_String 75
typedef jobject (*func_regexodus_Matcher_toString_d_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher_replaceFirst_java_lang_String_R_java_lang_String 76
typedef jobject (*func_regexodus_Matcher_replaceFirst_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Matcher_replaceAmount_java_lang_String_int_R_java_lang_String 77
typedef jobject (*func_regexodus_Matcher_replaceAmount_java_lang_String_int_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_regexodus_Matcher_replaceAll_java_lang_String_R_java_lang_String 78
typedef jobject (*func_regexodus_Matcher_replaceAll_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Matcher_replaceFirst_regexodus_Substitution_R_java_lang_String 79
typedef jobject (*func_regexodus_Matcher_replaceFirst_regexodus_Substitution_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Matcher_replaceAmount_regexodus_Substitution_int_R_java_lang_String 80
typedef jobject (*func_regexodus_Matcher_replaceAmount_regexodus_Substitution_int_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_regexodus_Matcher_replaceAll_regexodus_Substitution_R_java_lang_String 81
typedef jobject (*func_regexodus_Matcher_replaceAll_regexodus_Substitution_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_regexodus_Matcher(jobject object, jint mark, jint depth);
void clinit_regexodus_Matcher(jcontext ctx);
jobject M_regexodus_Matcher_copy_R_regexodus_Matcher(jcontext ctx, jobject self);
void init_regexodus_Matcher(jcontext ctx, jobject self);
void init_regexodus_Matcher_regexodus_Pattern(jcontext ctx, jobject self, jobject param0);
void init_regexodus_Matcher_regexodus_Pattern_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_regexodus_Matcher_setPattern_regexodus_Pattern(jcontext ctx, jobject self, jobject param0);
void M_regexodus_Matcher_setTarget_regexodus_Matcher_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_regexodus_Matcher_setTarget_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0);
void M_regexodus_Matcher_setTarget_java_lang_CharSequence_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_regexodus_Matcher_setTarget_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_regexodus_Matcher_setTarget_Array1_char_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3);
void M_regexodus_Matcher_setTarget_java_io_Reader_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_regexodus_Matcher_setAll_java_io_Reader(jcontext ctx, jobject self, jobject param0);
jobject M_regexodus_Matcher_getString_int_int_R_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_regexodus_Matcher_matchesPrefix_R_boolean(jcontext ctx, jobject self);
jbool M_regexodus_Matcher_isStart_R_boolean(jcontext ctx, jobject self);
jbool M_regexodus_Matcher_matches_R_boolean(jcontext ctx, jobject self);
jbool M_regexodus_Matcher_matches_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_regexodus_Matcher_setPosition_int(jcontext ctx, jobject self, jint param0);
jbool M_regexodus_Matcher_find_R_boolean(jcontext ctx, jobject self);
jbool M_regexodus_Matcher_find_int_R_boolean(jcontext ctx, jobject self, jint param0);
jobject M_regexodus_Matcher_findAll_R_regexodus_MatchIterator(jcontext ctx, jobject self);
jobject M_regexodus_Matcher_findAll_int_R_regexodus_MatchIterator(jcontext ctx, jobject self, jint param0);
jobject M_regexodus_Matcher_foundStrings_R_java_util_ArrayList(jcontext ctx, jobject self);
jbool M_regexodus_Matcher_proceed_R_boolean(jcontext ctx, jobject self);
jbool M_regexodus_Matcher_proceed_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_regexodus_Matcher_skip(jcontext ctx, jobject self);
void M_regexodus_Matcher_init(jcontext ctx, jobject self);
void M_regexodus_Matcher_flush(jcontext ctx, jobject self);
void M_regexodus_Matcher_rflush(jcontext ctx, jobject self);
jobject M_regexodus_Matcher_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_regexodus_Matcher_pattern_R_regexodus_Pattern(jcontext ctx, jobject self);
jobject M_regexodus_Matcher_target_R_java_lang_String(jcontext ctx, jobject self);
jobject M_regexodus_Matcher_targetChars_R_Array1_char(jcontext ctx, jobject self);
jint M_regexodus_Matcher_targetStart_R_int(jcontext ctx, jobject self);
jint M_regexodus_Matcher_targetEnd_R_int(jcontext ctx, jobject self);
jint M_regexodus_Matcher_dataStart_R_int(jcontext ctx, jobject self);
jint M_regexodus_Matcher_dataEnd_R_int(jcontext ctx, jobject self);
jchar M_regexodus_Matcher_charAt_int_R_char(jcontext ctx, jobject self, jint param0);
jchar M_regexodus_Matcher_charAt_int_int_R_char(jcontext ctx, jobject self, jint param0, jint param1);
jint M_regexodus_Matcher_length_R_int(jcontext ctx, jobject self);
jint M_regexodus_Matcher_start_R_int(jcontext ctx, jobject self);
jint M_regexodus_Matcher_end_R_int(jcontext ctx, jobject self);
jobject M_regexodus_Matcher_prefix_R_java_lang_String(jcontext ctx, jobject self);
jobject M_regexodus_Matcher_suffix_R_java_lang_String(jcontext ctx, jobject self);
jint M_regexodus_Matcher_groupCount_R_int(jcontext ctx, jobject self);
jobject M_regexodus_Matcher_group_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
jobject M_regexodus_Matcher_group_R_java_lang_String(jcontext ctx, jobject self);
jobject M_regexodus_Matcher_group_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbool M_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_int_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
jbool M_regexodus_Matcher_getGroup_java_lang_String_regexodus_TextBuffer_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_regexodus_Matcher_getGroup_java_lang_String_regexodus_TextBuffer_int_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
jbool M_regexodus_Matcher_getGroup_int_java_lang_StringBuilder_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_regexodus_Matcher_getGroup_int_java_lang_StringBuilder_int_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
jbool M_regexodus_Matcher_getGroup_java_lang_String_java_lang_StringBuilder_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_regexodus_Matcher_getGroup_java_lang_String_java_lang_StringBuilder_int_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
jobject M_regexodus_Matcher_groups_R_Array1_java_lang_String(jcontext ctx, jobject self);
jobject M_regexodus_Matcher_groupv_R_java_util_ArrayList(jcontext ctx, jobject self);
jobject M_regexodus_Matcher_bounds_int_R_regexodus_MemReg(jcontext ctx, jobject self, jint param0);
jbool M_regexodus_Matcher_isCaptured_R_boolean(jcontext ctx, jobject self);
jbool M_regexodus_Matcher_isCaptured_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_regexodus_Matcher_isCaptured_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_regexodus_Matcher_length_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_regexodus_Matcher_start_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_regexodus_Matcher_start_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jint M_regexodus_Matcher_end_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jint M_regexodus_Matcher_end_int_R_int(jcontext ctx, jobject self, jint param0);
jbool M_regexodus_Matcher_search_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool SM_regexodus_Matcher_compareRegions_Array1_char_int_int_int_int_regexodus_Term_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5);
jbool SM_regexodus_Matcher_compareRegionsForward_Array1_char_int_int_int_int_boolean_boolean_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jbool param5, jbool param6);
jbool SM_regexodus_Matcher_compareRegionsReverse_Array1_char_int_int_int_int_boolean_boolean_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jbool param5, jbool param6);
jbool SM_regexodus_Matcher_compareRegionsI_Array1_char_int_int_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4);
jint SM_regexodus_Matcher_repeat_Array1_char_int_int_regexodus_Term_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
jint SM_regexodus_Matcher_find_Array1_char_int_int_regexodus_Term_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
jint SM_regexodus_Matcher_findReg_Array1_char_int_int_int_regexodus_Term_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4, jint param5);
jint SM_regexodus_Matcher_findBack_Array1_char_int_int_regexodus_Term_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
jint SM_regexodus_Matcher_findBackReg_Array1_char_int_int_int_int_regexodus_Term_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5, jint param6);
jobject M_regexodus_Matcher_toString_d_R_java_lang_String(jcontext ctx, jobject self);
jbool M_regexodus_Matcher_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_regexodus_Matcher_hashCode_R_int(jcontext ctx, jobject self);
jobject M_regexodus_Matcher_replaceFirst_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_regexodus_Matcher_replaceAmount_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_regexodus_Matcher_replaceAll_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_regexodus_Matcher_replaceFirst_regexodus_Substitution_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_regexodus_Matcher_replaceAmount_regexodus_Substitution_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_regexodus_Matcher_replaceAll_regexodus_Substitution_R_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
