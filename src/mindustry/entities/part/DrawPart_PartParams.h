#ifndef HEADER_mindustry_entities_part_DrawPart$PartParams
#define HEADER_mindustry_entities_part_DrawPart$PartParams

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_part_DrawPart$PartParams {
	java_lang_Object parent;
	jfloat F_warmup;
	jfloat F_reload;
	jfloat F_smoothReload;
	jfloat F_heat;
	jfloat F_recoil;
	jfloat F_life;
	jfloat F_charge;
	jfloat F_x;
	jfloat F_y;
	jfloat F_rotation;
	jint F_sideOverride;
	jint F_sideMultiplier;
} mindustry_entities_part_DrawPart$PartParams;

extern Class class_mindustry_entities_part_DrawPart$PartParams;


#define VTABLE_mindustry_entities_part_DrawPart$PartParams_hashCode_R_int 0
typedef jint (*func_mindustry_entities_part_DrawPart$PartParams_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart$PartParams_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_part_DrawPart$PartParams_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_part_DrawPart$PartParams_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_part_DrawPart$PartParams_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart$PartParams_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_part_DrawPart$PartParams_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart$PartParams_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_part_DrawPart$PartParams_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart$PartParams_finalize 5
typedef void (*func_mindustry_entities_part_DrawPart$PartParams_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart$PartParams_notify 6
typedef void (*func_mindustry_entities_part_DrawPart$PartParams_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart$PartParams_notifyAll 7
typedef void (*func_mindustry_entities_part_DrawPart$PartParams_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart$PartParams_wait 8
typedef void (*func_mindustry_entities_part_DrawPart$PartParams_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart$PartParams_wait_long 9
typedef void (*func_mindustry_entities_part_DrawPart$PartParams_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_part_DrawPart$PartParams_wait_long_int 10
typedef void (*func_mindustry_entities_part_DrawPart$PartParams_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_part_DrawPart$PartParams_set_float_float_float_float_float_float_float_float_float_R_mindustry_entities_part_DrawPart$PartParams 11
typedef jobject (*func_mindustry_entities_part_DrawPart$PartParams_set_float_float_float_float_float_float_float_float_float_R_mindustry_entities_part_DrawPart$PartParams)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8);
#define VTABLE_mindustry_entities_part_DrawPart$PartParams_setRecoil_float_R_mindustry_entities_part_DrawPart$PartParams 12
typedef jobject (*func_mindustry_entities_part_DrawPart$PartParams_setRecoil_float_R_mindustry_entities_part_DrawPart$PartParams)(jcontext ctx, jobject self, jfloat param0);

void mark_mindustry_entities_part_DrawPart$PartParams(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_part_DrawPart$PartParams(jcontext ctx);
void init_mindustry_entities_part_DrawPart$PartParams(jcontext ctx, jobject self);
jobject M_mindustry_entities_part_DrawPart$PartParams_set_float_float_float_float_float_float_float_float_float_R_mindustry_entities_part_DrawPart$PartParams(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8);
jobject M_mindustry_entities_part_DrawPart$PartParams_setRecoil_float_R_mindustry_entities_part_DrawPart$PartParams(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
