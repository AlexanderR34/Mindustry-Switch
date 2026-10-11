#ifndef HEADER_mindustry_type_Weather
#define HEADER_mindustry_type_Weather

#include "Clearwing.h"
#include "mindustry/ctype/UnlockableContent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_type_Weather {
	mindustry_ctype_UnlockableContent parent;
	jfloat F_duration;
	jfloat F_opacityMultiplier;
	jref F_attrs;
	jref F_sound;
	jfloat F_soundVol;
	jfloat F_soundVolMin;
	jfloat F_soundVolOscMag;
	jfloat F_soundVolOscScl;
	jbool F_hidden;
	jref F_type;
	jref F_status;
	jfloat F_statusDuration;
	jbool F_statusAir;
	jbool F_statusGround;
} mindustry_type_Weather;

extern Class class_mindustry_type_Weather;

extern jobject SF_mindustry_type_Weather_rand;
extern jfloat SF_mindustry_type_Weather_boundMax;

#define VTABLE_mindustry_type_Weather_hashCode_R_int 0
typedef jint (*func_mindustry_type_Weather_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_type_Weather_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_type_Weather_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_type_Weather_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_type_Weather_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_finalize 5
typedef void (*func_mindustry_type_Weather_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_notify 6
typedef void (*func_mindustry_type_Weather_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_notifyAll 7
typedef void (*func_mindustry_type_Weather_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_wait 8
typedef void (*func_mindustry_type_Weather_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_wait_long 9
typedef void (*func_mindustry_type_Weather_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_type_Weather_wait_long_int 10
typedef void (*func_mindustry_type_Weather_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_type_Weather_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_type_Weather_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather_getContentType_R_mindustry_ctype_ContentType 12
typedef jobject (*func_mindustry_type_Weather_getContentType_R_mindustry_ctype_ContentType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_removeContent 13
typedef void (*func_mindustry_type_Weather_removeContent)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_init 14
typedef void (*func_mindustry_type_Weather_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_postInit 15
typedef void (*func_mindustry_type_Weather_postInit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_afterPatch 16
typedef void (*func_mindustry_type_Weather_afterPatch)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_load 17
typedef void (*func_mindustry_type_Weather_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_loadIcon 18
typedef void (*func_mindustry_type_Weather_loadIcon)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_hasErrored_R_boolean 19
typedef jbool (*func_mindustry_type_Weather_hasErrored_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_isVanilla_R_boolean 20
typedef jbool (*func_mindustry_type_Weather_isVanilla_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_isModded_R_boolean 21
typedef jbool (*func_mindustry_type_Weather_isModded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_isPatchContent_R_boolean 22
typedef jbool (*func_mindustry_type_Weather_isPatchContent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_compareTo_mindustry_ctype_Content_R_int 23
typedef jint (*func_mindustry_type_Weather_compareTo_mindustry_ctype_Content_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather_isBanned_R_boolean 24
typedef jbool (*func_mindustry_type_Weather_isBanned_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_isOnPlanet_mindustry_type_Planet_R_boolean 25
typedef jbool (*func_mindustry_type_Weather_isOnPlanet_mindustry_type_Planet_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather_getLogicId_R_int 26
typedef jint (*func_mindustry_type_Weather_getLogicId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_displayDescription_R_java_lang_String 27
typedef jobject (*func_mindustry_type_Weather_displayDescription_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_checkStats 28
typedef void (*func_mindustry_type_Weather_checkStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_setStats 29
typedef void (*func_mindustry_type_Weather_setStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_computeStats_R_mindustry_world_meta_Stats 30
typedef jobject (*func_mindustry_type_Weather_computeStats_R_mindustry_world_meta_Stats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_displayExtra_arc_scene_ui_layout_Table 31
typedef void (*func_mindustry_type_Weather_displayExtra_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather_createIcons_mindustry_graphics_MultiPacker 32
typedef void (*func_mindustry_type_Weather_createIcons_mindustry_graphics_MultiPacker)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int 33
typedef void (*func_mindustry_type_Weather_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5);
#define VTABLE_mindustry_type_Weather_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int 34
typedef void (*func_mindustry_type_Weather_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5, jint param6);
#define VTABLE_mindustry_type_Weather_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int 35
typedef void (*func_mindustry_type_Weather_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
#define VTABLE_mindustry_type_Weather_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color 36
typedef void (*func_mindustry_type_Weather_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_type_Weather_researchRequirements_R_Array1_mindustry_type_ItemStack 37
typedef jobject (*func_mindustry_type_Weather_researchRequirements_R_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_emoji_R_java_lang_String 38
typedef jobject (*func_mindustry_type_Weather_emoji_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_emojiChar_R_int 39
typedef jint (*func_mindustry_type_Weather_emojiChar_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_hasEmoji_R_boolean 40
typedef jbool (*func_mindustry_type_Weather_hasEmoji_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_getDependencies_arc_func_Cons 41
typedef void (*func_mindustry_type_Weather_getDependencies_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather_onUnlock 42
typedef void (*func_mindustry_type_Weather_onUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_isHidden_R_boolean 43
typedef jbool (*func_mindustry_type_Weather_isHidden_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_showUnlock_R_boolean 44
typedef jbool (*func_mindustry_type_Weather_showUnlock_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_logicVisible_R_boolean 45
typedef jbool (*func_mindustry_type_Weather_logicVisible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_unlock 46
typedef void (*func_mindustry_type_Weather_unlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_quietUnlock 47
typedef void (*func_mindustry_type_Weather_quietUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_unlockedNowHost_R_boolean 48
typedef jbool (*func_mindustry_type_Weather_unlockedNowHost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_unlockedHost_R_boolean 49
typedef jbool (*func_mindustry_type_Weather_unlockedHost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_unlockedNow_R_boolean 50
typedef jbool (*func_mindustry_type_Weather_unlockedNow_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_unlocked_R_boolean 51
typedef jbool (*func_mindustry_type_Weather_unlocked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_clearUnlock 52
typedef void (*func_mindustry_type_Weather_clearUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_locked_R_boolean 53
typedef jbool (*func_mindustry_type_Weather_locked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_create_R_mindustry_gen_WeatherState 54
typedef jobject (*func_mindustry_type_Weather_create_R_mindustry_gen_WeatherState)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_create_float_R_mindustry_gen_WeatherState 55
typedef jobject (*func_mindustry_type_Weather_create_float_R_mindustry_gen_WeatherState)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_type_Weather_create_float_float_R_mindustry_gen_WeatherState 56
typedef jobject (*func_mindustry_type_Weather_create_float_float_R_mindustry_gen_WeatherState)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_type_Weather_instance_R_mindustry_gen_WeatherState 57
typedef jobject (*func_mindustry_type_Weather_instance_R_mindustry_gen_WeatherState)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_isActive_R_boolean 58
typedef jbool (*func_mindustry_type_Weather_isActive_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_remove 59
typedef void (*func_mindustry_type_Weather_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather_update_mindustry_gen_WeatherState 60
typedef void (*func_mindustry_type_Weather_update_mindustry_gen_WeatherState)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather_updateEffect_mindustry_gen_WeatherState 61
typedef void (*func_mindustry_type_Weather_updateEffect_mindustry_gen_WeatherState)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather_drawOver_mindustry_gen_WeatherState 62
typedef void (*func_mindustry_type_Weather_drawOver_mindustry_gen_WeatherState)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather_drawUnder_mindustry_gen_WeatherState 63
typedef void (*func_mindustry_type_Weather_drawUnder_mindustry_gen_WeatherState)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather_lambda$updateEffect$0_mindustry_gen_Unit 64
typedef void (*func_mindustry_type_Weather_lambda$updateEffect$0_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather_lambda$instance$0_mindustry_gen_WeatherState_R_boolean 65
typedef jbool (*func_mindustry_type_Weather_lambda$instance$0_mindustry_gen_WeatherState_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_type_Weather(jobject object, jint mark, jint depth);
void clinit_mindustry_type_Weather(jcontext ctx);
void init_mindustry_type_Weather_java_lang_String_arc_func_Prov(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_mindustry_type_Weather_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_type_Weather_create_R_mindustry_gen_WeatherState(jcontext ctx, jobject self);
jobject M_mindustry_type_Weather_create_float_R_mindustry_gen_WeatherState(jcontext ctx, jobject self, jfloat param0);
jobject M_mindustry_type_Weather_create_float_float_R_mindustry_gen_WeatherState(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_mindustry_type_Weather_instance_R_mindustry_gen_WeatherState(jcontext ctx, jobject self);
jbool M_mindustry_type_Weather_isActive_R_boolean(jcontext ctx, jobject self);
void M_mindustry_type_Weather_remove(jcontext ctx, jobject self);
void M_mindustry_type_Weather_update_mindustry_gen_WeatherState(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_Weather_updateEffect_mindustry_gen_WeatherState(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_Weather_drawOver_mindustry_gen_WeatherState(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_Weather_drawUnder_mindustry_gen_WeatherState(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_type_Weather_drawParticles_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float_float_float_float_float_float_float_float_float_float_boolean(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9, jfloat param10, jfloat param11, jfloat param12, jfloat param13, jfloat param14, jbool param15);
void SM_mindustry_type_Weather_drawRain_float_float_float_float_float_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7);
void SM_mindustry_type_Weather_drawSplashes_Array1_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_arc_graphics_Color_mindustry_type_Liquid(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7, jobject param8);
void SM_mindustry_type_Weather_drawNoiseLayers_arc_graphics_Texture_arc_graphics_Color_float_float_float_float_float_float_int_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jint param8, jfloat param9, jfloat param10, jfloat param11, jfloat param12);
void SM_mindustry_type_Weather_drawNoise_arc_graphics_Texture_arc_graphics_Color_float_float_float_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8);
jbool M_mindustry_type_Weather_isHidden_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_type_Weather_getContentType_R_mindustry_ctype_ContentType(jcontext ctx, jobject self);
void SM_mindustry_type_Weather_createWeather_mindustry_type_Weather_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void M_mindustry_type_Weather_lambda$updateEffect$0_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_type_Weather_lambda$instance$0_mindustry_gen_WeatherState_R_boolean(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
