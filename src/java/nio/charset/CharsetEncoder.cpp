#include "java/nio/charset/CharsetEncoder.h"
#include "java/nio/charset/CharsetEncoder.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/nio/CharBuffer.h"
#include "java/nio/charset/CoderResult.h"
#include "java/nio/charset/CodingErrorAction.h"
#include "java/io/UnsupportedOperationException.h"

extern "C" {


void mark_java_nio_charset_CharsetEncoder(jobject object, jint mark, jint depth) {
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
	auto self = (java_nio_charset_CharsetEncoder *) object;
}

void clinit_java_nio_charset_CharsetEncoder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_nio_charset_CharsetEncoder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetEncoder:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_charset_CharsetEncoder(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_charset_CharsetEncoder_onMalformedInput_java_nio_charset_CodingErrorAction_R_java_nio_charset_CharsetEncoder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetEncoder:onMalformedInput", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	clinit_java_io_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UnsupportedOperationException);
	init_java_io_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_nio_charset_CharsetEncoder_onUnmappableCharacter_java_nio_charset_CodingErrorAction_R_java_nio_charset_CharsetEncoder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetEncoder:onUnmappableCharacter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(14);
	clinit_java_io_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UnsupportedOperationException);
	init_java_io_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_nio_charset_CharsetEncoder_encode_java_nio_CharBuffer_java_nio_ByteBuffer_boolean_R_java_nio_charset_CoderResult(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetEncoder:encode", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(18);
	clinit_java_io_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UnsupportedOperationException);
	init_java_io_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_nio_charset_CharsetEncoder_encode_java_nio_CharBuffer_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetEncoder:encode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(22);
	clinit_java_io_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UnsupportedOperationException);
	init_java_io_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_java_nio_charset_CharsetEncoder[] {
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
	(void *) M_java_nio_charset_CharsetEncoder_onMalformedInput_java_nio_charset_CodingErrorAction_R_java_nio_charset_CharsetEncoder,
	(void *) M_java_nio_charset_CharsetEncoder_onUnmappableCharacter_java_nio_charset_CodingErrorAction_R_java_nio_charset_CharsetEncoder,
	(void *) M_java_nio_charset_CharsetEncoder_encode_java_nio_CharBuffer_java_nio_ByteBuffer_boolean_R_java_nio_charset_CoderResult,
	(void *) M_java_nio_charset_CharsetEncoder_encode_java_nio_CharBuffer_R_java_nio_ByteBuffer,
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
	{ "onMalformedInput", "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetEncoder;" },
	{ "onUnmappableCharacter", "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetEncoder;" },
	{ "encode", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;Z)Ljava/nio/charset/CoderResult;" },
	{ "encode", "(Ljava/nio/CharBuffer;)Ljava/nio/ByteBuffer;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_charset_CharsetEncoder, 0, "()V", 1 },
	{ "onMalformedInput", (intptr_t) M_java_nio_charset_CharsetEncoder_onMalformedInput_java_nio_charset_CodingErrorAction_R_java_nio_charset_CharsetEncoder, VTABLE_java_nio_charset_CharsetEncoder_onMalformedInput_java_nio_charset_CodingErrorAction_R_java_nio_charset_CharsetEncoder, "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetEncoder;", 17 },
	{ "onUnmappableCharacter", (intptr_t) M_java_nio_charset_CharsetEncoder_onUnmappableCharacter_java_nio_charset_CodingErrorAction_R_java_nio_charset_CharsetEncoder, VTABLE_java_nio_charset_CharsetEncoder_onUnmappableCharacter_java_nio_charset_CodingErrorAction_R_java_nio_charset_CharsetEncoder, "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetEncoder;", 17 },
	{ "encode", (intptr_t) M_java_nio_charset_CharsetEncoder_encode_java_nio_CharBuffer_java_nio_ByteBuffer_boolean_R_java_nio_charset_CoderResult, VTABLE_java_nio_charset_CharsetEncoder_encode_java_nio_CharBuffer_java_nio_ByteBuffer_boolean_R_java_nio_charset_CoderResult, "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;Z)Ljava/nio/charset/CoderResult;", 17 },
	{ "encode", (intptr_t) M_java_nio_charset_CharsetEncoder_encode_java_nio_CharBuffer_R_java_nio_ByteBuffer, VTABLE_java_nio_charset_CharsetEncoder_encode_java_nio_CharBuffer_R_java_nio_ByteBuffer, "(Ljava/nio/CharBuffer;)Ljava/nio/ByteBuffer;", 17 },
};

Class class_java_nio_charset_CharsetEncoder{
		.nativeName = (intptr_t) "java/nio/charset/CharsetEncoder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_charset_CharsetEncoder),
		.classVtable = (intptr_t) vtable_java_nio_charset_CharsetEncoder,
		.staticInitializer = (intptr_t) clinit_java_nio_charset_CharsetEncoder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_charset_CharsetEncoder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_charset_CharsetEncoder = registerClass(&class_java_nio_charset_CharsetEncoder);

}
