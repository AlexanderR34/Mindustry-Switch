#include "arc/backend/sdl/SdlGL30.h"
#include "java/lang/Object.h"
#include "arc/backend/sdl/jni/SDLGL.h"
#include "java/nio/FloatBuffer.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "java/nio/IntBuffer.h"
#include "arc/backend/sdl/SdlGL20.h"
#include "arc/backend/sdl/SdlGL30.h"
#include "java/nio/LongBuffer.h"
#include "arc/graphics/GL30.h"

extern "C" {


void mark_arc_backend_sdl_SdlGL30(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_backend_sdl_SdlGL20(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_backend_sdl_SdlGL30 *) object;
}

void clinit_arc_backend_sdl_SdlGL30(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_backend_sdl_SdlGL20(ctx);
}

void init_arc_backend_sdl_SdlGL30(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_backend_sdl_SdlGL30(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_arc_backend_sdl_SdlGL20(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glReadBuffer_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glReadBuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(9);
	SM_arc_backend_sdl_jni_SDLGL_glReadBuffer_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glDrawRangeElements_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glDrawRangeElements", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(10);
	SM_arc_backend_sdl_jni_SDLGL_glDrawRangeElements_int_int_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glDrawRangeElements_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glDrawRangeElements", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(11);
	SM_arc_backend_sdl_jni_SDLGL_glDrawRangeElements_int_int_int_int_int_java_nio_Buffer(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glTexImage3D_int_int_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glTexImage3D", 21 };
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
	frame[9].i = param8;
	frame[10].i = param9;
	{
	LINE_NUMBER(12);
	SM_arc_backend_sdl_jni_SDLGL_glTexImage3D_int_int_int_int_int_int_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i), (frame[9].i), (frame[10].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glTexImage3D_int_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jobject param9) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glTexImage3D", 21 };
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
	frame[9].i = param8;
	frame[10].o = param9;
	{
	LINE_NUMBER(13);
	SM_arc_backend_sdl_jni_SDLGL_glTexImage3D_int_int_int_int_int_int_int_int_int_java_nio_Buffer(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i), (frame[9].i), (frame[10].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glTexSubImage3D", 23 };
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
	frame[9].i = param8;
	frame[10].i = param9;
	frame[11].i = param10;
	{
	LINE_NUMBER(14);
	SM_arc_backend_sdl_jni_SDLGL_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i), (frame[9].i), (frame[10].i), (frame[11].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jobject param10) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glTexSubImage3D", 23 };
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
	frame[9].i = param8;
	frame[10].i = param9;
	frame[11].o = param10;
	{
	LINE_NUMBER(15);
	SM_arc_backend_sdl_jni_SDLGL_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_java_nio_Buffer(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i), (frame[9].i), (frame[10].i), (frame[11].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glCopyTexSubImage3D_int_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glCopyTexSubImage3D", 19 };
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
	frame[9].i = param8;
	{
	LINE_NUMBER(16);
	SM_arc_backend_sdl_jni_SDLGL_glCopyTexSubImage3D_int_int_int_int_int_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i), (frame[9].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glGenQueries_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glGenQueries", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(17);
	SM_arc_backend_sdl_jni_SDLGL_glGenQueries_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glDeleteQueries_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glDeleteQueries", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(18);
	SM_arc_backend_sdl_jni_SDLGL_glDeleteQueries_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_backend_sdl_SdlGL30_glIsQuery_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glIsQuery", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(19);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glIsQuery_int_R_boolean(ctx, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glBeginQuery_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glBeginQuery", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(20);
	SM_arc_backend_sdl_jni_SDLGL_glBeginQuery_int_int(ctx, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glEndQuery_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glEndQuery", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(21);
	SM_arc_backend_sdl_jni_SDLGL_glEndQuery_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glGetQueryiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glGetQueryiv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(22);
	SM_arc_backend_sdl_jni_SDLGL_glGetQueryiv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glGetQueryObjectuiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glGetQueryObjectuiv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(23);
	SM_arc_backend_sdl_jni_SDLGL_glGetQueryObjectuiv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_backend_sdl_SdlGL30_glUnmapBuffer_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glUnmapBuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(24);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glUnmapBuffer_int_R_boolean(ctx, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_backend_sdl_SdlGL30_glGetBufferPointerv_int_int_R_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glGetBufferPointerv", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)SM_arc_backend_sdl_jni_SDLGL_glGetBufferPointerv_int_int_R_java_nio_Buffer(ctx, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glDrawBuffers_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glDrawBuffers", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(26);
	SM_arc_backend_sdl_jni_SDLGL_glDrawBuffers_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glUniformMatrix2x3fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glUniformMatrix2x3fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(27);
	SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix2x3fv_int_int_boolean_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glUniformMatrix3x2fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glUniformMatrix3x2fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(28);
	SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix3x2fv_int_int_boolean_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glUniformMatrix2x4fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glUniformMatrix2x4fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(29);
	SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix2x4fv_int_int_boolean_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glUniformMatrix4x2fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glUniformMatrix4x2fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(30);
	SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix4x2fv_int_int_boolean_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glUniformMatrix3x4fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glUniformMatrix3x4fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(31);
	SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix3x4fv_int_int_boolean_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glUniformMatrix4x3fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glUniformMatrix4x3fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(32);
	SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix4x3fv_int_int_boolean_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glBlitFramebuffer_int_int_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glBlitFramebuffer", 21 };
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
	frame[9].i = param8;
	frame[10].i = param9;
	{
	LINE_NUMBER(33);
	SM_arc_backend_sdl_jni_SDLGL_glBlitFramebuffer_int_int_int_int_int_int_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i), (frame[9].i), (frame[10].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glRenderbufferStorageMultisample_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glRenderbufferStorageMultisample", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(34);
	SM_arc_backend_sdl_jni_SDLGL_glRenderbufferStorageMultisample_int_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glFramebufferTextureLayer_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glFramebufferTextureLayer", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(35);
	SM_arc_backend_sdl_jni_SDLGL_glFramebufferTextureLayer_int_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glFlushMappedBufferRange_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glFlushMappedBufferRange", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(36);
	SM_arc_backend_sdl_jni_SDLGL_glFlushMappedBufferRange_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glBindVertexArray_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glBindVertexArray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(37);
	SM_arc_backend_sdl_jni_SDLGL_glBindVertexArray_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glDeleteVertexArrays_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glDeleteVertexArrays", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(38);
	SM_arc_backend_sdl_jni_SDLGL_glDeleteVertexArrays_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glGenVertexArrays_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glGenVertexArrays", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(39);
	SM_arc_backend_sdl_jni_SDLGL_glGenVertexArrays_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_backend_sdl_SdlGL30_glIsVertexArray_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glIsVertexArray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(40);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glIsVertexArray_int_R_boolean(ctx, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glBeginTransformFeedback_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glBeginTransformFeedback", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(41);
	SM_arc_backend_sdl_jni_SDLGL_glBeginTransformFeedback_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glEndTransformFeedback(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glEndTransformFeedback", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	SM_arc_backend_sdl_jni_SDLGL_glEndTransformFeedback(ctx);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glBindBufferRange_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glBindBufferRange", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(43);
	SM_arc_backend_sdl_jni_SDLGL_glBindBufferRange_int_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glBindBufferBase_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glBindBufferBase", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(44);
	SM_arc_backend_sdl_jni_SDLGL_glBindBufferBase_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glTransformFeedbackVaryings_int_Array1_java_lang_String_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glTransformFeedbackVaryings", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(45);
	SM_arc_backend_sdl_jni_SDLGL_glTransformFeedbackVaryings_int_Array1_java_lang_String_int(ctx, (frame[1].i), (frame[2].o), (frame[3].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glVertexAttribIPointer_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glVertexAttribIPointer", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(46);
	SM_arc_backend_sdl_jni_SDLGL_glVertexAttribIPointer_int_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glGetVertexAttribIiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glGetVertexAttribIiv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(47);
	SM_arc_backend_sdl_jni_SDLGL_glGetVertexAttribIiv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glGetVertexAttribIuiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glGetVertexAttribIuiv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(48);
	SM_arc_backend_sdl_jni_SDLGL_glGetVertexAttribIuiv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glVertexAttribI4i_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glVertexAttribI4i", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(49);
	SM_arc_backend_sdl_jni_SDLGL_glVertexAttribI4i_int_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glVertexAttribI4ui_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glVertexAttribI4ui", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(50);
	SM_arc_backend_sdl_jni_SDLGL_glVertexAttribI4ui_int_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glGetUniformuiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glGetUniformuiv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(51);
	SM_arc_backend_sdl_jni_SDLGL_glGetUniformuiv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlGL30_glGetFragDataLocation_int_java_lang_String_R_int(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glGetFragDataLocation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(52);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glGetFragDataLocation_int_java_lang_String_R_int(ctx, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glUniform1uiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glUniform1uiv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(53);
	SM_arc_backend_sdl_jni_SDLGL_glUniform1uiv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glUniform3uiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glUniform3uiv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(54);
	SM_arc_backend_sdl_jni_SDLGL_glUniform3uiv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glUniform4uiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glUniform4uiv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(55);
	SM_arc_backend_sdl_jni_SDLGL_glUniform4uiv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glClearBufferiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glClearBufferiv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(56);
	SM_arc_backend_sdl_jni_SDLGL_glClearBufferiv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glClearBufferuiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glClearBufferuiv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(57);
	SM_arc_backend_sdl_jni_SDLGL_glClearBufferuiv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glClearBufferfv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glClearBufferfv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(58);
	SM_arc_backend_sdl_jni_SDLGL_glClearBufferfv_int_int_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glClearBufferfi_int_int_float_int(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glClearBufferfi", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(59);
	SM_arc_backend_sdl_jni_SDLGL_glClearBufferfi_int_int_float_int(ctx, (frame[1].i), (frame[2].i), (frame[3].f), (frame[4].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_backend_sdl_SdlGL30_glGetStringi_int_int_R_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glGetStringi", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)SM_arc_backend_sdl_jni_SDLGL_glGetStringi_int_int_R_java_lang_String(ctx, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glCopyBufferSubData_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glCopyBufferSubData", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(61);
	SM_arc_backend_sdl_jni_SDLGL_glCopyBufferSubData_int_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glGetUniformIndices_int_Array1_java_lang_String_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glGetUniformIndices", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(62);
	SM_arc_backend_sdl_jni_SDLGL_glGetUniformIndices_int_Array1_java_lang_String_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glGetActiveUniformsiv_int_int_java_nio_IntBuffer_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glGetActiveUniformsiv", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(63);
	SM_arc_backend_sdl_jni_SDLGL_glGetActiveUniformsiv_int_int_java_nio_IntBuffer_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].i), (frame[5].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlGL30_glGetUniformBlockIndex_int_java_lang_String_R_int(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glGetUniformBlockIndex", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(64);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glGetUniformBlockIndex_int_java_lang_String_R_int(ctx, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glGetActiveUniformBlockiv_int_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glGetActiveUniformBlockiv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(65);
	SM_arc_backend_sdl_jni_SDLGL_glGetActiveUniformBlockiv_int_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glGetActiveUniformBlockName_int_int_java_nio_Buffer_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glGetActiveUniformBlockName", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(66);
	SM_arc_backend_sdl_jni_SDLGL_glGetActiveUniformBlockName_int_int_java_nio_Buffer_java_nio_Buffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glUniformBlockBinding_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glUniformBlockBinding", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(67);
	SM_arc_backend_sdl_jni_SDLGL_glUniformBlockBinding_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glDrawArraysInstanced_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glDrawArraysInstanced", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(68);
	SM_arc_backend_sdl_jni_SDLGL_glDrawArraysInstanced_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glDrawElementsInstanced_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glDrawElementsInstanced", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(69);
	SM_arc_backend_sdl_jni_SDLGL_glDrawElementsInstanced_int_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glGetInteger64v_int_java_nio_LongBuffer(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glGetInteger64v", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(70);
	SM_arc_backend_sdl_jni_SDLGL_glGetInteger64v_int_java_nio_LongBuffer(ctx, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glGetBufferParameteri64v_int_int_java_nio_LongBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glGetBufferParameteri64v", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(71);
	SM_arc_backend_sdl_jni_SDLGL_glGetBufferParameteri64v_int_int_java_nio_LongBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glGenSamplers_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glGenSamplers", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(72);
	SM_arc_backend_sdl_jni_SDLGL_glGenSamplers_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glDeleteSamplers_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glDeleteSamplers", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(73);
	SM_arc_backend_sdl_jni_SDLGL_glDeleteSamplers_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_backend_sdl_SdlGL30_glIsSampler_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glIsSampler", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(74);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glIsSampler_int_R_boolean(ctx, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glBindSampler_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glBindSampler", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(75);
	SM_arc_backend_sdl_jni_SDLGL_glBindSampler_int_int(ctx, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glSamplerParameteri_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glSamplerParameteri", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(76);
	SM_arc_backend_sdl_jni_SDLGL_glSamplerParameteri_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glSamplerParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glSamplerParameteriv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(77);
	SM_arc_backend_sdl_jni_SDLGL_glSamplerParameteriv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glSamplerParameterf_int_int_float(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glSamplerParameterf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(78);
	SM_arc_backend_sdl_jni_SDLGL_glSamplerParameterf_int_int_float(ctx, (frame[1].i), (frame[2].i), (frame[3].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glSamplerParameterfv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glSamplerParameterfv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(79);
	SM_arc_backend_sdl_jni_SDLGL_glSamplerParameterfv_int_int_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glGetSamplerParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glGetSamplerParameteriv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(80);
	SM_arc_backend_sdl_jni_SDLGL_glGetSamplerParameteriv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glGetSamplerParameterfv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glGetSamplerParameterfv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(81);
	SM_arc_backend_sdl_jni_SDLGL_glGetSamplerParameterfv_int_int_java_nio_FloatBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glVertexAttribDivisor_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glVertexAttribDivisor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(82);
	SM_arc_backend_sdl_jni_SDLGL_glVertexAttribDivisor_int_int(ctx, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glBindTransformFeedback_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glBindTransformFeedback", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(83);
	SM_arc_backend_sdl_jni_SDLGL_glBindTransformFeedback_int_int(ctx, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glDeleteTransformFeedbacks_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glDeleteTransformFeedbacks", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(84);
	SM_arc_backend_sdl_jni_SDLGL_glDeleteTransformFeedbacks_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glGenTransformFeedbacks_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glGenTransformFeedbacks", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(85);
	SM_arc_backend_sdl_jni_SDLGL_glGenTransformFeedbacks_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_backend_sdl_SdlGL30_glIsTransformFeedback_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glIsTransformFeedback", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(86);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDLGL_glIsTransformFeedback_int_R_boolean(ctx, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glPauseTransformFeedback(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glPauseTransformFeedback", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	SM_arc_backend_sdl_jni_SDLGL_glPauseTransformFeedback(ctx);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glResumeTransformFeedback(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glResumeTransformFeedback", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	SM_arc_backend_sdl_jni_SDLGL_glResumeTransformFeedback(ctx);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glProgramParameteri_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glProgramParameteri", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(89);
	SM_arc_backend_sdl_jni_SDLGL_glProgramParameteri_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glInvalidateFramebuffer_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glInvalidateFramebuffer", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(90);
	SM_arc_backend_sdl_jni_SDLGL_glInvalidateFramebuffer_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGL30_glInvalidateSubFramebuffer_int_int_java_nio_IntBuffer_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3, jint param4, jint param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGL30:glInvalidateSubFramebuffer", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(91);
	SM_arc_backend_sdl_jni_SDLGL_glInvalidateSubFramebuffer_int_int_java_nio_IntBuffer_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_backend_sdl_SdlGL30[] {
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
	(void *) M_arc_backend_sdl_SdlGL30_glReadBuffer_int,
	(void *) M_arc_backend_sdl_SdlGL30_glDrawRangeElements_int_int_int_int_int_java_nio_Buffer,
	(void *) M_arc_backend_sdl_SdlGL30_glDrawRangeElements_int_int_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL30_glTexImage3D_int_int_int_int_int_int_int_int_int_java_nio_Buffer,
	(void *) M_arc_backend_sdl_SdlGL30_glTexImage3D_int_int_int_int_int_int_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL30_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_java_nio_Buffer,
	(void *) M_arc_backend_sdl_SdlGL30_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL30_glCopyTexSubImage3D_int_int_int_int_int_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL30_glGenQueries_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glDeleteQueries_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glIsQuery_int_R_boolean,
	(void *) M_arc_backend_sdl_SdlGL30_glBeginQuery_int_int,
	(void *) M_arc_backend_sdl_SdlGL30_glEndQuery_int,
	(void *) M_arc_backend_sdl_SdlGL30_glGetQueryiv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glGetQueryObjectuiv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glUnmapBuffer_int_R_boolean,
	(void *) M_arc_backend_sdl_SdlGL30_glGetBufferPointerv_int_int_R_java_nio_Buffer,
	(void *) M_arc_backend_sdl_SdlGL30_glDrawBuffers_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glUniformMatrix2x3fv_int_int_boolean_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glUniformMatrix3x2fv_int_int_boolean_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glUniformMatrix2x4fv_int_int_boolean_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glUniformMatrix4x2fv_int_int_boolean_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glUniformMatrix3x4fv_int_int_boolean_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glUniformMatrix4x3fv_int_int_boolean_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glBlitFramebuffer_int_int_int_int_int_int_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL30_glRenderbufferStorageMultisample_int_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL30_glFramebufferTextureLayer_int_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL30_glFlushMappedBufferRange_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL30_glBindVertexArray_int,
	(void *) M_arc_backend_sdl_SdlGL30_glDeleteVertexArrays_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glGenVertexArrays_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glIsVertexArray_int_R_boolean,
	(void *) M_arc_backend_sdl_SdlGL30_glBeginTransformFeedback_int,
	(void *) M_arc_backend_sdl_SdlGL30_glEndTransformFeedback,
	(void *) M_arc_backend_sdl_SdlGL30_glBindBufferRange_int_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL30_glBindBufferBase_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL30_glTransformFeedbackVaryings_int_Array1_java_lang_String_int,
	(void *) M_arc_backend_sdl_SdlGL30_glVertexAttribIPointer_int_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL30_glGetVertexAttribIiv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glGetVertexAttribIuiv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glVertexAttribI4i_int_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL30_glVertexAttribI4ui_int_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL30_glGetUniformuiv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glGetFragDataLocation_int_java_lang_String_R_int,
	(void *) M_arc_backend_sdl_SdlGL30_glUniform1uiv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glUniform3uiv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glUniform4uiv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glClearBufferiv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glClearBufferuiv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glClearBufferfv_int_int_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glClearBufferfi_int_int_float_int,
	(void *) M_arc_backend_sdl_SdlGL30_glGetStringi_int_int_R_java_lang_String,
	(void *) M_arc_backend_sdl_SdlGL30_glCopyBufferSubData_int_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL30_glGetUniformIndices_int_Array1_java_lang_String_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glGetActiveUniformsiv_int_int_java_nio_IntBuffer_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glGetUniformBlockIndex_int_java_lang_String_R_int,
	(void *) M_arc_backend_sdl_SdlGL30_glGetActiveUniformBlockiv_int_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glGetActiveUniformBlockName_int_int_java_nio_Buffer_java_nio_Buffer,
	(void *) M_arc_backend_sdl_SdlGL30_glUniformBlockBinding_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL30_glDrawArraysInstanced_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL30_glDrawElementsInstanced_int_int_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL30_glGetInteger64v_int_java_nio_LongBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glGetBufferParameteri64v_int_int_java_nio_LongBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glGenSamplers_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glDeleteSamplers_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glIsSampler_int_R_boolean,
	(void *) M_arc_backend_sdl_SdlGL30_glBindSampler_int_int,
	(void *) M_arc_backend_sdl_SdlGL30_glSamplerParameteri_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL30_glSamplerParameteriv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glSamplerParameterf_int_int_float,
	(void *) M_arc_backend_sdl_SdlGL30_glSamplerParameterfv_int_int_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glGetSamplerParameteriv_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glGetSamplerParameterfv_int_int_java_nio_FloatBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glVertexAttribDivisor_int_int,
	(void *) M_arc_backend_sdl_SdlGL30_glBindTransformFeedback_int_int,
	(void *) M_arc_backend_sdl_SdlGL30_glDeleteTransformFeedbacks_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glGenTransformFeedbacks_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glIsTransformFeedback_int_R_boolean,
	(void *) M_arc_backend_sdl_SdlGL30_glPauseTransformFeedback,
	(void *) M_arc_backend_sdl_SdlGL30_glResumeTransformFeedback,
	(void *) M_arc_backend_sdl_SdlGL30_glProgramParameteri_int_int_int,
	(void *) M_arc_backend_sdl_SdlGL30_glInvalidateFramebuffer_int_int_java_nio_IntBuffer,
	(void *) M_arc_backend_sdl_SdlGL30_glInvalidateSubFramebuffer_int_int_java_nio_IntBuffer_int_int_int_int,
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
	{ "glReadBuffer", "(I)V" },
	{ "glDrawRangeElements", "(IIIIILjava/nio/Buffer;)V" },
	{ "glDrawRangeElements", "(IIIIII)V" },
	{ "glTexImage3D", "(IIIIIIIIILjava/nio/Buffer;)V" },
	{ "glTexImage3D", "(IIIIIIIIII)V" },
	{ "glTexSubImage3D", "(IIIIIIIIIILjava/nio/Buffer;)V" },
	{ "glTexSubImage3D", "(IIIIIIIIIII)V" },
	{ "glCopyTexSubImage3D", "(IIIIIIIII)V" },
	{ "glGenQueries", "(ILjava/nio/IntBuffer;)V" },
	{ "glDeleteQueries", "(ILjava/nio/IntBuffer;)V" },
	{ "glIsQuery", "(I)Z" },
	{ "glBeginQuery", "(II)V" },
	{ "glEndQuery", "(I)V" },
	{ "glGetQueryiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetQueryObjectuiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUnmapBuffer", "(I)Z" },
	{ "glGetBufferPointerv", "(II)Ljava/nio/Buffer;" },
	{ "glDrawBuffers", "(ILjava/nio/IntBuffer;)V" },
	{ "glUniformMatrix2x3fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix3x2fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix2x4fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix4x2fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix3x4fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix4x3fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glBlitFramebuffer", "(IIIIIIIIII)V" },
	{ "glRenderbufferStorageMultisample", "(IIIII)V" },
	{ "glFramebufferTextureLayer", "(IIIII)V" },
	{ "glFlushMappedBufferRange", "(III)V" },
	{ "glBindVertexArray", "(I)V" },
	{ "glDeleteVertexArrays", "(ILjava/nio/IntBuffer;)V" },
	{ "glGenVertexArrays", "(ILjava/nio/IntBuffer;)V" },
	{ "glIsVertexArray", "(I)Z" },
	{ "glBeginTransformFeedback", "(I)V" },
	{ "glEndTransformFeedback", "()V" },
	{ "glBindBufferRange", "(IIIII)V" },
	{ "glBindBufferBase", "(III)V" },
	{ "glTransformFeedbackVaryings", "(I[Ljava/lang/String;I)V" },
	{ "glVertexAttribIPointer", "(IIIII)V" },
	{ "glGetVertexAttribIiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetVertexAttribIuiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glVertexAttribI4i", "(IIIII)V" },
	{ "glVertexAttribI4ui", "(IIIII)V" },
	{ "glGetUniformuiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetFragDataLocation", "(ILjava/lang/String;)I" },
	{ "glUniform1uiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUniform3uiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUniform4uiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glClearBufferiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glClearBufferuiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glClearBufferfv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glClearBufferfi", "(IIFI)V" },
	{ "glGetStringi", "(II)Ljava/lang/String;" },
	{ "glCopyBufferSubData", "(IIIII)V" },
	{ "glGetUniformIndices", "(I[Ljava/lang/String;Ljava/nio/IntBuffer;)V" },
	{ "glGetActiveUniformsiv", "(IILjava/nio/IntBuffer;ILjava/nio/IntBuffer;)V" },
	{ "glGetUniformBlockIndex", "(ILjava/lang/String;)I" },
	{ "glGetActiveUniformBlockiv", "(IIILjava/nio/IntBuffer;)V" },
	{ "glGetActiveUniformBlockName", "(IILjava/nio/Buffer;Ljava/nio/Buffer;)V" },
	{ "glUniformBlockBinding", "(III)V" },
	{ "glDrawArraysInstanced", "(IIII)V" },
	{ "glDrawElementsInstanced", "(IIIII)V" },
	{ "glGetInteger64v", "(ILjava/nio/LongBuffer;)V" },
	{ "glGetBufferParameteri64v", "(IILjava/nio/LongBuffer;)V" },
	{ "glGenSamplers", "(ILjava/nio/IntBuffer;)V" },
	{ "glDeleteSamplers", "(ILjava/nio/IntBuffer;)V" },
	{ "glIsSampler", "(I)Z" },
	{ "glBindSampler", "(II)V" },
	{ "glSamplerParameteri", "(III)V" },
	{ "glSamplerParameteriv", "(IILjava/nio/IntBuffer;)V" },
	{ "glSamplerParameterf", "(IIF)V" },
	{ "glSamplerParameterfv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glGetSamplerParameteriv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetSamplerParameterfv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glVertexAttribDivisor", "(II)V" },
	{ "glBindTransformFeedback", "(II)V" },
	{ "glDeleteTransformFeedbacks", "(ILjava/nio/IntBuffer;)V" },
	{ "glGenTransformFeedbacks", "(ILjava/nio/IntBuffer;)V" },
	{ "glIsTransformFeedback", "(I)Z" },
	{ "glPauseTransformFeedback", "()V" },
	{ "glResumeTransformFeedback", "()V" },
	{ "glProgramParameteri", "(III)V" },
	{ "glInvalidateFramebuffer", "(IILjava/nio/IntBuffer;)V" },
	{ "glInvalidateSubFramebuffer", "(IILjava/nio/IntBuffer;IIII)V" },
};

static jclass interfaces[] { &class_arc_graphics_GL30, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_backend_sdl_SdlGL30, 0, "()V", 1 },
	{ "glReadBuffer", (intptr_t) M_arc_backend_sdl_SdlGL30_glReadBuffer_int, VTABLE_arc_backend_sdl_SdlGL30_glReadBuffer_int, "(I)V", 1 },
	{ "glDrawRangeElements", (intptr_t) M_arc_backend_sdl_SdlGL30_glDrawRangeElements_int_int_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL30_glDrawRangeElements_int_int_int_int_int_int, "(IIIIII)V", 1 },
	{ "glDrawRangeElements", (intptr_t) M_arc_backend_sdl_SdlGL30_glDrawRangeElements_int_int_int_int_int_java_nio_Buffer, VTABLE_arc_backend_sdl_SdlGL30_glDrawRangeElements_int_int_int_int_int_java_nio_Buffer, "(IIIIILjava/nio/Buffer;)V", 1 },
	{ "glTexImage3D", (intptr_t) M_arc_backend_sdl_SdlGL30_glTexImage3D_int_int_int_int_int_int_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL30_glTexImage3D_int_int_int_int_int_int_int_int_int_int, "(IIIIIIIIII)V", 1 },
	{ "glTexImage3D", (intptr_t) M_arc_backend_sdl_SdlGL30_glTexImage3D_int_int_int_int_int_int_int_int_int_java_nio_Buffer, VTABLE_arc_backend_sdl_SdlGL30_glTexImage3D_int_int_int_int_int_int_int_int_int_java_nio_Buffer, "(IIIIIIIIILjava/nio/Buffer;)V", 1 },
	{ "glTexSubImage3D", (intptr_t) M_arc_backend_sdl_SdlGL30_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL30_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_int, "(IIIIIIIIIII)V", 1 },
	{ "glTexSubImage3D", (intptr_t) M_arc_backend_sdl_SdlGL30_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_java_nio_Buffer, VTABLE_arc_backend_sdl_SdlGL30_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_java_nio_Buffer, "(IIIIIIIIIILjava/nio/Buffer;)V", 1 },
	{ "glCopyTexSubImage3D", (intptr_t) M_arc_backend_sdl_SdlGL30_glCopyTexSubImage3D_int_int_int_int_int_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL30_glCopyTexSubImage3D_int_int_int_int_int_int_int_int_int, "(IIIIIIIII)V", 1 },
	{ "glGenQueries", (intptr_t) M_arc_backend_sdl_SdlGL30_glGenQueries_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glGenQueries_int_java_nio_IntBuffer, "(ILjava/nio/IntBuffer;)V", 1 },
	{ "glDeleteQueries", (intptr_t) M_arc_backend_sdl_SdlGL30_glDeleteQueries_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glDeleteQueries_int_java_nio_IntBuffer, "(ILjava/nio/IntBuffer;)V", 1 },
	{ "glIsQuery", (intptr_t) M_arc_backend_sdl_SdlGL30_glIsQuery_int_R_boolean, VTABLE_arc_backend_sdl_SdlGL30_glIsQuery_int_R_boolean, "(I)Z", 1 },
	{ "glBeginQuery", (intptr_t) M_arc_backend_sdl_SdlGL30_glBeginQuery_int_int, VTABLE_arc_backend_sdl_SdlGL30_glBeginQuery_int_int, "(II)V", 1 },
	{ "glEndQuery", (intptr_t) M_arc_backend_sdl_SdlGL30_glEndQuery_int, VTABLE_arc_backend_sdl_SdlGL30_glEndQuery_int, "(I)V", 1 },
	{ "glGetQueryiv", (intptr_t) M_arc_backend_sdl_SdlGL30_glGetQueryiv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glGetQueryiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glGetQueryObjectuiv", (intptr_t) M_arc_backend_sdl_SdlGL30_glGetQueryObjectuiv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glGetQueryObjectuiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glUnmapBuffer", (intptr_t) M_arc_backend_sdl_SdlGL30_glUnmapBuffer_int_R_boolean, VTABLE_arc_backend_sdl_SdlGL30_glUnmapBuffer_int_R_boolean, "(I)Z", 1 },
	{ "glGetBufferPointerv", (intptr_t) M_arc_backend_sdl_SdlGL30_glGetBufferPointerv_int_int_R_java_nio_Buffer, VTABLE_arc_backend_sdl_SdlGL30_glGetBufferPointerv_int_int_R_java_nio_Buffer, "(II)Ljava/nio/Buffer;", 1 },
	{ "glDrawBuffers", (intptr_t) M_arc_backend_sdl_SdlGL30_glDrawBuffers_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glDrawBuffers_int_java_nio_IntBuffer, "(ILjava/nio/IntBuffer;)V", 1 },
	{ "glUniformMatrix2x3fv", (intptr_t) M_arc_backend_sdl_SdlGL30_glUniformMatrix2x3fv_int_int_boolean_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL30_glUniformMatrix2x3fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1 },
	{ "glUniformMatrix3x2fv", (intptr_t) M_arc_backend_sdl_SdlGL30_glUniformMatrix3x2fv_int_int_boolean_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL30_glUniformMatrix3x2fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1 },
	{ "glUniformMatrix2x4fv", (intptr_t) M_arc_backend_sdl_SdlGL30_glUniformMatrix2x4fv_int_int_boolean_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL30_glUniformMatrix2x4fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1 },
	{ "glUniformMatrix4x2fv", (intptr_t) M_arc_backend_sdl_SdlGL30_glUniformMatrix4x2fv_int_int_boolean_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL30_glUniformMatrix4x2fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1 },
	{ "glUniformMatrix3x4fv", (intptr_t) M_arc_backend_sdl_SdlGL30_glUniformMatrix3x4fv_int_int_boolean_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL30_glUniformMatrix3x4fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1 },
	{ "glUniformMatrix4x3fv", (intptr_t) M_arc_backend_sdl_SdlGL30_glUniformMatrix4x3fv_int_int_boolean_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL30_glUniformMatrix4x3fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1 },
	{ "glBlitFramebuffer", (intptr_t) M_arc_backend_sdl_SdlGL30_glBlitFramebuffer_int_int_int_int_int_int_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL30_glBlitFramebuffer_int_int_int_int_int_int_int_int_int_int, "(IIIIIIIIII)V", 1 },
	{ "glRenderbufferStorageMultisample", (intptr_t) M_arc_backend_sdl_SdlGL30_glRenderbufferStorageMultisample_int_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL30_glRenderbufferStorageMultisample_int_int_int_int_int, "(IIIII)V", 1 },
	{ "glFramebufferTextureLayer", (intptr_t) M_arc_backend_sdl_SdlGL30_glFramebufferTextureLayer_int_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL30_glFramebufferTextureLayer_int_int_int_int_int, "(IIIII)V", 1 },
	{ "glFlushMappedBufferRange", (intptr_t) M_arc_backend_sdl_SdlGL30_glFlushMappedBufferRange_int_int_int, VTABLE_arc_backend_sdl_SdlGL30_glFlushMappedBufferRange_int_int_int, "(III)V", 1 },
	{ "glBindVertexArray", (intptr_t) M_arc_backend_sdl_SdlGL30_glBindVertexArray_int, VTABLE_arc_backend_sdl_SdlGL30_glBindVertexArray_int, "(I)V", 1 },
	{ "glDeleteVertexArrays", (intptr_t) M_arc_backend_sdl_SdlGL30_glDeleteVertexArrays_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glDeleteVertexArrays_int_java_nio_IntBuffer, "(ILjava/nio/IntBuffer;)V", 1 },
	{ "glGenVertexArrays", (intptr_t) M_arc_backend_sdl_SdlGL30_glGenVertexArrays_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glGenVertexArrays_int_java_nio_IntBuffer, "(ILjava/nio/IntBuffer;)V", 1 },
	{ "glIsVertexArray", (intptr_t) M_arc_backend_sdl_SdlGL30_glIsVertexArray_int_R_boolean, VTABLE_arc_backend_sdl_SdlGL30_glIsVertexArray_int_R_boolean, "(I)Z", 1 },
	{ "glBeginTransformFeedback", (intptr_t) M_arc_backend_sdl_SdlGL30_glBeginTransformFeedback_int, VTABLE_arc_backend_sdl_SdlGL30_glBeginTransformFeedback_int, "(I)V", 1 },
	{ "glEndTransformFeedback", (intptr_t) M_arc_backend_sdl_SdlGL30_glEndTransformFeedback, VTABLE_arc_backend_sdl_SdlGL30_glEndTransformFeedback, "()V", 1 },
	{ "glBindBufferRange", (intptr_t) M_arc_backend_sdl_SdlGL30_glBindBufferRange_int_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL30_glBindBufferRange_int_int_int_int_int, "(IIIII)V", 1 },
	{ "glBindBufferBase", (intptr_t) M_arc_backend_sdl_SdlGL30_glBindBufferBase_int_int_int, VTABLE_arc_backend_sdl_SdlGL30_glBindBufferBase_int_int_int, "(III)V", 1 },
	{ "glTransformFeedbackVaryings", (intptr_t) M_arc_backend_sdl_SdlGL30_glTransformFeedbackVaryings_int_Array1_java_lang_String_int, VTABLE_arc_backend_sdl_SdlGL30_glTransformFeedbackVaryings_int_Array1_java_lang_String_int, "(I[Ljava/lang/String;I)V", 1 },
	{ "glVertexAttribIPointer", (intptr_t) M_arc_backend_sdl_SdlGL30_glVertexAttribIPointer_int_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL30_glVertexAttribIPointer_int_int_int_int_int, "(IIIII)V", 1 },
	{ "glGetVertexAttribIiv", (intptr_t) M_arc_backend_sdl_SdlGL30_glGetVertexAttribIiv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glGetVertexAttribIiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glGetVertexAttribIuiv", (intptr_t) M_arc_backend_sdl_SdlGL30_glGetVertexAttribIuiv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glGetVertexAttribIuiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glVertexAttribI4i", (intptr_t) M_arc_backend_sdl_SdlGL30_glVertexAttribI4i_int_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL30_glVertexAttribI4i_int_int_int_int_int, "(IIIII)V", 1 },
	{ "glVertexAttribI4ui", (intptr_t) M_arc_backend_sdl_SdlGL30_glVertexAttribI4ui_int_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL30_glVertexAttribI4ui_int_int_int_int_int, "(IIIII)V", 1 },
	{ "glGetUniformuiv", (intptr_t) M_arc_backend_sdl_SdlGL30_glGetUniformuiv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glGetUniformuiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glGetFragDataLocation", (intptr_t) M_arc_backend_sdl_SdlGL30_glGetFragDataLocation_int_java_lang_String_R_int, VTABLE_arc_backend_sdl_SdlGL30_glGetFragDataLocation_int_java_lang_String_R_int, "(ILjava/lang/String;)I", 1 },
	{ "glUniform1uiv", (intptr_t) M_arc_backend_sdl_SdlGL30_glUniform1uiv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glUniform1uiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glUniform3uiv", (intptr_t) M_arc_backend_sdl_SdlGL30_glUniform3uiv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glUniform3uiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glUniform4uiv", (intptr_t) M_arc_backend_sdl_SdlGL30_glUniform4uiv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glUniform4uiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glClearBufferiv", (intptr_t) M_arc_backend_sdl_SdlGL30_glClearBufferiv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glClearBufferiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glClearBufferuiv", (intptr_t) M_arc_backend_sdl_SdlGL30_glClearBufferuiv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glClearBufferuiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glClearBufferfv", (intptr_t) M_arc_backend_sdl_SdlGL30_glClearBufferfv_int_int_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL30_glClearBufferfv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1 },
	{ "glClearBufferfi", (intptr_t) M_arc_backend_sdl_SdlGL30_glClearBufferfi_int_int_float_int, VTABLE_arc_backend_sdl_SdlGL30_glClearBufferfi_int_int_float_int, "(IIFI)V", 1 },
	{ "glGetStringi", (intptr_t) M_arc_backend_sdl_SdlGL30_glGetStringi_int_int_R_java_lang_String, VTABLE_arc_backend_sdl_SdlGL30_glGetStringi_int_int_R_java_lang_String, "(II)Ljava/lang/String;", 1 },
	{ "glCopyBufferSubData", (intptr_t) M_arc_backend_sdl_SdlGL30_glCopyBufferSubData_int_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL30_glCopyBufferSubData_int_int_int_int_int, "(IIIII)V", 1 },
	{ "glGetUniformIndices", (intptr_t) M_arc_backend_sdl_SdlGL30_glGetUniformIndices_int_Array1_java_lang_String_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glGetUniformIndices_int_Array1_java_lang_String_java_nio_IntBuffer, "(I[Ljava/lang/String;Ljava/nio/IntBuffer;)V", 1 },
	{ "glGetActiveUniformsiv", (intptr_t) M_arc_backend_sdl_SdlGL30_glGetActiveUniformsiv_int_int_java_nio_IntBuffer_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glGetActiveUniformsiv_int_int_java_nio_IntBuffer_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;ILjava/nio/IntBuffer;)V", 1 },
	{ "glGetUniformBlockIndex", (intptr_t) M_arc_backend_sdl_SdlGL30_glGetUniformBlockIndex_int_java_lang_String_R_int, VTABLE_arc_backend_sdl_SdlGL30_glGetUniformBlockIndex_int_java_lang_String_R_int, "(ILjava/lang/String;)I", 1 },
	{ "glGetActiveUniformBlockiv", (intptr_t) M_arc_backend_sdl_SdlGL30_glGetActiveUniformBlockiv_int_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glGetActiveUniformBlockiv_int_int_int_java_nio_IntBuffer, "(IIILjava/nio/IntBuffer;)V", 1 },
	{ "glGetActiveUniformBlockName", (intptr_t) M_arc_backend_sdl_SdlGL30_glGetActiveUniformBlockName_int_int_java_nio_Buffer_java_nio_Buffer, VTABLE_arc_backend_sdl_SdlGL30_glGetActiveUniformBlockName_int_int_java_nio_Buffer_java_nio_Buffer, "(IILjava/nio/Buffer;Ljava/nio/Buffer;)V", 1 },
	{ "glUniformBlockBinding", (intptr_t) M_arc_backend_sdl_SdlGL30_glUniformBlockBinding_int_int_int, VTABLE_arc_backend_sdl_SdlGL30_glUniformBlockBinding_int_int_int, "(III)V", 1 },
	{ "glDrawArraysInstanced", (intptr_t) M_arc_backend_sdl_SdlGL30_glDrawArraysInstanced_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL30_glDrawArraysInstanced_int_int_int_int, "(IIII)V", 1 },
	{ "glDrawElementsInstanced", (intptr_t) M_arc_backend_sdl_SdlGL30_glDrawElementsInstanced_int_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL30_glDrawElementsInstanced_int_int_int_int_int, "(IIIII)V", 1 },
	{ "glGetInteger64v", (intptr_t) M_arc_backend_sdl_SdlGL30_glGetInteger64v_int_java_nio_LongBuffer, VTABLE_arc_backend_sdl_SdlGL30_glGetInteger64v_int_java_nio_LongBuffer, "(ILjava/nio/LongBuffer;)V", 1 },
	{ "glGetBufferParameteri64v", (intptr_t) M_arc_backend_sdl_SdlGL30_glGetBufferParameteri64v_int_int_java_nio_LongBuffer, VTABLE_arc_backend_sdl_SdlGL30_glGetBufferParameteri64v_int_int_java_nio_LongBuffer, "(IILjava/nio/LongBuffer;)V", 1 },
	{ "glGenSamplers", (intptr_t) M_arc_backend_sdl_SdlGL30_glGenSamplers_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glGenSamplers_int_java_nio_IntBuffer, "(ILjava/nio/IntBuffer;)V", 1 },
	{ "glDeleteSamplers", (intptr_t) M_arc_backend_sdl_SdlGL30_glDeleteSamplers_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glDeleteSamplers_int_java_nio_IntBuffer, "(ILjava/nio/IntBuffer;)V", 1 },
	{ "glIsSampler", (intptr_t) M_arc_backend_sdl_SdlGL30_glIsSampler_int_R_boolean, VTABLE_arc_backend_sdl_SdlGL30_glIsSampler_int_R_boolean, "(I)Z", 1 },
	{ "glBindSampler", (intptr_t) M_arc_backend_sdl_SdlGL30_glBindSampler_int_int, VTABLE_arc_backend_sdl_SdlGL30_glBindSampler_int_int, "(II)V", 1 },
	{ "glSamplerParameteri", (intptr_t) M_arc_backend_sdl_SdlGL30_glSamplerParameteri_int_int_int, VTABLE_arc_backend_sdl_SdlGL30_glSamplerParameteri_int_int_int, "(III)V", 1 },
	{ "glSamplerParameteriv", (intptr_t) M_arc_backend_sdl_SdlGL30_glSamplerParameteriv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glSamplerParameteriv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glSamplerParameterf", (intptr_t) M_arc_backend_sdl_SdlGL30_glSamplerParameterf_int_int_float, VTABLE_arc_backend_sdl_SdlGL30_glSamplerParameterf_int_int_float, "(IIF)V", 1 },
	{ "glSamplerParameterfv", (intptr_t) M_arc_backend_sdl_SdlGL30_glSamplerParameterfv_int_int_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL30_glSamplerParameterfv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1 },
	{ "glGetSamplerParameteriv", (intptr_t) M_arc_backend_sdl_SdlGL30_glGetSamplerParameteriv_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glGetSamplerParameteriv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glGetSamplerParameterfv", (intptr_t) M_arc_backend_sdl_SdlGL30_glGetSamplerParameterfv_int_int_java_nio_FloatBuffer, VTABLE_arc_backend_sdl_SdlGL30_glGetSamplerParameterfv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1 },
	{ "glVertexAttribDivisor", (intptr_t) M_arc_backend_sdl_SdlGL30_glVertexAttribDivisor_int_int, VTABLE_arc_backend_sdl_SdlGL30_glVertexAttribDivisor_int_int, "(II)V", 1 },
	{ "glBindTransformFeedback", (intptr_t) M_arc_backend_sdl_SdlGL30_glBindTransformFeedback_int_int, VTABLE_arc_backend_sdl_SdlGL30_glBindTransformFeedback_int_int, "(II)V", 1 },
	{ "glDeleteTransformFeedbacks", (intptr_t) M_arc_backend_sdl_SdlGL30_glDeleteTransformFeedbacks_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glDeleteTransformFeedbacks_int_java_nio_IntBuffer, "(ILjava/nio/IntBuffer;)V", 1 },
	{ "glGenTransformFeedbacks", (intptr_t) M_arc_backend_sdl_SdlGL30_glGenTransformFeedbacks_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glGenTransformFeedbacks_int_java_nio_IntBuffer, "(ILjava/nio/IntBuffer;)V", 1 },
	{ "glIsTransformFeedback", (intptr_t) M_arc_backend_sdl_SdlGL30_glIsTransformFeedback_int_R_boolean, VTABLE_arc_backend_sdl_SdlGL30_glIsTransformFeedback_int_R_boolean, "(I)Z", 1 },
	{ "glPauseTransformFeedback", (intptr_t) M_arc_backend_sdl_SdlGL30_glPauseTransformFeedback, VTABLE_arc_backend_sdl_SdlGL30_glPauseTransformFeedback, "()V", 1 },
	{ "glResumeTransformFeedback", (intptr_t) M_arc_backend_sdl_SdlGL30_glResumeTransformFeedback, VTABLE_arc_backend_sdl_SdlGL30_glResumeTransformFeedback, "()V", 1 },
	{ "glProgramParameteri", (intptr_t) M_arc_backend_sdl_SdlGL30_glProgramParameteri_int_int_int, VTABLE_arc_backend_sdl_SdlGL30_glProgramParameteri_int_int_int, "(III)V", 1 },
	{ "glInvalidateFramebuffer", (intptr_t) M_arc_backend_sdl_SdlGL30_glInvalidateFramebuffer_int_int_java_nio_IntBuffer, VTABLE_arc_backend_sdl_SdlGL30_glInvalidateFramebuffer_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1 },
	{ "glInvalidateSubFramebuffer", (intptr_t) M_arc_backend_sdl_SdlGL30_glInvalidateSubFramebuffer_int_int_java_nio_IntBuffer_int_int_int_int, VTABLE_arc_backend_sdl_SdlGL30_glInvalidateSubFramebuffer_int_int_java_nio_IntBuffer_int_int_int_int, "(IILjava/nio/IntBuffer;IIII)V", 1 },
};

Class class_arc_backend_sdl_SdlGL30{
		.nativeName = (intptr_t) "arc/backend/sdl/SdlGL30",
		.parentClass = (intptr_t) &class_arc_backend_sdl_SdlGL20,
		.size = sizeof(arc_backend_sdl_SdlGL30),
		.classVtable = (intptr_t) vtable_arc_backend_sdl_SdlGL30,
		.staticInitializer = (intptr_t) clinit_arc_backend_sdl_SdlGL30,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_backend_sdl_SdlGL30,
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
		.methodCount = 84,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 245,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_backend_sdl_SdlGL30 = registerClass(&class_arc_backend_sdl_SdlGL30);

}
