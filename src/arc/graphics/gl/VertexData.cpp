#include "arc/graphics/gl/VertexData.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/nio/FloatBuffer.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/graphics/gl/VertexData.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/gl/IndexData.h"

extern "C" {


void mark_arc_graphics_gl_VertexData(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_gl_VertexData *) object;
}

void clinit_arc_graphics_gl_VertexData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_arc_graphics_gl_VertexData_render_arc_graphics_gl_IndexData_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexData:render", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(16);
	jint temp0 = (jint)((func_arc_graphics_gl_IndexData_size_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_IndexData, INDEX_arc_graphics_gl_IndexData_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 <= 0) goto label_1;
	}
	{
	LINE_NUMBER(17);
	jint temp0 = (frame[4].i) + (frame[3].i);
	jint temp1 = (jint)((func_arc_graphics_gl_IndexData_max_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_IndexData, INDEX_arc_graphics_gl_IndexData_max_R_int, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 <= temp1) goto label_3;
	}
	{
	LINE_NUMBER(18);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Mesh attempting to access memory outside of the index buffer (count: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[4].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", offset: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", max: "_j))));
	sp[2].o = frame[1].o;
	LINE_NUMBER(19);
	jint temp0 = (jint)((func_arc_graphics_gl_IndexData_max_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_IndexData, INDEX_arc_graphics_gl_IndexData_max_R_int, sp[2].o))(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(22);
	SM_arc_graphics_Gl_drawElements_int_int_int_int(ctx, (frame[2].i), (frame[4].i), (5123), ((frame[3].i) * (jint(2))));
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(24);
	SM_arc_graphics_Gl_drawArrays_int_int_int(ctx, (frame[2].i), (frame[3].i), (frame[4].i));
	}
label_6:;
	LINE_NUMBER(26);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_VertexData[] {
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
	(void *) nullptr,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_graphics_gl_VertexData_render_arc_graphics_gl_IndexData_int_int_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "render", "(Larc/graphics/gl/IndexData;III)V" },
	{ "size", "()I" },
	{ "max", "()I" },
	{ "set", "([FII)V" },
	{ "update", "(I[FII)V" },
	{ "buffer", "()Ljava/nio/FloatBuffer;" },
	{ "bind", "(Larc/graphics/gl/Shader;)V" },
	{ "unbind", "(Larc/graphics/gl/Shader;)V" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static MethodMetadata methods[] {
	{ "render", (intptr_t) M_arc_graphics_gl_VertexData_render_arc_graphics_gl_IndexData_int_int_int, INDEX_arc_graphics_gl_VertexData_render_arc_graphics_gl_IndexData_int_int_int, "(Larc/graphics/gl/IndexData;III)V", 1 },
	{ "size", 0, INDEX_arc_graphics_gl_VertexData_size_R_int, "()I", 1025 },
	{ "max", 0, INDEX_arc_graphics_gl_VertexData_max_R_int, "()I", 1025 },
	{ "set", 0, INDEX_arc_graphics_gl_VertexData_set_Array1_float_int_int, "([FII)V", 1025 },
	{ "update", 0, INDEX_arc_graphics_gl_VertexData_update_int_Array1_float_int_int, "(I[FII)V", 1025 },
	{ "buffer", 0, INDEX_arc_graphics_gl_VertexData_buffer_R_java_nio_FloatBuffer, "()Ljava/nio/FloatBuffer;", 1025 },
	{ "bind", 0, INDEX_arc_graphics_gl_VertexData_bind_arc_graphics_gl_Shader, "(Larc/graphics/gl/Shader;)V", 1025 },
	{ "unbind", 0, INDEX_arc_graphics_gl_VertexData_unbind_arc_graphics_gl_Shader, "(Larc/graphics/gl/Shader;)V", 1025 },
};

Class class_arc_graphics_gl_VertexData{
		.nativeName = (intptr_t) "arc/graphics/gl/VertexData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_gl_VertexData),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_VertexData,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_VertexData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_VertexData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_VertexData = registerClass(&class_arc_graphics_gl_VertexData);

}
