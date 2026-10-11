#ifndef HEADER_mindustry_content_Blocks$317$2$1
#define HEADER_mindustry_content_Blocks$317$2$1

#include "Clearwing.h"
#include "mindustry/entities/part/RegionPart.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_Blocks$317$2$1 {
	mindustry_entities_part_RegionPart parent;
	jref F_this$1;
} mindustry_content_Blocks$317$2$1;

extern Class class_mindustry_content_Blocks$317$2$1;


#define VTABLE_mindustry_content_Blocks$317$2$1_hashCode_R_int 0
typedef jint (*func_mindustry_content_Blocks$317$2$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$317$2$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_Blocks$317$2$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$317$2$1_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_Blocks$317$2$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$317$2$1_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_Blocks$317$2$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$317$2$1_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_Blocks$317$2$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$317$2$1_finalize 5
typedef void (*func_mindustry_content_Blocks$317$2$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$317$2$1_notify 6
typedef void (*func_mindustry_content_Blocks$317$2$1_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$317$2$1_notifyAll 7
typedef void (*func_mindustry_content_Blocks$317$2$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$317$2$1_wait 8
typedef void (*func_mindustry_content_Blocks$317$2$1_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$317$2$1_wait_long 9
typedef void (*func_mindustry_content_Blocks$317$2$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_Blocks$317$2$1_wait_long_int 10
typedef void (*func_mindustry_content_Blocks$317$2$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_content_Blocks$317$2$1_draw_mindustry_entities_part_DrawPart$PartParams 11
typedef void (*func_mindustry_content_Blocks$317$2$1_draw_mindustry_entities_part_DrawPart$PartParams)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$317$2$1_load_java_lang_String 12
typedef void (*func_mindustry_content_Blocks$317$2$1_load_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$317$2$1_getOutlines_arc_struct_Seq 13
typedef void (*func_mindustry_content_Blocks$317$2$1_getOutlines_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$317$2$1_rect_arc_graphics_g2d_TextureRegion_float_float_float 14
typedef void (*func_mindustry_content_Blocks$317$2$1_rect_arc_graphics_g2d_TextureRegion_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);

void mark_mindustry_content_Blocks$317$2$1(jobject object, jint mark, jint depth);
void clinit_mindustry_content_Blocks$317$2$1(jcontext ctx);
void init_mindustry_content_Blocks$317$2$1_mindustry_content_Blocks$317$2_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
