#ifndef HEADER_mindustry_gen_EffectStatec
#define HEADER_mindustry_gen_EffectStatec

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Childc.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Timedc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_EffectStatec {
	java_lang_Object parent;
} mindustry_gen_EffectStatec;

extern Class class_mindustry_gen_EffectStatec;


#define INDEX_mindustry_gen_EffectStatec_color_R_arc_graphics_Color 0
typedef jobject (*func_mindustry_gen_EffectStatec_color_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_EffectStatec_clipSize_R_float 1
typedef jfloat (*func_mindustry_gen_EffectStatec_clipSize_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_EffectStatec_data_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_EffectStatec_data_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_EffectStatec_effect_R_mindustry_entities_Effect 3
typedef jobject (*func_mindustry_gen_EffectStatec_effect_R_mindustry_entities_Effect)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_EffectStatec_color_arc_graphics_Color 4
typedef void (*func_mindustry_gen_EffectStatec_color_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_EffectStatec_data_java_lang_Object 5
typedef void (*func_mindustry_gen_EffectStatec_data_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_EffectStatec_draw 6
typedef void (*func_mindustry_gen_EffectStatec_draw)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_EffectStatec_effect_mindustry_entities_Effect 7
typedef void (*func_mindustry_gen_EffectStatec_effect_mindustry_entities_Effect)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_gen_EffectStatec(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_EffectStatec(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
