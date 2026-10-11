#ifndef HEADER_mindustry_entities_part_RegionPart
#define HEADER_mindustry_entities_part_RegionPart

#include "Clearwing.h"
#include "mindustry/entities/part/DrawPart.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_part_RegionPart {
	mindustry_entities_part_DrawPart parent;
	jref F_childParam;
	jref F_suffix;
	jref F_name;
	jref F_heat;
	jref F_light;
	jref F_regions;
	jref F_outlines;
	jbool F_mirror;
	jbool F_outline;
	jbool F_replaceOutline;
	jbool F_drawRegion;
	jbool F_heatLight;
	jbool F_clampProgress;
	jref F_progress;
	jref F_growProgress;
	jref F_heatProgress;
	jref F_blending;
	jfloat F_layer;
	jfloat F_layerOffset;
	jfloat F_heatLayerOffset;
	jfloat F_turretHeatLayer;
	jfloat F_outlineLayerOffset;
	jfloat F_x;
	jfloat F_y;
	jfloat F_xScl;
	jfloat F_yScl;
	jfloat F_rotation;
	jfloat F_originX;
	jfloat F_originY;
	jfloat F_moveX;
	jfloat F_moveY;
	jfloat F_growX;
	jfloat F_growY;
	jfloat F_moveRot;
	jfloat F_heatLightOpacity;
	jref F_color;
	jref F_colorTo;
	jref F_mixColor;
	jref F_mixColorTo;
	jref F_heatColor;
	jref F_children;
	jref F_moves;
} mindustry_entities_part_RegionPart;

extern Class class_mindustry_entities_part_RegionPart;


#define VTABLE_mindustry_entities_part_RegionPart_hashCode_R_int 0
typedef jint (*func_mindustry_entities_part_RegionPart_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_RegionPart_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_part_RegionPart_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_part_RegionPart_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_part_RegionPart_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_RegionPart_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_part_RegionPart_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_RegionPart_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_part_RegionPart_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_RegionPart_finalize 5
typedef void (*func_mindustry_entities_part_RegionPart_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_RegionPart_notify 6
typedef void (*func_mindustry_entities_part_RegionPart_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_RegionPart_notifyAll 7
typedef void (*func_mindustry_entities_part_RegionPart_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_RegionPart_wait 8
typedef void (*func_mindustry_entities_part_RegionPart_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_RegionPart_wait_long 9
typedef void (*func_mindustry_entities_part_RegionPart_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_part_RegionPart_wait_long_int 10
typedef void (*func_mindustry_entities_part_RegionPart_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_part_RegionPart_draw_mindustry_entities_part_DrawPart$PartParams 11
typedef void (*func_mindustry_entities_part_RegionPart_draw_mindustry_entities_part_DrawPart$PartParams)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_part_RegionPart_load_java_lang_String 12
typedef void (*func_mindustry_entities_part_RegionPart_load_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_part_RegionPart_getOutlines_arc_struct_Seq 13
typedef void (*func_mindustry_entities_part_RegionPart_getOutlines_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_part_RegionPart_rect_arc_graphics_g2d_TextureRegion_float_float_float 14
typedef void (*func_mindustry_entities_part_RegionPart_rect_arc_graphics_g2d_TextureRegion_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);

void mark_mindustry_entities_part_RegionPart(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_part_RegionPart(jcontext ctx);
void init_mindustry_entities_part_RegionPart_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_mindustry_entities_part_RegionPart_java_lang_String_arc_graphics_Blending_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void init_mindustry_entities_part_RegionPart(jcontext ctx, jobject self);
void M_mindustry_entities_part_RegionPart_draw_mindustry_entities_part_DrawPart$PartParams(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_part_RegionPart_rect_arc_graphics_g2d_TextureRegion_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
void M_mindustry_entities_part_RegionPart_load_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_part_RegionPart_getOutlines_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
