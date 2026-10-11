#include "mindustry/graphics/Drawf.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/math/Angles.h"
#include "arc/math/geom/Rect.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "mindustry/graphics/LightRenderer.h"
#include "java/lang/Runnable.h"
#include "mindustry/graphics/Drawf_invoke_arc_func_Floatf_1.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/gl/Shader.h"
#include "arc/graphics/Pixmap.h"
#include "mindustry/core/Renderer.h"
#include "java/util/Arrays.h"
#include "arc/util/Tmp.h"
#include "mindustry/world/Tile.h"
#include "arc/Settings.h"
#include "arc/math/geom/Position.h"
#include "arc/graphics/Blending.h"
#include "arc/math/Mathf.h"
#include "arc/func/Floatf.h"
#include "arc/Core.h"
#include "arc/util/Structs.h"
#include "mindustry/graphics/Shaders.h"
#include "mindustry/graphics/Lod.h"
#include "arc/util/Time.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/FloorRenderer.h"
#include "arc/graphics/Pixmaps.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/struct/FloatSeq.h"
#include "mindustry/graphics/BlockRenderer.h"
#include "arc/graphics/g2d/Fill.h"
#include "java/lang/String.h"
#include "java/util/Comparator.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "java/lang/CharSequence.h"
#include "mindustry/ui/Fonts.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/graphics/Drawf.h"
#include "arc/graphics/g2d/FontCache.h"
#include "mindustry/Vars.h"
#include "mindustry/graphics/Shaders_UnitBuildShader.h"

extern "C" {

jobject SF_mindustry_graphics_Drawf_vecs;
jobject SF_mindustry_graphics_Drawf_points;

void mark_mindustry_graphics_Drawf(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_graphics_Drawf_vecs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Drawf_vecs)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Drawf_vecs, mark, depth + 1);
		if (SF_mindustry_graphics_Drawf_points)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Drawf_points)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Drawf_points, mark, depth + 1);
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
	auto self = (mindustry_graphics_Drawf *) object;
}

void init_mindustry_graphics_Drawf(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_text_java_lang_String_float_float_arc_graphics_Color(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:text", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(25);
	SM_mindustry_graphics_Drawf_text_java_lang_String_float_float_float_arc_graphics_Color_float_int(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (jfloat(0)), (frame[3].o), (jfloat(1)), (jint(1)));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_text_java_lang_String_float_float_arc_graphics_Color_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3, jfloat param4) {
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:text", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(29);
	SM_mindustry_graphics_Drawf_text_java_lang_String_float_float_float_arc_graphics_Color_float_int(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (jfloat(0)), (frame[3].o), (frame[4].f), (jint(1)));
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_text_java_lang_String_float_float_arc_graphics_Color_float_int(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3, jfloat param4, jint param5) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:text", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	frame[4].f = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(33);
	SM_mindustry_graphics_Drawf_text_java_lang_String_float_float_float_arc_graphics_Color_float_int(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (jfloat(0)), (frame[3].o), (frame[4].f), (frame[5].i));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_text_java_lang_String_float_float_float_arc_graphics_Color_float_int(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jfloat param5, jint param6) {
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:text", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].f = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(37);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	frame[7].o = sp[0].o;
	LINE_NUMBER(38);
	jint temp0 = (jint)((func_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean])(ctx, (frame[7].o));
	frame[8].i = temp0;
	LINE_NUMBER(39);
	((func_arc_graphics_g2d_Font_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setUseIntegerPositions_boolean])(ctx, (frame[7].o), (jint(0)));
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[7].o));
	jfloat temp1 = jfloat(0.25f);
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, ((temp1 / temp2) * (frame[5].f)));
	LINE_NUMBER(41);
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, (frame[7].o), (frame[4].o));
	LINE_NUMBER(42);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache])(ctx, (frame[7].o));
	((func_arc_graphics_g2d_FontCache_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_clear])(ctx, sp[0].o);
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, (frame[0].o), (frame[1].f), (frame[2].f), (jfloat(0)), (frame[6].i), (jint(0)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(44);
	if ((floatCompare((frame[3].f), (jfloat(0)), -1)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(45);
	if (((frame[6].i) & (jint(4))) == 0) goto label_10;
	}
	INST_FCONST(1);
	goto label_11;
label_10:;
	{
	if (((frame[6].i) & (jint(2))) == 0) goto label_12;
	}
	INST_FCONST(0);
	goto label_11;
label_12:;
	(sp++)->f = jfloat(0.5f);
label_11:;
	{
	sp -= 1;
	frame[10].f = sp[0].f;
	LINE_NUMBER(46);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache])(ctx, (frame[7].o));
	((func_arc_graphics_g2d_FontCache_setRotation_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_setRotation_float_float_float])(ctx, sp[0].o, (frame[3].f), (frame[1].f), ((frame[2].f) - (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[9].o)))->F_height) * (frame[10].f))));
	}
label_8:;
	{
	LINE_NUMBER(48);
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[4].o)))->F_a), (jfloat(1)), 1)) >= 0) goto label_14;
	}
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache])(ctx, (frame[7].o));
	((func_arc_graphics_g2d_FontCache_setAlphas_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_setAlphas_float])(ctx, sp[0].o, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[4].o)))->F_a));
	}
label_14:;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache])(ctx, (frame[7].o));
	((func_arc_graphics_g2d_FontCache_draw) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_draw])(ctx, sp[0].o);
	LINE_NUMBER(52);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[7].o));
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (jfloat(1)));
	LINE_NUMBER(53);
	sp[0].o = frame[7].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(54);
	((func_arc_graphics_g2d_Font_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setUseIntegerPositions_boolean])(ctx, (frame[7].o), (frame[8].i));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_checkBleed_arc_graphics_Pixmap(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:checkBleed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(59);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"linear"_j))), (jint(1)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)SM_arc_graphics_Pixmaps_bleed_arc_graphics_Pixmap_R_arc_graphics_Pixmap(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(62);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_underwater_java_lang_Runnable(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:underwater", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(65);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_floor;
	((func_mindustry_graphics_FloorRenderer_drawUnderwater_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FloorRenderer_drawUnderwater_java_lang_Runnable])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_flame_float_float_int_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6) {
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:flame", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	{
	LINE_NUMBER(70);
	frame[7].f = ((frame[4].f) * (frame[6].f));
	frame[8].f = ((frame[4].f) * ((jfloat(1)) - (frame[6].f)));
	LINE_NUMBER(72);
	clinit_mindustry_graphics_Drawf(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Drawf_points;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(75);
	frame[9].i = (jint(0));
	}
label_4:;
	{
	if ((frame[9].i) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(76);
	frame[10].f = ((jfloat(90.0f)) + (((jfloat(180.0f)) * (jfloat((frame[9].i)))) / (jfloat((frame[2].i)))));
	LINE_NUMBER(77);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].f), (frame[5].f));
	LINE_NUMBER(79);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) + (frame[5].f)) / (frame[5].f)) * (frame[7].f);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	SM_mindustry_graphics_Drawf_point_float_float_float_float_float(ctx, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y), (frame[0].f), (frame[1].f), (frame[3].f));
	LINE_NUMBER(75);
	INST_IINC(9, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(88);
	frame[9].i = (jint(0));
	}
label_10:;
	{
	if ((frame[9].i) >= (frame[2].i)) goto label_11;
	}
	{
	LINE_NUMBER(89);
	frame[10].f = ((jfloat(-90.0f)) + (((jfloat(180.0f)) * (jfloat((frame[9].i)))) / (jfloat((frame[2].i)))));
	LINE_NUMBER(90);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].f), (frame[5].f));
	LINE_NUMBER(92);
	jfloat temp0 = frame[7].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = temp0 + ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) / (frame[5].f)) * (frame[8].f));
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	SM_mindustry_graphics_Drawf_point_float_float_float_float_float(ctx, temp1, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y), (frame[0].f), (frame[1].f), (frame[3].f));
	LINE_NUMBER(88);
	INST_IINC(9, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(100);
	clinit_mindustry_graphics_Drawf(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Drawf_points;
	SM_arc_graphics_g2d_Fill_poly_arc_struct_FloatSeq(ctx, sp[0].o);
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_flameFront_float_float_int_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:flameFront", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(105);
	jint temp0 = (jint)SM_arc_math_Mathf_round_int_int_R_int(ctx, (frame[2].i), (jint(2)));
	frame[2].i = (temp0 + (jint(1)));
	LINE_NUMBER(107);
	clinit_mindustry_graphics_Drawf(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Drawf_points;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(110);
	frame[6].i = (jint(0));
	}
label_3:;
	{
	if ((frame[6].i) > (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(111);
	frame[7].f = ((jfloat(-90.0f)) + (((jfloat(180.0f)) * (jfloat((frame[6].i)))) / (jfloat((frame[2].i)))));
	LINE_NUMBER(112);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[7].f), (frame[5].f));
	LINE_NUMBER(114);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) / (frame[5].f)) * (frame[4].f);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	SM_mindustry_graphics_Drawf_point_float_float_float_float_float(ctx, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y), (frame[0].f), (frame[1].f), (frame[3].f));
	LINE_NUMBER(110);
	INST_IINC(6, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(122);
	clinit_mindustry_graphics_Drawf(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Drawf_points;
	SM_arc_graphics_g2d_Fill_poly_arc_struct_FloatSeq(ctx, sp[0].o);
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_point_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:point", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(127);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[0].f), (frame[1].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotateRadExact_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotateRadExact_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((frame[4].f) * (jfloat(0.017453292f))));
	LINE_NUMBER(128);
	clinit_mindustry_graphics_Drawf(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Drawf_points;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x) + (frame[2].f);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	((func_arc_struct_FloatSeq_add_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float])(ctx, sp[0].o, temp0, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y) + (frame[3].f)));
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_buildBeam_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:buildBeam", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(132);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_angle_float_float_float_float_R_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f));
	frame[5].f = temp0;
	LINE_NUMBER(134);
	clinit_mindustry_graphics_Drawf(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Drawf_vecs;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))), ((frame[2].f) - (frame[4].f)), ((frame[3].f) - (frame[4].f)));
	LINE_NUMBER(135);
	clinit_mindustry_graphics_Drawf(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Drawf_vecs;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)))))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)))), ((frame[2].f) + (frame[4].f)), ((frame[3].f) - (frame[4].f)));
	LINE_NUMBER(136);
	clinit_mindustry_graphics_Drawf(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Drawf_vecs;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(2)))))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(2)))), ((frame[2].f) - (frame[4].f)), ((frame[3].f) + (frame[4].f)));
	LINE_NUMBER(137);
	clinit_mindustry_graphics_Drawf(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Drawf_vecs;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(3)))))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(3)))), ((frame[2].f) + (frame[4].f)), ((frame[3].f) + (frame[4].f)));
	LINE_NUMBER(139);
	clinit_mindustry_graphics_Drawf(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Drawf_vecs;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_Drawf_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_graphics_Drawf_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_graphics_Drawf_invoke_arc_func_Floatf_1);
		proxy->F_field2 = (frame[5].f);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (frame[0].f);
		sp[1].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_Structs_comparingFloat_arc_func_Floatf_R_java_util_Comparator(ctx, sp[1].o);
	SM_java_util_Arrays_sort_Array1_java_lang_Object_java_util_Comparator(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(141);
	jfloat temp1 = frame[0].f;
	jfloat temp2 = frame[1].f;
	clinit_mindustry_graphics_Drawf(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Drawf_vecs;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_findClosest_float_float_Array1_arc_math_geom_Position_R_arc_math_geom_Position(ctx, temp1, temp2, sp[0].o);
	frame[6].o = (checkCast(ctx, &class_arc_math_geom_Vec2, sp[0].o));
	LINE_NUMBER(143);
	clinit_mindustry_graphics_Drawf(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Drawf_vecs;
	frame[7].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_x);
	clinit_mindustry_graphics_Drawf(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Drawf_vecs;
	frame[8].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_y);
	LINE_NUMBER(144);
	frame[9].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[6].o)))->F_x);
	frame[10].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[6].o)))->F_y);
	LINE_NUMBER(145);
	clinit_mindustry_graphics_Drawf(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Drawf_vecs;
	frame[11].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1))))))->F_x);
	clinit_mindustry_graphics_Drawf(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Drawf_vecs;
	frame[12].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1))))))->F_y);
	LINE_NUMBER(147);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_animateShields) == 0) goto label_14;
	}
	{
	LINE_NUMBER(148);
	sp[0].o = frame[6].o;
	clinit_mindustry_graphics_Drawf(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Drawf_vecs;
	if (sp[0].o == ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))) goto label_16;
	}
	{
	sp[0].o = frame[6].o;
	clinit_mindustry_graphics_Drawf(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Drawf_vecs;
	if (sp[0].o == ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1))))) goto label_16;
	}
	{
	LINE_NUMBER(149);
	SM_arc_graphics_g2d_Fill_tri_float_float_float_float_float_float(ctx, (frame[0].f), (frame[1].f), (frame[7].f), (frame[8].f), (frame[9].f), (frame[10].f));
	LINE_NUMBER(150);
	SM_arc_graphics_g2d_Fill_tri_float_float_float_float_float_float(ctx, (frame[0].f), (frame[1].f), (frame[11].f), (frame[12].f), (frame[9].f), (frame[10].f));
	goto label_19;
	}
label_16:;
	{
	LINE_NUMBER(152);
	SM_arc_graphics_g2d_Fill_tri_float_float_float_float_float_float(ctx, (frame[0].f), (frame[1].f), (frame[7].f), (frame[8].f), (frame[11].f), (frame[12].f));
	goto label_19;
	}
label_14:;
	{
	LINE_NUMBER(155);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, (frame[0].f), (frame[1].f), (frame[7].f), (frame[8].f));
	LINE_NUMBER(156);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, (frame[0].f), (frame[1].f), (frame[11].f), (frame[12].f));
	}
label_19:;
	LINE_NUMBER(158);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:additive", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(161);
	SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (jfloat(0)), (jfloat(31.0f)));
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:additive", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(165);
	SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (jfloat(31.0f)));
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:additive", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(169);
	SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float_float(ctx, (frame[0].o), (frame[1].o), (jfloat(1)), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:additive", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(173);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[8].f = temp0;
	LINE_NUMBER(174);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[7].f));
	LINE_NUMBER(175);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, (frame[1].o), ((frame[2].f) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_a)));
	LINE_NUMBER(176);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_additive;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(177);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, (frame[0].o), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (jfloat(0)));
	LINE_NUMBER(178);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	LINE_NUMBER(179);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(180);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[8].f));
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:additive", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	{
	LINE_NUMBER(184);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[7].f = temp0;
	LINE_NUMBER(185);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[6].f));
	LINE_NUMBER(186);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, (frame[1].o), ((frame[2].f) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_a)));
	LINE_NUMBER(187);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_additive;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(188);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, (frame[0].o), (frame[3].f), (frame[4].f), (frame[5].f));
	LINE_NUMBER(189);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	LINE_NUMBER(190);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(191);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[7].f));
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8) {
	jtype frame[21];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:additive", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].f = param8;
	{
	LINE_NUMBER(195);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[9].f = temp0;
	jfloat temp1 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_width));
	jfloat temp2 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[0].o));
	frame[10].f = ((temp1 * temp2) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_xscl));
	jfloat temp3 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_height));
	jfloat temp4 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[0].o));
	frame[11].f = ((temp3 * temp4) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_yscl));
	LINE_NUMBER(196);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[6].f));
	LINE_NUMBER(197);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, (frame[1].o), ((frame[2].f) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_a)));
	LINE_NUMBER(198);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_additive;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	jfloat temp5 = frame[3].f;
	jfloat temp6 = frame[4].f;
	jfloat temp7 = frame[10].f;
	jfloat temp8 = frame[11].f;
	jfloat temp9 = (frame[10].f) / (jfloat(2));
	jfloat temp10 = frame[7].f;
	jfloat temp11 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[0].o));
	jfloat temp12 = temp9 + ((temp10 * temp11) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_xscl));
	jfloat temp13 = (frame[11].f) / (jfloat(2));
	jfloat temp14 = frame[8].f;
	jfloat temp15 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(ctx, sp[0].o, temp5, temp6, temp7, temp8, temp12, (temp13 + ((temp14 * temp15) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_yscl))), (frame[5].f));
	LINE_NUMBER(200);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	LINE_NUMBER(201);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(202);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[9].f));
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_limitLine_arc_math_geom_Position_arc_math_geom_Position_float_float_arc_graphics_Color(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:limitLine", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(206);
	jint temp0 = (jint)((func_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), ((frame[2].f) + (frame[3].f)));
	if (temp0 == 0) goto label_1;
	}
	LINE_NUMBER(207);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(209);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f));
	LINE_NUMBER(210);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(-1.0f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[3].f));
	LINE_NUMBER(212);
	sp[0].o = frame[4].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[0].o)))(ctx, (frame[0].o));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp2 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[0].o)))(ctx, (frame[0].o));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp3 = temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	jfloat temp4 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v2;
	jfloat temp5 = temp4 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp6 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v2;
	SM_mindustry_graphics_Drawf_line_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, temp1, temp3, temp5, (temp6 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)));
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_limitLine_arc_math_geom_Position_arc_math_geom_Position_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:limitLine", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_mindustry_graphics_Drawf_limitLine_arc_math_geom_Position_arc_math_geom_Position_float_float_arc_graphics_Color(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o);
	LINE_NUMBER(217);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_dashLineDst_arc_graphics_Color_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:dashLineDst", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(220);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jfloat temp3 = frame[4].f;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_dst_float_float_float_float_R_float(ctx, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	SM_mindustry_graphics_Drawf_dashLine_arc_graphics_Color_float_float_float_float_int(ctx, sp[0].o, temp0, temp1, temp2, temp3, (jint(((temp4 / (jfloat(8.0f))) * (jfloat(1.6f))))));
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_dashLine_arc_graphics_Color_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:dashLine", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(224);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jfloat temp3 = frame[4].f;
	jfloat temp4 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[1].f) - (frame[3].f)));
	jfloat temp5 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[2].f) - (frame[4].f)));
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, temp5);
	SM_mindustry_graphics_Drawf_dashLine_arc_graphics_Color_float_float_float_float_int(ctx, sp[0].o, temp0, temp1, temp2, temp3, (jint(((temp6 / (jfloat(8.0f))) * (jfloat(2))))));
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_dashLine_arc_graphics_Color_float_float_float_float_int(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jint param5) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:dashLine", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(228);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(3.0f)));
	LINE_NUMBER(229);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_gray;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a));
	LINE_NUMBER(230);
	SM_arc_graphics_g2d_Lines_dashLine_float_float_float_float_int(ctx, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].i));
	LINE_NUMBER(231);
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, (jfloat(1)), (frame[0].o));
	LINE_NUMBER(232);
	SM_arc_graphics_g2d_Lines_dashLine_float_float_float_float_int(ctx, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].i));
	LINE_NUMBER(233);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_line_arc_graphics_Color_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:line", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(237);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(3.0f)));
	LINE_NUMBER(238);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_gray;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a));
	LINE_NUMBER(239);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(240);
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, (jfloat(1)), (frame[0].o));
	LINE_NUMBER(241);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(242);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_dashLineBasic_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:dashLineBasic", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(246);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = frame[3].f;
	jfloat temp4 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[0].f) - (frame[2].f)));
	jfloat temp5 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[1].f) - (frame[3].f)));
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, temp5);
	SM_arc_graphics_g2d_Lines_dashLine_float_float_float_float_int(ctx, temp0, temp1, temp2, temp3, (jint(((temp6 / (jfloat(8.0f))) * (jfloat(2))))));
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_dashSquare_arc_graphics_Color_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:dashSquare", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(250);
	SM_mindustry_graphics_Drawf_dashRect_arc_graphics_Color_float_float_float_float(ctx, (frame[0].o), ((frame[1].f) - ((frame[3].f) / (jfloat(2)))), ((frame[2].f) - ((frame[3].f) / (jfloat(2)))), (frame[3].f), (frame[3].f));
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_dashRect_arc_graphics_Color_arc_math_geom_Rect(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:dashRect", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(254);
	SM_mindustry_graphics_Drawf_dashRect_arc_graphics_Color_float_float_float_float(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height));
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_dashRect_arc_graphics_Color_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:dashRect", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(258);
	SM_mindustry_graphics_Drawf_dashLine_arc_graphics_Color_float_float_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f), ((frame[1].f) + (frame[3].f)), (frame[2].f));
	LINE_NUMBER(259);
	SM_mindustry_graphics_Drawf_dashLine_arc_graphics_Color_float_float_float_float(ctx, (frame[0].o), ((frame[1].f) + (frame[3].f)), (frame[2].f), ((frame[1].f) + (frame[3].f)), ((frame[2].f) + (frame[4].f)));
	LINE_NUMBER(260);
	SM_mindustry_graphics_Drawf_dashLine_arc_graphics_Color_float_float_float_float(ctx, (frame[0].o), ((frame[1].f) + (frame[3].f)), ((frame[2].f) + (frame[4].f)), (frame[1].f), ((frame[2].f) + (frame[4].f)));
	LINE_NUMBER(261);
	SM_mindustry_graphics_Drawf_dashLine_arc_graphics_Color_float_float_float_float(ctx, (frame[0].o), (frame[1].f), ((frame[2].f) + (frame[4].f)), (frame[1].f), (frame[2].f));
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_dashSquareBasic_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:dashSquareBasic", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(265);
	SM_mindustry_graphics_Drawf_dashRectBasic_float_float_float_float(ctx, ((frame[0].f) - ((frame[2].f) / (jfloat(2)))), ((frame[1].f) - ((frame[2].f) / (jfloat(2)))), (frame[2].f), (frame[2].f));
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_dashRectBasic_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:dashRectBasic", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(269);
	SM_mindustry_graphics_Drawf_dashLineBasic_float_float_float_float(ctx, (frame[0].f), (frame[1].f), ((frame[0].f) + (frame[2].f)), (frame[1].f));
	LINE_NUMBER(270);
	SM_mindustry_graphics_Drawf_dashLineBasic_float_float_float_float(ctx, ((frame[0].f) + (frame[2].f)), (frame[1].f), ((frame[0].f) + (frame[2].f)), ((frame[1].f) + (frame[3].f)));
	LINE_NUMBER(271);
	SM_mindustry_graphics_Drawf_dashLineBasic_float_float_float_float(ctx, ((frame[0].f) + (frame[2].f)), ((frame[1].f) + (frame[3].f)), (frame[0].f), ((frame[1].f) + (frame[3].f)));
	LINE_NUMBER(272);
	SM_mindustry_graphics_Drawf_dashLineBasic_float_float_float_float(ctx, (frame[0].f), ((frame[1].f) + (frame[3].f)), (frame[0].f), (frame[1].f));
	LINE_NUMBER(273);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_target_float_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:target", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(276);
	SM_mindustry_graphics_Drawf_target_float_float_float_float_arc_graphics_Color(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (jfloat(1)), (frame[3].o));
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_target_float_float_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:target", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(280);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(3.0f)));
	LINE_NUMBER(281);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_gray;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, (frame[3].f));
	LINE_NUMBER(282);
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float(ctx, (frame[0].f), (frame[1].f), (jint(4)), (frame[2].f), ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) * (jfloat(1.5f))));
	LINE_NUMBER(283);
	SM_arc_graphics_g2d_Lines_spikes_float_float_float_float_int_float(ctx, (frame[0].f), (frame[1].f), ((jfloat(0.42857143f)) * (frame[2].f)), ((jfloat(0.85714287f)) * (frame[2].f)), (jint(4)), ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) * (jfloat(1.5f))));
	LINE_NUMBER(284);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(1)));
	LINE_NUMBER(285);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, (frame[4].o), (frame[3].f));
	LINE_NUMBER(286);
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float(ctx, (frame[0].f), (frame[1].f), (jint(4)), (frame[2].f), ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) * (jfloat(1.5f))));
	LINE_NUMBER(287);
	SM_arc_graphics_g2d_Lines_spikes_float_float_float_float_int_float(ctx, (frame[0].f), (frame[1].f), ((jfloat(0.42857143f)) * (frame[2].f)), ((jfloat(0.85714287f)) * (frame[2].f)), (jint(4)), ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) * (jfloat(1.5f))));
	LINE_NUMBER(288);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_graphics_Drawf_text_R_float(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:text", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	{
	LINE_NUMBER(293);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[0].f = temp0;
	LINE_NUMBER(294);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_pixelate) == 0) goto label_2;
	}
	{
	LINE_NUMBER(295);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(210.0f)));
	}
label_2:;
	{
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return (frame[0].f);
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3, jfloat param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:light", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(302);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(303);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_lights;
	((func_mindustry_graphics_LightRenderer_add_float_float_float_arc_graphics_Color_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_LightRenderer_add_float_float_float_arc_graphics_Color_float])(ctx, sp[0].o, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].o), (frame[4].f));
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_light_arc_math_geom_Position_float_arc_graphics_Color_float(jcontext ctx, jobject param0, jfloat param1, jobject param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:light", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(307);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(308);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[0].o)))(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[0].o)))(ctx, (frame[0].o));
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, temp0, temp1, (frame[1].f), (frame[2].o), (frame[3].f));
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_light_float_float_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jobject param3, jfloat param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:light", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(312);
	SM_mindustry_graphics_Drawf_light_float_float_arc_graphics_g2d_TextureRegion_float_arc_graphics_Color_float(ctx, (frame[0].f), (frame[1].f), (frame[2].o), (jfloat(0)), (frame[3].o), (frame[4].f));
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_light_float_float_arc_graphics_g2d_TextureRegion_float_arc_graphics_Color_float(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jfloat param3, jobject param4, jfloat param5) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:light", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(316);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(317);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_lights;
	((func_mindustry_graphics_LightRenderer_add_float_float_arc_graphics_g2d_TextureRegion_float_arc_graphics_Color_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_LightRenderer_add_float_float_arc_graphics_g2d_TextureRegion_float_arc_graphics_Color_float])(ctx, sp[0].o, (frame[0].f), (frame[1].f), (frame[2].o), (frame[3].f), (frame[4].o), (frame[5].f));
	LINE_NUMBER(318);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_light_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:light", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(321);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(322);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_lights;
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = frame[3].f;
	jfloat temp4 = jfloat(30.0f);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_orange;
	((func_mindustry_graphics_LightRenderer_line_float_float_float_float_float_arc_graphics_Color_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_LightRenderer_line_float_float_float_float_float_arc_graphics_Color_float])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, sp[1].o, (jfloat(0.3f)));
	LINE_NUMBER(323);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_light_float_float_float_float_float_arc_graphics_Color_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5, jfloat param6) {
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:light", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	frame[6].f = param6;
	{
	LINE_NUMBER(326);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(327);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_lights;
	((func_mindustry_graphics_LightRenderer_line_float_float_float_float_float_arc_graphics_Color_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_LightRenderer_line_float_float_float_float_float_arc_graphics_Color_float])(ctx, sp[0].o, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o), (frame[6].f));
	LINE_NUMBER(328);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_selected_mindustry_gen_Building_arc_graphics_Color(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:selected", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	SM_mindustry_graphics_Drawf_selected_mindustry_world_Tile_arc_graphics_Color(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_selected_mindustry_world_Tile_arc_graphics_Color(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:selected", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(335);
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[0].o));
	SM_mindustry_graphics_Drawf_selected_int_int_mindustry_world_Block_arc_graphics_Color(ctx, temp0, temp1, sp[0].o, (frame[1].o));
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_selected_int_int_mindustry_world_Block_arc_graphics_Color(jcontext ctx, jint param0, jint param1, jobject param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:selected", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(339);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, (frame[3].o));
	LINE_NUMBER(340);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (jint(4))) goto label_3;
	}
	{
	LINE_NUMBER(341);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d8edge;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(342);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (((jint)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_size) - (jint(1))), (jint(0)));
	frame[6].f = (((jfloat((-temp0))) / (jfloat(2))) * (jfloat(8.0f)));
	LINE_NUMBER(343);
	SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float(ctx, (((jobject) createStringLiteral(ctx, u8"block-select"_j))), (((jfloat(((frame[0].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_offset)) + ((frame[6].f) * (jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_x))))), (((jfloat(((frame[1].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_offset)) + ((frame[6].f) * (jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_y))))), (jfloat(((frame[4].i) * (90)))));
	LINE_NUMBER(340);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(347);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(348);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_shadow_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:shadow", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(351);
	SM_mindustry_graphics_Drawf_shadow_float_float_float_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (jfloat(1)));
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_squareShadow_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:squareShadow", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(355);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, (jfloat(0)), (jfloat(0)), (jfloat(0)), ((jfloat(0.4f)) * (frame[3].f)));
	LINE_NUMBER(356);
	SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float_float(ctx, (((jobject) createStringLiteral(ctx, u8"square-shadow"_j))), (frame[0].f), (frame[1].f), ((frame[2].f) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_xscl)), ((frame[2].f) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_yscl)));
	LINE_NUMBER(357);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(358);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_shadow_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:shadow", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(361);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, (jfloat(0)), (jfloat(0)), (jfloat(0)), ((jfloat(0.4f)) * (frame[3].f)));
	LINE_NUMBER(362);
	SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float_float(ctx, (((jobject) createStringLiteral(ctx, u8"circle-shadow"_j))), (frame[0].f), (frame[1].f), ((frame[2].f) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_xscl)), ((frame[2].f) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_yscl)));
	LINE_NUMBER(363);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(364);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_shadow_arc_graphics_g2d_TextureRegion_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:shadow", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(367);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_shadow;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(368);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(369);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(370);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_shadow_arc_graphics_g2d_TextureRegion_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:shadow", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(373);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_shadow;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(374);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	LINE_NUMBER(375);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(376);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_shadow_arc_graphics_g2d_TextureRegion_float_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:shadow", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(379);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_shadow;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(380);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	LINE_NUMBER(381);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(382);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_liquid_arc_graphics_g2d_TextureRegion_float_float_float_arc_graphics_Color_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jfloat param5) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:liquid", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(385);
	if ((floatCompare((frame[3].f), (jfloat(3,921569e-03f)), 1)) >= 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(386);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, (frame[4].o), ((frame[3].f) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[4].o)))->F_a)));
	LINE_NUMBER(387);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[5].f));
	LINE_NUMBER(388);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(389);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_liquid_arc_graphics_g2d_TextureRegion_float_float_float_arc_graphics_Color(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:liquid", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(392);
	if ((floatCompare((frame[3].f), (jfloat(3,921569e-03f)), 1)) >= 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(393);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, (frame[4].o), ((frame[3].f) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[4].o)))->F_a)));
	LINE_NUMBER(394);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	LINE_NUMBER(395);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_dashCircle_float_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:dashCircle", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(399);
	jfloat temp0 = jfloat(3.0f);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_gray;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp0, sp[0].o);
	LINE_NUMBER(400);
	SM_arc_graphics_g2d_Lines_dashCircle_float_float_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f));
	LINE_NUMBER(401);
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, (jfloat(1)), (frame[3].o));
	LINE_NUMBER(402);
	SM_arc_graphics_g2d_Lines_dashCircle_float_float_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f));
	LINE_NUMBER(403);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(404);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_circles_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:circles", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(407);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = frame[2].f;
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_mindustry_graphics_Drawf_circles_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, sp[0].o);
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_circles_float_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:circles", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(411);
	jfloat temp0 = jfloat(3.0f);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_gray;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp0, sp[0].o);
	LINE_NUMBER(412);
	SM_arc_graphics_g2d_Lines_circle_float_float_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f));
	LINE_NUMBER(413);
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, (jfloat(1)), (frame[3].o));
	LINE_NUMBER(414);
	SM_arc_graphics_g2d_Lines_circle_float_float_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f));
	LINE_NUMBER(415);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_select_float_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:select", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(419);
	jfloat temp0 = jfloat(3.0f);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_gray;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp0, sp[0].o);
	LINE_NUMBER(420);
	SM_arc_graphics_g2d_Lines_square_float_float_float(ctx, (frame[0].f), (frame[1].f), ((frame[2].f) + (jfloat(1))));
	LINE_NUMBER(421);
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, (jfloat(1)), (frame[3].o));
	LINE_NUMBER(422);
	SM_arc_graphics_g2d_Lines_square_float_float_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f));
	LINE_NUMBER(423);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(424);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_square_float_float_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:square", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(427);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = frame[3].f;
	sp[0].o = frame[4].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_c3;
	sp[1].o = (jobject)((func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[1].o, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[4].o)))->F_a));
	SM_mindustry_graphics_Drawf_square_float_float_float_float_arc_graphics_Color_arc_graphics_Color(ctx, temp0, temp1, temp2, temp3, sp[0].o, sp[1].o);
	LINE_NUMBER(428);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_square_float_float_float_float_arc_graphics_Color_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:square", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(431);
	SM_mindustry_graphics_Drawf_square_float_float_float_float_arc_graphics_Color_arc_graphics_Color_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].o), (frame[5].o), (jfloat(1)));
	LINE_NUMBER(432);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_square_float_float_float_float_arc_graphics_Color_arc_graphics_Color_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5, jfloat param6) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:square", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].f = param6;
	{
	LINE_NUMBER(435);
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, ((jfloat(3.0f)) * (frame[6].f)), (frame[5].o));
	LINE_NUMBER(436);
	SM_arc_graphics_g2d_Lines_square_float_float_float_float(ctx, (frame[0].f), (frame[1].f), ((frame[2].f) + ((jfloat(1)) * (frame[6].f))), (frame[3].f));
	LINE_NUMBER(437);
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, ((jfloat(1)) * (frame[6].f)), (frame[4].o));
	LINE_NUMBER(438);
	SM_arc_graphics_g2d_Lines_square_float_float_float_float(ctx, (frame[0].f), (frame[1].f), ((frame[2].f) + ((jfloat(1)) * (frame[6].f))), (frame[3].f));
	LINE_NUMBER(439);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(440);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_cross_float_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:cross", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(443);
	jfloat temp0 = jfloat(3.0f);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_gray;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c3;
	sp[0].o = (jobject)((func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[3].o)))->F_a));
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp0, sp[0].o);
	LINE_NUMBER(444);
	SM_arc_graphics_g2d_Lines_lineAngleCenter_float_float_float_float(ctx, (frame[0].f), (frame[1].f), (jfloat(45.0f)), ((frame[2].f) + (jfloat(1))));
	LINE_NUMBER(445);
	SM_arc_graphics_g2d_Lines_lineAngleCenter_float_float_float_float(ctx, (frame[0].f), (frame[1].f), (jfloat(135.0f)), ((frame[2].f) + (jfloat(1))));
	LINE_NUMBER(446);
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, (jfloat(1)), (frame[3].o));
	LINE_NUMBER(447);
	SM_arc_graphics_g2d_Lines_lineAngleCenter_float_float_float_float(ctx, (frame[0].f), (frame[1].f), (jfloat(45.0f)), ((frame[2].f) + (jfloat(1))));
	LINE_NUMBER(448);
	SM_arc_graphics_g2d_Lines_lineAngleCenter_float_float_float_float(ctx, (frame[0].f), (frame[1].f), (jfloat(135.0f)), ((frame[2].f) + (jfloat(1))));
	LINE_NUMBER(449);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(450);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_poly_float_float_int_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jobject param5) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:poly", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(453);
	jfloat temp0 = jfloat(3.0f);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_gray;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp0, sp[0].o);
	LINE_NUMBER(454);
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float(ctx, (frame[0].f), (frame[1].f), (frame[2].i), ((frame[3].f) + (jfloat(1))), (frame[4].f));
	LINE_NUMBER(455);
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, (jfloat(1)), (frame[5].o));
	LINE_NUMBER(456);
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float(ctx, (frame[0].f), (frame[1].f), (frame[2].i), ((frame[3].f) + (jfloat(1))), (frame[4].f));
	LINE_NUMBER(457);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(458);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_fillPoly_float_float_int_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jobject param5) {
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:fillPoly", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(461);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jint temp2 = frame[2].i;
	jfloat temp3 = frame[3].f;
	jfloat temp4 = frame[4].f;
	sp[0].o = frame[5].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	SM_mindustry_graphics_Drawf_fillPoly_float_float_int_float_float_arc_graphics_Color_arc_graphics_Color_float(ctx, temp0, temp1, temp2, temp3, temp4, sp[0].o, sp[1].o, (jfloat(1)));
	LINE_NUMBER(462);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_fillPoly_float_float_int_float_float_arc_graphics_Color_arc_graphics_Color_float(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jobject param5, jobject param6, jfloat param7) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:fillPoly", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(465);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, (frame[6].o), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[5].o)))->F_a));
	LINE_NUMBER(466);
	SM_arc_graphics_g2d_Fill_poly_float_float_int_float_float(ctx, (frame[0].f), (frame[1].f), (frame[2].i), ((frame[3].f) + ((jfloat(2)) * (frame[7].f))), (frame[4].f));
	LINE_NUMBER(467);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, (frame[5].o));
	LINE_NUMBER(468);
	SM_arc_graphics_g2d_Fill_poly_float_float_int_float_float(ctx, (frame[0].f), (frame[1].f), (frame[2].i), (frame[3].f), (frame[4].f));
	LINE_NUMBER(469);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(470);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_square_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:square", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(473);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = frame[3].f;
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_mindustry_graphics_Drawf_square_float_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, temp3, sp[0].o);
	LINE_NUMBER(474);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_square_float_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:square", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(477);
	SM_mindustry_graphics_Drawf_square_float_float_float_float_arc_graphics_Color(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (jfloat(45.0f)), (frame[3].o));
	LINE_NUMBER(478);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_square_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:square", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(481);
	SM_mindustry_graphics_Drawf_square_float_float_float_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (jfloat(45.0f)));
	LINE_NUMBER(482);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_arrow_float_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:arrow", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(485);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = frame[3].f;
	jfloat temp4 = frame[4].f;
	jfloat temp5 = frame[5].f;
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_mindustry_graphics_Drawf_arrow_float_float_float_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, temp3, temp4, temp5, sp[0].o);
	LINE_NUMBER(486);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_arrow_float_float_float_float_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6) {
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:arrow", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(489);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_angle_float_float_float_float_R_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f));
	frame[7].f = temp0;
	LINE_NUMBER(490);
	frame[8].f = (jfloat(2));
	LINE_NUMBER(491);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[0].f), (frame[1].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[4].f));
	LINE_NUMBER(492);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[9].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) + (frame[0].f));
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[10].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) + (frame[1].f));
	LINE_NUMBER(494);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_gray;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(495);
	SM_arc_graphics_g2d_Fill_poly_float_float_int_float_float(ctx, (frame[9].f), (frame[10].f), (jint(3)), ((frame[5].f) + (frame[8].f)), (frame[7].f));
	LINE_NUMBER(496);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, (frame[6].o));
	LINE_NUMBER(497);
	SM_arc_graphics_g2d_Fill_poly_float_float_int_float_float(ctx, (frame[9].f), (frame[10].f), (jint(3)), (frame[5].f), (frame[7].f));
	LINE_NUMBER(498);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(499);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:laser", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(502);
	SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, (frame[0].o), (frame[1].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (jfloat(1)));
	LINE_NUMBER(503);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6) {
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:laser", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	{
	LINE_NUMBER(506);
	SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (jfloat(1)));
	LINE_NUMBER(507);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6) {
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:laser", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	{
	LINE_NUMBER(510);
	SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, (frame[0].o), (frame[1].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f));
	LINE_NUMBER(511);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:laser", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(514);
	SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f), (jint(1)));
	LINE_NUMBER(515);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jbool param8) {
	jtype frame[19];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:laser", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].i = param8;
	{
	LINE_NUMBER(518);
	SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float_boolean_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f), (frame[8].i), (jint(1)));
	LINE_NUMBER(519);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float_boolean_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jbool param8, jbool param9) {
	jtype frame[23];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:laser", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].i = param8;
	frame[9].i = param9;
	{
	LINE_NUMBER(522);
	frame[10].f = (((jfloat(8.0f)) * (frame[7].f)) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_scl));
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_angle_float_float_R_float(ctx, ((frame[5].f) - (frame[3].f)), ((frame[6].f) - (frame[4].f)));
	frame[11].f = temp0;
	LINE_NUMBER(523);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_cosDeg_float_R_float(ctx, (frame[11].f));
	frame[12].f = (temp1 * (frame[10].f));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_sinDeg_float_R_float(ctx, (frame[11].f));
	frame[13].f = (temp2 * (frame[10].f));
	LINE_NUMBER(524);
	if ((frame[9].i) == 0) goto label_5;
	}
	{
	jfloat temp0 = (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_width))) * (frame[7].f);
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[1].o));
	if ((floatCompare((temp0 * temp1), (jfloat(10.0f)), 1)) >= 0) goto label_6;
	}
	clinit_mindustry_graphics_Lod(ctx);
	(sp++)->f = SF_mindustry_graphics_Lod_alpha1;
	goto label_7;
label_6:;
	clinit_mindustry_graphics_Lod(ctx);
	(sp++)->f = SF_mindustry_graphics_Lod_alpha2;
	goto label_7;
label_5:;
	INST_FCONST(1);
label_7:;
	{
	sp -= 1;
	frame[14].f = sp[0].f;
	LINE_NUMBER(525);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_getColorAlpha_R_float(ctx);
	frame[15].f = temp0;
	LINE_NUMBER(527);
	if ((floatCompare((frame[15].f), (jfloat(3,921569e-03f)), -1)) < 0) goto label_10;
	}
	{
	LINE_NUMBER(528);
	if ((floatCompare((frame[14].f), (jfloat(1,000000e-04f)), -1)) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(529);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((frame[14].f) * (frame[15].f)));
	LINE_NUMBER(530);
	sp[0].o = frame[1].o;
	jfloat temp0 = frame[3].f;
	jfloat temp1 = frame[4].f;
	jfloat temp2 = (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_width))) * (frame[7].f);
	jfloat temp3 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[1].o));
	jfloat temp4 = temp2 * temp3;
	jfloat temp5 = (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_height))) * (frame[7].f);
	jfloat temp6 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp0, temp1, temp4, (temp5 * temp6), ((frame[11].f) + (jfloat(180.0f))));
	LINE_NUMBER(531);
	sp[0].o = frame[2].o;
	jfloat temp7 = frame[5].f;
	jfloat temp8 = frame[6].f;
	jfloat temp9 = (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[2].o)))->F_width))) * (frame[7].f);
	jfloat temp10 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[2].o));
	jfloat temp11 = temp9 * temp10;
	jfloat temp12 = (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[2].o)))->F_height))) * (frame[7].f);
	jfloat temp13 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[2].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp7, temp8, temp11, (temp12 * temp13), (frame[11].f));
	LINE_NUMBER(532);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (frame[15].f));
	}
label_12:;
	{
	LINE_NUMBER(535);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, ((jfloat(12.0f)) * (frame[7].f)));
	LINE_NUMBER(536);
	SM_arc_graphics_g2d_Lines_line_arc_graphics_g2d_TextureRegion_float_float_float_float_boolean(ctx, (frame[0].o), ((frame[3].f) + (frame[12].f)), ((frame[4].f) + (frame[13].f)), ((frame[5].f) - (frame[12].f)), ((frame[6].f) - (frame[13].f)), (jint(0)));
	LINE_NUMBER(537);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(1)));
	}
label_10:;
	{
	LINE_NUMBER(540);
	if ((frame[8].i) == 0) goto label_19;
	}
	{
	SM_mindustry_graphics_Drawf_light_float_float_float_float(ctx, (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f));
	}
label_19:;
	LINE_NUMBER(541);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:tri", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(545);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[4].f), (frame[3].f));
	frame[5].f = temp0;
	LINE_NUMBER(546);
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[4].f), (frame[3].f));
	frame[6].f = temp1;
	LINE_NUMBER(547);
	jfloat temp2 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, ((frame[4].f) - (jfloat(90.0f))), ((frame[2].f) / (jfloat(2))));
	frame[7].f = temp2;
	LINE_NUMBER(548);
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, ((frame[4].f) - (jfloat(90.0f))), ((frame[2].f) / (jfloat(2))));
	frame[8].f = temp3;
	LINE_NUMBER(549);
	SM_arc_graphics_g2d_Fill_tri_float_float_float_float_float_float(ctx, ((frame[0].f) + (frame[7].f)), ((frame[1].f) + (frame[8].f)), ((frame[0].f) + (frame[5].f)), ((frame[1].f) + (frame[6].f)), ((frame[0].f) - (frame[7].f)), ((frame[1].f) - (frame[8].f)));
	LINE_NUMBER(554);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_construct_mindustry_gen_Building_mindustry_ctype_UnlockableContent_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:construct", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(557);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[1].o)))->F_fullIcon;
	SM_mindustry_graphics_Drawf_construct_mindustry_gen_Building_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, sp[1].o, (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	LINE_NUMBER(558);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_construct_float_float_arc_graphics_g2d_TextureRegion_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6) {
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:construct", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	{
	LINE_NUMBER(561);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	sp[0].o = frame[2].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_mindustry_graphics_Drawf_construct_float_float_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float(ctx, temp0, temp1, sp[0].o, sp[1].o, (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f));
	LINE_NUMBER(562);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_construct_float_float_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jobject param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:construct", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(565);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_build;
	((mindustry_graphics_Shaders$UnitBuildShader *) NULL_CHECK(sp[0].o))->F_region = (jref) (frame[2].o);
	LINE_NUMBER(566);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_build;
	((mindustry_graphics_Shaders$UnitBuildShader *) NULL_CHECK(sp[0].o))->F_progress = (frame[5].f);
	LINE_NUMBER(567);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_build;
	sp[0].o = (jobject)((mindustry_graphics_Shaders$UnitBuildShader *) NULL_CHECK(sp[0].o))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(568);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_build;
	sp[0].o = (jobject)((mindustry_graphics_Shaders$UnitBuildShader *) NULL_CHECK(sp[0].o))->F_color;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (frame[6].f);
	LINE_NUMBER(569);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_build;
	((mindustry_graphics_Shaders$UnitBuildShader *) NULL_CHECK(sp[0].o))->F_time = ((-(frame[7].f)) / (jfloat(20.0f)));
	LINE_NUMBER(571);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_build;
	SM_arc_graphics_g2d_Draw_shader_arc_graphics_gl_Shader(ctx, sp[0].o);
	LINE_NUMBER(572);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, (frame[2].o), (frame[0].f), (frame[1].f), (frame[4].f));
	LINE_NUMBER(573);
	SM_arc_graphics_g2d_Draw_shader(ctx);
	LINE_NUMBER(575);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(576);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_construct_mindustry_gen_Building_arc_graphics_g2d_TextureRegion_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:construct", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(579);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_mindustry_graphics_Drawf_construct_mindustry_gen_Building_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	LINE_NUMBER(580);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_construct_mindustry_gen_Building_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6) {
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:construct", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	{
	LINE_NUMBER(583);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	jfloat temp0 = frame[3].f;
	jfloat temp1 = frame[4].f;
	jfloat temp2 = frame[5].f;
	jfloat temp3 = frame[6].f;
	sp[3].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	SM_mindustry_graphics_Drawf_construct_mindustry_gen_Building_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float_float(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, temp3, ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[3].o))->F_size) * (8)))) - (jfloat(4.0f))));
	LINE_NUMBER(584);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_construct_mindustry_gen_Building_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:construct", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(587);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_build;
	((mindustry_graphics_Shaders$UnitBuildShader *) NULL_CHECK(sp[0].o))->F_region = (jref) (frame[1].o);
	LINE_NUMBER(588);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_build;
	((mindustry_graphics_Shaders$UnitBuildShader *) NULL_CHECK(sp[0].o))->F_progress = (frame[4].f);
	LINE_NUMBER(589);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_build;
	sp[0].o = (jobject)((mindustry_graphics_Shaders$UnitBuildShader *) NULL_CHECK(sp[0].o))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(590);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_build;
	sp[0].o = (jobject)((mindustry_graphics_Shaders$UnitBuildShader *) NULL_CHECK(sp[0].o))->F_color;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (frame[5].f);
	LINE_NUMBER(591);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_build;
	((mindustry_graphics_Shaders$UnitBuildShader *) NULL_CHECK(sp[0].o))->F_time = ((-(frame[6].f)) / (jfloat(20.0f)));
	LINE_NUMBER(593);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_build;
	SM_arc_graphics_g2d_Draw_shader_arc_graphics_gl_Shader(ctx, sp[0].o);
	LINE_NUMBER(594);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (frame[3].f));
	LINE_NUMBER(595);
	SM_arc_graphics_g2d_Draw_shader(ctx);
	LINE_NUMBER(597);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(598);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (frame[5].f));
	LINE_NUMBER(600);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, (frame[6].f), (jfloat(20.0f)), ((frame[7].f) / (jfloat(2))));
	SM_arc_graphics_g2d_Lines_lineAngleCenter_float_float_float_float(ctx, (temp0 + temp1), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(90.0f)), (frame[7].f));
	LINE_NUMBER(602);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(603);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Drawf_spinSprite_arc_graphics_g2d_TextureRegion_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:spinSprite", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(607);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_getColorAlpha_R_float(ctx);
	frame[4].f = temp0;
	LINE_NUMBER(608);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_mod_float_float_R_float(ctx, (frame[3].f), (jfloat(90.0f)));
	frame[3].f = temp1;
	LINE_NUMBER(609);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(610);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (((frame[3].f) / (jfloat(90.0f))) * (frame[4].f)));
	LINE_NUMBER(611);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f), ((frame[3].f) - (jfloat(90.0f))));
	LINE_NUMBER(612);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (frame[4].f));
	LINE_NUMBER(613);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_graphics_Drawf_lambda$buildBeam$0_float_float_float_arc_math_geom_Vec2_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:lambda$buildBeam$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(139);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_angle_float_float_float_float_R_float(ctx, (frame[0].f), (frame[1].f), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y));
	jfloat temp1 = (jfloat)SM_arc_math_Angles_angleDist_float_float_R_float(ctx, temp0, (frame[2].f));
	popStackFrame(ctx);
	return (-temp1);
	}

	popStackFrame(ctx);
}

void clinit_mindustry_graphics_Drawf(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Drawf:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Drawf(ctx);
	{
	LINE_NUMBER(21);
	sp[0].o = (jobject)createArray(ctx, &class_arc_math_geom_Vec2, (jint(4)));
	jint temp0 = jint(0);
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	clinit_mindustry_graphics_Drawf(ctx);
	SF_mindustry_graphics_Drawf_vecs = sp[0].o;
	LINE_NUMBER(22);
	clinit_arc_struct_FloatSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	init_arc_struct_FloatSeq(ctx, sp[0].o);
	clinit_mindustry_graphics_Drawf(ctx);
	SF_mindustry_graphics_Drawf_points = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_Drawf[] {
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

static FieldMetadata fields[] {
	{ "vecs", getArrayClass(&class_arc_math_geom_Vec2, 1), (intptr_t) &SF_mindustry_graphics_Drawf_vecs, "[Larc/math/geom/Vec2;", 26 },
	{ "points", &class_arc_struct_FloatSeq, (intptr_t) &SF_mindustry_graphics_Drawf_points, "Larc/struct/FloatSeq;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_Drawf, 0, "()V", 1 },
	{ "text", (intptr_t) SM_mindustry_graphics_Drawf_text_java_lang_String_float_float_arc_graphics_Color, 0, "(Ljava/lang/String;FFLarc/graphics/Color;)V", 9 },
	{ "text", (intptr_t) SM_mindustry_graphics_Drawf_text_java_lang_String_float_float_arc_graphics_Color_float, 0, "(Ljava/lang/String;FFLarc/graphics/Color;F)V", 9 },
	{ "text", (intptr_t) SM_mindustry_graphics_Drawf_text_java_lang_String_float_float_arc_graphics_Color_float_int, 0, "(Ljava/lang/String;FFLarc/graphics/Color;FI)V", 9 },
	{ "text", (intptr_t) SM_mindustry_graphics_Drawf_text_java_lang_String_float_float_float_arc_graphics_Color_float_int, 0, "(Ljava/lang/String;FFFLarc/graphics/Color;FI)V", 9 },
	{ "checkBleed", (intptr_t) SM_mindustry_graphics_Drawf_checkBleed_arc_graphics_Pixmap, 0, "(Larc/graphics/Pixmap;)V", 9 },
	{ "underwater", (intptr_t) SM_mindustry_graphics_Drawf_underwater_java_lang_Runnable, 0, "(Ljava/lang/Runnable;)V", 9 },
	{ "flame", (intptr_t) SM_mindustry_graphics_Drawf_flame_float_float_int_float_float_float_float, 0, "(FFIFFFF)V", 9 },
	{ "flameFront", (intptr_t) SM_mindustry_graphics_Drawf_flameFront_float_float_int_float_float_float, 0, "(FFIFFF)V", 9 },
	{ "point", (intptr_t) SM_mindustry_graphics_Drawf_point_float_float_float_float_float, 0, "(FFFFF)V", 10 },
	{ "buildBeam", (intptr_t) SM_mindustry_graphics_Drawf_buildBeam_float_float_float_float_float, 0, "(FFFFF)V", 9 },
	{ "additive", (intptr_t) SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float, 0, "(Larc/graphics/g2d/TextureRegion;Larc/graphics/Color;FF)V", 9 },
	{ "additive", (intptr_t) SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float, 0, "(Larc/graphics/g2d/TextureRegion;Larc/graphics/Color;FFF)V", 9 },
	{ "additive", (intptr_t) SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float, 0, "(Larc/graphics/g2d/TextureRegion;Larc/graphics/Color;FFFF)V", 9 },
	{ "additive", (intptr_t) SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float_float_float, 0, "(Larc/graphics/g2d/TextureRegion;Larc/graphics/Color;FFFFFF)V", 9 },
	{ "additive", (intptr_t) SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float_float, 0, "(Larc/graphics/g2d/TextureRegion;Larc/graphics/Color;FFFFF)V", 9 },
	{ "additive", (intptr_t) SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float_float_float_float, 0, "(Larc/graphics/g2d/TextureRegion;Larc/graphics/Color;FFFFFFF)V", 9 },
	{ "limitLine", (intptr_t) SM_mindustry_graphics_Drawf_limitLine_arc_math_geom_Position_arc_math_geom_Position_float_float_arc_graphics_Color, 0, "(Larc/math/geom/Position;Larc/math/geom/Position;FFLarc/graphics/Color;)V", 9 },
	{ "limitLine", (intptr_t) SM_mindustry_graphics_Drawf_limitLine_arc_math_geom_Position_arc_math_geom_Position_float_float, 0, "(Larc/math/geom/Position;Larc/math/geom/Position;FF)V", 9 },
	{ "dashLineDst", (intptr_t) SM_mindustry_graphics_Drawf_dashLineDst_arc_graphics_Color_float_float_float_float, 0, "(Larc/graphics/Color;FFFF)V", 9 },
	{ "dashLine", (intptr_t) SM_mindustry_graphics_Drawf_dashLine_arc_graphics_Color_float_float_float_float, 0, "(Larc/graphics/Color;FFFF)V", 9 },
	{ "dashLine", (intptr_t) SM_mindustry_graphics_Drawf_dashLine_arc_graphics_Color_float_float_float_float_int, 0, "(Larc/graphics/Color;FFFFI)V", 9 },
	{ "line", (intptr_t) SM_mindustry_graphics_Drawf_line_arc_graphics_Color_float_float_float_float, 0, "(Larc/graphics/Color;FFFF)V", 9 },
	{ "dashLineBasic", (intptr_t) SM_mindustry_graphics_Drawf_dashLineBasic_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "dashSquare", (intptr_t) SM_mindustry_graphics_Drawf_dashSquare_arc_graphics_Color_float_float_float, 0, "(Larc/graphics/Color;FFF)V", 9 },
	{ "dashRect", (intptr_t) SM_mindustry_graphics_Drawf_dashRect_arc_graphics_Color_arc_math_geom_Rect, 0, "(Larc/graphics/Color;Larc/math/geom/Rect;)V", 9 },
	{ "dashRect", (intptr_t) SM_mindustry_graphics_Drawf_dashRect_arc_graphics_Color_float_float_float_float, 0, "(Larc/graphics/Color;FFFF)V", 9 },
	{ "dashSquareBasic", (intptr_t) SM_mindustry_graphics_Drawf_dashSquareBasic_float_float_float, 0, "(FFF)V", 9 },
	{ "dashRectBasic", (intptr_t) SM_mindustry_graphics_Drawf_dashRectBasic_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "target", (intptr_t) SM_mindustry_graphics_Drawf_target_float_float_float_arc_graphics_Color, 0, "(FFFLarc/graphics/Color;)V", 9 },
	{ "target", (intptr_t) SM_mindustry_graphics_Drawf_target_float_float_float_float_arc_graphics_Color, 0, "(FFFFLarc/graphics/Color;)V", 9 },
	{ "text", (intptr_t) SM_mindustry_graphics_Drawf_text_R_float, 0, "()F", 9 },
	{ "light", (intptr_t) SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float, 0, "(FFFLarc/graphics/Color;F)V", 9 },
	{ "light", (intptr_t) SM_mindustry_graphics_Drawf_light_arc_math_geom_Position_float_arc_graphics_Color_float, 0, "(Larc/math/geom/Position;FLarc/graphics/Color;F)V", 9 },
	{ "light", (intptr_t) SM_mindustry_graphics_Drawf_light_float_float_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float, 0, "(FFLarc/graphics/g2d/TextureRegion;Larc/graphics/Color;F)V", 9 },
	{ "light", (intptr_t) SM_mindustry_graphics_Drawf_light_float_float_arc_graphics_g2d_TextureRegion_float_arc_graphics_Color_float, 0, "(FFLarc/graphics/g2d/TextureRegion;FLarc/graphics/Color;F)V", 9 },
	{ "light", (intptr_t) SM_mindustry_graphics_Drawf_light_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "light", (intptr_t) SM_mindustry_graphics_Drawf_light_float_float_float_float_float_arc_graphics_Color_float, 0, "(FFFFFLarc/graphics/Color;F)V", 9 },
	{ "selected", (intptr_t) SM_mindustry_graphics_Drawf_selected_mindustry_gen_Building_arc_graphics_Color, 0, "(Lmindustry/gen/Building;Larc/graphics/Color;)V", 9 },
	{ "selected", (intptr_t) SM_mindustry_graphics_Drawf_selected_mindustry_world_Tile_arc_graphics_Color, 0, "(Lmindustry/world/Tile;Larc/graphics/Color;)V", 9 },
	{ "selected", (intptr_t) SM_mindustry_graphics_Drawf_selected_int_int_mindustry_world_Block_arc_graphics_Color, 0, "(IILmindustry/world/Block;Larc/graphics/Color;)V", 9 },
	{ "shadow", (intptr_t) SM_mindustry_graphics_Drawf_shadow_float_float_float, 0, "(FFF)V", 9 },
	{ "squareShadow", (intptr_t) SM_mindustry_graphics_Drawf_squareShadow_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "shadow", (intptr_t) SM_mindustry_graphics_Drawf_shadow_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "shadow", (intptr_t) SM_mindustry_graphics_Drawf_shadow_arc_graphics_g2d_TextureRegion_float_float_float, 0, "(Larc/graphics/g2d/TextureRegion;FFF)V", 9 },
	{ "shadow", (intptr_t) SM_mindustry_graphics_Drawf_shadow_arc_graphics_g2d_TextureRegion_float_float, 0, "(Larc/graphics/g2d/TextureRegion;FF)V", 9 },
	{ "shadow", (intptr_t) SM_mindustry_graphics_Drawf_shadow_arc_graphics_g2d_TextureRegion_float_float_float_float_float, 0, "(Larc/graphics/g2d/TextureRegion;FFFFF)V", 9 },
	{ "liquid", (intptr_t) SM_mindustry_graphics_Drawf_liquid_arc_graphics_g2d_TextureRegion_float_float_float_arc_graphics_Color_float, 0, "(Larc/graphics/g2d/TextureRegion;FFFLarc/graphics/Color;F)V", 9 },
	{ "liquid", (intptr_t) SM_mindustry_graphics_Drawf_liquid_arc_graphics_g2d_TextureRegion_float_float_float_arc_graphics_Color, 0, "(Larc/graphics/g2d/TextureRegion;FFFLarc/graphics/Color;)V", 9 },
	{ "dashCircle", (intptr_t) SM_mindustry_graphics_Drawf_dashCircle_float_float_float_arc_graphics_Color, 0, "(FFFLarc/graphics/Color;)V", 9 },
	{ "circles", (intptr_t) SM_mindustry_graphics_Drawf_circles_float_float_float, 0, "(FFF)V", 9 },
	{ "circles", (intptr_t) SM_mindustry_graphics_Drawf_circles_float_float_float_arc_graphics_Color, 0, "(FFFLarc/graphics/Color;)V", 9 },
	{ "select", (intptr_t) SM_mindustry_graphics_Drawf_select_float_float_float_arc_graphics_Color, 0, "(FFFLarc/graphics/Color;)V", 9 },
	{ "square", (intptr_t) SM_mindustry_graphics_Drawf_square_float_float_float_float_arc_graphics_Color, 0, "(FFFFLarc/graphics/Color;)V", 9 },
	{ "square", (intptr_t) SM_mindustry_graphics_Drawf_square_float_float_float_float_arc_graphics_Color_arc_graphics_Color, 0, "(FFFFLarc/graphics/Color;Larc/graphics/Color;)V", 9 },
	{ "square", (intptr_t) SM_mindustry_graphics_Drawf_square_float_float_float_float_arc_graphics_Color_arc_graphics_Color_float, 0, "(FFFFLarc/graphics/Color;Larc/graphics/Color;F)V", 9 },
	{ "cross", (intptr_t) SM_mindustry_graphics_Drawf_cross_float_float_float_arc_graphics_Color, 0, "(FFFLarc/graphics/Color;)V", 9 },
	{ "poly", (intptr_t) SM_mindustry_graphics_Drawf_poly_float_float_int_float_float_arc_graphics_Color, 0, "(FFIFFLarc/graphics/Color;)V", 9 },
	{ "fillPoly", (intptr_t) SM_mindustry_graphics_Drawf_fillPoly_float_float_int_float_float_arc_graphics_Color, 0, "(FFIFFLarc/graphics/Color;)V", 9 },
	{ "fillPoly", (intptr_t) SM_mindustry_graphics_Drawf_fillPoly_float_float_int_float_float_arc_graphics_Color_arc_graphics_Color_float, 0, "(FFIFFLarc/graphics/Color;Larc/graphics/Color;F)V", 9 },
	{ "square", (intptr_t) SM_mindustry_graphics_Drawf_square_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "square", (intptr_t) SM_mindustry_graphics_Drawf_square_float_float_float_arc_graphics_Color, 0, "(FFFLarc/graphics/Color;)V", 9 },
	{ "square", (intptr_t) SM_mindustry_graphics_Drawf_square_float_float_float, 0, "(FFF)V", 9 },
	{ "arrow", (intptr_t) SM_mindustry_graphics_Drawf_arrow_float_float_float_float_float_float, 0, "(FFFFFF)V", 9 },
	{ "arrow", (intptr_t) SM_mindustry_graphics_Drawf_arrow_float_float_float_float_float_float_arc_graphics_Color, 0, "(FFFFFFLarc/graphics/Color;)V", 9 },
	{ "laser", (intptr_t) SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float, 0, "(Larc/graphics/g2d/TextureRegion;Larc/graphics/g2d/TextureRegion;FFFF)V", 9 },
	{ "laser", (intptr_t) SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float, 0, "(Larc/graphics/g2d/TextureRegion;Larc/graphics/g2d/TextureRegion;Larc/graphics/g2d/TextureRegion;FFFF)V", 9 },
	{ "laser", (intptr_t) SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float, 0, "(Larc/graphics/g2d/TextureRegion;Larc/graphics/g2d/TextureRegion;FFFFF)V", 9 },
	{ "laser", (intptr_t) SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float, 0, "(Larc/graphics/g2d/TextureRegion;Larc/graphics/g2d/TextureRegion;Larc/graphics/g2d/TextureRegion;FFFFF)V", 9 },
	{ "laser", (intptr_t) SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float_boolean, 0, "(Larc/graphics/g2d/TextureRegion;Larc/graphics/g2d/TextureRegion;Larc/graphics/g2d/TextureRegion;FFFFFZ)V", 9 },
	{ "laser", (intptr_t) SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float_boolean_boolean, 0, "(Larc/graphics/g2d/TextureRegion;Larc/graphics/g2d/TextureRegion;Larc/graphics/g2d/TextureRegion;FFFFFZZ)V", 9 },
	{ "tri", (intptr_t) SM_mindustry_graphics_Drawf_tri_float_float_float_float_float, 0, "(FFFFF)V", 9 },
	{ "construct", (intptr_t) SM_mindustry_graphics_Drawf_construct_mindustry_gen_Building_mindustry_ctype_UnlockableContent_float_float_float_float, 0, "(Lmindustry/gen/Building;Lmindustry/ctype/UnlockableContent;FFFF)V", 9 },
	{ "construct", (intptr_t) SM_mindustry_graphics_Drawf_construct_float_float_arc_graphics_g2d_TextureRegion_float_float_float_float, 0, "(FFLarc/graphics/g2d/TextureRegion;FFFF)V", 9 },
	{ "construct", (intptr_t) SM_mindustry_graphics_Drawf_construct_float_float_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float, 0, "(FFLarc/graphics/g2d/TextureRegion;Larc/graphics/Color;FFFF)V", 9 },
	{ "construct", (intptr_t) SM_mindustry_graphics_Drawf_construct_mindustry_gen_Building_arc_graphics_g2d_TextureRegion_float_float_float_float, 0, "(Lmindustry/gen/Building;Larc/graphics/g2d/TextureRegion;FFFF)V", 9 },
	{ "construct", (intptr_t) SM_mindustry_graphics_Drawf_construct_mindustry_gen_Building_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float, 0, "(Lmindustry/gen/Building;Larc/graphics/g2d/TextureRegion;Larc/graphics/Color;FFFF)V", 9 },
	{ "construct", (intptr_t) SM_mindustry_graphics_Drawf_construct_mindustry_gen_Building_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float_float, 0, "(Lmindustry/gen/Building;Larc/graphics/g2d/TextureRegion;Larc/graphics/Color;FFFFF)V", 9 },
	{ "spinSprite", (intptr_t) SM_mindustry_graphics_Drawf_spinSprite_arc_graphics_g2d_TextureRegion_float_float_float, 0, "(Larc/graphics/g2d/TextureRegion;FFF)V", 9 },
	{ "lambda$buildBeam$0", (intptr_t) SM_mindustry_graphics_Drawf_lambda$buildBeam$0_float_float_float_arc_math_geom_Vec2_R_float, 0, "(FFFLarc/math/geom/Vec2;)F", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_graphics_Drawf, 0, "()V", 8 },
};

Class class_mindustry_graphics_Drawf{
		.nativeName = (intptr_t) "mindustry/graphics/Drawf",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_Drawf),
		.classVtable = (intptr_t) vtable_mindustry_graphics_Drawf,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_Drawf,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_Drawf,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 81,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_Drawf = registerClass(&class_mindustry_graphics_Drawf);

}
