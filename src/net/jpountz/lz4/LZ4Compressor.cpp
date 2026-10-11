#include "net/jpountz/lz4/LZ4Compressor.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "net/jpountz/lz4/LZ4Utils.h"
#include "java/nio/Buffer.h"
#include "java/util/Arrays.h"
#include "java/lang/Class.h"
#include "net/jpountz/lz4/LZ4Compressor.h"

extern "C" {


void mark_net_jpountz_lz4_LZ4Compressor(jobject object, jint mark, jint depth) {
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
	auto self = (net_jpountz_lz4_LZ4Compressor *) object;
}

void clinit_net_jpountz_lz4_LZ4Compressor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_net_jpountz_lz4_LZ4Compressor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Compressor:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4Compressor(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_net_jpountz_lz4_LZ4Compressor_maxCompressedLength_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Compressor:maxCompressedLength", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(37);
	jint temp0 = (jint)SM_net_jpountz_lz4_LZ4Utils_maxCompressedLength_int_R_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_int_int_Array1_byte_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Compressor:compress", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(97);
	jint temp0 = (jint)((func_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_int_int_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_int_int_Array1_byte_int_int_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].o), (frame[5].i), ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (frame[5].i)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_Array1_byte_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Compressor:compress", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(110);
	jint temp0 = (jint)((func_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_int_int_Array1_byte_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_int_int_Array1_byte_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length), (frame[2].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_int_int_R_Array1_byte(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Compressor:compress", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(134);
	jint temp0 = (jint)((func_net_jpountz_lz4_LZ4Compressor_maxCompressedLength_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_net_jpountz_lz4_LZ4Compressor_maxCompressedLength_int_R_int])(ctx, (frame[0].o), (frame[3].i));
	frame[4].i = temp0;
	LINE_NUMBER(135);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(136);
	jint temp1 = (jint)((func_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_int_int_Array1_byte_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_int_int_Array1_byte_int_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[5].o), (jint(0)));
	frame[6].i = temp1;
	LINE_NUMBER(137);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_byte_int_R_Array1_byte(ctx, (frame[5].o), (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_R_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Compressor:compress", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((func_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_int_int_R_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_int_int_R_Array1_byte])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_net_jpountz_lz4_LZ4Compressor_compress_java_nio_ByteBuffer_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Compressor:compress", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(160);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_nio_ByteBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_remaining_R_int])(ctx, (frame[1].o));
	sp[2].o = frame[2].o;
	jint temp2 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[2].o));
	jint temp3 = (jint)((func_java_nio_ByteBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_ByteBuffer_remaining_R_int])(ctx, (frame[2].o));
	jint temp4 = (jint)((func_net_jpountz_lz4_LZ4Compressor_compress_java_nio_ByteBuffer_int_int_java_nio_ByteBuffer_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_net_jpountz_lz4_LZ4Compressor_compress_java_nio_ByteBuffer_int_int_java_nio_ByteBuffer_int_int_R_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o, temp2, temp3);
	frame[3].i = temp4;
	LINE_NUMBER(161);
	sp[0].o = frame[1].o;
	jint temp5 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, temp5);
	LINE_NUMBER(162);
	sp[0].o = frame[2].o;
	jint temp6 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp6 + (frame[3].i)));
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_net_jpountz_lz4_LZ4Compressor_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Compressor:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_net_jpountz_lz4_LZ4Compressor[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_net_jpountz_lz4_LZ4Compressor_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_net_jpountz_lz4_LZ4Compressor_maxCompressedLength_int_R_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_int_int_Array1_byte_int_R_int,
	(void *) M_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_Array1_byte_R_int,
	(void *) M_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_int_int_R_Array1_byte,
	(void *) M_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_R_Array1_byte,
	(void *) M_net_jpountz_lz4_LZ4Compressor_compress_java_nio_ByteBuffer_java_nio_ByteBuffer,
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
	{ "maxCompressedLength", "(I)I" },
	{ "compress", "([BII[BII)I" },
	{ "compress", "(Ljava/nio/ByteBuffer;IILjava/nio/ByteBuffer;II)I" },
	{ "compress", "([BII[BI)I" },
	{ "compress", "([B[B)I" },
	{ "compress", "([BII)[B" },
	{ "compress", "([B)[B" },
	{ "compress", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_net_jpountz_lz4_LZ4Compressor, 0, "()V", 1 },
	{ "maxCompressedLength", (intptr_t) M_net_jpountz_lz4_LZ4Compressor_maxCompressedLength_int_R_int, VTABLE_net_jpountz_lz4_LZ4Compressor_maxCompressedLength_int_R_int, "(I)I", 17 },
	{ "compress", 0, VTABLE_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_int_int_Array1_byte_int_int_R_int, "([BII[BII)I", 1025 },
	{ "compress", 0, VTABLE_net_jpountz_lz4_LZ4Compressor_compress_java_nio_ByteBuffer_int_int_java_nio_ByteBuffer_int_int_R_int, "(Ljava/nio/ByteBuffer;IILjava/nio/ByteBuffer;II)I", 1025 },
	{ "compress", (intptr_t) M_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_int_int_Array1_byte_int_R_int, VTABLE_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_int_int_Array1_byte_int_R_int, "([BII[BI)I", 17 },
	{ "compress", (intptr_t) M_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_Array1_byte_R_int, VTABLE_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_Array1_byte_R_int, "([B[B)I", 17 },
	{ "compress", (intptr_t) M_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_int_int_R_Array1_byte, VTABLE_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_int_int_R_Array1_byte, "([BII)[B", 17 },
	{ "compress", (intptr_t) M_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_R_Array1_byte, VTABLE_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_R_Array1_byte, "([B)[B", 17 },
	{ "compress", (intptr_t) M_net_jpountz_lz4_LZ4Compressor_compress_java_nio_ByteBuffer_java_nio_ByteBuffer, VTABLE_net_jpountz_lz4_LZ4Compressor_compress_java_nio_ByteBuffer_java_nio_ByteBuffer, "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)V", 17 },
	{ "toString", (intptr_t) M_net_jpountz_lz4_LZ4Compressor_toString_R_java_lang_String, VTABLE_net_jpountz_lz4_LZ4Compressor_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_net_jpountz_lz4_LZ4Compressor{
		.nativeName = (intptr_t) "net/jpountz/lz4/LZ4Compressor",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(net_jpountz_lz4_LZ4Compressor),
		.classVtable = (intptr_t) vtable_net_jpountz_lz4_LZ4Compressor,
		.staticInitializer = (intptr_t) clinit_net_jpountz_lz4_LZ4Compressor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_net_jpountz_lz4_LZ4Compressor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_net_jpountz_lz4_LZ4Compressor = registerClass(&class_net_jpountz_lz4_LZ4Compressor);

}
