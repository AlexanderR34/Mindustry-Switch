#include "arc/graphics/g2d/Bloom.h"
#include "arc/graphics/GLTexture.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "arc/Core.h"
#include "java/lang/StringBuilder.h"
#include "arc/Files.h"
#include "arc/graphics/Texture.h"
#include "arc/files/Fi.h"
#include "arc/graphics/Pixmap_Format.h"
#include "arc/graphics/gl/Shader.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "java/lang/String.h"
#include "arc/graphics/g2d/Bloom.h"
#include "arc/graphics/Gl.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_arc_graphics_g2d_Bloom(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_g2d_Bloom *) object;
	if (self->F_thresholdShader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_thresholdShader)->clazz)->markFunction)((jobject) self->F_thresholdShader, mark, depth + 1);
	if (self->F_bloomShader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bloomShader)->clazz)->markFunction)((jobject) self->F_bloomShader, mark, depth + 1);
	if (self->F_blurShader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blurShader)->clazz)->markFunction)((jobject) self->F_blurShader, mark, depth + 1);
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
	if (self->F_pingPong1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pingPong1)->clazz)->markFunction)((jobject) self->F_pingPong1, mark, depth + 1);
	if (self->F_pingPong2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pingPong2)->clazz)->markFunction)((jobject) self->F_pingPong2, mark, depth + 1);
}

void clinit_arc_graphics_g2d_Bloom(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_arc_graphics_g2d_Bloom_resume(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Bloom:resume", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_bloomShader;
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_bloomShader;
	((func_arc_graphics_gl_Shader_setUniformi_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"u_texture0"_j))), (jint(0)));
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_bloomShader;
	((func_arc_graphics_gl_Shader_setUniformi_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"u_texture1"_j))), (jint(1)));
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_thresholdShader;
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_thresholdShader;
	((func_arc_graphics_gl_Shader_setUniformi_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"u_texture0"_j))), (jint(0)));
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_blurShader;
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_blurShader;
	((func_arc_graphics_gl_Shader_setUniformi_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"u_texture"_j))), (jint(0)));
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_pingPong1;
	jint temp0 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_pingPong1;
	jint temp1 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, sp[1].o);
	M_arc_graphics_g2d_Bloom_setSize_int_int(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(30);
	((func_arc_graphics_g2d_Bloom_setThreshold_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Bloom_setThreshold_float])(ctx, (frame[0].o), ((jfloat)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_threshold));
	LINE_NUMBER(31);
	((func_arc_graphics_g2d_Bloom_setBloomIntensity_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Bloom_setBloomIntensity_float])(ctx, (frame[0].o), ((jfloat)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_bloomIntensity));
	LINE_NUMBER(32);
	((func_arc_graphics_g2d_Bloom_setOriginalIntensity_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Bloom_setOriginalIntensity_float])(ctx, (frame[0].o), ((jfloat)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_originalIntensity));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_Bloom(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Bloom:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Bloom(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(36);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_blurPasses = (jint(1));
	LINE_NUMBER(15);
	((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_blending = (jint(0));
	LINE_NUMBER(21);
	((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_capturing = (jint(0));
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jint temp1 = temp0 / (jint(4));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	M_arc_graphics_g2d_Bloom_init_int_int_boolean_boolean(ctx, sp[0].o, temp1, (temp2 / (jint(4))), (jint(0)), (jint(0)));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_Bloom_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Bloom:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Bloom(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(40);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_blurPasses = (jint(1));
	LINE_NUMBER(15);
	((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_blending = (jint(0));
	LINE_NUMBER(21);
	((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_capturing = (jint(0));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jint temp1 = temp0 / (jint(4));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	M_arc_graphics_g2d_Bloom_init_int_int_boolean_boolean(ctx, sp[0].o, temp1, (temp2 / (jint(4))), (jint(0)), (frame[1].i));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_Bloom_int_int_boolean_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Bloom:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Bloom(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(49);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_blurPasses = (jint(1));
	LINE_NUMBER(15);
	((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_blending = (jint(0));
	LINE_NUMBER(21);
	((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_capturing = (jint(0));
	LINE_NUMBER(50);
	M_arc_graphics_g2d_Bloom_init_int_int_boolean_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Bloom_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Bloom:resize", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(54);
	((func_arc_graphics_g2d_Bloom_resize_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Bloom_resize_int_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (jint(4)));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Bloom_resize_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Bloom:resize", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_pingPong1;
	jint temp0 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, sp[0].o);
	if (temp0 != ((frame[1].i) / (frame[3].i))) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_pingPong1;
	jint temp0 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, sp[0].o);
	if (temp0 == ((frame[2].i) / (frame[3].i))) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(60);
	if ((frame[4].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_pingPong1;
	((func_arc_graphics_gl_FrameBuffer_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_resize_int_int])(ctx, sp[0].o, ((frame[1].i) / (frame[3].i)), ((frame[2].i) / (frame[3].i)));
	LINE_NUMBER(62);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_pingPong2;
	((func_arc_graphics_gl_FrameBuffer_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_resize_int_int])(ctx, sp[0].o, ((frame[1].i) / (frame[3].i)), ((frame[2].i) / (frame[3].i)));
	LINE_NUMBER(63);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_gl_FrameBuffer_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_resize_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(64);
	M_arc_graphics_g2d_Bloom_setSize_int_int(ctx, (frame[0].o), ((frame[1].i) / (frame[3].i)), ((frame[2].i) / (frame[3].i)));
	}
label_5:;
	LINE_NUMBER(66);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Bloom_init_int_int_boolean_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Bloom:init", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(69);
	((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_blending = (frame[4].i);
	((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_a = 1.0f;
	LINE_NUMBER(71);
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Pixmap$Format_rgba8888;
	frame[5].o = sp[0].o;
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_FrameBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_FrameBuffer);
	sp[2].o = frame[5].o;
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[3].o);
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[3].o);
	init_arc_graphics_gl_FrameBuffer_arc_graphics_Pixmap$Format_int_int_boolean(ctx, sp[1].o, sp[2].o, temp0, temp1, (frame[3].i));
	((arc_graphics_g2d_Bloom *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_FrameBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_FrameBuffer);
	init_arc_graphics_gl_FrameBuffer_arc_graphics_Pixmap$Format_int_int_boolean(ctx, sp[1].o, (frame[5].o), (frame[1].i), (frame[2].i), (jint(0)));
	((arc_graphics_g2d_Bloom *) NULL_CHECK(sp[0].o))->F_pingPong1 = (jref) sp[1].o;
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_FrameBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_FrameBuffer);
	init_arc_graphics_gl_FrameBuffer_arc_graphics_Pixmap$Format_int_int_boolean(ctx, sp[1].o, (frame[5].o), (frame[1].i), (frame[2].i), (jint(0)));
	((arc_graphics_g2d_Bloom *) NULL_CHECK(sp[0].o))->F_pingPong2 = (jref) sp[1].o;
	LINE_NUMBER(77);
	if ((frame[4].i) == 0) goto label_6;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"alpha_"_j));
	goto label_7;
label_6:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_7:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"screenspace"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[6].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"bloom"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)SM_arc_graphics_g2d_Bloom_createShader_java_lang_String_java_lang_String_R_arc_graphics_gl_Shader(ctx, sp[1].o, sp[2].o);
	((arc_graphics_g2d_Bloom *) NULL_CHECK(sp[0].o))->F_bloomShader = (jref) sp[1].o;
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"screenspace"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[6].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"threshold"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)SM_arc_graphics_g2d_Bloom_createShader_java_lang_String_java_lang_String_R_arc_graphics_gl_Shader(ctx, sp[1].o, sp[2].o);
	((arc_graphics_g2d_Bloom *) NULL_CHECK(sp[0].o))->F_thresholdShader = (jref) sp[1].o;
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"blurspace"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[6].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"gaussian"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)SM_arc_graphics_g2d_Bloom_createShader_java_lang_String_java_lang_String_R_arc_graphics_gl_Shader(ctx, sp[1].o, sp[2].o);
	((arc_graphics_g2d_Bloom *) NULL_CHECK(sp[0].o))->F_blurShader = (jref) sp[1].o;
	LINE_NUMBER(84);
	M_arc_graphics_g2d_Bloom_setSize_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(85);
	((func_arc_graphics_g2d_Bloom_setBloomIntensity_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Bloom_setBloomIntensity_float])(ctx, (frame[0].o), (jfloat(2.5f)));
	LINE_NUMBER(86);
	((func_arc_graphics_g2d_Bloom_setOriginalIntensity_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Bloom_setOriginalIntensity_float])(ctx, (frame[0].o), (jfloat(1)));
	LINE_NUMBER(87);
	((func_arc_graphics_g2d_Bloom_setThreshold_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Bloom_setThreshold_float])(ctx, (frame[0].o), (jfloat(0.5f)));
	LINE_NUMBER(89);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_bloomShader;
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_bloomShader;
	((func_arc_graphics_gl_Shader_setUniformi_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"u_texture0"_j))), (jint(0)));
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_bloomShader;
	((func_arc_graphics_gl_Shader_setUniformi_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"u_texture1"_j))), (jint(1)));
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_thresholdShader;
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_thresholdShader;
	((func_arc_graphics_gl_Shader_setUniformi_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"u_texture0"_j))), (jint(0)));
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_blurShader;
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_blurShader;
	((func_arc_graphics_gl_Shader_setUniformi_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"u_texture"_j))), (jint(0)));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Bloom_setClearColor_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Bloom:setClearColor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(95);
	((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_r = (frame[1].f);
	LINE_NUMBER(96);
	((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_g = (frame[2].f);
	LINE_NUMBER(97);
	((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_b = (frame[3].f);
	LINE_NUMBER(98);
	((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_a = (frame[4].f);
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Bloom_capture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Bloom:capture", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	static int bloomCapCount = 0;
	if ((++bloomCapCount) % 60 == 1) {
		auto b = (arc_graphics_g2d_Bloom*)self;
		printf("[Bloom:capture] #%d buffer=%p, pingPong1=%p, pingPong2=%p, thresholdShader=%p, blurShader=%p, bloomShader=%p, capturing=%d\n",
			bloomCapCount, (void*)b->F_buffer, (void*)b->F_pingPong1, (void*)b->F_pingPong2,
			(void*)b->F_thresholdShader, (void*)b->F_blurShader, (void*)b->F_bloomShader, (int)b->F_capturing);
		fflush(stdout);
	}
	LINE_NUMBER(103);
	if (((jint)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_capturing) != 0) goto label_1;
	}
	{
	LINE_NUMBER(104);
	((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_capturing = (jint(1));
	LINE_NUMBER(105);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_gl_FrameBuffer_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin])(ctx, sp[0].o);
	LINE_NUMBER(106);
	SM_arc_graphics_Gl_clearColor_float_float_float_float(ctx, ((jfloat)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_r), ((jfloat)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_g), ((jfloat)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_b), ((jfloat)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_a));
	LINE_NUMBER(107);
	SM_arc_graphics_Gl_clear_int(ctx, (16640));
	}
label_1:;
	LINE_NUMBER(109);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Bloom_capturePause(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Bloom:capturePause", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	if (((jint)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_capturing) == 0) goto label_1;
	}
	{
	LINE_NUMBER(114);
	((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_capturing = (jint(0));
	LINE_NUMBER(115);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(117);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Bloom_captureContinue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Bloom:captureContinue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(121);
	if (((jint)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_capturing) != 0) goto label_1;
	}
	{
	LINE_NUMBER(122);
	((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_capturing = (jint(1));
	LINE_NUMBER(123);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_gl_FrameBuffer_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(125);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Bloom_render(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Bloom:render", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	static int bloomRenCount = 0;
	if ((++bloomRenCount) % 60 == 1) {
		auto b = (arc_graphics_g2d_Bloom*)self;
		printf("[Bloom:render] #%d blurPasses=%d, blending=%d, buffer=%p, capturing=%d\n",
			bloomRenCount, (int)b->F_blurPasses, (int)b->F_blending, (void*)b->F_buffer, (int)b->F_capturing);
		fflush(stdout);
	}
	LINE_NUMBER(129);
	if (((jint)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_capturing) == 0) goto label_1;
	}
	{
	LINE_NUMBER(130);
	((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_capturing = (jint(0));
	LINE_NUMBER(131);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(134);
	SM_arc_graphics_Gl_disable_int(ctx, (3042));
	LINE_NUMBER(135);
	SM_arc_graphics_Gl_disable_int(ctx, (2929));
	LINE_NUMBER(136);
	SM_arc_graphics_Gl_depthMask_boolean(ctx, (jint(0)));
	LINE_NUMBER(140);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_pingPong1;
	((func_arc_graphics_gl_FrameBuffer_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin])(ctx, sp[0].o);
	LINE_NUMBER(141);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[1].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_thresholdShader;
	((func_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(142);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_pingPong1;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(145);
	frame[1].i = (jint(0));
	}
label_10:;
	{
	if ((frame[1].i) >= ((jint)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_blurPasses)) goto label_11;
	}
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_pingPong2;
	((func_arc_graphics_gl_FrameBuffer_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin])(ctx, sp[0].o);
	LINE_NUMBER(148);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_blurShader;
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	LINE_NUMBER(149);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_blurShader;
	((func_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"dir"_j))), (jfloat(1)), (jfloat(0)));
	LINE_NUMBER(150);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_pingPong1;
	sp[1].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_blurShader;
	((func_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(151);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_pingPong2;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(154);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_pingPong1;
	((func_arc_graphics_gl_FrameBuffer_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin])(ctx, sp[0].o);
	LINE_NUMBER(155);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_blurShader;
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	LINE_NUMBER(156);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_blurShader;
	((func_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"dir"_j))), (jfloat(0)), (jfloat(1)));
	LINE_NUMBER(157);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_pingPong2;
	sp[1].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_blurShader;
	((func_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(158);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_pingPong1;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(145);
	INST_IINC(1, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(161);
	if (((jint)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_blending) == 0) goto label_23;
	}
	{
	LINE_NUMBER(162);
	SM_arc_graphics_Gl_enable_int(ctx, (3042));
	LINE_NUMBER(163);
	SM_arc_graphics_Gl_blendFunc_int_int(ctx, (770), (771));
	}
label_23:;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_pingPong1;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	((func_arc_graphics_Texture_bind_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o)))->vtable)[VTABLE_arc_graphics_Texture_bind_int])(ctx, (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o)), (jint(1)));
	LINE_NUMBER(167);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_bloomShader;
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_bloomShader;
	((func_arc_graphics_gl_Shader_setUniformi_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"u_texture0"_j))), (jint(0)));
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_bloomShader;
	((func_arc_graphics_gl_Shader_setUniformi_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"u_texture1"_j))), (jint(1)));
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[1].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_bloomShader;
	((func_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Bloom_setBloomIntensity_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Bloom:setBloomIntensity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(175);
	((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_bloomIntensity = (frame[1].f);
	LINE_NUMBER(176);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_bloomShader;
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	LINE_NUMBER(177);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_bloomShader;
	((func_arc_graphics_gl_Shader_setUniformf_java_lang_String_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BloomIntensity"_j))), (frame[1].f));
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Bloom_setOriginalIntensity_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Bloom:setOriginalIntensity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(185);
	((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_originalIntensity = (frame[1].f);
	LINE_NUMBER(186);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_bloomShader;
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	LINE_NUMBER(187);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_bloomShader;
	((func_arc_graphics_gl_Shader_setUniformf_java_lang_String_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"OriginalIntensity"_j))), (frame[1].f));
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Bloom_setThreshold_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Bloom:setThreshold", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(195);
	((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_threshold = (frame[1].f);
	LINE_NUMBER(196);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_thresholdShader;
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	LINE_NUMBER(197);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_thresholdShader;
	((func_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"threshold"_j))), (frame[1].f), ((jfloat(1)) / ((jfloat(1)) - (frame[1].f))));
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Bloom_setSize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Bloom:setSize", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_blurShader;
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	LINE_NUMBER(202);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_blurShader;
	((func_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"size"_j))), (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Bloom_buffer_R_arc_graphics_gl_FrameBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Bloom:buffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_buffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Bloom_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Bloom:dispose", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_gl_FrameBuffer_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_dispose])(ctx, sp[0].o);
	LINE_NUMBER(214);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_pingPong1;
	((func_arc_graphics_gl_FrameBuffer_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_dispose])(ctx, sp[0].o);
	LINE_NUMBER(215);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_pingPong2;
	((func_arc_graphics_gl_FrameBuffer_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_dispose])(ctx, sp[0].o);
	LINE_NUMBER(217);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_blurShader;
	((func_arc_graphics_gl_Shader_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_dispose])(ctx, sp[0].o);
	LINE_NUMBER(218);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_bloomShader;
	((func_arc_graphics_gl_Shader_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_dispose])(ctx, sp[0].o);
	LINE_NUMBER(219);
	sp[0].o = (jobject)((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_thresholdShader;
	((func_arc_graphics_gl_Shader_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_dispose])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(220);
	goto label_9;
label_2:;
	INST_ASTORE(1);
label_9:;
	LINE_NUMBER(221);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_arc_graphics_g2d_Bloom_createShader_java_lang_String_java_lang_String_R_arc_graphics_gl_Shader(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Bloom:createShader", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Bloom(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(224);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_Shader);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"bloomshaders/"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[0].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8".vert"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[1].o))(ctx, sp[1].o, sp[2].o);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_files;
	clinit_java_lang_StringBuilder(ctx);
	sp[3].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[3].o);
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"bloomshaders/"_j))));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, (frame[1].o));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8".frag"_j))));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[3].o);
	sp[2].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[2].o))(ctx, sp[2].o, sp[3].o);
	init_arc_graphics_gl_Shader_arc_files_Fi_arc_files_Fi(ctx, sp[0].o, sp[1].o, sp[2].o);
	auto shader = (arc_graphics_gl_Shader*)sp[0].o;
	const char* vName = stringToNative(ctx, (jstring)param0);
	const char* fName = stringToNative(ctx, (jstring)param1);
	printf("[Bloom:createShader] %s / %s -> compiled=%d, program=%d\n", vName, fName, (int)shader->F_isCompiled, (int)shader->F_program);
	if (!shader->F_isCompiled && shader->F_log) {
		printf("[Bloom:createShader Error] %s\n", stringToNative(ctx, (jstring)shader->F_log));
	}
	fflush(stdout);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_Bloom[] {
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
	(void *) M_arc_graphics_g2d_Bloom_resume,
	(void *) M_arc_graphics_g2d_Bloom_resize_int_int,
	(void *) M_arc_graphics_g2d_Bloom_resize_int_int_int,
	(void *) M_arc_graphics_g2d_Bloom_init_int_int_boolean_boolean,
	(void *) M_arc_graphics_g2d_Bloom_setClearColor_float_float_float_float,
	(void *) M_arc_graphics_g2d_Bloom_capture,
	(void *) M_arc_graphics_g2d_Bloom_capturePause,
	(void *) M_arc_graphics_g2d_Bloom_captureContinue,
	(void *) M_arc_graphics_g2d_Bloom_render,
	(void *) M_arc_graphics_g2d_Bloom_setBloomIntensity_float,
	(void *) M_arc_graphics_g2d_Bloom_setOriginalIntensity_float,
	(void *) M_arc_graphics_g2d_Bloom_setThreshold_float,
	(void *) M_arc_graphics_g2d_Bloom_setSize_int_int,
	(void *) M_arc_graphics_g2d_Bloom_buffer_R_arc_graphics_gl_FrameBuffer,
	(void *) M_arc_graphics_g2d_Bloom_dispose,
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
	{ "resume", "()V" },
	{ "resize", "(II)V" },
	{ "resize", "(III)V" },
	{ "init", "(IIZZ)V" },
	{ "setClearColor", "(FFFF)V" },
	{ "capture", "()V" },
	{ "capturePause", "()V" },
	{ "captureContinue", "()V" },
	{ "render", "()V" },
	{ "setBloomIntensity", "(F)V" },
	{ "setOriginalIntensity", "(F)V" },
	{ "setThreshold", "(F)V" },
	{ "setSize", "(II)V" },
	{ "buffer", "()Larc/graphics/gl/FrameBuffer;" },
	{ "dispose", "()V" },
};

static FieldMetadata fields[] {
	{ "blurPasses", &class_int, offsetof(arc_graphics_g2d_Bloom, F_blurPasses), "I", 1 },
	{ "blending", &class_boolean, offsetof(arc_graphics_g2d_Bloom, F_blending), "Z", 1 },
	{ "thresholdShader", &class_arc_graphics_gl_Shader, offsetof(arc_graphics_g2d_Bloom, F_thresholdShader), "Larc/graphics/gl/Shader;", 2 },
	{ "bloomShader", &class_arc_graphics_gl_Shader, offsetof(arc_graphics_g2d_Bloom, F_bloomShader), "Larc/graphics/gl/Shader;", 2 },
	{ "blurShader", &class_arc_graphics_gl_Shader, offsetof(arc_graphics_g2d_Bloom, F_blurShader), "Larc/graphics/gl/Shader;", 2 },
	{ "buffer", &class_arc_graphics_gl_FrameBuffer, offsetof(arc_graphics_g2d_Bloom, F_buffer), "Larc/graphics/gl/FrameBuffer;", 2 },
	{ "pingPong1", &class_arc_graphics_gl_FrameBuffer, offsetof(arc_graphics_g2d_Bloom, F_pingPong1), "Larc/graphics/gl/FrameBuffer;", 2 },
	{ "pingPong2", &class_arc_graphics_gl_FrameBuffer, offsetof(arc_graphics_g2d_Bloom, F_pingPong2), "Larc/graphics/gl/FrameBuffer;", 2 },
	{ "bloomIntensity", &class_float, offsetof(arc_graphics_g2d_Bloom, F_bloomIntensity), "F", 2 },
	{ "originalIntensity", &class_float, offsetof(arc_graphics_g2d_Bloom, F_originalIntensity), "F", 2 },
	{ "threshold", &class_float, offsetof(arc_graphics_g2d_Bloom, F_threshold), "F", 2 },
	{ "capturing", &class_boolean, offsetof(arc_graphics_g2d_Bloom, F_capturing), "Z", 2 },
	{ "r", &class_float, offsetof(arc_graphics_g2d_Bloom, F_r), "F", 2 },
	{ "g", &class_float, offsetof(arc_graphics_g2d_Bloom, F_g), "F", 2 },
	{ "b", &class_float, offsetof(arc_graphics_g2d_Bloom, F_b), "F", 2 },
	{ "a", &class_float, offsetof(arc_graphics_g2d_Bloom, F_a), "F", 2 },
};

static MethodMetadata methods[] {
	{ "resume", (intptr_t) M_arc_graphics_g2d_Bloom_resume, VTABLE_arc_graphics_g2d_Bloom_resume, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_Bloom, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_Bloom_boolean, 0, "(Z)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_Bloom_int_int_boolean_boolean, 0, "(IIZZ)V", 1 },
	{ "resize", (intptr_t) M_arc_graphics_g2d_Bloom_resize_int_int, VTABLE_arc_graphics_g2d_Bloom_resize_int_int, "(II)V", 1 },
	{ "resize", (intptr_t) M_arc_graphics_g2d_Bloom_resize_int_int_int, VTABLE_arc_graphics_g2d_Bloom_resize_int_int_int, "(III)V", 1 },
	{ "init", (intptr_t) M_arc_graphics_g2d_Bloom_init_int_int_boolean_boolean, VTABLE_arc_graphics_g2d_Bloom_init_int_int_boolean_boolean, "(IIZZ)V", 2 },
	{ "setClearColor", (intptr_t) M_arc_graphics_g2d_Bloom_setClearColor_float_float_float_float, VTABLE_arc_graphics_g2d_Bloom_setClearColor_float_float_float_float, "(FFFF)V", 1 },
	{ "capture", (intptr_t) M_arc_graphics_g2d_Bloom_capture, VTABLE_arc_graphics_g2d_Bloom_capture, "()V", 1 },
	{ "capturePause", (intptr_t) M_arc_graphics_g2d_Bloom_capturePause, VTABLE_arc_graphics_g2d_Bloom_capturePause, "()V", 1 },
	{ "captureContinue", (intptr_t) M_arc_graphics_g2d_Bloom_captureContinue, VTABLE_arc_graphics_g2d_Bloom_captureContinue, "()V", 1 },
	{ "render", (intptr_t) M_arc_graphics_g2d_Bloom_render, VTABLE_arc_graphics_g2d_Bloom_render, "()V", 1 },
	{ "setBloomIntensity", (intptr_t) M_arc_graphics_g2d_Bloom_setBloomIntensity_float, VTABLE_arc_graphics_g2d_Bloom_setBloomIntensity_float, "(F)V", 1 },
	{ "setOriginalIntensity", (intptr_t) M_arc_graphics_g2d_Bloom_setOriginalIntensity_float, VTABLE_arc_graphics_g2d_Bloom_setOriginalIntensity_float, "(F)V", 1 },
	{ "setThreshold", (intptr_t) M_arc_graphics_g2d_Bloom_setThreshold_float, VTABLE_arc_graphics_g2d_Bloom_setThreshold_float, "(F)V", 1 },
	{ "setSize", (intptr_t) M_arc_graphics_g2d_Bloom_setSize_int_int, VTABLE_arc_graphics_g2d_Bloom_setSize_int_int, "(II)V", 2 },
	{ "buffer", (intptr_t) M_arc_graphics_g2d_Bloom_buffer_R_arc_graphics_gl_FrameBuffer, VTABLE_arc_graphics_g2d_Bloom_buffer_R_arc_graphics_gl_FrameBuffer, "()Larc/graphics/gl/FrameBuffer;", 1 },
	{ "dispose", (intptr_t) M_arc_graphics_g2d_Bloom_dispose, VTABLE_arc_graphics_g2d_Bloom_dispose, "()V", 1 },
	{ "createShader", (intptr_t) SM_arc_graphics_g2d_Bloom_createShader_java_lang_String_java_lang_String_R_arc_graphics_gl_Shader, 0, "(Ljava/lang/String;Ljava/lang/String;)Larc/graphics/gl/Shader;", 10 },
};

Class class_arc_graphics_g2d_Bloom{
		.nativeName = (intptr_t) "arc/graphics/g2d/Bloom",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_Bloom),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_Bloom,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_Bloom,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_Bloom,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_Bloom = registerClass(&class_arc_graphics_g2d_Bloom);

}
