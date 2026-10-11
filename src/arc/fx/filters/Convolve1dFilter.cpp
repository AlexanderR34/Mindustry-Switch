#include "arc/fx/filters/Convolve1dFilter.h"
#include "arc/fx/filters/Convolve1dFilter.h"
#include "arc/graphics/gl/Shader.h"
#include "arc/fx/FxFilter.h"
#include "arc/Core.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "java/lang/String.h"
#include "arc/Files.h"
#include "arc/files/Fi.h"

extern "C" {


void mark_arc_fx_filters_Convolve1dFilter(jobject object, jint mark, jint depth) {
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
	auto self = (arc_fx_filters_Convolve1dFilter *) object;
	if (self->F_weights)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_weights)->clazz)->markFunction)((jobject) self->F_weights, mark, depth + 1);
	if (self->F_offsets)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_offsets)->clazz)->markFunction)((jobject) self->F_offsets, mark, depth + 1);
}

void clinit_arc_fx_filters_Convolve1dFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_fx_FxFilter(ctx);
}

void init_arc_fx_filters_Convolve1dFilter_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/Convolve1dFilter:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_filters_Convolve1dFilter(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[1].i));
	sp[2].o = (jobject) createArray(ctx, &class_float, ((frame[1].i) * (jint(2))));
	init_arc_fx_filters_Convolve1dFilter_int_Array1_float_Array1_float(ctx, sp[0].o, temp0, sp[1].o, sp[2].o);
	LINE_NUMBER(13);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_fx_filters_Convolve1dFilter_int_Array1_float(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/Convolve1dFilter:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_filters_Convolve1dFilter(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject) createArray(ctx, &class_float, ((frame[1].i) * (jint(2))));
	init_arc_fx_filters_Convolve1dFilter_int_Array1_float_Array1_float(ctx, sp[0].o, temp0, sp[1].o, sp[2].o);
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_fx_filters_Convolve1dFilter_int_Array1_float_Array1_float(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/Convolve1dFilter:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_filters_Convolve1dFilter(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"vfxshaders/screenspace.vert"_j));
	LINE_NUMBER(21);
	sp[1].o = (jobject)((func_arc_Files_classpath_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_classpath_java_lang_String_R_arc_files_Fi, sp[1].o))(ctx, sp[1].o, sp[2].o);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_files;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"vfxshaders/convolve-1d.frag"_j));
	LINE_NUMBER(22);
	sp[2].o = (jobject)((func_arc_Files_classpath_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_classpath_java_lang_String_R_arc_files_Fi, sp[2].o))(ctx, sp[2].o, sp[3].o);
	clinit_java_lang_StringBuilder(ctx);
	sp[3].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[3].o);
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"#define LENGTH "_j))));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[3].o, (frame[1].i));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[3].o);
	LINE_NUMBER(20);
	sp[1].o = (jobject)SM_arc_fx_FxFilter_compileShader_arc_files_Fi_arc_files_Fi_java_lang_String_R_arc_graphics_gl_Shader(ctx, sp[1].o, sp[2].o, sp[3].o);
	init_arc_fx_FxFilter_arc_graphics_gl_Shader(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(24);
	((func_arc_fx_filters_Convolve1dFilter_setWeights_int_Array1_float_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_fx_filters_Convolve1dFilter_setWeights_int_Array1_float_Array1_float])(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].o));
	LINE_NUMBER(25);
	((func_arc_fx_filters_Convolve1dFilter_rebind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_fx_filters_Convolve1dFilter_rebind])(ctx, (frame[0].o));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_filters_Convolve1dFilter_setWeights_int_Array1_float_Array1_float(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/Convolve1dFilter:setWeights", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(29);
	((arc_fx_filters_Convolve1dFilter *) NULL_CHECK((frame[0].o)))->F_weights = (jref) (frame[2].o);
	LINE_NUMBER(30);
	((arc_fx_filters_Convolve1dFilter *) NULL_CHECK((frame[0].o)))->F_length = (frame[1].i);
	LINE_NUMBER(31);
	((arc_fx_filters_Convolve1dFilter *) NULL_CHECK((frame[0].o)))->F_offsets = (jref) (frame[3].o);
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_filters_Convolve1dFilter_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/Convolve1dFilter:dispose", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	M_arc_fx_FxFilter_dispose(ctx, (frame[0].o));
	LINE_NUMBER(37);
	((arc_fx_filters_Convolve1dFilter *) NULL_CHECK((frame[0].o)))->F_weights = (jref) (jobject(nullptr));
	LINE_NUMBER(38);
	((arc_fx_filters_Convolve1dFilter *) NULL_CHECK((frame[0].o)))->F_offsets = (jref) (jobject(nullptr));
	LINE_NUMBER(39);
	((arc_fx_filters_Convolve1dFilter *) NULL_CHECK((frame[0].o)))->F_length = (jint(0));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_filters_Convolve1dFilter_setParams(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/Convolve1dFilter:setParams", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_setUniformi_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"u_texture0"_j))), (jint(0)));
	LINE_NUMBER(45);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_shader;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"SampleWeights"_j));
	sp[2].o = (jobject)((arc_fx_filters_Convolve1dFilter *) NULL_CHECK((frame[0].o)))->F_weights;
	((func_arc_graphics_gl_Shader_setUniform1fv_java_lang_String_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniform1fv_java_lang_String_Array1_float_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)), ((jint)((arc_fx_filters_Convolve1dFilter *) NULL_CHECK((frame[0].o)))->F_length));
	LINE_NUMBER(46);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_shader;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"SampleOffsets"_j));
	sp[2].o = (jobject)((arc_fx_filters_Convolve1dFilter *) NULL_CHECK((frame[0].o)))->F_offsets;
	((func_arc_graphics_gl_Shader_setUniform2fv_java_lang_String_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniform2fv_java_lang_String_Array1_float_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)), (((jint)((arc_fx_filters_Convolve1dFilter *) NULL_CHECK((frame[0].o)))->F_length) * (jint(2))));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_fx_filters_Convolve1dFilter[] {
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
	(void *) M_arc_fx_filters_Convolve1dFilter_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_fx_FxFilter_setInput_arc_graphics_Texture_R_arc_fx_FxFilter,
	(void *) M_arc_fx_FxFilter_setInput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter,
	(void *) M_arc_fx_FxFilter_setOutput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter,
	(void *) M_arc_fx_FxFilter_resize_int_int,
	(void *) M_arc_fx_FxFilter_rebind,
	(void *) M_arc_fx_filters_Convolve1dFilter_setParams,
	(void *) M_arc_fx_FxFilter_render,
	(void *) M_arc_fx_FxFilter_onBeforeRender,
	(void *) M_arc_fx_FxFilter_render_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer,
	(void *) M_arc_fx_FxFilter_isDisabled_R_boolean,
	(void *) M_arc_fx_FxFilter_setDisabled_boolean,
	(void *) M_arc_fx_FxFilter_update,
	(void *) M_arc_fx_filters_Convolve1dFilter_setWeights_int_Array1_float_Array1_float,
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
	{ "setWeights", "(I[F[F)V" },
};

static FieldMetadata fields[] {
	{ "length", &class_int, offsetof(arc_fx_filters_Convolve1dFilter, F_length), "I", 1 },
	{ "weights", getArrayClass(&class_float, 1), offsetof(arc_fx_filters_Convolve1dFilter, F_weights), "[F", 1 },
	{ "offsets", getArrayClass(&class_float, 1), offsetof(arc_fx_filters_Convolve1dFilter, F_offsets), "[F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_fx_filters_Convolve1dFilter_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_fx_filters_Convolve1dFilter_int_Array1_float, 0, "(I[F)V", 1 },
	{ "<init>", (intptr_t) init_arc_fx_filters_Convolve1dFilter_int_Array1_float_Array1_float, 0, "(I[F[F)V", 1 },
	{ "setWeights", (intptr_t) M_arc_fx_filters_Convolve1dFilter_setWeights_int_Array1_float_Array1_float, VTABLE_arc_fx_filters_Convolve1dFilter_setWeights_int_Array1_float_Array1_float, "(I[F[F)V", 1 },
	{ "dispose", (intptr_t) M_arc_fx_filters_Convolve1dFilter_dispose, VTABLE_arc_fx_filters_Convolve1dFilter_dispose, "()V", 1 },
	{ "setParams", (intptr_t) M_arc_fx_filters_Convolve1dFilter_setParams, VTABLE_arc_fx_filters_Convolve1dFilter_setParams, "()V", 1 },
};

Class class_arc_fx_filters_Convolve1dFilter{
		.nativeName = (intptr_t) "arc/fx/filters/Convolve1dFilter",
		.parentClass = (intptr_t) &class_arc_fx_FxFilter,
		.size = sizeof(arc_fx_filters_Convolve1dFilter),
		.classVtable = (intptr_t) vtable_arc_fx_filters_Convolve1dFilter,
		.staticInitializer = (intptr_t) clinit_arc_fx_filters_Convolve1dFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_fx_filters_Convolve1dFilter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_fx_filters_Convolve1dFilter = registerClass(&class_arc_fx_filters_Convolve1dFilter);

}
