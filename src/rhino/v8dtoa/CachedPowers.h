#ifndef HEADER_rhino_v8dtoa_CachedPowers
#define HEADER_rhino_v8dtoa_CachedPowers

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_v8dtoa_CachedPowers {
	java_lang_Object parent;
} rhino_v8dtoa_CachedPowers;

extern Class class_rhino_v8dtoa_CachedPowers;

extern jdouble SF_rhino_v8dtoa_CachedPowers_kD_1_LOG2_10;
extern jint SF_rhino_v8dtoa_CachedPowers_CACHED_POWERS_SPACING;
extern jobject SF_rhino_v8dtoa_CachedPowers_CACHED_POWERS;
extern jint SF_rhino_v8dtoa_CachedPowers_GRISU_CACHE_MAX_DISTANCE;
extern jint SF_rhino_v8dtoa_CachedPowers_GRISU_CACHE_OFFSET;
extern jbool SF_rhino_v8dtoa_CachedPowers_$assertionsDisabled;

#define VTABLE_rhino_v8dtoa_CachedPowers_hashCode_R_int 0
typedef jint (*func_rhino_v8dtoa_CachedPowers_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_CachedPowers_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_v8dtoa_CachedPowers_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_v8dtoa_CachedPowers_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_v8dtoa_CachedPowers_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_CachedPowers_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_v8dtoa_CachedPowers_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_CachedPowers_toString_R_java_lang_String 4
typedef jobject (*func_rhino_v8dtoa_CachedPowers_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_CachedPowers_finalize 5
typedef void (*func_rhino_v8dtoa_CachedPowers_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_CachedPowers_notify 6
typedef void (*func_rhino_v8dtoa_CachedPowers_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_CachedPowers_notifyAll 7
typedef void (*func_rhino_v8dtoa_CachedPowers_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_CachedPowers_wait 8
typedef void (*func_rhino_v8dtoa_CachedPowers_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_CachedPowers_wait_long 9
typedef void (*func_rhino_v8dtoa_CachedPowers_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_v8dtoa_CachedPowers_wait_long_int 10
typedef void (*func_rhino_v8dtoa_CachedPowers_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_v8dtoa_CachedPowers(jobject object, jint mark, jint depth);
void clinit_rhino_v8dtoa_CachedPowers(jcontext ctx);
void init_rhino_v8dtoa_CachedPowers(jcontext ctx, jobject self);
jint SM_rhino_v8dtoa_CachedPowers_getCachedPower_int_int_int_rhino_v8dtoa_DiyFp_R_int(jcontext ctx, jint param0, jint param1, jint param2, jobject param3);

#ifdef __cplusplus
}
#endif

#endif
