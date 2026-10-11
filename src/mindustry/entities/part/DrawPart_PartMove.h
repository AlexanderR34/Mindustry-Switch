#ifndef HEADER_mindustry_entities_part_DrawPart$PartMove
#define HEADER_mindustry_entities_part_DrawPart$PartMove

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_part_DrawPart$PartMove {
	java_lang_Object parent;
	jref F_progress;
	jfloat F_x;
	jfloat F_y;
	jfloat F_gx;
	jfloat F_gy;
	jfloat F_rot;
} mindustry_entities_part_DrawPart$PartMove;

extern Class class_mindustry_entities_part_DrawPart$PartMove;


#define VTABLE_mindustry_entities_part_DrawPart$PartMove_hashCode_R_int 0
typedef jint (*func_mindustry_entities_part_DrawPart$PartMove_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart$PartMove_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_part_DrawPart$PartMove_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_part_DrawPart$PartMove_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_part_DrawPart$PartMove_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart$PartMove_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_part_DrawPart$PartMove_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart$PartMove_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_part_DrawPart$PartMove_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart$PartMove_finalize 5
typedef void (*func_mindustry_entities_part_DrawPart$PartMove_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart$PartMove_notify 6
typedef void (*func_mindustry_entities_part_DrawPart$PartMove_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart$PartMove_notifyAll 7
typedef void (*func_mindustry_entities_part_DrawPart$PartMove_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart$PartMove_wait 8
typedef void (*func_mindustry_entities_part_DrawPart$PartMove_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_part_DrawPart$PartMove_wait_long 9
typedef void (*func_mindustry_entities_part_DrawPart$PartMove_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_part_DrawPart$PartMove_wait_long_int 10
typedef void (*func_mindustry_entities_part_DrawPart$PartMove_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_entities_part_DrawPart$PartMove(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_part_DrawPart$PartMove(jcontext ctx);
void init_mindustry_entities_part_DrawPart$PartMove_mindustry_entities_part_DrawPart$PartProgress_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
void init_mindustry_entities_part_DrawPart$PartMove_mindustry_entities_part_DrawPart$PartProgress_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
void init_mindustry_entities_part_DrawPart$PartMove(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
