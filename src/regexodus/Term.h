#ifndef HEADER_regexodus_Term
#define HEADER_regexodus_Term

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "regexodus/REFlags.h"
#include "java/io/Serializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_Term {
	java_lang_Object parent;
	jref F_next;
	jref F_failNext;
	jint F_type;
	jbool F_inverse;
	jchar F_c;
	jint F_distance;
	jbool F_eat;
	jref F_bitset;
	jref F_bitset2;
	jref F_categoryBitset;
	jbool F_mode_insensitive;
	jbool F_mode_reverse;
	jbool F_mode_bracket;
	jbool F_mode_upper;
	jint F_weight;
	jint F_memreg;
	jint F_minCount;
	jint F_maxCount;
	jref F_target;
	jint F_cntreg;
	jint F_lookaheadId;
	jref F_prev;
	jref F_in;
	jref F_out;
	jref F_out1;
	jref F_first;
	jref F_current;
	jref F_branchOut;
	jint F_instanceNum;
} regexodus_Term;

extern Class class_regexodus_Term;

extern jlong SF_regexodus_Term_serialVersionUID;
extern jint SF_regexodus_Term_CHAR;
extern jint SF_regexodus_Term_BITSET;
extern jint SF_regexodus_Term_BITSET2;
extern jint SF_regexodus_Term_ANY_CHAR;
extern jint SF_regexodus_Term_ANY_CHAR_NE;
extern jint SF_regexodus_Term_REG;
extern jint SF_regexodus_Term_REG_I;
extern jint SF_regexodus_Term_FIND;
extern jint SF_regexodus_Term_FINDREG;
extern jint SF_regexodus_Term_SUCCESS;
extern jint SF_regexodus_Term_BOUNDARY;
extern jint SF_regexodus_Term_DIRECTION;
extern jint SF_regexodus_Term_UBOUNDARY;
extern jint SF_regexodus_Term_UDIRECTION;
extern jint SF_regexodus_Term_GROUP_IN;
extern jint SF_regexodus_Term_GROUP_OUT;
extern jint SF_regexodus_Term_VOID;
extern jint SF_regexodus_Term_START;
extern jint SF_regexodus_Term_END;
extern jint SF_regexodus_Term_END_EOL;
extern jint SF_regexodus_Term_LINE_START;
extern jint SF_regexodus_Term_LINE_END;
extern jint SF_regexodus_Term_LAST_MATCH_END;
extern jint SF_regexodus_Term_CNT_SET_0;
extern jint SF_regexodus_Term_CNT_INC;
extern jint SF_regexodus_Term_CNT_GT_EQ;
extern jint SF_regexodus_Term_READ_CNT_LT;
extern jint SF_regexodus_Term_CRSTORE_CRINC;
extern jint SF_regexodus_Term_CR_SET_0;
extern jint SF_regexodus_Term_CR_LT;
extern jint SF_regexodus_Term_CR_GT_EQ;
extern jint SF_regexodus_Term_LITERAL_START;
extern jint SF_regexodus_Term_LITERAL_END;
extern jint SF_regexodus_Term_BRANCH;
extern jint SF_regexodus_Term_BRANCH_STORE_CNT;
extern jint SF_regexodus_Term_BRANCH_STORE_CNT_AUX1;
extern jint SF_regexodus_Term_PLOOKAHEAD_IN;
extern jint SF_regexodus_Term_PLOOKAHEAD_OUT;
extern jint SF_regexodus_Term_NLOOKAHEAD_IN;
extern jint SF_regexodus_Term_NLOOKAHEAD_OUT;
extern jint SF_regexodus_Term_PLOOKBEHIND_IN;
extern jint SF_regexodus_Term_PLOOKBEHIND_OUT;
extern jint SF_regexodus_Term_NLOOKBEHIND_IN;
extern jint SF_regexodus_Term_NLOOKBEHIND_OUT;
extern jint SF_regexodus_Term_INDEPENDENT_IN;
extern jint SF_regexodus_Term_INDEPENDENT_OUT;
extern jint SF_regexodus_Term_REPEAT_0_INF;
extern jint SF_regexodus_Term_REPEAT_MIN_INF;
extern jint SF_regexodus_Term_REPEAT_MIN_MAX;
extern jint SF_regexodus_Term_REPEAT_REG_MIN_INF;
extern jint SF_regexodus_Term_REPEAT_REG_MIN_MAX;
extern jint SF_regexodus_Term_BACKTRACK_0;
extern jint SF_regexodus_Term_BACKTRACK_MIN;
extern jint SF_regexodus_Term_BACKTRACK_FIND_MIN;
extern jint SF_regexodus_Term_BACKTRACK_FINDREG_MIN;
extern jint SF_regexodus_Term_BACKTRACK_REG_MIN;
extern jint SF_regexodus_Term_MEMREG_CONDITION;
extern jint SF_regexodus_Term_LOOKAHEAD_CONDITION_IN;
extern jint SF_regexodus_Term_LOOKAHEAD_CONDITION_OUT;
extern jint SF_regexodus_Term_LOOKBEHIND_CONDITION_IN;
extern jint SF_regexodus_Term_LOOKBEHIND_CONDITION_OUT;
extern jint SF_regexodus_Term_FIRST_TRANSPARENT;
extern jint SF_regexodus_Term_LAST_TRANSPARENT;
extern jint SF_regexodus_Term_VARS_LENGTH;
extern jint SF_regexodus_Term_MEMREG_COUNT;
extern jint SF_regexodus_Term_CNTREG_COUNT;
extern jint SF_regexodus_Term_DEPTH;
extern jint SF_regexodus_Term_LOOKAHEAD_COUNT;
extern jint SF_regexodus_Term_LIMITS_LENGTH;
extern jint SF_regexodus_Term_LIMITS_PARSE_RESULT_INDEX;
extern jint SF_regexodus_Term_LIMITS_OK;
extern jint SF_regexodus_Term_LIMITS_FAILURE;
extern jint SF_regexodus_Term_LITERAL_FLAG;
extern jint SF_regexodus_Term_instances;

#define VTABLE_regexodus_Term_hashCode_R_int 0
typedef jint (*func_regexodus_Term_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Term_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_Term_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Term_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_Term_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Term_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_Term_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Term_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_Term_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Term_finalize 5
typedef void (*func_regexodus_Term_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Term_notify 6
typedef void (*func_regexodus_Term_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Term_notifyAll 7
typedef void (*func_regexodus_Term_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Term_wait 8
typedef void (*func_regexodus_Term_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Term_wait_long 9
typedef void (*func_regexodus_Term_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_Term_wait_long_int 10
typedef void (*func_regexodus_Term_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_Term_append_int_int_Array1_char_Array1_int_Array1_int_java_util_ArrayList_java_util_HashMap 11
typedef void (*func_regexodus_Term_append_int_int_Array1_char_Array1_int_Array1_int_java_util_ArrayList_java_util_HashMap)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6);
#define VTABLE_regexodus_Term_append_regexodus_Term_R_regexodus_Term 12
typedef jobject (*func_regexodus_Term_append_regexodus_Term_R_regexodus_Term)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Term_replaceCurrent_regexodus_Term_R_regexodus_Term 13
typedef jobject (*func_regexodus_Term_replaceCurrent_regexodus_Term_R_regexodus_Term)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Term_newBranch 14
typedef void (*func_regexodus_Term_newBranch)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Term_close 15
typedef void (*func_regexodus_Term_close)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Term_startNewBranch 16
typedef void (*func_regexodus_Term_startNewBranch)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Term_parseTerm_Array1_char_int_int_regexodus_Term_int_R_int 17
typedef jint (*func_regexodus_Term_parseTerm_Array1_char_int_int_regexodus_Term_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jint param4);
#define VTABLE_regexodus_Term_toStringAll_R_java_lang_String 18
typedef jobject (*func_regexodus_Term_toStringAll_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Term_toStringAll_java_util_ArrayList_R_java_lang_String 19
typedef jobject (*func_regexodus_Term_toStringAll_java_util_ArrayList_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_regexodus_Term(jobject object, jint mark, jint depth);
void clinit_regexodus_Term(jcontext ctx);
void init_regexodus_Term(jcontext ctx, jobject self);
void init_regexodus_Term_int(jcontext ctx, jobject self, jint param0);
void SM_regexodus_Term_makeTree_java_lang_String_Array1_int_regexodus_Pattern(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_regexodus_Term_makeTree_Array1_char_int_int_Array1_int_regexodus_Pattern(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jobject param4);
jobject SM_regexodus_Term_makeTree_regexodus_Pretokenizer_Array1_char_Array1_int_Array1_int_regexodus_Term_java_util_ArrayList_java_util_HashMap_R_regexodus_Term(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6);
jint SM_regexodus_Term_makeNumber_int_int_Array1_char_R_int(jcontext ctx, jint param0, jint param1, jobject param2);
void M_regexodus_Term_append_int_int_Array1_char_Array1_int_Array1_int_java_util_ArrayList_java_util_HashMap(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6);
jint SM_regexodus_Term_parseGroupId_Array1_char_int_int_regexodus_Term_java_util_HashMap_char_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jobject param4, jchar param5);
jobject M_regexodus_Term_append_regexodus_Term_R_regexodus_Term(jcontext ctx, jobject self, jobject param0);
jobject M_regexodus_Term_replaceCurrent_regexodus_Term_R_regexodus_Term(jcontext ctx, jobject self, jobject param0);
void M_regexodus_Term_newBranch(jcontext ctx, jobject self);
void M_regexodus_Term_close(jcontext ctx, jobject self);
void SM_regexodus_Term_link_regexodus_Term_regexodus_Term(jcontext ctx, jobject param0, jobject param1);
void SM_regexodus_Term_linkd_regexodus_Term_regexodus_Term(jcontext ctx, jobject param0, jobject param1);
void M_regexodus_Term_startNewBranch(jcontext ctx, jobject self);
jobject SM_regexodus_Term_makeGreedyStar_Array1_int_regexodus_Term_java_util_ArrayList_R_regexodus_Term(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_regexodus_Term_makeLazyStar_Array1_int_regexodus_Term_R_regexodus_Term(jcontext ctx, jobject param0, jobject param1);
jobject SM_regexodus_Term_makeGreedyPlus_Array1_int_regexodus_Term_java_util_ArrayList_R_regexodus_Term(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_regexodus_Term_makeLazyPlus_Array1_int_regexodus_Term_R_regexodus_Term(jcontext ctx, jobject param0, jobject param1);
jobject SM_regexodus_Term_makeGreedyQMark_Array1_int_regexodus_Term_R_regexodus_Term(jcontext ctx, jobject param0, jobject param1);
jobject SM_regexodus_Term_makeLazyQMark_Array1_int_regexodus_Term_R_regexodus_Term(jcontext ctx, jobject param0, jobject param1);
jobject SM_regexodus_Term_makeGreedyLimits_Array1_int_regexodus_Term_Array1_int_java_util_ArrayList_R_regexodus_Term(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_regexodus_Term_makeLazyLimits_Array1_int_regexodus_Term_Array1_int_R_regexodus_Term(jcontext ctx, jobject param0, jobject param1, jobject param2);
jint M_regexodus_Term_parseTerm_Array1_char_int_int_regexodus_Term_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jint param4);
jint SM_regexodus_Term_parseLimits_int_int_Array1_char_Array1_int_R_int(jcontext ctx, jint param0, jint param1, jobject param2, jobject param3);
jobject SM_regexodus_Term_termLookup_int_R_java_lang_String(jcontext ctx, jint param0);
jobject M_regexodus_Term_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_regexodus_Term_toStringAll_R_java_lang_String(jcontext ctx, jobject self);
jobject M_regexodus_Term_toStringAll_java_util_ArrayList_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbool M_regexodus_Term_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_regexodus_Term_hashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
