#ifndef HEADER_rhino_v8dtoa_CachedPowers$CachedPower
#define HEADER_rhino_v8dtoa_CachedPowers$CachedPower

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_v8dtoa_CachedPowers$CachedPower {
	java_lang_Object parent;
	jlong F_significand;
	jshort F_binaryExponent;
	jshort F_decimalExponent;
} rhino_v8dtoa_CachedPowers$CachedPower;

extern Class class_rhino_v8dtoa_CachedPowers$CachedPower;


#define VTABLE_rhino_v8dtoa_CachedPowers$CachedPower_hashCode_R_int 0
typedef jint (*func_rhino_v8dtoa_CachedPowers$CachedPower_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_CachedPowers$CachedPower_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_v8dtoa_CachedPowers$CachedPower_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_v8dtoa_CachedPowers$CachedPower_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_v8dtoa_CachedPowers$CachedPower_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_CachedPowers$CachedPower_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_v8dtoa_CachedPowers$CachedPower_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_CachedPowers$CachedPower_toString_R_java_lang_String 4
typedef jobject (*func_rhino_v8dtoa_CachedPowers$CachedPower_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_CachedPowers$CachedPower_finalize 5
typedef void (*func_rhino_v8dtoa_CachedPowers$CachedPower_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_CachedPowers$CachedPower_notify 6
typedef void (*func_rhino_v8dtoa_CachedPowers$CachedPower_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_CachedPowers$CachedPower_notifyAll 7
typedef void (*func_rhino_v8dtoa_CachedPowers$CachedPower_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_CachedPowers$CachedPower_wait 8
typedef void (*func_rhino_v8dtoa_CachedPowers$CachedPower_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_CachedPowers$CachedPower_wait_long 9
typedef void (*func_rhino_v8dtoa_CachedPowers$CachedPower_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_v8dtoa_CachedPowers$CachedPower_wait_long_int 10
typedef void (*func_rhino_v8dtoa_CachedPowers$CachedPower_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_v8dtoa_CachedPowers$CachedPower(jobject object, jint mark, jint depth);
void clinit_rhino_v8dtoa_CachedPowers$CachedPower(jcontext ctx);
void init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(jcontext ctx, jobject self, jlong param0, jshort param1, jshort param2);

#ifdef __cplusplus
}
#endif

#endif
