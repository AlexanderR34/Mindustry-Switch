#ifndef HEADER_regexodus_PerlSubstitution$StringRefHandler
#define HEADER_regexodus_PerlSubstitution$StringRefHandler

#include "Clearwing.h"
#include "regexodus/PerlSubstitution_Element.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_PerlSubstitution$StringRefHandler {
	regexodus_PerlSubstitution$Element parent;
	jref F_index;
	jint F_modes;
} regexodus_PerlSubstitution$StringRefHandler;

extern Class class_regexodus_PerlSubstitution$StringRefHandler;


#define VTABLE_regexodus_PerlSubstitution$StringRefHandler_hashCode_R_int 0
typedef jint (*func_regexodus_PerlSubstitution$StringRefHandler_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$StringRefHandler_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_PerlSubstitution$StringRefHandler_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_PerlSubstitution$StringRefHandler_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_PerlSubstitution$StringRefHandler_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$StringRefHandler_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_PerlSubstitution$StringRefHandler_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$StringRefHandler_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_PerlSubstitution$StringRefHandler_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$StringRefHandler_finalize 5
typedef void (*func_regexodus_PerlSubstitution$StringRefHandler_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$StringRefHandler_notify 6
typedef void (*func_regexodus_PerlSubstitution$StringRefHandler_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$StringRefHandler_notifyAll 7
typedef void (*func_regexodus_PerlSubstitution$StringRefHandler_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$StringRefHandler_wait 8
typedef void (*func_regexodus_PerlSubstitution$StringRefHandler_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$StringRefHandler_wait_long 9
typedef void (*func_regexodus_PerlSubstitution$StringRefHandler_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_PerlSubstitution$StringRefHandler_wait_long_int 10
typedef void (*func_regexodus_PerlSubstitution$StringRefHandler_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_PerlSubstitution$StringRefHandler_append_regexodus_MatchResult_regexodus_TextBuffer 11
typedef void (*func_regexodus_PerlSubstitution$StringRefHandler_append_regexodus_MatchResult_regexodus_TextBuffer)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_regexodus_PerlSubstitution$StringRefHandler(jobject object, jint mark, jint depth);
void clinit_regexodus_PerlSubstitution$StringRefHandler(jcontext ctx);
void init_regexodus_PerlSubstitution$StringRefHandler_java_lang_String_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
void M_regexodus_PerlSubstitution$StringRefHandler_append_regexodus_MatchResult_regexodus_TextBuffer(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_regexodus_PerlSubstitution$StringRefHandler_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_regexodus_PerlSubstitution$StringRefHandler_hashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
