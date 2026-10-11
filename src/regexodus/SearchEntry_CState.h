#ifndef HEADER_regexodus_SearchEntry$CState
#define HEADER_regexodus_SearchEntry$CState

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_SearchEntry$CState {
	java_lang_Object parent;
	jint F_index;
	jint F_value;
	jref F_next;
	jref F_prev;
} regexodus_SearchEntry$CState;

extern Class class_regexodus_SearchEntry$CState;


#define VTABLE_regexodus_SearchEntry$CState_hashCode_R_int 0
typedef jint (*func_regexodus_SearchEntry$CState_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry$CState_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_SearchEntry$CState_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_SearchEntry$CState_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_SearchEntry$CState_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry$CState_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_SearchEntry$CState_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry$CState_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_SearchEntry$CState_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry$CState_finalize 5
typedef void (*func_regexodus_SearchEntry$CState_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry$CState_notify 6
typedef void (*func_regexodus_SearchEntry$CState_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry$CState_notifyAll 7
typedef void (*func_regexodus_SearchEntry$CState_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry$CState_wait 8
typedef void (*func_regexodus_SearchEntry$CState_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry$CState_wait_long 9
typedef void (*func_regexodus_SearchEntry$CState_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_SearchEntry$CState_wait_long_int 10
typedef void (*func_regexodus_SearchEntry$CState_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_regexodus_SearchEntry$CState(jobject object, jint mark, jint depth);
void clinit_regexodus_SearchEntry$CState(jcontext ctx);
void init_regexodus_SearchEntry$CState(jcontext ctx, jobject self);
void init_regexodus_SearchEntry$CState_regexodus_SearchEntry$1(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
