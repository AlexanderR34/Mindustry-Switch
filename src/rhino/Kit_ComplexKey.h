#ifndef HEADER_rhino_Kit$ComplexKey
#define HEADER_rhino_Kit$ComplexKey

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Kit$ComplexKey {
	java_lang_Object parent;
	jref F_key1;
	jref F_key2;
	jint F_hash;
} rhino_Kit$ComplexKey;

extern Class class_rhino_Kit$ComplexKey;


#define VTABLE_rhino_Kit$ComplexKey_hashCode_R_int 0
typedef jint (*func_rhino_Kit$ComplexKey_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Kit$ComplexKey_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_Kit$ComplexKey_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Kit$ComplexKey_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_Kit$ComplexKey_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Kit$ComplexKey_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_Kit$ComplexKey_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_Kit$ComplexKey_toString_R_java_lang_String 4
typedef jobject (*func_rhino_Kit$ComplexKey_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Kit$ComplexKey_finalize 5
typedef void (*func_rhino_Kit$ComplexKey_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_Kit$ComplexKey_notify 6
typedef void (*func_rhino_Kit$ComplexKey_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_Kit$ComplexKey_notifyAll 7
typedef void (*func_rhino_Kit$ComplexKey_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_Kit$ComplexKey_wait 8
typedef void (*func_rhino_Kit$ComplexKey_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_Kit$ComplexKey_wait_long 9
typedef void (*func_rhino_Kit$ComplexKey_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_Kit$ComplexKey_wait_long_int 10
typedef void (*func_rhino_Kit$ComplexKey_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_Kit$ComplexKey(jobject object, jint mark, jint depth);
void clinit_rhino_Kit$ComplexKey(jcontext ctx);
void init_rhino_Kit$ComplexKey_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_rhino_Kit$ComplexKey_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_rhino_Kit$ComplexKey_hashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
