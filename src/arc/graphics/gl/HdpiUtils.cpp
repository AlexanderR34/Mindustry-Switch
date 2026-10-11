#include "arc/graphics/gl/HdpiUtils.h"
#include "arc/graphics/gl/HdpiUtils.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/Core.h"
#include "arc/graphics/gl/HdpiMode.h"
#include "arc/graphics/Gl.h"

extern "C" {

jobject SF_arc_graphics_gl_HdpiUtils_mode;

void mark_arc_graphics_gl_HdpiUtils(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_gl_HdpiUtils_mode)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_gl_HdpiUtils_mode)->clazz)->markFunction)((jobject) SF_arc_graphics_gl_HdpiUtils_mode, mark, depth + 1);
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
	auto self = (arc_graphics_gl_HdpiUtils *) object;
}

void init_arc_graphics_gl_HdpiUtils(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/HdpiUtils:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_HdpiUtils(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_gl_HdpiUtils_setMode_arc_graphics_gl_HdpiMode(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/HdpiUtils:setMode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_HdpiUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(32);
	clinit_arc_graphics_gl_HdpiUtils(ctx);
	SF_arc_graphics_gl_HdpiUtils_mode = (frame[0].o);
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_gl_HdpiUtils_glScissor_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/HdpiUtils:glScissor", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_HdpiUtils(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(40);
	clinit_arc_graphics_gl_HdpiUtils(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_HdpiUtils_mode;
	clinit_arc_graphics_gl_HdpiMode(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_HdpiMode_logical;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getBackBufferWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getBackBufferWidth_R_int])(ctx, sp[0].o);
	if (temp0 != temp1) goto label_2;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	LINE_NUMBER(41);
	jint temp0 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getBackBufferHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getBackBufferHeight_R_int])(ctx, sp[0].o);
	if (temp0 == temp1) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(42);
	jint temp0 = (jint)SM_arc_graphics_gl_HdpiUtils_toBackBufferX_int_R_int(ctx, (frame[0].i));
	jint temp1 = (jint)SM_arc_graphics_gl_HdpiUtils_toBackBufferY_int_R_int(ctx, (frame[1].i));
	jint temp2 = (jint)SM_arc_graphics_gl_HdpiUtils_toBackBufferX_int_R_int(ctx, (frame[2].i));
	jint temp3 = (jint)SM_arc_graphics_gl_HdpiUtils_toBackBufferY_int_R_int(ctx, (frame[3].i));
	SM_arc_graphics_Gl_scissor_int_int_int_int(ctx, temp0, temp1, temp2, temp3);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(44);
	SM_arc_graphics_Gl_scissor_int_int_int_int(ctx, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i));
	}
label_4:;
	LINE_NUMBER(46);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_graphics_gl_HdpiUtils_glViewport_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/HdpiUtils:glViewport", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_HdpiUtils(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(53);
	clinit_arc_graphics_gl_HdpiUtils(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_HdpiUtils_mode;
	clinit_arc_graphics_gl_HdpiMode(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_HdpiMode_logical;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getBackBufferWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getBackBufferWidth_R_int])(ctx, sp[0].o);
	if (temp0 != temp1) goto label_2;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	LINE_NUMBER(54);
	jint temp0 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getBackBufferHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getBackBufferHeight_R_int])(ctx, sp[0].o);
	if (temp0 == temp1) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(55);
	jint temp0 = (jint)SM_arc_graphics_gl_HdpiUtils_toBackBufferX_int_R_int(ctx, (frame[0].i));
	jint temp1 = (jint)SM_arc_graphics_gl_HdpiUtils_toBackBufferY_int_R_int(ctx, (frame[1].i));
	jint temp2 = (jint)SM_arc_graphics_gl_HdpiUtils_toBackBufferX_int_R_int(ctx, (frame[2].i));
	jint temp3 = (jint)SM_arc_graphics_gl_HdpiUtils_toBackBufferY_int_R_int(ctx, (frame[3].i));
	SM_arc_graphics_Gl_viewport_int_int_int_int(ctx, temp0, temp1, temp2, temp3);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(57);
	SM_arc_graphics_Gl_viewport_int_int_int_int(ctx, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i));
	}
label_4:;
	LINE_NUMBER(59);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_arc_graphics_gl_HdpiUtils_toLogicalX_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/HdpiUtils:toLogicalX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_HdpiUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(66);
	jint temp0 = frame[0].i;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp2 = jfloat((temp0 * temp1));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp3 = (jint)((func_arc_Graphics_getBackBufferWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getBackBufferWidth_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (jint((temp2 / (jfloat(temp3)))));
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_gl_HdpiUtils_toLogicalY_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/HdpiUtils:toLogicalY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_HdpiUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(74);
	jint temp0 = frame[0].i;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	jfloat temp2 = jfloat((temp0 * temp1));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp3 = (jint)((func_arc_Graphics_getBackBufferHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getBackBufferHeight_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (jint((temp2 / (jfloat(temp3)))));
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_gl_HdpiUtils_toBackBufferX_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/HdpiUtils:toBackBufferX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_HdpiUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(82);
	jint temp0 = frame[0].i;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getBackBufferWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getBackBufferWidth_R_int])(ctx, sp[0].o);
	jfloat temp2 = jfloat((temp0 * temp1));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp3 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (jint((temp2 / (jfloat(temp3)))));
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_gl_HdpiUtils_toBackBufferY_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/HdpiUtils:toBackBufferY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_HdpiUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(90);
	jint temp0 = frame[0].i;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getBackBufferHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getBackBufferHeight_R_int])(ctx, sp[0].o);
	jfloat temp2 = jfloat((temp0 * temp1));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp3 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (jint((temp2 / (jfloat(temp3)))));
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_gl_HdpiUtils(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/HdpiUtils:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_HdpiUtils(ctx);
	{
	LINE_NUMBER(14);
	clinit_arc_graphics_gl_HdpiMode(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_HdpiMode_logical;
	clinit_arc_graphics_gl_HdpiUtils(ctx);
	SF_arc_graphics_gl_HdpiUtils_mode = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_HdpiUtils[] {
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
};

static FieldMetadata fields[] {
	{ "mode", &class_arc_graphics_gl_HdpiMode, (intptr_t) &SF_arc_graphics_gl_HdpiUtils_mode, "Larc/graphics/gl/HdpiMode;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_gl_HdpiUtils, 0, "()V", 1 },
	{ "setMode", (intptr_t) SM_arc_graphics_gl_HdpiUtils_setMode_arc_graphics_gl_HdpiMode, 0, "(Larc/graphics/gl/HdpiMode;)V", 9 },
	{ "glScissor", (intptr_t) SM_arc_graphics_gl_HdpiUtils_glScissor_int_int_int_int, 0, "(IIII)V", 9 },
	{ "glViewport", (intptr_t) SM_arc_graphics_gl_HdpiUtils_glViewport_int_int_int_int, 0, "(IIII)V", 9 },
	{ "toLogicalX", (intptr_t) SM_arc_graphics_gl_HdpiUtils_toLogicalX_int_R_int, 0, "(I)I", 9 },
	{ "toLogicalY", (intptr_t) SM_arc_graphics_gl_HdpiUtils_toLogicalY_int_R_int, 0, "(I)I", 9 },
	{ "toBackBufferX", (intptr_t) SM_arc_graphics_gl_HdpiUtils_toBackBufferX_int_R_int, 0, "(I)I", 9 },
	{ "toBackBufferY", (intptr_t) SM_arc_graphics_gl_HdpiUtils_toBackBufferY_int_R_int, 0, "(I)I", 9 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_gl_HdpiUtils, 0, "()V", 8 },
};

Class class_arc_graphics_gl_HdpiUtils{
		.nativeName = (intptr_t) "arc/graphics/gl/HdpiUtils",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_gl_HdpiUtils),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_HdpiUtils,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_HdpiUtils,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_HdpiUtils,
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
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_HdpiUtils = registerClass(&class_arc_graphics_gl_HdpiUtils);

}
