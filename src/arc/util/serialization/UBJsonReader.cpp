#include "arc/util/serialization/UBJsonReader.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "java/nio/charset/Charset.h"
#include "java/io/DataInputStream.h"
#include "arc/files/Fi.h"
#include "java/io/InputStream.h"
#include "java/io/BufferedInputStream.h"
#include "arc/util/serialization/BaseJsonReader.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/serialization/JsonValue.h"
#include "arc/util/serialization/SerializationException.h"
#include "arc/util/ArcRuntimeException.h"
#include "java/io/IOException.h"
#include "java/io/FilterInputStream.h"
#include "arc/util/io/Streams.h"
#include "java/io/Closeable.h"
#include "arc/util/serialization/JsonValue_ValueType.h"
#include "arc/util/serialization/UBJsonReader.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_arc_util_serialization_UBJsonReader(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_serialization_UBJsonReader *) object;
}

void clinit_arc_util_serialization_UBJsonReader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_serialization_UBJsonReader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonReader:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_UBJsonReader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonReader_parse_java_io_InputStream_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonReader:parse", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_7; } // goto label_4
	}
	{
	LINE_NUMBER(26);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonReader_parse_java_io_DataInputStream_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonReader_parse_java_io_DataInputStream_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[2].o));
	frame[3].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(31);
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[2].o));
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_4;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	{
	sp -= 1;
	LINE_NUMBER(28);
	frame[3].o = sp[0].o;
	LINE_NUMBER(29);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(31);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[2].o));
	LINE_NUMBER(32);
	throwException(ctx, (frame[4].o));	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonReader_parse_arc_files_Fi_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonReader:parse", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_files_Fi_read_int_R_java_io_BufferedInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_read_int_R_java_io_BufferedInputStream])(ctx, (frame[1].o), (8192));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonReader_parse_java_io_InputStream_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonReader_parse_java_io_InputStream_R_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(39);
	frame[2].o = sp[0].o;
	LINE_NUMBER(40);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error parsing file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonReader_parse_java_io_DataInputStream_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonReader:parse", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonReader_parse_java_io_DataInputStream_byte_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonReader_parse_java_io_DataInputStream_byte_R_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o, temp0);
	frame[2].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(48);
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(48);
	frame[3].o = sp[0].o;
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(49);
	throwException(ctx, (frame[3].o));	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonReader_parseWihoutClosing_java_io_DataInputStream_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonReader:parseWihoutClosing", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonReader_parse_java_io_DataInputStream_byte_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonReader_parse_java_io_DataInputStream_byte_R_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonReader_parse_java_io_DataInputStream_byte_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonReader:parse", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(57);
	if ((frame[2].i) != (91)) goto label_1;
	}
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonReader_parseArray_java_io_DataInputStream_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonReader_parseArray_java_io_DataInputStream_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(59);
	if ((frame[2].i) != (123)) goto label_3;
	}
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonReader_parseObject_java_io_DataInputStream_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonReader_parseObject_java_io_DataInputStream_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(61);
	if ((frame[2].i) != (90)) goto label_5;
	}
	{
	LINE_NUMBER(62);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_nullValue;
	init_arc_util_serialization_JsonValue_arc_util_serialization_JsonValue$ValueType(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(63);
	if ((frame[2].i) != (84)) goto label_7;
	}
	{
	LINE_NUMBER(64);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	init_arc_util_serialization_JsonValue_boolean(ctx, sp[0].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(65);
	if ((frame[2].i) != (70)) goto label_9;
	}
	{
	LINE_NUMBER(66);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	init_arc_util_serialization_JsonValue_boolean(ctx, sp[0].o, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(67);
	if ((frame[2].i) != (66)) goto label_11;
	}
	{
	LINE_NUMBER(68);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	jint temp0 = (jint)((func_arc_util_serialization_UBJsonReader_readUChar_java_io_DataInputStream_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonReader_readUChar_java_io_DataInputStream_R_short])(ctx, (frame[0].o), (frame[1].o));
	init_arc_util_serialization_JsonValue_long(ctx, sp[0].o, (jlong(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(69);
	if ((frame[2].i) != (85)) goto label_13;
	}
	{
	LINE_NUMBER(70);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	jint temp0 = (jint)((func_arc_util_serialization_UBJsonReader_readUChar_java_io_DataInputStream_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonReader_readUChar_java_io_DataInputStream_R_short])(ctx, (frame[0].o), (frame[1].o));
	init_arc_util_serialization_JsonValue_long(ctx, sp[0].o, (jlong(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(71);
	if ((frame[2].i) != (105)) goto label_15;
	}
	{
	LINE_NUMBER(72);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	init_arc_util_serialization_JsonValue_long(ctx, sp[0].o, (jlong(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(73);
	if ((frame[2].i) != (73)) goto label_17;
	}
	{
	LINE_NUMBER(74);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[1].o));
	init_arc_util_serialization_JsonValue_long(ctx, sp[0].o, (jlong(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(75);
	if ((frame[2].i) != (108)) goto label_19;
	}
	{
	LINE_NUMBER(76);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[1].o));
	init_arc_util_serialization_JsonValue_long(ctx, sp[0].o, (jlong(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(77);
	if ((frame[2].i) != (76)) goto label_21;
	}
	{
	LINE_NUMBER(78);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	jlong temp0 = (jlong)((func_java_io_DataInputStream_readLong_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readLong_R_long])(ctx, (frame[1].o));
	init_arc_util_serialization_JsonValue_long(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(79);
	if ((frame[2].i) != (100)) goto label_23;
	}
	{
	LINE_NUMBER(80);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	jfloat temp0 = (jfloat)((func_java_io_DataInputStream_readFloat_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readFloat_R_float])(ctx, (frame[1].o));
	init_arc_util_serialization_JsonValue_double(ctx, sp[0].o, (jdouble(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_23:;
	{
	LINE_NUMBER(81);
	if ((frame[2].i) != (68)) goto label_25;
	}
	{
	LINE_NUMBER(82);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	jdouble temp0 = (jdouble)((func_java_io_DataInputStream_readDouble_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readDouble_R_double])(ctx, (frame[1].o));
	init_arc_util_serialization_JsonValue_double(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_25:;
	{
	LINE_NUMBER(83);
	if ((frame[2].i) == (115)) goto label_27;
	}
	{
	if ((frame[2].i) != (83)) goto label_28;
	}
label_27:;
	{
	LINE_NUMBER(84);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	sp[1].o = (jobject)((func_arc_util_serialization_UBJsonReader_parseString_java_io_DataInputStream_byte_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonReader_parseString_java_io_DataInputStream_byte_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	init_arc_util_serialization_JsonValue_java_lang_String(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_28:;
	{
	LINE_NUMBER(85);
	if ((frame[2].i) == (97)) goto label_29;
	}
	{
	if ((frame[2].i) != (65)) goto label_30;
	}
label_29:;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonReader_parseData_java_io_DataInputStream_byte_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonReader_parseData_java_io_DataInputStream_byte_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_30:;
	{
	LINE_NUMBER(87);
	if ((frame[2].i) != (67)) goto label_31;
	}
	{
	LINE_NUMBER(88);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	jint temp0 = (jint)((func_java_io_DataInputStream_readChar_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readChar_R_char])(ctx, (frame[1].o));
	init_arc_util_serialization_JsonValue_long(ctx, sp[0].o, (jlong(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_31:;
	{
	LINE_NUMBER(90);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unrecognized data type"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonReader_parseArray_java_io_DataInputStream_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonReader:parseArray", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(94);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_array;
	init_arc_util_serialization_JsonValue_arc_util_serialization_JsonValue$ValueType(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(95);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(96);
	frame[4].i = (jint(0));
	LINE_NUMBER(97);
	if ((frame[3].i) != (36)) goto label_4;
	}
	{
	LINE_NUMBER(98);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(99);
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[3].i = temp1;
	}
label_4:;
	{
	LINE_NUMBER(101);
	frame[5].l = (jlong(-1ll));
	LINE_NUMBER(102);
	if ((frame[3].i) != (35)) goto label_8;
	}
	{
	LINE_NUMBER(103);
	jlong temp0 = (jlong)((func_arc_util_serialization_UBJsonReader_parseSize_java_io_DataInputStream_boolean_long_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonReader_parseSize_java_io_DataInputStream_boolean_long_R_long])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (jlong(-1ll)));
	frame[5].l = temp0;
	LINE_NUMBER(104);
	if ((longCompare((frame[5].l), (jlong(0)))) >= 0) goto label_11;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unrecognized data type"_j))));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(105);
	if ((longCompare((frame[5].l), (jlong(0)))) != 0) goto label_12;
	}
	INST_ALOAD(2);
	popStackFrame(ctx);
	INST_ARETURN();
label_12:;
	{
	LINE_NUMBER(106);
	if ((frame[4].i) != 0) goto label_13;
	}
	{
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	INST_ILOAD(4);
label_14:;
	INST_ISTORE(3);
label_8:;
	{
	LINE_NUMBER(108);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(109);
	frame[8].l = (jlong(0));
	}
label_16:;
	{
	LINE_NUMBER(110);
	jint temp0 = (jint)((func_java_io_DataInputStream_available_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_available_R_int])(ctx, (frame[1].o));
	if (temp0 <= 0) goto label_17;
	}
	{
	if ((frame[3].i) == (93)) goto label_17;
	}
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonReader_parse_java_io_DataInputStream_byte_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonReader_parse_java_io_DataInputStream_byte_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[3].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(112);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[10].o)))->F_parent = (jref) (frame[2].o);
	LINE_NUMBER(113);
	if ((frame[7].o) == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(114);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[10].o)))->F_prev = (jref) (frame[7].o);
	LINE_NUMBER(115);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[7].o)))->F_next = (jref) (frame[10].o);
	LINE_NUMBER(116);
	sp[0].o = frame[2].o;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	goto label_25;
	}
label_21:;
	{
	LINE_NUMBER(118);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_child = (jref) (frame[10].o);
	LINE_NUMBER(119);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_size = (jint(1));
	}
label_25:;
	{
	LINE_NUMBER(121);
	frame[7].o = (frame[10].o);
	LINE_NUMBER(122);
	if ((longCompare((frame[5].l), (jlong(0)))) <= 0) goto label_28;
	}
	{
	jlong temp0 = (frame[8].l) + (jlong(1));
	frame[8].l = temp0;
	if ((longCompare(temp0, (frame[5].l))) < 0) goto label_28;
	}
	goto label_17;
label_28:;
	{
	LINE_NUMBER(123);
	if ((frame[4].i) != 0) goto label_29;
	}
	{
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_30;
	}
label_29:;
	INST_ILOAD(4);
label_30:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(124);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonReader_parseObject_java_io_DataInputStream_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonReader:parseObject", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(129);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_object;
	init_arc_util_serialization_JsonValue_arc_util_serialization_JsonValue$ValueType(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(130);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(131);
	frame[4].i = (jint(0));
	LINE_NUMBER(132);
	if ((frame[3].i) != (36)) goto label_4;
	}
	{
	LINE_NUMBER(133);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(134);
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[3].i = temp1;
	}
label_4:;
	{
	LINE_NUMBER(136);
	frame[5].l = (jlong(-1ll));
	LINE_NUMBER(137);
	if ((frame[3].i) != (35)) goto label_8;
	}
	{
	LINE_NUMBER(138);
	jlong temp0 = (jlong)((func_arc_util_serialization_UBJsonReader_parseSize_java_io_DataInputStream_boolean_long_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonReader_parseSize_java_io_DataInputStream_boolean_long_R_long])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (jlong(-1ll)));
	frame[5].l = temp0;
	LINE_NUMBER(139);
	if ((longCompare((frame[5].l), (jlong(0)))) >= 0) goto label_11;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unrecognized data type"_j))));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(140);
	if ((longCompare((frame[5].l), (jlong(0)))) != 0) goto label_12;
	}
	INST_ALOAD(2);
	popStackFrame(ctx);
	INST_ARETURN();
label_12:;
	{
	LINE_NUMBER(141);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[3].i = temp0;
	}
label_8:;
	{
	LINE_NUMBER(143);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(144);
	frame[8].l = (jlong(0));
	}
label_14:;
	{
	LINE_NUMBER(145);
	jint temp0 = (jint)((func_java_io_DataInputStream_available_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_available_R_int])(ctx, (frame[1].o));
	if (temp0 <= 0) goto label_15;
	}
	{
	if ((frame[3].i) == (125)) goto label_15;
	}
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonReader_parseString_java_io_DataInputStream_boolean_byte_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonReader_parseString_java_io_DataInputStream_boolean_byte_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (jint(1)), (frame[3].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(147);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp += 2;
	if ((frame[4].i) != 0) goto label_18;
	}
	{
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_19;
	}
label_18:;
	INST_ILOAD(4);
label_19:;
	{
	sp -= 3;
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonReader_parse_java_io_DataInputStream_byte_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonReader_parse_java_io_DataInputStream_byte_R_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o, sp[2].i);
	frame[11].o = sp[0].o;
	LINE_NUMBER(148);
	((func_arc_util_serialization_JsonValue_setName_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_setName_java_lang_String])(ctx, (frame[11].o), (frame[10].o));
	LINE_NUMBER(149);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[11].o)))->F_parent = (jref) (frame[2].o);
	LINE_NUMBER(150);
	if ((frame[7].o) == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(151);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[11].o)))->F_prev = (jref) (frame[7].o);
	LINE_NUMBER(152);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[7].o)))->F_next = (jref) (frame[11].o);
	LINE_NUMBER(153);
	sp[0].o = frame[2].o;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	goto label_27;
	}
label_23:;
	{
	LINE_NUMBER(155);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_child = (jref) (frame[11].o);
	LINE_NUMBER(156);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_size = (jint(1));
	}
label_27:;
	{
	LINE_NUMBER(158);
	frame[7].o = (frame[11].o);
	LINE_NUMBER(159);
	if ((longCompare((frame[5].l), (jlong(0)))) <= 0) goto label_30;
	}
	{
	jlong temp0 = (frame[8].l) + (jlong(1));
	frame[8].l = temp0;
	if ((longCompare(temp0, (frame[5].l))) < 0) goto label_30;
	}
	goto label_15;
label_30:;
	{
	LINE_NUMBER(160);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(161);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonReader_parseData_java_io_DataInputStream_byte_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonReader:parseData", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(168);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(169);
	if ((frame[2].i) != (65)) goto label_2;
	}
	{
	jlong temp0 = (jlong)((func_arc_util_serialization_UBJsonReader_readUInt_java_io_DataInputStream_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonReader_readUInt_java_io_DataInputStream_R_long])(ctx, (frame[0].o), (frame[1].o));
	sp[0].l = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	jint temp0 = (jint)((func_arc_util_serialization_UBJsonReader_readUChar_java_io_DataInputStream_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonReader_readUChar_java_io_DataInputStream_R_short])(ctx, (frame[0].o), (frame[1].o));
	jlong temp1 = jlong(temp0);
	sp[0].l = temp1;
	sp += 1;
	}
label_3:;
	{
	sp -= 1;
	frame[4].l = sp[0].l;
	LINE_NUMBER(170);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_array;
	init_arc_util_serialization_JsonValue_arc_util_serialization_JsonValue$ValueType(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(171);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(172);
	frame[8].l = (jlong(0));
	}
label_7:;
	{
	if ((longCompare((frame[8].l), (frame[4].l))) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonReader_parse_java_io_DataInputStream_byte_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonReader_parse_java_io_DataInputStream_byte_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[3].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(174);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[10].o)))->F_parent = (jref) (frame[6].o);
	LINE_NUMBER(175);
	if ((frame[7].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(176);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[7].o)))->F_next = (jref) (frame[10].o);
	LINE_NUMBER(177);
	sp[0].o = frame[6].o;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(179);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[6].o)))->F_child = (jref) (frame[10].o);
	LINE_NUMBER(180);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[6].o)))->F_size = (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(182);
	frame[7].o = (frame[10].o);
	LINE_NUMBER(172);
	frame[8].l = ((frame[8].l) + (jlong(1)));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonReader_parseString_java_io_DataInputStream_byte_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonReader:parseString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonReader_parseString_java_io_DataInputStream_boolean_byte_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonReader_parseString_java_io_DataInputStream_boolean_byte_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonReader_parseString_java_io_DataInputStream_boolean_byte_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1, jbyte param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonReader:parseString", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(192);
	frame[4].l = (jlong(-1ll));
	LINE_NUMBER(193);
	if ((frame[3].i) != (83)) goto label_2;
	}
	{
	LINE_NUMBER(194);
	jlong temp0 = (jlong)((func_arc_util_serialization_UBJsonReader_parseSize_java_io_DataInputStream_boolean_long_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonReader_parseSize_java_io_DataInputStream_boolean_long_R_long])(ctx, (frame[0].o), (frame[1].o), (jint(1)), (jlong(-1ll)));
	frame[4].l = temp0;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(195);
	if ((frame[3].i) != (115)) goto label_5;
	}
	{
	LINE_NUMBER(196);
	jint temp0 = (jint)((func_arc_util_serialization_UBJsonReader_readUChar_java_io_DataInputStream_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonReader_readUChar_java_io_DataInputStream_R_short])(ctx, (frame[0].o), (frame[1].o));
	frame[4].l = (jlong(temp0));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(197);
	if ((frame[2].i) == 0) goto label_4;
	}
	{
	jlong temp0 = (jlong)((func_arc_util_serialization_UBJsonReader_parseSize_java_io_DataInputStream_byte_boolean_long_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonReader_parseSize_java_io_DataInputStream_byte_boolean_long_R_long])(ctx, (frame[0].o), (frame[1].o), (frame[3].i), (jint(0)), (jlong(-1ll)));
	frame[4].l = temp0;
	}
label_4:;
	{
	LINE_NUMBER(198);
	if ((longCompare((frame[4].l), (jlong(0)))) >= 0) goto label_7;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unrecognized data type, string expected"_j))));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(199);
	if ((longCompare((frame[4].l), (jlong(0)))) <= 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonReader_readString_java_io_DataInputStream_long_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonReader_readString_java_io_DataInputStream_long_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[4].l));
	sp += 1;
	goto label_9;
	}
label_8:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_9:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jlong M_arc_util_serialization_UBJsonReader_parseSize_java_io_DataInputStream_boolean_long_R_long(jcontext ctx, jobject self, jobject param0, jbool param1, jlong param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonReader:parseSize", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].l = param2;
	{
	LINE_NUMBER(203);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	jlong temp1 = (jlong)((func_arc_util_serialization_UBJsonReader_parseSize_java_io_DataInputStream_byte_boolean_long_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonReader_parseSize_java_io_DataInputStream_byte_boolean_long_R_long])(ctx, sp[0].o, sp[1].o, temp0, (frame[2].i), (frame[3].l));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jlong M_arc_util_serialization_UBJsonReader_parseSize_java_io_DataInputStream_byte_boolean_long_R_long(jcontext ctx, jobject self, jobject param0, jbyte param1, jbool param2, jlong param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonReader:parseSize", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].l = param3;
	{
	LINE_NUMBER(208);
	if ((frame[2].i) != (105)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_UBJsonReader_readUChar_java_io_DataInputStream_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonReader_readUChar_java_io_DataInputStream_R_short])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return (jlong(temp0));
	}
label_1:;
	{
	LINE_NUMBER(209);
	if ((frame[2].i) != (73)) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_UBJsonReader_readUShort_java_io_DataInputStream_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonReader_readUShort_java_io_DataInputStream_R_int])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return (jlong(temp0));
	}
label_2:;
	{
	LINE_NUMBER(210);
	if ((frame[2].i) != (108)) goto label_3;
	}
	{
	jlong temp0 = (jlong)((func_arc_util_serialization_UBJsonReader_readUInt_java_io_DataInputStream_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonReader_readUInt_java_io_DataInputStream_R_long])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(211);
	if ((frame[2].i) != (76)) goto label_4;
	}
	{
	jlong temp0 = (jlong)((func_java_io_DataInputStream_readLong_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readLong_R_long])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_4:;
	{
	LINE_NUMBER(212);
	if ((frame[3].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(213);
	frame[6].l = ((jlong(((jshort((frame[2].i))) & (255)))) << (24));
	LINE_NUMBER(214);
	jlong temp0 = frame[6].l;
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[6].l = (temp0 | ((jlong(((jshort(temp1)) & (255)))) << (16)));
	LINE_NUMBER(215);
	jlong temp2 = frame[6].l;
	jint temp3 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[6].l = (temp2 | ((jlong(((jshort(temp3)) & (255)))) << (8)));
	LINE_NUMBER(216);
	jlong temp4 = frame[6].l;
	jint temp5 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[6].l = (temp4 | (jlong(((jshort(temp5)) & (255)))));
	LINE_NUMBER(217);
	popStackFrame(ctx);
	return (frame[6].l);
	}
label_5:;
	{
	LINE_NUMBER(219);
	popStackFrame(ctx);
	return (frame[4].l);
	}

	popStackFrame(ctx);
}

jshort M_arc_util_serialization_UBJsonReader_readUChar_java_io_DataInputStream_R_short(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonReader:readUChar", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(223);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (jshort(((jshort(temp0)) & (255))));
	}

	popStackFrame(ctx);
}

jint M_arc_util_serialization_UBJsonReader_readUShort_java_io_DataInputStream_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonReader:readUShort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(227);
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (temp0 & (jint(65535)));
	}

	popStackFrame(ctx);
}

jlong M_arc_util_serialization_UBJsonReader_readUInt_java_io_DataInputStream_R_long(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonReader:readUInt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(231);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (jlong(temp0));
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonReader_readString_java_io_DataInputStream_long_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonReader:readString", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint((frame[2].l))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(236);
	((func_java_io_DataInputStream_readFully_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readFully_Array1_byte])(ctx, (frame[1].o), (frame[4].o));
	LINE_NUMBER(237);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = frame[4].o;
	clinit_arc_util_Strings(ctx);
	sp[2].o = (jobject)SF_arc_util_Strings_utf8;
	init_java_lang_String_Array1_byte_java_nio_charset_Charset(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_serialization_UBJsonReader[] {
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
	(void *) M_arc_util_serialization_UBJsonReader_parse_java_io_InputStream_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_UBJsonReader_parse_arc_files_Fi_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_UBJsonReader_parse_java_io_DataInputStream_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_UBJsonReader_parseWihoutClosing_java_io_DataInputStream_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_UBJsonReader_parse_java_io_DataInputStream_byte_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_UBJsonReader_parseArray_java_io_DataInputStream_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_UBJsonReader_parseObject_java_io_DataInputStream_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_UBJsonReader_parseData_java_io_DataInputStream_byte_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_UBJsonReader_parseString_java_io_DataInputStream_byte_R_java_lang_String,
	(void *) M_arc_util_serialization_UBJsonReader_parseString_java_io_DataInputStream_boolean_byte_R_java_lang_String,
	(void *) M_arc_util_serialization_UBJsonReader_parseSize_java_io_DataInputStream_boolean_long_R_long,
	(void *) M_arc_util_serialization_UBJsonReader_parseSize_java_io_DataInputStream_byte_boolean_long_R_long,
	(void *) M_arc_util_serialization_UBJsonReader_readUChar_java_io_DataInputStream_R_short,
	(void *) M_arc_util_serialization_UBJsonReader_readUShort_java_io_DataInputStream_R_int,
	(void *) M_arc_util_serialization_UBJsonReader_readUInt_java_io_DataInputStream_R_long,
	(void *) M_arc_util_serialization_UBJsonReader_readString_java_io_DataInputStream_long_R_java_lang_String,
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
	{ "parse", "(Ljava/io/InputStream;)Larc/util/serialization/JsonValue;" },
	{ "parse", "(Larc/files/Fi;)Larc/util/serialization/JsonValue;" },
	{ "parse", "(Ljava/io/DataInputStream;)Larc/util/serialization/JsonValue;" },
	{ "parseWihoutClosing", "(Ljava/io/DataInputStream;)Larc/util/serialization/JsonValue;" },
	{ "parse", "(Ljava/io/DataInputStream;B)Larc/util/serialization/JsonValue;" },
	{ "parseArray", "(Ljava/io/DataInputStream;)Larc/util/serialization/JsonValue;" },
	{ "parseObject", "(Ljava/io/DataInputStream;)Larc/util/serialization/JsonValue;" },
	{ "parseData", "(Ljava/io/DataInputStream;B)Larc/util/serialization/JsonValue;" },
	{ "parseString", "(Ljava/io/DataInputStream;B)Ljava/lang/String;" },
	{ "parseString", "(Ljava/io/DataInputStream;ZB)Ljava/lang/String;" },
	{ "parseSize", "(Ljava/io/DataInputStream;ZJ)J" },
	{ "parseSize", "(Ljava/io/DataInputStream;BZJ)J" },
	{ "readUChar", "(Ljava/io/DataInputStream;)S" },
	{ "readUShort", "(Ljava/io/DataInputStream;)I" },
	{ "readUInt", "(Ljava/io/DataInputStream;)J" },
	{ "readString", "(Ljava/io/DataInputStream;J)Ljava/lang/String;" },
};

static jclass interfaces[] { &class_arc_util_serialization_BaseJsonReader, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_serialization_UBJsonReader, 0, "()V", 1 },
	{ "parse", (intptr_t) M_arc_util_serialization_UBJsonReader_parse_java_io_InputStream_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_UBJsonReader_parse_java_io_InputStream_R_arc_util_serialization_JsonValue, "(Ljava/io/InputStream;)Larc/util/serialization/JsonValue;", 1 },
	{ "parse", (intptr_t) M_arc_util_serialization_UBJsonReader_parse_arc_files_Fi_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_UBJsonReader_parse_arc_files_Fi_R_arc_util_serialization_JsonValue, "(Larc/files/Fi;)Larc/util/serialization/JsonValue;", 1 },
	{ "parse", (intptr_t) M_arc_util_serialization_UBJsonReader_parse_java_io_DataInputStream_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_UBJsonReader_parse_java_io_DataInputStream_R_arc_util_serialization_JsonValue, "(Ljava/io/DataInputStream;)Larc/util/serialization/JsonValue;", 1 },
	{ "parseWihoutClosing", (intptr_t) M_arc_util_serialization_UBJsonReader_parseWihoutClosing_java_io_DataInputStream_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_UBJsonReader_parseWihoutClosing_java_io_DataInputStream_R_arc_util_serialization_JsonValue, "(Ljava/io/DataInputStream;)Larc/util/serialization/JsonValue;", 1 },
	{ "parse", (intptr_t) M_arc_util_serialization_UBJsonReader_parse_java_io_DataInputStream_byte_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_UBJsonReader_parse_java_io_DataInputStream_byte_R_arc_util_serialization_JsonValue, "(Ljava/io/DataInputStream;B)Larc/util/serialization/JsonValue;", 4 },
	{ "parseArray", (intptr_t) M_arc_util_serialization_UBJsonReader_parseArray_java_io_DataInputStream_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_UBJsonReader_parseArray_java_io_DataInputStream_R_arc_util_serialization_JsonValue, "(Ljava/io/DataInputStream;)Larc/util/serialization/JsonValue;", 4 },
	{ "parseObject", (intptr_t) M_arc_util_serialization_UBJsonReader_parseObject_java_io_DataInputStream_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_UBJsonReader_parseObject_java_io_DataInputStream_R_arc_util_serialization_JsonValue, "(Ljava/io/DataInputStream;)Larc/util/serialization/JsonValue;", 4 },
	{ "parseData", (intptr_t) M_arc_util_serialization_UBJsonReader_parseData_java_io_DataInputStream_byte_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_UBJsonReader_parseData_java_io_DataInputStream_byte_R_arc_util_serialization_JsonValue, "(Ljava/io/DataInputStream;B)Larc/util/serialization/JsonValue;", 4 },
	{ "parseString", (intptr_t) M_arc_util_serialization_UBJsonReader_parseString_java_io_DataInputStream_byte_R_java_lang_String, VTABLE_arc_util_serialization_UBJsonReader_parseString_java_io_DataInputStream_byte_R_java_lang_String, "(Ljava/io/DataInputStream;B)Ljava/lang/String;", 4 },
	{ "parseString", (intptr_t) M_arc_util_serialization_UBJsonReader_parseString_java_io_DataInputStream_boolean_byte_R_java_lang_String, VTABLE_arc_util_serialization_UBJsonReader_parseString_java_io_DataInputStream_boolean_byte_R_java_lang_String, "(Ljava/io/DataInputStream;ZB)Ljava/lang/String;", 4 },
	{ "parseSize", (intptr_t) M_arc_util_serialization_UBJsonReader_parseSize_java_io_DataInputStream_boolean_long_R_long, VTABLE_arc_util_serialization_UBJsonReader_parseSize_java_io_DataInputStream_boolean_long_R_long, "(Ljava/io/DataInputStream;ZJ)J", 4 },
	{ "parseSize", (intptr_t) M_arc_util_serialization_UBJsonReader_parseSize_java_io_DataInputStream_byte_boolean_long_R_long, VTABLE_arc_util_serialization_UBJsonReader_parseSize_java_io_DataInputStream_byte_boolean_long_R_long, "(Ljava/io/DataInputStream;BZJ)J", 4 },
	{ "readUChar", (intptr_t) M_arc_util_serialization_UBJsonReader_readUChar_java_io_DataInputStream_R_short, VTABLE_arc_util_serialization_UBJsonReader_readUChar_java_io_DataInputStream_R_short, "(Ljava/io/DataInputStream;)S", 4 },
	{ "readUShort", (intptr_t) M_arc_util_serialization_UBJsonReader_readUShort_java_io_DataInputStream_R_int, VTABLE_arc_util_serialization_UBJsonReader_readUShort_java_io_DataInputStream_R_int, "(Ljava/io/DataInputStream;)I", 4 },
	{ "readUInt", (intptr_t) M_arc_util_serialization_UBJsonReader_readUInt_java_io_DataInputStream_R_long, VTABLE_arc_util_serialization_UBJsonReader_readUInt_java_io_DataInputStream_R_long, "(Ljava/io/DataInputStream;)J", 4 },
	{ "readString", (intptr_t) M_arc_util_serialization_UBJsonReader_readString_java_io_DataInputStream_long_R_java_lang_String, VTABLE_arc_util_serialization_UBJsonReader_readString_java_io_DataInputStream_long_R_java_lang_String, "(Ljava/io/DataInputStream;J)Ljava/lang/String;", 4 },
};

Class class_arc_util_serialization_UBJsonReader{
		.nativeName = (intptr_t) "arc/util/serialization/UBJsonReader",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_serialization_UBJsonReader),
		.classVtable = (intptr_t) vtable_arc_util_serialization_UBJsonReader,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_UBJsonReader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_UBJsonReader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_UBJsonReader = registerClass(&class_arc_util_serialization_UBJsonReader);

}
