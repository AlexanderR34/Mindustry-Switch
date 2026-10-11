#ifndef HEADER_rhino_v8dtoa_DiyFp
#define HEADER_rhino_v8dtoa_DiyFp

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_v8dtoa_DiyFp {
	java_lang_Object parent;
	jlong F_f;
	jint F_e;
} rhino_v8dtoa_DiyFp;

extern Class class_rhino_v8dtoa_DiyFp;

extern jint SF_rhino_v8dtoa_DiyFp_kSignificandSize;
extern jlong SF_rhino_v8dtoa_DiyFp_kUint64MSB;
extern jbool SF_rhino_v8dtoa_DiyFp_$assertionsDisabled;

#define VTABLE_rhino_v8dtoa_DiyFp_hashCode_R_int 0
typedef jint (*func_rhino_v8dtoa_DiyFp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DiyFp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_v8dtoa_DiyFp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_v8dtoa_DiyFp_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_v8dtoa_DiyFp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DiyFp_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_v8dtoa_DiyFp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DiyFp_toString_R_java_lang_String 4
typedef jobject (*func_rhino_v8dtoa_DiyFp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DiyFp_finalize 5
typedef void (*func_rhino_v8dtoa_DiyFp_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DiyFp_notify 6
typedef void (*func_rhino_v8dtoa_DiyFp_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DiyFp_notifyAll 7
typedef void (*func_rhino_v8dtoa_DiyFp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DiyFp_wait 8
typedef void (*func_rhino_v8dtoa_DiyFp_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DiyFp_wait_long 9
typedef void (*func_rhino_v8dtoa_DiyFp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_v8dtoa_DiyFp_wait_long_int 10
typedef void (*func_rhino_v8dtoa_DiyFp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_v8dtoa_DiyFp_subtract_rhino_v8dtoa_DiyFp 11
typedef void (*func_rhino_v8dtoa_DiyFp_subtract_rhino_v8dtoa_DiyFp)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_v8dtoa_DiyFp_multiply_rhino_v8dtoa_DiyFp 12
typedef void (*func_rhino_v8dtoa_DiyFp_multiply_rhino_v8dtoa_DiyFp)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_v8dtoa_DiyFp_normalize 13
typedef void (*func_rhino_v8dtoa_DiyFp_normalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DiyFp_f_R_long 14
typedef jlong (*func_rhino_v8dtoa_DiyFp_f_R_long)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DiyFp_e_R_int 15
typedef jint (*func_rhino_v8dtoa_DiyFp_e_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DiyFp_setF_long 16
typedef void (*func_rhino_v8dtoa_DiyFp_setF_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_v8dtoa_DiyFp_setE_int 17
typedef void (*func_rhino_v8dtoa_DiyFp_setE_int)(jcontext ctx, jobject self, jint param0);

void mark_rhino_v8dtoa_DiyFp(jobject object, jint mark, jint depth);
void clinit_rhino_v8dtoa_DiyFp(jcontext ctx);
void init_rhino_v8dtoa_DiyFp(jcontext ctx, jobject self);
void init_rhino_v8dtoa_DiyFp_long_int(jcontext ctx, jobject self, jlong param0, jint param1);
jbool SM_rhino_v8dtoa_DiyFp_uint64_gte_long_long_R_boolean(jcontext ctx, jlong param0, jlong param1);
void M_rhino_v8dtoa_DiyFp_subtract_rhino_v8dtoa_DiyFp(jcontext ctx, jobject self, jobject param0);
jobject SM_rhino_v8dtoa_DiyFp_minus_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp_R_rhino_v8dtoa_DiyFp(jcontext ctx, jobject param0, jobject param1);
void M_rhino_v8dtoa_DiyFp_multiply_rhino_v8dtoa_DiyFp(jcontext ctx, jobject self, jobject param0);
jobject SM_rhino_v8dtoa_DiyFp_times_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp_R_rhino_v8dtoa_DiyFp(jcontext ctx, jobject param0, jobject param1);
void M_rhino_v8dtoa_DiyFp_normalize(jcontext ctx, jobject self);
jobject SM_rhino_v8dtoa_DiyFp_normalize_rhino_v8dtoa_DiyFp_R_rhino_v8dtoa_DiyFp(jcontext ctx, jobject param0);
jlong M_rhino_v8dtoa_DiyFp_f_R_long(jcontext ctx, jobject self);
jint M_rhino_v8dtoa_DiyFp_e_R_int(jcontext ctx, jobject self);
void M_rhino_v8dtoa_DiyFp_setF_long(jcontext ctx, jobject self, jlong param0);
void M_rhino_v8dtoa_DiyFp_setE_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_v8dtoa_DiyFp_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
