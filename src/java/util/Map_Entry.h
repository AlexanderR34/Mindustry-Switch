#ifndef HEADER_java_util_Map$Entry
#define HEADER_java_util_Map$Entry

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Map$Entry {
	java_lang_Object parent;
} java_util_Map$Entry;

extern Class class_java_util_Map$Entry;


#define INDEX_java_util_Map$Entry_equals_java_lang_Object_R_boolean 0
typedef jbool (*func_java_util_Map$Entry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Map$Entry_getKey_R_java_lang_Object 1
typedef jobject (*func_java_util_Map$Entry_getKey_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_Map$Entry_getValue_R_java_lang_Object 2
typedef jobject (*func_java_util_Map$Entry_getValue_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_Map$Entry_hashCode_R_int 3
typedef jint (*func_java_util_Map$Entry_hashCode_R_int)(jcontext ctx, jobject self);
#define INDEX_java_util_Map$Entry_setValue_java_lang_Object_R_java_lang_Object 4
typedef jobject (*func_java_util_Map$Entry_setValue_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_Map$Entry(jobject object, jint mark, jint depth);
void clinit_java_util_Map$Entry(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
