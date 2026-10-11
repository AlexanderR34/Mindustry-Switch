#include "arc/graphics/g2d/Batch.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/String.h"
#include "arc/graphics/g2d/Batch.h"
#include "arc/math/Mat.h"
#include "arc/graphics/Texture.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/Blending.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_arc_graphics_g2d_Batch(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_g2d_Batch *) object;
	if (self->F_lastTexture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastTexture)->clazz)->markFunction)((jobject) self->F_lastTexture, mark, depth + 1);
	if (self->F_transformMatrix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_transformMatrix)->clazz)->markFunction)((jobject) self->F_transformMatrix, mark, depth + 1);
	if (self->F_projectionMatrix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_projectionMatrix)->clazz)->markFunction)((jobject) self->F_projectionMatrix, mark, depth + 1);
	if (self->F_combinedMatrix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_combinedMatrix)->clazz)->markFunction)((jobject) self->F_combinedMatrix, mark, depth + 1);
	if (self->F_blending)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blending)->clazz)->markFunction)((jobject) self->F_blending, mark, depth + 1);
	if (self->F_shader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shader)->clazz)->markFunction)((jobject) self->F_shader, mark, depth + 1);
	if (self->F_customShader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_customShader)->clazz)->markFunction)((jobject) self->F_customShader, mark, depth + 1);
}

void clinit_arc_graphics_g2d_Batch(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_g2d_Batch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Batch:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Batch(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_idx = (jint(0));
	LINE_NUMBER(12);
	((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_lastTexture = (jref) (jobject(nullptr));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_arc_math_Mat(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Mat);
	init_arc_math_Mat(ctx, sp[1].o);
	((arc_graphics_g2d_Batch *) NULL_CHECK(sp[0].o))->F_transformMatrix = (jref) sp[1].o;
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_math_Mat(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Mat);
	init_arc_math_Mat(ctx, sp[1].o);
	((arc_graphics_g2d_Batch *) NULL_CHECK(sp[0].o))->F_projectionMatrix = (jref) sp[1].o;
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_math_Mat(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Mat);
	init_arc_math_Mat(ctx, sp[1].o);
	((arc_graphics_g2d_Batch *) NULL_CHECK(sp[0].o))->F_combinedMatrix = (jref) sp[1].o;
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Blending(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Blending_normal;
	((arc_graphics_g2d_Batch *) NULL_CHECK(sp[0].o))->F_blending = (jref) sp[1].o;
	LINE_NUMBER(22);
	((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_customShader = (jref) (jobject(nullptr));
	LINE_NUMBER(25);
	((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_colorPacked = (clinit_arc_graphics_Color(ctx), (jfloat)SF_arc_graphics_Color_whiteFloatBits);
	LINE_NUMBER(26);
	((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_mixColorPacked = (clinit_arc_graphics_Color(ctx), (jfloat)SF_arc_graphics_Color_clearFloatBits);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Batch_z_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Batch:z", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(29);
	((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_z = (frame[1].f);
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Batch_setSort_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Batch:setSort", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(35);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Batch_setPackedColor_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Batch:setPackedColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(38);
	((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_colorPacked = (frame[1].f);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_Batch_getPackedColor_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Batch:getPackedColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return ((jfloat)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Batch_setPackedMixColor_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Batch:setPackedMixColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(46);
	((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_mixColorPacked = (frame[1].f);
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_Batch_getPackedMixColor_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Batch:getPackedMixColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return ((jfloat)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_mixColorPacked);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Batch_draw_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Batch:draw", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(58);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Batch_discard(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Batch:discard", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(65);
	((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_idx = (jint(0));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Batch_setBlending_arc_graphics_Blending(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Batch:setBlending", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_blending;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(70);
	((func_arc_graphics_g2d_Batch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Batch_flush])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(72);
	((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_blending = (jref) (frame[1].o);
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Batch_getBlending_R_arc_graphics_Blending(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Batch:getBlending", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_blending;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Batch_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Batch:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	if (((jint)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_ownsShader) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_shader;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_dispose])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(82);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Batch_getProjection_R_arc_math_Mat(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Batch:getProjection", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_projectionMatrix;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Batch_getTransform_R_arc_math_Mat(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Batch:getTransform", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_transformMatrix;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Batch_setProjection_arc_math_Mat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Batch:setProjection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(93);
	((func_arc_graphics_g2d_Batch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Batch_flush])(ctx, (frame[0].o));
	LINE_NUMBER(94);
	sp[0].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_projectionMatrix;
	sp[0].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Batch_setTransform_arc_math_Mat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Batch:setTransform", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(98);
	((func_arc_graphics_g2d_Batch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Batch_flush])(ctx, (frame[0].o));
	LINE_NUMBER(99);
	sp[0].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_transformMatrix;
	sp[0].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Batch_setupMatrices(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Batch:setupMatrices", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_combinedMatrix;
	sp[1].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_projectionMatrix;
	sp[0].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_transformMatrix;
	sp[0].o = (jobject)((func_arc_math_Mat_mul_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_mul_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(104);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Batch_getShader_R_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Batch_getShader_R_arc_graphics_gl_Shader])(ctx, (frame[0].o));
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_projTrans"_j));
	sp[2].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_combinedMatrix;
	((func_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Batch_switchTexture_arc_graphics_Texture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Batch:switchTexture", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(108);
	((func_arc_graphics_g2d_Batch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Batch_flush])(ctx, (frame[0].o));
	LINE_NUMBER(109);
	((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_lastTexture = (jref) (frame[1].o);
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Batch:setShader", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	((func_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Batch:setShader", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(117);
	((func_arc_graphics_g2d_Batch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Batch_flush])(ctx, (frame[0].o));
	LINE_NUMBER(118);
	((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_customShader = (jref) (frame[1].o);
	LINE_NUMBER(119);
	((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_apply = (frame[2].i);
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Batch_getShader_R_arc_graphics_gl_Shader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Batch:getShader", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_customShader;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_shader;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((arc_graphics_g2d_Batch *) NULL_CHECK(sp[-1].o))->F_customShader;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_Batch[] {
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
	(void *) M_arc_graphics_g2d_Batch_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_graphics_g2d_Batch_z_float,
	(void *) M_arc_graphics_g2d_Batch_setSort_boolean,
	(void *) M_arc_graphics_g2d_Batch_setPackedColor_float,
	(void *) M_arc_graphics_g2d_Batch_getPackedColor_R_float,
	(void *) M_arc_graphics_g2d_Batch_setPackedMixColor_float,
	(void *) M_arc_graphics_g2d_Batch_getPackedMixColor_R_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_graphics_g2d_Batch_draw_java_lang_Runnable,
	(void *) nullptr,
	(void *) M_arc_graphics_g2d_Batch_discard,
	(void *) M_arc_graphics_g2d_Batch_setBlending_arc_graphics_Blending,
	(void *) M_arc_graphics_g2d_Batch_getBlending_R_arc_graphics_Blending,
	(void *) M_arc_graphics_g2d_Batch_getProjection_R_arc_math_Mat,
	(void *) M_arc_graphics_g2d_Batch_getTransform_R_arc_math_Mat,
	(void *) M_arc_graphics_g2d_Batch_setProjection_arc_math_Mat,
	(void *) M_arc_graphics_g2d_Batch_setTransform_arc_math_Mat,
	(void *) M_arc_graphics_g2d_Batch_setupMatrices,
	(void *) M_arc_graphics_g2d_Batch_switchTexture_arc_graphics_Texture,
	(void *) M_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader_boolean,
	(void *) M_arc_graphics_g2d_Batch_getShader_R_arc_graphics_gl_Shader,
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
	{ "z", "(F)V" },
	{ "setSort", "(Z)V" },
	{ "setPackedColor", "(F)V" },
	{ "getPackedColor", "()F" },
	{ "setPackedMixColor", "(F)V" },
	{ "getPackedMixColor", "()F" },
	{ "draw", "(Larc/graphics/Texture;[FII)V" },
	{ "draw", "(Larc/graphics/g2d/TextureRegion;FFFFFFF)V" },
	{ "draw", "(Ljava/lang/Runnable;)V" },
	{ "flush", "()V" },
	{ "discard", "()V" },
	{ "setBlending", "(Larc/graphics/Blending;)V" },
	{ "getBlending", "()Larc/graphics/Blending;" },
	{ "getProjection", "()Larc/math/Mat;" },
	{ "getTransform", "()Larc/math/Mat;" },
	{ "setProjection", "(Larc/math/Mat;)V" },
	{ "setTransform", "(Larc/math/Mat;)V" },
	{ "setupMatrices", "()V" },
	{ "switchTexture", "(Larc/graphics/Texture;)V" },
	{ "setShader", "(Larc/graphics/gl/Shader;)V" },
	{ "setShader", "(Larc/graphics/gl/Shader;Z)V" },
	{ "getShader", "()Larc/graphics/gl/Shader;" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static FieldMetadata fields[] {
	{ "z", &class_float, offsetof(arc_graphics_g2d_Batch, F_z), "F", 4 },
	{ "idx", &class_int, offsetof(arc_graphics_g2d_Batch, F_idx), "I", 4 },
	{ "lastTexture", &class_arc_graphics_Texture, offsetof(arc_graphics_g2d_Batch, F_lastTexture), "Larc/graphics/Texture;", 4 },
	{ "apply", &class_boolean, offsetof(arc_graphics_g2d_Batch, F_apply), "Z", 4 },
	{ "transformMatrix", &class_arc_math_Mat, offsetof(arc_graphics_g2d_Batch, F_transformMatrix), "Larc/math/Mat;", 20 },
	{ "projectionMatrix", &class_arc_math_Mat, offsetof(arc_graphics_g2d_Batch, F_projectionMatrix), "Larc/math/Mat;", 20 },
	{ "combinedMatrix", &class_arc_math_Mat, offsetof(arc_graphics_g2d_Batch, F_combinedMatrix), "Larc/math/Mat;", 20 },
	{ "blending", &class_arc_graphics_Blending, offsetof(arc_graphics_g2d_Batch, F_blending), "Larc/graphics/Blending;", 4 },
	{ "shader", &class_arc_graphics_gl_Shader, offsetof(arc_graphics_g2d_Batch, F_shader), "Larc/graphics/gl/Shader;", 4 },
	{ "customShader", &class_arc_graphics_gl_Shader, offsetof(arc_graphics_g2d_Batch, F_customShader), "Larc/graphics/gl/Shader;", 4 },
	{ "ownsShader", &class_boolean, offsetof(arc_graphics_g2d_Batch, F_ownsShader), "Z", 4 },
	{ "colorPacked", &class_float, offsetof(arc_graphics_g2d_Batch, F_colorPacked), "F", 4 },
	{ "mixColorPacked", &class_float, offsetof(arc_graphics_g2d_Batch, F_mixColorPacked), "F", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_Batch, 0, "()V", 1 },
	{ "z", (intptr_t) M_arc_graphics_g2d_Batch_z_float, VTABLE_arc_graphics_g2d_Batch_z_float, "(F)V", 4 },
	{ "setSort", (intptr_t) M_arc_graphics_g2d_Batch_setSort_boolean, VTABLE_arc_graphics_g2d_Batch_setSort_boolean, "(Z)V", 4 },
	{ "setPackedColor", (intptr_t) M_arc_graphics_g2d_Batch_setPackedColor_float, VTABLE_arc_graphics_g2d_Batch_setPackedColor_float, "(F)V", 4 },
	{ "getPackedColor", (intptr_t) M_arc_graphics_g2d_Batch_getPackedColor_R_float, VTABLE_arc_graphics_g2d_Batch_getPackedColor_R_float, "()F", 4 },
	{ "setPackedMixColor", (intptr_t) M_arc_graphics_g2d_Batch_setPackedMixColor_float, VTABLE_arc_graphics_g2d_Batch_setPackedMixColor_float, "(F)V", 4 },
	{ "getPackedMixColor", (intptr_t) M_arc_graphics_g2d_Batch_getPackedMixColor_R_float, VTABLE_arc_graphics_g2d_Batch_getPackedMixColor_R_float, "()F", 4 },
	{ "draw", 0, VTABLE_arc_graphics_g2d_Batch_draw_arc_graphics_Texture_Array1_float_int_int, "(Larc/graphics/Texture;[FII)V", 1028 },
	{ "draw", 0, VTABLE_arc_graphics_g2d_Batch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float, "(Larc/graphics/g2d/TextureRegion;FFFFFFF)V", 1028 },
	{ "draw", (intptr_t) M_arc_graphics_g2d_Batch_draw_java_lang_Runnable, VTABLE_arc_graphics_g2d_Batch_draw_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 4 },
	{ "flush", 0, VTABLE_arc_graphics_g2d_Batch_flush, "()V", 1028 },
	{ "discard", (intptr_t) M_arc_graphics_g2d_Batch_discard, VTABLE_arc_graphics_g2d_Batch_discard, "()V", 4 },
	{ "setBlending", (intptr_t) M_arc_graphics_g2d_Batch_setBlending_arc_graphics_Blending, VTABLE_arc_graphics_g2d_Batch_setBlending_arc_graphics_Blending, "(Larc/graphics/Blending;)V", 4 },
	{ "getBlending", (intptr_t) M_arc_graphics_g2d_Batch_getBlending_R_arc_graphics_Blending, VTABLE_arc_graphics_g2d_Batch_getBlending_R_arc_graphics_Blending, "()Larc/graphics/Blending;", 4 },
	{ "dispose", (intptr_t) M_arc_graphics_g2d_Batch_dispose, VTABLE_arc_graphics_g2d_Batch_dispose, "()V", 1 },
	{ "getProjection", (intptr_t) M_arc_graphics_g2d_Batch_getProjection_R_arc_math_Mat, VTABLE_arc_graphics_g2d_Batch_getProjection_R_arc_math_Mat, "()Larc/math/Mat;", 4 },
	{ "getTransform", (intptr_t) M_arc_graphics_g2d_Batch_getTransform_R_arc_math_Mat, VTABLE_arc_graphics_g2d_Batch_getTransform_R_arc_math_Mat, "()Larc/math/Mat;", 4 },
	{ "setProjection", (intptr_t) M_arc_graphics_g2d_Batch_setProjection_arc_math_Mat, VTABLE_arc_graphics_g2d_Batch_setProjection_arc_math_Mat, "(Larc/math/Mat;)V", 4 },
	{ "setTransform", (intptr_t) M_arc_graphics_g2d_Batch_setTransform_arc_math_Mat, VTABLE_arc_graphics_g2d_Batch_setTransform_arc_math_Mat, "(Larc/math/Mat;)V", 4 },
	{ "setupMatrices", (intptr_t) M_arc_graphics_g2d_Batch_setupMatrices, VTABLE_arc_graphics_g2d_Batch_setupMatrices, "()V", 4 },
	{ "switchTexture", (intptr_t) M_arc_graphics_g2d_Batch_switchTexture_arc_graphics_Texture, VTABLE_arc_graphics_g2d_Batch_switchTexture_arc_graphics_Texture, "(Larc/graphics/Texture;)V", 4 },
	{ "setShader", (intptr_t) M_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader, VTABLE_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader, "(Larc/graphics/gl/Shader;)V", 4 },
	{ "setShader", (intptr_t) M_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader_boolean, VTABLE_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader_boolean, "(Larc/graphics/gl/Shader;Z)V", 4 },
	{ "getShader", (intptr_t) M_arc_graphics_g2d_Batch_getShader_R_arc_graphics_gl_Shader, VTABLE_arc_graphics_g2d_Batch_getShader_R_arc_graphics_gl_Shader, "()Larc/graphics/gl/Shader;", 4 },
};

Class class_arc_graphics_g2d_Batch{
		.nativeName = (intptr_t) "arc/graphics/g2d/Batch",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_Batch),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_Batch,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_Batch,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_Batch,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 35,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_Batch = registerClass(&class_arc_graphics_g2d_Batch);

}
