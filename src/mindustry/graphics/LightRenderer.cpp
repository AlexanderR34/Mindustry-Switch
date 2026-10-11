#include "mindustry/graphics/LightRenderer.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/game/Rules.h"
#include "mindustry/graphics/LightRenderer_CircleLight.h"
#include "arc/graphics/Color.h"
#include "mindustry/graphics/LightRenderer.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/gl/Shader.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "java/lang/String.h"
#include "mindustry/core/Renderer.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "arc/graphics/Blending.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "mindustry/graphics/Shaders_LightShader.h"
#include "java/util/Iterator.h"
#include "mindustry/graphics/Shaders.h"
#include "arc/graphics/Texture.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/graphics/Gl.h"
#include "java/lang/Class.h"
#include "mindustry/graphics/LightRenderer_invoke_java_lang_Runnable_2.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/graphics/LightRenderer_invoke_java_lang_Runnable_3.h"

extern "C" {

jint SF_mindustry_graphics_LightRenderer_scaling;

void mark_mindustry_graphics_LightRenderer(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_LightRenderer *) object;
	if (self->F_vertices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertices)->clazz)->markFunction)((jobject) self->F_vertices, mark, depth + 1);
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
	if (self->F_lights)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lights)->clazz)->markFunction)((jobject) self->F_lights, mark, depth + 1);
	if (self->F_circles)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_circles)->clazz)->markFunction)((jobject) self->F_circles, mark, depth + 1);
	if (self->F_circleRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_circleRegion)->clazz)->markFunction)((jobject) self->F_circleRegion, mark, depth + 1);
}

void clinit_mindustry_graphics_LightRenderer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_graphics_LightRenderer_scaling = jint(4);
}

void init_mindustry_graphics_LightRenderer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LightRenderer:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LightRenderer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (24));
	((mindustry_graphics_LightRenderer *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_FrameBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_FrameBuffer);
	init_arc_graphics_gl_FrameBuffer(ctx, sp[1].o);
	((mindustry_graphics_LightRenderer *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_graphics_LightRenderer *) NULL_CHECK(sp[0].o))->F_lights = (jref) sp[1].o;
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_java_lang_Class(ctx, sp[1].o, (((jobject) &class_mindustry_graphics_LightRenderer$CircleLight)));
	((mindustry_graphics_LightRenderer *) NULL_CHECK(sp[0].o))->F_circles = (jref) sp[1].o;
	LINE_NUMBER(23);
	((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_circleIndex = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_LightRenderer_add_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LightRenderer:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_mindustry_graphics_LightRenderer_enabled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_LightRenderer_enabled_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_lights;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_LightRenderer_add_float_float_float_arc_graphics_Color_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LightRenderer:add", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(33);
	jint temp0 = (jint)((func_mindustry_graphics_LightRenderer_enabled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_LightRenderer_enabled_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	if ((floatCompare((frame[3].f), (jfloat(0)), 1)) > 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(37);
	jfloat temp0 = (jfloat)SM_arc_graphics_Color_toFloatBits_float_float_float_float_R_float(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[4].o)))->F_r), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[4].o)))->F_g), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[4].o)))->F_b), (frame[5].f));
	frame[6].f = temp0;
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_circles;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) > ((jint)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_circleIndex)) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_circles;
	clinit_mindustry_graphics_LightRenderer$CircleLight(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_LightRenderer$CircleLight);
	init_mindustry_graphics_LightRenderer$CircleLight(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_circles;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_graphics_LightRenderer$CircleLight, 1), sp[0].o)), ((jint)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_circleIndex)));
	LINE_NUMBER(43);
	((func_mindustry_graphics_LightRenderer$CircleLight_set_float_float_float_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_graphics_LightRenderer$CircleLight_set_float_float_float_float])(ctx, (frame[7].o), (frame[1].f), (frame[2].f), (frame[6].f), (frame[3].f));
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	((mindustry_graphics_LightRenderer *) NULL_CHECK(sp[0].o))->F_circleIndex = (((jint)((mindustry_graphics_LightRenderer *) NULL_CHECK(sp[0].o))->F_circleIndex) + (jint(1)));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_LightRenderer_add_float_float_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jobject param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LightRenderer:add", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(49);
	((func_mindustry_graphics_LightRenderer_add_float_float_arc_graphics_g2d_TextureRegion_float_arc_graphics_Color_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_LightRenderer_add_float_float_arc_graphics_g2d_TextureRegion_float_arc_graphics_Color_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].o), (jfloat(0)), (frame[4].o), (frame[5].f));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_LightRenderer_add_float_float_arc_graphics_g2d_TextureRegion_float_arc_graphics_Color_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jfloat param3, jobject param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LightRenderer:add", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(53);
	jint temp0 = (jint)((func_mindustry_graphics_LightRenderer_enabled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_LightRenderer_enabled_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(55);
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, (frame[5].o));
	frame[7].f = temp0;
	LINE_NUMBER(56);
	frame[8].f = (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_xscl);
	frame[9].f = (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_yscl);
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_LightRenderer_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_graphics_LightRenderer_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_graphics_LightRenderer_invoke_java_lang_Runnable_2);
		proxy->F_field7 = (frame[4].f);
		proxy->F_field6 = (frame[2].f);
		proxy->F_field5 = (frame[1].f);
		proxy->F_field4 = (jref) (frame[3].o);
		proxy->F_field3 = (frame[9].f);
		proxy->F_field2 = (frame[8].f);
		proxy->F_field1 = (frame[6].f);
		proxy->F_field0 = (frame[7].f);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_graphics_LightRenderer_add_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_LightRenderer_add_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_LightRenderer_line_float_float_float_float_float_arc_graphics_Color_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5, jfloat param6) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LightRenderer:line", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].o = param5;
	frame[7].f = param6;
	{
	LINE_NUMBER(67);
	jint temp0 = (jint)((func_mindustry_graphics_LightRenderer_enabled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_LightRenderer_enabled_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_LightRenderer_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_graphics_LightRenderer_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_graphics_LightRenderer_invoke_java_lang_Runnable_3);
		proxy->F_field7 = (frame[5].f);
		proxy->F_field6 = (frame[2].f);
		proxy->F_field5 = (frame[4].f);
		proxy->F_field4 = (frame[1].f);
		proxy->F_field3 = (frame[3].f);
		proxy->F_field2 = (frame[7].f);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_graphics_LightRenderer_add_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_LightRenderer_add_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_graphics_LightRenderer_enabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LightRenderer:enabled", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(187);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_lighting) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_ambientLight;
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a), (jfloat(1,000000e-04f)), -1)) <= 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_drawLight) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_LightRenderer_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LightRenderer:draw", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(191);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_enableLight) != 0) goto label_1;
	}
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_lights;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(193);
	((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_circleIndex = (jint(0));
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_circleRegion;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"circle-shadow"_j))));
	((mindustry_graphics_LightRenderer *) NULL_CHECK(sp[0].o))->F_circleRegion = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_buffer;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jint temp1 = temp0 / (jint(4));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	((func_arc_graphics_gl_FrameBuffer_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_resize_int_int])(ctx, sp[0].o, temp1, (temp2 / (jint(4))));
	LINE_NUMBER(201);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(202);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_buffer;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_clear;
	((func_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(203);
	SM_arc_graphics_g2d_Draw_sort_boolean(ctx, (jint(0)));
	LINE_NUMBER(204);
	SM_arc_graphics_Gl_blendEquationSeparate_int_int(ctx, (jint(32774)), (jint(32776)));
	LINE_NUMBER(206);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_normal;
	((func_arc_graphics_Blending_apply) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Blending_apply])(ctx, sp[0].o);
	LINE_NUMBER(208);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_lights;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_12:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_java_lang_Runnable, sp[0].o));
	LINE_NUMBER(209);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(210);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(211);
	frame[1].i = (jint(0));
	}
label_16:;
	{
	if ((frame[1].i) >= ((jint)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_circleIndex)) goto label_17;
	}
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_circles;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_graphics_LightRenderer$CircleLight, 1), sp[0].o)), (frame[1].i)));
	LINE_NUMBER(213);
	SM_arc_graphics_g2d_Draw_color_float(ctx, ((jfloat)((mindustry_graphics_LightRenderer$CircleLight *) NULL_CHECK((frame[2].o)))->F_color));
	LINE_NUMBER(214);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_circleRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_graphics_LightRenderer$CircleLight *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((mindustry_graphics_LightRenderer$CircleLight *) NULL_CHECK((frame[2].o)))->F_y), (((jfloat)((mindustry_graphics_LightRenderer$CircleLight *) NULL_CHECK((frame[2].o)))->F_radius) * (jfloat(2))), (((jfloat)((mindustry_graphics_LightRenderer$CircleLight *) NULL_CHECK((frame[2].o)))->F_radius) * (jfloat(2))));
	LINE_NUMBER(211);
	INST_IINC(1, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(216);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(217);
	SM_arc_graphics_g2d_Draw_sort_boolean(ctx, (jint(1)));
	LINE_NUMBER(218);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(219);
	SM_arc_graphics_Gl_blendEquationSeparate_int_int(ctx, (jint(32774)), (jint(32774)));
	LINE_NUMBER(221);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(222);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_light;
	sp[0].o = (jobject)((mindustry_graphics_Shaders$LightShader *) NULL_CHECK(sp[0].o))->F_ambient;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_ambientLight;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_buffer;
	clinit_mindustry_graphics_Shaders(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Shaders_light;
	((func_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(225);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_lights;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(226);
	((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_circleIndex = (jint(0));
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_LightRenderer_lambda$line$0_arc_graphics_Color_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6) {
	NULL_CHECK(self);
	jtype frame[30];
	auto stack = &frame[26];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LightRenderer:lambda$line$0", 30 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	{
	LINE_NUMBER(70);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, (frame[1].o), (frame[2].f));
	LINE_NUMBER(72);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_angleExact_float_float_R_float(ctx, ((frame[3].f) - (frame[4].f)), ((frame[5].f) - (frame[6].f)));
	frame[8].f = temp0;
	LINE_NUMBER(73);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"circle-end"_j))));
	frame[9].o = sp[0].o;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"circle-mid"_j))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(75);
	jfloat temp1 = (jfloat)SM_arc_graphics_g2d_Draw_getColorPacked_R_float(ctx);
	frame[11].f = temp1;
	LINE_NUMBER(76);
	frame[12].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[10].o)))->F_u);
	LINE_NUMBER(77);
	frame[13].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[10].o)))->F_v2);
	LINE_NUMBER(78);
	frame[14].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[10].o)))->F_u2);
	LINE_NUMBER(79);
	frame[15].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[10].o)))->F_v);
	LINE_NUMBER(81);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((frame[8].f) + (jfloat(90.0f))), (frame[7].f));
	frame[16].o = sp[0].o;
	LINE_NUMBER(82);
	frame[17].f = ((frame[4].f) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[16].o)))->F_x));
	frame[18].f = ((frame[6].f) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[16].o)))->F_y));
	LINE_NUMBER(83);
	frame[19].f = ((frame[4].f) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[16].o)))->F_x));
	frame[20].f = ((frame[6].f) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[16].o)))->F_y));
	LINE_NUMBER(84);
	frame[21].f = ((frame[3].f) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[16].o)))->F_x));
	frame[22].f = ((frame[5].f) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[16].o)))->F_y));
	LINE_NUMBER(85);
	frame[23].f = ((frame[3].f) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[16].o)))->F_x));
	frame[24].f = ((frame[5].f) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[16].o)))->F_y));
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[17].f);
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (frame[18].f);
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (frame[11].f);
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (frame[12].f);
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (frame[13].f);
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (jfloat(0));
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (frame[19].f);
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (frame[20].f);
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (frame[11].f);
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (frame[12].f);
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (frame[15].f);
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(0));
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (frame[21].f);
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (frame[22].f);
	LINE_NUMBER(103);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[11].f);
	LINE_NUMBER(104);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (frame[14].f);
	LINE_NUMBER(105);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (16)) = (frame[15].f);
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (17)) = (jfloat(0));
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (18)) = (frame[23].f);
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (19)) = (frame[24].f);
	LINE_NUMBER(110);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (20)) = (frame[11].f);
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (21)) = (frame[14].f);
	LINE_NUMBER(112);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (22)) = (frame[13].f);
	LINE_NUMBER(113);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (23)) = (jfloat(0));
	LINE_NUMBER(115);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[9].o)))->F_texture;
	sp[1].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	jint temp2 = jint(0);
	sp[2].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	SM_arc_graphics_g2d_Draw_vert_arc_graphics_Texture_Array1_float_int_int(ctx, sp[0].o, sp[1].o, temp2, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(117);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[8].f), (frame[7].f));
	frame[25].o = sp[0].o;
	LINE_NUMBER(119);
	frame[12].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[9].o)))->F_u);
	LINE_NUMBER(120);
	frame[13].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[9].o)))->F_v2);
	LINE_NUMBER(121);
	frame[14].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[9].o)))->F_u2);
	LINE_NUMBER(122);
	frame[15].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[9].o)))->F_v);
	LINE_NUMBER(124);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[23].f);
	LINE_NUMBER(125);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (frame[24].f);
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (frame[11].f);
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (frame[12].f);
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (frame[13].f);
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (jfloat(0));
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (frame[21].f);
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (frame[22].f);
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (frame[11].f);
	LINE_NUMBER(134);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (frame[12].f);
	LINE_NUMBER(135);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (frame[15].f);
	LINE_NUMBER(136);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(0));
	LINE_NUMBER(138);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = ((frame[21].f) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[25].o)))->F_x));
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = ((frame[22].f) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[25].o)))->F_y));
	LINE_NUMBER(140);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[11].f);
	LINE_NUMBER(141);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (frame[14].f);
	LINE_NUMBER(142);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (16)) = (frame[15].f);
	LINE_NUMBER(143);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (17)) = (jfloat(0));
	LINE_NUMBER(145);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (18)) = ((frame[23].f) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[25].o)))->F_x));
	LINE_NUMBER(146);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (19)) = ((frame[24].f) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[25].o)))->F_y));
	LINE_NUMBER(147);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (20)) = (frame[11].f);
	LINE_NUMBER(148);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (21)) = (frame[14].f);
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (22)) = (frame[13].f);
	LINE_NUMBER(150);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (23)) = (jfloat(0));
	LINE_NUMBER(152);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[9].o)))->F_texture;
	sp[1].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	jint temp3 = jint(0);
	sp[2].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	SM_arc_graphics_g2d_Draw_vert_arc_graphics_Texture_Array1_float_int_int(ctx, sp[0].o, sp[1].o, temp3, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[19].f);
	LINE_NUMBER(155);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (frame[20].f);
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (frame[11].f);
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (frame[12].f);
	LINE_NUMBER(158);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (frame[13].f);
	LINE_NUMBER(159);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (jfloat(0));
	LINE_NUMBER(161);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (frame[17].f);
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (frame[18].f);
	LINE_NUMBER(163);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (frame[11].f);
	LINE_NUMBER(164);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (frame[12].f);
	LINE_NUMBER(165);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (frame[15].f);
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(0));
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = ((frame[17].f) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[25].o)))->F_x));
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = ((frame[18].f) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[25].o)))->F_y));
	LINE_NUMBER(170);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[11].f);
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (frame[14].f);
	LINE_NUMBER(172);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (16)) = (frame[15].f);
	LINE_NUMBER(173);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (17)) = (jfloat(0));
	LINE_NUMBER(175);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (18)) = ((frame[19].f) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[25].o)))->F_x));
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (19)) = ((frame[20].f) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[25].o)))->F_y));
	LINE_NUMBER(177);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (20)) = (frame[11].f);
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (21)) = (frame[14].f);
	LINE_NUMBER(179);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (22)) = (frame[13].f);
	LINE_NUMBER(180);
	sp[0].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (23)) = (jfloat(0));
	LINE_NUMBER(182);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[9].o)))->F_texture;
	sp[1].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	jint temp4 = jint(0);
	sp[2].o = (jobject)((mindustry_graphics_LightRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	SM_arc_graphics_g2d_Draw_vert_arc_graphics_Texture_Array1_float_int_int(ctx, sp[0].o, sp[1].o, temp4, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_LightRenderer_lambda$add$0_float_float_float_float_arc_graphics_g2d_TextureRegion_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jfloat param5, jfloat param6, jfloat param7) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LightRenderer:lambda$add$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LightRenderer(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(58);
	SM_arc_graphics_g2d_Draw_color_float(ctx, (frame[0].f));
	LINE_NUMBER(59);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (frame[1].f));
	LINE_NUMBER(60);
	SM_arc_graphics_g2d_Draw_scl_float_float(ctx, (frame[2].f), (frame[3].f));
	LINE_NUMBER(61);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, (frame[4].o), (frame[5].f), (frame[6].f), (frame[7].f));
	LINE_NUMBER(62);
	SM_arc_graphics_g2d_Draw_scl(ctx);
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_LightRenderer[] {
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
	(void *) M_mindustry_graphics_LightRenderer_add_java_lang_Runnable,
	(void *) M_mindustry_graphics_LightRenderer_add_float_float_float_arc_graphics_Color_float,
	(void *) M_mindustry_graphics_LightRenderer_add_float_float_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float,
	(void *) M_mindustry_graphics_LightRenderer_add_float_float_arc_graphics_g2d_TextureRegion_float_arc_graphics_Color_float,
	(void *) M_mindustry_graphics_LightRenderer_line_float_float_float_float_float_arc_graphics_Color_float,
	(void *) M_mindustry_graphics_LightRenderer_enabled_R_boolean,
	(void *) M_mindustry_graphics_LightRenderer_draw,
	(void *) M_mindustry_graphics_LightRenderer_lambda$line$0_arc_graphics_Color_float_float_float_float_float_float,
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
	{ "add", "(Ljava/lang/Runnable;)V" },
	{ "add", "(FFFLarc/graphics/Color;F)V" },
	{ "add", "(FFLarc/graphics/g2d/TextureRegion;Larc/graphics/Color;F)V" },
	{ "add", "(FFLarc/graphics/g2d/TextureRegion;FLarc/graphics/Color;F)V" },
	{ "line", "(FFFFFLarc/graphics/Color;F)V" },
	{ "enabled", "()Z" },
	{ "draw", "()V" },
	{ "lambda$line$0", "(Larc/graphics/Color;FFFFFF)V" },
};

static jclass innerClasses[] {
	&class_mindustry_graphics_LightRenderer$CircleLight,
};

static FieldMetadata fields[] {
	{ "scaling", &class_int, (intptr_t) &SF_mindustry_graphics_LightRenderer_scaling, "I", 26 },
	{ "vertices", getArrayClass(&class_float, 1), offsetof(mindustry_graphics_LightRenderer, F_vertices), "[F", 2 },
	{ "buffer", &class_arc_graphics_gl_FrameBuffer, offsetof(mindustry_graphics_LightRenderer, F_buffer), "Larc/graphics/gl/FrameBuffer;", 2 },
	{ "lights", &class_arc_struct_Seq, offsetof(mindustry_graphics_LightRenderer, F_lights), "Larc/struct/Seq;", 2 },
	{ "circles", &class_arc_struct_Seq, offsetof(mindustry_graphics_LightRenderer, F_circles), "Larc/struct/Seq;", 2 },
	{ "circleIndex", &class_int, offsetof(mindustry_graphics_LightRenderer, F_circleIndex), "I", 2 },
	{ "circleRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_graphics_LightRenderer, F_circleRegion), "Larc/graphics/g2d/TextureRegion;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_LightRenderer, 0, "()V", 1 },
	{ "add", (intptr_t) M_mindustry_graphics_LightRenderer_add_java_lang_Runnable, VTABLE_mindustry_graphics_LightRenderer_add_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
	{ "add", (intptr_t) M_mindustry_graphics_LightRenderer_add_float_float_float_arc_graphics_Color_float, VTABLE_mindustry_graphics_LightRenderer_add_float_float_float_arc_graphics_Color_float, "(FFFLarc/graphics/Color;F)V", 1 },
	{ "add", (intptr_t) M_mindustry_graphics_LightRenderer_add_float_float_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float, VTABLE_mindustry_graphics_LightRenderer_add_float_float_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float, "(FFLarc/graphics/g2d/TextureRegion;Larc/graphics/Color;F)V", 1 },
	{ "add", (intptr_t) M_mindustry_graphics_LightRenderer_add_float_float_arc_graphics_g2d_TextureRegion_float_arc_graphics_Color_float, VTABLE_mindustry_graphics_LightRenderer_add_float_float_arc_graphics_g2d_TextureRegion_float_arc_graphics_Color_float, "(FFLarc/graphics/g2d/TextureRegion;FLarc/graphics/Color;F)V", 1 },
	{ "line", (intptr_t) M_mindustry_graphics_LightRenderer_line_float_float_float_float_float_arc_graphics_Color_float, VTABLE_mindustry_graphics_LightRenderer_line_float_float_float_float_float_arc_graphics_Color_float, "(FFFFFLarc/graphics/Color;F)V", 1 },
	{ "enabled", (intptr_t) M_mindustry_graphics_LightRenderer_enabled_R_boolean, VTABLE_mindustry_graphics_LightRenderer_enabled_R_boolean, "()Z", 1 },
	{ "draw", (intptr_t) M_mindustry_graphics_LightRenderer_draw, VTABLE_mindustry_graphics_LightRenderer_draw, "()V", 1 },
	{ "lambda$line$0", (intptr_t) M_mindustry_graphics_LightRenderer_lambda$line$0_arc_graphics_Color_float_float_float_float_float_float, VTABLE_mindustry_graphics_LightRenderer_lambda$line$0_arc_graphics_Color_float_float_float_float_float_float, "(Larc/graphics/Color;FFFFFF)V", 4098 },
	{ "lambda$add$0", (intptr_t) SM_mindustry_graphics_LightRenderer_lambda$add$0_float_float_float_float_arc_graphics_g2d_TextureRegion_float_float_float, 0, "(FFFFLarc/graphics/g2d/TextureRegion;FFF)V", 4106 },
};

Class class_mindustry_graphics_LightRenderer{
		.nativeName = (intptr_t) "mindustry/graphics/LightRenderer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_LightRenderer),
		.classVtable = (intptr_t) vtable_mindustry_graphics_LightRenderer,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_LightRenderer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_LightRenderer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_LightRenderer = registerClass(&class_mindustry_graphics_LightRenderer);

}
