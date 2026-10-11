#ifndef HEADER_rhino_SymbolKey
#define HEADER_rhino_SymbolKey

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "rhino/Symbol.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_SymbolKey {
	java_lang_Object parent;
	jref F_name;
} rhino_SymbolKey;

extern Class class_rhino_SymbolKey;

extern jobject SF_rhino_SymbolKey_ITERATOR;
extern jobject SF_rhino_SymbolKey_TO_STRING_TAG;
extern jobject SF_rhino_SymbolKey_SPECIES;
extern jobject SF_rhino_SymbolKey_HAS_INSTANCE;
extern jobject SF_rhino_SymbolKey_IS_CONCAT_SPREADABLE;
extern jobject SF_rhino_SymbolKey_IS_REGEXP;
extern jobject SF_rhino_SymbolKey_TO_PRIMITIVE;
extern jobject SF_rhino_SymbolKey_MATCH;
extern jobject SF_rhino_SymbolKey_REPLACE;
extern jobject SF_rhino_SymbolKey_SEARCH;
extern jobject SF_rhino_SymbolKey_SPLIT;
extern jobject SF_rhino_SymbolKey_UNSCOPABLES;

#define VTABLE_rhino_SymbolKey_hashCode_R_int 0
typedef jint (*func_rhino_SymbolKey_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_SymbolKey_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_SymbolKey_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_SymbolKey_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_SymbolKey_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_SymbolKey_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_SymbolKey_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_SymbolKey_toString_R_java_lang_String 4
typedef jobject (*func_rhino_SymbolKey_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_SymbolKey_finalize 5
typedef void (*func_rhino_SymbolKey_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_SymbolKey_notify 6
typedef void (*func_rhino_SymbolKey_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_SymbolKey_notifyAll 7
typedef void (*func_rhino_SymbolKey_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_SymbolKey_wait 8
typedef void (*func_rhino_SymbolKey_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_SymbolKey_wait_long 9
typedef void (*func_rhino_SymbolKey_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_SymbolKey_wait_long_int 10
typedef void (*func_rhino_SymbolKey_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_SymbolKey_getName_R_java_lang_String 11
typedef jobject (*func_rhino_SymbolKey_getName_R_java_lang_String)(jcontext ctx, jobject self);

void mark_rhino_SymbolKey(jobject object, jint mark, jint depth);
void clinit_rhino_SymbolKey(jcontext ctx);
void init_rhino_SymbolKey_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_SymbolKey_getName_R_java_lang_String(jcontext ctx, jobject self);
jint M_rhino_SymbolKey_hashCode_R_int(jcontext ctx, jobject self);
jbool M_rhino_SymbolKey_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_SymbolKey_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
