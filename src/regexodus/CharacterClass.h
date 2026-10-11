#ifndef HEADER_regexodus_CharacterClass
#define HEADER_regexodus_CharacterClass

#include "Clearwing.h"
#include "regexodus/Term.h"
#include "regexodus/UnicodeConstants.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_CharacterClass {
	regexodus_Term parent;
} regexodus_CharacterClass;

extern Class class_regexodus_CharacterClass;

extern jobject SF_regexodus_CharacterClass_DIGIT;
extern jobject SF_regexodus_CharacterClass_WORDCHAR;
extern jobject SF_regexodus_CharacterClass_SPACE;
extern jobject SF_regexodus_CharacterClass_HSPACE;
extern jobject SF_regexodus_CharacterClass_VSPACE;
extern jobject SF_regexodus_CharacterClass_UDIGIT;
extern jobject SF_regexodus_CharacterClass_UWORDCHAR;
extern jobject SF_regexodus_CharacterClass_USPACE;
extern jobject SF_regexodus_CharacterClass_UHSPACE;
extern jobject SF_regexodus_CharacterClass_UVSPACE;
extern jobject SF_regexodus_CharacterClass_NONDIGIT;
extern jobject SF_regexodus_CharacterClass_NONWORDCHAR;
extern jobject SF_regexodus_CharacterClass_NONSPACE;
extern jobject SF_regexodus_CharacterClass_NONHSPACE;
extern jobject SF_regexodus_CharacterClass_NONVSPACE;
extern jobject SF_regexodus_CharacterClass_UNONDIGIT;
extern jobject SF_regexodus_CharacterClass_UNONWORDCHAR;
extern jobject SF_regexodus_CharacterClass_UNONSPACE;
extern jobject SF_regexodus_CharacterClass_UNONHSPACE;
extern jobject SF_regexodus_CharacterClass_UNONVSPACE;
extern jbool SF_regexodus_CharacterClass_namesInitialized;
extern jobject SF_regexodus_CharacterClass_namedClasses;
extern jobject SF_regexodus_CharacterClass_unicodeBlocks;
extern jobject SF_regexodus_CharacterClass_posixClasses;
extern jobject SF_regexodus_CharacterClass_unicodeCategories;
extern jint SF_regexodus_CharacterClass_ADD;
extern jint SF_regexodus_CharacterClass_SUBTRACT;
extern jint SF_regexodus_CharacterClass_INTERSECT;
extern jobject SF_regexodus_CharacterClass_blockDataStarts;
extern jobject SF_regexodus_CharacterClass_blockDataEnds;
extern jobject SF_regexodus_CharacterClass_blockDataNames;
extern jobject SF_regexodus_CharacterClass_b0;
extern jobject SF_regexodus_CharacterClass_b2;

#define VTABLE_regexodus_CharacterClass_hashCode_R_int 0
typedef jint (*func_regexodus_CharacterClass_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_CharacterClass_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_CharacterClass_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_CharacterClass_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_CharacterClass_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_CharacterClass_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_CharacterClass_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_CharacterClass_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_CharacterClass_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_CharacterClass_finalize 5
typedef void (*func_regexodus_CharacterClass_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_CharacterClass_notify 6
typedef void (*func_regexodus_CharacterClass_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_CharacterClass_notifyAll 7
typedef void (*func_regexodus_CharacterClass_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_CharacterClass_wait 8
typedef void (*func_regexodus_CharacterClass_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_CharacterClass_wait_long 9
typedef void (*func_regexodus_CharacterClass_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_CharacterClass_wait_long_int 10
typedef void (*func_regexodus_CharacterClass_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_CharacterClass_append_int_int_Array1_char_Array1_int_Array1_int_java_util_ArrayList_java_util_HashMap 11
typedef void (*func_regexodus_CharacterClass_append_int_int_Array1_char_Array1_int_Array1_int_java_util_ArrayList_java_util_HashMap)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6);
#define VTABLE_regexodus_CharacterClass_append_regexodus_Term_R_regexodus_Term 12
typedef jobject (*func_regexodus_CharacterClass_append_regexodus_Term_R_regexodus_Term)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_CharacterClass_replaceCurrent_regexodus_Term_R_regexodus_Term 13
typedef jobject (*func_regexodus_CharacterClass_replaceCurrent_regexodus_Term_R_regexodus_Term)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_CharacterClass_newBranch 14
typedef void (*func_regexodus_CharacterClass_newBranch)(jcontext ctx, jobject self);
#define VTABLE_regexodus_CharacterClass_close 15
typedef void (*func_regexodus_CharacterClass_close)(jcontext ctx, jobject self);
#define VTABLE_regexodus_CharacterClass_startNewBranch 16
typedef void (*func_regexodus_CharacterClass_startNewBranch)(jcontext ctx, jobject self);
#define VTABLE_regexodus_CharacterClass_parseTerm_Array1_char_int_int_regexodus_Term_int_R_int 17
typedef jint (*func_regexodus_CharacterClass_parseTerm_Array1_char_int_int_regexodus_Term_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jint param4);
#define VTABLE_regexodus_CharacterClass_toStringAll_R_java_lang_String 18
typedef jobject (*func_regexodus_CharacterClass_toStringAll_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_CharacterClass_toStringAll_java_util_ArrayList_R_java_lang_String 19
typedef jobject (*func_regexodus_CharacterClass_toStringAll_java_util_ArrayList_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_regexodus_CharacterClass(jobject object, jint mark, jint depth);
void clinit_regexodus_CharacterClass(jcontext ctx);
void init_regexodus_CharacterClass(jcontext ctx, jobject self);
void SM_regexodus_CharacterClass_registerClass_java_lang_String_regexodus_BlockSet_java_util_ArrayList(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_regexodus_CharacterClass_initPosixClasses(jcontext ctx);
void SM_regexodus_CharacterClass_initNames(jcontext ctx);
void SM_regexodus_CharacterClass_initNamedBlock_java_lang_String_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(jcontext ctx, jobject param0);
jobject SM_regexodus_CharacterClass_getNamedClass_java_lang_String_R_regexodus_BlockSet(jcontext ctx, jobject param0);
void SM_regexodus_CharacterClass_makeDigit_regexodus_Term_boolean_boolean(jcontext ctx, jobject param0, jbool param1, jbool param2);
void SM_regexodus_CharacterClass_makeSpace_regexodus_Term_boolean_boolean(jcontext ctx, jobject param0, jbool param1, jbool param2);
void SM_regexodus_CharacterClass_makeHSpace_regexodus_Term_boolean_boolean(jcontext ctx, jobject param0, jbool param1, jbool param2);
void SM_regexodus_CharacterClass_makeVSpace_regexodus_Term_boolean_boolean(jcontext ctx, jobject param0, jbool param1, jbool param2);
void SM_regexodus_CharacterClass_makeWordChar_regexodus_Term_boolean_boolean(jcontext ctx, jobject param0, jbool param1, jbool param2);
void SM_regexodus_CharacterClass_makeWordBoundary_regexodus_Term_boolean_boolean(jcontext ctx, jobject param0, jbool param1, jbool param2);
void SM_regexodus_CharacterClass_makeWordStart_regexodus_Term_boolean(jcontext ctx, jobject param0, jbool param1);
void SM_regexodus_CharacterClass_makeWordEnd_regexodus_Term_boolean(jcontext ctx, jobject param0, jbool param1);
void SM_regexodus_CharacterClass_parseGroup_Array1_char_int_int_regexodus_Term_boolean_boolean_boolean_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jbool param4, jbool param5, jbool param6, jbool param7);
jint SM_regexodus_CharacterClass_parseClass_Array1_char_int_int_regexodus_Term_boolean_boolean_boolean_boolean_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jbool param4, jbool param5, jbool param6, jbool param7);
jint SM_regexodus_CharacterClass_parseName_Array1_char_int_int_regexodus_Term_boolean_boolean_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jbool param4, jbool param5);
jint SM_regexodus_CharacterClass_parseClass_Array1_char_int_int_regexodus_BlockSet_boolean_boolean_boolean_boolean_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jbool param4, jbool param5, jbool param6, jbool param7);
jint SM_regexodus_CharacterClass_parseName_Array1_char_int_int_java_lang_StringBuilder_boolean_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jbool param4);
jobject SM_regexodus_CharacterClass_stringValue0_regexodus_ds_IntBitSet_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_regexodus_CharacterClass_stringValue2_Array1_regexodus_ds_IntBitSet_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_regexodus_CharacterClass_stringValue_int_R_java_lang_String(jcontext ctx, jint param0);
jint SM_regexodus_CharacterClass_toHexDigit_char_R_int(jcontext ctx, jchar param0);
void SM_regexodus_CharacterClass_printRealm_java_util_ArrayList_java_lang_String(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
