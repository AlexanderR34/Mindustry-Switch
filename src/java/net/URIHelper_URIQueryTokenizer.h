#ifndef HEADER_java_net_URIHelper$URIQueryTokenizer
#define HEADER_java_net_URIHelper$URIQueryTokenizer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_URIHelper$URIQueryTokenizer {
	java_lang_Object parent;
	jref F_source;
	jint F_index;
} java_net_URIHelper$URIQueryTokenizer;

extern Class class_java_net_URIHelper$URIQueryTokenizer;


#define VTABLE_java_net_URIHelper$URIQueryTokenizer_hashCode_R_int 0
typedef jint (*func_java_net_URIHelper$URIQueryTokenizer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper$URIQueryTokenizer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_URIHelper$URIQueryTokenizer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URIHelper$URIQueryTokenizer_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_URIHelper$URIQueryTokenizer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper$URIQueryTokenizer_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_URIHelper$URIQueryTokenizer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper$URIQueryTokenizer_toString_R_java_lang_String 4
typedef jobject (*func_java_net_URIHelper$URIQueryTokenizer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper$URIQueryTokenizer_finalize 5
typedef void (*func_java_net_URIHelper$URIQueryTokenizer_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper$URIQueryTokenizer_notify 6
typedef void (*func_java_net_URIHelper$URIQueryTokenizer_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper$URIQueryTokenizer_notifyAll 7
typedef void (*func_java_net_URIHelper$URIQueryTokenizer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper$URIQueryTokenizer_wait 8
typedef void (*func_java_net_URIHelper$URIQueryTokenizer_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper$URIQueryTokenizer_wait_long 9
typedef void (*func_java_net_URIHelper$URIQueryTokenizer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_URIHelper$URIQueryTokenizer_wait_long_int 10
typedef void (*func_java_net_URIHelper$URIQueryTokenizer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_net_URIHelper$URIQueryTokenizer_hasMoreTokens_R_boolean 11
typedef jbool (*func_java_net_URIHelper$URIQueryTokenizer_hasMoreTokens_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper$URIQueryTokenizer_nextToken_R_java_lang_String 12
typedef jobject (*func_java_net_URIHelper$URIQueryTokenizer_nextToken_R_java_lang_String)(jcontext ctx, jobject self);

void mark_java_net_URIHelper$URIQueryTokenizer(jobject object, jint mark, jint depth);
void clinit_java_net_URIHelper$URIQueryTokenizer(jcontext ctx);
void init_java_net_URIHelper$URIQueryTokenizer_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbool M_java_net_URIHelper$URIQueryTokenizer_hasMoreTokens_R_boolean(jcontext ctx, jobject self);
jobject M_java_net_URIHelper$URIQueryTokenizer_nextToken_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
