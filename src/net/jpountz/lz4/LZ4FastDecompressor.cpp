#include "net/jpountz/lz4/LZ4FastDecompressor.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "net/jpountz/lz4/LZ4Decompressor.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "java/lang/Class.h"
#include "net/jpountz/lz4/LZ4FastDecompressor.h"

extern "C" {


void mark_net_jpountz_lz4_LZ4FastDecompressor(jobject object, jint mark, jint depth) {
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
	auto self = (net_jpountz_lz4_LZ4FastDecompressor *) object;
}

void clinit_net_jpountz_lz4_LZ4FastDecompressor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_net_jpountz_lz4_LZ4FastDecompressor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4FastDecompressor:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4FastDecompressor(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(35);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_Array1_byte_int_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4FastDecompressor:decompress", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(76);
	jint temp0 = (jint)((func_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_int_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_int_Array1_byte_int_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (frame[2].o), (jint(0)), (frame[3].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_Array1_byte_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4FastDecompressor:decompress", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(88);
	jint temp0 = (jint)((func_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_Array1_byte_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_Array1_byte_int_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_int_int_R_Array1_byte(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4FastDecompressor:decompress", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(111);
	jint temp0 = (jint)((func_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_int_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_int_Array1_byte_int_int_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[4].o), (jint(0)), (frame[3].i));
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_int_R_Array1_byte(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4FastDecompressor:decompress", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((func_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_int_int_R_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_int_int_R_Array1_byte])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_net_jpountz_lz4_LZ4FastDecompressor_decompress_java_nio_ByteBuffer_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4FastDecompressor:decompress", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[1].o));
	sp[2].o = frame[2].o;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[2].o));
	jint temp2 = (jint)((func_java_nio_ByteBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_ByteBuffer_remaining_R_int])(ctx, (frame[2].o));
	jint temp3 = (jint)((func_net_jpountz_lz4_LZ4FastDecompressor_decompress_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_net_jpountz_lz4_LZ4FastDecompressor_decompress_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int_R_int])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, temp1, temp2);
	frame[3].i = temp3;
	LINE_NUMBER(137);
	sp[0].o = frame[2].o;
	jint temp4 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, temp4);
	LINE_NUMBER(138);
	sp[0].o = frame[1].o;
	jint temp5 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp5 + (frame[3].i)));
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_net_jpountz_lz4_LZ4FastDecompressor_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4FastDecompressor:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_net_jpountz_lz4_LZ4FastDecompressor[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_net_jpountz_lz4_LZ4FastDecompressor_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_Array1_byte_int_R_int,
	(void *) M_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_Array1_byte_R_int,
	(void *) M_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_int_int_R_Array1_byte,
	(void *) M_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_int_R_Array1_byte,
	(void *) M_net_jpountz_lz4_LZ4FastDecompressor_decompress_java_nio_ByteBuffer_java_nio_ByteBuffer,
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
	{ "decompress", "([BI[BII)I" },
	{ "decompress", "(Ljava/nio/ByteBuffer;ILjava/nio/ByteBuffer;II)I" },
	{ "decompress", "([B[BI)I" },
	{ "decompress", "([B[B)I" },
	{ "decompress", "([BII)[B" },
	{ "decompress", "([BI)[B" },
	{ "decompress", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)V" },
};

static jclass interfaces[] { &class_net_jpountz_lz4_LZ4Decompressor, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_net_jpountz_lz4_LZ4FastDecompressor, 0, "()V", 1 },
	{ "decompress", 0, VTABLE_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_int_Array1_byte_int_int_R_int, "([BI[BII)I", 1025 },
	{ "decompress", 0, VTABLE_net_jpountz_lz4_LZ4FastDecompressor_decompress_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int_R_int, "(Ljava/nio/ByteBuffer;ILjava/nio/ByteBuffer;II)I", 1025 },
	{ "decompress", (intptr_t) M_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_Array1_byte_int_R_int, VTABLE_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_Array1_byte_int_R_int, "([B[BI)I", 17 },
	{ "decompress", (intptr_t) M_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_Array1_byte_R_int, VTABLE_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_Array1_byte_R_int, "([B[B)I", 17 },
	{ "decompress", (intptr_t) M_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_int_int_R_Array1_byte, VTABLE_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_int_int_R_Array1_byte, "([BII)[B", 17 },
	{ "decompress", (intptr_t) M_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_int_R_Array1_byte, VTABLE_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_int_R_Array1_byte, "([BI)[B", 17 },
	{ "decompress", (intptr_t) M_net_jpountz_lz4_LZ4FastDecompressor_decompress_java_nio_ByteBuffer_java_nio_ByteBuffer, VTABLE_net_jpountz_lz4_LZ4FastDecompressor_decompress_java_nio_ByteBuffer_java_nio_ByteBuffer, "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)V", 17 },
	{ "toString", (intptr_t) M_net_jpountz_lz4_LZ4FastDecompressor_toString_R_java_lang_String, VTABLE_net_jpountz_lz4_LZ4FastDecompressor_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_net_jpountz_lz4_LZ4FastDecompressor{
		.nativeName = (intptr_t) "net/jpountz/lz4/LZ4FastDecompressor",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(net_jpountz_lz4_LZ4FastDecompressor),
		.classVtable = (intptr_t) vtable_net_jpountz_lz4_LZ4FastDecompressor,
		.staticInitializer = (intptr_t) clinit_net_jpountz_lz4_LZ4FastDecompressor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_net_jpountz_lz4_LZ4FastDecompressor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_net_jpountz_lz4_LZ4FastDecompressor = registerClass(&class_net_jpountz_lz4_LZ4FastDecompressor);

}
