#ifndef HEADER_mindustry_entities_comp_TimedComp
#define HEADER_mindustry_entities_comp_TimedComp

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"
#include "arc/math/Scaled.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_comp_TimedComp {
	java_lang_Object parent;
	jfloat F_time;
	jfloat F_lifetime;
} mindustry_entities_comp_TimedComp;

extern Class class_mindustry_entities_comp_TimedComp;


#define VTABLE_mindustry_entities_comp_TimedComp_hashCode_R_int 0
typedef jint (*func_mindustry_entities_comp_TimedComp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_comp_TimedComp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TimedComp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_comp_TimedComp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_comp_TimedComp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_comp_TimedComp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_finalize 5
typedef void (*func_mindustry_entities_comp_TimedComp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_notify 6
typedef void (*func_mindustry_entities_comp_TimedComp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_notifyAll 7
typedef void (*func_mindustry_entities_comp_TimedComp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_wait 8
typedef void (*func_mindustry_entities_comp_TimedComp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_wait_long 9
typedef void (*func_mindustry_entities_comp_TimedComp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_TimedComp_wait_long_int 10
typedef void (*func_mindustry_entities_comp_TimedComp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_comp_TimedComp_self_R_mindustry_gen_Entityc 11
typedef jobject (*func_mindustry_entities_comp_TimedComp_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_as_R_java_lang_Object 12
typedef jobject (*func_mindustry_entities_comp_TimedComp_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_isAdded_R_boolean 13
typedef jbool (*func_mindustry_entities_comp_TimedComp_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_isLocal_R_boolean 14
typedef jbool (*func_mindustry_entities_comp_TimedComp_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_isRemote_R_boolean 15
typedef jbool (*func_mindustry_entities_comp_TimedComp_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_serialize_R_boolean 16
typedef jbool (*func_mindustry_entities_comp_TimedComp_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_classId_R_int 17
typedef jint (*func_mindustry_entities_comp_TimedComp_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_id_R_int 18
typedef jint (*func_mindustry_entities_comp_TimedComp_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_add 19
typedef void (*func_mindustry_entities_comp_TimedComp_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_afterRead 20
typedef void (*func_mindustry_entities_comp_TimedComp_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_afterReadAll 21
typedef void (*func_mindustry_entities_comp_TimedComp_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_beforeWrite 22
typedef void (*func_mindustry_entities_comp_TimedComp_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_id_int 23
typedef void (*func_mindustry_entities_comp_TimedComp_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_comp_TimedComp_read_arc_util_io_Reads 24
typedef void (*func_mindustry_entities_comp_TimedComp_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TimedComp_remove 25
typedef void (*func_mindustry_entities_comp_TimedComp_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_update 26
typedef void (*func_mindustry_entities_comp_TimedComp_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_write_arc_util_io_Writes 27
typedef void (*func_mindustry_entities_comp_TimedComp_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TimedComp_fin_R_float 28
typedef jfloat (*func_mindustry_entities_comp_TimedComp_fin_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_fout_R_float 29
typedef jfloat (*func_mindustry_entities_comp_TimedComp_fout_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_fout_arc_math_Interp_R_float 30
typedef jfloat (*func_mindustry_entities_comp_TimedComp_fout_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TimedComp_fout_float_R_float 31
typedef jfloat (*func_mindustry_entities_comp_TimedComp_fout_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_TimedComp_fin_arc_math_Interp_R_float 32
typedef jfloat (*func_mindustry_entities_comp_TimedComp_fin_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TimedComp_finpow_R_float 33
typedef jfloat (*func_mindustry_entities_comp_TimedComp_finpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_foutpow_R_float 34
typedef jfloat (*func_mindustry_entities_comp_TimedComp_foutpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_finpowdown_R_float 35
typedef jfloat (*func_mindustry_entities_comp_TimedComp_finpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_foutpowdown_R_float 36
typedef jfloat (*func_mindustry_entities_comp_TimedComp_foutpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedComp_fslope_R_float 37
typedef jfloat (*func_mindustry_entities_comp_TimedComp_fslope_R_float)(jcontext ctx, jobject self);

void mark_mindustry_entities_comp_TimedComp(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_comp_TimedComp(jcontext ctx);
void init_mindustry_entities_comp_TimedComp(jcontext ctx, jobject self);
void M_mindustry_entities_comp_TimedComp_update(jcontext ctx, jobject self);
jfloat M_mindustry_entities_comp_TimedComp_fin_R_float(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
