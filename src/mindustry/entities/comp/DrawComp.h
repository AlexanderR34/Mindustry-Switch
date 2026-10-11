#ifndef HEADER_mindustry_entities_comp_DrawComp
#define HEADER_mindustry_entities_comp_DrawComp

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Posc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_comp_DrawComp {
	java_lang_Object parent;
} mindustry_entities_comp_DrawComp;

extern Class class_mindustry_entities_comp_DrawComp;


#define VTABLE_mindustry_entities_comp_DrawComp_hashCode_R_int 0
typedef jint (*func_mindustry_entities_comp_DrawComp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_comp_DrawComp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_DrawComp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_comp_DrawComp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_comp_DrawComp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_comp_DrawComp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_finalize 5
typedef void (*func_mindustry_entities_comp_DrawComp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_notify 6
typedef void (*func_mindustry_entities_comp_DrawComp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_notifyAll 7
typedef void (*func_mindustry_entities_comp_DrawComp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_wait 8
typedef void (*func_mindustry_entities_comp_DrawComp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_wait_long 9
typedef void (*func_mindustry_entities_comp_DrawComp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_DrawComp_wait_long_int 10
typedef void (*func_mindustry_entities_comp_DrawComp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_comp_DrawComp_getX_R_float 11
typedef jfloat (*func_mindustry_entities_comp_DrawComp_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_getY_R_float 12
typedef jfloat (*func_mindustry_entities_comp_DrawComp_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_angleTo_arc_math_geom_Position_R_float 13
typedef jfloat (*func_mindustry_entities_comp_DrawComp_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_DrawComp_angleTo_float_float_R_float 14
typedef jfloat (*func_mindustry_entities_comp_DrawComp_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_DrawComp_dst2_arc_math_geom_Position_R_float 15
typedef jfloat (*func_mindustry_entities_comp_DrawComp_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_DrawComp_dst_arc_math_geom_Position_R_float 16
typedef jfloat (*func_mindustry_entities_comp_DrawComp_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_DrawComp_dst_float_float_R_float 17
typedef jfloat (*func_mindustry_entities_comp_DrawComp_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_DrawComp_dst2_float_float_R_float 18
typedef jfloat (*func_mindustry_entities_comp_DrawComp_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_DrawComp_within_arc_math_geom_Position_float_R_boolean 19
typedef jbool (*func_mindustry_entities_comp_DrawComp_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_DrawComp_within_float_float_float_R_boolean 20
typedef jbool (*func_mindustry_entities_comp_DrawComp_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_comp_DrawComp_self_R_mindustry_gen_Entityc 21
typedef jobject (*func_mindustry_entities_comp_DrawComp_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_as_R_java_lang_Object 22
typedef jobject (*func_mindustry_entities_comp_DrawComp_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_isAdded_R_boolean 23
typedef jbool (*func_mindustry_entities_comp_DrawComp_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_isLocal_R_boolean 24
typedef jbool (*func_mindustry_entities_comp_DrawComp_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_isRemote_R_boolean 25
typedef jbool (*func_mindustry_entities_comp_DrawComp_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_serialize_R_boolean 26
typedef jbool (*func_mindustry_entities_comp_DrawComp_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_classId_R_int 27
typedef jint (*func_mindustry_entities_comp_DrawComp_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_id_R_int 28
typedef jint (*func_mindustry_entities_comp_DrawComp_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_add 29
typedef void (*func_mindustry_entities_comp_DrawComp_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_afterRead 30
typedef void (*func_mindustry_entities_comp_DrawComp_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_afterReadAll 31
typedef void (*func_mindustry_entities_comp_DrawComp_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_beforeWrite 32
typedef void (*func_mindustry_entities_comp_DrawComp_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_id_int 33
typedef void (*func_mindustry_entities_comp_DrawComp_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_comp_DrawComp_read_arc_util_io_Reads 34
typedef void (*func_mindustry_entities_comp_DrawComp_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_DrawComp_remove 35
typedef void (*func_mindustry_entities_comp_DrawComp_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_update 36
typedef void (*func_mindustry_entities_comp_DrawComp_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_write_arc_util_io_Writes 37
typedef void (*func_mindustry_entities_comp_DrawComp_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_DrawComp_floorOn_R_mindustry_world_blocks_environment_Floor 38
typedef jobject (*func_mindustry_entities_comp_DrawComp_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_buildOn_R_mindustry_gen_Building 39
typedef jobject (*func_mindustry_entities_comp_DrawComp_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_onSolid_R_boolean 40
typedef jbool (*func_mindustry_entities_comp_DrawComp_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_x_R_float 41
typedef jfloat (*func_mindustry_entities_comp_DrawComp_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_y_R_float 42
typedef jfloat (*func_mindustry_entities_comp_DrawComp_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_tileX_R_int 43
typedef jint (*func_mindustry_entities_comp_DrawComp_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_tileY_R_int 44
typedef jint (*func_mindustry_entities_comp_DrawComp_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_blockOn_R_mindustry_world_Block 45
typedef jobject (*func_mindustry_entities_comp_DrawComp_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_tileOn_R_mindustry_world_Tile 46
typedef jobject (*func_mindustry_entities_comp_DrawComp_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_set_arc_math_geom_Position 47
typedef void (*func_mindustry_entities_comp_DrawComp_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_DrawComp_set_float_float 48
typedef void (*func_mindustry_entities_comp_DrawComp_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_DrawComp_trns_arc_math_geom_Position 49
typedef void (*func_mindustry_entities_comp_DrawComp_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_DrawComp_trns_float_float 50
typedef void (*func_mindustry_entities_comp_DrawComp_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_DrawComp_x_float 51
typedef void (*func_mindustry_entities_comp_DrawComp_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_DrawComp_y_float 52
typedef void (*func_mindustry_entities_comp_DrawComp_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_DrawComp_clipSize_R_float 53
typedef jfloat (*func_mindustry_entities_comp_DrawComp_clipSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DrawComp_draw 54
typedef void (*func_mindustry_entities_comp_DrawComp_draw)(jcontext ctx, jobject self);

void mark_mindustry_entities_comp_DrawComp(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_comp_DrawComp(jcontext ctx);
void init_mindustry_entities_comp_DrawComp(jcontext ctx, jobject self);
jfloat M_mindustry_entities_comp_DrawComp_clipSize_R_float(jcontext ctx, jobject self);
void M_mindustry_entities_comp_DrawComp_draw(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
