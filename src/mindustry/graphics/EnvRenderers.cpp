#include "mindustry/graphics/EnvRenderers.h"
#include "arc/assets/AssetDescriptor.h"
#include "mindustry/graphics/Shaders_SurfaceShader.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/GLTexture.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/math/Rand.h"
#include "mindustry/game/Rules.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/func/Cons.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/String.h"
#include "mindustry/core/Renderer.h"
#include "arc/graphics/Blending.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/graphics/EnvRenderers_invoke_arc_func_Cons_1.h"
#include "mindustry/type/Weather.h"
#include "mindustry/graphics/Shaders.h"
#include "arc/util/Time.h"
#include "arc/graphics/Texture.h"
#include "arc/assets/AssetManager.h"
#include "java/lang/Object.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "mindustry/graphics/EnvRenderers_invoke_java_lang_Runnable_4.h"
#include "mindustry/graphics/EnvRenderers_invoke_java_lang_Runnable_5.h"
#include "mindustry/graphics/EnvRenderers_1.h"
#include "mindustry/graphics/EnvRenderers_invoke_java_lang_Runnable_6.h"
#include "java/lang/Class.h"
#include "mindustry/graphics/EnvRenderers_invoke_java_lang_Runnable_7.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"
#include "arc/graphics/Camera.h"

extern "C" {


void mark_mindustry_graphics_EnvRenderers(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_graphics_EnvRenderers *) object;
}

void clinit_mindustry_graphics_EnvRenderers(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_EnvRenderers(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/EnvRenderers:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_EnvRenderers(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_EnvRenderers_init(jcontext ctx) {
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/EnvRenderers:init", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_EnvRenderers(ctx);
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"353982"_j))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(20);
	clinit_arc_math_Rand(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(22);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sprites/rays.png"_j))), (((jobject) &class_arc_graphics_Texture)));
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_EnvRenderers_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_graphics_EnvRenderers_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_graphics_EnvRenderers_invoke_arc_func_Cons_1);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"a7c1fa"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(27);
	frame[3].f = (jfloat(0.03f));
	frame[4].f = (jfloat(45.0f));
	LINE_NUMBER(28);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_cosDeg_float_R_float(ctx, (frame[4].f));
	frame[5].f = (temp0 * (frame[3].f));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sinDeg_float_R_float(ctx, (frame[4].f));
	frame[6].f = (temp1 * (frame[3].f));
	LINE_NUMBER(30);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jint temp2 = jint(4);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_EnvRenderers_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_graphics_EnvRenderers_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_graphics_EnvRenderers_invoke_java_lang_Runnable_4);
		proxy->F_field4 = (frame[6].f);
		proxy->F_field3 = (frame[5].f);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_Renderer_addEnvRenderer_int_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_addEnvRenderer_int_java_lang_Runnable])(ctx, sp[0].o, temp2, sp[1].o);
	LINE_NUMBER(92);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"sprites/distortAlpha.png"_j));
	sp[2].o = ((jobject) &class_arc_graphics_Texture);
	clinit_mindustry_graphics_EnvRenderers$1(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_graphics_EnvRenderers$1);
	init_mindustry_graphics_EnvRenderers$1(ctx, sp[3].o);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(99);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jint temp3 = 16;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_EnvRenderers_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_graphics_EnvRenderers_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_graphics_EnvRenderers_invoke_java_lang_Runnable_5);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_Renderer_addEnvRenderer_int_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_addEnvRenderer_int_java_lang_Runnable])(ctx, sp[0].o, temp3, sp[1].o);
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_EnvRenderers_lambda$init$4(jcontext ctx) {
	jtype frame[14];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/EnvRenderers:lambda$init$4", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_EnvRenderers(ctx);
	{
	LINE_NUMBER(100);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sprites/distortAlpha.png"_j))), (((jobject) &class_arc_graphics_Texture)));
	frame[0].o = (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o));
	LINE_NUMBER(103);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) == 0) goto label_2;
	}
	(sp++)->f = jfloat(156.0f);
	goto label_3;
label_2:;
	(sp++)->f = jfloat(129.0f);
label_3:;
	{
	sp -= 1;
	SM_arc_graphics_g2d_Draw_z_float(ctx, sp[0].f);
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_scarlet;
	SM_mindustry_type_Weather_drawNoiseLayers_arc_graphics_Texture_arc_graphics_Color_float_float_float_float_float_float_int_float_float_float_float(ctx, sp[0].o, sp[1].o, (jfloat(1000.0f)), (jfloat(0.24f)), (jfloat(0.4f)), (jfloat(1)), (jfloat(1)), (jfloat(0)), (jint(4)), (jfloat(-1.3f)), (jfloat(0.7f)), (jfloat(0.8f)), (jfloat(0.9f)));
	LINE_NUMBER(105);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_EnvRenderers_lambda$init$1_arc_graphics_Color_arc_math_Rand_arc_graphics_Color_float_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4) {
	jtype frame[27];
	auto stack = &frame[21];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/EnvRenderers:lambda$init$1", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_EnvRenderers(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(31);
	jfloat temp0 = jfloat(141.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_EnvRenderers_invoke_java_lang_Runnable_6(ctx);
		auto proxy = (mindustry_graphics_EnvRenderers_invoke_java_lang_Runnable_6 *) gcAlloc(ctx, &class_mindustry_graphics_EnvRenderers_invoke_java_lang_Runnable_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(41);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(142.0f)));
	LINE_NUMBER(43);
	frame[5].i = (50);
	LINE_NUMBER(44);
	frame[6].f = (jfloat(2000.0f));
	LINE_NUMBER(45);
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, (frame[1].o), (jlong(0)));
	LINE_NUMBER(47);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_additive;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(49);
	frame[7].f = ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) / (frame[6].f));
	LINE_NUMBER(50);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sprites/rays.png"_j))), (((jobject) &class_arc_graphics_Texture)));
	frame[8].o = (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o));
	LINE_NUMBER(52);
	frame[9].i = (jint(0));
	}
label_9:;
	{
	if ((frame[9].i) >= (frame[5].i)) goto label_10;
	}
	{
	LINE_NUMBER(53);
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, (frame[1].o), (jfloat(0)), (jfloat(1)));
	frame[10].f = temp0;
	LINE_NUMBER(54);
	frame[11].f = ((frame[7].f) + (frame[10].f));
	LINE_NUMBER(56);
	frame[12].i = (jint((frame[11].f)));
	LINE_NUMBER(57);
	frame[13].f = (fmodf((frame[11].f), (jfloat(1))));
	LINE_NUMBER(58);
	jfloat temp1 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, (frame[1].o), (jfloat(0.2f)), (jfloat(0.7f)));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_slope_float_R_float(ctx, (frame[13].f));
	frame[14].f = ((temp1 * temp2) * (jfloat(0.7f)));
	LINE_NUMBER(59);
	sp[0].o = frame[1].o;
	jfloat temp3 = jfloat(0);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp4 = (jint)((func_mindustry_core_World_unitWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_unitWidth_R_int])(ctx, sp[1].o);
	jfloat temp5 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, temp3, (jfloat(temp4)));
	jfloat temp6 = temp5 + (jfloat((((frame[12].i) % (100)) * (753))));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp7 = (jint)((func_mindustry_core_World_unitWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_unitWidth_R_int])(ctx, sp[0].o);
	frame[15].f = (fmodf(temp6, (jfloat(temp7))));
	LINE_NUMBER(60);
	sp[0].o = frame[1].o;
	jfloat temp8 = jfloat(0);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp9 = (jint)((func_mindustry_core_World_unitHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_unitHeight_R_int])(ctx, sp[1].o);
	jfloat temp10 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, temp8, (jfloat(temp9)));
	jfloat temp11 = temp10 + (jfloat((((frame[12].i) % (120)) * (453))));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp12 = (jint)((func_mindustry_core_World_unitHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_unitHeight_R_int])(ctx, sp[0].o);
	frame[16].f = (fmodf(temp11, (jfloat(temp12))));
	LINE_NUMBER(61);
	jfloat temp13 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, (frame[1].o), (jfloat(7.0f)));
	frame[17].f = temp13;
	LINE_NUMBER(62);
	jfloat temp14 = jfloat(1);
	jfloat temp15 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, (frame[1].o), (jfloat(0.3f)));
	frame[18].f = (temp14 + temp15);
	LINE_NUMBER(64);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jfloat temp16 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	frame[19].f = ((temp16 + (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height) / (jfloat(2)))) - (((frame[16].f) + ((jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[8].o)))->F_height))) / (jfloat(2)))) + ((((jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[8].o)))->F_height))) * (jfloat(1.9f))) * (frame[18].f)) / (jfloat(2)))));
	LINE_NUMBER(65);
	frame[20].f = ((frame[19].f) / (jfloat(1000.0f)));
	LINE_NUMBER(66);
	jfloat temp17 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[14].f), (-(frame[20].f)));
	frame[14].f = temp17;
	LINE_NUMBER(68);
	if ((doubleCompare((jdouble((frame[14].f))), (jdouble(0.01)), -1)) <= 0) goto label_24;
	}
	{
	LINE_NUMBER(69);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (frame[14].f));
	LINE_NUMBER(70);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_wrap_arc_graphics_Texture_R_arc_graphics_g2d_TextureRegion(ctx, (frame[8].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, (frame[15].f), ((frame[16].f) + ((jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[8].o)))->F_height))) / (jfloat(2)))), ((jfloat((((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[8].o)))->F_width) * (jint(2))))) * (frame[18].f)), ((jfloat((((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[8].o)))->F_height) * (jint(2))))) * (frame[18].f)), (frame[17].f));
	LINE_NUMBER(71);
	SM_arc_graphics_g2d_Draw_color(ctx);
	}
label_24:;
	{
	LINE_NUMBER(52);
	INST_IINC(9, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(76);
	jfloat temp0 = jfloat(130.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_EnvRenderers_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_graphics_EnvRenderers_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_graphics_EnvRenderers_invoke_java_lang_Runnable_7);
		proxy->F_field2 = (frame[4].f);
		proxy->F_field1 = (frame[3].f);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(89);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_EnvRenderers_lambda$init$3_arc_graphics_Color_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[19];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/EnvRenderers:lambda$init$3", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_EnvRenderers(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(77);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"particle"_j));
	LINE_NUMBER(78);
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, sp[1].o);
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(1.4f);
	jfloat temp1 = jfloat(4.0f);
	jfloat temp2 = jfloat(10000.0f);
	jfloat temp3 = jfloat(1);
	jfloat temp4 = jfloat(1);
	jfloat temp5 = frame[1].f;
	jfloat temp6 = frame[2].f;
	jfloat temp7 = jfloat(0.5f);
	jfloat temp8 = jfloat(1);
	jfloat temp9 = jfloat(30.0f);
	jfloat temp10 = jfloat(80.0f);
	jfloat temp11 = jfloat(1);
	jfloat temp12 = jfloat(7.0f);
	jint temp13 = jint(0);
	LINE_NUMBER(77);
	SM_mindustry_type_Weather_drawParticles_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float_float_float_float_float_float_float_float_float_float_boolean(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11, temp12, temp13);
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_EnvRenderers_lambda$init$2_arc_graphics_Color(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/EnvRenderers:lambda$init$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_EnvRenderers(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(32);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, (frame[0].o), (jfloat(0.4f)));
	LINE_NUMBER(33);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	jfloat temp2 = (jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	SM_arc_graphics_g2d_Fill_rect_float_float_float_float(ctx, temp0, temp1, temp2, ((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height));
	LINE_NUMBER(34);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(36);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_additive;
	((func_arc_graphics_Blending_apply) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Blending_apply])(ctx, sp[0].o);
	LINE_NUMBER(37);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_caustics;
	SM_arc_graphics_g2d_Draw_blit_arc_graphics_gl_Shader(ctx, sp[0].o);
	LINE_NUMBER(38);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_normal;
	((func_arc_graphics_Blending_apply) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Blending_apply])(ctx, sp[0].o);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_EnvRenderers_lambda$init$0_arc_graphics_Texture(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/EnvRenderers:lambda$init$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_EnvRenderers(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_EnvRenderers[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
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
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_EnvRenderers, 0, "()V", 1 },
	{ "init", (intptr_t) SM_mindustry_graphics_EnvRenderers_init, 0, "()V", 9 },
	{ "lambda$init$4", (intptr_t) SM_mindustry_graphics_EnvRenderers_lambda$init$4, 0, "()V", 4106 },
	{ "lambda$init$1", (intptr_t) SM_mindustry_graphics_EnvRenderers_lambda$init$1_arc_graphics_Color_arc_math_Rand_arc_graphics_Color_float_float, 0, "(Larc/graphics/Color;Larc/math/Rand;Larc/graphics/Color;FF)V", 4106 },
	{ "lambda$init$3", (intptr_t) SM_mindustry_graphics_EnvRenderers_lambda$init$3_arc_graphics_Color_float_float, 0, "(Larc/graphics/Color;FF)V", 4106 },
	{ "lambda$init$2", (intptr_t) SM_mindustry_graphics_EnvRenderers_lambda$init$2_arc_graphics_Color, 0, "(Larc/graphics/Color;)V", 4106 },
	{ "lambda$init$0", (intptr_t) SM_mindustry_graphics_EnvRenderers_lambda$init$0_arc_graphics_Texture, 0, "(Larc/graphics/Texture;)V", 4106 },
};

Class class_mindustry_graphics_EnvRenderers{
		.nativeName = (intptr_t) "mindustry/graphics/EnvRenderers",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_EnvRenderers),
		.classVtable = (intptr_t) vtable_mindustry_graphics_EnvRenderers,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_EnvRenderers,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_EnvRenderers,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_EnvRenderers = registerClass(&class_mindustry_graphics_EnvRenderers);

}
