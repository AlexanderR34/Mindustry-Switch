#ifndef HEADER_mindustry_content_Weathers$3
#define HEADER_mindustry_content_Weathers$3

#include "Clearwing.h"
#include "mindustry/type/weather/ParticleWeather.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_Weathers$3 {
	mindustry_type_weather_ParticleWeather parent;
} mindustry_content_Weathers$3;

extern Class class_mindustry_content_Weathers$3;


#define VTABLE_mindustry_content_Weathers$3_hashCode_R_int 0
typedef jint (*func_mindustry_content_Weathers$3_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_Weathers$3_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Weathers$3_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_Weathers$3_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_Weathers$3_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_Weathers$3_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_finalize 5
typedef void (*func_mindustry_content_Weathers$3_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_notify 6
typedef void (*func_mindustry_content_Weathers$3_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_notifyAll 7
typedef void (*func_mindustry_content_Weathers$3_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_wait 8
typedef void (*func_mindustry_content_Weathers$3_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_wait_long 9
typedef void (*func_mindustry_content_Weathers$3_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_Weathers$3_wait_long_int 10
typedef void (*func_mindustry_content_Weathers$3_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_content_Weathers$3_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_content_Weathers$3_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Weathers$3_getContentType_R_mindustry_ctype_ContentType 12
typedef jobject (*func_mindustry_content_Weathers$3_getContentType_R_mindustry_ctype_ContentType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_removeContent 13
typedef void (*func_mindustry_content_Weathers$3_removeContent)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_init 14
typedef void (*func_mindustry_content_Weathers$3_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_postInit 15
typedef void (*func_mindustry_content_Weathers$3_postInit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_afterPatch 16
typedef void (*func_mindustry_content_Weathers$3_afterPatch)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_load 17
typedef void (*func_mindustry_content_Weathers$3_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_loadIcon 18
typedef void (*func_mindustry_content_Weathers$3_loadIcon)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_hasErrored_R_boolean 19
typedef jbool (*func_mindustry_content_Weathers$3_hasErrored_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_isVanilla_R_boolean 20
typedef jbool (*func_mindustry_content_Weathers$3_isVanilla_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_isModded_R_boolean 21
typedef jbool (*func_mindustry_content_Weathers$3_isModded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_isPatchContent_R_boolean 22
typedef jbool (*func_mindustry_content_Weathers$3_isPatchContent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_compareTo_mindustry_ctype_Content_R_int 23
typedef jint (*func_mindustry_content_Weathers$3_compareTo_mindustry_ctype_Content_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Weathers$3_isBanned_R_boolean 24
typedef jbool (*func_mindustry_content_Weathers$3_isBanned_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_isOnPlanet_mindustry_type_Planet_R_boolean 25
typedef jbool (*func_mindustry_content_Weathers$3_isOnPlanet_mindustry_type_Planet_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Weathers$3_getLogicId_R_int 26
typedef jint (*func_mindustry_content_Weathers$3_getLogicId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_displayDescription_R_java_lang_String 27
typedef jobject (*func_mindustry_content_Weathers$3_displayDescription_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_checkStats 28
typedef void (*func_mindustry_content_Weathers$3_checkStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_setStats 29
typedef void (*func_mindustry_content_Weathers$3_setStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_computeStats_R_mindustry_world_meta_Stats 30
typedef jobject (*func_mindustry_content_Weathers$3_computeStats_R_mindustry_world_meta_Stats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_displayExtra_arc_scene_ui_layout_Table 31
typedef void (*func_mindustry_content_Weathers$3_displayExtra_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Weathers$3_createIcons_mindustry_graphics_MultiPacker 32
typedef void (*func_mindustry_content_Weathers$3_createIcons_mindustry_graphics_MultiPacker)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Weathers$3_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int 33
typedef void (*func_mindustry_content_Weathers$3_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5);
#define VTABLE_mindustry_content_Weathers$3_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int 34
typedef void (*func_mindustry_content_Weathers$3_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5, jint param6);
#define VTABLE_mindustry_content_Weathers$3_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int 35
typedef void (*func_mindustry_content_Weathers$3_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
#define VTABLE_mindustry_content_Weathers$3_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color 36
typedef void (*func_mindustry_content_Weathers$3_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_content_Weathers$3_researchRequirements_R_Array1_mindustry_type_ItemStack 37
typedef jobject (*func_mindustry_content_Weathers$3_researchRequirements_R_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_emoji_R_java_lang_String 38
typedef jobject (*func_mindustry_content_Weathers$3_emoji_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_emojiChar_R_int 39
typedef jint (*func_mindustry_content_Weathers$3_emojiChar_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_hasEmoji_R_boolean 40
typedef jbool (*func_mindustry_content_Weathers$3_hasEmoji_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_getDependencies_arc_func_Cons 41
typedef void (*func_mindustry_content_Weathers$3_getDependencies_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Weathers$3_onUnlock 42
typedef void (*func_mindustry_content_Weathers$3_onUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_isHidden_R_boolean 43
typedef jbool (*func_mindustry_content_Weathers$3_isHidden_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_showUnlock_R_boolean 44
typedef jbool (*func_mindustry_content_Weathers$3_showUnlock_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_logicVisible_R_boolean 45
typedef jbool (*func_mindustry_content_Weathers$3_logicVisible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_unlock 46
typedef void (*func_mindustry_content_Weathers$3_unlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_quietUnlock 47
typedef void (*func_mindustry_content_Weathers$3_quietUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_unlockedNowHost_R_boolean 48
typedef jbool (*func_mindustry_content_Weathers$3_unlockedNowHost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_unlockedHost_R_boolean 49
typedef jbool (*func_mindustry_content_Weathers$3_unlockedHost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_unlockedNow_R_boolean 50
typedef jbool (*func_mindustry_content_Weathers$3_unlockedNow_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_unlocked_R_boolean 51
typedef jbool (*func_mindustry_content_Weathers$3_unlocked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_clearUnlock 52
typedef void (*func_mindustry_content_Weathers$3_clearUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_locked_R_boolean 53
typedef jbool (*func_mindustry_content_Weathers$3_locked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_create_R_mindustry_gen_WeatherState 54
typedef jobject (*func_mindustry_content_Weathers$3_create_R_mindustry_gen_WeatherState)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_create_float_R_mindustry_gen_WeatherState 55
typedef jobject (*func_mindustry_content_Weathers$3_create_float_R_mindustry_gen_WeatherState)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_content_Weathers$3_create_float_float_R_mindustry_gen_WeatherState 56
typedef jobject (*func_mindustry_content_Weathers$3_create_float_float_R_mindustry_gen_WeatherState)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_content_Weathers$3_instance_R_mindustry_gen_WeatherState 57
typedef jobject (*func_mindustry_content_Weathers$3_instance_R_mindustry_gen_WeatherState)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_isActive_R_boolean 58
typedef jbool (*func_mindustry_content_Weathers$3_isActive_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_remove 59
typedef void (*func_mindustry_content_Weathers$3_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers$3_update_mindustry_gen_WeatherState 60
typedef void (*func_mindustry_content_Weathers$3_update_mindustry_gen_WeatherState)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Weathers$3_updateEffect_mindustry_gen_WeatherState 61
typedef void (*func_mindustry_content_Weathers$3_updateEffect_mindustry_gen_WeatherState)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Weathers$3_drawOver_mindustry_gen_WeatherState 62
typedef void (*func_mindustry_content_Weathers$3_drawOver_mindustry_gen_WeatherState)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Weathers$3_drawUnder_mindustry_gen_WeatherState 63
typedef void (*func_mindustry_content_Weathers$3_drawUnder_mindustry_gen_WeatherState)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Weathers$3_lambda$updateEffect$0_mindustry_gen_Unit 64
typedef void (*func_mindustry_content_Weathers$3_lambda$updateEffect$0_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Weathers$3_lambda$instance$0_mindustry_gen_WeatherState_R_boolean 65
typedef jbool (*func_mindustry_content_Weathers$3_lambda$instance$0_mindustry_gen_WeatherState_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_content_Weathers$3(jobject object, jint mark, jint depth);
void clinit_mindustry_content_Weathers$3(jcontext ctx);
void init_mindustry_content_Weathers$3_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
