#ifndef HEADER_mindustry_content_StatusEffects$16
#define HEADER_mindustry_content_StatusEffects$16

#include "Clearwing.h"
#include "mindustry/type/StatusEffect.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_StatusEffects$16 {
	mindustry_type_StatusEffect parent;
} mindustry_content_StatusEffects$16;

extern Class class_mindustry_content_StatusEffects$16;


#define VTABLE_mindustry_content_StatusEffects$16_hashCode_R_int 0
typedef jint (*func_mindustry_content_StatusEffects$16_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_StatusEffects$16_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_StatusEffects$16_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_StatusEffects$16_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_StatusEffects$16_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_StatusEffects$16_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_finalize 5
typedef void (*func_mindustry_content_StatusEffects$16_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_notify 6
typedef void (*func_mindustry_content_StatusEffects$16_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_notifyAll 7
typedef void (*func_mindustry_content_StatusEffects$16_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_wait 8
typedef void (*func_mindustry_content_StatusEffects$16_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_wait_long 9
typedef void (*func_mindustry_content_StatusEffects$16_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_StatusEffects$16_wait_long_int 10
typedef void (*func_mindustry_content_StatusEffects$16_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_content_StatusEffects$16_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_content_StatusEffects$16_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_StatusEffects$16_getContentType_R_mindustry_ctype_ContentType 12
typedef jobject (*func_mindustry_content_StatusEffects$16_getContentType_R_mindustry_ctype_ContentType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_removeContent 13
typedef void (*func_mindustry_content_StatusEffects$16_removeContent)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_init 14
typedef void (*func_mindustry_content_StatusEffects$16_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_postInit 15
typedef void (*func_mindustry_content_StatusEffects$16_postInit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_afterPatch 16
typedef void (*func_mindustry_content_StatusEffects$16_afterPatch)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_load 17
typedef void (*func_mindustry_content_StatusEffects$16_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_loadIcon 18
typedef void (*func_mindustry_content_StatusEffects$16_loadIcon)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_hasErrored_R_boolean 19
typedef jbool (*func_mindustry_content_StatusEffects$16_hasErrored_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_isVanilla_R_boolean 20
typedef jbool (*func_mindustry_content_StatusEffects$16_isVanilla_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_isModded_R_boolean 21
typedef jbool (*func_mindustry_content_StatusEffects$16_isModded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_isPatchContent_R_boolean 22
typedef jbool (*func_mindustry_content_StatusEffects$16_isPatchContent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_compareTo_mindustry_ctype_Content_R_int 23
typedef jint (*func_mindustry_content_StatusEffects$16_compareTo_mindustry_ctype_Content_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_StatusEffects$16_isBanned_R_boolean 24
typedef jbool (*func_mindustry_content_StatusEffects$16_isBanned_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_isOnPlanet_mindustry_type_Planet_R_boolean 25
typedef jbool (*func_mindustry_content_StatusEffects$16_isOnPlanet_mindustry_type_Planet_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_StatusEffects$16_getLogicId_R_int 26
typedef jint (*func_mindustry_content_StatusEffects$16_getLogicId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_displayDescription_R_java_lang_String 27
typedef jobject (*func_mindustry_content_StatusEffects$16_displayDescription_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_checkStats 28
typedef void (*func_mindustry_content_StatusEffects$16_checkStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_setStats 29
typedef void (*func_mindustry_content_StatusEffects$16_setStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_computeStats_R_mindustry_world_meta_Stats 30
typedef jobject (*func_mindustry_content_StatusEffects$16_computeStats_R_mindustry_world_meta_Stats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_displayExtra_arc_scene_ui_layout_Table 31
typedef void (*func_mindustry_content_StatusEffects$16_displayExtra_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_StatusEffects$16_createIcons_mindustry_graphics_MultiPacker 32
typedef void (*func_mindustry_content_StatusEffects$16_createIcons_mindustry_graphics_MultiPacker)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_StatusEffects$16_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int 33
typedef void (*func_mindustry_content_StatusEffects$16_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5);
#define VTABLE_mindustry_content_StatusEffects$16_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int 34
typedef void (*func_mindustry_content_StatusEffects$16_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5, jint param6);
#define VTABLE_mindustry_content_StatusEffects$16_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int 35
typedef void (*func_mindustry_content_StatusEffects$16_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
#define VTABLE_mindustry_content_StatusEffects$16_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color 36
typedef void (*func_mindustry_content_StatusEffects$16_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_content_StatusEffects$16_researchRequirements_R_Array1_mindustry_type_ItemStack 37
typedef jobject (*func_mindustry_content_StatusEffects$16_researchRequirements_R_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_emoji_R_java_lang_String 38
typedef jobject (*func_mindustry_content_StatusEffects$16_emoji_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_emojiChar_R_int 39
typedef jint (*func_mindustry_content_StatusEffects$16_emojiChar_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_hasEmoji_R_boolean 40
typedef jbool (*func_mindustry_content_StatusEffects$16_hasEmoji_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_getDependencies_arc_func_Cons 41
typedef void (*func_mindustry_content_StatusEffects$16_getDependencies_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_StatusEffects$16_onUnlock 42
typedef void (*func_mindustry_content_StatusEffects$16_onUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_isHidden_R_boolean 43
typedef jbool (*func_mindustry_content_StatusEffects$16_isHidden_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_showUnlock_R_boolean 44
typedef jbool (*func_mindustry_content_StatusEffects$16_showUnlock_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_logicVisible_R_boolean 45
typedef jbool (*func_mindustry_content_StatusEffects$16_logicVisible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_unlock 46
typedef void (*func_mindustry_content_StatusEffects$16_unlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_quietUnlock 47
typedef void (*func_mindustry_content_StatusEffects$16_quietUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_unlockedNowHost_R_boolean 48
typedef jbool (*func_mindustry_content_StatusEffects$16_unlockedNowHost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_unlockedHost_R_boolean 49
typedef jbool (*func_mindustry_content_StatusEffects$16_unlockedHost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_unlockedNow_R_boolean 50
typedef jbool (*func_mindustry_content_StatusEffects$16_unlockedNow_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_unlocked_R_boolean 51
typedef jbool (*func_mindustry_content_StatusEffects$16_unlocked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_clearUnlock 52
typedef void (*func_mindustry_content_StatusEffects$16_clearUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_locked_R_boolean 53
typedef jbool (*func_mindustry_content_StatusEffects$16_locked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects$16_init_java_lang_Runnable 54
typedef void (*func_mindustry_content_StatusEffects$16_init_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_StatusEffects$16_update_mindustry_gen_Unit_mindustry_entities_units_StatusEntry 55
typedef void (*func_mindustry_content_StatusEffects$16_update_mindustry_gen_Unit_mindustry_entities_units_StatusEntry)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_StatusEffects$16_onRemoved_mindustry_gen_Unit 56
typedef void (*func_mindustry_content_StatusEffects$16_onRemoved_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_StatusEffects$16_trans_mindustry_type_StatusEffect_mindustry_type_StatusEffect$TransitionHandler 57
typedef void (*func_mindustry_content_StatusEffects$16_trans_mindustry_type_StatusEffect_mindustry_type_StatusEffect$TransitionHandler)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_StatusEffects$16_affinity_mindustry_type_StatusEffect_mindustry_type_StatusEffect$TransitionHandler 58
typedef void (*func_mindustry_content_StatusEffects$16_affinity_mindustry_type_StatusEffect_mindustry_type_StatusEffect$TransitionHandler)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_StatusEffects$16_opposite_Array1_mindustry_type_StatusEffect 59
typedef void (*func_mindustry_content_StatusEffects$16_opposite_Array1_mindustry_type_StatusEffect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_StatusEffects$16_handleOpposite_mindustry_type_StatusEffect 60
typedef void (*func_mindustry_content_StatusEffects$16_handleOpposite_mindustry_type_StatusEffect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_StatusEffects$16_draw_mindustry_gen_Unit_float 61
typedef void (*func_mindustry_content_StatusEffects$16_draw_mindustry_gen_Unit_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_content_StatusEffects$16_draw_mindustry_gen_Unit 62
typedef void (*func_mindustry_content_StatusEffects$16_draw_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_StatusEffects$16_reactsWith_mindustry_type_StatusEffect_R_boolean 63
typedef jbool (*func_mindustry_content_StatusEffects$16_reactsWith_mindustry_type_StatusEffect_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_StatusEffects$16_applyTransition_mindustry_gen_Unit_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_float_R_boolean 64
typedef jbool (*func_mindustry_content_StatusEffects$16_applyTransition_mindustry_gen_Unit_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3);
#define VTABLE_mindustry_content_StatusEffects$16_applied_mindustry_gen_Unit_float_boolean 65
typedef void (*func_mindustry_content_StatusEffects$16_applied_mindustry_gen_Unit_float_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_content_StatusEffects$16_lambda$setStats$0_mindustry_type_StatusEffect_R_boolean 66
typedef jbool (*func_mindustry_content_StatusEffects$16_lambda$setStats$0_mindustry_type_StatusEffect_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_content_StatusEffects$16(jobject object, jint mark, jint depth);
void clinit_mindustry_content_StatusEffects$16(jcontext ctx);
void init_mindustry_content_StatusEffects$16_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
