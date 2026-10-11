#ifndef HEADER_mindustry_content_Blocks$320$4$10
#define HEADER_mindustry_content_Blocks$320$4$10

#include "Clearwing.h"
#include "mindustry/entities/part/HaloPart.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_Blocks$320$4$10 {
	mindustry_entities_part_HaloPart parent;
	jref F_val$haloProgress;
	jfloat F_val$haloY;
	jfloat F_val$haloRotSpeed;
	jref F_this$1;
} mindustry_content_Blocks$320$4$10;

extern Class class_mindustry_content_Blocks$320$4$10;


#define VTABLE_mindustry_content_Blocks$320$4$10_hashCode_R_int 0
typedef jint (*func_mindustry_content_Blocks$320$4$10_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$320$4$10_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_Blocks$320$4$10_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$320$4$10_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_Blocks$320$4$10_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$320$4$10_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_Blocks$320$4$10_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$320$4$10_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_Blocks$320$4$10_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$320$4$10_finalize 5
typedef void (*func_mindustry_content_Blocks$320$4$10_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$320$4$10_notify 6
typedef void (*func_mindustry_content_Blocks$320$4$10_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$320$4$10_notifyAll 7
typedef void (*func_mindustry_content_Blocks$320$4$10_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$320$4$10_wait 8
typedef void (*func_mindustry_content_Blocks$320$4$10_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$320$4$10_wait_long 9
typedef void (*func_mindustry_content_Blocks$320$4$10_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_Blocks$320$4$10_wait_long_int 10
typedef void (*func_mindustry_content_Blocks$320$4$10_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_content_Blocks$320$4$10_draw_mindustry_entities_part_DrawPart$PartParams 11
typedef void (*func_mindustry_content_Blocks$320$4$10_draw_mindustry_entities_part_DrawPart$PartParams)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$320$4$10_load_java_lang_String 12
typedef void (*func_mindustry_content_Blocks$320$4$10_load_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$320$4$10_getOutlines_arc_struct_Seq 13
typedef void (*func_mindustry_content_Blocks$320$4$10_getOutlines_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_content_Blocks$320$4$10(jobject object, jint mark, jint depth);
void clinit_mindustry_content_Blocks$320$4$10(jcontext ctx);
void init_mindustry_content_Blocks$320$4$10_mindustry_content_Blocks$320$4_mindustry_entities_part_DrawPart$PartProgress_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3);

#ifdef __cplusplus
}
#endif

#endif
