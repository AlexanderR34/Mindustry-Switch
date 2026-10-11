#ifndef HEADER_mindustry_gen_Decalc
#define HEADER_mindustry_gen_Decalc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Timedc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Decalc {
	java_lang_Object parent;
} mindustry_gen_Decalc;

extern Class class_mindustry_gen_Decalc;


#define INDEX_mindustry_gen_Decalc_color_R_arc_graphics_Color 0
typedef jobject (*func_mindustry_gen_Decalc_color_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Decalc_region_R_arc_graphics_g2d_TextureRegion 1
typedef jobject (*func_mindustry_gen_Decalc_region_R_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Decalc_clipSize_R_float 2
typedef jfloat (*func_mindustry_gen_Decalc_clipSize_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Decalc_color_arc_graphics_Color 3
typedef void (*func_mindustry_gen_Decalc_color_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Decalc_draw 4
typedef void (*func_mindustry_gen_Decalc_draw)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Decalc_region_arc_graphics_g2d_TextureRegion 5
typedef void (*func_mindustry_gen_Decalc_region_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_gen_Decalc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Decalc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
