#include "arc/fx/filters/ThresholdFilter.h"
#include "arc/fx/filters/ThresholdFilter.h"
#include "arc/graphics/gl/Shader.h"
#include "arc/fx/FxFilter.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "java/lang/String.h"

extern "C" {


void mark_arc_fx_filters_ThresholdFilter(jobject object, jint mark, jint depth) {
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
	auto self = (arc_fx_filters_ThresholdFilter *) object;
}

void clinit_arc_fx_filters_ThresholdFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_fx_FxFilter(ctx);
}

void init_arc_fx_filters_ThresholdFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/ThresholdFilter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_filters_ThresholdFilter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_arc_fx_FxFilter_java_lang_String_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"screenspace"_j))), (((jobject) createStringLiteral(ctx, u8"threshold"_j))));
	LINE_NUMBER(6);
	((arc_fx_filters_ThresholdFilter *) NULL_CHECK((frame[0].o)))->F_gamma = (jfloat(0));
	LINE_NUMBER(10);
	((func_arc_fx_filters_ThresholdFilter_rebind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_fx_filters_ThresholdFilter_rebind])(ctx, (frame[0].o));
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_filters_ThresholdFilter_setParams(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/ThresholdFilter:setParams", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(15);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_setUniformi_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"u_texture0"_j))), (jint(0)));
	LINE_NUMBER(17);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_setUniformf_java_lang_String_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"treshold"_j))), ((jfloat)((arc_fx_filters_ThresholdFilter *) NULL_CHECK((frame[0].o)))->F_gamma));
	LINE_NUMBER(18);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_setUniformf_java_lang_String_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tresholdInvTx"_j))), ((jfloat(1)) / ((jfloat(1)) - ((jfloat)((arc_fx_filters_ThresholdFilter *) NULL_CHECK((frame[0].o)))->F_gamma))));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_fx_filters_ThresholdFilter[] {
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
	(void *) M_arc_fx_FxFilter_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_fx_FxFilter_setInput_arc_graphics_Texture_R_arc_fx_FxFilter,
	(void *) M_arc_fx_FxFilter_setInput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter,
	(void *) M_arc_fx_FxFilter_setOutput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter,
	(void *) M_arc_fx_FxFilter_resize_int_int,
	(void *) M_arc_fx_FxFilter_rebind,
	(void *) M_arc_fx_filters_ThresholdFilter_setParams,
	(void *) M_arc_fx_FxFilter_render,
	(void *) M_arc_fx_FxFilter_onBeforeRender,
	(void *) M_arc_fx_FxFilter_render_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer,
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
	{ "gamma", &class_float, offsetof(arc_fx_filters_ThresholdFilter, F_gamma), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_fx_filters_ThresholdFilter, 0, "()V", 1 },
	{ "setParams", (intptr_t) M_arc_fx_filters_ThresholdFilter_setParams, VTABLE_arc_fx_filters_ThresholdFilter_setParams, "()V", 1 },
};

Class class_arc_fx_filters_ThresholdFilter{
		.nativeName = (intptr_t) "arc/fx/filters/ThresholdFilter",
		.parentClass = (intptr_t) &class_arc_fx_FxFilter,
		.size = sizeof(arc_fx_filters_ThresholdFilter),
		.classVtable = (intptr_t) vtable_arc_fx_filters_ThresholdFilter,
		.staticInitializer = (intptr_t) clinit_arc_fx_filters_ThresholdFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_fx_filters_ThresholdFilter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_fx_filters_ThresholdFilter = registerClass(&class_arc_fx_filters_ThresholdFilter);

}
