#ifndef HEADER_mindustry_content_Blocks$321$2$4
#define HEADER_mindustry_content_Blocks$321$2$4

#include "Clearwing.h"
#include "mindustry/entities/part/ShapePart.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_Blocks$321$2$4 {
	mindustry_entities_part_ShapePart parent;
	jref F_val$circleProgress;
	jfloat F_val$circleRotSpeed;
	jref F_val$circleColor;
	jfloat F_val$circleY;
	jref F_this$1;
} mindustry_content_Blocks$321$2$4;

extern Class class_mindustry_content_Blocks$321$2$4;


#define VTABLE_mindustry_content_Blocks$321$2$4_hashCode_R_int 0
typedef jint (*func_mindustry_content_Blocks$321$2$4_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2$4_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_Blocks$321$2$4_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$2$4_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_Blocks$321$2$4_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2$4_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_Blocks$321$2$4_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2$4_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_Blocks$321$2$4_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2$4_finalize 5
typedef void (*func_mindustry_content_Blocks$321$2$4_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2$4_notify 6
typedef void (*func_mindustry_content_Blocks$321$2$4_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2$4_notifyAll 7
typedef void (*func_mindustry_content_Blocks$321$2$4_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2$4_wait 8
typedef void (*func_mindustry_content_Blocks$321$2$4_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2$4_wait_long 9
typedef void (*func_mindustry_content_Blocks$321$2$4_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_Blocks$321$2$4_wait_long_int 10
typedef void (*func_mindustry_content_Blocks$321$2$4_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_content_Blocks$321$2$4_draw_mindustry_entities_part_DrawPart$PartParams 11
typedef void (*func_mindustry_content_Blocks$321$2$4_draw_mindustry_entities_part_DrawPart$PartParams)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$2$4_load_java_lang_String 12
typedef void (*func_mindustry_content_Blocks$321$2$4_load_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$2$4_getOutlines_arc_struct_Seq 13
typedef void (*func_mindustry_content_Blocks$321$2$4_getOutlines_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_content_Blocks$321$2$4(jobject object, jint mark, jint depth);
void clinit_mindustry_content_Blocks$321$2$4(jcontext ctx);
void init_mindustry_content_Blocks$321$2$4_mindustry_content_Blocks$321$2_mindustry_entities_part_DrawPart$PartProgress_float_arc_graphics_Color_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3, jfloat param4);

#ifdef __cplusplus
}
#endif

#endif
