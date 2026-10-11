#include "mindustry/type/weather/RainWeather.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "mindustry/type/weather/RainWeather.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/type/Weather.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/gen/WeatherState.h"
#include "mindustry/content/Liquids.h"

extern "C" {


void mark_mindustry_type_weather_RainWeather(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_type_Weather(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_type_weather_RainWeather *) object;
	if (self->F_liquid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_liquid)->clazz)->markFunction)((jobject) self->F_liquid, mark, depth + 1);
	if (self->F_splashes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_splashes)->clazz)->markFunction)((jobject) self->F_splashes, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

void clinit_mindustry_type_weather_RainWeather(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_type_Weather(ctx);
}

void init_mindustry_type_weather_RainWeather_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weather/RainWeather:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_weather_RainWeather(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(17);
	init_mindustry_type_Weather_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(11);
	((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_yspeed = (jfloat(5.0f));
	((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_xspeed = (jfloat(1.5f));
	((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_padding = (jfloat(16.0f));
	((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_density = (jfloat(1200.0f));
	((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_stroke = (jfloat(0.75f));
	((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_sizeMin = (jfloat(8.0f));
	((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_sizeMax = (jfloat(40.0f));
	((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_splashTimeScale = (jfloat(22.0f));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Liquids(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Liquids_water;
	((mindustry_type_weather_RainWeather *) NULL_CHECK(sp[0].o))->F_liquid = (jref) sp[1].o;
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (12));
	((mindustry_type_weather_RainWeather *) NULL_CHECK(sp[0].o))->F_splashes = (jref) sp[1].o;
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"7a95eaff"_j))));
	((mindustry_type_weather_RainWeather *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_weather_RainWeather_load(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weather/RainWeather:load", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(22);
	M_mindustry_ctype_Content_load(ctx, (frame[0].o));
	LINE_NUMBER(24);
	frame[1].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_splashes;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_splashes;
	jint temp0 = frame[1].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"splash-\u0001"_j.string, 1, boxInteger(ctx, (frame[1].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(24);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_weather_RainWeather_drawOver_mindustry_gen_WeatherState(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weather/RainWeather:drawOver", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(31);
	jfloat temp0 = (jfloat)((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_sizeMin;
	jfloat temp1 = (jfloat)((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_sizeMax;
	jfloat temp2 = (jfloat)((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_xspeed;
	jfloat temp3 = (jfloat)((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_yspeed;
	jfloat temp4 = (jfloat)((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_density;
	jfloat temp5 = (jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[1].o)))->F_intensity;
	jfloat temp6 = (jfloat)((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_stroke;
	sp[0].o = (jobject)((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_color;
	SM_mindustry_type_Weather_drawRain_float_float_float_float_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, sp[0].o);
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_weather_RainWeather_drawUnder_mindustry_gen_WeatherState(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weather/RainWeather:drawUnder", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_splashes;
	jfloat temp0 = (jfloat)((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_sizeMax;
	jfloat temp1 = (jfloat)((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_density;
	jfloat temp2 = (jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[1].o)))->F_intensity;
	jfloat temp3 = (jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[1].o)))->F_opacity;
	jfloat temp4 = (jfloat)((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_splashTimeScale;
	jfloat temp5 = (jfloat)((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_stroke;
	sp[1].o = (jobject)((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_color;
	sp[2].o = (jobject)((mindustry_type_weather_RainWeather *) NULL_CHECK((frame[0].o)))->F_liquid;
	SM_mindustry_type_Weather_drawSplashes_Array1_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_arc_graphics_Color_mindustry_type_Liquid(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, sp[1].o, sp[2].o);
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_type_weather_RainWeather[] {
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
	(void *) M_mindustry_type_weather_RainWeather_load,
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
	(void *) M_mindustry_type_Weather_update_mindustry_gen_WeatherState,
	(void *) M_mindustry_type_Weather_updateEffect_mindustry_gen_WeatherState,
	(void *) M_mindustry_type_weather_RainWeather_drawOver_mindustry_gen_WeatherState,
	(void *) M_mindustry_type_weather_RainWeather_drawUnder_mindustry_gen_WeatherState,
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

static FieldMetadata fields[] {
	{ "yspeed", &class_float, offsetof(mindustry_type_weather_RainWeather, F_yspeed), "F", 1 },
	{ "xspeed", &class_float, offsetof(mindustry_type_weather_RainWeather, F_xspeed), "F", 1 },
	{ "padding", &class_float, offsetof(mindustry_type_weather_RainWeather, F_padding), "F", 1 },
	{ "density", &class_float, offsetof(mindustry_type_weather_RainWeather, F_density), "F", 1 },
	{ "stroke", &class_float, offsetof(mindustry_type_weather_RainWeather, F_stroke), "F", 1 },
	{ "sizeMin", &class_float, offsetof(mindustry_type_weather_RainWeather, F_sizeMin), "F", 1 },
	{ "sizeMax", &class_float, offsetof(mindustry_type_weather_RainWeather, F_sizeMax), "F", 1 },
	{ "splashTimeScale", &class_float, offsetof(mindustry_type_weather_RainWeather, F_splashTimeScale), "F", 1 },
	{ "liquid", &class_mindustry_type_Liquid, offsetof(mindustry_type_weather_RainWeather, F_liquid), "Lmindustry/type/Liquid;", 1 },
	{ "splashes", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), offsetof(mindustry_type_weather_RainWeather, F_splashes), "[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_type_weather_RainWeather, F_color), "Larc/graphics/Color;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_weather_RainWeather_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "load", (intptr_t) M_mindustry_type_weather_RainWeather_load, VTABLE_mindustry_type_weather_RainWeather_load, "()V", 1 },
	{ "drawOver", (intptr_t) M_mindustry_type_weather_RainWeather_drawOver_mindustry_gen_WeatherState, VTABLE_mindustry_type_weather_RainWeather_drawOver_mindustry_gen_WeatherState, "(Lmindustry/gen/WeatherState;)V", 1 },
	{ "drawUnder", (intptr_t) M_mindustry_type_weather_RainWeather_drawUnder_mindustry_gen_WeatherState, VTABLE_mindustry_type_weather_RainWeather_drawUnder_mindustry_gen_WeatherState, "(Lmindustry/gen/WeatherState;)V", 1 },
};

Class class_mindustry_type_weather_RainWeather{
		.nativeName = (intptr_t) "mindustry/type/weather/RainWeather",
		.parentClass = (intptr_t) &class_mindustry_type_Weather,
		.size = sizeof(mindustry_type_weather_RainWeather),
		.classVtable = (intptr_t) vtable_mindustry_type_weather_RainWeather,
		.staticInitializer = (intptr_t) clinit_mindustry_type_weather_RainWeather,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_type_weather_RainWeather,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 66,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_weather_RainWeather = registerClass(&class_mindustry_type_weather_RainWeather);

}
