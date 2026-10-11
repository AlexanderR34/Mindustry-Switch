#ifndef HEADER_java_lang_reflect_Member
#define HEADER_java_lang_reflect_Member

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_reflect_Member {
	java_lang_Object parent;
} java_lang_reflect_Member;

extern Class class_java_lang_reflect_Member;

extern jint SF_java_lang_reflect_Member_PUBLIC;
extern jint SF_java_lang_reflect_Member_DECLARED;

#define INDEX_java_lang_reflect_Member_getDeclaringClass_R_java_lang_Class 0
typedef jobject (*func_java_lang_reflect_Member_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define INDEX_java_lang_reflect_Member_getName_R_java_lang_String 1
typedef jobject (*func_java_lang_reflect_Member_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_java_lang_reflect_Member_getModifiers_R_int 2
typedef jint (*func_java_lang_reflect_Member_getModifiers_R_int)(jcontext ctx, jobject self);
#define INDEX_java_lang_reflect_Member_isSynthetic_R_boolean 3
typedef jbool (*func_java_lang_reflect_Member_isSynthetic_R_boolean)(jcontext ctx, jobject self);

void mark_java_lang_reflect_Member(jobject object, jint mark, jint depth);
void clinit_java_lang_reflect_Member(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
