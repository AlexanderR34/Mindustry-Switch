#ifndef HEADER_mindustry_type_CellLiquid
#define HEADER_mindustry_type_CellLiquid

#include "Clearwing.h"
#include "mindustry/type/Liquid.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_type_CellLiquid {
	mindustry_type_Liquid parent;
	jref F_colorFrom;
	jref F_colorTo;
	jint F_cells;
	jref F_spreadTarget;
	jfloat F_maxSpread;
	jfloat F_spreadConversion;
	jfloat F_spreadDamage;
	jfloat F_removeScaling;
} mindustry_type_CellLiquid;

extern Class class_mindustry_type_CellLiquid;


#define VTABLE_mindustry_type_CellLiquid_hashCode_R_int 0
typedef jint (*func_mindustry_type_CellLiquid_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_type_CellLiquid_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_CellLiquid_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_type_CellLiquid_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_type_CellLiquid_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_type_CellLiquid_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_finalize 5
typedef void (*func_mindustry_type_CellLiquid_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_notify 6
typedef void (*func_mindustry_type_CellLiquid_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_notifyAll 7
typedef void (*func_mindustry_type_CellLiquid_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_wait 8
typedef void (*func_mindustry_type_CellLiquid_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_wait_long 9
typedef void (*func_mindustry_type_CellLiquid_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_type_CellLiquid_wait_long_int 10
typedef void (*func_mindustry_type_CellLiquid_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_type_CellLiquid_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_type_CellLiquid_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_CellLiquid_getContentType_R_mindustry_ctype_ContentType 12
typedef jobject (*func_mindustry_type_CellLiquid_getContentType_R_mindustry_ctype_ContentType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_removeContent 13
typedef void (*func_mindustry_type_CellLiquid_removeContent)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_init 14
typedef void (*func_mindustry_type_CellLiquid_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_postInit 15
typedef void (*func_mindustry_type_CellLiquid_postInit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_afterPatch 16
typedef void (*func_mindustry_type_CellLiquid_afterPatch)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_load 17
typedef void (*func_mindustry_type_CellLiquid_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_loadIcon 18
typedef void (*func_mindustry_type_CellLiquid_loadIcon)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_hasErrored_R_boolean 19
typedef jbool (*func_mindustry_type_CellLiquid_hasErrored_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_isVanilla_R_boolean 20
typedef jbool (*func_mindustry_type_CellLiquid_isVanilla_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_isModded_R_boolean 21
typedef jbool (*func_mindustry_type_CellLiquid_isModded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_isPatchContent_R_boolean 22
typedef jbool (*func_mindustry_type_CellLiquid_isPatchContent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_compareTo_mindustry_ctype_Content_R_int 23
typedef jint (*func_mindustry_type_CellLiquid_compareTo_mindustry_ctype_Content_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_CellLiquid_isBanned_R_boolean 24
typedef jbool (*func_mindustry_type_CellLiquid_isBanned_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_isOnPlanet_mindustry_type_Planet_R_boolean 25
typedef jbool (*func_mindustry_type_CellLiquid_isOnPlanet_mindustry_type_Planet_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_CellLiquid_getLogicId_R_int 26
typedef jint (*func_mindustry_type_CellLiquid_getLogicId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_displayDescription_R_java_lang_String 27
typedef jobject (*func_mindustry_type_CellLiquid_displayDescription_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_checkStats 28
typedef void (*func_mindustry_type_CellLiquid_checkStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_setStats 29
typedef void (*func_mindustry_type_CellLiquid_setStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_computeStats_R_mindustry_world_meta_Stats 30
typedef jobject (*func_mindustry_type_CellLiquid_computeStats_R_mindustry_world_meta_Stats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_displayExtra_arc_scene_ui_layout_Table 31
typedef void (*func_mindustry_type_CellLiquid_displayExtra_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_CellLiquid_createIcons_mindustry_graphics_MultiPacker 32
typedef void (*func_mindustry_type_CellLiquid_createIcons_mindustry_graphics_MultiPacker)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_CellLiquid_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int 33
typedef void (*func_mindustry_type_CellLiquid_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5);
#define VTABLE_mindustry_type_CellLiquid_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int 34
typedef void (*func_mindustry_type_CellLiquid_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5, jint param6);
#define VTABLE_mindustry_type_CellLiquid_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int 35
typedef void (*func_mindustry_type_CellLiquid_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
#define VTABLE_mindustry_type_CellLiquid_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color 36
typedef void (*func_mindustry_type_CellLiquid_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_type_CellLiquid_researchRequirements_R_Array1_mindustry_type_ItemStack 37
typedef jobject (*func_mindustry_type_CellLiquid_researchRequirements_R_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_emoji_R_java_lang_String 38
typedef jobject (*func_mindustry_type_CellLiquid_emoji_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_emojiChar_R_int 39
typedef jint (*func_mindustry_type_CellLiquid_emojiChar_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_hasEmoji_R_boolean 40
typedef jbool (*func_mindustry_type_CellLiquid_hasEmoji_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_getDependencies_arc_func_Cons 41
typedef void (*func_mindustry_type_CellLiquid_getDependencies_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_CellLiquid_onUnlock 42
typedef void (*func_mindustry_type_CellLiquid_onUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_isHidden_R_boolean 43
typedef jbool (*func_mindustry_type_CellLiquid_isHidden_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_showUnlock_R_boolean 44
typedef jbool (*func_mindustry_type_CellLiquid_showUnlock_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_logicVisible_R_boolean 45
typedef jbool (*func_mindustry_type_CellLiquid_logicVisible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_unlock 46
typedef void (*func_mindustry_type_CellLiquid_unlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_quietUnlock 47
typedef void (*func_mindustry_type_CellLiquid_quietUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_unlockedNowHost_R_boolean 48
typedef jbool (*func_mindustry_type_CellLiquid_unlockedNowHost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_unlockedHost_R_boolean 49
typedef jbool (*func_mindustry_type_CellLiquid_unlockedHost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_unlockedNow_R_boolean 50
typedef jbool (*func_mindustry_type_CellLiquid_unlockedNow_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_unlocked_R_boolean 51
typedef jbool (*func_mindustry_type_CellLiquid_unlocked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_clearUnlock 52
typedef void (*func_mindustry_type_CellLiquid_clearUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_locked_R_boolean 53
typedef jbool (*func_mindustry_type_CellLiquid_locked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_sense_mindustry_logic_LAccess_R_double 54
typedef jdouble (*func_mindustry_type_CellLiquid_sense_mindustry_logic_LAccess_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_CellLiquid_sense_mindustry_ctype_Content_R_double 55
typedef jdouble (*func_mindustry_type_CellLiquid_sense_mindustry_ctype_Content_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_CellLiquid_senseObject_mindustry_logic_LAccess_R_java_lang_Object 56
typedef jobject (*func_mindustry_type_CellLiquid_senseObject_mindustry_logic_LAccess_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_CellLiquid_getAnimationFrame_R_int 57
typedef jint (*func_mindustry_type_CellLiquid_getAnimationFrame_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_willBoil_R_boolean 58
typedef jbool (*func_mindustry_type_CellLiquid_willBoil_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_canExtinguish_R_boolean 59
typedef jbool (*func_mindustry_type_CellLiquid_canExtinguish_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_barColor_R_arc_graphics_Color 60
typedef jobject (*func_mindustry_type_CellLiquid_barColor_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_CellLiquid_drawPuddle_mindustry_gen_Puddle 61
typedef void (*func_mindustry_type_CellLiquid_drawPuddle_mindustry_gen_Puddle)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_CellLiquid_update_mindustry_gen_Puddle 62
typedef void (*func_mindustry_type_CellLiquid_update_mindustry_gen_Puddle)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_CellLiquid_react_mindustry_type_Liquid_float_mindustry_world_Tile_float_float_R_float 63
typedef jfloat (*func_mindustry_type_CellLiquid_react_mindustry_type_Liquid_float_mindustry_world_Tile_float_float_R_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2, jfloat param3, jfloat param4);

void mark_mindustry_type_CellLiquid(jobject object, jint mark, jint depth);
void clinit_mindustry_type_CellLiquid(jcontext ctx);
void init_mindustry_type_CellLiquid_java_lang_String_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_mindustry_type_CellLiquid_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_CellLiquid_update_mindustry_gen_Puddle(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_type_CellLiquid_react_mindustry_type_Liquid_float_mindustry_world_Tile_float_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2, jfloat param3, jfloat param4);
void M_mindustry_type_CellLiquid_drawPuddle_mindustry_gen_Puddle(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
