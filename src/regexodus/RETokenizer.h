#ifndef HEADER_regexodus_RETokenizer
#define HEADER_regexodus_RETokenizer

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_RETokenizer {
	java_lang_Object parent;
	jref F_matcher;
	jbool F_checked;
	jbool F_hasToken;
	jref F_token;
	jint F_pos;
	jbool F_endReached;
	jbool F_emptyTokensEnabled;
} regexodus_RETokenizer;

extern Class class_regexodus_RETokenizer;


#define VTABLE_regexodus_RETokenizer_hashCode_R_int 0
typedef jint (*func_regexodus_RETokenizer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_RETokenizer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_RETokenizer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_RETokenizer_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_RETokenizer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_RETokenizer_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_RETokenizer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_RETokenizer_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_RETokenizer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_RETokenizer_finalize 5
typedef void (*func_regexodus_RETokenizer_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_RETokenizer_notify 6
typedef void (*func_regexodus_RETokenizer_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_RETokenizer_notifyAll 7
typedef void (*func_regexodus_RETokenizer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_RETokenizer_wait 8
typedef void (*func_regexodus_RETokenizer_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_RETokenizer_wait_long 9
typedef void (*func_regexodus_RETokenizer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_RETokenizer_wait_long_int 10
typedef void (*func_regexodus_RETokenizer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_RETokenizer_hasNext_R_boolean 11
typedef jbool (*func_regexodus_RETokenizer_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_regexodus_RETokenizer_next_R_java_lang_Object 12
typedef jobject (*func_regexodus_RETokenizer_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_RETokenizer_remove 13
typedef void (*func_regexodus_RETokenizer_remove)(jcontext ctx, jobject self);
#define VTABLE_regexodus_RETokenizer_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_regexodus_RETokenizer_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_RETokenizer_setEmptyEnabled_boolean 15
typedef void (*func_regexodus_RETokenizer_setEmptyEnabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_regexodus_RETokenizer_isEmptyEnabled_R_boolean 16
typedef jbool (*func_regexodus_RETokenizer_isEmptyEnabled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_regexodus_RETokenizer_hasMore_R_boolean 17
typedef jbool (*func_regexodus_RETokenizer_hasMore_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_regexodus_RETokenizer_nextToken_R_java_lang_String 18
typedef jobject (*func_regexodus_RETokenizer_nextToken_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_RETokenizer_split_R_Array1_java_lang_String 19
typedef jobject (*func_regexodus_RETokenizer_split_R_Array1_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_RETokenizer_reset 20
typedef void (*func_regexodus_RETokenizer_reset)(jcontext ctx, jobject self);
#define VTABLE_regexodus_RETokenizer_check 21
typedef void (*func_regexodus_RETokenizer_check)(jcontext ctx, jobject self);
#define VTABLE_regexodus_RETokenizer_next_R_java_lang_String 22
typedef jobject (*func_regexodus_RETokenizer_next_R_java_lang_String)(jcontext ctx, jobject self);

void mark_regexodus_RETokenizer(jobject object, jint mark, jint depth);
void clinit_regexodus_RETokenizer(jcontext ctx);
void init_regexodus_RETokenizer_regexodus_Pattern_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_regexodus_RETokenizer_regexodus_Pattern_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
void init_regexodus_RETokenizer_regexodus_Pattern_java_io_Reader_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
void init_regexodus_RETokenizer_regexodus_Matcher_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_regexodus_RETokenizer_setEmptyEnabled_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_regexodus_RETokenizer_isEmptyEnabled_R_boolean(jcontext ctx, jobject self);
jbool M_regexodus_RETokenizer_hasMore_R_boolean(jcontext ctx, jobject self);
jobject M_regexodus_RETokenizer_nextToken_R_java_lang_String(jcontext ctx, jobject self);
jobject M_regexodus_RETokenizer_split_R_Array1_java_lang_String(jcontext ctx, jobject self);
void M_regexodus_RETokenizer_reset(jcontext ctx, jobject self);
jobject SM_regexodus_RETokenizer_collect_regexodus_RETokenizer_Array1_java_lang_String_int_R_Array1_java_lang_String(jcontext ctx, jobject param0, jobject param1, jint param2);
void M_regexodus_RETokenizer_check(jcontext ctx, jobject self);
void M_regexodus_RETokenizer_remove(jcontext ctx, jobject self);
jbool M_regexodus_RETokenizer_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_regexodus_RETokenizer_next_R_java_lang_String(jcontext ctx, jobject self);
jbool M_regexodus_RETokenizer_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_regexodus_RETokenizer_hashCode_R_int(jcontext ctx, jobject self);
jobject M_regexodus_RETokenizer_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_regexodus_RETokenizer_next_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
