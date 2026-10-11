#include "mindustry/type/weather/ParticleWeather.h"
#include "arc/assets/AssetDescriptor.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/GLTexture.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/String.h"
#include "mindustry/type/weather/ParticleWeather.h"
#include "mindustry/gen/Physicsc.h"
#include "arc/util/Tmp.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ctype/MappableContent.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/type/Weather.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Time.h"
#include "arc/graphics/Texture.h"
#include "arc/util/Nullable.h"
#include "arc/assets/AssetManager.h"
#include "mindustry/entities/EntityGroup.h"
#include "java/lang/Object.h"
#include "mindustry/ctype/Content.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/graphics/Texture_TextureWrap.h"
#include "mindustry/gen/WeatherState.h"
#include "java/lang/Class.h"

extern "C" {


void mark_mindustry_type_weather_ParticleWeather(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_type_weather_ParticleWeather *) object;
	if (self->F_particleRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_particleRegion)->clazz)->markFunction)((jobject) self->F_particleRegion, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_region)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_region)->clazz)->markFunction)((jobject) self->F_region, mark, depth + 1);
	if (self->F_noiseColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_noiseColor)->clazz)->markFunction)((jobject) self->F_noiseColor, mark, depth + 1);
	if (self->F_noisePath)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_noisePath)->clazz)->markFunction)((jobject) self->F_noisePath, mark, depth + 1);
	if (self->F_noise)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_noise)->clazz)->markFunction)((jobject) self->F_noise, mark, depth + 1);
}

void clinit_mindustry_type_weather_ParticleWeather(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_type_Weather(ctx);
}

void init_mindustry_type_weather_ParticleWeather_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weather/ParticleWeather:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_weather_ParticleWeather(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	init_mindustry_type_Weather_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(12);
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_particleRegion = (jref) (((jobject) createStringLiteral(ctx, u8"circle-shadow"_j)));
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(15);
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_yspeed = (jfloat(-2.0f));
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_xspeed = (jfloat(0.25f));
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_padding = (jfloat(16.0f));
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_sizeMin = (jfloat(2.4f));
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_sizeMax = (jfloat(12.0f));
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_density = (jfloat(1200.0f));
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_minAlpha = (jfloat(1));
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_maxAlpha = (jfloat(1));
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_force = (jfloat(0));
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_noiseScale = (jfloat(2000.0f));
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_baseSpeed = (jfloat(6.1f));
	LINE_NUMBER(16);
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_sinSclMin = (jfloat(30.0f));
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_sinSclMax = (jfloat(80.0f));
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_sinMagMin = (jfloat(1));
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_sinMagMax = (jfloat(7.0f));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_color;
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK(sp[0].o))->F_noiseColor = (jref) sp[1].o;
	LINE_NUMBER(19);
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_drawNoise = (jint(0));
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_drawParticles = (jint(1));
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_useWindVector = (jint(0));
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_randomParticleRotation = (jint(0));
	LINE_NUMBER(20);
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_noiseLayers = (jint(1));
	LINE_NUMBER(21);
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_noiseLayerSpeedM = (jfloat(1.1f));
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_noiseLayerAlphaM = (jfloat(0.8f));
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_noiseLayerSclM = (jfloat(0.99f));
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_noiseLayerColorM = (jfloat(1));
	LINE_NUMBER(22);
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_noisePath = (jref) (((jobject) createStringLiteral(ctx, u8"noiseAlpha"_j)));
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_weather_ParticleWeather_load(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weather/ParticleWeather:load", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	M_mindustry_ctype_Content_load(ctx, (frame[0].o));
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_particleRegion;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK(sp[0].o))->F_region = (jref) sp[1].o;
	LINE_NUMBER(36);
	if (((jint)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_drawNoise) == 0) goto label_3;
	}
	clinit_arc_Core(ctx);
	(sp++)->o = SF_arc_Core_assets;
	if ((--sp)->o == nullptr) goto label_3;
	{
	LINE_NUMBER(37);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_noisePath;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"sprites/\u0001.png"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, (((jobject) &class_arc_graphics_Texture)));
	}
label_3:;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_weather_ParticleWeather_update_mindustry_gen_WeatherState(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weather/ParticleWeather:update", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(43);
	frame[2].f = ((((jfloat)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_force) * ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[1].o)))->F_intensity)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(44);
	if ((floatCompare((frame[2].f), (jfloat(1,000000e-03f)), -1)) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_gen_WeatherState *) NULL_CHECK((frame[1].o)))->F_windVector;
	frame[3].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) * (frame[2].f));
	sp[0].o = (jobject)((mindustry_gen_WeatherState *) NULL_CHECK((frame[1].o)))->F_windVector;
	frame[4].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) * (frame[2].f));
	LINE_NUMBER(47);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(48);
	((func_mindustry_gen_Unit_impulse_float_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Unit_impulse_float_float])(ctx, (frame[6].o), (frame[3].f), (frame[4].f));
	LINE_NUMBER(49);
	goto label_6;
	}
label_2:;
	LINE_NUMBER(51);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_weather_ParticleWeather_drawOver_mindustry_gen_WeatherState(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[26];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weather/ParticleWeather:drawOver", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(57);
	if (((jint)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_useWindVector) == 0) goto label_1;
	}
	{
	LINE_NUMBER(58);
	frame[4].f = (((jfloat)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_baseSpeed) * ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[1].o)))->F_intensity));
	LINE_NUMBER(59);
	sp[0].o = (jobject)((mindustry_gen_WeatherState *) NULL_CHECK((frame[1].o)))->F_windVector;
	frame[2].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) * (frame[4].f));
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_gen_WeatherState *) NULL_CHECK((frame[1].o)))->F_windVector;
	frame[3].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) * (frame[4].f));
	LINE_NUMBER(61);
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(62);
	frame[2].f = ((jfloat)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_xspeed);
	LINE_NUMBER(63);
	frame[3].f = ((jfloat)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_yspeed);
	}
label_6:;
	{
	LINE_NUMBER(66);
	if (((jint)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_drawNoise) == 0) goto label_8;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_noise;
	if (sp[0].o != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_assets;
	sp[2].o = (jobject)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_noisePath;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"sprites/\u0001.png"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, (((jobject) &class_arc_graphics_Texture)));
	((mindustry_type_weather_ParticleWeather *) NULL_CHECK(sp[0].o))->F_noise = (jref) (checkCast(ctx, &class_arc_graphics_Texture, sp[1].o));
	LINE_NUMBER(69);
	sp[0].o = (jobject)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_noise;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_repeat;
	((func_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(70);
	sp[0].o = (jobject)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_noise;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	{
	LINE_NUMBER(73);
	frame[4].f = (jfloat(1));
	frame[5].f = (jfloat(1));
	frame[6].f = (jfloat(1));
	frame[7].f = (jfloat(0));
	LINE_NUMBER(74);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_noiseColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(75);
	frame[9].i = (jint(0));
	}
label_19:;
	{
	if ((frame[9].i) >= ((jint)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_noiseLayers)) goto label_8;
	}
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_noise;
	sp[1].o = (jobject)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_noiseColor;
	jfloat temp0 = ((jfloat)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_noiseScale) * (frame[5].f);
	jfloat temp1 = (((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[1].o)))->F_opacity) * (frame[6].f)) * ((jfloat)((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_opacityMultiplier);
	jfloat temp2 = frame[4].f;
	sp[2].f = temp0;
	sp[3].f = temp1;
	sp[4].f = temp2;
	sp += 5;
	if (((jint)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_useWindVector) == 0) goto label_21;
	}
	INST_FCONST(1);
	goto label_22;
label_21:;
	INST_ALOAD(0);
	sp[-1].f = ((mindustry_type_weather_ParticleWeather *) NULL_CHECK(sp[-1].o))->F_baseSpeed;
label_22:;
	{
	sp -= 6;
	SM_mindustry_type_Weather_drawNoise_arc_graphics_Texture_arc_graphics_Color_float_float_float_float_float_float_float(ctx, sp[0].o, sp[1].o, sp[2].f, sp[3].f, (sp[4].f * sp[5].f), ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[1].o)))->F_intensity), (frame[2].f), (frame[3].f), (frame[7].f));
	LINE_NUMBER(77);
	frame[4].f = ((frame[4].f) * ((jfloat)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_noiseLayerSpeedM));
	LINE_NUMBER(78);
	frame[6].f = ((frame[6].f) * ((jfloat)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_noiseLayerAlphaM));
	LINE_NUMBER(79);
	frame[5].f = ((frame[5].f) * ((jfloat)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_noiseLayerSclM));
	LINE_NUMBER(80);
	frame[7].f = ((frame[7].f) + (jfloat(0.29f)));
	LINE_NUMBER(81);
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, (frame[8].o), ((jfloat)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_noiseLayerColorM));
	LINE_NUMBER(75);
	INST_IINC(9, 1);
	goto label_19;
	}
label_8:;
	{
	LINE_NUMBER(85);
	if (((jint)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_drawParticles) == 0) goto label_29;
	}
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_region;
	sp[1].o = (jobject)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_color;
	SM_mindustry_type_Weather_drawParticles_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float_float_float_float_float_float_float_float_float_float_boolean(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_sizeMin), ((jfloat)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_sizeMax), ((jfloat)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_density), ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[1].o)))->F_intensity), ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[1].o)))->F_opacity), (frame[2].f), (frame[3].f), ((jfloat)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_minAlpha), ((jfloat)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_maxAlpha), ((jfloat)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_sinSclMin), ((jfloat)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_sinSclMax), ((jfloat)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_sinMagMin), ((jfloat)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_sinMagMax), ((jint)((mindustry_type_weather_ParticleWeather *) NULL_CHECK((frame[0].o)))->F_randomParticleRotation));
	}
label_29:;
	LINE_NUMBER(88);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_type_weather_ParticleWeather;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field noise
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[29]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_type_weather_ParticleWeather[] {
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

static FieldMetadata fields[] {
	{ "particleRegion", &class_java_lang_String, offsetof(mindustry_type_weather_ParticleWeather, F_particleRegion), "Ljava/lang/String;", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_type_weather_ParticleWeather, F_color), "Larc/graphics/Color;", 1 },
	{ "region", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_weather_ParticleWeather, F_region), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "yspeed", &class_float, offsetof(mindustry_type_weather_ParticleWeather, F_yspeed), "F", 1 },
	{ "xspeed", &class_float, offsetof(mindustry_type_weather_ParticleWeather, F_xspeed), "F", 1 },
	{ "padding", &class_float, offsetof(mindustry_type_weather_ParticleWeather, F_padding), "F", 1 },
	{ "sizeMin", &class_float, offsetof(mindustry_type_weather_ParticleWeather, F_sizeMin), "F", 1 },
	{ "sizeMax", &class_float, offsetof(mindustry_type_weather_ParticleWeather, F_sizeMax), "F", 1 },
	{ "density", &class_float, offsetof(mindustry_type_weather_ParticleWeather, F_density), "F", 1 },
	{ "minAlpha", &class_float, offsetof(mindustry_type_weather_ParticleWeather, F_minAlpha), "F", 1 },
	{ "maxAlpha", &class_float, offsetof(mindustry_type_weather_ParticleWeather, F_maxAlpha), "F", 1 },
	{ "force", &class_float, offsetof(mindustry_type_weather_ParticleWeather, F_force), "F", 1 },
	{ "noiseScale", &class_float, offsetof(mindustry_type_weather_ParticleWeather, F_noiseScale), "F", 1 },
	{ "baseSpeed", &class_float, offsetof(mindustry_type_weather_ParticleWeather, F_baseSpeed), "F", 1 },
	{ "sinSclMin", &class_float, offsetof(mindustry_type_weather_ParticleWeather, F_sinSclMin), "F", 1 },
	{ "sinSclMax", &class_float, offsetof(mindustry_type_weather_ParticleWeather, F_sinSclMax), "F", 1 },
	{ "sinMagMin", &class_float, offsetof(mindustry_type_weather_ParticleWeather, F_sinMagMin), "F", 1 },
	{ "sinMagMax", &class_float, offsetof(mindustry_type_weather_ParticleWeather, F_sinMagMax), "F", 1 },
	{ "noiseColor", &class_arc_graphics_Color, offsetof(mindustry_type_weather_ParticleWeather, F_noiseColor), "Larc/graphics/Color;", 1 },
	{ "drawNoise", &class_boolean, offsetof(mindustry_type_weather_ParticleWeather, F_drawNoise), "Z", 1 },
	{ "drawParticles", &class_boolean, offsetof(mindustry_type_weather_ParticleWeather, F_drawParticles), "Z", 1 },
	{ "useWindVector", &class_boolean, offsetof(mindustry_type_weather_ParticleWeather, F_useWindVector), "Z", 1 },
	{ "randomParticleRotation", &class_boolean, offsetof(mindustry_type_weather_ParticleWeather, F_randomParticleRotation), "Z", 1 },
	{ "noiseLayers", &class_int, offsetof(mindustry_type_weather_ParticleWeather, F_noiseLayers), "I", 1 },
	{ "noiseLayerSpeedM", &class_float, offsetof(mindustry_type_weather_ParticleWeather, F_noiseLayerSpeedM), "F", 1 },
	{ "noiseLayerAlphaM", &class_float, offsetof(mindustry_type_weather_ParticleWeather, F_noiseLayerAlphaM), "F", 1 },
	{ "noiseLayerSclM", &class_float, offsetof(mindustry_type_weather_ParticleWeather, F_noiseLayerSclM), "F", 1 },
	{ "noiseLayerColorM", &class_float, offsetof(mindustry_type_weather_ParticleWeather, F_noiseLayerColorM), "F", 1 },
	{ "noisePath", &class_java_lang_String, offsetof(mindustry_type_weather_ParticleWeather, F_noisePath), "Ljava/lang/String;", 1 },
	{ "noise", &class_arc_graphics_Texture, offsetof(mindustry_type_weather_ParticleWeather, F_noise), "Larc/graphics/Texture;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_weather_ParticleWeather_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "load", (intptr_t) M_mindustry_type_weather_ParticleWeather_load, VTABLE_mindustry_type_weather_ParticleWeather_load, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_type_weather_ParticleWeather_update_mindustry_gen_WeatherState, VTABLE_mindustry_type_weather_ParticleWeather_update_mindustry_gen_WeatherState, "(Lmindustry/gen/WeatherState;)V", 1 },
	{ "drawOver", (intptr_t) M_mindustry_type_weather_ParticleWeather_drawOver_mindustry_gen_WeatherState, VTABLE_mindustry_type_weather_ParticleWeather_drawOver_mindustry_gen_WeatherState, "(Lmindustry/gen/WeatherState;)V", 1 },
};

Class class_mindustry_type_weather_ParticleWeather{
		.nativeName = (intptr_t) "mindustry/type/weather/ParticleWeather",
		.parentClass = (intptr_t) &class_mindustry_type_Weather,
		.size = sizeof(mindustry_type_weather_ParticleWeather),
		.classVtable = (intptr_t) vtable_mindustry_type_weather_ParticleWeather,
		.staticInitializer = (intptr_t) clinit_mindustry_type_weather_ParticleWeather,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_type_weather_ParticleWeather,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 30,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 66,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_weather_ParticleWeather = registerClass(&class_mindustry_type_weather_ParticleWeather);

}
