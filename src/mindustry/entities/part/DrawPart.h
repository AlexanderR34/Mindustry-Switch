#ifndef HEADER_mindustry_entities_part_DrawPart
#define HEADER_mindustry_entities_part_DrawPart

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_part_DrawPart {
	java_lang_Object parent;
	jbool F_turretShading;
	jbool F_under;
	jint F_weaponIndex;
	jint F_recoilIndex;
} mindustry_entities_part_DrawPart;

extern Class class_mindustry_entities_part_DrawPart;

extern jobject SF_mindustry_entities_part_DrawPart_params;

#define VTABLE_mindustry_entities_part_DrawPart_hashCode_R_int 0
typedef jint (*func_mindustry_entities_part_DrawPart_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_part_DrawPart_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_part_DrawPart_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_part_DrawPart_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_part_DrawPart_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_part_DrawPart_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart_finalize 5
typedef void (*func_mindustry_entities_part_DrawPart_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart_notify 6
typedef void (*func_mindustry_entities_part_DrawPart_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart_notifyAll 7
typedef void (*func_mindustry_entities_part_DrawPart_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart_wait 8
typedef void (*func_mindustry_entities_part_DrawPart_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart_wait_long 9
typedef void (*func_mindustry_entities_part_DrawPart_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_part_DrawPart_wait_long_int 10
typedef void (*func_mindustry_entities_part_DrawPart_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_part_DrawPart_draw_mindustry_entities_part_DrawPart$PartParams 11
typedef void (*func_mindustry_entities_part_DrawPart_draw_mindustry_entities_part_DrawPart$PartParams)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_part_DrawPart_load_java_lang_String 12
typedef void (*func_mindustry_entities_part_DrawPart_load_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_part_DrawPart_getOutlines_arc_struct_Seq 13
typedef void (*func_mindustry_entities_part_DrawPart_getOutlines_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_entities_part_DrawPart(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_part_DrawPart(jcontext ctx);
void init_mindustry_entities_part_DrawPart(jcontext ctx, jobject self);
void M_mindustry_entities_part_DrawPart_load_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_part_DrawPart_getOutlines_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
