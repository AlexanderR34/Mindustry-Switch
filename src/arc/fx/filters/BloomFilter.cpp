#include "arc/fx/filters/BloomFilter.h"
#include "arc/graphics/GLTexture.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "arc/util/Disposable.h"
#include "arc/fx/filters/BloomFilter.h"
#include "arc/graphics/Texture.h"
#include "arc/graphics/Pixmap_Format.h"
#include "arc/fx/filters/ThresholdFilter.h"
#include "arc/fx/FxFilter.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "java/lang/Object.h"
#include "arc/fx/filters/CombineFilter.h"
#include "arc/fx/util/PingPongBuffer.h"
#include "arc/fx/filters/GaussianBlurFilter.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/Blending.h"

extern "C" {


void mark_arc_fx_filters_BloomFilter(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_fx_FxFilter(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_fx_filters_BloomFilter *) object;
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
	if (self->F_blur)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blur)->clazz)->markFunction)((jobject) self->F_blur, mark, depth + 1);
	if (self->F_threshold)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_threshold)->clazz)->markFunction)((jobject) self->F_threshold, mark, depth + 1);
	if (self->F_combine)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_combine)->clazz)->markFunction)((jobject) self->F_combine, mark, depth + 1);
	if (self->F_blending)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blending)->clazz)->markFunction)((jobject) self->F_blending, mark, depth + 1);
}

void clinit_arc_fx_filters_BloomFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_fx_FxFilter(ctx);
}

void init_arc_fx_filters_BloomFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/BloomFilter:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_filters_BloomFilter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_arc_fx_FxFilter(ctx, (frame[0].o));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Blending(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Blending_normal;
	((arc_fx_filters_BloomFilter *) NULL_CHECK(sp[0].o))->F_blending = (jref) sp[1].o;
	LINE_NUMBER(18);
	((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_scaling = (jint(4));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_fx_util_PingPongBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_fx_util_PingPongBuffer);
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Pixmap$Format_rgba8888;
	init_arc_fx_util_PingPongBuffer_arc_graphics_Pixmap$Format(ctx, sp[1].o, sp[2].o);
	((arc_fx_filters_BloomFilter *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_fx_filters_GaussianBlurFilter(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_fx_filters_GaussianBlurFilter);
	init_arc_fx_filters_GaussianBlurFilter(ctx, sp[1].o);
	((arc_fx_filters_BloomFilter *) NULL_CHECK(sp[0].o))->F_blur = (jref) sp[1].o;
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_arc_fx_filters_ThresholdFilter(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_fx_filters_ThresholdFilter);
	init_arc_fx_filters_ThresholdFilter(ctx, sp[1].o);
	((arc_fx_filters_BloomFilter *) NULL_CHECK(sp[0].o))->F_threshold = (jref) sp[1].o;
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_arc_fx_filters_CombineFilter(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_fx_filters_CombineFilter);
	init_arc_fx_filters_CombineFilter(ctx, sp[1].o);
	((arc_fx_filters_BloomFilter *) NULL_CHECK(sp[0].o))->F_combine = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_blur;
	((func_arc_fx_filters_GaussianBlurFilter_setPasses_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_GaussianBlurFilter_setPasses_int])(ctx, sp[0].o, (jint(2)));
	LINE_NUMBER(28);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_blur;
	((func_arc_fx_filters_GaussianBlurFilter_setAmount_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_GaussianBlurFilter_setAmount_float])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(29);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_threshold;
	((arc_fx_filters_ThresholdFilter *) NULL_CHECK(sp[0].o))->F_gamma = (jfloat(0));
	LINE_NUMBER(30);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_combine;
	((arc_fx_filters_CombineFilter *) NULL_CHECK(sp[0].o))->F_src1int = (jfloat(1));
	LINE_NUMBER(31);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_combine;
	((arc_fx_filters_CombineFilter *) NULL_CHECK(sp[0].o))->F_src1sat = (jfloat(1));
	LINE_NUMBER(32);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_combine;
	((arc_fx_filters_CombineFilter *) NULL_CHECK(sp[0].o))->F_src2int = (jfloat(2));
	LINE_NUMBER(33);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_combine;
	((arc_fx_filters_CombineFilter *) NULL_CHECK(sp[0].o))->F_src2sat = (jfloat(2));
	LINE_NUMBER(34);
	((func_arc_fx_filters_BloomFilter_rebind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_fx_filters_BloomFilter_rebind])(ctx, (frame[0].o));
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_filters_BloomFilter_rebind(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/BloomFilter:rebind", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_threshold;
	((func_arc_fx_filters_ThresholdFilter_rebind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_ThresholdFilter_rebind])(ctx, sp[0].o);
	LINE_NUMBER(40);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_combine;
	((func_arc_fx_filters_CombineFilter_rebind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_CombineFilter_rebind])(ctx, sp[0].o);
	LINE_NUMBER(41);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_fx_util_PingPongBuffer_rebind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_rebind])(ctx, sp[0].o);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_filters_BloomFilter_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/BloomFilter:resize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(46);
	frame[1].i = ((frame[1].i) / ((jint)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_scaling));
	LINE_NUMBER(47);
	frame[2].i = ((frame[2].i) / ((jint)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_scaling));
	LINE_NUMBER(49);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_fx_util_PingPongBuffer_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_resize_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(50);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_blur;
	((func_arc_fx_filters_GaussianBlurFilter_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_GaussianBlurFilter_resize_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(51);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_threshold;
	((func_arc_fx_filters_ThresholdFilter_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_ThresholdFilter_resize_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(52);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_combine;
	((func_arc_fx_filters_CombineFilter_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_CombineFilter_resize_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_filters_BloomFilter_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/BloomFilter:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_combine;
	((func_arc_fx_filters_CombineFilter_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_CombineFilter_dispose])(ctx, sp[0].o);
	LINE_NUMBER(58);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_threshold;
	((func_arc_fx_filters_ThresholdFilter_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_ThresholdFilter_dispose])(ctx, sp[0].o);
	LINE_NUMBER(59);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_blur;
	((func_arc_fx_filters_GaussianBlurFilter_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_GaussianBlurFilter_dispose])(ctx, sp[0].o);
	LINE_NUMBER(60);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_fx_util_PingPongBuffer_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_dispose])(ctx, sp[0].o);
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_filters_BloomFilter_render_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/BloomFilter:render", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o));
	LINE_NUMBER(67);
	SM_arc_graphics_Gl_disable_int(ctx, (3042));
	LINE_NUMBER(69);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_fx_util_PingPongBuffer_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_begin])(ctx, sp[0].o);
	LINE_NUMBER(73);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_threshold;
	sp[0].o = (jobject)((func_arc_fx_filters_ThresholdFilter_setInput_arc_graphics_Texture_R_arc_fx_FxFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_ThresholdFilter_setInput_arc_graphics_Texture_R_arc_fx_FxFilter])(ctx, sp[0].o, (frame[3].o));
	sp[1].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[1].o = (jobject)((func_arc_fx_util_PingPongBuffer_getDstBuffer_R_arc_graphics_gl_FrameBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_getDstBuffer_R_arc_graphics_gl_FrameBuffer])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_fx_FxFilter_setOutput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_FxFilter_setOutput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter])(ctx, sp[0].o, sp[1].o);
	((func_arc_fx_FxFilter_render) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_FxFilter_render])(ctx, sp[0].o);
	LINE_NUMBER(74);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_fx_util_PingPongBuffer_swap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_swap])(ctx, sp[0].o);
	LINE_NUMBER(77);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_blur;
	sp[1].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_fx_filters_GaussianBlurFilter_render_arc_fx_util_PingPongBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_GaussianBlurFilter_render_arc_fx_util_PingPongBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(79);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_fx_util_PingPongBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(81);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_blending;
	clinit_arc_graphics_Blending(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Blending_disabled;
	if (sp[0].o == sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_blending;
	((func_arc_graphics_Blending_apply) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Blending_apply])(ctx, sp[0].o);
	}
label_8:;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_combine;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((arc_fx_filters_BloomFilter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[2].o = (jobject)((func_arc_fx_util_PingPongBuffer_getDstTexture_R_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_getDstTexture_R_arc_graphics_Texture])(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_fx_filters_CombineFilter_setInput_arc_graphics_Texture_arc_graphics_Texture_R_arc_fx_filters_CombineFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_CombineFilter_setInput_arc_graphics_Texture_arc_graphics_Texture_R_arc_fx_filters_CombineFilter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[1].o = frame[2].o;
	LINE_NUMBER(87);
	sp[0].o = (jobject)((func_arc_fx_filters_CombineFilter_setOutput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_CombineFilter_setOutput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(88);
	((func_arc_fx_FxFilter_render) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_FxFilter_render])(ctx, sp[0].o);
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_fx_filters_BloomFilter[] {
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
	(void *) M_arc_fx_filters_BloomFilter_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_fx_FxFilter_setInput_arc_graphics_Texture_R_arc_fx_FxFilter,
	(void *) M_arc_fx_FxFilter_setInput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter,
	(void *) M_arc_fx_FxFilter_setOutput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter,
	(void *) M_arc_fx_filters_BloomFilter_resize_int_int,
	(void *) M_arc_fx_filters_BloomFilter_rebind,
	(void *) M_arc_fx_FxFilter_setParams,
	(void *) M_arc_fx_FxFilter_render,
	(void *) M_arc_fx_FxFilter_onBeforeRender,
	(void *) M_arc_fx_filters_BloomFilter_render_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer,
	(void *) M_arc_fx_FxFilter_isDisabled_R_boolean,
	(void *) M_arc_fx_FxFilter_setDisabled_boolean,
	(void *) M_arc_fx_FxFilter_update,
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
	{ "setInput", "(Larc/graphics/Texture;)Larc/fx/FxFilter;" },
	{ "setInput", "(Larc/graphics/gl/FrameBuffer;)Larc/fx/FxFilter;" },
	{ "setOutput", "(Larc/graphics/gl/FrameBuffer;)Larc/fx/FxFilter;" },
	{ "resize", "(II)V" },
	{ "rebind", "()V" },
	{ "setParams", "()V" },
	{ "render", "()V" },
	{ "onBeforeRender", "()V" },
	{ "render", "(Larc/graphics/gl/FrameBuffer;Larc/graphics/gl/FrameBuffer;)V" },
	{ "isDisabled", "()Z" },
	{ "setDisabled", "(Z)V" },
	{ "update", "()V" },
};

static FieldMetadata fields[] {
	{ "buffer", &class_arc_fx_util_PingPongBuffer, offsetof(arc_fx_filters_BloomFilter, F_buffer), "Larc/fx/util/PingPongBuffer;", 17 },
	{ "blur", &class_arc_fx_filters_GaussianBlurFilter, offsetof(arc_fx_filters_BloomFilter, F_blur), "Larc/fx/filters/GaussianBlurFilter;", 17 },
	{ "threshold", &class_arc_fx_filters_ThresholdFilter, offsetof(arc_fx_filters_BloomFilter, F_threshold), "Larc/fx/filters/ThresholdFilter;", 17 },
	{ "combine", &class_arc_fx_filters_CombineFilter, offsetof(arc_fx_filters_BloomFilter, F_combine), "Larc/fx/filters/CombineFilter;", 17 },
	{ "blending", &class_arc_graphics_Blending, offsetof(arc_fx_filters_BloomFilter, F_blending), "Larc/graphics/Blending;", 1 },
	{ "scaling", &class_int, offsetof(arc_fx_filters_BloomFilter, F_scaling), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_fx_filters_BloomFilter, 0, "()V", 1 },
	{ "rebind", (intptr_t) M_arc_fx_filters_BloomFilter_rebind, VTABLE_arc_fx_filters_BloomFilter_rebind, "()V", 1 },
	{ "resize", (intptr_t) M_arc_fx_filters_BloomFilter_resize_int_int, VTABLE_arc_fx_filters_BloomFilter_resize_int_int, "(II)V", 1 },
	{ "dispose", (intptr_t) M_arc_fx_filters_BloomFilter_dispose, VTABLE_arc_fx_filters_BloomFilter_dispose, "()V", 1 },
	{ "render", (intptr_t) M_arc_fx_filters_BloomFilter_render_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer, VTABLE_arc_fx_filters_BloomFilter_render_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer, "(Larc/graphics/gl/FrameBuffer;Larc/graphics/gl/FrameBuffer;)V", 1 },
};

Class class_arc_fx_filters_BloomFilter{
		.nativeName = (intptr_t) "arc/fx/filters/BloomFilter",
		.parentClass = (intptr_t) &class_arc_fx_FxFilter,
		.size = sizeof(arc_fx_filters_BloomFilter),
		.classVtable = (intptr_t) vtable_arc_fx_filters_BloomFilter,
		.staticInitializer = (intptr_t) clinit_arc_fx_filters_BloomFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_fx_filters_BloomFilter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_fx_filters_BloomFilter = registerClass(&class_arc_fx_filters_BloomFilter);

}
