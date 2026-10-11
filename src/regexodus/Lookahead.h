#ifndef HEADER_regexodus_Lookahead
#define HEADER_regexodus_Lookahead

#include "Clearwing.h"
#include "regexodus/Term.h"
#include "java/io/Serializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_Lookahead {
	regexodus_Term parent;
	jbool F_isPositive;
} regexodus_Lookahead;

extern Class class_regexodus_Lookahead;

extern jlong SF_regexodus_Lookahead_serialVersionUID;

#define VTABLE_regexodus_Lookahead_hashCode_R_int 0
typedef jint (*func_regexodus_Lookahead_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Lookahead_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_Lookahead_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Lookahead_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_Lookahead_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Lookahead_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_Lookahead_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Lookahead_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_Lookahead_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Lookahead_finalize 5
typedef void (*func_regexodus_Lookahead_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Lookahead_notify 6
typedef void (*func_regexodus_Lookahead_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Lookahead_notifyAll 7
typedef void (*func_regexodus_Lookahead_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Lookahead_wait 8
typedef void (*func_regexodus_Lookahead_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Lookahead_wait_long 9
typedef void (*func_regexodus_Lookahead_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_Lookahead_wait_long_int 10
typedef void (*func_regexodus_Lookahead_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_Lookahead_append_int_int_Array1_char_Array1_int_Array1_int_java_util_ArrayList_java_util_HashMap 11
typedef void (*func_regexodus_Lookahead_append_int_int_Array1_char_Array1_int_Array1_int_java_util_ArrayList_java_util_HashMap)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6);
#define VTABLE_regexodus_Lookahead_append_regexodus_Term_R_regexodus_Term 12
typedef jobject (*func_regexodus_Lookahead_append_regexodus_Term_R_regexodus_Term)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Lookahead_replaceCurrent_regexodus_Term_R_regexodus_Term 13
typedef jobject (*func_regexodus_Lookahead_replaceCurrent_regexodus_Term_R_regexodus_Term)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Lookahead_newBranch 14
typedef void (*func_regexodus_Lookahead_newBranch)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Lookahead_close 15
typedef void (*func_regexodus_Lookahead_close)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Lookahead_startNewBranch 16
typedef void (*func_regexodus_Lookahead_startNewBranch)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Lookahead_parseTerm_Array1_char_int_int_regexodus_Term_int_R_int 17
typedef jint (*func_regexodus_Lookahead_parseTerm_Array1_char_int_int_regexodus_Term_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jint param4);
#define VTABLE_regexodus_Lookahead_toStringAll_R_java_lang_String 18
typedef jobject (*func_regexodus_Lookahead_toStringAll_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Lookahead_toStringAll_java_util_ArrayList_R_java_lang_String 19
typedef jobject (*func_regexodus_Lookahead_toStringAll_java_util_ArrayList_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_regexodus_Lookahead(jobject object, jint mark, jint depth);
void clinit_regexodus_Lookahead(jcontext ctx);
void init_regexodus_Lookahead_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1);
jbool M_regexodus_Lookahead_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_regexodus_Lookahead_hashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
