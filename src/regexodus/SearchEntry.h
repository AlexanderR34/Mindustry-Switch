#ifndef HEADER_regexodus_SearchEntry
#define HEADER_regexodus_SearchEntry

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_SearchEntry {
	java_lang_Object parent;
	jref F_term;
	jint F_index;
	jint F_cnt;
	jint F_regLen;
	jbool F_isState;
	jref F_sub;
	jref F_on;
	jref F_mHead;
	jref F_mCurrent;
	jref F_cHead;
	jref F_cCurrent;
} regexodus_SearchEntry;

extern Class class_regexodus_SearchEntry;

extern jlong SF_regexodus_SearchEntry_serialVersionUID;

#define VTABLE_regexodus_SearchEntry_hashCode_R_int 0
typedef jint (*func_regexodus_SearchEntry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_SearchEntry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_SearchEntry_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_SearchEntry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_SearchEntry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_SearchEntry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry_finalize 5
typedef void (*func_regexodus_SearchEntry_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry_notify 6
typedef void (*func_regexodus_SearchEntry_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry_notifyAll 7
typedef void (*func_regexodus_SearchEntry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry_wait 8
typedef void (*func_regexodus_SearchEntry_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_SearchEntry_wait_long 9
typedef void (*func_regexodus_SearchEntry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_SearchEntry_wait_long_int 10
typedef void (*func_regexodus_SearchEntry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_SearchEntry_reset_int 11
typedef void (*func_regexodus_SearchEntry_reset_int)(jcontext ctx, jobject self, jint param0);

void mark_regexodus_SearchEntry(jobject object, jint mark, jint depth);
void clinit_regexodus_SearchEntry(jcontext ctx);
void init_regexodus_SearchEntry(jcontext ctx, jobject self);
void SM_regexodus_SearchEntry_saveMemregState_regexodus_SearchEntry_int_regexodus_MemReg(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_regexodus_SearchEntry_saveCntState_regexodus_SearchEntry_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_regexodus_SearchEntry_popState_regexodus_SearchEntry_Array1_regexodus_MemReg_Array1_int(jcontext ctx, jobject param0, jobject param1, jobject param2);
void M_regexodus_SearchEntry_reset_int(jcontext ctx, jobject self, jint param0);
jbool M_regexodus_SearchEntry_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_regexodus_SearchEntry_hashCode_R_int(jcontext ctx, jobject self);
jobject M_regexodus_SearchEntry_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
