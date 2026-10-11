#include "arc/graphics/gl/IndexArray.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "java/nio/Buffer.h"
#include "java/nio/ShortBuffer.h"
#include "arc/util/Buffers.h"
#include "arc/graphics/gl/IndexArray.h"
#include "arc/graphics/gl/IndexData.h"

extern "C" {


void mark_arc_graphics_gl_IndexArray(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_gl_IndexArray *) object;
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
	if (self->F_byteBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_byteBuffer)->clazz)->markFunction)((jobject) self->F_byteBuffer, mark, depth + 1);
}

void clinit_arc_graphics_gl_IndexArray(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_gl_IndexArray_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/IndexArray:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_IndexArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) != 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 2;
	((arc_graphics_gl_IndexArray *) NULL_CHECK(sp[0].o))->F_empty = sp[1].i;
	LINE_NUMBER(21);
	if (((jint)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_empty) == 0) goto label_5;
	}
	{
	LINE_NUMBER(22);
	frame[1].i = (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_util_Buffers_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer(ctx, ((frame[1].i) * (jint(2))));
	((arc_graphics_gl_IndexArray *) NULL_CHECK(sp[0].o))->F_byteBuffer = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((func_java_nio_ByteBuffer_asShortBuffer_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_asShortBuffer_R_java_nio_ShortBuffer])(ctx, sp[1].o);
	((arc_graphics_gl_IndexArray *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = (jobject)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(28);
	sp[0].o = (jobject)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_IndexArray_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/IndexArray:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	if (((jint)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_empty) == 0) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_ShortBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_limit_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_IndexArray_max_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/IndexArray:max", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	if (((jint)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_empty) == 0) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_ShortBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_capacity_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_gl_IndexArray_set_Array1_short_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/IndexArray:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(59);
	sp[0].o = (jobject)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_put_Array1_short_int_int_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_put_Array1_short_int_int_R_java_nio_ShortBuffer])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(60);
	sp[0].o = (jobject)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(61);
	sp[0].o = (jobject)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(62);
	sp[0].o = (jobject)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, ((frame[3].i) << (jint(1))));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_IndexArray_set_java_nio_ShortBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/IndexArray:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(67);
	jint temp0 = (jint)((func_java_nio_ShortBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ShortBuffer_position_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(68);
	sp[0].o = (jobject)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(69);
	sp[0].o = (jobject)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp1 = (jint)((func_java_nio_ShortBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ShortBuffer_remaining_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, temp1);
	LINE_NUMBER(70);
	sp[0].o = (jobject)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_put_java_nio_ShortBuffer_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_put_java_nio_ShortBuffer_R_java_nio_ShortBuffer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(71);
	sp[0].o = (jobject)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(72);
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ShortBuffer_position_int_R_java_nio_Buffer])(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(73);
	sp[0].o = (jobject)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(74);
	sp[0].o = (jobject)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp2 = (jint)((func_java_nio_ShortBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ShortBuffer_limit_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp2 << (jint(1))));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_IndexArray_update_int_Array1_short_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/IndexArray:update", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	LINE_NUMBER(80);
	sp[0].o = (jobject)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, ((frame[1].i) * (jint(2))));
	LINE_NUMBER(81);
	sp[0].o = frame[2].o;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_arc_util_Buffers_copy_Array1_short_int_java_nio_Buffer_int(ctx, sp[0].o, temp1, sp[1].o, (frame[4].i));
	LINE_NUMBER(82);
	sp[0].o = (jobject)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[5].i));
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_IndexArray_buffer_R_java_nio_ShortBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/IndexArray:buffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_IndexArray_bind(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/IndexArray:bind", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(100);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_gl_IndexArray_unbind(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/IndexArray:unbind", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(105);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_gl_IndexArray_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/IndexArray:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((arc_graphics_gl_IndexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_arc_util_Buffers_disposeUnsafeByteBuffer_java_nio_ByteBuffer(ctx, sp[0].o);
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_IndexArray[] {
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
	(void *) M_arc_graphics_gl_IndexArray_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_graphics_gl_IndexArray_size_R_int,
	(void *) M_arc_graphics_gl_IndexArray_max_R_int,
	(void *) M_arc_graphics_gl_IndexArray_set_Array1_short_int_int,
	(void *) M_arc_graphics_gl_IndexArray_set_java_nio_ShortBuffer,
	(void *) M_arc_graphics_gl_IndexArray_update_int_Array1_short_int_int,
	(void *) M_arc_graphics_gl_IndexArray_buffer_R_java_nio_ShortBuffer,
	(void *) M_arc_graphics_gl_IndexArray_bind,
	(void *) M_arc_graphics_gl_IndexArray_unbind,
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
	{ "size", "()I" },
	{ "max", "()I" },
	{ "set", "([SII)V" },
	{ "set", "(Ljava/nio/ShortBuffer;)V" },
	{ "update", "(I[SII)V" },
	{ "buffer", "()Ljava/nio/ShortBuffer;" },
	{ "bind", "()V" },
	{ "unbind", "()V" },
};

static jclass interfaces[] { &class_arc_graphics_gl_IndexData, };

static FieldMetadata fields[] {
	{ "buffer", &class_java_nio_ShortBuffer, offsetof(arc_graphics_gl_IndexArray, F_buffer), "Ljava/nio/ShortBuffer;", 16 },
	{ "byteBuffer", &class_java_nio_ByteBuffer, offsetof(arc_graphics_gl_IndexArray, F_byteBuffer), "Ljava/nio/ByteBuffer;", 16 },
	{ "empty", &class_boolean, offsetof(arc_graphics_gl_IndexArray, F_empty), "Z", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_gl_IndexArray_int, 0, "(I)V", 1 },
	{ "size", (intptr_t) M_arc_graphics_gl_IndexArray_size_R_int, VTABLE_arc_graphics_gl_IndexArray_size_R_int, "()I", 1 },
	{ "max", (intptr_t) M_arc_graphics_gl_IndexArray_max_R_int, VTABLE_arc_graphics_gl_IndexArray_max_R_int, "()I", 1 },
	{ "set", (intptr_t) M_arc_graphics_gl_IndexArray_set_Array1_short_int_int, VTABLE_arc_graphics_gl_IndexArray_set_Array1_short_int_int, "([SII)V", 1 },
	{ "set", (intptr_t) M_arc_graphics_gl_IndexArray_set_java_nio_ShortBuffer, VTABLE_arc_graphics_gl_IndexArray_set_java_nio_ShortBuffer, "(Ljava/nio/ShortBuffer;)V", 1 },
	{ "update", (intptr_t) M_arc_graphics_gl_IndexArray_update_int_Array1_short_int_int, VTABLE_arc_graphics_gl_IndexArray_update_int_Array1_short_int_int, "(I[SII)V", 1 },
	{ "buffer", (intptr_t) M_arc_graphics_gl_IndexArray_buffer_R_java_nio_ShortBuffer, VTABLE_arc_graphics_gl_IndexArray_buffer_R_java_nio_ShortBuffer, "()Ljava/nio/ShortBuffer;", 1 },
	{ "bind", (intptr_t) M_arc_graphics_gl_IndexArray_bind, VTABLE_arc_graphics_gl_IndexArray_bind, "()V", 1 },
	{ "unbind", (intptr_t) M_arc_graphics_gl_IndexArray_unbind, VTABLE_arc_graphics_gl_IndexArray_unbind, "()V", 1 },
	{ "dispose", (intptr_t) M_arc_graphics_gl_IndexArray_dispose, VTABLE_arc_graphics_gl_IndexArray_dispose, "()V", 1 },
};

Class class_arc_graphics_gl_IndexArray{
		.nativeName = (intptr_t) "arc/graphics/gl/IndexArray",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_gl_IndexArray),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_IndexArray,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_IndexArray,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_IndexArray,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_IndexArray = registerClass(&class_arc_graphics_gl_IndexArray);

}
