#ifndef HEADER_regexodus_Find
#define HEADER_regexodus_Find

#include "Clearwing.h"
#include "regexodus/Term.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_Find {
	regexodus_Term parent;
} regexodus_Find;

extern Class class_regexodus_Find;


#define VTABLE_regexodus_Find_hashCode_R_int 0
typedef jint (*func_regexodus_Find_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Find_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_Find_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Find_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_Find_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Find_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_Find_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Find_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_Find_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Find_finalize 5
typedef void (*func_regexodus_Find_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Find_notify 6
typedef void (*func_regexodus_Find_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Find_notifyAll 7
typedef void (*func_regexodus_Find_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Find_wait 8
typedef void (*func_regexodus_Find_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Find_wait_long 9
typedef void (*func_regexodus_Find_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_Find_wait_long_int 10
typedef void (*func_regexodus_Find_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_Find_append_int_int_Array1_char_Array1_int_Array1_int_java_util_ArrayList_java_util_HashMap 11
typedef void (*func_regexodus_Find_append_int_int_Array1_char_Array1_int_Array1_int_java_util_ArrayList_java_util_HashMap)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6);
#define VTABLE_regexodus_Find_append_regexodus_Term_R_regexodus_Term 12
typedef jobject (*func_regexodus_Find_append_regexodus_Term_R_regexodus_Term)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Find_replaceCurrent_regexodus_Term_R_regexodus_Term 13
typedef jobject (*func_regexodus_Find_replaceCurrent_regexodus_Term_R_regexodus_Term)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Find_newBranch 14
typedef void (*func_regexodus_Find_newBranch)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Find_close 15
typedef void (*func_regexodus_Find_close)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Find_startNewBranch 16
typedef void (*func_regexodus_Find_startNewBranch)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Find_parseTerm_Array1_char_int_int_regexodus_Term_int_R_int 17
typedef jint (*func_regexodus_Find_parseTerm_Array1_char_int_int_regexodus_Term_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jint param4);
#define VTABLE_regexodus_Find_toStringAll_R_java_lang_String 18
typedef jobject (*func_regexodus_Find_toStringAll_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Find_toStringAll_java_util_ArrayList_R_java_lang_String 19
typedef jobject (*func_regexodus_Find_toStringAll_java_util_ArrayList_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_regexodus_Find(jobject object, jint mark, jint depth);
void clinit_regexodus_Find(jcontext ctx);
void init_regexodus_Find_regexodus_Term_int_regexodus_Term(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
