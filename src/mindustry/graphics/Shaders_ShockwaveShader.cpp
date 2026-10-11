#include "mindustry/graphics/Shaders_ShockwaveShader.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "arc/Events.h"
#include "arc/struct/FloatSeq.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/gl/Shader.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "java/lang/String.h"
#include "mindustry/graphics/Shaders_ShockwaveShader_invoke_java_lang_Runnable_5.h"
#include "mindustry/graphics/Shaders_ShockwaveShader_invoke_java_lang_Runnable_4.h"
#include "mindustry/graphics/Shaders_ShockwaveShader_invoke_java_lang_Runnable_3.h"
#include "arc/graphics/Blending.h"
#include "arc/Core.h"
#include "mindustry/graphics/Shaders.h"
#include "arc/util/Time.h"
#include "mindustry/graphics/Shaders_ShockwaveShader.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Shaders_LoadShader.h"
#include "mindustry/game/EventType_Trigger.h"
#include "arc/graphics/Camera.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "java/lang/System.h"

extern "C" {

jint SF_mindustry_graphics_Shaders$ShockwaveShader_max;
jint SF_mindustry_graphics_Shaders$ShockwaveShader_size;

void mark_mindustry_graphics_Shaders$ShockwaveShader(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_graphics_Shaders$LoadShader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_graphics_Shaders$ShockwaveShader *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_uniforms)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uniforms)->clazz)->markFunction)((jobject) self->F_uniforms, mark, depth + 1);
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
}

void clinit_mindustry_graphics_Shaders$ShockwaveShader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_graphics_Shaders$LoadShader(ctx);
	SF_mindustry_graphics_Shaders$ShockwaveShader_max = jint(64);
	SF_mindustry_graphics_Shaders$ShockwaveShader_size = jint(5);
}

void init_mindustry_graphics_Shaders$ShockwaveShader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders$ShockwaveShader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Shaders$ShockwaveShader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(388);
	init_mindustry_graphics_Shaders$LoadShader_java_lang_String_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"shockwave"_j))), (((jobject) createStringLiteral(ctx, u8"screenspace"_j))));
	LINE_NUMBER(380);
	sp[0].o = frame[0].o;
	clinit_arc_struct_FloatSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	init_arc_struct_FloatSeq(ctx, sp[1].o);
	((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(381);
	sp[0].o = frame[0].o;
	clinit_arc_struct_FloatSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	init_arc_struct_FloatSeq(ctx, sp[1].o);
	((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK(sp[0].o))->F_uniforms = (jref) sp[1].o;
	LINE_NUMBER(382);
	((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_hadAny = (jint(0));
	LINE_NUMBER(383);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_FrameBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_FrameBuffer);
	init_arc_graphics_gl_FrameBuffer(ctx, sp[1].o);
	((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(385);
	((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(20.0f));
	LINE_NUMBER(390);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_update;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_Shaders$ShockwaveShader_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_graphics_Shaders$ShockwaveShader_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_graphics_Shaders$ShockwaveShader_invoke_java_lang_Runnable_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(414);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_preDraw;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_Shaders$ShockwaveShader_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_graphics_Shaders$ShockwaveShader_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_graphics_Shaders$ShockwaveShader_invoke_java_lang_Runnable_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(423);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_postDraw;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_Shaders$ShockwaveShader_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_graphics_Shaders$ShockwaveShader_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_graphics_Shaders$ShockwaveShader_invoke_java_lang_Runnable_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(431);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_Shaders$ShockwaveShader_apply(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders$ShockwaveShader:apply", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(435);
	sp[0].o = (jobject)((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_data;
	frame[1].i = (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) / (jint(5)));
	LINE_NUMBER(437);
	((func_mindustry_graphics_Shaders$ShockwaveShader_setUniformi_java_lang_String_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Shaders$ShockwaveShader_setUniformi_java_lang_String_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"u_shockwave_count"_j))), (frame[1].i));
	LINE_NUMBER(438);
	if ((frame[1].i) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(439);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_resolution"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	jfloat temp0 = (jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_width;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	((func_mindustry_graphics_Shaders$ShockwaveShader_setUniformf_java_lang_String_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$ShockwaveShader_setUniformf_java_lang_String_float_float])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_height));
	LINE_NUMBER(440);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_campos"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	sp[2].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_position;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	jfloat temp2 = temp1 - (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_width) / (jfloat(2)));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	sp[2].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_position;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	((func_mindustry_graphics_Shaders$ShockwaveShader_setUniformf_java_lang_String_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$ShockwaveShader_setUniformf_java_lang_String_float_float])(ctx, sp[0].o, sp[1].o, temp2, (temp3 - (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_height) / (jfloat(2)))));
	LINE_NUMBER(442);
	sp[0].o = (jobject)((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_uniforms;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(444);
	sp[0].o = (jobject)((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(445);
	frame[3].i = (jint(0));
	}
label_9:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_10;
	}
	{
	LINE_NUMBER(446);
	frame[4].i = ((frame[3].i) * (jint(5)));
	LINE_NUMBER(448);
	sp[0].o = (jobject)((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_uniforms;
	((func_arc_struct_FloatSeq_add_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float_float_float])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[4].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[4].i) + (jint(1))))), (((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[4].i) + (jint(2))))) * ((jfloat(1)) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[4].i) + (jint(3))))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[4].i) + (jint(3))))));
	LINE_NUMBER(445);
	INST_IINC(3, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(456);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_shockwaves"_j));
	sp[2].o = (jobject)((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_uniforms;
	sp[2].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK(sp[2].o))->F_items;
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_uniforms;
	((func_mindustry_graphics_Shaders$ShockwaveShader_setUniform4fv_java_lang_String_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$ShockwaveShader_setUniform4fv_java_lang_String_Array1_float_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[3].o))->F_size));
	}
label_3:;
	LINE_NUMBER(458);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_Shaders$ShockwaveShader_add_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders$ShockwaveShader:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(461);
	((func_mindustry_graphics_Shaders$ShockwaveShader_add_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Shaders$ShockwaveShader_add_float_float_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (jfloat(20.0f)));
	LINE_NUMBER(462);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_Shaders$ShockwaveShader_add_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders$ShockwaveShader:add", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(466);
	sp[0].o = (jobject)((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_data;
	if ((((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) / (jint(5))) < (64)) goto label_1;
	}
	{
	LINE_NUMBER(467);
	sp[0].o = (jobject)((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(468);
	ARRAY_ACCESS(jfloat, (frame[5].o), (jint(0))) = (frame[1].f);
	LINE_NUMBER(469);
	ARRAY_ACCESS(jfloat, (frame[5].o), (jint(1))) = (frame[2].f);
	LINE_NUMBER(470);
	ARRAY_ACCESS(jfloat, (frame[5].o), (jint(2))) = (frame[3].f);
	LINE_NUMBER(471);
	ARRAY_ACCESS(jfloat, (frame[5].o), (jint(3))) = (jfloat(1));
	LINE_NUMBER(472);
	ARRAY_ACCESS(jfloat, (frame[5].o), (jint(4))) = (frame[4].f);
	LINE_NUMBER(473);
	goto label_9;
	}
label_1:;
	{
	LINE_NUMBER(474);
	sp[0].o = (jobject)((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = (jobject) createArray(ctx, &class_float, (jint(5)));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(0))) = (frame[1].f);
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))) = (frame[2].f);
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))) = (frame[3].f);
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(3))) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(4))) = (frame[4].f);
	((func_arc_struct_FloatSeq_addAll_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_addAll_Array1_float])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	LINE_NUMBER(476);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_Shaders$ShockwaveShader_lambda$new$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders$ShockwaveShader:lambda$new$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(424);
	if (((jint)((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_hadAny) == 0) goto label_1;
	}
	{
	LINE_NUMBER(425);
	sp[0].o = (jobject)((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(426);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_disabled;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(427);
	sp[0].o = (jobject)((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(428);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	}
label_1:;
	LINE_NUMBER(430);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_Shaders$ShockwaveShader_lambda$new$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders$ShockwaveShader:lambda$new$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(415);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_data;
	sp += 1;
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK(sp[0].o))->F_hadAny = sp[1].i;
	LINE_NUMBER(417);
	if (((jint)((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_hadAny) == 0) goto label_4;
	}
	{
	LINE_NUMBER(418);
	sp[0].o = (jobject)((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_buffer;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	((func_arc_graphics_gl_FrameBuffer_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_resize_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(419);
	sp[0].o = (jobject)((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_buffer;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_clear;
	((func_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	LINE_NUMBER(421);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_Shaders$ShockwaveShader_lambda$new$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders$ShockwaveShader:lambda$new$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(391);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(392);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(393);
	sp[0].o = (jobject)((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_data;
	((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size = (jint(0));
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(398);
	frame[2].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_data;
	if (temp0 >= ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(400);
	sp[0].o = frame[1].o;
	jint temp0 = (frame[2].i) + (jint(3));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(4)))))));
	LINE_NUMBER(402);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(3))))), (jfloat(0)), 1)) > 0) goto label_10;
	}
	{
	LINE_NUMBER(404);
	sp[0].o = (jobject)((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_data;
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) <= (jint(5))) goto label_12;
	}
	{
	LINE_NUMBER(405);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_data;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[1].o))->F_size) - (jint(5))), (frame[1].o), (frame[2].i), (jint(5)));
	}
label_12:;
	{
	LINE_NUMBER(408);
	sp[0].o = (jobject)((mindustry_graphics_Shaders$ShockwaveShader *) NULL_CHECK((frame[0].o)))->F_data;
	((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) - (jint(5)));
	LINE_NUMBER(409);
	INST_IINC(2, -5);
	}
label_10:;
	{
	LINE_NUMBER(398);
	INST_IINC(2, 5);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(412);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_Shaders$ShockwaveShader[] {
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
	(void *) M_arc_graphics_gl_Shader_dispose,
	(void *) M_arc_graphics_gl_Shader_isDisposed_R_boolean,
	(void *) M_mindustry_graphics_Shaders$ShockwaveShader_apply,
	(void *) M_arc_graphics_gl_Shader_preprocess_java_lang_String_boolean_R_java_lang_String,
	(void *) M_arc_graphics_gl_Shader_compileShaders_java_lang_String_java_lang_String,
	(void *) M_arc_graphics_gl_Shader_loadShader_int_java_lang_String_R_int,
	(void *) M_arc_graphics_gl_Shader_createProgram_R_int,
	(void *) M_arc_graphics_gl_Shader_linkProgram_int_R_int,
	(void *) M_arc_graphics_gl_Shader_getLog_R_java_lang_String,
	(void *) M_arc_graphics_gl_Shader_isCompiled_R_boolean,
	(void *) M_arc_graphics_gl_Shader_fetchAttributeLocation_java_lang_String_R_int,
	(void *) M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int,
	(void *) M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_boolean_R_int,
	(void *) M_arc_graphics_gl_Shader_setUniformi_java_lang_String_int,
	(void *) M_arc_graphics_gl_Shader_setUniformi_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniformi_int_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniformi_int_int_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniformi_int_int_int_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniformf_java_lang_String_float,
	(void *) M_arc_graphics_gl_Shader_setUniformf_int_float,
	(void *) M_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float,
	(void *) M_arc_graphics_gl_Shader_setUniformf_int_float_float,
	(void *) M_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float_float,
	(void *) M_arc_graphics_gl_Shader_setUniformf_int_float_float_float,
	(void *) M_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float_float_float,
	(void *) M_arc_graphics_gl_Shader_setUniformf_int_float_float_float_float,
	(void *) M_arc_graphics_gl_Shader_setUniform1fv_java_lang_String_Array1_float_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniform1fv_int_Array1_float_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniform2fv_java_lang_String_Array1_float_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniform2fv_int_Array1_float_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniform3fv_java_lang_String_Array1_float_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniform3fv_int_Array1_float_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniform4fv_java_lang_String_Array1_float_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniform4fv_int_Array1_float_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniformMatrix_java_lang_String_arc_math_Mat,
	(void *) M_arc_graphics_gl_Shader_setUniformMatrix_java_lang_String_arc_math_Mat_boolean,
	(void *) M_arc_graphics_gl_Shader_setUniformMatrix_int_arc_math_Mat,
	(void *) M_arc_graphics_gl_Shader_setUniformMatrix_int_arc_math_Mat_boolean,
	(void *) M_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float,
	(void *) M_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat,
	(void *) M_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat_float_float,
	(void *) M_arc_graphics_gl_Shader_setUniformMatrix3fv_java_lang_String_java_nio_FloatBuffer_int_boolean,
	(void *) M_arc_graphics_gl_Shader_setUniformMatrix4fv_java_lang_String_java_nio_FloatBuffer_int_boolean,
	(void *) M_arc_graphics_gl_Shader_setUniformMatrix4fv_int_Array1_float_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniformMatrix4fv_java_lang_String_Array1_float_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_math_geom_Vec2,
	(void *) M_arc_graphics_gl_Shader_setUniformf_int_arc_math_geom_Vec2,
	(void *) M_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_math_geom_Vec3,
	(void *) M_arc_graphics_gl_Shader_setUniformf_int_arc_math_geom_Vec3,
	(void *) M_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_graphics_Color,
	(void *) M_arc_graphics_gl_Shader_setUniformf_int_arc_graphics_Color,
	(void *) M_arc_graphics_gl_Shader_bind,
	(void *) M_arc_graphics_gl_Shader_disableVertexAttribute_java_lang_String,
	(void *) M_arc_graphics_gl_Shader_fetchUniforms,
	(void *) M_arc_graphics_gl_Shader_fetchAttributes,
	(void *) M_arc_graphics_gl_Shader_hasAttribute_java_lang_String_R_boolean,
	(void *) M_arc_graphics_gl_Shader_getAttributeType_java_lang_String_R_int,
	(void *) M_arc_graphics_gl_Shader_getAttributeLocation_java_lang_String_R_int,
	(void *) M_arc_graphics_gl_Shader_getAttributeSize_java_lang_String_R_int,
	(void *) M_arc_graphics_gl_Shader_hasUniform_java_lang_String_R_boolean,
	(void *) M_arc_graphics_gl_Shader_getUniformType_java_lang_String_R_int,
	(void *) M_arc_graphics_gl_Shader_getUniformLocation_java_lang_String_R_int,
	(void *) M_arc_graphics_gl_Shader_getUniformSize_java_lang_String_R_int,
	(void *) M_arc_graphics_gl_Shader_getAttributes_R_Array1_java_lang_String,
	(void *) M_arc_graphics_gl_Shader_getUniforms_R_Array1_java_lang_String,
	(void *) M_arc_graphics_gl_Shader_getVertexShaderSource_R_java_lang_String,
	(void *) M_arc_graphics_gl_Shader_getFragmentShaderSource_R_java_lang_String,
	(void *) M_mindustry_graphics_Shaders$ShockwaveShader_add_float_float_float,
	(void *) M_mindustry_graphics_Shaders$ShockwaveShader_add_float_float_float_float,
	(void *) M_mindustry_graphics_Shaders$ShockwaveShader_lambda$new$2,
	(void *) M_mindustry_graphics_Shaders$ShockwaveShader_lambda$new$1,
	(void *) M_mindustry_graphics_Shaders$ShockwaveShader_lambda$new$0,
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
	{ "dispose", "()V" },
	{ "isDisposed", "()Z" },
	{ "apply", "()V" },
	{ "preprocess", "(Ljava/lang/String;Z)Ljava/lang/String;" },
	{ "compileShaders", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "loadShader", "(ILjava/lang/String;)I" },
	{ "createProgram", "()I" },
	{ "linkProgram", "(I)I" },
	{ "getLog", "()Ljava/lang/String;" },
	{ "isCompiled", "()Z" },
	{ "fetchAttributeLocation", "(Ljava/lang/String;)I" },
	{ "fetchUniformLocation", "(Ljava/lang/String;)I" },
	{ "fetchUniformLocation", "(Ljava/lang/String;Z)I" },
	{ "setUniformi", "(Ljava/lang/String;I)V" },
	{ "setUniformi", "(II)V" },
	{ "setUniformi", "(Ljava/lang/String;II)V" },
	{ "setUniformi", "(III)V" },
	{ "setUniformi", "(Ljava/lang/String;III)V" },
	{ "setUniformi", "(IIII)V" },
	{ "setUniformi", "(Ljava/lang/String;IIII)V" },
	{ "setUniformi", "(IIIII)V" },
	{ "setUniformf", "(Ljava/lang/String;F)V" },
	{ "setUniformf", "(IF)V" },
	{ "setUniformf", "(Ljava/lang/String;FF)V" },
	{ "setUniformf", "(IFF)V" },
	{ "setUniformf", "(Ljava/lang/String;FFF)V" },
	{ "setUniformf", "(IFFF)V" },
	{ "setUniformf", "(Ljava/lang/String;FFFF)V" },
	{ "setUniformf", "(IFFFF)V" },
	{ "setUniform1fv", "(Ljava/lang/String;[FII)V" },
	{ "setUniform1fv", "(I[FII)V" },
	{ "setUniform2fv", "(Ljava/lang/String;[FII)V" },
	{ "setUniform2fv", "(I[FII)V" },
	{ "setUniform3fv", "(Ljava/lang/String;[FII)V" },
	{ "setUniform3fv", "(I[FII)V" },
	{ "setUniform4fv", "(Ljava/lang/String;[FII)V" },
	{ "setUniform4fv", "(I[FII)V" },
	{ "setUniformMatrix", "(Ljava/lang/String;Larc/math/Mat;)V" },
	{ "setUniformMatrix", "(Ljava/lang/String;Larc/math/Mat;Z)V" },
	{ "setUniformMatrix", "(ILarc/math/Mat;)V" },
	{ "setUniformMatrix", "(ILarc/math/Mat;Z)V" },
	{ "setUniformMatrix4", "(Ljava/lang/String;[F)V" },
	{ "setUniformMatrix4", "(Ljava/lang/String;Larc/math/Mat;)V" },
	{ "setUniformMatrix4", "(Ljava/lang/String;Larc/math/Mat;FF)V" },
	{ "setUniformMatrix3fv", "(Ljava/lang/String;Ljava/nio/FloatBuffer;IZ)V" },
	{ "setUniformMatrix4fv", "(Ljava/lang/String;Ljava/nio/FloatBuffer;IZ)V" },
	{ "setUniformMatrix4fv", "(I[FII)V" },
	{ "setUniformMatrix4fv", "(Ljava/lang/String;[FII)V" },
	{ "setUniformf", "(Ljava/lang/String;Larc/math/geom/Vec2;)V" },
	{ "setUniformf", "(ILarc/math/geom/Vec2;)V" },
	{ "setUniformf", "(Ljava/lang/String;Larc/math/geom/Vec3;)V" },
	{ "setUniformf", "(ILarc/math/geom/Vec3;)V" },
	{ "setUniformf", "(Ljava/lang/String;Larc/graphics/Color;)V" },
	{ "setUniformf", "(ILarc/graphics/Color;)V" },
	{ "bind", "()V" },
	{ "disableVertexAttribute", "(Ljava/lang/String;)V" },
	{ "fetchUniforms", "()V" },
	{ "fetchAttributes", "()V" },
	{ "hasAttribute", "(Ljava/lang/String;)Z" },
	{ "getAttributeType", "(Ljava/lang/String;)I" },
	{ "getAttributeLocation", "(Ljava/lang/String;)I" },
	{ "getAttributeSize", "(Ljava/lang/String;)I" },
	{ "hasUniform", "(Ljava/lang/String;)Z" },
	{ "getUniformType", "(Ljava/lang/String;)I" },
	{ "getUniformLocation", "(Ljava/lang/String;)I" },
	{ "getUniformSize", "(Ljava/lang/String;)I" },
	{ "getAttributes", "()[Ljava/lang/String;" },
	{ "getUniforms", "()[Ljava/lang/String;" },
	{ "getVertexShaderSource", "()Ljava/lang/String;" },
	{ "getFragmentShaderSource", "()Ljava/lang/String;" },
	{ "add", "(FFF)V" },
	{ "add", "(FFFF)V" },
	{ "lambda$new$2", "()V" },
	{ "lambda$new$1", "()V" },
	{ "lambda$new$0", "()V" },
};

static FieldMetadata fields[] {
	{ "max", &class_int, (intptr_t) &SF_mindustry_graphics_Shaders$ShockwaveShader_max, "I", 24 },
	{ "size", &class_int, (intptr_t) &SF_mindustry_graphics_Shaders$ShockwaveShader_size, "I", 24 },
	{ "data", &class_arc_struct_FloatSeq, offsetof(mindustry_graphics_Shaders$ShockwaveShader, F_data), "Larc/struct/FloatSeq;", 4 },
	{ "uniforms", &class_arc_struct_FloatSeq, offsetof(mindustry_graphics_Shaders$ShockwaveShader, F_uniforms), "Larc/struct/FloatSeq;", 4 },
	{ "hadAny", &class_boolean, offsetof(mindustry_graphics_Shaders$ShockwaveShader, F_hadAny), "Z", 4 },
	{ "buffer", &class_arc_graphics_gl_FrameBuffer, offsetof(mindustry_graphics_Shaders$ShockwaveShader, F_buffer), "Larc/graphics/gl/FrameBuffer;", 4 },
	{ "lifetime", &class_float, offsetof(mindustry_graphics_Shaders$ShockwaveShader, F_lifetime), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_Shaders$ShockwaveShader, 0, "()V", 1 },
	{ "apply", (intptr_t) M_mindustry_graphics_Shaders$ShockwaveShader_apply, VTABLE_mindustry_graphics_Shaders$ShockwaveShader_apply, "()V", 1 },
	{ "add", (intptr_t) M_mindustry_graphics_Shaders$ShockwaveShader_add_float_float_float, VTABLE_mindustry_graphics_Shaders$ShockwaveShader_add_float_float_float, "(FFF)V", 1 },
	{ "add", (intptr_t) M_mindustry_graphics_Shaders$ShockwaveShader_add_float_float_float_float, VTABLE_mindustry_graphics_Shaders$ShockwaveShader_add_float_float_float_float, "(FFFF)V", 1 },
	{ "lambda$new$2", (intptr_t) M_mindustry_graphics_Shaders$ShockwaveShader_lambda$new$2, VTABLE_mindustry_graphics_Shaders$ShockwaveShader_lambda$new$2, "()V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_graphics_Shaders$ShockwaveShader_lambda$new$1, VTABLE_mindustry_graphics_Shaders$ShockwaveShader_lambda$new$1, "()V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_graphics_Shaders$ShockwaveShader_lambda$new$0, VTABLE_mindustry_graphics_Shaders$ShockwaveShader_lambda$new$0, "()V", 4098 },
};

Class class_mindustry_graphics_Shaders$ShockwaveShader{
		.nativeName = (intptr_t) "mindustry/graphics/Shaders$ShockwaveShader",
		.parentClass = (intptr_t) &class_mindustry_graphics_Shaders$LoadShader,
		.size = sizeof(mindustry_graphics_Shaders$ShockwaveShader),
		.classVtable = (intptr_t) vtable_mindustry_graphics_Shaders$ShockwaveShader,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_Shaders$ShockwaveShader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_Shaders$ShockwaveShader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_graphics_Shaders,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 86,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_Shaders$ShockwaveShader = registerClass(&class_mindustry_graphics_Shaders$ShockwaveShader);

}

