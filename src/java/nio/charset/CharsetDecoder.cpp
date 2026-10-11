#include "java/nio/charset/CharsetDecoder.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/charset/Charset.h"
#include "java/nio/CharBuffer.h"
#include "java/nio/charset/CoderResult.h"
#include "java/nio/charset/CharsetDecoder.h"
#include "java/lang/RuntimeException.h"
#include "java/nio/charset/CodingErrorAction.h"

extern "C" {


void mark_java_nio_charset_CharsetDecoder(jobject object, jint mark, jint depth) {
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
	auto self = (java_nio_charset_CharsetDecoder *) object;
}

void clinit_java_nio_charset_CharsetDecoder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_nio_charset_CharsetDecoder_java_nio_charset_Charset_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetDecoder:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_charset_CharsetDecoder(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(25);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_nio_charset_CharsetDecoder_charset_R_java_nio_charset_Charset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetDecoder:charset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(29);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_nio_charset_CharsetDecoder_replacement_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetDecoder:replacement", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_nio_charset_CharsetDecoder_replaceWith_java_lang_String_R_java_nio_charset_CharsetDecoder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetDecoder:replaceWith", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(37);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_nio_charset_CharsetDecoder_implReplaceWith_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetDecoder:implReplaceWith", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(41);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_nio_charset_CharsetDecoder_malformedInputAction_R_java_nio_charset_CodingErrorAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetDecoder:malformedInputAction", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_nio_charset_CharsetDecoder_onMalformedInput_java_nio_charset_CodingErrorAction_R_java_nio_charset_CharsetDecoder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetDecoder:onMalformedInput", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(49);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_nio_charset_CharsetDecoder_implOnMalformedInput_java_nio_charset_CodingErrorAction(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetDecoder:implOnMalformedInput", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_nio_charset_CharsetDecoder_unmappableCharacterAction_R_java_nio_charset_CodingErrorAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetDecoder:unmappableCharacterAction", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_nio_charset_CharsetDecoder_onUnmappableCharacter_java_nio_charset_CodingErrorAction_R_java_nio_charset_CharsetDecoder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetDecoder:onUnmappableCharacter", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_nio_charset_CharsetDecoder_implOnUnmappableCharacter_java_nio_charset_CodingErrorAction(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetDecoder:implOnUnmappableCharacter", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jfloat M_java_nio_charset_CharsetDecoder_averageCharsPerByte_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetDecoder:averageCharsPerByte", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jfloat M_java_nio_charset_CharsetDecoder_maxCharsPerByte_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetDecoder:maxCharsPerByte", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_nio_charset_CharsetDecoder_decode_java_nio_ByteBuffer_java_nio_CharBuffer_boolean_R_java_nio_charset_CoderResult(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetDecoder:decode", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(77);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_nio_charset_CharsetDecoder_flush_java_nio_CharBuffer_R_java_nio_charset_CoderResult(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetDecoder:flush", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(81);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_nio_charset_CharsetDecoder_implFlush_java_nio_CharBuffer_R_java_nio_charset_CoderResult(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetDecoder:implFlush", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_nio_charset_CharsetDecoder_reset_R_java_nio_charset_CharsetDecoder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetDecoder:reset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_nio_charset_CharsetDecoder_implReset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetDecoder:implReset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(93);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_nio_charset_CharsetDecoder_decode_java_nio_ByteBuffer_R_java_nio_CharBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetDecoder:decode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_nio_charset_CharsetDecoder_isAutoDetecting_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetDecoder:isAutoDetecting", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_nio_charset_CharsetDecoder_isCharsetDetected_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetDecoder:isCharsetDetected", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(107);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_nio_charset_CharsetDecoder_detectedCharset_R_java_nio_charset_Charset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CharsetDecoder:detectedCharset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(111);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_java_nio_charset_CharsetDecoder[] {
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
	(void *) M_java_nio_charset_CharsetDecoder_charset_R_java_nio_charset_Charset,
	(void *) M_java_nio_charset_CharsetDecoder_replacement_R_java_lang_String,
	(void *) M_java_nio_charset_CharsetDecoder_replaceWith_java_lang_String_R_java_nio_charset_CharsetDecoder,
	(void *) M_java_nio_charset_CharsetDecoder_implReplaceWith_java_lang_String,
	(void *) M_java_nio_charset_CharsetDecoder_malformedInputAction_R_java_nio_charset_CodingErrorAction,
	(void *) M_java_nio_charset_CharsetDecoder_onMalformedInput_java_nio_charset_CodingErrorAction_R_java_nio_charset_CharsetDecoder,
	(void *) M_java_nio_charset_CharsetDecoder_implOnMalformedInput_java_nio_charset_CodingErrorAction,
	(void *) M_java_nio_charset_CharsetDecoder_unmappableCharacterAction_R_java_nio_charset_CodingErrorAction,
	(void *) M_java_nio_charset_CharsetDecoder_onUnmappableCharacter_java_nio_charset_CodingErrorAction_R_java_nio_charset_CharsetDecoder,
	(void *) M_java_nio_charset_CharsetDecoder_implOnUnmappableCharacter_java_nio_charset_CodingErrorAction,
	(void *) M_java_nio_charset_CharsetDecoder_averageCharsPerByte_R_float,
	(void *) M_java_nio_charset_CharsetDecoder_maxCharsPerByte_R_float,
	(void *) M_java_nio_charset_CharsetDecoder_decode_java_nio_ByteBuffer_java_nio_CharBuffer_boolean_R_java_nio_charset_CoderResult,
	(void *) M_java_nio_charset_CharsetDecoder_flush_java_nio_CharBuffer_R_java_nio_charset_CoderResult,
	(void *) M_java_nio_charset_CharsetDecoder_implFlush_java_nio_CharBuffer_R_java_nio_charset_CoderResult,
	(void *) M_java_nio_charset_CharsetDecoder_reset_R_java_nio_charset_CharsetDecoder,
	(void *) M_java_nio_charset_CharsetDecoder_implReset,
	(void *) nullptr,
	(void *) M_java_nio_charset_CharsetDecoder_decode_java_nio_ByteBuffer_R_java_nio_CharBuffer,
	(void *) M_java_nio_charset_CharsetDecoder_isAutoDetecting_R_boolean,
	(void *) M_java_nio_charset_CharsetDecoder_isCharsetDetected_R_boolean,
	(void *) M_java_nio_charset_CharsetDecoder_detectedCharset_R_java_nio_charset_Charset,
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
	{ "charset", "()Ljava/nio/charset/Charset;" },
	{ "replacement", "()Ljava/lang/String;" },
	{ "replaceWith", "(Ljava/lang/String;)Ljava/nio/charset/CharsetDecoder;" },
	{ "implReplaceWith", "(Ljava/lang/String;)V" },
	{ "malformedInputAction", "()Ljava/nio/charset/CodingErrorAction;" },
	{ "onMalformedInput", "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;" },
	{ "implOnMalformedInput", "(Ljava/nio/charset/CodingErrorAction;)V" },
	{ "unmappableCharacterAction", "()Ljava/nio/charset/CodingErrorAction;" },
	{ "onUnmappableCharacter", "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;" },
	{ "implOnUnmappableCharacter", "(Ljava/nio/charset/CodingErrorAction;)V" },
	{ "averageCharsPerByte", "()F" },
	{ "maxCharsPerByte", "()F" },
	{ "decode", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;Z)Ljava/nio/charset/CoderResult;" },
	{ "flush", "(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;" },
	{ "implFlush", "(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;" },
	{ "reset", "()Ljava/nio/charset/CharsetDecoder;" },
	{ "implReset", "()V" },
	{ "decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;" },
	{ "decode", "(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;" },
	{ "isAutoDetecting", "()Z" },
	{ "isCharsetDetected", "()Z" },
	{ "detectedCharset", "()Ljava/nio/charset/Charset;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_charset_CharsetDecoder_java_nio_charset_Charset_float_float, 0, "(Ljava/nio/charset/Charset;FF)V", 4 },
	{ "charset", (intptr_t) M_java_nio_charset_CharsetDecoder_charset_R_java_nio_charset_Charset, VTABLE_java_nio_charset_CharsetDecoder_charset_R_java_nio_charset_Charset, "()Ljava/nio/charset/Charset;", 17 },
	{ "replacement", (intptr_t) M_java_nio_charset_CharsetDecoder_replacement_R_java_lang_String, VTABLE_java_nio_charset_CharsetDecoder_replacement_R_java_lang_String, "()Ljava/lang/String;", 17 },
	{ "replaceWith", (intptr_t) M_java_nio_charset_CharsetDecoder_replaceWith_java_lang_String_R_java_nio_charset_CharsetDecoder, VTABLE_java_nio_charset_CharsetDecoder_replaceWith_java_lang_String_R_java_nio_charset_CharsetDecoder, "(Ljava/lang/String;)Ljava/nio/charset/CharsetDecoder;", 17 },
	{ "implReplaceWith", (intptr_t) M_java_nio_charset_CharsetDecoder_implReplaceWith_java_lang_String, VTABLE_java_nio_charset_CharsetDecoder_implReplaceWith_java_lang_String, "(Ljava/lang/String;)V", 4 },
	{ "malformedInputAction", (intptr_t) M_java_nio_charset_CharsetDecoder_malformedInputAction_R_java_nio_charset_CodingErrorAction, VTABLE_java_nio_charset_CharsetDecoder_malformedInputAction_R_java_nio_charset_CodingErrorAction, "()Ljava/nio/charset/CodingErrorAction;", 1 },
	{ "onMalformedInput", (intptr_t) M_java_nio_charset_CharsetDecoder_onMalformedInput_java_nio_charset_CodingErrorAction_R_java_nio_charset_CharsetDecoder, VTABLE_java_nio_charset_CharsetDecoder_onMalformedInput_java_nio_charset_CodingErrorAction_R_java_nio_charset_CharsetDecoder, "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;", 17 },
	{ "implOnMalformedInput", (intptr_t) M_java_nio_charset_CharsetDecoder_implOnMalformedInput_java_nio_charset_CodingErrorAction, VTABLE_java_nio_charset_CharsetDecoder_implOnMalformedInput_java_nio_charset_CodingErrorAction, "(Ljava/nio/charset/CodingErrorAction;)V", 4 },
	{ "unmappableCharacterAction", (intptr_t) M_java_nio_charset_CharsetDecoder_unmappableCharacterAction_R_java_nio_charset_CodingErrorAction, VTABLE_java_nio_charset_CharsetDecoder_unmappableCharacterAction_R_java_nio_charset_CodingErrorAction, "()Ljava/nio/charset/CodingErrorAction;", 1 },
	{ "onUnmappableCharacter", (intptr_t) M_java_nio_charset_CharsetDecoder_onUnmappableCharacter_java_nio_charset_CodingErrorAction_R_java_nio_charset_CharsetDecoder, VTABLE_java_nio_charset_CharsetDecoder_onUnmappableCharacter_java_nio_charset_CodingErrorAction_R_java_nio_charset_CharsetDecoder, "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;", 17 },
	{ "implOnUnmappableCharacter", (intptr_t) M_java_nio_charset_CharsetDecoder_implOnUnmappableCharacter_java_nio_charset_CodingErrorAction, VTABLE_java_nio_charset_CharsetDecoder_implOnUnmappableCharacter_java_nio_charset_CodingErrorAction, "(Ljava/nio/charset/CodingErrorAction;)V", 4 },
	{ "averageCharsPerByte", (intptr_t) M_java_nio_charset_CharsetDecoder_averageCharsPerByte_R_float, VTABLE_java_nio_charset_CharsetDecoder_averageCharsPerByte_R_float, "()F", 17 },
	{ "maxCharsPerByte", (intptr_t) M_java_nio_charset_CharsetDecoder_maxCharsPerByte_R_float, VTABLE_java_nio_charset_CharsetDecoder_maxCharsPerByte_R_float, "()F", 17 },
	{ "decode", (intptr_t) M_java_nio_charset_CharsetDecoder_decode_java_nio_ByteBuffer_java_nio_CharBuffer_boolean_R_java_nio_charset_CoderResult, VTABLE_java_nio_charset_CharsetDecoder_decode_java_nio_ByteBuffer_java_nio_CharBuffer_boolean_R_java_nio_charset_CoderResult, "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;Z)Ljava/nio/charset/CoderResult;", 17 },
	{ "flush", (intptr_t) M_java_nio_charset_CharsetDecoder_flush_java_nio_CharBuffer_R_java_nio_charset_CoderResult, VTABLE_java_nio_charset_CharsetDecoder_flush_java_nio_CharBuffer_R_java_nio_charset_CoderResult, "(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", 17 },
	{ "implFlush", (intptr_t) M_java_nio_charset_CharsetDecoder_implFlush_java_nio_CharBuffer_R_java_nio_charset_CoderResult, VTABLE_java_nio_charset_CharsetDecoder_implFlush_java_nio_CharBuffer_R_java_nio_charset_CoderResult, "(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", 4 },
	{ "reset", (intptr_t) M_java_nio_charset_CharsetDecoder_reset_R_java_nio_charset_CharsetDecoder, VTABLE_java_nio_charset_CharsetDecoder_reset_R_java_nio_charset_CharsetDecoder, "()Ljava/nio/charset/CharsetDecoder;", 17 },
	{ "implReset", (intptr_t) M_java_nio_charset_CharsetDecoder_implReset, VTABLE_java_nio_charset_CharsetDecoder_implReset, "()V", 4 },
	{ "decodeLoop", 0, VTABLE_java_nio_charset_CharsetDecoder_decodeLoop_java_nio_ByteBuffer_java_nio_CharBuffer_R_java_nio_charset_CoderResult, "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", 1028 },
	{ "decode", (intptr_t) M_java_nio_charset_CharsetDecoder_decode_java_nio_ByteBuffer_R_java_nio_CharBuffer, VTABLE_java_nio_charset_CharsetDecoder_decode_java_nio_ByteBuffer_R_java_nio_CharBuffer, "(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;", 17 },
	{ "isAutoDetecting", (intptr_t) M_java_nio_charset_CharsetDecoder_isAutoDetecting_R_boolean, VTABLE_java_nio_charset_CharsetDecoder_isAutoDetecting_R_boolean, "()Z", 1 },
	{ "isCharsetDetected", (intptr_t) M_java_nio_charset_CharsetDecoder_isCharsetDetected_R_boolean, VTABLE_java_nio_charset_CharsetDecoder_isCharsetDetected_R_boolean, "()Z", 1 },
	{ "detectedCharset", (intptr_t) M_java_nio_charset_CharsetDecoder_detectedCharset_R_java_nio_charset_Charset, VTABLE_java_nio_charset_CharsetDecoder_detectedCharset_R_java_nio_charset_Charset, "()Ljava/nio/charset/Charset;", 1 },
};

Class class_java_nio_charset_CharsetDecoder{
		.nativeName = (intptr_t) "java/nio/charset/CharsetDecoder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_charset_CharsetDecoder),
		.classVtable = (intptr_t) vtable_java_nio_charset_CharsetDecoder,
		.staticInitializer = (intptr_t) clinit_java_nio_charset_CharsetDecoder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_charset_CharsetDecoder,
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
		.methodCount = 23,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_charset_CharsetDecoder = registerClass(&class_java_nio_charset_CharsetDecoder);

}
