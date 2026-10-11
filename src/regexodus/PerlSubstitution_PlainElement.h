#ifndef HEADER_regexodus_PerlSubstitution$PlainElement
#define HEADER_regexodus_PerlSubstitution$PlainElement

#include "Clearwing.h"
#include "regexodus/PerlSubstitution_Element.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_PerlSubstitution$PlainElement {
	regexodus_PerlSubstitution$Element parent;
	jref F_str;
} regexodus_PerlSubstitution$PlainElement;

extern Class class_regexodus_PerlSubstitution$PlainElement;


#define VTABLE_regexodus_PerlSubstitution$PlainElement_hashCode_R_int 0
typedef jint (*func_regexodus_PerlSubstitution$PlainElement_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$PlainElement_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_PerlSubstitution$PlainElement_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_PerlSubstitution$PlainElement_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_PerlSubstitution$PlainElement_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$PlainElement_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_PerlSubstitution$PlainElement_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$PlainElement_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_PerlSubstitution$PlainElement_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$PlainElement_finalize 5
typedef void (*func_regexodus_PerlSubstitution$PlainElement_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$PlainElement_notify 6
typedef void (*func_regexodus_PerlSubstitution$PlainElement_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$PlainElement_notifyAll 7
typedef void (*func_regexodus_PerlSubstitution$PlainElement_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$PlainElement_wait 8
typedef void (*func_regexodus_PerlSubstitution$PlainElement_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$PlainElement_wait_long 9
typedef void (*func_regexodus_PerlSubstitution$PlainElement_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_PerlSubstitution$PlainElement_wait_long_int 10
typedef void (*func_regexodus_PerlSubstitution$PlainElement_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_PerlSubstitution$PlainElement_append_regexodus_MatchResult_regexodus_TextBuffer 11
typedef void (*func_regexodus_PerlSubstitution$PlainElement_append_regexodus_MatchResult_regexodus_TextBuffer)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_regexodus_PerlSubstitution$PlainElement(jobject object, jint mark, jint depth);
void clinit_regexodus_PerlSubstitution$PlainElement(jcontext ctx);
void init_regexodus_PerlSubstitution$PlainElement_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_regexodus_PerlSubstitution$PlainElement_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_regexodus_PerlSubstitution$PlainElement_append_regexodus_MatchResult_regexodus_TextBuffer(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_regexodus_PerlSubstitution$PlainElement_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_regexodus_PerlSubstitution$PlainElement_hashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
