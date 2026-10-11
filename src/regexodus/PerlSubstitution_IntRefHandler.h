#ifndef HEADER_regexodus_PerlSubstitution$IntRefHandler
#define HEADER_regexodus_PerlSubstitution$IntRefHandler

#include "Clearwing.h"
#include "regexodus/PerlSubstitution_Element.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_PerlSubstitution$IntRefHandler {
	regexodus_PerlSubstitution$Element parent;
	jref F_index;
	jint F_modes;
} regexodus_PerlSubstitution$IntRefHandler;

extern Class class_regexodus_PerlSubstitution$IntRefHandler;


#define VTABLE_regexodus_PerlSubstitution$IntRefHandler_hashCode_R_int 0
typedef jint (*func_regexodus_PerlSubstitution$IntRefHandler_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$IntRefHandler_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_PerlSubstitution$IntRefHandler_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_PerlSubstitution$IntRefHandler_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_PerlSubstitution$IntRefHandler_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$IntRefHandler_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_PerlSubstitution$IntRefHandler_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$IntRefHandler_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_PerlSubstitution$IntRefHandler_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$IntRefHandler_finalize 5
typedef void (*func_regexodus_PerlSubstitution$IntRefHandler_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$IntRefHandler_notify 6
typedef void (*func_regexodus_PerlSubstitution$IntRefHandler_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$IntRefHandler_notifyAll 7
typedef void (*func_regexodus_PerlSubstitution$IntRefHandler_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$IntRefHandler_wait 8
typedef void (*func_regexodus_PerlSubstitution$IntRefHandler_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$IntRefHandler_wait_long 9
typedef void (*func_regexodus_PerlSubstitution$IntRefHandler_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_PerlSubstitution$IntRefHandler_wait_long_int 10
typedef void (*func_regexodus_PerlSubstitution$IntRefHandler_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_PerlSubstitution$IntRefHandler_append_regexodus_MatchResult_regexodus_TextBuffer 11
typedef void (*func_regexodus_PerlSubstitution$IntRefHandler_append_regexodus_MatchResult_regexodus_TextBuffer)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_regexodus_PerlSubstitution$IntRefHandler(jobject object, jint mark, jint depth);
void clinit_regexodus_PerlSubstitution$IntRefHandler(jcontext ctx);
void init_regexodus_PerlSubstitution$IntRefHandler_java_lang_String_java_lang_Integer_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
void M_regexodus_PerlSubstitution$IntRefHandler_append_regexodus_MatchResult_regexodus_TextBuffer(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_regexodus_PerlSubstitution$IntRefHandler_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_regexodus_PerlSubstitution$IntRefHandler_hashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
