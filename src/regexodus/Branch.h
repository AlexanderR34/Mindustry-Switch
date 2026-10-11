#ifndef HEADER_regexodus_Branch
#define HEADER_regexodus_Branch

#include "Clearwing.h"
#include "regexodus/Term.h"
#include "java/io/Serializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_Branch {
	regexodus_Term parent;
} regexodus_Branch;

extern Class class_regexodus_Branch;

extern jlong SF_regexodus_Branch_serialVersionUID;

#define VTABLE_regexodus_Branch_hashCode_R_int 0
typedef jint (*func_regexodus_Branch_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Branch_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_Branch_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Branch_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_Branch_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Branch_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_Branch_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Branch_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_Branch_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Branch_finalize 5
typedef void (*func_regexodus_Branch_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Branch_notify 6
typedef void (*func_regexodus_Branch_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Branch_notifyAll 7
typedef void (*func_regexodus_Branch_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Branch_wait 8
typedef void (*func_regexodus_Branch_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Branch_wait_long 9
typedef void (*func_regexodus_Branch_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_Branch_wait_long_int 10
typedef void (*func_regexodus_Branch_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_Branch_append_int_int_Array1_char_Array1_int_Array1_int_java_util_ArrayList_java_util_HashMap 11
typedef void (*func_regexodus_Branch_append_int_int_Array1_char_Array1_int_Array1_int_java_util_ArrayList_java_util_HashMap)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6);
#define VTABLE_regexodus_Branch_append_regexodus_Term_R_regexodus_Term 12
typedef jobject (*func_regexodus_Branch_append_regexodus_Term_R_regexodus_Term)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Branch_replaceCurrent_regexodus_Term_R_regexodus_Term 13
typedef jobject (*func_regexodus_Branch_replaceCurrent_regexodus_Term_R_regexodus_Term)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Branch_newBranch 14
typedef void (*func_regexodus_Branch_newBranch)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Branch_close 15
typedef void (*func_regexodus_Branch_close)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Branch_startNewBranch 16
typedef void (*func_regexodus_Branch_startNewBranch)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Branch_parseTerm_Array1_char_int_int_regexodus_Term_int_R_int 17
typedef jint (*func_regexodus_Branch_parseTerm_Array1_char_int_int_regexodus_Term_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jint param4);
#define VTABLE_regexodus_Branch_toStringAll_R_java_lang_String 18
typedef jobject (*func_regexodus_Branch_toStringAll_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Branch_toStringAll_java_util_ArrayList_R_java_lang_String 19
typedef jobject (*func_regexodus_Branch_toStringAll_java_util_ArrayList_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_regexodus_Branch(jobject object, jint mark, jint depth);
void clinit_regexodus_Branch(jcontext ctx);
void init_regexodus_Branch(jcontext ctx, jobject self);
void init_regexodus_Branch_int(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
