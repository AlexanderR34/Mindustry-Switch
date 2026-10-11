#include "arc/fx/util/FxBufferRenderer.h"
#include "arc/graphics/gl/Shader.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "arc/Core.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "java/lang/String.h"
#include "arc/graphics/Gl.h"
#include "arc/fx/util/FxBufferRenderer.h"

extern "C" {


void mark_arc_fx_util_FxBufferRenderer(jobject object, jint mark, jint depth) {
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
	auto self = (arc_fx_util_FxBufferRenderer *) object;
	if (self->F_shader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shader)->clazz)->markFunction)((jobject) self->F_shader, mark, depth + 1);
}

void clinit_arc_fx_util_FxBufferRenderer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_fx_util_FxBufferRenderer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/util/FxBufferRenderer:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_util_FxBufferRenderer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_Shader(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_Shader);
	init_arc_graphics_gl_Shader_java_lang_String_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"attribute vec4 a_position;\nattribute vec2 a_texCoord0;\nvarying vec2 v_texCoords;\nvoid main(){\n    v_texCoords = a_texCoord0;\n    gl_Position = a_position;\n}"_j))), (((jobject) createStringLiteral(ctx, u8"varying vec2 v_texCoords;\nuniform sampler2D u_texture0;\nvoid main(){\n    gl_FragColor = texture2D(u_texture0, v_texCoords);\n}"_j))));
	((arc_fx_util_FxBufferRenderer *) NULL_CHECK(sp[0].o))->F_shader = (jref) sp[1].o;
	LINE_NUMBER(33);
	((func_arc_fx_util_FxBufferRenderer_rebind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_fx_util_FxBufferRenderer_rebind])(ctx, (frame[0].o));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_util_FxBufferRenderer_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/util/FxBufferRenderer:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((arc_fx_util_FxBufferRenderer *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_dispose])(ctx, sp[0].o);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_util_FxBufferRenderer_rebind(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/util/FxBufferRenderer:rebind", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((arc_fx_util_FxBufferRenderer *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	LINE_NUMBER(43);
	sp[0].o = (jobject)((arc_fx_util_FxBufferRenderer *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_setUniformi_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"u_texture0"_j))), (jint(0)));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_util_FxBufferRenderer_renderToScreen_arc_graphics_gl_FrameBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/util/FxBufferRenderer:renderToScreen", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getBackBufferWidth_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Graphics_getBackBufferWidth_R_int])(ctx, sp[2].o);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_graphics;
	jint temp3 = (jint)((func_arc_Graphics_getBackBufferHeight_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Graphics_getBackBufferHeight_R_int])(ctx, sp[2].o);
	((func_arc_fx_util_FxBufferRenderer_renderToScreen_arc_graphics_gl_FrameBuffer_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_util_FxBufferRenderer_renderToScreen_arc_graphics_gl_FrameBuffer_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3);
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_util_FxBufferRenderer_renderToScreen_arc_graphics_gl_FrameBuffer_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/util/FxBufferRenderer:renderToScreen", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(51);
	SM_arc_graphics_Gl_viewport_int_int_int_int(ctx, (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(53);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_fx_util_FxBufferRenderer *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_util_FxBufferRenderer_renderToFbo_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/util/FxBufferRenderer:renderToFbo", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(57);
	((func_arc_graphics_gl_FrameBuffer_begin) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin])(ctx, (frame[2].o));
	LINE_NUMBER(58);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_fx_util_FxBufferRenderer *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(59);
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, (frame[2].o));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_fx_util_FxBufferRenderer[] {
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
	(void *) M_arc_fx_util_FxBufferRenderer_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_fx_util_FxBufferRenderer_rebind,
	(void *) M_arc_fx_util_FxBufferRenderer_renderToScreen_arc_graphics_gl_FrameBuffer,
	(void *) M_arc_fx_util_FxBufferRenderer_renderToScreen_arc_graphics_gl_FrameBuffer_int_int_int_int,
	(void *) M_arc_fx_util_FxBufferRenderer_renderToFbo_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer,
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
	{ "rebind", "()V" },
	{ "renderToScreen", "(Larc/graphics/gl/FrameBuffer;)V" },
	{ "renderToScreen", "(Larc/graphics/gl/FrameBuffer;IIII)V" },
	{ "renderToFbo", "(Larc/graphics/gl/FrameBuffer;Larc/graphics/gl/FrameBuffer;)V" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static FieldMetadata fields[] {
	{ "shader", &class_arc_graphics_gl_Shader, offsetof(arc_fx_util_FxBufferRenderer, F_shader), "Larc/graphics/gl/Shader;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_fx_util_FxBufferRenderer, 0, "()V", 1 },
	{ "dispose", (intptr_t) M_arc_fx_util_FxBufferRenderer_dispose, VTABLE_arc_fx_util_FxBufferRenderer_dispose, "()V", 1 },
	{ "rebind", (intptr_t) M_arc_fx_util_FxBufferRenderer_rebind, VTABLE_arc_fx_util_FxBufferRenderer_rebind, "()V", 1 },
	{ "renderToScreen", (intptr_t) M_arc_fx_util_FxBufferRenderer_renderToScreen_arc_graphics_gl_FrameBuffer, VTABLE_arc_fx_util_FxBufferRenderer_renderToScreen_arc_graphics_gl_FrameBuffer, "(Larc/graphics/gl/FrameBuffer;)V", 1 },
	{ "renderToScreen", (intptr_t) M_arc_fx_util_FxBufferRenderer_renderToScreen_arc_graphics_gl_FrameBuffer_int_int_int_int, VTABLE_arc_fx_util_FxBufferRenderer_renderToScreen_arc_graphics_gl_FrameBuffer_int_int_int_int, "(Larc/graphics/gl/FrameBuffer;IIII)V", 1 },
	{ "renderToFbo", (intptr_t) M_arc_fx_util_FxBufferRenderer_renderToFbo_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer, VTABLE_arc_fx_util_FxBufferRenderer_renderToFbo_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer, "(Larc/graphics/gl/FrameBuffer;Larc/graphics/gl/FrameBuffer;)V", 1 },
};

Class class_arc_fx_util_FxBufferRenderer{
		.nativeName = (intptr_t) "arc/fx/util/FxBufferRenderer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_fx_util_FxBufferRenderer),
		.classVtable = (intptr_t) vtable_arc_fx_util_FxBufferRenderer,
		.staticInitializer = (intptr_t) clinit_arc_fx_util_FxBufferRenderer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_fx_util_FxBufferRenderer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_fx_util_FxBufferRenderer = registerClass(&class_arc_fx_util_FxBufferRenderer);

}
