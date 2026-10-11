#ifndef HEADER_mindustry_entities_part_EffectSpawnerPart
#define HEADER_mindustry_entities_part_EffectSpawnerPart

#include "Clearwing.h"
#include "mindustry/entities/part/DrawPart.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_part_EffectSpawnerPart {
	mindustry_entities_part_DrawPart parent;
	jfloat F_x;
	jfloat F_y;
	jfloat F_width;
	jfloat F_height;
	jfloat F_rotation;
	jbool F_mirror;
	jfloat F_effectRot;
	jfloat F_effectRandRot;
	jfloat F_effectInterval;
	jfloat F_effectIntervalFrom;
	jfloat F_effectChance;
	jref F_effect;
	jref F_effectColor;
	jbool F_useProgress;
	jref F_progress;
	jbool F_debugDraw;
	jfloat F_effectIntervalState;
} mindustry_entities_part_EffectSpawnerPart;

extern Class class_mindustry_entities_part_EffectSpawnerPart;


#define VTABLE_mindustry_entities_part_EffectSpawnerPart_hashCode_R_int 0
typedef jint (*func_mindustry_entities_part_EffectSpawnerPart_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_EffectSpawnerPart_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_part_EffectSpawnerPart_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_part_EffectSpawnerPart_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_part_EffectSpawnerPart_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_EffectSpawnerPart_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_part_EffectSpawnerPart_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_EffectSpawnerPart_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_part_EffectSpawnerPart_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_EffectSpawnerPart_finalize 5
typedef void (*func_mindustry_entities_part_EffectSpawnerPart_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_EffectSpawnerPart_notify 6
typedef void (*func_mindustry_entities_part_EffectSpawnerPart_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_EffectSpawnerPart_notifyAll 7
typedef void (*func_mindustry_entities_part_EffectSpawnerPart_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_EffectSpawnerPart_wait 8
typedef void (*func_mindustry_entities_part_EffectSpawnerPart_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_EffectSpawnerPart_wait_long 9
typedef void (*func_mindustry_entities_part_EffectSpawnerPart_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_part_EffectSpawnerPart_wait_long_int 10
typedef void (*func_mindustry_entities_part_EffectSpawnerPart_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_part_EffectSpawnerPart_draw_mindustry_entities_part_DrawPart$PartParams 11
typedef void (*func_mindustry_entities_part_EffectSpawnerPart_draw_mindustry_entities_part_DrawPart$PartParams)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_part_EffectSpawnerPart_load_java_lang_String 12
typedef void (*func_mindustry_entities_part_EffectSpawnerPart_load_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_part_EffectSpawnerPart_getOutlines_arc_struct_Seq 13
typedef void (*func_mindustry_entities_part_EffectSpawnerPart_getOutlines_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_entities_part_EffectSpawnerPart(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_part_EffectSpawnerPart(jcontext ctx);
void init_mindustry_entities_part_EffectSpawnerPart(jcontext ctx, jobject self);
void M_mindustry_entities_part_EffectSpawnerPart_draw_mindustry_entities_part_DrawPart$PartParams(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
