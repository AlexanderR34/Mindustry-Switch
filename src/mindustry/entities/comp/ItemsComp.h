#ifndef HEADER_mindustry_entities_comp_ItemsComp
#define HEADER_mindustry_entities_comp_ItemsComp

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Posc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_comp_ItemsComp {
	java_lang_Object parent;
	jref F_stack;
	jfloat F_itemTime;
} mindustry_entities_comp_ItemsComp;

extern Class class_mindustry_entities_comp_ItemsComp;


#define VTABLE_mindustry_entities_comp_ItemsComp_hashCode_R_int 0
typedef jint (*func_mindustry_entities_comp_ItemsComp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_comp_ItemsComp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_ItemsComp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_comp_ItemsComp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_comp_ItemsComp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_comp_ItemsComp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_finalize 5
typedef void (*func_mindustry_entities_comp_ItemsComp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_notify 6
typedef void (*func_mindustry_entities_comp_ItemsComp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_notifyAll 7
typedef void (*func_mindustry_entities_comp_ItemsComp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_wait 8
typedef void (*func_mindustry_entities_comp_ItemsComp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_wait_long 9
typedef void (*func_mindustry_entities_comp_ItemsComp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_ItemsComp_wait_long_int 10
typedef void (*func_mindustry_entities_comp_ItemsComp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_comp_ItemsComp_getX_R_float 11
typedef jfloat (*func_mindustry_entities_comp_ItemsComp_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_getY_R_float 12
typedef jfloat (*func_mindustry_entities_comp_ItemsComp_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_angleTo_arc_math_geom_Position_R_float 13
typedef jfloat (*func_mindustry_entities_comp_ItemsComp_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_ItemsComp_angleTo_float_float_R_float 14
typedef jfloat (*func_mindustry_entities_comp_ItemsComp_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_ItemsComp_dst2_arc_math_geom_Position_R_float 15
typedef jfloat (*func_mindustry_entities_comp_ItemsComp_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_ItemsComp_dst_arc_math_geom_Position_R_float 16
typedef jfloat (*func_mindustry_entities_comp_ItemsComp_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_ItemsComp_dst_float_float_R_float 17
typedef jfloat (*func_mindustry_entities_comp_ItemsComp_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_ItemsComp_dst2_float_float_R_float 18
typedef jfloat (*func_mindustry_entities_comp_ItemsComp_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_ItemsComp_within_arc_math_geom_Position_float_R_boolean 19
typedef jbool (*func_mindustry_entities_comp_ItemsComp_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_ItemsComp_within_float_float_float_R_boolean 20
typedef jbool (*func_mindustry_entities_comp_ItemsComp_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_comp_ItemsComp_self_R_mindustry_gen_Entityc 21
typedef jobject (*func_mindustry_entities_comp_ItemsComp_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_as_R_java_lang_Object 22
typedef jobject (*func_mindustry_entities_comp_ItemsComp_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_isAdded_R_boolean 23
typedef jbool (*func_mindustry_entities_comp_ItemsComp_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_isLocal_R_boolean 24
typedef jbool (*func_mindustry_entities_comp_ItemsComp_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_isRemote_R_boolean 25
typedef jbool (*func_mindustry_entities_comp_ItemsComp_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_serialize_R_boolean 26
typedef jbool (*func_mindustry_entities_comp_ItemsComp_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_classId_R_int 27
typedef jint (*func_mindustry_entities_comp_ItemsComp_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_id_R_int 28
typedef jint (*func_mindustry_entities_comp_ItemsComp_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_add 29
typedef void (*func_mindustry_entities_comp_ItemsComp_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_afterRead 30
typedef void (*func_mindustry_entities_comp_ItemsComp_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_afterReadAll 31
typedef void (*func_mindustry_entities_comp_ItemsComp_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_beforeWrite 32
typedef void (*func_mindustry_entities_comp_ItemsComp_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_id_int 33
typedef void (*func_mindustry_entities_comp_ItemsComp_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_comp_ItemsComp_read_arc_util_io_Reads 34
typedef void (*func_mindustry_entities_comp_ItemsComp_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_ItemsComp_remove 35
typedef void (*func_mindustry_entities_comp_ItemsComp_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_update 36
typedef void (*func_mindustry_entities_comp_ItemsComp_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_write_arc_util_io_Writes 37
typedef void (*func_mindustry_entities_comp_ItemsComp_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_ItemsComp_floorOn_R_mindustry_world_blocks_environment_Floor 38
typedef jobject (*func_mindustry_entities_comp_ItemsComp_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_buildOn_R_mindustry_gen_Building 39
typedef jobject (*func_mindustry_entities_comp_ItemsComp_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_onSolid_R_boolean 40
typedef jbool (*func_mindustry_entities_comp_ItemsComp_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_x_R_float 41
typedef jfloat (*func_mindustry_entities_comp_ItemsComp_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_y_R_float 42
typedef jfloat (*func_mindustry_entities_comp_ItemsComp_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_tileX_R_int 43
typedef jint (*func_mindustry_entities_comp_ItemsComp_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_tileY_R_int 44
typedef jint (*func_mindustry_entities_comp_ItemsComp_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_blockOn_R_mindustry_world_Block 45
typedef jobject (*func_mindustry_entities_comp_ItemsComp_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_tileOn_R_mindustry_world_Tile 46
typedef jobject (*func_mindustry_entities_comp_ItemsComp_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_set_arc_math_geom_Position 47
typedef void (*func_mindustry_entities_comp_ItemsComp_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_ItemsComp_set_float_float 48
typedef void (*func_mindustry_entities_comp_ItemsComp_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_ItemsComp_trns_arc_math_geom_Position 49
typedef void (*func_mindustry_entities_comp_ItemsComp_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_ItemsComp_trns_float_float 50
typedef void (*func_mindustry_entities_comp_ItemsComp_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_ItemsComp_x_float 51
typedef void (*func_mindustry_entities_comp_ItemsComp_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_ItemsComp_y_float 52
typedef void (*func_mindustry_entities_comp_ItemsComp_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_ItemsComp_itemCapacity_R_int 53
typedef jint (*func_mindustry_entities_comp_ItemsComp_itemCapacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_item_R_mindustry_type_Item 54
typedef jobject (*func_mindustry_entities_comp_ItemsComp_item_R_mindustry_type_Item)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_clearItem 55
typedef void (*func_mindustry_entities_comp_ItemsComp_clearItem)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_acceptsItem_mindustry_type_Item_R_boolean 56
typedef jbool (*func_mindustry_entities_comp_ItemsComp_acceptsItem_mindustry_type_Item_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_ItemsComp_hasItem_R_boolean 57
typedef jbool (*func_mindustry_entities_comp_ItemsComp_hasItem_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_ItemsComp_addItem_mindustry_type_Item 58
typedef void (*func_mindustry_entities_comp_ItemsComp_addItem_mindustry_type_Item)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_ItemsComp_addItem_mindustry_type_Item_int 59
typedef void (*func_mindustry_entities_comp_ItemsComp_addItem_mindustry_type_Item_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_entities_comp_ItemsComp_maxAccepted_mindustry_type_Item_R_int 60
typedef jint (*func_mindustry_entities_comp_ItemsComp_maxAccepted_mindustry_type_Item_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_entities_comp_ItemsComp(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_comp_ItemsComp(jcontext ctx);
void init_mindustry_entities_comp_ItemsComp(jcontext ctx, jobject self);
void M_mindustry_entities_comp_ItemsComp_update(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_ItemsComp_item_R_mindustry_type_Item(jcontext ctx, jobject self);
void M_mindustry_entities_comp_ItemsComp_clearItem(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_ItemsComp_acceptsItem_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_entities_comp_ItemsComp_hasItem_R_boolean(jcontext ctx, jobject self);
void M_mindustry_entities_comp_ItemsComp_addItem_mindustry_type_Item(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_ItemsComp_addItem_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_mindustry_entities_comp_ItemsComp_maxAccepted_mindustry_type_Item_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
