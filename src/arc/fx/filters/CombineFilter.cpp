#include "arc/fx/filters/CombineFilter.h"
#include "arc/graphics/GLTexture.h"
#include "arc/graphics/gl/Shader.h"
#include "arc/fx/FxFilter.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "java/lang/String.h"
#include "arc/fx/filters/CombineFilter.h"
#include "arc/graphics/Texture.h"

extern "C" {


void mark_arc_fx_filters_CombineFilter(jobject object, jint mark, jint depth) {
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
	auto self = (arc_fx_filters_CombineFilter *) object;
	if (self->F_inputTexture2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_inputTexture2)->clazz)->markFunction)((jobject) self->F_inputTexture2, mark, depth + 1);
}

void clinit_arc_fx_filters_CombineFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_fx_FxFilter(ctx);
}

void init_arc_fx_filters_CombineFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/CombineFilter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_filters_CombineFilter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_arc_fx_FxFilter_java_lang_String_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"screenspace"_j))), (((jobject) createStringLiteral(ctx, u8"combine"_j))));
	LINE_NUMBER(8);
	((arc_fx_filters_CombineFilter *) NULL_CHECK((frame[0].o)))->F_src1int = (jfloat(1));
	((arc_fx_filters_CombineFilter *) NULL_CHECK((frame[0].o)))->F_src1sat = (jfloat(1));
	((arc_fx_filters_CombineFilter *) NULL_CHECK((frame[0].o)))->F_src2int = (jfloat(1));
	((arc_fx_filters_CombineFilter *) NULL_CHECK((frame[0].o)))->F_src2sat = (jfloat(1));
	LINE_NUMBER(9);
	((arc_fx_filters_CombineFilter *) NULL_CHECK((frame[0].o)))->F_inputTexture2 = (jref) (jobject(nullptr));
	LINE_NUMBER(13);
	((func_arc_fx_filters_CombineFilter_rebind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_fx_filters_CombineFilter_rebind])(ctx, (frame[0].o));
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_fx_filters_CombineFilter_setInput_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer_R_arc_fx_filters_CombineFilter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/CombineFilter:setInput", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, (frame[1].o));
	((arc_fx_FxFilter *) NULL_CHECK(sp[0].o))->F_inputTexture = (jref) (checkCast(ctx, &class_arc_graphics_Texture, sp[1].o));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, (frame[2].o));
	((arc_fx_filters_CombineFilter *) NULL_CHECK(sp[0].o))->F_inputTexture2 = (jref) (checkCast(ctx, &class_arc_graphics_Texture, sp[1].o));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_fx_filters_CombineFilter_setInput_arc_graphics_Texture_arc_graphics_Texture_R_arc_fx_filters_CombineFilter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/CombineFilter:setInput", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(23);
	((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_inputTexture = (jref) (frame[1].o);
	LINE_NUMBER(24);
	((arc_fx_filters_CombineFilter *) NULL_CHECK((frame[0].o)))->F_inputTexture2 = (jref) (frame[2].o);
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_fx_filters_CombineFilter_setParams(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/CombineFilter:setParams", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_setUniformi_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"u_texture0"_j))), (jint(0)));
	LINE_NUMBER(31);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_setUniformi_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"u_texture1"_j))), (jint(1)));
	LINE_NUMBER(32);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_setUniformf_java_lang_String_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"u_src1Intensity"_j))), ((jfloat)((arc_fx_filters_CombineFilter *) NULL_CHECK((frame[0].o)))->F_src1int));
	LINE_NUMBER(33);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_setUniformf_java_lang_String_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"u_src2Intensity"_j))), ((jfloat)((arc_fx_filters_CombineFilter *) NULL_CHECK((frame[0].o)))->F_src2int));
	LINE_NUMBER(34);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_setUniformf_java_lang_String_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"u_src1Saturation"_j))), ((jfloat)((arc_fx_filters_CombineFilter *) NULL_CHECK((frame[0].o)))->F_src1sat));
	LINE_NUMBER(35);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_setUniformf_java_lang_String_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"u_src2Saturation"_j))), ((jfloat)((arc_fx_filters_CombineFilter *) NULL_CHECK((frame[0].o)))->F_src2sat));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_filters_CombineFilter_onBeforeRender(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/CombineFilter:onBeforeRender", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_inputTexture;
	((func_arc_graphics_Texture_bind_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_bind_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(41);
	sp[0].o = (jobject)((arc_fx_filters_CombineFilter *) NULL_CHECK((frame[0].o)))->F_inputTexture2;
	((func_arc_graphics_Texture_bind_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_bind_int])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_fx_filters_CombineFilter[] {
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
	(void *) M_arc_fx_filters_CombineFilter_setParams,
	(void *) M_arc_fx_FxFilter_render,
	(void *) M_arc_fx_filters_CombineFilter_onBeforeRender,
	(void *) M_arc_fx_FxFilter_render_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer,
	(void *) M_arc_fx_FxFilter_isDisabled_R_boolean,
	(void *) M_arc_fx_FxFilter_setDisabled_boolean,
	(void *) M_arc_fx_FxFilter_update,
	(void *) M_arc_fx_filters_CombineFilter_setInput_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer_R_arc_fx_filters_CombineFilter,
	(void *) M_arc_fx_filters_CombineFilter_setInput_arc_graphics_Texture_arc_graphics_Texture_R_arc_fx_filters_CombineFilter,
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
	{ "setInput", "(Larc/graphics/gl/FrameBuffer;Larc/graphics/gl/FrameBuffer;)Larc/fx/filters/CombineFilter;" },
	{ "setInput", "(Larc/graphics/Texture;Larc/graphics/Texture;)Larc/fx/filters/CombineFilter;" },
};

static FieldMetadata fields[] {
	{ "src1int", &class_float, offsetof(arc_fx_filters_CombineFilter, F_src1int), "F", 1 },
	{ "src1sat", &class_float, offsetof(arc_fx_filters_CombineFilter, F_src1sat), "F", 1 },
	{ "src2int", &class_float, offsetof(arc_fx_filters_CombineFilter, F_src2int), "F", 1 },
	{ "src2sat", &class_float, offsetof(arc_fx_filters_CombineFilter, F_src2sat), "F", 1 },
	{ "inputTexture2", &class_arc_graphics_Texture, offsetof(arc_fx_filters_CombineFilter, F_inputTexture2), "Larc/graphics/Texture;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_fx_filters_CombineFilter, 0, "()V", 1 },
	{ "setInput", (intptr_t) M_arc_fx_filters_CombineFilter_setInput_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer_R_arc_fx_filters_CombineFilter, VTABLE_arc_fx_filters_CombineFilter_setInput_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer_R_arc_fx_filters_CombineFilter, "(Larc/graphics/gl/FrameBuffer;Larc/graphics/gl/FrameBuffer;)Larc/fx/filters/CombineFilter;", 1 },
	{ "setInput", (intptr_t) M_arc_fx_filters_CombineFilter_setInput_arc_graphics_Texture_arc_graphics_Texture_R_arc_fx_filters_CombineFilter, VTABLE_arc_fx_filters_CombineFilter_setInput_arc_graphics_Texture_arc_graphics_Texture_R_arc_fx_filters_CombineFilter, "(Larc/graphics/Texture;Larc/graphics/Texture;)Larc/fx/filters/CombineFilter;", 1 },
	{ "setParams", (intptr_t) M_arc_fx_filters_CombineFilter_setParams, VTABLE_arc_fx_filters_CombineFilter_setParams, "()V", 1 },
	{ "onBeforeRender", (intptr_t) M_arc_fx_filters_CombineFilter_onBeforeRender, VTABLE_arc_fx_filters_CombineFilter_onBeforeRender, "()V", 4 },
};

Class class_arc_fx_filters_CombineFilter{
		.nativeName = (intptr_t) "arc/fx/filters/CombineFilter",
		.parentClass = (intptr_t) &class_arc_fx_FxFilter,
		.size = sizeof(arc_fx_filters_CombineFilter),
		.classVtable = (intptr_t) vtable_arc_fx_filters_CombineFilter,
		.staticInitializer = (intptr_t) clinit_arc_fx_filters_CombineFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_fx_filters_CombineFilter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_fx_filters_CombineFilter = registerClass(&class_arc_fx_filters_CombineFilter);

}
