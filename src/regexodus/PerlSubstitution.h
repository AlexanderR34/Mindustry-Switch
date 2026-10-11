#ifndef HEADER_regexodus_PerlSubstitution
#define HEADER_regexodus_PerlSubstitution

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "regexodus/Substitution.h"
#include "java/io/Serializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_PerlSubstitution {
	java_lang_Object parent;
	jref F_queueEntry;
} regexodus_PerlSubstitution;

extern Class class_regexodus_PerlSubstitution;

extern jlong SF_regexodus_PerlSubstitution_serialVersionUID;
extern jobject SF_regexodus_PerlSubstitution_refPtn;
extern jint SF_regexodus_PerlSubstitution_MODE_ID;
extern jint SF_regexodus_PerlSubstitution_NAME_ID;
extern jint SF_regexodus_PerlSubstitution_ESC_ID;
extern jint SF_regexodus_PerlSubstitution_MODE_INSENSITIVE;
extern jint SF_regexodus_PerlSubstitution_MODE_REVERSE;
extern jint SF_regexodus_PerlSubstitution_MODE_BRACKET;
extern jint SF_regexodus_PerlSubstitution_MODE_UPPER;
extern jobject SF_regexodus_PerlSubstitution_groupRef;

#define VTABLE_regexodus_PerlSubstitution_hashCode_R_int 0
typedef jint (*func_regexodus_PerlSubstitution_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_PerlSubstitution_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_PerlSubstitution_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_PerlSubstitution_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_PerlSubstitution_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_PerlSubstitution_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution_finalize 5
typedef void (*func_regexodus_PerlSubstitution_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution_notify 6
typedef void (*func_regexodus_PerlSubstitution_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution_notifyAll 7
typedef void (*func_regexodus_PerlSubstitution_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution_wait 8
typedef void (*func_regexodus_PerlSubstitution_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_PerlSubstitution_wait_long 9
typedef void (*func_regexodus_PerlSubstitution_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_PerlSubstitution_wait_long_int 10
typedef void (*func_regexodus_PerlSubstitution_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_PerlSubstitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer 11
typedef void (*func_regexodus_PerlSubstitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_regexodus_PerlSubstitution_value_regexodus_MatchResult_R_java_lang_String 12
typedef jobject (*func_regexodus_PerlSubstitution_value_regexodus_MatchResult_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_regexodus_PerlSubstitution(jobject object, jint mark, jint depth);
void clinit_regexodus_PerlSubstitution(jcontext ctx);
jint SM_regexodus_PerlSubstitution_parseModes_java_lang_String_R_int(jcontext ctx, jobject param0);
void init_regexodus_PerlSubstitution(jcontext ctx, jobject self);
void init_regexodus_PerlSubstitution_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_regexodus_PerlSubstitution_value_regexodus_MatchResult_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject SM_regexodus_PerlSubstitution_makeQueue_regexodus_Matcher_R_regexodus_PerlSubstitution$Element(jcontext ctx, jobject param0);
void M_regexodus_PerlSubstitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_regexodus_PerlSubstitution_toString_R_java_lang_String(jcontext ctx, jobject self);
jbool M_regexodus_PerlSubstitution_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_regexodus_PerlSubstitution_hashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
