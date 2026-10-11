#ifndef HEADER_mindustry_entities_part_HaloPart
#define HEADER_mindustry_entities_part_HaloPart

#include "Clearwing.h"
#include "mindustry/entities/part/DrawPart.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_part_HaloPart {
	mindustry_entities_part_DrawPart parent;
	jbool F_hollow;
	jbool F_tri;
	jint F_shapes;
	jint F_sides;
	jfloat F_radius;
	jfloat F_radiusTo;
	jfloat F_stroke;
	jfloat F_strokeTo;
	jfloat F_triLength;
	jfloat F_triLengthTo;
	jfloat F_haloRadius;
	jfloat F_haloRadiusTo;
	jfloat F_x;
	jfloat F_y;
	jfloat F_shapeRotation;
	jfloat F_moveX;
	jfloat F_moveY;
	jfloat F_shapeMoveRot;
	jfloat F_haloRotateSpeed;
	jfloat F_haloRotation;
	jfloat F_rotateSpeed;
	jref F_color;
	jref F_colorTo;
	jbool F_mirror;
	jbool F_clampProgress;
	jref F_progress;
	jfloat F_layer;
	jfloat F_layerOffset;
} mindustry_entities_part_HaloPart;

extern Class class_mindustry_entities_part_HaloPart;


#define VTABLE_mindustry_entities_part_HaloPart_hashCode_R_int 0
typedef jint (*func_mindustry_entities_part_HaloPart_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_HaloPart_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_part_HaloPart_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_part_HaloPart_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_part_HaloPart_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_HaloPart_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_part_HaloPart_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_HaloPart_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_part_HaloPart_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_HaloPart_finalize 5
typedef void (*func_mindustry_entities_part_HaloPart_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_HaloPart_notify 6
typedef void (*func_mindustry_entities_part_HaloPart_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_HaloPart_notifyAll 7
typedef void (*func_mindustry_entities_part_HaloPart_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_HaloPart_wait 8
typedef void (*func_mindustry_entities_part_HaloPart_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_HaloPart_wait_long 9
typedef void (*func_mindustry_entities_part_HaloPart_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_part_HaloPart_wait_long_int 10
typedef void (*func_mindustry_entities_part_HaloPart_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_part_HaloPart_draw_mindustry_entities_part_DrawPart$PartParams 11
typedef void (*func_mindustry_entities_part_HaloPart_draw_mindustry_entities_part_DrawPart$PartParams)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_part_HaloPart_load_java_lang_String 12
typedef void (*func_mindustry_entities_part_HaloPart_load_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_part_HaloPart_getOutlines_arc_struct_Seq 13
typedef void (*func_mindustry_entities_part_HaloPart_getOutlines_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_entities_part_HaloPart(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_part_HaloPart(jcontext ctx);
void init_mindustry_entities_part_HaloPart(jcontext ctx, jobject self);
void M_mindustry_entities_part_HaloPart_draw_mindustry_entities_part_DrawPart$PartParams(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_part_HaloPart_load_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
