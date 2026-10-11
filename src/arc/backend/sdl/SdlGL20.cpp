#include "arc/backend/sdl/SdlGL20.h"
#include "java/lang/Object.h"
#include "arc/backend/sdl/jni/SDLGL.h"
#include "java/lang/String.h"
#include "java/nio/FloatBuffer.h"
#include "java/nio/Buffer.h"
#include "java/nio/IntBuffer.h"
#include "arc/backend/sdl/SdlGL20.h"
#include "arc/graphics/GL20.h"

extern "C" {


void mark_arc_backend_sdl_SdlGL20(jobject object, jint mark, jint depth) {
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
	auto self = (arc_backend_sdl_SdlGL20 *) object;
}

void clinit_arc_backend_sdl_SdlGL20(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_backend_sdl_SdlGL20(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_backend_sdl_SdlGL20(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glActiveTexture_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glActiveTexture", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(9);
	SM_arc_backend_sdl_jni_SDLGL_glActiveTexture_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glBindTexture_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glBindTexture", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(10);
	SM_arc_backend_sdl_jni_SDLGL_glBindTexture_int_int(ctx, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glBlendFunc_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glBlendFunc", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(11);
	SM_arc_backend_sdl_jni_SDLGL_glBlendFunc_int_int(ctx, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glClear_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glClear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(12);
	SM_arc_backend_sdl_jni_SDLGL_glClear_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glClearColor_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glClearColor", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(13);
	SM_arc_backend_sdl_jni_SDLGL_glClearColor_float_float_float_float(ctx, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glClearDepthf_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glClearDepthf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(14);
	SM_arc_backend_sdl_jni_SDLGL_glClearDepthf_float(ctx, (frame[1].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glClearStencil_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glClearStencil", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(15);
	SM_arc_backend_sdl_jni_SDLGL_glClearStencil_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glColorMask_boolean_boolean_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1, jbool param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glColorMask", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(16);
	SM_arc_backend_sdl_jni_SDLGL_glColorMask_boolean_boolean_boolean_boolean(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jobject param7) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glCompressedTexImage2D", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].o = param7;
	{
	LINE_NUMBER(17);
	SM_arc_backend_sdl_jni_SDLGL_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glCompressedTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jobject param8) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glCompressedTexSubImage2D", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].o = param8;
	{
	LINE_NUMBER(18);
	SM_arc_backend_sdl_jni_SDLGL_glCompressedTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i), (frame[9].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glCopyTexImage2D_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glCopyTexImage2D", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	{
	LINE_NUMBER(19);
	SM_arc_backend_sdl_jni_SDLGL_glCopyTexImage2D_int_int_int_int_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glCopyTexSubImage2D_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glCopyTexSubImage2D", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	{
	LINE_NUMBER(20);
	SM_arc_backend_sdl_jni_SDLGL_glCopyTexSubImage2D_int_int_int_int_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glCullFace_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glCullFace", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(21);
	SM_arc_backend_sdl_jni_SDLGL_glCullFace_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glDeleteTexture_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glDeleteTexture", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(22);
	SM_arc_backend_sdl_jni_SDLGL_glDeleteTexture_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glDepthFunc_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glDepthFunc", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(23);
	SM_arc_backend_sdl_jni_SDLGL_glDepthFunc_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glDepthMask_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glDepthMask", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(24);
	SM_arc_backend_sdl_jni_SDLGL_glDepthMask_boolean(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glDepthRangef_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glDepthRangef", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(25);
	SM_arc_backend_sdl_jni_SDLGL_glDepthRangef_float_float(ctx, (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glDisable_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glDisable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(26);
	SM_arc_backend_sdl_jni_SDLGL_glDisable_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glDrawArrays_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glDrawArrays", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(27);
	SM_arc_backend_sdl_jni_SDLGL_glDrawArrays_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glDrawElements_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glDrawElements", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(28);
	SM_arc_backend_sdl_jni_SDLGL_glDrawElements_int_int_int_java_nio_Buffer(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glEnable_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glEnable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(29);
	SM_arc_backend_sdl_jni_SDLGL_glEnable_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glFinish(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glFinish", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	SM_arc_backend_sdl_jni_SDLGL_glFinish(ctx);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glFlush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glFlush", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	SM_arc_backend_sdl_jni_SDLGL_glFlush(ctx);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glFrontFace_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glFrontFace", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(32);
	SM_arc_backend_sdl_jni_SDLGL_glFrontFace_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlGL20_glGenTexture_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGenTexture", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glGenTexture_R_int(ctx);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlGL20_glGetError_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGetError", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glGetError_R_int(ctx);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glGetIntegerv_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGetIntegerv", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(35);
	SM_arc_backend_sdl_jni_SDLGL_glGetIntegerv_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_backend_sdl_SdlGL20_glGetString_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGetString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)SM_arc_backend_sdl_jni_SDLGL_glGetString_int_R_java_lang_String(ctx, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glHint_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glHint", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(37);
	SM_arc_backend_sdl_jni_SDLGL_glHint_int_int(ctx, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glLineWidth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glLineWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(38);
	SM_arc_backend_sdl_jni_SDLGL_glLineWidth_float(ctx, (frame[1].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glPixelStorei_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glPixelStorei", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(39);
	SM_arc_backend_sdl_jni_SDLGL_glPixelStorei_int_int(ctx, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glPolygonOffset_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glPolygonOffset", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(40);
	SM_arc_backend_sdl_jni_SDLGL_glPolygonOffset_float_float(ctx, (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glReadPixels_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glReadPixels", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(41);
	SM_arc_backend_sdl_jni_SDLGL_glReadPixels_int_int_int_int_int_int_java_nio_Buffer(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glScissor_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glScissor", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(42);
	SM_arc_backend_sdl_jni_SDLGL_glScissor_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glStencilFunc_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glStencilFunc", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(43);
	SM_arc_backend_sdl_jni_SDLGL_glStencilFunc_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glStencilMask_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glStencilMask", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(44);
	SM_arc_backend_sdl_jni_SDLGL_glStencilMask_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glStencilOp_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glStencilOp", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(45);
	SM_arc_backend_sdl_jni_SDLGL_glStencilOp_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jobject param8) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glTexImage2D", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].o = param8;
	{
	LINE_NUMBER(46);
	SM_arc_backend_sdl_jni_SDLGL_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i), (frame[9].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glTexParameterf_int_int_float(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glTexParameterf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(47);
	SM_arc_backend_sdl_jni_SDLGL_glTexParameterf_int_int_float(ctx, (frame[1].i), (frame[2].i), (frame[3].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jobject param8) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glTexSubImage2D", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].o = param8;
	{
	LINE_NUMBER(48);
	SM_arc_backend_sdl_jni_SDLGL_glTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i), (frame[9].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glViewport_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glViewport", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(49);
	SM_arc_backend_sdl_jni_SDLGL_glViewport_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glAttachShader_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glAttachShader", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(50);
	SM_arc_backend_sdl_jni_SDLGL_glAttachShader_int_int(ctx, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glBindAttribLocation_int_int_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glBindAttribLocation", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(51);
	SM_arc_backend_sdl_jni_SDLGL_glBindAttribLocation_int_int_java_lang_String(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glBindBuffer_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glBindBuffer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(52);
	SM_arc_backend_sdl_jni_SDLGL_glBindBuffer_int_int(ctx, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glBindFramebuffer_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glBindFramebuffer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(53);
	SM_arc_backend_sdl_jni_SDLGL_glBindFramebuffer_int_int(ctx, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glBindRenderbuffer_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glBindRenderbuffer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(54);
	SM_arc_backend_sdl_jni_SDLGL_glBindRenderbuffer_int_int(ctx, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glBlendColor_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glBlendColor", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(55);
	SM_arc_backend_sdl_jni_SDLGL_glBlendColor_float_float_float_float(ctx, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glBlendEquation_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glBlendEquation", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(56);
	SM_arc_backend_sdl_jni_SDLGL_glBlendEquation_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glBlendEquationSeparate_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glBlendEquationSeparate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(57);
	SM_arc_backend_sdl_jni_SDLGL_glBlendEquationSeparate_int_int(ctx, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glBlendFuncSeparate_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glBlendFuncSeparate", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(58);
	SM_arc_backend_sdl_jni_SDLGL_glBlendFuncSeparate_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glBufferData_int_int_java_nio_Buffer_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glBufferData", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(59);
	SM_arc_backend_sdl_jni_SDLGL_glBufferData_int_int_java_nio_Buffer_int(ctx, (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glBufferSubData_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glBufferSubData", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(60);
	SM_arc_backend_sdl_jni_SDLGL_glBufferSubData_int_int_int_java_nio_Buffer(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlGL20_glCheckFramebufferStatus_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glCheckFramebufferStatus", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(61);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glCheckFramebufferStatus_int_R_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glCompileShader_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glCompileShader", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(62);
	SM_arc_backend_sdl_jni_SDLGL_glCompileShader_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlGL20_glCreateProgram_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glCreateProgram", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glCreateProgram_R_int(ctx);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlGL20_glCreateShader_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glCreateShader", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(64);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glCreateShader_int_R_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glDeleteBuffer_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glDeleteBuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(65);
	SM_arc_backend_sdl_jni_SDLGL_glDeleteBuffer_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glDeleteFramebuffer_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glDeleteFramebuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(66);
	SM_arc_backend_sdl_jni_SDLGL_glDeleteFramebuffer_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glDeleteProgram_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glDeleteProgram", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(67);
	SM_arc_backend_sdl_jni_SDLGL_glDeleteProgram_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glDeleteRenderbuffer_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glDeleteRenderbuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(68);
	SM_arc_backend_sdl_jni_SDLGL_glDeleteRenderbuffer_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glDeleteShader_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glDeleteShader", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(69);
	SM_arc_backend_sdl_jni_SDLGL_glDeleteShader_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glDetachShader_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glDetachShader", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(70);
	SM_arc_backend_sdl_jni_SDLGL_glDetachShader_int_int(ctx, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glDisableVertexAttribArray_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glDisableVertexAttribArray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(71);
	SM_arc_backend_sdl_jni_SDLGL_glDisableVertexAttribArray_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glDrawElements_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glDrawElements", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(72);
	SM_arc_backend_sdl_jni_SDLGL_glDrawElements_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glEnableVertexAttribArray_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glEnableVertexAttribArray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(73);
	SM_arc_backend_sdl_jni_SDLGL_glEnableVertexAttribArray_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glFramebufferRenderbuffer_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glFramebufferRenderbuffer", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(74);
	SM_arc_backend_sdl_jni_SDLGL_glFramebufferRenderbuffer_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glFramebufferTexture2D_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glFramebufferTexture2D", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(75);
	SM_arc_backend_sdl_jni_SDLGL_glFramebufferTexture2D_int_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlGL20_glGenBuffer_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGenBuffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glGenBuffer_R_int(ctx);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glGenerateMipmap_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGenerateMipmap", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(77);
	SM_arc_backend_sdl_jni_SDLGL_glGenerateMipmap_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlGL20_glGenFramebuffer_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGenFramebuffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glGenFramebuffer_R_int(ctx);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlGL20_glGenRenderbuffer_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGenRenderbuffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glGenRenderbuffer_R_int(ctx);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_backend_sdl_SdlGL20_glGetActiveAttrib_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGetActiveAttrib", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)SM_arc_backend_sdl_jni_SDLGL_glGetActiveAttrib_int_int_java_lang_Object_java_lang_Object_R_java_lang_String(ctx, (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_backend_sdl_SdlGL20_glGetActiveUniform_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGetActiveUniform", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)SM_arc_backend_sdl_jni_SDLGL_glGetActiveUniform_int_int_java_lang_Object_java_lang_Object_R_java_lang_String(ctx, (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlGL20_glGetAttribLocation_int_java_lang_String_R_int(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGetAttribLocation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(82);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glGetAttribLocation_int_java_lang_String_R_int(ctx, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glGetBooleanv_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGetBooleanv", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(83);
	SM_arc_backend_sdl_jni_SDLGL_glGetBooleanv_int_java_nio_Buffer(ctx, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glGetBufferParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGetBufferParameteriv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(84);
	SM_arc_backend_sdl_jni_SDLGL_glGetBufferParameteriv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glGetFloatv_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGetFloatv", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(85);
	SM_arc_backend_sdl_jni_SDLGL_glGetFloatv_int_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glGetFramebufferAttachmentParameteriv_int_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGetFramebufferAttachmentParameteriv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(86);
	SM_arc_backend_sdl_jni_SDLGL_glGetFramebufferAttachmentParameteriv_int_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glGetProgramiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGetProgramiv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(87);
	SM_arc_backend_sdl_jni_SDLGL_glGetProgramiv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_backend_sdl_SdlGL20_glGetProgramInfoLog_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGetProgramInfoLog", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)SM_arc_backend_sdl_jni_SDLGL_glGetProgramInfoLog_int_R_java_lang_String(ctx, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glGetRenderbufferParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGetRenderbufferParameteriv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(89);
	SM_arc_backend_sdl_jni_SDLGL_glGetRenderbufferParameteriv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glGetShaderiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGetShaderiv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(90);
	SM_arc_backend_sdl_jni_SDLGL_glGetShaderiv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_backend_sdl_SdlGL20_glGetShaderInfoLog_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGetShaderInfoLog", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)SM_arc_backend_sdl_jni_SDLGL_glGetShaderInfoLog_int_R_java_lang_String(ctx, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glGetShaderPrecisionFormat_int_int_java_nio_IntBuffer_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGetShaderPrecisionFormat", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(92);
	SM_arc_backend_sdl_jni_SDLGL_glGetShaderPrecisionFormat_int_int_java_nio_IntBuffer_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glGetTexParameterfv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGetTexParameterfv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(93);
	SM_arc_backend_sdl_jni_SDLGL_glGetTexParameterfv_int_int_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glGetTexParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGetTexParameteriv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(94);
	SM_arc_backend_sdl_jni_SDLGL_glGetTexParameteriv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glGetUniformfv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGetUniformfv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(95);
	SM_arc_backend_sdl_jni_SDLGL_glGetUniformfv_int_int_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glGetUniformiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGetUniformiv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(96);
	SM_arc_backend_sdl_jni_SDLGL_glGetUniformiv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlGL20_glGetUniformLocation_int_java_lang_String_R_int(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGetUniformLocation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(97);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glGetUniformLocation_int_java_lang_String_R_int(ctx, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glGetVertexAttribfv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGetVertexAttribfv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(98);
	SM_arc_backend_sdl_jni_SDLGL_glGetVertexAttribfv_int_int_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glGetVertexAttribiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glGetVertexAttribiv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(99);
	SM_arc_backend_sdl_jni_SDLGL_glGetVertexAttribiv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_backend_sdl_SdlGL20_glIsBuffer_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glIsBuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(100);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glIsBuffer_int_R_boolean(ctx, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_backend_sdl_SdlGL20_glIsEnabled_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glIsEnabled", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(101);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glIsEnabled_int_R_boolean(ctx, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_backend_sdl_SdlGL20_glIsFramebuffer_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glIsFramebuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(102);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glIsFramebuffer_int_R_boolean(ctx, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_backend_sdl_SdlGL20_glIsProgram_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glIsProgram", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(103);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glIsProgram_int_R_boolean(ctx, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_backend_sdl_SdlGL20_glIsRenderbuffer_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glIsRenderbuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(104);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glIsRenderbuffer_int_R_boolean(ctx, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_backend_sdl_SdlGL20_glIsShader_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glIsShader", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(105);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glIsShader_int_R_boolean(ctx, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_backend_sdl_SdlGL20_glIsTexture_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glIsTexture", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(106);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glIsTexture_int_R_boolean(ctx, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glLinkProgram_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glLinkProgram", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(107);
	SM_arc_backend_sdl_jni_SDLGL_glLinkProgram_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glReleaseShaderCompiler(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glReleaseShaderCompiler", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	SM_arc_backend_sdl_jni_SDLGL_glReleaseShaderCompiler(ctx);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glRenderbufferStorage_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glRenderbufferStorage", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(109);
	SM_arc_backend_sdl_jni_SDLGL_glRenderbufferStorage_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glSampleCoverage_float_boolean(jcontext ctx, jobject self, jfloat param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glSampleCoverage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(110);
	SM_arc_backend_sdl_jni_SDLGL_glSampleCoverage_float_boolean(ctx, (frame[1].f), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glShaderSource_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glShaderSource", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(111);
	SM_arc_backend_sdl_jni_SDLGL_glShaderSource_int_java_lang_String(ctx, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glStencilFuncSeparate_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glStencilFuncSeparate", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(112);
	SM_arc_backend_sdl_jni_SDLGL_glStencilFuncSeparate_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glStencilMaskSeparate_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glStencilMaskSeparate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(113);
	SM_arc_backend_sdl_jni_SDLGL_glStencilMaskSeparate_int_int(ctx, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glStencilOpSeparate_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glStencilOpSeparate", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(114);
	SM_arc_backend_sdl_jni_SDLGL_glStencilOpSeparate_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glTexParameterfv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glTexParameterfv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(115);
	SM_arc_backend_sdl_jni_SDLGL_glTexParameterfv_int_int_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glTexParameteri_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glTexParameteri", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(116);
	SM_arc_backend_sdl_jni_SDLGL_glTexParameteri_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glTexParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glTexParameteriv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(117);
	SM_arc_backend_sdl_jni_SDLGL_glTexParameteriv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform1f_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform1f", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(118);
	SM_arc_backend_sdl_jni_SDLGL_glUniform1f_int_float(ctx, (frame[1].i), (frame[2].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform1fv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform1fv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(119);
	SM_arc_backend_sdl_jni_SDLGL_glUniform1fv_int_int_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform1fv_int_int_Array1_float_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform1fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(120);
	SM_arc_backend_sdl_jni_SDLGL_glUniform1fv_int_int_Array1_float_int(ctx, (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform1i_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform1i", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(121);
	SM_arc_backend_sdl_jni_SDLGL_glUniform1i_int_int(ctx, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform1iv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform1iv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(122);
	SM_arc_backend_sdl_jni_SDLGL_glUniform1iv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform1iv_int_int_Array1_int_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform1iv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(123);
	SM_arc_backend_sdl_jni_SDLGL_glUniform1iv_int_int_Array1_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform2f_int_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform2f", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(124);
	SM_arc_backend_sdl_jni_SDLGL_glUniform2f_int_float_float(ctx, (frame[1].i), (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform2fv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform2fv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(125);
	SM_arc_backend_sdl_jni_SDLGL_glUniform2fv_int_int_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform2fv_int_int_Array1_float_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform2fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(126);
	SM_arc_backend_sdl_jni_SDLGL_glUniform2fv_int_int_Array1_float_int(ctx, (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform2i_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform2i", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(127);
	SM_arc_backend_sdl_jni_SDLGL_glUniform2i_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform2iv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform2iv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(128);
	SM_arc_backend_sdl_jni_SDLGL_glUniform2iv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform2iv_int_int_Array1_int_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform2iv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(129);
	SM_arc_backend_sdl_jni_SDLGL_glUniform2iv_int_int_Array1_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform3f_int_float_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform3f", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(130);
	SM_arc_backend_sdl_jni_SDLGL_glUniform3f_int_float_float_float(ctx, (frame[1].i), (frame[2].f), (frame[3].f), (frame[4].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform3fv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform3fv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(131);
	SM_arc_backend_sdl_jni_SDLGL_glUniform3fv_int_int_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform3fv_int_int_Array1_float_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform3fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(132);
	SM_arc_backend_sdl_jni_SDLGL_glUniform3fv_int_int_Array1_float_int(ctx, (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform3i_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform3i", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(133);
	SM_arc_backend_sdl_jni_SDLGL_glUniform3i_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform3iv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform3iv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(134);
	SM_arc_backend_sdl_jni_SDLGL_glUniform3iv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform3iv_int_int_Array1_int_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform3iv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(135);
	SM_arc_backend_sdl_jni_SDLGL_glUniform3iv_int_int_Array1_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform4f_int_float_float_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform4f", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(136);
	SM_arc_backend_sdl_jni_SDLGL_glUniform4f_int_float_float_float_float(ctx, (frame[1].i), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform4fv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform4fv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(137);
	SM_arc_backend_sdl_jni_SDLGL_glUniform4fv_int_int_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform4fv_int_int_Array1_float_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform4fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(138);
	SM_arc_backend_sdl_jni_SDLGL_glUniform4fv_int_int_Array1_float_int(ctx, (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform4i_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform4i", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(139);
	SM_arc_backend_sdl_jni_SDLGL_glUniform4i_int_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform4iv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform4iv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(140);
	SM_arc_backend_sdl_jni_SDLGL_glUniform4iv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniform4iv_int_int_Array1_int_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniform4iv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(141);
	SM_arc_backend_sdl_jni_SDLGL_glUniform4iv_int_int_Array1_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniformMatrix2fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniformMatrix2fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(142);
	SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix2fv_int_int_boolean_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniformMatrix2fv_int_int_boolean_Array1_float_int(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniformMatrix2fv", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(143);
	SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix2fv_int_int_boolean_Array1_float_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o), (frame[5].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniformMatrix3fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(144);
	SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniformMatrix3fv_int_int_boolean_Array1_float_int(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniformMatrix3fv", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(145);
	SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix3fv_int_int_boolean_Array1_float_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o), (frame[5].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniformMatrix4fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(146);
	SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUniformMatrix4fv_int_int_boolean_Array1_float_int(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUniformMatrix4fv", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(147);
	SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix4fv_int_int_boolean_Array1_float_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o), (frame[5].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glUseProgram_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glUseProgram", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(148);
	SM_arc_backend_sdl_jni_SDLGL_glUseProgram_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glValidateProgram_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glValidateProgram", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(149);
	SM_arc_backend_sdl_jni_SDLGL_glValidateProgram_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glVertexAttrib1f_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glVertexAttrib1f", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(150);
	SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib1f_int_float(ctx, (frame[1].i), (frame[2].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glVertexAttrib1fv_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glVertexAttrib1fv", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(151);
	SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib1fv_int_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glVertexAttrib2f_int_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glVertexAttrib2f", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(152);
	SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib2f_int_float_float(ctx, (frame[1].i), (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glVertexAttrib2fv_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glVertexAttrib2fv", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(153);
	SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib2fv_int_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glVertexAttrib3f_int_float_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glVertexAttrib3f", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(154);
	SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib3f_int_float_float_float(ctx, (frame[1].i), (frame[2].f), (frame[3].f), (frame[4].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glVertexAttrib3fv_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glVertexAttrib3fv", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(155);
	SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib3fv_int_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glVertexAttrib4f_int_float_float_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glVertexAttrib4f", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(156);
	SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib4f_int_float_float_float_float(ctx, (frame[1].i), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glVertexAttrib4fv_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glVertexAttrib4fv", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(157);
	SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib4fv_int_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glVertexAttribPointer_int_int_int_boolean_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3, jint param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glVertexAttribPointer", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(158);
	SM_arc_backend_sdl_jni_SDLGL_glVertexAttribPointer_int_int_int_boolean_int_java_lang_Object(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL20_glVertexAttribPointer_int_int_int_boolean_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL20:glVertexAttribPointer", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(159);
	SM_arc_backend_sdl_jni_SDLGL_glVertexAttribPointer_int_int_int_boolean_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_backend_sdl_SdlGL20[] {
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
	(void *) M_arc_backend_sdl_SdlGL20_glActiveTexture_int,
	(void *) M_arc_backend_sdl_SdlGL20_glBindTexture_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glBlendFunc_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glClear_int,
	(void *) M_arc_backend_sdl_SdlGL20_glClearColor_float_float_float_float,
	(void *) M_arc_backend_sdl_SdlGL20_glClearDepthf_float,
	(void *) M_arc_backend_sdl_SdlGL20_glClearStencil_int,
	(void *) M_arc_backend_sdl_SdlGL20_glColorMask_boolean_boolean_boolean_boolean,
	(void *) M_arc_backend_sdl_SdlGL20_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer,
	(void *) M_arc_backend_sdl_SdlGL20_glCompressedTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer,
	(void *) M_arc_backend_sdl_SdlGL20_glCopyTexImage2D_int_int_int_int_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glCopyTexSubImage2D_int_int_int_int_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glCullFace_int,
	(void *) M_arc_backend_sdl_SdlGL20_glDeleteTexture_int,
	(void *) M_arc_backend_sdl_SdlGL20_glDepthFunc_int,
	(void *) M_arc_backend_sdl_SdlGL20_glDepthMask_boolean,
	(void *) M_arc_backend_sdl_SdlGL20_glDepthRangef_float_float,
	(void *) M_arc_backend_sdl_SdlGL20_glDisable_int,
	(void *) M_arc_backend_sdl_SdlGL20_glDrawArrays_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glDrawElements_int_int_int_java_nio_Buffer,
	(void *) M_arc_backend_sdl_SdlGL20_glEnable_int,
	(void *) M_arc_backend_sdl_SdlGL20_glFinish,
	(void *) M_arc_backend_sdl_SdlGL20_glFlush,
	(void *) M_arc_backend_sdl_SdlGL20_glFrontFace_int,
	(void *) M_arc_backend_sdl_SdlGL20_glGenTexture_R_int,
	(void *) M_arc_backend_sdl_SdlGL20_glGetError_R_int,
	(void *) M_arc_backend_sdl_SdlGL20_glGetIntegerv_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glGetString_int_R_java_lang_String,
	(void *) M_arc_backend_sdl_SdlGL20_glHint_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glLineWidth_float,
	(void *) M_arc_backend_sdl_SdlGL20_glPixelStorei_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glPolygonOffset_float_float,
	(void *) M_arc_backend_sdl_SdlGL20_glReadPixels_int_int_int_int_int_int_java_nio_Buffer,
	(void *) M_arc_backend_sdl_SdlGL20_glScissor_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glStencilFunc_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glStencilMask_int,
	(void *) M_arc_backend_sdl_SdlGL20_glStencilOp_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer,
	(void *) M_arc_backend_sdl_SdlGL20_glTexParameterf_int_int_float,
	(void *) M_arc_backend_sdl_SdlGL20_glTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer,
	(void *) M_arc_backend_sdl_SdlGL20_glViewport_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glAttachShader_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glBindAttribLocation_int_int_java_lang_String,
	(void *) M_arc_backend_sdl_SdlGL20_glBindBuffer_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glBindFramebuffer_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glBindRenderbuffer_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glBlendColor_float_float_float_float,
	(void *) M_arc_backend_sdl_SdlGL20_glBlendEquation_int,
	(void *) M_arc_backend_sdl_SdlGL20_glBlendEquationSeparate_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glBlendFuncSeparate_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glBufferData_int_int_java_nio_Buffer_int,
	(void *) M_arc_backend_sdl_SdlGL20_glBufferSubData_int_int_int_java_nio_Buffer,
	(void *) M_arc_backend_sdl_SdlGL20_glCheckFramebufferStatus_int_R_int,
	(void *) M_arc_backend_sdl_SdlGL20_glCompileShader_int,
	(void *) M_arc_backend_sdl_SdlGL20_glCreateProgram_R_int,
	(void *) M_arc_backend_sdl_SdlGL20_glCreateShader_int_R_int,
	(void *) M_arc_backend_sdl_SdlGL20_glDeleteBuffer_int,
	(void *) M_arc_backend_sdl_SdlGL20_glDeleteFramebuffer_int,
	(void *) M_arc_backend_sdl_SdlGL20_glDeleteProgram_int,
	(void *) M_arc_backend_sdl_SdlGL20_glDeleteRenderbuffer_int,
	(void *) M_arc_backend_sdl_SdlGL20_glDeleteShader_int,
	(void *) M_arc_backend_sdl_SdlGL20_glDetachShader_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glDisableVertexAttribArray_int,
	(void *) M_arc_backend_sdl_SdlGL20_glDrawElements_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glEnableVertexAttribArray_int,
	(void *) M_arc_backend_sdl_SdlGL20_glFramebufferRenderbuffer_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glFramebufferTexture2D_int_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glGenBuffer_R_int,
	(void *) M_arc_backend_sdl_SdlGL20_glGenerateMipmap_int,
	(void *) M_arc_backend_sdl_SdlGL20_glGenFramebuffer_R_int,
	(void *) M_arc_backend_sdl_SdlGL20_glGenRenderbuffer_R_int,
	(void *) M_arc_backend_sdl_SdlGL20_glGetActiveAttrib_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String,
	(void *) M_arc_backend_sdl_SdlGL20_glGetActiveUniform_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String,
	(void *) M_arc_backend_sdl_SdlGL20_glGetAttribLocation_int_java_lang_String_R_int,
	(void *) M_arc_backend_sdl_SdlGL20_glGetBooleanv_int_java_nio_Buffer,
	(void *) M_arc_backend_sdl_SdlGL20_glGetBufferParameteriv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glGetFloatv_int_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glGetFramebufferAttachmentParameteriv_int_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glGetProgramiv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glGetProgramInfoLog_int_R_java_lang_String,
	(void *) M_arc_backend_sdl_SdlGL20_glGetRenderbufferParameteriv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glGetShaderiv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glGetShaderInfoLog_int_R_java_lang_String,
	(void *) M_arc_backend_sdl_SdlGL20_glGetShaderPrecisionFormat_int_int_java_nio_IntBuffer_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glGetTexParameterfv_int_int_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glGetTexParameteriv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glGetUniformfv_int_int_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glGetUniformiv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glGetUniformLocation_int_java_lang_String_R_int,
	(void *) M_arc_backend_sdl_SdlGL20_glGetVertexAttribfv_int_int_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glGetVertexAttribiv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glIsBuffer_int_R_boolean,
	(void *) M_arc_backend_sdl_SdlGL20_glIsEnabled_int_R_boolean,
	(void *) M_arc_backend_sdl_SdlGL20_glIsFramebuffer_int_R_boolean,
	(void *) M_arc_backend_sdl_SdlGL20_glIsProgram_int_R_boolean,
	(void *) M_arc_backend_sdl_SdlGL20_glIsRenderbuffer_int_R_boolean,
	(void *) M_arc_backend_sdl_SdlGL20_glIsShader_int_R_boolean,
	(void *) M_arc_backend_sdl_SdlGL20_glIsTexture_int_R_boolean,
	(void *) M_arc_backend_sdl_SdlGL20_glLinkProgram_int,
	(void *) M_arc_backend_sdl_SdlGL20_glReleaseShaderCompiler,
	(void *) M_arc_backend_sdl_SdlGL20_glRenderbufferStorage_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glSampleCoverage_float_boolean,
	(void *) M_arc_backend_sdl_SdlGL20_glShaderSource_int_java_lang_String,
	(void *) M_arc_backend_sdl_SdlGL20_glStencilFuncSeparate_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glStencilMaskSeparate_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glStencilOpSeparate_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glTexParameterfv_int_int_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glTexParameteri_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glTexParameteriv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform1f_int_float,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform1fv_int_int_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform1fv_int_int_Array1_float_int,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform1i_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform1iv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform1iv_int_int_Array1_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform2f_int_float_float,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform2fv_int_int_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform2fv_int_int_Array1_float_int,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform2i_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform2iv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform2iv_int_int_Array1_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform3f_int_float_float_float,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform3fv_int_int_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform3fv_int_int_Array1_float_int,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform3i_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform3iv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform3iv_int_int_Array1_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform4f_int_float_float_float_float,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform4fv_int_int_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform4fv_int_int_Array1_float_int,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform4i_int_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform4iv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glUniform4iv_int_int_Array1_int_int,
	(void *) M_arc_backend_sdl_SdlGL20_glUniformMatrix2fv_int_int_boolean_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glUniformMatrix2fv_int_int_boolean_Array1_float_int,
	(void *) M_arc_backend_sdl_SdlGL20_glUniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glUniformMatrix3fv_int_int_boolean_Array1_float_int,
	(void *) M_arc_backend_sdl_SdlGL20_glUniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glUniformMatrix4fv_int_int_boolean_Array1_float_int,
	(void *) M_arc_backend_sdl_SdlGL20_glUseProgram_int,
	(void *) M_arc_backend_sdl_SdlGL20_glValidateProgram_int,
	(void *) M_arc_backend_sdl_SdlGL20_glVertexAttrib1f_int_float,
	(void *) M_arc_backend_sdl_SdlGL20_glVertexAttrib1fv_int_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glVertexAttrib2f_int_float_float,
	(void *) M_arc_backend_sdl_SdlGL20_glVertexAttrib2fv_int_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glVertexAttrib3f_int_float_float_float,
	(void *) M_arc_backend_sdl_SdlGL20_glVertexAttrib3fv_int_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glVertexAttrib4f_int_float_float_float_float,
	(void *) M_arc_backend_sdl_SdlGL20_glVertexAttrib4fv_int_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL20_glVertexAttribPointer_int_int_int_boolean_int_java_nio_Buffer,
	(void *) M_arc_backend_sdl_SdlGL20_glVertexAttribPointer_int_int_int_boolean_int_int,
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
	{ "glActiveTexture", "(I)V" },
	{ "glBindTexture", "(II)V" },
	{ "glBlendFunc", "(II)V" },
	{ "glClear", "(I)V" },
	{ "glClearColor", "(FFFF)V" },
	{ "glClearDepthf", "(F)V" },
	{ "glClearStencil", "(I)V" },
	{ "glColorMask", "(ZZZZ)V" },
	{ "glCompressedTexImage2D", "(IIIIIIILjava/nio/Buffer;)V" },
	{ "glCompressedTexSubImage2D", "(IIIIIIIILjava/nio/Buffer;)V" },
	{ "glCopyTexImage2D", "(IIIIIIII)V" },
	{ "glCopyTexSubImage2D", "(IIIIIIII)V" },
	{ "glCullFace", "(I)V" },
	{ "glDeleteTexture", "(I)V" },
	{ "glDepthFunc", "(I)V" },
	{ "glDepthMask", "(Z)V" },
	{ "glDepthRangef", "(FF)V" },
	{ "glDisable", "(I)V" },
	{ "glDrawArrays", "(III)V" },
	{ "glDrawElements", "(IIILjava/nio/Buffer;)V" },
	{ "glEnable", "(I)V" },
	{ "glFinish", "()V" },
	{ "glFlush", "()V" },
	{ "glFrontFace", "(I)V" },
	{ "glGenTexture", "()I" },
	{ "glGetError", "()I" },
	{ "glGetIntegerv", "(ILjava/nio/IntBuffer;)V" },
	{ "glGetString", "(I)Ljava/lang/String;" },
	{ "glHint", "(II)V" },
	{ "glLineWidth", "(F)V" },
	{ "glPixelStorei", "(II)V" },
	{ "glPolygonOffset", "(FF)V" },
	{ "glReadPixels", "(IIIIIILjava/nio/Buffer;)V" },
	{ "glScissor", "(IIII)V" },
	{ "glStencilFunc", "(III)V" },
	{ "glStencilMask", "(I)V" },
	{ "glStencilOp", "(III)V" },
	{ "glTexImage2D", "(IIIIIIIILjava/nio/Buffer;)V" },
	{ "glTexParameterf", "(IIF)V" },
	{ "glTexSubImage2D", "(IIIIIIIILjava/nio/Buffer;)V" },
	{ "glViewport", "(IIII)V" },
	{ "glAttachShader", "(II)V" },
	{ "glBindAttribLocation", "(IILjava/lang/String;)V" },
	{ "glBindBuffer", "(II)V" },
	{ "glBindFramebuffer", "(II)V" },
	{ "glBindRenderbuffer", "(II)V" },
	{ "glBlendColor", "(FFFF)V" },
	{ "glBlendEquation", "(I)V" },
	{ "glBlendEquationSeparate", "(II)V" },
	{ "glBlendFuncSeparate", "(IIII)V" },
	{ "glBufferData", "(IILjava/nio/Buffer;I)V" },
	{ "glBufferSubData", "(IIILjava/nio/Buffer;)V" },
	{ "glCheckFramebufferStatus", "(I)I" },
	{ "glCompileShader", "(I)V" },
	{ "glCreateProgram", "()I" },
	{ "glCreateShader", "(I)I" },
	{ "glDeleteBuffer", "(I)V" },
	{ "glDeleteFramebuffer", "(I)V" },
	{ "glDeleteProgram", "(I)V" },
	{ "glDeleteRenderbuffer", "(I)V" },
	{ "glDeleteShader", "(I)V" },
	{ "glDetachShader", "(II)V" },
	{ "glDisableVertexAttribArray", "(I)V" },
	{ "glDrawElements", "(IIII)V" },
	{ "glEnableVertexAttribArray", "(I)V" },
	{ "glFramebufferRenderbuffer", "(IIII)V" },
	{ "glFramebufferTexture2D", "(IIIII)V" },
	{ "glGenBuffer", "()I" },
	{ "glGenerateMipmap", "(I)V" },
	{ "glGenFramebuffer", "()I" },
	{ "glGenRenderbuffer", "()I" },
	{ "glGetActiveAttrib", "(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)Ljava/lang/String;" },
	{ "glGetActiveUniform", "(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)Ljava/lang/String;" },
	{ "glGetAttribLocation", "(ILjava/lang/String;)I" },
	{ "glGetBooleanv", "(ILjava/nio/Buffer;)V" },
	{ "glGetBufferParameteriv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetFloatv", "(ILjava/nio/FloatBuffer;)V" },
	{ "glGetFramebufferAttachmentParameteriv", "(IIILjava/nio/IntBuffer;)V" },
	{ "glGetProgramiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetProgramInfoLog", "(I)Ljava/lang/String;" },
	{ "glGetRenderbufferParameteriv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetShaderiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetShaderInfoLog", "(I)Ljava/lang/String;" },
	{ "glGetShaderPrecisionFormat", "(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V" },
	{ "glGetTexParameterfv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glGetTexParameteriv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetUniformfv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glGetUniformiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetUniformLocation", "(ILjava/lang/String;)I" },
	{ "glGetVertexAttribfv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glGetVertexAttribiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glIsBuffer", "(I)Z" },
	{ "glIsEnabled", "(I)Z" },
	{ "glIsFramebuffer", "(I)Z" },
	{ "glIsProgram", "(I)Z" },
	{ "glIsRenderbuffer", "(I)Z" },
	{ "glIsShader", "(I)Z" },
	{ "glIsTexture", "(I)Z" },
	{ "glLinkProgram", "(I)V" },
	{ "glReleaseShaderCompiler", "()V" },
	{ "glRenderbufferStorage", "(IIII)V" },
	{ "glSampleCoverage", "(FZ)V" },
	{ "glShaderSource", "(ILjava/lang/String;)V" },
	{ "glStencilFuncSeparate", "(IIII)V" },
	{ "glStencilMaskSeparate", "(II)V" },
	{ "glStencilOpSeparate", "(IIII)V" },
	{ "glTexParameterfv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glTexParameteri", "(III)V" },
	{ "glTexParameteriv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUniform1f", "(IF)V" },
	{ "glUniform1fv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glUniform1fv", "(II[FI)V" },
	{ "glUniform1i", "(II)V" },
	{ "glUniform1iv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUniform1iv", "(II[II)V" },
	{ "glUniform2f", "(IFF)V" },
	{ "glUniform2fv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glUniform2fv", "(II[FI)V" },
	{ "glUniform2i", "(III)V" },
	{ "glUniform2iv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUniform2iv", "(II[II)V" },
	{ "glUniform3f", "(IFFF)V" },
	{ "glUniform3fv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glUniform3fv", "(II[FI)V" },
	{ "glUniform3i", "(IIII)V" },
	{ "glUniform3iv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUniform3iv", "(II[II)V" },
	{ "glUniform4f", "(IFFFF)V" },
	{ "glUniform4fv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glUniform4fv", "(II[FI)V" },
	{ "glUniform4i", "(IIIII)V" },
	{ "glUniform4iv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUniform4iv", "(II[II)V" },
	{ "glUniformMatrix2fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix2fv", "(IIZ[FI)V" },
	{ "glUniformMatrix3fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix3fv", "(IIZ[FI)V" },
	{ "glUniformMatrix4fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix4fv", "(IIZ[FI)V" },
	{ "glUseProgram", "(I)V" },
	{ "glValidateProgram", "(I)V" },
	{ "glVertexAttrib1f", "(IF)V" },
	{ "glVertexAttrib1fv", "(ILjava/nio/FloatBuffer;)V" },
	{ "glVertexAttrib2f", "(IFF)V" },
	{ "glVertexAttrib2fv", "(ILjava/nio/FloatBuffer;)V" },
	{ "glVertexAttrib3f", "(IFFF)V" },
	{ "glVertexAttrib3fv", "(ILjava/nio/FloatBuffer;)V" },
	{ "glVertexAttrib4f", "(IFFFF)V" },
	{ "glVertexAttrib4fv", "(ILjava/nio/FloatBuffer;)V" },
	{ "glVertexAttribPointer", "(IIIZILjava/nio/Buffer;)V" },
	{ "glVertexAttribPointer", "(IIIZII)V" },
};

static jclass interfaces[] { &class_arc_graphics_GL20, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_backend_sdl_SdlGL20, 0, "()V", 1 },
	{ "glActiveTexture", (intptr_t) M_arc_backend_sdl_SdlGL20_glActiveTexture_int, VTABLE_arc_backend_sdl_SdlGL20_glActiveTexture_int, "(I)V", 1 },
	{ "glBindTexture", (intptr_t) M_arc_backend_sdl_SdlGL20_glBindTexture_int_int, VTABLE_arc_backend_sdl_SdlGL20_glBindTexture_int_int, "(II)V", 1 },
	{ "glBlendFunc", (intptr_t) M_arc_backend_sdl_SdlGL20_glBlendFunc_int_int, VTABLE_arc_backend_sdl_SdlGL20_glBlendFunc_int_int, "(II)V", 1 },
	{ "glClear", (intptr_t) M_arc_backend_sdl_SdlGL20_glClear_int, VTABLE_arc_backend_sdl_SdlGL20_glClear_int, "(I)V", 1 },
	{ "glClearColor", (intptr_t) M_arc_backend_sdl_SdlGL20_glClearColor_float_float_float_float, VTABLE_arc_backend_sdl_SdlGL20_glClearColor_float_float_float_float, "(FFFF)V", 1 },
	{ "glClearDepthf", (intptr_t) M_arc_backend_sdl_SdlGL20_glClearDepthf_float, VTABLE_arc_backend_sdl_SdlGL20_glClearDepthf_float, "(F)V", 1 },
	{ "glClearStencil", (intptr_t) M_arc_backend_sdl_SdlGL20_glClearStencil_int, VTABLE_arc_backend_sdl_SdlGL20_glClearStencil_int, "(I)V", 1 },
	{ "glColorMask", (intptr_t) M_arc_backend_sdl_SdlGL20_glColorMask_boolean_boolean_boolean_boolean, VTABLE_arc_backend_sdl_SdlGL20_glColorMask_boolean_boolean_boolean_boolean, "(ZZZZ)V", 1 },
	{ "glCompressedTexImage2D", (intptr_t) M_arc_backend_sdl_SdlGL20_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer, VTABLE_arc_backend_sdl_SdlGL20_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer, "(IIIIIIILjava/nio/Buffer;)V", 1 },
	{ "glCompressedTexSubImage2D", (intptr_t) M_arc_backend_sdl_SdlGL20_glCompressedTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, VTABLE_arc_backend_sdl_SdlGL20_glCompressedTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, "(IIIIIIIILjava/nio/Buffer;)V", 1 },
	{ "glCopyTexImage2D", (intptr_t) M_arc_backend_sdl_SdlGL20_glCopyTexImage2D_int_int_int_int_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL20_glCopyTexImage2D_int_int_int_int_int_int_int_int, "(IIIIIIII)V", 1 },
	{ "glCopyTexSubImage2D", (intptr_t) M_arc_backend_sdl_SdlGL20_glCopyTexSubImage2D_int_int_int_int_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL20_glCopyTexSubImage2D_int_int_int_int_int_int_int_int, "(IIIIIIII)V", 1 },
	{ "glCullFace", (intptr_t) M_arc_backend_sdl_SdlGL20_glCullFace_int, VTABLE_arc_backend_sdl_SdlGL20_glCullFace_int, "(I)V", 1 },
	{ "glDeleteTexture", (intptr_t) M_arc_backend_sdl_SdlGL20_glDeleteTexture_int, VTABLE_arc_backend_sdl_SdlGL20_glDeleteTexture_int, "(I)V", 1 },
	{ "glDepthFunc", (intptr_t) M_arc_backend_sdl_SdlGL20_glDepthFunc_int, VTABLE_arc_backend_sdl_SdlGL20_glDepthFunc_int, "(I)V", 1 },
	{ "glDepthMask", (intptr_t) M_arc_backend_sdl_SdlGL20_glDepthMask_boolean, VTABLE_arc_backend_sdl_SdlGL20_glDepthMask_boolean, "(Z)V", 1 },
	{ "glDepthRangef", (intptr_t) M_arc_backend_sdl_SdlGL20_glDepthRangef_float_float, VTABLE_arc_backend_sdl_SdlGL20_glDepthRangef_float_float, "(FF)V", 1 },
	{ "glDisable", (intptr_t) M_arc_backend_sdl_SdlGL20_glDisable_int, VTABLE_arc_backend_sdl_SdlGL20_glDisable_int, "(I)V", 1 },
	{ "glDrawArrays", (intptr_t) M_arc_backend_sdl_SdlGL20_glDrawArrays_int_int_int, VTABLE_arc_backend_sdl_SdlGL20_glDrawArrays_int_int_int, "(III)V", 1 },
	{ "glDrawElements", (intptr_t) M_arc_backend_sdl_SdlGL20_glDrawElements_int_int_int_java_nio_Buffer, VTABLE_arc_backend_sdl_SdlGL20_glDrawElements_int_int_int_java_nio_Buffer, "(IIILjava/nio/Buffer;)V", 1 },
	{ "glEnable", (intptr_t) M_arc_backend_sdl_SdlGL20_glEnable_int, VTABLE_arc_backend_sdl_SdlGL20_glEnable_int, "(I)V", 1 },
	{ "glFinish", (intptr_t) M_arc_backend_sdl_SdlGL20_glFinish, VTABLE_arc_backend_sdl_SdlGL20_glFinish, "()V", 1 },
	{ "glFlush", (intptr_t) M_arc_backend_sdl_SdlGL20_glFlush, VTABLE_arc_backend_sdl_SdlGL20_glFlush, "()V", 1 },
	{ "glFrontFace", (intptr_t) M_arc_backend_sdl_SdlGL20_glFrontFace_int, VTABLE_arc_backend_sdl_SdlGL20_glFrontFace_int, "(I)V", 1 },
	{ "glGenTexture", (intptr_t) M_arc_backend_sdl_SdlGL20_glGenTexture_R_int, VTABLE_arc_backend_sdl_SdlGL20_glGenTexture_R_int, "()I", 1 },
	{ "glGetError", (intptr_t) M_arc_backend_sdl_SdlGL20_glGetError_R_int, VTABLE_arc_backend_sdl_SdlGL20_glGetError_R_int, "()I", 1 },
	{ "glGetIntegerv", (intptr_t) M_arc_backend_sdl_SdlGL20_glGetIntegerv_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL20_glGetIntegerv_int_java_nio_IntBuffer, "(ILjava/nio/IntBuffer;)V", 1 },
	{ "glGetString", (intptr_t) M_arc_backend_sdl_SdlGL20_glGetString_int_R_java_lang_String, VTABLE_arc_backend_sdl_SdlGL20_glGetString_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "glHint", (intptr_t) M_arc_backend_sdl_SdlGL20_glHint_int_int, VTABLE_arc_backend_sdl_SdlGL20_glHint_int_int, "(II)V", 1 },
	{ "glLineWidth", (intptr_t) M_arc_backend_sdl_SdlGL20_glLineWidth_float, VTABLE_arc_backend_sdl_SdlGL20_glLineWidth_float, "(F)V", 1 },
	{ "glPixelStorei", (intptr_t) M_arc_backend_sdl_SdlGL20_glPixelStorei_int_int, VTABLE_arc_backend_sdl_SdlGL20_glPixelStorei_int_int, "(II)V", 1 },
	{ "glPolygonOffset", (intptr_t) M_arc_backend_sdl_SdlGL20_glPolygonOffset_float_float, VTABLE_arc_backend_sdl_SdlGL20_glPolygonOffset_float_float, "(FF)V", 1 },
	{ "glReadPixels", (intptr_t) M_arc_backend_sdl_SdlGL20_glReadPixels_int_int_int_int_int_int_java_nio_Buffer, VTABLE_arc_backend_sdl_SdlGL20_glReadPixels_int_int_int_int_int_int_java_nio_Buffer, "(IIIIIILjava/nio/Buffer;)V", 1 },
	{ "glScissor", (intptr_t) M_arc_backend_sdl_SdlGL20_glScissor_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL20_glScissor_int_int_int_int, "(IIII)V", 1 },
	{ "glStencilFunc", (intptr_t) M_arc_backend_sdl_SdlGL20_glStencilFunc_int_int_int, VTABLE_arc_backend_sdl_SdlGL20_glStencilFunc_int_int_int, "(III)V", 1 },
	{ "glStencilMask", (intptr_t) M_arc_backend_sdl_SdlGL20_glStencilMask_int, VTABLE_arc_backend_sdl_SdlGL20_glStencilMask_int, "(I)V", 1 },
	{ "glStencilOp", (intptr_t) M_arc_backend_sdl_SdlGL20_glStencilOp_int_int_int, VTABLE_arc_backend_sdl_SdlGL20_glStencilOp_int_int_int, "(III)V", 1 },
	{ "glTexImage2D", (intptr_t) M_arc_backend_sdl_SdlGL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, VTABLE_arc_backend_sdl_SdlGL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, "(IIIIIIIILjava/nio/Buffer;)V", 1 },
	{ "glTexParameterf", (intptr_t) M_arc_backend_sdl_SdlGL20_glTexParameterf_int_int_float, VTABLE_arc_backend_sdl_SdlGL20_glTexParameterf_int_int_float, "(IIF)V", 1 },
	{ "glTexSubImage2D", (intptr_t) M_arc_backend_sdl_SdlGL20_glTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, VTABLE_arc_backend_sdl_SdlGL20_glTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, "(IIIIIIIILjava/nio/Buffer;)V", 1 },
	{ "glViewport", (intptr_t) M_arc_backend_sdl_SdlGL20_glViewport_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL20_glViewport_int_int_int_int, "(IIII)V", 1 },
	{ "glAttachShader", (intptr_t) M_arc_backend_sdl_SdlGL20_glAttachShader_int_int, VTABLE_arc_backend_sdl_SdlGL20_glAttachShader_int_int, "(II)V", 1 },
	{ "glBindAttribLocation", (intptr_t) M_arc_backend_sdl_SdlGL20_glBindAttribLocation_int_int_java_lang_String, VTABLE_arc_backend_sdl_SdlGL20_glBindAttribLocation_int_int_java_lang_String, "(IILjava/lang/String;)V", 1 },
	{ "glBindBuffer", (intptr_t) M_arc_backend_sdl_SdlGL20_glBindBuffer_int_int, VTABLE_arc_backend_sdl_SdlGL20_glBindBuffer_int_int, "(II)V", 1 },
	{ "glBindFramebuffer", (intptr_t) M_arc_backend_sdl_SdlGL20_glBindFramebuffer_int_int, VTABLE_arc_backend_sdl_SdlGL20_glBindFramebuffer_int_int, "(II)V", 1 },
	{ "glBindRenderbuffer", (intptr_t) M_arc_backend_sdl_SdlGL20_glBindRenderbuffer_int_int, VTABLE_arc_backend_sdl_SdlGL20_glBindRenderbuffer_int_int, "(II)V", 1 },
	{ "glBlendColor", (intptr_t) M_arc_backend_sdl_SdlGL20_glBlendColor_float_float_float_float, VTABLE_arc_backend_sdl_SdlGL20_glBlendColor_float_float_float_float, "(FFFF)V", 1 },
	{ "glBlendEquation", (intptr_t) M_arc_backend_sdl_SdlGL20_glBlendEquation_int, VTABLE_arc_backend_sdl_SdlGL20_glBlendEquation_int, "(I)V", 1 },
	{ "glBlendEquationSeparate", (intptr_t) M_arc_backend_sdl_SdlGL20_glBlendEquationSeparate_int_int, VTABLE_arc_backend_sdl_SdlGL20_glBlendEquationSeparate_int_int, "(II)V", 1 },
	{ "glBlendFuncSeparate", (intptr_t) M_arc_backend_sdl_SdlGL20_glBlendFuncSeparate_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL20_glBlendFuncSeparate_int_int_int_int, "(IIII)V", 1 },
	{ "glBufferData", (intptr_t) M_arc_backend_sdl_SdlGL20_glBufferData_int_int_java_nio_Buffer_int, VTABLE_arc_backend_sdl_SdlGL20_glBufferData_int_int_java_nio_Buffer_int, "(IILjava/nio/Buffer;I)V", 1 },
	{ "glBufferSubData", (intptr_t) M_arc_backend_sdl_SdlGL20_glBufferSubData_int_int_int_java_nio_Buffer, VTABLE_arc_backend_sdl_SdlGL20_glBufferSubData_int_int_int_java_nio_Buffer, "(IIILjava/nio/Buffer;)V", 1 },
	{ "glCheckFramebufferStatus", (intptr_t) M_arc_backend_sdl_SdlGL20_glCheckFramebufferStatus_int_R_int, VTABLE_arc_backend_sdl_SdlGL20_glCheckFramebufferStatus_int_R_int, "(I)I", 1 },
	{ "glCompileShader", (intptr_t) M_arc_backend_sdl_SdlGL20_glCompileShader_int, VTABLE_arc_backend_sdl_SdlGL20_glCompileShader_int, "(I)V", 1 },
	{ "glCreateProgram", (intptr_t) M_arc_backend_sdl_SdlGL20_glCreateProgram_R_int, VTABLE_arc_backend_sdl_SdlGL20_glCreateProgram_R_int, "()I", 1 },
	{ "glCreateShader", (intptr_t) M_arc_backend_sdl_SdlGL20_glCreateShader_int_R_int, VTABLE_arc_backend_sdl_SdlGL20_glCreateShader_int_R_int, "(I)I", 1 },
	{ "glDeleteBuffer", (intptr_t) M_arc_backend_sdl_SdlGL20_glDeleteBuffer_int, VTABLE_arc_backend_sdl_SdlGL20_glDeleteBuffer_int, "(I)V", 1 },
	{ "glDeleteFramebuffer", (intptr_t) M_arc_backend_sdl_SdlGL20_glDeleteFramebuffer_int, VTABLE_arc_backend_sdl_SdlGL20_glDeleteFramebuffer_int, "(I)V", 1 },
	{ "glDeleteProgram", (intptr_t) M_arc_backend_sdl_SdlGL20_glDeleteProgram_int, VTABLE_arc_backend_sdl_SdlGL20_glDeleteProgram_int, "(I)V", 1 },
	{ "glDeleteRenderbuffer", (intptr_t) M_arc_backend_sdl_SdlGL20_glDeleteRenderbuffer_int, VTABLE_arc_backend_sdl_SdlGL20_glDeleteRenderbuffer_int, "(I)V", 1 },
	{ "glDeleteShader", (intptr_t) M_arc_backend_sdl_SdlGL20_glDeleteShader_int, VTABLE_arc_backend_sdl_SdlGL20_glDeleteShader_int, "(I)V", 1 },
	{ "glDetachShader", (intptr_t) M_arc_backend_sdl_SdlGL20_glDetachShader_int_int, VTABLE_arc_backend_sdl_SdlGL20_glDetachShader_int_int, "(II)V", 1 },
	{ "glDisableVertexAttribArray", (intptr_t) M_arc_backend_sdl_SdlGL20_glDisableVertexAttribArray_int, VTABLE_arc_backend_sdl_SdlGL20_glDisableVertexAttribArray_int, "(I)V", 1 },
	{ "glDrawElements", (intptr_t) M_arc_backend_sdl_SdlGL20_glDrawElements_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL20_glDrawElements_int_int_int_int, "(IIII)V", 1 },
	{ "glEnableVertexAttribArray", (intptr_t) M_arc_backend_sdl_SdlGL20_glEnableVertexAttribArray_int, VTABLE_arc_backend_sdl_SdlGL20_glEnableVertexAttribArray_int, "(I)V", 1 },
	{ "glFramebufferRenderbuffer", (intptr_t) M_arc_backend_sdl_SdlGL20_glFramebufferRenderbuffer_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL20_glFramebufferRenderbuffer_int_int_int_int, "(IIII)V", 1 },
	{ "glFramebufferTexture2D", (intptr_t) M_arc_backend_sdl_SdlGL20_glFramebufferTexture2D_int_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL20_glFramebufferTexture2D_int_int_int_int_int, "(IIIII)V", 1 },
	{ "glGenBuffer", (intptr_t) M_arc_backend_sdl_SdlGL20_glGenBuffer_R_int, VTABLE_arc_backend_sdl_SdlGL20_glGenBuffer_R_int, "()I", 1 },
	{ "glGenerateMipmap", (intptr_t) M_arc_backend_sdl_SdlGL20_glGenerateMipmap_int, VTABLE_arc_backend_sdl_SdlGL20_glGenerateMipmap_int, "(I)V", 1 },
	{ "glGenFramebuffer", (intptr_t) M_arc_backend_sdl_SdlGL20_glGenFramebuffer_R_int, VTABLE_arc_backend_sdl_SdlGL20_glGenFramebuffer_R_int, "()I", 1 },
	{ "glGenRenderbuffer", (intptr_t) M_arc_backend_sdl_SdlGL20_glGenRenderbuffer_R_int, VTABLE_arc_backend_sdl_SdlGL20_glGenRenderbuffer_R_int, "()I", 1 },
	{ "glGetActiveAttrib", (intptr_t) M_arc_backend_sdl_SdlGL20_glGetActiveAttrib_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String, VTABLE_arc_backend_sdl_SdlGL20_glGetActiveAttrib_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String, "(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)Ljava/lang/String;", 1 },
	{ "glGetActiveUniform", (intptr_t) M_arc_backend_sdl_SdlGL20_glGetActiveUniform_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String, VTABLE_arc_backend_sdl_SdlGL20_glGetActiveUniform_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String, "(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)Ljava/lang/String;", 1 },
	{ "glGetAttribLocation", (intptr_t) M_arc_backend_sdl_SdlGL20_glGetAttribLocation_int_java_lang_String_R_int, VTABLE_arc_backend_sdl_SdlGL20_glGetAttribLocation_int_java_lang_String_R_int, "(ILjava/lang/String;)I", 1 },
	{ "glGetBooleanv", (intptr_t) M_arc_backend_sdl_SdlGL20_glGetBooleanv_int_java_nio_Buffer, VTABLE_arc_backend_sdl_SdlGL20_glGetBooleanv_int_java_nio_Buffer, "(ILjava/nio/Buffer;)V", 1 },
	{ "glGetBufferParameteriv", (intptr_t) M_arc_backend_sdl_SdlGL20_glGetBufferParameteriv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL20_glGetBufferParameteriv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glGetFloatv", (intptr_t) M_arc_backend_sdl_SdlGL20_glGetFloatv_int_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL20_glGetFloatv_int_java_nio_FloatBuffer, "(ILjava/nio/FloatBuffer;)V", 1 },
	{ "glGetFramebufferAttachmentParameteriv", (intptr_t) M_arc_backend_sdl_SdlGL20_glGetFramebufferAttachmentParameteriv_int_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL20_glGetFramebufferAttachmentParameteriv_int_int_int_java_nio_IntBuffer, "(IIILjava/nio/IntBuffer;)V", 1 },
	{ "glGetProgramiv", (intptr_t) M_arc_backend_sdl_SdlGL20_glGetProgramiv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL20_glGetProgramiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glGetProgramInfoLog", (intptr_t) M_arc_backend_sdl_SdlGL20_glGetProgramInfoLog_int_R_java_lang_String, VTABLE_arc_backend_sdl_SdlGL20_glGetProgramInfoLog_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "glGetRenderbufferParameteriv", (intptr_t) M_arc_backend_sdl_SdlGL20_glGetRenderbufferParameteriv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL20_glGetRenderbufferParameteriv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glGetShaderiv", (intptr_t) M_arc_backend_sdl_SdlGL20_glGetShaderiv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL20_glGetShaderiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glGetShaderInfoLog", (intptr_t) M_arc_backend_sdl_SdlGL20_glGetShaderInfoLog_int_R_java_lang_String, VTABLE_arc_backend_sdl_SdlGL20_glGetShaderInfoLog_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "glGetShaderPrecisionFormat", (intptr_t) M_arc_backend_sdl_SdlGL20_glGetShaderPrecisionFormat_int_int_java_nio_IntBuffer_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL20_glGetShaderPrecisionFormat_int_int_java_nio_IntBuffer_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V", 1 },
	{ "glGetTexParameterfv", (intptr_t) M_arc_backend_sdl_SdlGL20_glGetTexParameterfv_int_int_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL20_glGetTexParameterfv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1 },
	{ "glGetTexParameteriv", (intptr_t) M_arc_backend_sdl_SdlGL20_glGetTexParameteriv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL20_glGetTexParameteriv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glGetUniformfv", (intptr_t) M_arc_backend_sdl_SdlGL20_glGetUniformfv_int_int_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL20_glGetUniformfv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1 },
	{ "glGetUniformiv", (intptr_t) M_arc_backend_sdl_SdlGL20_glGetUniformiv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL20_glGetUniformiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glGetUniformLocation", (intptr_t) M_arc_backend_sdl_SdlGL20_glGetUniformLocation_int_java_lang_String_R_int, VTABLE_arc_backend_sdl_SdlGL20_glGetUniformLocation_int_java_lang_String_R_int, "(ILjava/lang/String;)I", 1 },
	{ "glGetVertexAttribfv", (intptr_t) M_arc_backend_sdl_SdlGL20_glGetVertexAttribfv_int_int_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL20_glGetVertexAttribfv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1 },
	{ "glGetVertexAttribiv", (intptr_t) M_arc_backend_sdl_SdlGL20_glGetVertexAttribiv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL20_glGetVertexAttribiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glIsBuffer", (intptr_t) M_arc_backend_sdl_SdlGL20_glIsBuffer_int_R_boolean, VTABLE_arc_backend_sdl_SdlGL20_glIsBuffer_int_R_boolean, "(I)Z", 1 },
	{ "glIsEnabled", (intptr_t) M_arc_backend_sdl_SdlGL20_glIsEnabled_int_R_boolean, VTABLE_arc_backend_sdl_SdlGL20_glIsEnabled_int_R_boolean, "(I)Z", 1 },
	{ "glIsFramebuffer", (intptr_t) M_arc_backend_sdl_SdlGL20_glIsFramebuffer_int_R_boolean, VTABLE_arc_backend_sdl_SdlGL20_glIsFramebuffer_int_R_boolean, "(I)Z", 1 },
	{ "glIsProgram", (intptr_t) M_arc_backend_sdl_SdlGL20_glIsProgram_int_R_boolean, VTABLE_arc_backend_sdl_SdlGL20_glIsProgram_int_R_boolean, "(I)Z", 1 },
	{ "glIsRenderbuffer", (intptr_t) M_arc_backend_sdl_SdlGL20_glIsRenderbuffer_int_R_boolean, VTABLE_arc_backend_sdl_SdlGL20_glIsRenderbuffer_int_R_boolean, "(I)Z", 1 },
	{ "glIsShader", (intptr_t) M_arc_backend_sdl_SdlGL20_glIsShader_int_R_boolean, VTABLE_arc_backend_sdl_SdlGL20_glIsShader_int_R_boolean, "(I)Z", 1 },
	{ "glIsTexture", (intptr_t) M_arc_backend_sdl_SdlGL20_glIsTexture_int_R_boolean, VTABLE_arc_backend_sdl_SdlGL20_glIsTexture_int_R_boolean, "(I)Z", 1 },
	{ "glLinkProgram", (intptr_t) M_arc_backend_sdl_SdlGL20_glLinkProgram_int, VTABLE_arc_backend_sdl_SdlGL20_glLinkProgram_int, "(I)V", 1 },
	{ "glReleaseShaderCompiler", (intptr_t) M_arc_backend_sdl_SdlGL20_glReleaseShaderCompiler, VTABLE_arc_backend_sdl_SdlGL20_glReleaseShaderCompiler, "()V", 1 },
	{ "glRenderbufferStorage", (intptr_t) M_arc_backend_sdl_SdlGL20_glRenderbufferStorage_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL20_glRenderbufferStorage_int_int_int_int, "(IIII)V", 1 },
	{ "glSampleCoverage", (intptr_t) M_arc_backend_sdl_SdlGL20_glSampleCoverage_float_boolean, VTABLE_arc_backend_sdl_SdlGL20_glSampleCoverage_float_boolean, "(FZ)V", 1 },
	{ "glShaderSource", (intptr_t) M_arc_backend_sdl_SdlGL20_glShaderSource_int_java_lang_String, VTABLE_arc_backend_sdl_SdlGL20_glShaderSource_int_java_lang_String, "(ILjava/lang/String;)V", 1 },
	{ "glStencilFuncSeparate", (intptr_t) M_arc_backend_sdl_SdlGL20_glStencilFuncSeparate_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL20_glStencilFuncSeparate_int_int_int_int, "(IIII)V", 1 },
	{ "glStencilMaskSeparate", (intptr_t) M_arc_backend_sdl_SdlGL20_glStencilMaskSeparate_int_int, VTABLE_arc_backend_sdl_SdlGL20_glStencilMaskSeparate_int_int, "(II)V", 1 },
	{ "glStencilOpSeparate", (intptr_t) M_arc_backend_sdl_SdlGL20_glStencilOpSeparate_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL20_glStencilOpSeparate_int_int_int_int, "(IIII)V", 1 },
	{ "glTexParameterfv", (intptr_t) M_arc_backend_sdl_SdlGL20_glTexParameterfv_int_int_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL20_glTexParameterfv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1 },
	{ "glTexParameteri", (intptr_t) M_arc_backend_sdl_SdlGL20_glTexParameteri_int_int_int, VTABLE_arc_backend_sdl_SdlGL20_glTexParameteri_int_int_int, "(III)V", 1 },
	{ "glTexParameteriv", (intptr_t) M_arc_backend_sdl_SdlGL20_glTexParameteriv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL20_glTexParameteriv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glUniform1f", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform1f_int_float, VTABLE_arc_backend_sdl_SdlGL20_glUniform1f_int_float, "(IF)V", 1 },
	{ "glUniform1fv", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform1fv_int_int_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL20_glUniform1fv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1 },
	{ "glUniform1fv", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform1fv_int_int_Array1_float_int, VTABLE_arc_backend_sdl_SdlGL20_glUniform1fv_int_int_Array1_float_int, "(II[FI)V", 1 },
	{ "glUniform1i", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform1i_int_int, VTABLE_arc_backend_sdl_SdlGL20_glUniform1i_int_int, "(II)V", 1 },
	{ "glUniform1iv", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform1iv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL20_glUniform1iv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glUniform1iv", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform1iv_int_int_Array1_int_int, VTABLE_arc_backend_sdl_SdlGL20_glUniform1iv_int_int_Array1_int_int, "(II[II)V", 1 },
	{ "glUniform2f", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform2f_int_float_float, VTABLE_arc_backend_sdl_SdlGL20_glUniform2f_int_float_float, "(IFF)V", 1 },
	{ "glUniform2fv", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform2fv_int_int_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL20_glUniform2fv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1 },
	{ "glUniform2fv", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform2fv_int_int_Array1_float_int, VTABLE_arc_backend_sdl_SdlGL20_glUniform2fv_int_int_Array1_float_int, "(II[FI)V", 1 },
	{ "glUniform2i", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform2i_int_int_int, VTABLE_arc_backend_sdl_SdlGL20_glUniform2i_int_int_int, "(III)V", 1 },
	{ "glUniform2iv", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform2iv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL20_glUniform2iv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glUniform2iv", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform2iv_int_int_Array1_int_int, VTABLE_arc_backend_sdl_SdlGL20_glUniform2iv_int_int_Array1_int_int, "(II[II)V", 1 },
	{ "glUniform3f", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform3f_int_float_float_float, VTABLE_arc_backend_sdl_SdlGL20_glUniform3f_int_float_float_float, "(IFFF)V", 1 },
	{ "glUniform3fv", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform3fv_int_int_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL20_glUniform3fv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1 },
	{ "glUniform3fv", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform3fv_int_int_Array1_float_int, VTABLE_arc_backend_sdl_SdlGL20_glUniform3fv_int_int_Array1_float_int, "(II[FI)V", 1 },
	{ "glUniform3i", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform3i_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL20_glUniform3i_int_int_int_int, "(IIII)V", 1 },
	{ "glUniform3iv", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform3iv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL20_glUniform3iv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glUniform3iv", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform3iv_int_int_Array1_int_int, VTABLE_arc_backend_sdl_SdlGL20_glUniform3iv_int_int_Array1_int_int, "(II[II)V", 1 },
	{ "glUniform4f", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform4f_int_float_float_float_float, VTABLE_arc_backend_sdl_SdlGL20_glUniform4f_int_float_float_float_float, "(IFFFF)V", 1 },
	{ "glUniform4fv", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform4fv_int_int_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL20_glUniform4fv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1 },
	{ "glUniform4fv", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform4fv_int_int_Array1_float_int, VTABLE_arc_backend_sdl_SdlGL20_glUniform4fv_int_int_Array1_float_int, "(II[FI)V", 1 },
	{ "glUniform4i", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform4i_int_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL20_glUniform4i_int_int_int_int_int, "(IIIII)V", 1 },
	{ "glUniform4iv", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform4iv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL20_glUniform4iv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glUniform4iv", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniform4iv_int_int_Array1_int_int, VTABLE_arc_backend_sdl_SdlGL20_glUniform4iv_int_int_Array1_int_int, "(II[II)V", 1 },
	{ "glUniformMatrix2fv", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniformMatrix2fv_int_int_boolean_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL20_glUniformMatrix2fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1 },
	{ "glUniformMatrix2fv", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniformMatrix2fv_int_int_boolean_Array1_float_int, VTABLE_arc_backend_sdl_SdlGL20_glUniformMatrix2fv_int_int_boolean_Array1_float_int, "(IIZ[FI)V", 1 },
	{ "glUniformMatrix3fv", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL20_glUniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1 },
	{ "glUniformMatrix3fv", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniformMatrix3fv_int_int_boolean_Array1_float_int, VTABLE_arc_backend_sdl_SdlGL20_glUniformMatrix3fv_int_int_boolean_Array1_float_int, "(IIZ[FI)V", 1 },
	{ "glUniformMatrix4fv", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL20_glUniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1 },
	{ "glUniformMatrix4fv", (intptr_t) M_arc_backend_sdl_SdlGL20_glUniformMatrix4fv_int_int_boolean_Array1_float_int, VTABLE_arc_backend_sdl_SdlGL20_glUniformMatrix4fv_int_int_boolean_Array1_float_int, "(IIZ[FI)V", 1 },
	{ "glUseProgram", (intptr_t) M_arc_backend_sdl_SdlGL20_glUseProgram_int, VTABLE_arc_backend_sdl_SdlGL20_glUseProgram_int, "(I)V", 1 },
	{ "glValidateProgram", (intptr_t) M_arc_backend_sdl_SdlGL20_glValidateProgram_int, VTABLE_arc_backend_sdl_SdlGL20_glValidateProgram_int, "(I)V", 1 },
	{ "glVertexAttrib1f", (intptr_t) M_arc_backend_sdl_SdlGL20_glVertexAttrib1f_int_float, VTABLE_arc_backend_sdl_SdlGL20_glVertexAttrib1f_int_float, "(IF)V", 1 },
	{ "glVertexAttrib1fv", (intptr_t) M_arc_backend_sdl_SdlGL20_glVertexAttrib1fv_int_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL20_glVertexAttrib1fv_int_java_nio_FloatBuffer, "(ILjava/nio/FloatBuffer;)V", 1 },
	{ "glVertexAttrib2f", (intptr_t) M_arc_backend_sdl_SdlGL20_glVertexAttrib2f_int_float_float, VTABLE_arc_backend_sdl_SdlGL20_glVertexAttrib2f_int_float_float, "(IFF)V", 1 },
	{ "glVertexAttrib2fv", (intptr_t) M_arc_backend_sdl_SdlGL20_glVertexAttrib2fv_int_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL20_glVertexAttrib2fv_int_java_nio_FloatBuffer, "(ILjava/nio/FloatBuffer;)V", 1 },
	{ "glVertexAttrib3f", (intptr_t) M_arc_backend_sdl_SdlGL20_glVertexAttrib3f_int_float_float_float, VTABLE_arc_backend_sdl_SdlGL20_glVertexAttrib3f_int_float_float_float, "(IFFF)V", 1 },
	{ "glVertexAttrib3fv", (intptr_t) M_arc_backend_sdl_SdlGL20_glVertexAttrib3fv_int_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL20_glVertexAttrib3fv_int_java_nio_FloatBuffer, "(ILjava/nio/FloatBuffer;)V", 1 },
	{ "glVertexAttrib4f", (intptr_t) M_arc_backend_sdl_SdlGL20_glVertexAttrib4f_int_float_float_float_float, VTABLE_arc_backend_sdl_SdlGL20_glVertexAttrib4f_int_float_float_float_float, "(IFFFF)V", 1 },
	{ "glVertexAttrib4fv", (intptr_t) M_arc_backend_sdl_SdlGL20_glVertexAttrib4fv_int_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL20_glVertexAttrib4fv_int_java_nio_FloatBuffer, "(ILjava/nio/FloatBuffer;)V", 1 },
	{ "glVertexAttribPointer", (intptr_t) M_arc_backend_sdl_SdlGL20_glVertexAttribPointer_int_int_int_boolean_int_java_nio_Buffer, VTABLE_arc_backend_sdl_SdlGL20_glVertexAttribPointer_int_int_int_boolean_int_java_nio_Buffer, "(IIIZILjava/nio/Buffer;)V", 1 },
	{ "glVertexAttribPointer", (intptr_t) M_arc_backend_sdl_SdlGL20_glVertexAttribPointer_int_int_int_boolean_int_int, VTABLE_arc_backend_sdl_SdlGL20_glVertexAttribPointer_int_int_int_boolean_int_int, "(IIIZII)V", 1 },
};

Class class_arc_backend_sdl_SdlGL20{
		.nativeName = (intptr_t) "arc/backend/sdl/SdlGL20",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_backend_sdl_SdlGL20),
		.classVtable = (intptr_t) vtable_arc_backend_sdl_SdlGL20,
		.staticInitializer = (intptr_t) clinit_arc_backend_sdl_SdlGL20,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_backend_sdl_SdlGL20,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 152,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 162,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_backend_sdl_SdlGL20 = registerClass(&class_arc_backend_sdl_SdlGL20);

}
