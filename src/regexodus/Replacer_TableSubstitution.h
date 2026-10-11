#ifndef HEADER_regexodus_Replacer$TableSubstitution
#define HEADER_regexodus_Replacer$TableSubstitution

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "regexodus/Substitution.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_Replacer$TableSubstitution {
	java_lang_Object parent;
	jref F_dictionary;
} regexodus_Replacer$TableSubstitution;

extern Class class_regexodus_Replacer$TableSubstitution;


#define VTABLE_regexodus_Replacer$TableSubstitution_hashCode_R_int 0
typedef jint (*func_regexodus_Replacer$TableSubstitution_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$TableSubstitution_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_Replacer$TableSubstitution_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Replacer$TableSubstitution_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_Replacer$TableSubstitution_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$TableSubstitution_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_Replacer$TableSubstitution_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$TableSubstitution_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_Replacer$TableSubstitution_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$TableSubstitution_finalize 5
typedef void (*func_regexodus_Replacer$TableSubstitution_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$TableSubstitution_notify 6
typedef void (*func_regexodus_Replacer$TableSubstitution_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$TableSubstitution_notifyAll 7
typedef void (*func_regexodus_Replacer$TableSubstitution_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$TableSubstitution_wait 8
typedef void (*func_regexodus_Replacer$TableSubstitution_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$TableSubstitution_wait_long 9
typedef void (*func_regexodus_Replacer$TableSubstitution_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_Replacer$TableSubstitution_wait_long_int 10
typedef void (*func_regexodus_Replacer$TableSubstitution_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_Replacer$TableSubstitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer 11
typedef void (*func_regexodus_Replacer$TableSubstitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_regexodus_Replacer$TableSubstitution(jobject object, jint mark, jint depth);
void clinit_regexodus_Replacer$TableSubstitution(jcontext ctx);
void init_regexodus_Replacer$TableSubstitution_java_util_LinkedHashMap(jcontext ctx, jobject self, jobject param0);
void init_regexodus_Replacer$TableSubstitution_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_regexodus_Replacer$TableSubstitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
