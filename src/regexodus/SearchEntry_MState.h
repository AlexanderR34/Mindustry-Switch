#ifndef HEADER_regexodus_SearchEntry$MState
#define HEADER_regexodus_SearchEntry$MState

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_SearchEntry$MState {
	java_lang_Object parent;
	jint F_index;
	jint F_in;
	jint F_out;
	jref F_next;
	jref F_prev;
} regexodus_SearchEntry$MState;

extern Class class_regexodus_SearchEntry$MState;


#define VTABLE_regexodus_SearchEntry$MState_hashCode_R_int 0
typedef jint (*func_regexodus_SearchEntry$MState_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry$MState_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_SearchEntry$MState_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_SearchEntry$MState_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_SearchEntry$MState_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry$MState_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_SearchEntry$MState_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry$MState_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_SearchEntry$MState_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry$MState_finalize 5
typedef void (*func_regexodus_SearchEntry$MState_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry$MState_notify 6
typedef void (*func_regexodus_SearchEntry$MState_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry$MState_notifyAll 7
typedef void (*func_regexodus_SearchEntry$MState_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry$MState_wait 8
typedef void (*func_regexodus_SearchEntry$MState_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry$MState_wait_long 9
typedef void (*func_regexodus_SearchEntry$MState_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_SearchEntry$MState_wait_long_int 10
typedef void (*func_regexodus_SearchEntry$MState_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_regexodus_SearchEntry$MState(jobject object, jint mark, jint depth);
void clinit_regexodus_SearchEntry$MState(jcontext ctx);
void init_regexodus_SearchEntry$MState(jcontext ctx, jobject self);
void init_regexodus_SearchEntry$MState_regexodus_SearchEntry$1(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
