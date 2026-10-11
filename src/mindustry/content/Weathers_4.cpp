#include "mindustry/content/Weathers_4.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/type/Weather.h"
#include "mindustry/world/meta/Attribute.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "mindustry/content/Weathers_4.h"
#include "mindustry/world/blocks/Attributes.h"
#include "mindustry/content/StatusEffects.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/type/weather/ParticleWeather.h"
#include "arc/audio/Sound.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/ctype/MappableContent.h"

extern "C" {


void mark_mindustry_content_Weathers$4(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_type_weather_ParticleWeather(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_Weathers$4 *) object;
}

void clinit_mindustry_content_Weathers$4(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_type_weather_ParticleWeather(ctx);
}

void init_mindustry_content_Weathers$4_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Weathers$4:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Weathers$4(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	init_mindustry_type_weather_ParticleWeather_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"7457ce"_j))));
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK(sp[1].o))->F_noiseColor = (jref) sp[2].o;
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[2].o;
	LINE_NUMBER(64);
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_particleRegion = (jref) (((jobject) createStringLiteral(ctx, u8"circle-small"_j)));
	LINE_NUMBER(65);
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_drawNoise = (jint(1));
	LINE_NUMBER(66);
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_statusGround = (jint(0));
	LINE_NUMBER(67);
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_useWindVector = (jint(1));
	LINE_NUMBER(68);
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_sizeMax = (jfloat(5.0f));
	LINE_NUMBER(69);
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_sizeMin = (jfloat(2.5f));
	LINE_NUMBER(70);
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_minAlpha = (jfloat(0.1f));
	LINE_NUMBER(71);
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_maxAlpha = (jfloat(0.8f));
	LINE_NUMBER(72);
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_density = (jfloat(2000.0f));
	LINE_NUMBER(73);
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_baseSpeed = (jfloat(4.3f));
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_attrs;
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Attribute_spores;
	((func_mindustry_world_blocks_Attributes_set_mindustry_world_meta_Attribute_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_set_mindustry_world_meta_Attribute_float])(ctx, sp[0].o, sp[1].o, (jfloat(1)));
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_attrs;
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Attribute_light;
	((func_mindustry_world_blocks_Attributes_set_mindustry_world_meta_Attribute_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_set_mindustry_world_meta_Attribute_float])(ctx, sp[0].o, sp[1].o, (jfloat(-0.15f)));
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_sporeSlowed;
	((mindustry_type_Weather *) NULL_CHECK(sp[0].o))->F_status = (jref) sp[1].o;
	LINE_NUMBER(77);
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_opacityMultiplier = (jfloat(0.5f));
	LINE_NUMBER(78);
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_force = (jfloat(0.1f));
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_wind;
	((mindustry_type_Weather *) NULL_CHECK(sp[0].o))->F_sound = (jref) sp[1].o;
	LINE_NUMBER(80);
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_soundVol = (jfloat(0.7f));
	LINE_NUMBER(81);
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_duration = (jfloat(25200.0f));
	LINE_NUMBER(1);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Weathers$4[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ctype_MappableContent_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_type_Weather_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_ctype_Content_init,
	(void *) M_mindustry_ctype_UnlockableContent_postInit,
	(void *) M_mindustry_ctype_UnlockableContent_afterPatch,
	(void *) M_mindustry_type_weather_ParticleWeather_load,
	(void *) M_mindustry_ctype_UnlockableContent_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_isBanned_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getLogicId_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_checkStats,
	(void *) M_mindustry_ctype_UnlockableContent_setStats,
	(void *) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats,
	(void *) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ctype_UnlockableContent_createIcons_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_ctype_UnlockableContent_researchRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_emojiChar_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getDependencies_arc_func_Cons,
	(void *) M_mindustry_ctype_UnlockableContent_onUnlock,
	(void *) M_mindustry_type_Weather_isHidden_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_showUnlock_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_logicVisible_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlock,
	(void *) M_mindustry_ctype_UnlockableContent_quietUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlocked_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_clearUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_locked_R_boolean,
	(void *) M_mindustry_type_Weather_create_R_mindustry_gen_WeatherState,
	(void *) M_mindustry_type_Weather_create_float_R_mindustry_gen_WeatherState,
	(void *) M_mindustry_type_Weather_create_float_float_R_mindustry_gen_WeatherState,
	(void *) M_mindustry_type_Weather_instance_R_mindustry_gen_WeatherState,
	(void *) M_mindustry_type_Weather_isActive_R_boolean,
	(void *) M_mindustry_type_Weather_remove,
	(void *) M_mindustry_type_weather_ParticleWeather_update_mindustry_gen_WeatherState,
	(void *) M_mindustry_type_Weather_updateEffect_mindustry_gen_WeatherState,
	(void *) M_mindustry_type_weather_ParticleWeather_drawOver_mindustry_gen_WeatherState,
	(void *) M_mindustry_type_Weather_drawUnder_mindustry_gen_WeatherState,
	(void *) M_mindustry_type_Weather_lambda$updateEffect$0_mindustry_gen_Unit,
	(void *) M_mindustry_type_Weather_lambda$instance$0_mindustry_gen_WeatherState_R_boolean,
};

static VtableEntry vtableEntries[] {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getContentType", "()Lmindustry/ctype/ContentType;" },
	{ "removeContent", "()V" },
	{ "init", "()V" },
	{ "postInit", "()V" },
	{ "afterPatch", "()V" },
	{ "load", "()V" },
	{ "loadIcon", "()V" },
	{ "hasErrored", "()Z" },
	{ "isVanilla", "()Z" },
	{ "isModded", "()Z" },
	{ "isPatchContent", "()Z" },
	{ "compareTo", "(Lmindustry/ctype/Content;)I" },
	{ "isBanned", "()Z" },
	{ "isOnPlanet", "(Lmindustry/type/Planet;)Z" },
	{ "getLogicId", "()I" },
	{ "displayDescription", "()Ljava/lang/String;" },
	{ "checkStats", "()V" },
	{ "setStats", "()V" },
	{ "computeStats", "()Lmindustry/world/meta/Stats;" },
	{ "displayExtra", "(Larc/scene/ui/layout/Table;)V" },
	{ "createIcons", "(Lmindustry/graphics/MultiPacker;)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;II)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;)V" },
	{ "researchRequirements", "()[Lmindustry/type/ItemStack;" },
	{ "emoji", "()Ljava/lang/String;" },
	{ "emojiChar", "()I" },
	{ "hasEmoji", "()Z" },
	{ "getDependencies", "(Larc/func/Cons;)V" },
	{ "onUnlock", "()V" },
	{ "isHidden", "()Z" },
	{ "showUnlock", "()Z" },
	{ "logicVisible", "()Z" },
	{ "unlock", "()V" },
	{ "quietUnlock", "()V" },
	{ "unlockedNowHost", "()Z" },
	{ "unlockedHost", "()Z" },
	{ "unlockedNow", "()Z" },
	{ "unlocked", "()Z" },
	{ "clearUnlock", "()V" },
	{ "locked", "()Z" },
	{ "create", "()Lmindustry/gen/WeatherState;" },
	{ "create", "(F)Lmindustry/gen/WeatherState;" },
	{ "create", "(FF)Lmindustry/gen/WeatherState;" },
	{ "instance", "()Lmindustry/gen/WeatherState;" },
	{ "isActive", "()Z" },
	{ "remove", "()V" },
	{ "update", "(Lmindustry/gen/WeatherState;)V" },
	{ "updateEffect", "(Lmindustry/gen/WeatherState;)V" },
	{ "drawOver", "(Lmindustry/gen/WeatherState;)V" },
	{ "drawUnder", "(Lmindustry/gen/WeatherState;)V" },
	{ "lambda$updateEffect$0", "(Lmindustry/gen/Unit;)V" },
	{ "lambda$instance$0", "(Lmindustry/gen/WeatherState;)Z" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Weathers$4_java_lang_String, 0, "(Ljava/lang/String;)V", 0 },
};

Class class_mindustry_content_Weathers$4{
		.nativeName = (intptr_t) "mindustry/content/Weathers$4",
		.parentClass = (intptr_t) &class_mindustry_type_weather_ParticleWeather,
		.size = sizeof(mindustry_content_Weathers$4),
		.classVtable = (intptr_t) vtable_mindustry_content_Weathers$4,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Weathers$4,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Weathers$4,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 66,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_Weathers$4 = registerClass(&class_mindustry_content_Weathers$4);

}

