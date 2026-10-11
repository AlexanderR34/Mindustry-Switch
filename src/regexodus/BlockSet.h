#ifndef HEADER_regexodus_BlockSet
#define HEADER_regexodus_BlockSet

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "regexodus/UnicodeConstants.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_BlockSet {
	java_lang_Object parent;
	jbool F_positive;
	jbool F_isLarge;
	jref F_block0;
	jref F_blocks;
	jint F_weight;
} regexodus_BlockSet;

extern Class class_regexodus_BlockSet;

extern jobject SF_regexodus_BlockSet_emptyBlock0;

#define VTABLE_regexodus_BlockSet_hashCode_R_int 0
typedef jint (*func_regexodus_BlockSet_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_BlockSet_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_BlockSet_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_BlockSet_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_BlockSet_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_BlockSet_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_BlockSet_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_BlockSet_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_BlockSet_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_BlockSet_finalize 5
typedef void (*func_regexodus_BlockSet_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_BlockSet_notify 6
typedef void (*func_regexodus_BlockSet_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_BlockSet_notifyAll 7
typedef void (*func_regexodus_BlockSet_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_BlockSet_wait 8
typedef void (*func_regexodus_BlockSet_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_BlockSet_wait_long 9
typedef void (*func_regexodus_BlockSet_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_BlockSet_wait_long_int 10
typedef void (*func_regexodus_BlockSet_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_BlockSet_reset 11
typedef void (*func_regexodus_BlockSet_reset)(jcontext ctx, jobject self);
#define VTABLE_regexodus_BlockSet_setPositive_boolean 12
typedef void (*func_regexodus_BlockSet_setPositive_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_regexodus_BlockSet_isPositive_R_boolean 13
typedef jbool (*func_regexodus_BlockSet_isPositive_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_regexodus_BlockSet_isLarge_R_boolean 14
typedef jbool (*func_regexodus_BlockSet_isLarge_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_regexodus_BlockSet_enableLargeMode 15
typedef void (*func_regexodus_BlockSet_enableLargeMode)(jcontext ctx, jobject self);
#define VTABLE_regexodus_BlockSet_getWeight_R_int 16
typedef jint (*func_regexodus_BlockSet_getWeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_BlockSet_setWordChar_boolean 17
typedef void (*func_regexodus_BlockSet_setWordChar_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_regexodus_BlockSet_setDigit_boolean 18
typedef void (*func_regexodus_BlockSet_setDigit_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_regexodus_BlockSet_setSpace_boolean 19
typedef void (*func_regexodus_BlockSet_setSpace_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_regexodus_BlockSet_setHorizontalSpace_boolean 20
typedef void (*func_regexodus_BlockSet_setHorizontalSpace_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_regexodus_BlockSet_setVerticalSpace_boolean 21
typedef void (*func_regexodus_BlockSet_setVerticalSpace_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_regexodus_BlockSet_setCategory_java_lang_String 22
typedef void (*func_regexodus_BlockSet_setCategory_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_BlockSet_setChars_java_lang_String 23
typedef void (*func_regexodus_BlockSet_setChars_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_BlockSet_setChar_char 24
typedef void (*func_regexodus_BlockSet_setChar_char)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_regexodus_BlockSet_setRange_char_char 25
typedef void (*func_regexodus_BlockSet_setRange_char_char)(jcontext ctx, jobject self, jchar param0, jchar param1);
#define VTABLE_regexodus_BlockSet_add_regexodus_BlockSet 26
typedef void (*func_regexodus_BlockSet_add_regexodus_BlockSet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_BlockSet_add_regexodus_BlockSet_boolean 27
typedef void (*func_regexodus_BlockSet_add_regexodus_BlockSet_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_regexodus_BlockSet_subtract_regexodus_BlockSet 28
typedef void (*func_regexodus_BlockSet_subtract_regexodus_BlockSet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_BlockSet_subtract_regexodus_BlockSet_boolean 29
typedef void (*func_regexodus_BlockSet_subtract_regexodus_BlockSet_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_regexodus_BlockSet_intersect_regexodus_BlockSet 30
typedef void (*func_regexodus_BlockSet_intersect_regexodus_BlockSet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_BlockSet_intersect_regexodus_BlockSet_boolean 31
typedef void (*func_regexodus_BlockSet_intersect_regexodus_BlockSet_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);

void mark_regexodus_BlockSet(jobject object, jint mark, jint depth);
void clinit_regexodus_BlockSet(jcontext ctx);
void init_regexodus_BlockSet(jcontext ctx, jobject self);
void M_regexodus_BlockSet_reset(jcontext ctx, jobject self);
void SM_regexodus_BlockSet_unify_regexodus_BlockSet_regexodus_Term(jcontext ctx, jobject param0, jobject param1);
void M_regexodus_BlockSet_setPositive_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_regexodus_BlockSet_isPositive_R_boolean(jcontext ctx, jobject self);
jbool M_regexodus_BlockSet_isLarge_R_boolean(jcontext ctx, jobject self);
void M_regexodus_BlockSet_enableLargeMode(jcontext ctx, jobject self);
jint M_regexodus_BlockSet_getWeight_R_int(jcontext ctx, jobject self);
void M_regexodus_BlockSet_setWordChar_boolean(jcontext ctx, jobject self, jbool param0);
void M_regexodus_BlockSet_setDigit_boolean(jcontext ctx, jobject self, jbool param0);
void M_regexodus_BlockSet_setSpace_boolean(jcontext ctx, jobject self, jbool param0);
void M_regexodus_BlockSet_setHorizontalSpace_boolean(jcontext ctx, jobject self, jbool param0);
void M_regexodus_BlockSet_setVerticalSpace_boolean(jcontext ctx, jobject self, jbool param0);
void M_regexodus_BlockSet_setCategory_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_regexodus_BlockSet_setChars_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_regexodus_BlockSet_setChar_char(jcontext ctx, jobject self, jchar param0);
void M_regexodus_BlockSet_setRange_char_char(jcontext ctx, jobject self, jchar param0, jchar param1);
void M_regexodus_BlockSet_add_regexodus_BlockSet(jcontext ctx, jobject self, jobject param0);
void M_regexodus_BlockSet_add_regexodus_BlockSet_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jint SM_regexodus_BlockSet_addImpl_regexodus_BlockSet_regexodus_BlockSet_boolean_R_int(jcontext ctx, jobject param0, jobject param1, jbool param2);
void M_regexodus_BlockSet_subtract_regexodus_BlockSet(jcontext ctx, jobject self, jobject param0);
void M_regexodus_BlockSet_subtract_regexodus_BlockSet_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jint SM_regexodus_BlockSet_subtractImpl_regexodus_BlockSet_regexodus_BlockSet_boolean_R_int(jcontext ctx, jobject param0, jobject param1, jbool param2);
void M_regexodus_BlockSet_intersect_regexodus_BlockSet(jcontext ctx, jobject self, jobject param0);
void M_regexodus_BlockSet_intersect_regexodus_BlockSet_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jint SM_regexodus_BlockSet_add_regexodus_ds_IntBitSet_regexodus_ds_IntBitSet_int_int_boolean_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jbool param4);
jint SM_regexodus_BlockSet_subtract_regexodus_ds_IntBitSet_regexodus_ds_IntBitSet_boolean_R_int(jcontext ctx, jobject param0, jobject param1, jbool param2);
jint SM_regexodus_BlockSet_set_regexodus_ds_IntBitSet_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2);
jobject M_regexodus_BlockSet_toString_R_java_lang_String(jcontext ctx, jobject self);
jbool M_regexodus_BlockSet_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_regexodus_BlockSet_hashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
