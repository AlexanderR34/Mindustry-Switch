#ifndef HEADER_regexodus_PerlSubstitution$Element
#define HEADER_regexodus_PerlSubstitution$Element

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_PerlSubstitution$Element {
	java_lang_Object parent;
	jref F_prefix;
	jref F_next;
} regexodus_PerlSubstitution$Element;

extern Class class_regexodus_PerlSubstitution$Element;


#define VTABLE_regexodus_PerlSubstitution$Element_hashCode_R_int 0
typedef jint (*func_regexodus_PerlSubstitution$Element_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$Element_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_PerlSubstitution$Element_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_PerlSubstitution$Element_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_PerlSubstitution$Element_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$Element_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_PerlSubstitution$Element_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$Element_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_PerlSubstitution$Element_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$Element_finalize 5
typedef void (*func_regexodus_PerlSubstitution$Element_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$Element_notify 6
typedef void (*func_regexodus_PerlSubstitution$Element_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$Element_notifyAll 7
typedef void (*func_regexodus_PerlSubstitution$Element_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$Element_wait 8
typedef void (*func_regexodus_PerlSubstitution$Element_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution$Element_wait_long 9
typedef void (*func_regexodus_PerlSubstitution$Element_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_PerlSubstitution$Element_wait_long_int 10
typedef void (*func_regexodus_PerlSubstitution$Element_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_PerlSubstitution$Element_append_regexodus_MatchResult_regexodus_TextBuffer 11
typedef void (*func_regexodus_PerlSubstitution$Element_append_regexodus_MatchResult_regexodus_TextBuffer)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_regexodus_PerlSubstitution$Element(jobject object, jint mark, jint depth);
void clinit_regexodus_PerlSubstitution$Element(jcontext ctx);
void init_regexodus_PerlSubstitution$Element(jcontext ctx, jobject self);
void init_regexodus_PerlSubstitution$Element_regexodus_PerlSubstitution$1(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
