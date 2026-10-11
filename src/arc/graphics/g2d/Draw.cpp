#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/GLTexture.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/graphics/g2d/Batch.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/graphics/Color.h"
#include "arc/func/FloatFloatf.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Fill.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "arc/graphics/gl/Shader.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "java/lang/String.h"
#include "arc/util/Tmp.h"
#include "java/lang/reflect/Method.h"
#include "arc/graphics/g2d/ScreenQuad.h"
#include "arc/math/geom/Position.h"
#include "arc/graphics/Blending.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/math/Mat.h"
#include "arc/graphics/Texture.h"
#include "arc/util/Nullable.h"
#include "java/lang/Object.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/Camera.h"

extern "C" {

jobject SF_arc_graphics_g2d_Draw_squad;
jobject SF_arc_graphics_g2d_Draw_carr;
jobject SF_arc_graphics_g2d_Draw_vertices;
jobject SF_arc_graphics_g2d_Draw_zTransformer;
jfloat SF_arc_graphics_g2d_Draw_actualZ;
jobject SF_arc_graphics_g2d_Draw_retColor;
jobject SF_arc_graphics_g2d_Draw_retPackedColor;
jfloat SF_arc_graphics_g2d_Draw_scl;
jfloat SF_arc_graphics_g2d_Draw_xscl;
jfloat SF_arc_graphics_g2d_Draw_yscl;

void mark_arc_graphics_g2d_Draw(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_g2d_Draw_squad)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Draw_squad)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Draw_squad, mark, depth + 1);
		if (SF_arc_graphics_g2d_Draw_carr)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Draw_carr)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Draw_carr, mark, depth + 1);
		if (SF_arc_graphics_g2d_Draw_vertices)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Draw_vertices)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Draw_vertices, mark, depth + 1);
		if (SF_arc_graphics_g2d_Draw_zTransformer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Draw_zTransformer)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Draw_zTransformer, mark, depth + 1);
		if (SF_arc_graphics_g2d_Draw_retColor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Draw_retColor)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Draw_retColor, mark, depth + 1);
		if (SF_arc_graphics_g2d_Draw_retPackedColor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Draw_retPackedColor)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Draw_retPackedColor, mark, depth + 1);
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
	auto self = (arc_graphics_g2d_Draw *) object;
}

void init_arc_graphics_g2d_Draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_g2d_Draw_getQuad_R_arc_graphics_g2d_ScreenQuad(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:getQuad", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(26);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_squad;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_arc_graphics_g2d_ScreenQuad(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_ScreenQuad);
	init_arc_graphics_g2d_ScreenQuad(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_squad = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(27);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_squad;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_blit_arc_graphics_gl_Shader(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:blit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(33);
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, (frame[0].o));
	LINE_NUMBER(34);
	((func_arc_graphics_gl_Shader_apply) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_Shader_apply])(ctx, (frame[0].o));
	LINE_NUMBER(35);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_getQuad_R_arc_graphics_g2d_ScreenQuad(ctx);
	((func_arc_graphics_g2d_ScreenQuad_render_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_ScreenQuad_render_arc_graphics_gl_Shader])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_blit_arc_graphics_Texture_arc_graphics_gl_Shader(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:blit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(41);
	((func_arc_graphics_Texture_bind_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Texture_bind_int])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(42);
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, (frame[1].o));
	LINE_NUMBER(43);
	((func_arc_graphics_gl_Shader_apply) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_gl_Shader_apply])(ctx, (frame[1].o));
	LINE_NUMBER(44);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_getQuad_R_arc_graphics_g2d_ScreenQuad(ctx);
	((func_arc_graphics_g2d_ScreenQuad_render_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_ScreenQuad_render_arc_graphics_gl_Shader])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_blit_arc_graphics_gl_FrameBuffer_arc_graphics_gl_Shader(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:blit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_blit_arc_graphics_Texture_arc_graphics_gl_Shader(ctx, (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o)), (frame[1].o));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_batch_arc_graphics_g2d_Batch(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:batch", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(54);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(55);
	clinit_arc_Core(ctx);
	SF_arc_Core_batch = (frame[0].o);
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_batch_arc_graphics_g2d_Batch_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:batch", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(59);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	frame[2].o = sp[0].o;
	LINE_NUMBER(60);
	((func_arc_graphics_g2d_Batch_flush) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_Batch_flush])(ctx, (frame[2].o));
	LINE_NUMBER(62);
	clinit_arc_Core(ctx);
	SF_arc_Core_batch = (frame[0].o);
	LINE_NUMBER(64);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(66);
	((func_arc_graphics_g2d_Batch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Batch_flush])(ctx, (frame[0].o));
	LINE_NUMBER(67);
	clinit_arc_Core(ctx);
	SF_arc_Core_batch = (frame[2].o);
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_stencil_java_lang_Runnable_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:stencil", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(71);
	SM_arc_graphics_g2d_Draw_beginStencil(ctx);
	LINE_NUMBER(73);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[0].o)))(ctx, (frame[0].o));
	LINE_NUMBER(75);
	SM_arc_graphics_g2d_Draw_beginStenciled(ctx);
	LINE_NUMBER(77);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(79);
	SM_arc_graphics_g2d_Draw_endStencil(ctx);
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_beginStencil(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:beginStencil", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(83);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(85);
	SM_arc_graphics_Gl_stencilMask_int(ctx, (255));
	LINE_NUMBER(86);
	SM_arc_graphics_Gl_colorMask_boolean_boolean_boolean_boolean(ctx, (jint(0)), (jint(0)), (jint(0)), (jint(0)));
	LINE_NUMBER(87);
	SM_arc_graphics_Gl_enable_int(ctx, (2960));
	LINE_NUMBER(88);
	SM_arc_graphics_Gl_stencilFunc_int_int_int(ctx, (519), (jint(1)), (255));
	LINE_NUMBER(89);
	SM_arc_graphics_Gl_stencilMask_int(ctx, (255));
	LINE_NUMBER(90);
	SM_arc_graphics_Gl_stencilOp_int_int_int(ctx, (7681), (7681), (7681));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_beginStenciled(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:beginStenciled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(94);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(96);
	SM_arc_graphics_Gl_stencilOp_int_int_int(ctx, (7680), (7680), (7680));
	LINE_NUMBER(97);
	SM_arc_graphics_Gl_colorMask_boolean_boolean_boolean_boolean(ctx, (jint(1)), (jint(1)), (jint(1)), (jint(1)));
	LINE_NUMBER(98);
	SM_arc_graphics_Gl_stencilFunc_int_int_int(ctx, (514), (jint(1)), (255));
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_endStencil(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:endStencil", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(102);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(104);
	SM_arc_graphics_Gl_disable_int(ctx, (2960));
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_scl_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:scl", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(108);
	SM_arc_graphics_g2d_Draw_scl_float_float(ctx, (frame[0].f), (frame[0].f));
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_scl_float_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:scl", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(112);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_xscl = (frame[0].f);
	LINE_NUMBER(113);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_yscl = (frame[1].f);
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_scl(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:scl", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(117);
	jfloat temp0 = jfloat(1);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_yscl = temp0;
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_xscl = temp0;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_g2d_Draw_getShader_R_arc_graphics_gl_Shader(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:getShader", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(121);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Batch_getShader_R_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_getShader_R_arc_graphics_gl_Shader])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_shader_arc_graphics_gl_Shader(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:shader", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(125);
	SM_arc_graphics_g2d_Draw_shader_arc_graphics_gl_Shader_boolean(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_shader_arc_graphics_gl_Shader_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:shader", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(129);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	((func_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader_boolean])(ctx, sp[0].o, (frame[0].o), (frame[1].i));
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_shader(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:shader", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(133);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	((func_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_sort_boolean(jcontext ctx, jbool param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:sort", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(138);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	((func_arc_graphics_g2d_Batch_setSort_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_setSort_boolean])(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_zTransform_arc_func_FloatFloatf(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:zTransform", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(143);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_zTransformer = (frame[0].o);
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_zTransform(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:zTransform", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(147);
	SM_arc_graphics_g2d_Draw_zTransform_arc_func_FloatFloatf(ctx, (jobject(nullptr)));
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_graphics_g2d_Draw_z_R_float(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:z", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_actualZ);
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_z_float(jcontext ctx, jfloat param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:z", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(156);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Draw_zTransformer;
	sp += 1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	jfloat temp0 = frame[0].f;
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_actualZ = temp0;
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_zTransformer;
	jfloat temp0 = frame[0].f;
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_actualZ = temp0;
	jfloat temp3 = (jfloat)((func_arc_func_FloatFloatf_get_float_R_float) resolveInterfaceMethod(ctx, &class_arc_func_FloatFloatf, INDEX_arc_func_FloatFloatf_get_float_R_float, sp[0].o))(ctx, sp[0].o, temp0);
	sp[0].f = temp3;
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	((func_arc_graphics_g2d_Batch_z_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_z_float])(ctx, sp[0].o, sp[1].f);
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_graphics_g2d_Draw_getColorAlpha_R_float(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:getColorAlpha", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(160);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_Batch_getPackedColor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_getPackedColor_R_float])(ctx, sp[0].o);
	jint temp1 = (jint)SM_arc_graphics_Color_floatToIntColor_float_R_int(ctx, temp0);
	frame[0].i = temp1;
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[0].i) & (jint(-16777216)))) >> (24))))) / (jfloat(255.0f)));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_graphics_g2d_Draw_getColorPacked_R_float(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:getColorPacked", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(165);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_Batch_getPackedColor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_getPackedColor_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_graphics_g2d_Draw_getMixColorPacked_R_float(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:getMixColorPacked", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(169);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_Batch_getPackedMixColor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_getPackedMixColor_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_g2d_Draw_getColor_R_arc_graphics_Color(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:getColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(173);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_retColor;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_batch;
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_Batch_getPackedColor_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_getPackedColor_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_abgr8888_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_abgr8888_float_R_arc_graphics_Color])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_g2d_Draw_getMixColor_R_arc_graphics_Color(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:getMixColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(177);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_retPackedColor;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_batch;
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_Batch_getPackedMixColor_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_getPackedMixColor_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_abgr8888_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_abgr8888_float_R_arc_graphics_Color])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:mixcol", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(181);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	jfloat temp0 = (jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r;
	jfloat temp1 = (jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g;
	jfloat temp2 = (jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (frame[1].f));
	jfloat temp4 = (jfloat)SM_arc_graphics_Color_toFloatBits_float_float_float_float_R_float(ctx, temp0, temp1, temp2, temp3);
	((func_arc_graphics_g2d_Batch_setPackedMixColor_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_setPackedMixColor_float])(ctx, sp[0].o, temp4);
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_arc_graphics_Color_float(jcontext ctx, jobject param0, jobject param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:mixcol", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(185);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[1].o, (frame[1].o), (frame[2].f));
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, sp[1].o);
	((func_arc_graphics_g2d_Batch_setPackedMixColor_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_setPackedMixColor_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_mixcol(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:mixcol", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(189);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	((func_arc_graphics_g2d_Batch_setPackedMixColor_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_setPackedMixColor_float])(ctx, sp[0].o, (clinit_arc_graphics_Color(ctx), (jfloat)SF_arc_graphics_Color_clearFloatBits));
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_mixcol_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:mixcol", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(193);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	((func_arc_graphics_g2d_Batch_setPackedMixColor_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_setPackedMixColor_float])(ctx, sp[0].o, (frame[0].f));
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_tint_arc_graphics_Color_arc_graphics_Color_float(jcontext ctx, jobject param0, jobject param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:tint", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(197);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].o), (frame[2].f));
	LINE_NUMBER(198);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_getColorAlpha_R_float(ctx);
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = temp0;
	LINE_NUMBER(199);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_tint_arc_graphics_Color(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:tint", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(203);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	jfloat temp0 = (jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r;
	jfloat temp1 = (jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g;
	jfloat temp2 = (jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b;
	jfloat temp3 = (jfloat)SM_arc_graphics_g2d_Draw_getColorAlpha_R_float(ctx);
	jfloat temp4 = (jfloat)SM_arc_graphics_Color_toFloatBits_float_float_float_float_R_float(ctx, temp0, temp1, temp2, temp3);
	((func_arc_graphics_g2d_Batch_setPackedColor_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_setPackedColor_float])(ctx, sp[0].o, temp4);
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_colorMul_arc_graphics_Color_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:colorMul", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(207);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r) * (frame[1].f)), (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g) * (frame[1].f)), (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b) * (frame[1].f)), (jfloat(1)));
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(jcontext ctx, jobject param0) {
	if (!param0) return;
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:color", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(211);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, (frame[0].o));
	((func_arc_graphics_g2d_Batch_setPackedColor_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_setPackedColor_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(jcontext ctx, jobject param0, jfloat param1) {
	if (!param0) return;
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:color", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(215);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	jfloat temp0 = (jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r;
	jfloat temp1 = (jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g;
	jfloat temp2 = (jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (frame[1].f));
	jfloat temp4 = (jfloat)SM_arc_graphics_Color_toFloatBits_float_float_float_float_R_float(ctx, temp0, temp1, temp2, temp3);
	((func_arc_graphics_g2d_Batch_setPackedColor_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_setPackedColor_float])(ctx, sp[0].o, temp4);
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_color_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:color", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(219);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((func_arc_graphics_Color_rgba8888_int_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_rgba8888_int_R_arc_graphics_Color])(ctx, sp[1].o, (frame[0].i));
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, sp[1].o);
	((func_arc_graphics_g2d_Batch_setPackedColor_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_setPackedColor_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_color_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:color", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(223);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	((func_arc_graphics_g2d_Batch_setPackedColor_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_setPackedColor_float])(ctx, sp[0].o, (frame[0].f));
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:color", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(227);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_carr;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[0].o);
	LINE_NUMBER(228);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_carr;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[1].o);
	LINE_NUMBER(229);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_carr;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (frame[2].o);
	LINE_NUMBER(230);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Draw_carr;
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_Array1_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_Array1_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, (frame[3].f));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(jcontext ctx, jobject param0, jobject param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:color", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(235);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[1].o, (frame[1].o), (frame[2].f));
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, sp[1].o);
	((func_arc_graphics_g2d_Batch_setPackedColor_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_setPackedColor_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_color(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:color", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(239);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	((func_arc_graphics_g2d_Batch_setPackedColor_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_setPackedColor_float])(ctx, sp[0].o, (clinit_arc_graphics_Color(ctx), (jfloat)SF_arc_graphics_Color_whiteFloatBits));
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_color_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:color", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(243);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	jfloat temp0 = (jfloat)SM_arc_graphics_Color_toFloatBits_float_float_float_float_R_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (jfloat(1)));
	((func_arc_graphics_g2d_Batch_setPackedColor_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_setPackedColor_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_color_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:color", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(247);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (frame[3].f));
	jfloat temp4 = (jfloat)SM_arc_graphics_Color_toFloatBits_float_float_float_float_R_float(ctx, temp0, temp1, temp2, temp3);
	((func_arc_graphics_g2d_Batch_setPackedColor_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_setPackedColor_float])(ctx, sp[0].o, temp4);
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_colorl_float(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:colorl", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(252);
	SM_arc_graphics_g2d_Draw_color_float_float_float(ctx, (frame[0].f), (frame[0].f), (frame[0].f));
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_colorl_float_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:colorl", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(257);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, (frame[0].f), (frame[0].f), (frame[0].f), (frame[1].f));
	LINE_NUMBER(258);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:blend", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(261);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	((func_arc_graphics_g2d_Batch_setBlending_arc_graphics_Blending) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_setBlending_arc_graphics_Blending])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_blend(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:blend", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(265);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_normal;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_g2d_Draw_getBlend_R_arc_graphics_Blending(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:getBlend", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(269);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Batch_getBlending_R_arc_graphics_Blending) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_getBlending_R_arc_graphics_Blending])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_reset(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(273);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(274);
	SM_arc_graphics_g2d_Draw_mixcol(ctx);
	LINE_NUMBER(275);
	jfloat temp0 = jfloat(1);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_yscl = temp0;
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_xscl = temp0;
	LINE_NUMBER(276);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(1)));
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_alpha_float(jcontext ctx, jfloat param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:alpha", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(280);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_Batch_getPackedColor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_getPackedColor_R_float])(ctx, sp[0].o);
	jint temp1 = (jint)SM_arc_graphics_Color_floatToIntColor_float_R_int(ctx, temp0);
	frame[1].i = temp1;
	LINE_NUMBER(281);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (frame[0].f));
	frame[2].i = (jint((temp2 * (jfloat(255.0f)))));
	LINE_NUMBER(283);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	jfloat temp3 = (jfloat)SM_arc_graphics_Color_intToFloatColor_int_R_float(ctx, (((frame[1].i) & (jint(16777215))) | ((frame[2].i) << (24))));
	((func_arc_graphics_g2d_Batch_setPackedColor_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_setPackedColor_float])(ctx, sp[0].o, temp3);
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_fbo_arc_graphics_gl_FrameBuffer_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:fbo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_fbo_arc_graphics_Texture_int_int_int(ctx, (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o)), (frame[1].i), (frame[2].i), (frame[3].i));
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_fbo_arc_graphics_Texture_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:fbo", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(293);
	SM_arc_graphics_g2d_Draw_fbo_arc_graphics_Texture_int_int_int_float(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (jfloat(0)));
	LINE_NUMBER(294);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_fbo_arc_graphics_Texture_int_int_int_float(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jfloat param4) {
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:fbo", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(298);
	frame[5].f = (jfloat(((frame[1].i) * (frame[3].i))));
	frame[6].f = (jfloat(((frame[2].i) * (frame[3].i))));
	LINE_NUMBER(299);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	frame[7].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) + (frame[4].f));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	frame[8].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) + (frame[4].f));
	LINE_NUMBER(300);
	jfloat temp0 = frame[7].f;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	frame[9].f = ((temp0 - (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width) / (jfloat(2)))) / (frame[5].f));
	LINE_NUMBER(301);
	jfloat temp1 = frame[8].f;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	frame[10].f = ((temp1 - (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height) / (jfloat(2)))) / (frame[6].f));
	LINE_NUMBER(302);
	jfloat temp2 = frame[7].f;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	frame[11].f = ((temp2 + (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width) / (jfloat(2)))) / (frame[5].f));
	LINE_NUMBER(303);
	jfloat temp3 = frame[8].f;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	frame[12].f = ((temp3 + (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height) / (jfloat(2)))) / (frame[6].f));
	LINE_NUMBER(305);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(306);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	((func_arc_graphics_g2d_TextureRegion_set_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_float_float_float_float])(ctx, sp[0].o, (frame[9].f), (frame[12].f), (frame[11].f), (frame[10].f));
	LINE_NUMBER(308);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp5 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	jfloat temp6 = (jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_width;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp4, temp5, temp6, ((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_height));
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:draw", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(314);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[0].f));
	LINE_NUMBER(315);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	((func_arc_graphics_g2d_Batch_draw_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_draw_java_lang_Runnable])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(316);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_drawRange_float_java_lang_Runnable_java_lang_Runnable(jcontext ctx, jfloat param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:drawRange", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(321);
	SM_arc_graphics_g2d_Draw_drawRange_float_float_java_lang_Runnable_java_lang_Runnable(ctx, (frame[0].f), (jfloat(1,000000e-03f)), (frame[1].o), (frame[2].o));
	LINE_NUMBER(322);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_drawRange_float_float_java_lang_Runnable_java_lang_Runnable(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jobject param3) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:drawRange", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(327);
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, ((frame[0].f) - (frame[1].f)), (frame[2].o));
	LINE_NUMBER(328);
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, ((frame[0].f) + (frame[1].f)), (frame[3].o));
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_quad_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9, jfloat param10, jfloat param11, jfloat param12) {
	jtype frame[22];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:quad", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].f = param8;
	frame[9].f = param9;
	frame[10].f = param10;
	frame[11].f = param11;
	frame[12].f = param12;
	{
	LINE_NUMBER(332);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_Batch_getPackedMixColor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_getPackedMixColor_R_float])(ctx, sp[0].o);
	frame[13].f = temp0;
	LINE_NUMBER(333);
	frame[14].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u);
	LINE_NUMBER(334);
	frame[15].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2);
	LINE_NUMBER(335);
	frame[16].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2);
	LINE_NUMBER(336);
	frame[17].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v);
	LINE_NUMBER(337);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[1].f);
	LINE_NUMBER(338);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (frame[2].f);
	LINE_NUMBER(339);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (frame[3].f);
	LINE_NUMBER(340);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (frame[14].f);
	LINE_NUMBER(341);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (frame[15].f);
	LINE_NUMBER(342);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (frame[13].f);
	LINE_NUMBER(344);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (frame[4].f);
	LINE_NUMBER(345);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (frame[5].f);
	LINE_NUMBER(346);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (frame[6].f);
	LINE_NUMBER(347);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (frame[14].f);
	LINE_NUMBER(348);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (frame[17].f);
	LINE_NUMBER(349);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (frame[13].f);
	LINE_NUMBER(351);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (frame[7].f);
	LINE_NUMBER(352);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (frame[8].f);
	LINE_NUMBER(353);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[9].f);
	LINE_NUMBER(354);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (frame[16].f);
	LINE_NUMBER(355);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (16)) = (frame[17].f);
	LINE_NUMBER(356);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (17)) = (frame[13].f);
	LINE_NUMBER(358);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (18)) = (frame[10].f);
	LINE_NUMBER(359);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (19)) = (frame[11].f);
	LINE_NUMBER(360);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (20)) = (frame[12].f);
	LINE_NUMBER(361);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (21)) = (frame[16].f);
	LINE_NUMBER(362);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (22)) = (frame[15].f);
	LINE_NUMBER(363);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (23)) = (frame[13].f);
	LINE_NUMBER(365);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	jint temp1 = jint(0);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[2].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	SM_arc_graphics_g2d_Draw_vert_arc_graphics_Texture_Array1_float_int_int(ctx, sp[0].o, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_rect(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:rect", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(370);
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
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:rect", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(374);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (frame[0].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(375);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:rect", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(378);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	((func_arc_graphics_g2d_Batch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float])(ctx, sp[0].o, (frame[0].o), ((frame[1].f) - ((frame[3].f) / (jfloat(2)))), ((frame[2].f) - ((frame[4].f) / (jfloat(2)))), (jfloat(0)), (jfloat(0)), (frame[3].f), (frame[4].f), (jfloat(0)));
	LINE_NUMBER(379);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:rect", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(382);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_width));
	jfloat temp3 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[0].o));
	jfloat temp4 = (temp2 * temp3) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_xscl);
	jfloat temp5 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_height));
	jfloat temp6 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp0, temp1, temp4, ((temp5 * temp6) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_yscl)));
	LINE_NUMBER(383);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:rect", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(386);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (frame[0].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(387);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:rect", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(390);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	((func_arc_graphics_g2d_Batch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float])(ctx, sp[0].o, (frame[0].o), ((frame[1].f) - ((frame[3].f) / (jfloat(2)))), ((frame[2].f) - ((frame[4].f) / (jfloat(2)))), (frame[5].f), (frame[6].f), (frame[3].f), (frame[4].f), (frame[7].f));
	LINE_NUMBER(391);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:rect", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(394);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (frame[0].o));
	((func_arc_graphics_g2d_Batch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float])(ctx, sp[0].o, sp[1].o, ((frame[1].f) - ((frame[3].f) / (jfloat(2)))), ((frame[2].f) - ((frame[4].f) / (jfloat(2)))), (frame[5].f), (frame[6].f), (frame[3].f), (frame[4].f), (frame[7].f));
	LINE_NUMBER(395);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:rect", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(398);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), ((frame[3].f) / (jfloat(2))), ((frame[4].f) / (jfloat(2))), (frame[5].f));
	LINE_NUMBER(399);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:rect", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(402);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (frame[0].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), ((frame[3].f) / (jfloat(2))), ((frame[4].f) / (jfloat(2))), (frame[5].f));
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_arc_math_geom_Position_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:rect", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(406);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp0, temp1, (frame[2].f), (frame[3].f));
	LINE_NUMBER(407);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_arc_math_geom_Position_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:rect", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(410);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp0, temp1, (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_arc_math_geom_Position_float(jcontext ctx, jobject param0, jobject param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:rect", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(414);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp0, temp1, (frame[2].f));
	LINE_NUMBER(415);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:rect", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(418);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_width));
	jfloat temp3 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[0].o));
	jfloat temp4 = (temp2 * temp3) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_xscl);
	jfloat temp5 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_height));
	jfloat temp6 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp0, temp1, temp4, ((temp5 * temp6) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_yscl)), (frame[3].f));
	LINE_NUMBER(419);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:rect", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(422);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (frame[0].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(423);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_vert_arc_graphics_Texture_Array1_float_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:vert", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(426);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	((func_arc_graphics_g2d_Batch_draw_arc_graphics_Texture_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_draw_arc_graphics_Texture_Array1_float_int_int])(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(427);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_flush(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:flush", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(430);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	((func_arc_graphics_g2d_Batch_flush) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_flush])(ctx, sp[0].o);
	LINE_NUMBER(431);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_discard(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:discard", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(435);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	((func_arc_graphics_g2d_Batch_discard) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_discard])(ctx, sp[0].o);
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_proj_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:proj", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(439);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(440);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Batch_getProjection_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_getProjection_R_arc_math_Mat])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat])(ctx, sp[0].o, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(441);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_proj_arc_graphics_Camera(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:proj", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_mat;
	SM_arc_graphics_g2d_Draw_proj_arc_math_Mat(ctx, sp[0].o);
	LINE_NUMBER(445);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_proj_arc_math_Mat(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:proj", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(448);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	((func_arc_graphics_g2d_Batch_setProjection_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_setProjection_arc_math_Mat])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(449);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_g2d_Draw_proj_R_arc_math_Mat(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:proj", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(452);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Batch_getProjection_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_getProjection_R_arc_math_Mat])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_trans_arc_math_Mat(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:trans", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(456);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	((func_arc_graphics_g2d_Batch_setTransform_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_setTransform_arc_math_Mat])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(457);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_g2d_Draw_trans_R_arc_math_Mat(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:trans", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(460);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Batch_getTransform_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_getTransform_R_arc_math_Mat])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_g2d_Draw_wrap_arc_graphics_Texture_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:wrap", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(464);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr2;
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(465);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_rectv_arc_graphics_g2d_TextureRegion_float_float_float_float_arc_func_Cons(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:rectv", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(469);
	SM_arc_graphics_g2d_Draw_rectv_arc_graphics_g2d_TextureRegion_float_float_float_float_float_arc_func_Cons(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (jfloat(0)), (frame[5].o));
	LINE_NUMBER(470);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_rectv_arc_graphics_g2d_TextureRegion_float_float_float_float_float_arc_func_Cons(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6) {
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:rectv", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(473);
	SM_arc_graphics_g2d_Draw_rectv_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_arc_func_Cons(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), ((frame[3].f) / (jfloat(2))), ((frame[4].f) / (jfloat(2))), (frame[5].f), (frame[6].o));
	LINE_NUMBER(474);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Draw_rectv_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_arc_func_Cons(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8) {
	jtype frame[35];
	auto stack = &frame[31];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:rectv", 35 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].o = param8;
	{
	LINE_NUMBER(477);
	frame[1].f = ((frame[1].f) - ((frame[3].f) / (jfloat(2))));
	LINE_NUMBER(478);
	frame[2].f = ((frame[2].f) - ((frame[4].f) / (jfloat(2))));
	LINE_NUMBER(481);
	frame[9].f = ((frame[1].f) + (frame[5].f));
	LINE_NUMBER(482);
	frame[10].f = ((frame[2].f) + (frame[6].f));
	LINE_NUMBER(483);
	frame[11].f = (-(frame[5].f));
	LINE_NUMBER(484);
	frame[12].f = (-(frame[6].f));
	LINE_NUMBER(485);
	frame[13].f = ((frame[3].f) - (frame[5].f));
	LINE_NUMBER(486);
	frame[14].f = ((frame[4].f) - (frame[6].f));
	LINE_NUMBER(489);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_cosDeg_float_R_float(ctx, (frame[7].f));
	frame[15].f = temp0;
	LINE_NUMBER(490);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sinDeg_float_R_float(ctx, (frame[7].f));
	frame[16].f = temp1;
	LINE_NUMBER(492);
	frame[17].f = ((((frame[15].f) * (frame[11].f)) - ((frame[16].f) * (frame[12].f))) + (frame[9].f));
	LINE_NUMBER(493);
	frame[18].f = ((((frame[16].f) * (frame[11].f)) + ((frame[15].f) * (frame[12].f))) + (frame[10].f));
	LINE_NUMBER(494);
	frame[19].f = ((((frame[15].f) * (frame[11].f)) - ((frame[16].f) * (frame[14].f))) + (frame[9].f));
	LINE_NUMBER(495);
	frame[20].f = ((((frame[16].f) * (frame[11].f)) + ((frame[15].f) * (frame[14].f))) + (frame[10].f));
	LINE_NUMBER(496);
	frame[21].f = ((((frame[15].f) * (frame[13].f)) - ((frame[16].f) * (frame[14].f))) + (frame[9].f));
	LINE_NUMBER(497);
	frame[22].f = ((((frame[16].f) * (frame[13].f)) + ((frame[15].f) * (frame[14].f))) + (frame[10].f));
	LINE_NUMBER(498);
	frame[23].f = ((frame[17].f) + ((frame[21].f) - (frame[19].f)));
	LINE_NUMBER(499);
	frame[24].f = ((frame[22].f) - ((frame[20].f) - (frame[18].f)));
	LINE_NUMBER(501);
	sp[0].o = frame[8].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[17].f), (frame[18].f));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(502);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[17].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	LINE_NUMBER(503);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[18].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(505);
	sp[0].o = frame[8].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[19].f), (frame[20].f));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(506);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[19].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	LINE_NUMBER(507);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[20].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(509);
	sp[0].o = frame[8].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[21].f), (frame[22].f));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(510);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[21].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	LINE_NUMBER(511);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[22].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(513);
	sp[0].o = frame[8].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[23].f), (frame[24].f));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(514);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[23].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	LINE_NUMBER(515);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[24].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(517);
	frame[25].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u);
	LINE_NUMBER(518);
	frame[26].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2);
	LINE_NUMBER(519);
	frame[27].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2);
	LINE_NUMBER(520);
	frame[28].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v);
	LINE_NUMBER(522);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	jfloat temp2 = (jfloat)((func_arc_graphics_g2d_Batch_getPackedColor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_getPackedColor_R_float])(ctx, sp[0].o);
	frame[29].f = temp2;
	LINE_NUMBER(523);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	jfloat temp3 = (jfloat)((func_arc_graphics_g2d_Batch_getPackedMixColor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_getPackedMixColor_R_float])(ctx, sp[0].o);
	frame[30].f = temp3;
	LINE_NUMBER(524);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[17].f);
	LINE_NUMBER(525);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (frame[18].f);
	LINE_NUMBER(526);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (frame[29].f);
	LINE_NUMBER(527);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (frame[25].f);
	LINE_NUMBER(528);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (frame[26].f);
	LINE_NUMBER(529);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (frame[30].f);
	LINE_NUMBER(531);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (frame[19].f);
	LINE_NUMBER(532);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (frame[20].f);
	LINE_NUMBER(533);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (frame[29].f);
	LINE_NUMBER(534);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (frame[25].f);
	LINE_NUMBER(535);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (frame[28].f);
	LINE_NUMBER(536);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (frame[30].f);
	LINE_NUMBER(538);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (frame[21].f);
	LINE_NUMBER(539);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (frame[22].f);
	LINE_NUMBER(540);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[29].f);
	LINE_NUMBER(541);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (frame[27].f);
	LINE_NUMBER(542);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (16)) = (frame[28].f);
	LINE_NUMBER(543);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (17)) = (frame[30].f);
	LINE_NUMBER(545);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (18)) = (frame[23].f);
	LINE_NUMBER(546);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (19)) = (frame[24].f);
	LINE_NUMBER(547);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (20)) = (frame[29].f);
	LINE_NUMBER(548);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (21)) = (frame[27].f);
	LINE_NUMBER(549);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (22)) = (frame[26].f);
	LINE_NUMBER(550);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (23)) = (frame[30].f);
	LINE_NUMBER(552);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	jint temp4 = jint(0);
	clinit_arc_graphics_g2d_Draw(ctx);
	sp[2].o = (jobject)SF_arc_graphics_g2d_Draw_vertices;
	SM_arc_graphics_g2d_Draw_vert_arc_graphics_Texture_Array1_float_int_int(ctx, sp[0].o, sp[1].o, temp4, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(553);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_g2d_Draw(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Draw:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Draw(ctx);
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_Color, (jint(3)));
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_carr = sp[0].o;
	LINE_NUMBER(17);
	sp[0].o = (jobject) createArray(ctx, &class_float, (24));
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_vertices = sp[0].o;
	LINE_NUMBER(20);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_retColor = sp[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_retPackedColor = sp[0].o;
	LINE_NUMBER(22);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_scl = (jfloat(1));
	LINE_NUMBER(23);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_xscl = (jfloat(1));
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_yscl = (jfloat(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_graphics_g2d_Draw;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field zTransformer
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_graphics_g2d_Draw[] {
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
	{ "squad", &class_arc_graphics_g2d_ScreenQuad, (intptr_t) &SF_arc_graphics_g2d_Draw_squad, "Larc/graphics/g2d/ScreenQuad;", 10 },
	{ "carr", getArrayClass(&class_arc_graphics_Color, 1), (intptr_t) &SF_arc_graphics_g2d_Draw_carr, "[Larc/graphics/Color;", 26 },
	{ "vertices", getArrayClass(&class_float, 1), (intptr_t) &SF_arc_graphics_g2d_Draw_vertices, "[F", 26 },
	{ "zTransformer", &class_arc_func_FloatFloatf, (intptr_t) &SF_arc_graphics_g2d_Draw_zTransformer, "Larc/func/FloatFloatf;", 10 },
	{ "actualZ", &class_float, (intptr_t) &SF_arc_graphics_g2d_Draw_actualZ, "F", 10 },
	{ "retColor", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_g2d_Draw_retColor, "Larc/graphics/Color;", 10 },
	{ "retPackedColor", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_g2d_Draw_retPackedColor, "Larc/graphics/Color;", 10 },
	{ "scl", &class_float, (intptr_t) &SF_arc_graphics_g2d_Draw_scl, "F", 9 },
	{ "xscl", &class_float, (intptr_t) &SF_arc_graphics_g2d_Draw_xscl, "F", 9 },
	{ "yscl", &class_float, (intptr_t) &SF_arc_graphics_g2d_Draw_yscl, "F", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_Draw, 0, "()V", 1 },
	{ "getQuad", (intptr_t) SM_arc_graphics_g2d_Draw_getQuad_R_arc_graphics_g2d_ScreenQuad, 0, "()Larc/graphics/g2d/ScreenQuad;", 10 },
	{ "blit", (intptr_t) SM_arc_graphics_g2d_Draw_blit_arc_graphics_gl_Shader, 0, "(Larc/graphics/gl/Shader;)V", 9 },
	{ "blit", (intptr_t) SM_arc_graphics_g2d_Draw_blit_arc_graphics_Texture_arc_graphics_gl_Shader, 0, "(Larc/graphics/Texture;Larc/graphics/gl/Shader;)V", 9 },
	{ "blit", (intptr_t) SM_arc_graphics_g2d_Draw_blit_arc_graphics_gl_FrameBuffer_arc_graphics_gl_Shader, 0, "(Larc/graphics/gl/FrameBuffer;Larc/graphics/gl/Shader;)V", 9 },
	{ "batch", (intptr_t) SM_arc_graphics_g2d_Draw_batch_arc_graphics_g2d_Batch, 0, "(Larc/graphics/g2d/Batch;)V", 9 },
	{ "batch", (intptr_t) SM_arc_graphics_g2d_Draw_batch_arc_graphics_g2d_Batch_java_lang_Runnable, 0, "(Larc/graphics/g2d/Batch;Ljava/lang/Runnable;)V", 9 },
	{ "stencil", (intptr_t) SM_arc_graphics_g2d_Draw_stencil_java_lang_Runnable_java_lang_Runnable, 0, "(Ljava/lang/Runnable;Ljava/lang/Runnable;)V", 9 },
	{ "beginStencil", (intptr_t) SM_arc_graphics_g2d_Draw_beginStencil, 0, "()V", 9 },
	{ "beginStenciled", (intptr_t) SM_arc_graphics_g2d_Draw_beginStenciled, 0, "()V", 9 },
	{ "endStencil", (intptr_t) SM_arc_graphics_g2d_Draw_endStencil, 0, "()V", 9 },
	{ "scl", (intptr_t) SM_arc_graphics_g2d_Draw_scl_float, 0, "(F)V", 9 },
	{ "scl", (intptr_t) SM_arc_graphics_g2d_Draw_scl_float_float, 0, "(FF)V", 9 },
	{ "scl", (intptr_t) SM_arc_graphics_g2d_Draw_scl, 0, "()V", 9 },
	{ "getShader", (intptr_t) SM_arc_graphics_g2d_Draw_getShader_R_arc_graphics_gl_Shader, 0, "()Larc/graphics/gl/Shader;", 9 },
	{ "shader", (intptr_t) SM_arc_graphics_g2d_Draw_shader_arc_graphics_gl_Shader, 0, "(Larc/graphics/gl/Shader;)V", 9 },
	{ "shader", (intptr_t) SM_arc_graphics_g2d_Draw_shader_arc_graphics_gl_Shader_boolean, 0, "(Larc/graphics/gl/Shader;Z)V", 9 },
	{ "shader", (intptr_t) SM_arc_graphics_g2d_Draw_shader, 0, "()V", 9 },
	{ "sort", (intptr_t) SM_arc_graphics_g2d_Draw_sort_boolean, 0, "(Z)V", 9 },
	{ "zTransform", (intptr_t) SM_arc_graphics_g2d_Draw_zTransform_arc_func_FloatFloatf, 0, "(Larc/func/FloatFloatf;)V", 9 },
	{ "zTransform", (intptr_t) SM_arc_graphics_g2d_Draw_zTransform, 0, "()V", 9 },
	{ "z", (intptr_t) SM_arc_graphics_g2d_Draw_z_R_float, 0, "()F", 9 },
	{ "z", (intptr_t) SM_arc_graphics_g2d_Draw_z_float, 0, "(F)V", 9 },
	{ "getColorAlpha", (intptr_t) SM_arc_graphics_g2d_Draw_getColorAlpha_R_float, 0, "()F", 9 },
	{ "getColorPacked", (intptr_t) SM_arc_graphics_g2d_Draw_getColorPacked_R_float, 0, "()F", 9 },
	{ "getMixColorPacked", (intptr_t) SM_arc_graphics_g2d_Draw_getMixColorPacked_R_float, 0, "()F", 9 },
	{ "getColor", (intptr_t) SM_arc_graphics_g2d_Draw_getColor_R_arc_graphics_Color, 0, "()Larc/graphics/Color;", 9 },
	{ "getMixColor", (intptr_t) SM_arc_graphics_g2d_Draw_getMixColor_R_arc_graphics_Color, 0, "()Larc/graphics/Color;", 9 },
	{ "mixcol", (intptr_t) SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float, 0, "(Larc/graphics/Color;F)V", 9 },
	{ "mixcol", (intptr_t) SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_arc_graphics_Color_float, 0, "(Larc/graphics/Color;Larc/graphics/Color;F)V", 9 },
	{ "mixcol", (intptr_t) SM_arc_graphics_g2d_Draw_mixcol, 0, "()V", 9 },
	{ "mixcol", (intptr_t) SM_arc_graphics_g2d_Draw_mixcol_float, 0, "(F)V", 9 },
	{ "tint", (intptr_t) SM_arc_graphics_g2d_Draw_tint_arc_graphics_Color_arc_graphics_Color_float, 0, "(Larc/graphics/Color;Larc/graphics/Color;F)V", 9 },
	{ "tint", (intptr_t) SM_arc_graphics_g2d_Draw_tint_arc_graphics_Color, 0, "(Larc/graphics/Color;)V", 9 },
	{ "colorMul", (intptr_t) SM_arc_graphics_g2d_Draw_colorMul_arc_graphics_Color_float, 0, "(Larc/graphics/Color;F)V", 9 },
	{ "color", (intptr_t) SM_arc_graphics_g2d_Draw_color_arc_graphics_Color, 0, "(Larc/graphics/Color;)V", 9 },
	{ "color", (intptr_t) SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float, 0, "(Larc/graphics/Color;F)V", 9 },
	{ "color", (intptr_t) SM_arc_graphics_g2d_Draw_color_int, 0, "(I)V", 9 },
	{ "color", (intptr_t) SM_arc_graphics_g2d_Draw_color_float, 0, "(F)V", 9 },
	{ "color", (intptr_t) SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color_float, 0, "(Larc/graphics/Color;Larc/graphics/Color;Larc/graphics/Color;F)V", 9 },
	{ "color", (intptr_t) SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float, 0, "(Larc/graphics/Color;Larc/graphics/Color;F)V", 9 },
	{ "color", (intptr_t) SM_arc_graphics_g2d_Draw_color, 0, "()V", 9 },
	{ "color", (intptr_t) SM_arc_graphics_g2d_Draw_color_float_float_float, 0, "(FFF)V", 9 },
	{ "color", (intptr_t) SM_arc_graphics_g2d_Draw_color_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "colorl", (intptr_t) SM_arc_graphics_g2d_Draw_colorl_float, 0, "(F)V", 9 },
	{ "colorl", (intptr_t) SM_arc_graphics_g2d_Draw_colorl_float_float, 0, "(FF)V", 9 },
	{ "blend", (intptr_t) SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending, 0, "(Larc/graphics/Blending;)V", 9 },
	{ "blend", (intptr_t) SM_arc_graphics_g2d_Draw_blend, 0, "()V", 9 },
	{ "getBlend", (intptr_t) SM_arc_graphics_g2d_Draw_getBlend_R_arc_graphics_Blending, 0, "()Larc/graphics/Blending;", 9 },
	{ "reset", (intptr_t) SM_arc_graphics_g2d_Draw_reset, 0, "()V", 9 },
	{ "alpha", (intptr_t) SM_arc_graphics_g2d_Draw_alpha_float, 0, "(F)V", 9 },
	{ "fbo", (intptr_t) SM_arc_graphics_g2d_Draw_fbo_arc_graphics_gl_FrameBuffer_int_int_int, 0, "(Larc/graphics/gl/FrameBuffer;III)V", 9 },
	{ "fbo", (intptr_t) SM_arc_graphics_g2d_Draw_fbo_arc_graphics_Texture_int_int_int, 0, "(Larc/graphics/Texture;III)V", 9 },
	{ "fbo", (intptr_t) SM_arc_graphics_g2d_Draw_fbo_arc_graphics_Texture_int_int_int_float, 0, "(Larc/graphics/Texture;IIIF)V", 9 },
	{ "draw", (intptr_t) SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable, 0, "(FLjava/lang/Runnable;)V", 9 },
	{ "drawRange", (intptr_t) SM_arc_graphics_g2d_Draw_drawRange_float_java_lang_Runnable_java_lang_Runnable, 0, "(FLjava/lang/Runnable;Ljava/lang/Runnable;)V", 9 },
	{ "drawRange", (intptr_t) SM_arc_graphics_g2d_Draw_drawRange_float_float_java_lang_Runnable_java_lang_Runnable, 0, "(FFLjava/lang/Runnable;Ljava/lang/Runnable;)V", 9 },
	{ "quad", (intptr_t) SM_arc_graphics_g2d_Draw_quad_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float_float_float_float, 0, "(Larc/graphics/g2d/TextureRegion;FFFFFFFFFFFF)V", 9 },
	{ "rect", (intptr_t) SM_arc_graphics_g2d_Draw_rect, 0, "()V", 9 },
	{ "rect", (intptr_t) SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float_float, 0, "(Ljava/lang/String;FFFF)V", 9 },
	{ "rect", (intptr_t) SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float, 0, "(Larc/graphics/g2d/TextureRegion;FFFF)V", 9 },
	{ "rect", (intptr_t) SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float, 0, "(Larc/graphics/g2d/TextureRegion;FF)V", 9 },
	{ "rect", (intptr_t) SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float, 0, "(Ljava/lang/String;FF)V", 9 },
	{ "rect", (intptr_t) SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float, 0, "(Larc/graphics/g2d/TextureRegion;FFFFFFF)V", 9 },
	{ "rect", (intptr_t) SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float_float_float_float_float, 0, "(Ljava/lang/String;FFFFFFF)V", 9 },
	{ "rect", (intptr_t) SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float, 0, "(Larc/graphics/g2d/TextureRegion;FFFFF)V", 9 },
	{ "rect", (intptr_t) SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float_float_float, 0, "(Ljava/lang/String;FFFFF)V", 9 },
	{ "rect", (intptr_t) SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_arc_math_geom_Position_float_float, 0, "(Larc/graphics/g2d/TextureRegion;Larc/math/geom/Position;FF)V", 9 },
	{ "rect", (intptr_t) SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_arc_math_geom_Position_float_float_float, 0, "(Larc/graphics/g2d/TextureRegion;Larc/math/geom/Position;FFF)V", 9 },
	{ "rect", (intptr_t) SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_arc_math_geom_Position_float, 0, "(Larc/graphics/g2d/TextureRegion;Larc/math/geom/Position;F)V", 9 },
	{ "rect", (intptr_t) SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float, 0, "(Larc/graphics/g2d/TextureRegion;FFF)V", 9 },
	{ "rect", (intptr_t) SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float, 0, "(Ljava/lang/String;FFF)V", 9 },
	{ "vert", (intptr_t) SM_arc_graphics_g2d_Draw_vert_arc_graphics_Texture_Array1_float_int_int, 0, "(Larc/graphics/Texture;[FII)V", 9 },
	{ "flush", (intptr_t) SM_arc_graphics_g2d_Draw_flush, 0, "()V", 9 },
	{ "discard", (intptr_t) SM_arc_graphics_g2d_Draw_discard, 0, "()V", 9 },
	{ "proj", (intptr_t) SM_arc_graphics_g2d_Draw_proj_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "proj", (intptr_t) SM_arc_graphics_g2d_Draw_proj_arc_graphics_Camera, 0, "(Larc/graphics/Camera;)V", 9 },
	{ "proj", (intptr_t) SM_arc_graphics_g2d_Draw_proj_arc_math_Mat, 0, "(Larc/math/Mat;)V", 9 },
	{ "proj", (intptr_t) SM_arc_graphics_g2d_Draw_proj_R_arc_math_Mat, 0, "()Larc/math/Mat;", 9 },
	{ "trans", (intptr_t) SM_arc_graphics_g2d_Draw_trans_arc_math_Mat, 0, "(Larc/math/Mat;)V", 9 },
	{ "trans", (intptr_t) SM_arc_graphics_g2d_Draw_trans_R_arc_math_Mat, 0, "()Larc/math/Mat;", 9 },
	{ "wrap", (intptr_t) SM_arc_graphics_g2d_Draw_wrap_arc_graphics_Texture_R_arc_graphics_g2d_TextureRegion, 0, "(Larc/graphics/Texture;)Larc/graphics/g2d/TextureRegion;", 9 },
	{ "rectv", (intptr_t) SM_arc_graphics_g2d_Draw_rectv_arc_graphics_g2d_TextureRegion_float_float_float_float_arc_func_Cons, 0, "(Larc/graphics/g2d/TextureRegion;FFFFLarc/func/Cons;)V", 9 },
	{ "rectv", (intptr_t) SM_arc_graphics_g2d_Draw_rectv_arc_graphics_g2d_TextureRegion_float_float_float_float_float_arc_func_Cons, 0, "(Larc/graphics/g2d/TextureRegion;FFFFFLarc/func/Cons;)V", 9 },
	{ "rectv", (intptr_t) SM_arc_graphics_g2d_Draw_rectv_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_arc_func_Cons, 0, "(Larc/graphics/g2d/TextureRegion;FFFFFFFLarc/func/Cons;)V", 9 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_g2d_Draw, 0, "()V", 8 },
};

Class class_arc_graphics_g2d_Draw{
		.nativeName = (intptr_t) "arc/graphics/g2d/Draw",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_Draw),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_Draw,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_Draw,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_Draw,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 86,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_Draw = registerClass(&class_arc_graphics_g2d_Draw);

}
