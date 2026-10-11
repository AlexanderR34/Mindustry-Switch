#ifndef HEADER_mindustry_entities_part_FlarePart
#define HEADER_mindustry_entities_part_FlarePart

#include "Clearwing.h"
#include "mindustry/entities/part/DrawPart.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_part_FlarePart {
	mindustry_entities_part_DrawPart parent;
	jint F_sides;
	jfloat F_radius;
	jfloat F_radiusTo;
	jfloat F_stroke;
	jfloat F_innerScl;
	jfloat F_innerRadScl;
	jfloat F_x;
	jfloat F_y;
	jfloat F_rotation;
	jfloat F_rotMove;
	jfloat F_spinSpeed;
	jbool F_followRotation;
	jref F_color1;
	jref F_color2;
	jbool F_clampProgress;
	jref F_progress;
	jfloat F_layer;
} mindustry_entities_part_FlarePart;

extern Class class_mindustry_entities_part_FlarePart;


#define VTABLE_mindustry_entities_part_FlarePart_hashCode_R_int 0
typedef jint (*func_mindustry_entities_part_FlarePart_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_FlarePart_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_part_FlarePart_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_part_FlarePart_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_part_FlarePart_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_FlarePart_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_part_FlarePart_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_FlarePart_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_part_FlarePart_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_FlarePart_finalize 5
typedef void (*func_mindustry_entities_part_FlarePart_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_FlarePart_notify 6
typedef void (*func_mindustry_entities_part_FlarePart_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_FlarePart_notifyAll 7
typedef void (*func_mindustry_entities_part_FlarePart_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_FlarePart_wait 8
typedef void (*func_mindustry_entities_part_FlarePart_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_FlarePart_wait_long 9
typedef void (*func_mindustry_entities_part_FlarePart_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_part_FlarePart_wait_long_int 10
typedef void (*func_mindustry_entities_part_FlarePart_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_part_FlarePart_draw_mindustry_entities_part_DrawPart$PartParams 11
typedef void (*func_mindustry_entities_part_FlarePart_draw_mindustry_entities_part_DrawPart$PartParams)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_part_FlarePart_load_java_lang_String 12
typedef void (*func_mindustry_entities_part_FlarePart_load_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_part_FlarePart_getOutlines_arc_struct_Seq 13
typedef void (*func_mindustry_entities_part_FlarePart_getOutlines_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_entities_part_FlarePart(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_part_FlarePart(jcontext ctx);
void init_mindustry_entities_part_FlarePart(jcontext ctx, jobject self);
void M_mindustry_entities_part_FlarePart_draw_mindustry_entities_part_DrawPart$PartParams(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_part_FlarePart_load_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
