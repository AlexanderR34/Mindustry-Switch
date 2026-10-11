#ifndef HEADER_mindustry_content_Blocks$321$2$8
#define HEADER_mindustry_content_Blocks$321$2$8

#include "Clearwing.h"
#include "mindustry/entities/part/RegionPart.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_Blocks$321$2$8 {
	mindustry_entities_part_RegionPart parent;
	jref F_val$heatCol;
	jref F_this$1;
} mindustry_content_Blocks$321$2$8;

extern Class class_mindustry_content_Blocks$321$2$8;


#define VTABLE_mindustry_content_Blocks$321$2$8_hashCode_R_int 0
typedef jint (*func_mindustry_content_Blocks$321$2$8_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2$8_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_Blocks$321$2$8_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$2$8_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_Blocks$321$2$8_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2$8_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_Blocks$321$2$8_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2$8_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_Blocks$321$2$8_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2$8_finalize 5
typedef void (*func_mindustry_content_Blocks$321$2$8_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2$8_notify 6
typedef void (*func_mindustry_content_Blocks$321$2$8_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2$8_notifyAll 7
typedef void (*func_mindustry_content_Blocks$321$2$8_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2$8_wait 8
typedef void (*func_mindustry_content_Blocks$321$2$8_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2$8_wait_long 9
typedef void (*func_mindustry_content_Blocks$321$2$8_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_Blocks$321$2$8_wait_long_int 10
typedef void (*func_mindustry_content_Blocks$321$2$8_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_content_Blocks$321$2$8_draw_mindustry_entities_part_DrawPart$PartParams 11
typedef void (*func_mindustry_content_Blocks$321$2$8_draw_mindustry_entities_part_DrawPart$PartParams)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$2$8_load_java_lang_String 12
typedef void (*func_mindustry_content_Blocks$321$2$8_load_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$2$8_getOutlines_arc_struct_Seq 13
typedef void (*func_mindustry_content_Blocks$321$2$8_getOutlines_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$2$8_rect_arc_graphics_g2d_TextureRegion_float_float_float 14
typedef void (*func_mindustry_content_Blocks$321$2$8_rect_arc_graphics_g2d_TextureRegion_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);

void mark_mindustry_content_Blocks$321$2$8(jobject object, jint mark, jint depth);
void clinit_mindustry_content_Blocks$321$2$8(jcontext ctx);
void init_mindustry_content_Blocks$321$2$8_mindustry_content_Blocks$321$2_java_lang_String_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
