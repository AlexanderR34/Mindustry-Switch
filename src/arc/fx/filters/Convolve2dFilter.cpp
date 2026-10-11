#include "arc/fx/filters/Convolve2dFilter.h"
#include "arc/fx/filters/Convolve2dFilter.h"
#include "arc/fx/filters/Convolve1dFilter.h"
#include "arc/fx/FxFilter.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "arc/fx/util/PingPongBuffer.h"
#include "arc/fx/filters/MultipassVfxFilter.h"
#include "arc/graphics/Texture.h"

extern "C" {


void mark_arc_fx_filters_Convolve2dFilter(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_fx_filters_MultipassVfxFilter(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_fx_filters_Convolve2dFilter *) object;
	if (self->F_weights)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_weights)->clazz)->markFunction)((jobject) self->F_weights, mark, depth + 1);
	if (self->F_offsetsHor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_offsetsHor)->clazz)->markFunction)((jobject) self->F_offsetsHor, mark, depth + 1);
	if (self->F_offsetsVert)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_offsetsVert)->clazz)->markFunction)((jobject) self->F_offsetsVert, mark, depth + 1);
	if (self->F_hor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hor)->clazz)->markFunction)((jobject) self->F_hor, mark, depth + 1);
	if (self->F_vert)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vert)->clazz)->markFunction)((jobject) self->F_vert, mark, depth + 1);
}

void clinit_arc_fx_filters_Convolve2dFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_fx_filters_MultipassVfxFilter(ctx);
}

void init_arc_fx_filters_Convolve2dFilter_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/Convolve2dFilter:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_filters_Convolve2dFilter(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(16);
	init_arc_fx_filters_MultipassVfxFilter(ctx, (frame[0].o));
	LINE_NUMBER(17);
	((arc_fx_filters_Convolve2dFilter *) NULL_CHECK((frame[0].o)))->F_radius = (frame[1].i);
	LINE_NUMBER(18);
	((arc_fx_filters_Convolve2dFilter *) NULL_CHECK((frame[0].o)))->F_length = (((frame[1].i) * (jint(2))) + (jint(1)));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_fx_filters_Convolve1dFilter(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_fx_filters_Convolve1dFilter);
	init_arc_fx_filters_Convolve1dFilter_int(ctx, sp[1].o, ((jint)((arc_fx_filters_Convolve2dFilter *) NULL_CHECK((frame[0].o)))->F_length));
	((arc_fx_filters_Convolve2dFilter *) NULL_CHECK(sp[0].o))->F_hor = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_fx_filters_Convolve1dFilter(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_fx_filters_Convolve1dFilter);
	jint temp0 = (jint)((arc_fx_filters_Convolve2dFilter *) NULL_CHECK((frame[0].o)))->F_length;
	sp[2].o = (jobject)((arc_fx_filters_Convolve2dFilter *) NULL_CHECK((frame[0].o)))->F_hor;
	sp[2].o = (jobject)((arc_fx_filters_Convolve1dFilter *) NULL_CHECK(sp[2].o))->F_weights;
	init_arc_fx_filters_Convolve1dFilter_int_Array1_float(ctx, sp[1].o, temp0, sp[2].o);
	((arc_fx_filters_Convolve2dFilter *) NULL_CHECK(sp[0].o))->F_vert = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_fx_filters_Convolve2dFilter *) NULL_CHECK((frame[0].o)))->F_hor;
	sp[1].o = (jobject)((arc_fx_filters_Convolve1dFilter *) NULL_CHECK(sp[1].o))->F_weights;
	((arc_fx_filters_Convolve2dFilter *) NULL_CHECK(sp[0].o))->F_weights = (jref) sp[1].o;
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_fx_filters_Convolve2dFilter *) NULL_CHECK((frame[0].o)))->F_hor;
	sp[1].o = (jobject)((arc_fx_filters_Convolve1dFilter *) NULL_CHECK(sp[1].o))->F_offsets;
	((arc_fx_filters_Convolve2dFilter *) NULL_CHECK(sp[0].o))->F_offsetsHor = (jref) sp[1].o;
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_fx_filters_Convolve2dFilter *) NULL_CHECK((frame[0].o)))->F_vert;
	sp[1].o = (jobject)((arc_fx_filters_Convolve1dFilter *) NULL_CHECK(sp[1].o))->F_offsets;
	((arc_fx_filters_Convolve2dFilter *) NULL_CHECK(sp[0].o))->F_offsetsVert = (jref) sp[1].o;
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_filters_Convolve2dFilter_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/Convolve2dFilter:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((arc_fx_filters_Convolve2dFilter *) NULL_CHECK((frame[0].o)))->F_hor;
	((func_arc_fx_filters_Convolve1dFilter_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_Convolve1dFilter_dispose])(ctx, sp[0].o);
	LINE_NUMBER(31);
	sp[0].o = (jobject)((arc_fx_filters_Convolve2dFilter *) NULL_CHECK((frame[0].o)))->F_vert;
	((func_arc_fx_filters_Convolve1dFilter_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_Convolve1dFilter_dispose])(ctx, sp[0].o);
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_filters_Convolve2dFilter_setParams(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/Convolve2dFilter:setParams", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((arc_fx_filters_Convolve2dFilter *) NULL_CHECK((frame[0].o)))->F_hor;
	((func_arc_fx_filters_Convolve1dFilter_rebind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_Convolve1dFilter_rebind])(ctx, sp[0].o);
	LINE_NUMBER(37);
	sp[0].o = (jobject)((arc_fx_filters_Convolve2dFilter *) NULL_CHECK((frame[0].o)))->F_vert;
	((func_arc_fx_filters_Convolve1dFilter_rebind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_Convolve1dFilter_rebind])(ctx, sp[0].o);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_filters_Convolve2dFilter_render_arc_fx_util_PingPongBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/Convolve2dFilter:render", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((arc_fx_filters_Convolve2dFilter *) NULL_CHECK((frame[0].o)))->F_hor;
	sp[1].o = (jobject)((func_arc_fx_util_PingPongBuffer_getSrcTexture_R_arc_graphics_Texture) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_fx_util_PingPongBuffer_getSrcTexture_R_arc_graphics_Texture])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_fx_filters_Convolve1dFilter_setInput_arc_graphics_Texture_R_arc_fx_FxFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_Convolve1dFilter_setInput_arc_graphics_Texture_R_arc_fx_FxFilter])(ctx, sp[0].o, sp[1].o);
	sp[1].o = frame[1].o;
	LINE_NUMBER(43);
	sp[1].o = (jobject)((func_arc_fx_util_PingPongBuffer_getDstBuffer_R_arc_graphics_gl_FrameBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_getDstBuffer_R_arc_graphics_gl_FrameBuffer])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_fx_FxFilter_setOutput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_FxFilter_setOutput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(44);
	((func_arc_fx_FxFilter_render) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_FxFilter_render])(ctx, sp[0].o);
	LINE_NUMBER(46);
	((func_arc_fx_util_PingPongBuffer_swap) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_fx_util_PingPongBuffer_swap])(ctx, (frame[1].o));
	LINE_NUMBER(48);
	sp[0].o = (jobject)((arc_fx_filters_Convolve2dFilter *) NULL_CHECK((frame[0].o)))->F_vert;
	sp[1].o = (jobject)((func_arc_fx_util_PingPongBuffer_getSrcTexture_R_arc_graphics_Texture) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_fx_util_PingPongBuffer_getSrcTexture_R_arc_graphics_Texture])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_fx_filters_Convolve1dFilter_setInput_arc_graphics_Texture_R_arc_fx_FxFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_Convolve1dFilter_setInput_arc_graphics_Texture_R_arc_fx_FxFilter])(ctx, sp[0].o, sp[1].o);
	sp[1].o = frame[1].o;
	LINE_NUMBER(49);
	sp[1].o = (jobject)((func_arc_fx_util_PingPongBuffer_getDstBuffer_R_arc_graphics_gl_FrameBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_getDstBuffer_R_arc_graphics_gl_FrameBuffer])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_fx_FxFilter_setOutput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_FxFilter_setOutput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(50);
	((func_arc_fx_FxFilter_render) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_FxFilter_render])(ctx, sp[0].o);
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_fx_filters_Convolve2dFilter[] {
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
	(void *) M_arc_fx_filters_Convolve2dFilter_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_fx_filters_MultipassVfxFilter_resize_int_int,
	(void *) M_arc_fx_filters_Convolve2dFilter_setParams,
	(void *) M_arc_fx_filters_Convolve2dFilter_render_arc_fx_util_PingPongBuffer,
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
	{ "resize", "(II)V" },
	{ "setParams", "()V" },
	{ "render", "(Larc/fx/util/PingPongBuffer;)V" },
};

static FieldMetadata fields[] {
	{ "radius", &class_int, offsetof(arc_fx_filters_Convolve2dFilter, F_radius), "I", 17 },
	{ "length", &class_int, offsetof(arc_fx_filters_Convolve2dFilter, F_length), "I", 17 },
	{ "weights", getArrayClass(&class_float, 1), offsetof(arc_fx_filters_Convolve2dFilter, F_weights), "[F", 17 },
	{ "offsetsHor", getArrayClass(&class_float, 1), offsetof(arc_fx_filters_Convolve2dFilter, F_offsetsHor), "[F", 17 },
	{ "offsetsVert", getArrayClass(&class_float, 1), offsetof(arc_fx_filters_Convolve2dFilter, F_offsetsVert), "[F", 17 },
	{ "hor", &class_arc_fx_filters_Convolve1dFilter, offsetof(arc_fx_filters_Convolve2dFilter, F_hor), "Larc/fx/filters/Convolve1dFilter;", 1 },
	{ "vert", &class_arc_fx_filters_Convolve1dFilter, offsetof(arc_fx_filters_Convolve2dFilter, F_vert), "Larc/fx/filters/Convolve1dFilter;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_fx_filters_Convolve2dFilter_int, 0, "(I)V", 1 },
	{ "dispose", (intptr_t) M_arc_fx_filters_Convolve2dFilter_dispose, VTABLE_arc_fx_filters_Convolve2dFilter_dispose, "()V", 1 },
	{ "setParams", (intptr_t) M_arc_fx_filters_Convolve2dFilter_setParams, VTABLE_arc_fx_filters_Convolve2dFilter_setParams, "()V", 1 },
	{ "render", (intptr_t) M_arc_fx_filters_Convolve2dFilter_render_arc_fx_util_PingPongBuffer, VTABLE_arc_fx_filters_Convolve2dFilter_render_arc_fx_util_PingPongBuffer, "(Larc/fx/util/PingPongBuffer;)V", 1 },
};

Class class_arc_fx_filters_Convolve2dFilter{
		.nativeName = (intptr_t) "arc/fx/filters/Convolve2dFilter",
		.parentClass = (intptr_t) &class_arc_fx_filters_MultipassVfxFilter,
		.size = sizeof(arc_fx_filters_Convolve2dFilter),
		.classVtable = (intptr_t) vtable_arc_fx_filters_Convolve2dFilter,
		.staticInitializer = (intptr_t) clinit_arc_fx_filters_Convolve2dFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_fx_filters_Convolve2dFilter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_fx_filters_Convolve2dFilter = registerClass(&class_arc_fx_filters_Convolve2dFilter);

}
