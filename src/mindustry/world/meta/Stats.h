#ifndef HEADER_mindustry_world_meta_Stats
#define HEADER_mindustry_world_meta_Stats

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_meta_Stats {
	java_lang_Object parent;
	jbool F_useCategories;
	jbool F_intialized;
	jfloat F_timePeriod;
	jref F_map;
	jbool F_dirty;
} mindustry_world_meta_Stats;

extern Class class_mindustry_world_meta_Stats;


#define VTABLE_mindustry_world_meta_Stats_hashCode_R_int 0
typedef jint (*func_mindustry_world_meta_Stats_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Stats_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_meta_Stats_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_meta_Stats_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_meta_Stats_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Stats_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_meta_Stats_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Stats_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_meta_Stats_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Stats_finalize 5
typedef void (*func_mindustry_world_meta_Stats_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Stats_notify 6
typedef void (*func_mindustry_world_meta_Stats_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Stats_notifyAll 7
typedef void (*func_mindustry_world_meta_Stats_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Stats_wait 8
typedef void (*func_mindustry_world_meta_Stats_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Stats_wait_long 9
typedef void (*func_mindustry_world_meta_Stats_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_meta_Stats_wait_long_int 10
typedef void (*func_mindustry_world_meta_Stats_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit 11
typedef void (*func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit)(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2);
#define VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float 12
typedef void (*func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float 13
typedef void (*func_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_world_meta_Stats_addMultModifier_mindustry_world_meta_Stat_float 14
typedef void (*func_mindustry_world_meta_Stats_addMultModifier_mindustry_world_meta_Stat_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_world_meta_Stats_addPercentModifier_mindustry_world_meta_Stat_float 15
typedef void (*func_mindustry_world_meta_Stats_addPercentModifier_mindustry_world_meta_Stat_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_boolean 16
typedef void (*func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_Item 17
typedef void (*func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_Item)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_ItemStack 18
typedef void (*func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_ItemStack)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_Liquid_float_boolean 19
typedef void (*func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_Liquid_float_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jbool param3);
#define VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute 20
typedef void (*func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_float 21
typedef void (*func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
#define VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean 22
typedef void (*func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean_float_boolean 23
typedef void (*func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean_float_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jfloat param3, jbool param4);
#define VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean_float_float_arc_struct_Seq_float_boolean 24
typedef void (*func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean_float_float_arc_struct_Seq_float_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jfloat param3, jfloat param4, jobject param5, jfloat param6, jbool param7);
#define VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object 25
typedef void (*func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_world_meta_Stats_replace_mindustry_world_meta_Stat_mindustry_world_meta_StatValue 26
typedef void (*func_mindustry_world_meta_Stats_replace_mindustry_world_meta_Stat_mindustry_world_meta_StatValue)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue 27
typedef void (*func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_meta_Stats_remove_mindustry_world_meta_Stat 28
typedef void (*func_mindustry_world_meta_Stats_remove_mindustry_world_meta_Stat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_meta_Stats_toMap_R_arc_struct_OrderedMap 29
typedef jobject (*func_mindustry_world_meta_Stats_toMap_R_arc_struct_OrderedMap)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Stats_statInfo_arc_scene_ui_layout_Cell_mindustry_world_meta_Stat 30
typedef void (*func_mindustry_world_meta_Stats_statInfo_arc_scene_ui_layout_Cell_mindustry_world_meta_Stat)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_world_meta_Stats(jobject object, jint mark, jint depth);
void clinit_mindustry_world_meta_Stats(jcontext ctx);
void init_mindustry_world_meta_Stats(jcontext ctx, jobject self);
void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2);
void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_world_meta_Stats_addMultModifier_mindustry_world_meta_Stat_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_world_meta_Stats_addPercentModifier_mindustry_world_meta_Stat_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_Item(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_Liquid_float_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jbool param3);
void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean_float_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jfloat param3, jbool param4);
void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean_float_float_arc_struct_Seq_float_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jfloat param3, jfloat param4, jobject param5, jfloat param6, jbool param7);
void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_world_meta_Stats_replace_mindustry_world_meta_Stat_mindustry_world_meta_StatValue(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_world_meta_Stats_remove_mindustry_world_meta_Stat(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_meta_Stats_toMap_R_arc_struct_OrderedMap(jcontext ctx, jobject self);
void M_mindustry_world_meta_Stats_statInfo_arc_scene_ui_layout_Cell_mindustry_world_meta_Stat(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
