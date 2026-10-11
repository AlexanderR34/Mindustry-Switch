#ifndef HEADER_java_util_StringTokenizer
#define HEADER_java_util_StringTokenizer

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Enumeration.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_StringTokenizer {
	java_lang_Object parent;
	jref F_string;
	jref F_delimiters;
	jbool F_returnDelimiters;
	jint F_position;
} java_util_StringTokenizer;

extern Class class_java_util_StringTokenizer;


#define VTABLE_java_util_StringTokenizer_hashCode_R_int 0
typedef jint (*func_java_util_StringTokenizer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_StringTokenizer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_StringTokenizer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_StringTokenizer_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_StringTokenizer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_StringTokenizer_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_StringTokenizer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_StringTokenizer_toString_R_java_lang_String 4
typedef jobject (*func_java_util_StringTokenizer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_StringTokenizer_finalize 5
typedef void (*func_java_util_StringTokenizer_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_StringTokenizer_notify 6
typedef void (*func_java_util_StringTokenizer_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_StringTokenizer_notifyAll 7
typedef void (*func_java_util_StringTokenizer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_StringTokenizer_wait 8
typedef void (*func_java_util_StringTokenizer_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_StringTokenizer_wait_long 9
typedef void (*func_java_util_StringTokenizer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_StringTokenizer_wait_long_int 10
typedef void (*func_java_util_StringTokenizer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_StringTokenizer_hasMoreElements_R_boolean 11
typedef jbool (*func_java_util_StringTokenizer_hasMoreElements_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_StringTokenizer_nextElement_R_java_lang_Object 12
typedef jobject (*func_java_util_StringTokenizer_nextElement_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_StringTokenizer_countTokens_R_int 13
typedef jint (*func_java_util_StringTokenizer_countTokens_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_StringTokenizer_hasMoreTokens_R_boolean 14
typedef jbool (*func_java_util_StringTokenizer_hasMoreTokens_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String 15
typedef jobject (*func_java_util_StringTokenizer_nextToken_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_StringTokenizer_nextToken_java_lang_String_R_java_lang_String 16
typedef jobject (*func_java_util_StringTokenizer_nextToken_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_StringTokenizer(jobject object, jint mark, jint depth);
void clinit_java_util_StringTokenizer(jcontext ctx);
void init_java_util_StringTokenizer_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_java_util_StringTokenizer_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_util_StringTokenizer_java_lang_String_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
jint M_java_util_StringTokenizer_countTokens_R_int(jcontext ctx, jobject self);
jbool M_java_util_StringTokenizer_hasMoreElements_R_boolean(jcontext ctx, jobject self);
jbool M_java_util_StringTokenizer_hasMoreTokens_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_StringTokenizer_nextElement_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_StringTokenizer_nextToken_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_util_StringTokenizer_nextToken_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
