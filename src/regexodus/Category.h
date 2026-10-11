#ifndef HEADER_regexodus_Category
#define HEADER_regexodus_Category

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_Category {
	java_lang_Object parent;
	jint F_length;
	jint F_n;
	jref F_cal;
	jref F_blocks;
} regexodus_Category;

extern Class class_regexodus_Category;

extern jobject SF_regexodus_Category_C;
extern jobject SF_regexodus_Category_Co;
extern jobject SF_regexodus_Category_Cn;
extern jobject SF_regexodus_Category_Cc;
extern jobject SF_regexodus_Category_Cf;
extern jobject SF_regexodus_Category_Cs;
extern jobject SF_regexodus_Category_L;
extern jobject SF_regexodus_Category_Lu;
extern jobject SF_regexodus_Category_Ll;
extern jobject SF_regexodus_Category_Lt;
extern jobject SF_regexodus_Category_Lm;
extern jobject SF_regexodus_Category_Lo;
extern jobject SF_regexodus_Category_Lc;
extern jobject SF_regexodus_Category_M;
extern jobject SF_regexodus_Category_Mn;
extern jobject SF_regexodus_Category_Me;
extern jobject SF_regexodus_Category_Mc;
extern jobject SF_regexodus_Category_N;
extern jobject SF_regexodus_Category_Nd;
extern jobject SF_regexodus_Category_Nl;
extern jobject SF_regexodus_Category_No;
extern jobject SF_regexodus_Category_Z;
extern jobject SF_regexodus_Category_Zs;
extern jobject SF_regexodus_Category_Zl;
extern jobject SF_regexodus_Category_Zp;
extern jobject SF_regexodus_Category_P;
extern jobject SF_regexodus_Category_Pd;
extern jobject SF_regexodus_Category_Ps;
extern jobject SF_regexodus_Category_Pi;
extern jobject SF_regexodus_Category_Pe;
extern jobject SF_regexodus_Category_Pf;
extern jobject SF_regexodus_Category_Pc;
extern jobject SF_regexodus_Category_Po;
extern jobject SF_regexodus_Category_S;
extern jobject SF_regexodus_Category_Sm;
extern jobject SF_regexodus_Category_Sc;
extern jobject SF_regexodus_Category_Sk;
extern jobject SF_regexodus_Category_So;
extern jobject SF_regexodus_Category_Word;
extern jobject SF_regexodus_Category_Identifier;
extern jobject SF_regexodus_Category_IdentifierStart;
extern jobject SF_regexodus_Category_IdentifierPart;
extern jobject SF_regexodus_Category_Horizontal;
extern jobject SF_regexodus_Category_Vertical;
extern jobject SF_regexodus_Category_Space;
extern jobject SF_regexodus_Category_upper;
extern jobject SF_regexodus_Category_lower;
extern jobject SF_regexodus_Category_upperToLower;
extern jobject SF_regexodus_Category_lowerToUpper;
extern jobject SF_regexodus_Category_openers;
extern jobject SF_regexodus_Category_closers;
extern jobject SF_regexodus_Category_openBrackets;
extern jobject SF_regexodus_Category_closingBrackets;
extern jobject SF_regexodus_Category_categories;
extern jobject SF_regexodus_Category_superCategories;

#define VTABLE_regexodus_Category_hashCode_R_int 0
typedef jint (*func_regexodus_Category_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Category_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_Category_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Category_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_Category_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Category_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_Category_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Category_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_Category_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Category_finalize 5
typedef void (*func_regexodus_Category_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Category_notify 6
typedef void (*func_regexodus_Category_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Category_notifyAll 7
typedef void (*func_regexodus_Category_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Category_wait 8
typedef void (*func_regexodus_Category_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Category_wait_long 9
typedef void (*func_regexodus_Category_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_Category_wait_long_int 10
typedef void (*func_regexodus_Category_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_Category_contents_R_Array1_char 11
typedef jobject (*func_regexodus_Category_contents_R_Array1_char)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Category_makeBlocks_R_Array1_regexodus_Block 12
typedef jobject (*func_regexodus_Category_makeBlocks_R_Array1_regexodus_Block)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Category_contains_char_R_boolean 13
typedef jbool (*func_regexodus_Category_contains_char_R_boolean)(jcontext ctx, jobject self, jchar param0);

void mark_regexodus_Category(jobject object, jint mark, jint depth);
void clinit_regexodus_Category(jcontext ctx);
void init_regexodus_Category(jcontext ctx, jobject self);
void init_regexodus_Category_Array1_int_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_regexodus_Category_contents_R_Array1_char(jcontext ctx, jobject self);
jobject M_regexodus_Category_makeBlocks_R_Array1_regexodus_Block(jcontext ctx, jobject self);
jbool M_regexodus_Category_contains_char_R_boolean(jcontext ctx, jobject self, jchar param0);
jobject M_regexodus_Category_toString_R_java_lang_String(jcontext ctx, jobject self);
jbool M_regexodus_Category_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_regexodus_Category_hashCode_R_int(jcontext ctx, jobject self);
jchar SM_regexodus_Category_caseFold_char_R_char(jcontext ctx, jchar param0);
jchar SM_regexodus_Category_caseDown_char_R_char(jcontext ctx, jchar param0);
jchar SM_regexodus_Category_caseUp_char_R_char(jcontext ctx, jchar param0);
jchar SM_regexodus_Category_matchBracket_char_R_char(jcontext ctx, jchar param0);
jobject SM_regexodus_Category_reverseWithBrackets_java_lang_CharSequence_R_java_lang_String(jcontext ctx, jobject param0);
jbool SM_regexodus_Category_reverseEqual_java_lang_CharSequence_java_lang_CharSequence_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_regexodus_Category_reverseBracketEqual_java_lang_CharSequence_java_lang_CharSequence_R_boolean(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
