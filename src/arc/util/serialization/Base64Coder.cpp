#include "arc/util/serialization/Base64Coder.h"
#include "java/lang/Math.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/nio/charset/Charset.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/util/serialization/Base64Coder.h"
#include "arc/util/serialization/Base64Coder_CharMap.h"

extern "C" {

jobject SF_arc_util_serialization_Base64Coder_regularMap;
jobject SF_arc_util_serialization_Base64Coder_urlsafeMap;
jobject SF_arc_util_serialization_Base64Coder_systemLineSeparator;

void mark_arc_util_serialization_Base64Coder(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_serialization_Base64Coder_regularMap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_Base64Coder_regularMap)->clazz)->markFunction)((jobject) SF_arc_util_serialization_Base64Coder_regularMap, mark, depth + 1);
		if (SF_arc_util_serialization_Base64Coder_urlsafeMap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_Base64Coder_urlsafeMap)->clazz)->markFunction)((jobject) SF_arc_util_serialization_Base64Coder_urlsafeMap, mark, depth + 1);
		if (SF_arc_util_serialization_Base64Coder_systemLineSeparator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_Base64Coder_systemLineSeparator)->clazz)->markFunction)((jobject) SF_arc_util_serialization_Base64Coder_systemLineSeparator, mark, depth + 1);
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
	auto self = (arc_util_serialization_Base64Coder *) object;
}

void init_arc_util_serialization_Base64Coder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_encodeString_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:encodeString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(21);
	sp[0].o = (jobject)SM_arc_util_serialization_Base64Coder_encodeString_java_lang_String_boolean_R_java_lang_String(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_encodeString_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:encodeString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(25);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = frame[0].o;
	clinit_arc_util_Strings(ctx);
	sp[2].o = (jobject)SF_arc_util_Strings_utf8;
	sp[1].o = (jobject)((func_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte])(ctx, sp[1].o, sp[2].o);
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp0;
	sp += 3;
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	clinit_arc_util_serialization_Base64Coder(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_Base64Coder_urlsafeMap;
	sp[0].o = (jobject)((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK(sp[0].o))->F_encodingMap;
	sp += 1;
	goto label_2;
	}
label_1:;
	clinit_arc_util_serialization_Base64Coder(ctx);
	(sp++)->o = SF_arc_util_serialization_Base64Coder_regularMap;
	sp[-1].o = (jobject) ((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK(sp[-1].o))->F_encodingMap;
label_2:;
	{
	sp -= 4;
	sp[1].o = (jobject)SM_arc_util_serialization_Base64Coder_encode_Array1_byte_Array1_char_R_Array1_char(ctx, sp[2].o, sp[3].o);
	init_java_lang_String_Array1_char(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_encodeLines_Array1_byte_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:encodeLines", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jint temp1 = ((jarray) nullCheck(ctx, (frame[0].o)))->length;
	jint temp2 = 76;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"\n"_j));
	clinit_arc_util_serialization_Base64Coder(ctx);
	sp[2].o = (jobject)SF_arc_util_serialization_Base64Coder_regularMap;
	sp[2].o = (jobject)((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK(sp[2].o))->F_encodingMap;
	sp[0].o = (jobject)SM_arc_util_serialization_Base64Coder_encodeLines_Array1_byte_int_int_int_java_lang_String_Array1_char_R_java_lang_String(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_encodeLines_Array1_byte_int_int_int_java_lang_String_arc_util_serialization_Base64Coder$CharMap_R_java_lang_String(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4, jobject param5) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:encodeLines", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = frame[3].i;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK((frame[5].o)))->F_encodingMap;
	sp[0].o = (jobject)SM_arc_util_serialization_Base64Coder_encodeLines_Array1_byte_int_int_int_java_lang_String_Array1_char_R_java_lang_String(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_encodeLines_Array1_byte_int_int_int_java_lang_String_Array1_char_R_java_lang_String(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4, jobject param5) {
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:encodeLines", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(55);
	frame[6].i = (((frame[3].i) * (jint(3))) / (jint(4)));
	LINE_NUMBER(56);
	if ((frame[6].i) > 0) goto label_2;
	}
	{
	LINE_NUMBER(57);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(59);
	frame[7].i = ((((frame[2].i) + (frame[6].i)) - (jint(1))) / (frame[6].i));
	LINE_NUMBER(60);
	jint temp0 = (((frame[2].i) + (jint(2))) / (jint(3))) * (jint(4));
	jint temp1 = frame[7].i;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[4].o));
	frame[8].i = (temp0 + (temp1 * temp2));
	LINE_NUMBER(61);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(62);
	frame[10].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(63);
	if ((frame[10].i) >= (frame[2].i)) goto label_8;
	}
	{
	LINE_NUMBER(64);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((frame[2].i) - (frame[10].i)), (frame[6].i));
	frame[11].i = temp0;
	LINE_NUMBER(65);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)SM_arc_util_serialization_Base64Coder_encode_Array1_byte_int_int_Array1_char_R_Array1_char(ctx, (frame[0].o), ((frame[1].i) + (frame[10].i)), (frame[11].i), (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_Array1_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_Array1_char_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(66);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[9].o), (frame[4].o));
	LINE_NUMBER(67);
	frame[10].i = ((frame[10].i) + (frame[11].i));
	LINE_NUMBER(68);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[9].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_encode_Array1_byte_R_Array1_char(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:encode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	clinit_arc_util_serialization_Base64Coder(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_Base64Coder_regularMap;
	sp[1].o = (jobject)((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK(sp[1].o))->F_encodingMap;
	sp[0].o = (jobject)SM_arc_util_serialization_Base64Coder_encode_Array1_byte_Array1_char_R_Array1_char(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_encode_Array1_byte_boolean_R_Array1_char(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:encode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	clinit_arc_util_serialization_Base64Coder(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_Base64Coder_urlsafeMap;
	sp[0].o = (jobject)((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK(sp[0].o))->F_encodingMap;
	sp += 1;
	goto label_2;
	}
label_1:;
	clinit_arc_util_serialization_Base64Coder(ctx);
	(sp++)->o = SF_arc_util_serialization_Base64Coder_regularMap;
	sp[-1].o = (jobject) ((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK(sp[-1].o))->F_encodingMap;
label_2:;
	POP_N(2); // Pop method args
	sp->o = (jobject)SM_arc_util_serialization_Base64Coder_encode_Array1_byte_Array1_char_R_Array1_char(ctx, sp[0].o, sp[1].o);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_encode_Array1_byte_arc_util_serialization_Base64Coder$CharMap_R_Array1_char(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:encode", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)SM_arc_util_serialization_Base64Coder_encode_Array1_byte_int_int_arc_util_serialization_Base64Coder$CharMap_R_Array1_char(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_encode_Array1_byte_Array1_char_R_Array1_char(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:encode", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)SM_arc_util_serialization_Base64Coder_encode_Array1_byte_int_int_Array1_char_R_Array1_char(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_encode_Array1_byte_int_R_Array1_char(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:encode", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jint temp1 = frame[1].i;
	clinit_arc_util_serialization_Base64Coder(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_Base64Coder_regularMap;
	sp[1].o = (jobject)((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK(sp[1].o))->F_encodingMap;
	sp[0].o = (jobject)SM_arc_util_serialization_Base64Coder_encode_Array1_byte_int_int_Array1_char_R_Array1_char(ctx, sp[0].o, temp0, temp1, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_encode_Array1_byte_int_int_arc_util_serialization_Base64Coder$CharMap_R_Array1_char(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:encode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK((frame[3].o)))->F_encodingMap;
	sp[0].o = (jobject)SM_arc_util_serialization_Base64Coder_encode_Array1_byte_int_int_Array1_char_R_Array1_char(ctx, sp[0].o, temp0, temp1, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_encode_Array1_byte_int_int_Array1_char_R_Array1_char(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[21];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:encode", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(119);
	frame[4].i = ((((frame[2].i) * (jint(4))) + (jint(2))) / (jint(3)));
	LINE_NUMBER(120);
	frame[5].i = ((((frame[2].i) + (jint(2))) / (jint(3))) * (jint(4)));
	LINE_NUMBER(121);
	sp[0].o = (jobject) createArray(ctx, &class_char, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(122);
	frame[7].i = (frame[1].i);
	LINE_NUMBER(123);
	frame[8].i = ((frame[1].i) + (frame[2].i));
	LINE_NUMBER(124);
	frame[9].i = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(125);
	if ((frame[7].i) >= (frame[8].i)) goto label_7;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	frame[10].i = (((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) & (255));
	LINE_NUMBER(127);
	if ((frame[7].i) >= (frame[8].i)) goto label_10;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	jint temp1 = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) & (255);
	sp[0].i = temp1;
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(128);
	if ((frame[7].i) >= (frame[8].i)) goto label_13;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	jint temp1 = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) & (255);
	sp[0].i = temp1;
	sp += 1;
	goto label_14;
	}
label_13:;
	INST_ICONST(0);
label_14:;
	{
	sp -= 1;
	frame[12].i = sp[0].i;
	LINE_NUMBER(129);
	frame[13].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[10].i)) >> (jint(2))));
	LINE_NUMBER(130);
	frame[14].i = ((((frame[10].i) & (jint(3))) << (jint(4))) | (bit_cast<jint>(bit_cast<uint32_t>((frame[11].i)) >> (jint(4)))));
	LINE_NUMBER(131);
	frame[15].i = ((((frame[11].i) & (15)) << (jint(2))) | (bit_cast<jint>(bit_cast<uint32_t>((frame[12].i)) >> (6))));
	LINE_NUMBER(132);
	frame[16].i = ((frame[12].i) & (63));
	LINE_NUMBER(133);
	sp[0].o = frame[6].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[13].i)));
	LINE_NUMBER(134);
	sp[0].o = frame[6].o;
	jint temp1 = frame[9].i;
	INST_IINC(9, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp1) = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[14].i)));
	LINE_NUMBER(135);
	sp[0].o = frame[6].o;
	jint temp2 = frame[9].i;
	sp[1].i = temp2;
	sp += 2;
	if ((frame[9].i) >= (frame[4].i)) goto label_22;
	}
	{
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[15].i));
	sp[0].i = temp0;
	sp += 1;
	goto label_23;
	}
label_22:;
	INST_BIPUSH(61);
label_23:;
	{
	sp -= 3;
	ARRAY_ACCESS(jchar, sp[0].o, sp[1].i) = sp[2].i;
	LINE_NUMBER(136);
	INST_IINC(9, 1);
	LINE_NUMBER(137);
	sp[0].o = frame[6].o;
	jint temp0 = frame[9].i;
	sp[1].i = temp0;
	sp += 2;
	if ((frame[9].i) >= (frame[4].i)) goto label_26;
	}
	{
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[16].i));
	sp[0].i = temp0;
	sp += 1;
	goto label_27;
	}
label_26:;
	INST_BIPUSH(61);
label_27:;
	{
	sp -= 3;
	ARRAY_ACCESS(jchar, sp[0].o, sp[1].i) = sp[2].i;
	LINE_NUMBER(138);
	INST_IINC(9, 1);
	LINE_NUMBER(139);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_decodeString_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:decodeString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)SM_arc_util_serialization_Base64Coder_decodeString_java_lang_String_boolean_R_java_lang_String(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_decodeString_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:decodeString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(155);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (frame[0].o));
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp0;
	sp += 3;
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	clinit_arc_util_serialization_Base64Coder(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_Base64Coder_urlsafeMap;
	sp[0].o = (jobject)((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK(sp[0].o))->F_decodingMap;
	sp += 1;
	goto label_2;
	}
label_1:;
	clinit_arc_util_serialization_Base64Coder(ctx);
	(sp++)->o = SF_arc_util_serialization_Base64Coder_regularMap;
	sp[-1].o = (jobject) ((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK(sp[-1].o))->F_decodingMap;
label_2:;
	{
	sp -= 4;
	sp[1].o = (jobject)SM_arc_util_serialization_Base64Coder_decode_Array1_char_Array1_byte_R_Array1_byte(ctx, sp[2].o, sp[3].o);
	init_java_lang_String_Array1_byte(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_decodeLines_java_lang_String_R_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:decodeLines", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	clinit_arc_util_serialization_Base64Coder(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_Base64Coder_regularMap;
	sp[1].o = (jobject)((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK(sp[1].o))->F_decodingMap;
	sp[0].o = (jobject)SM_arc_util_serialization_Base64Coder_decodeLines_java_lang_String_Array1_byte_R_Array1_byte(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_decodeLines_java_lang_String_arc_util_serialization_Base64Coder$CharMap_R_Array1_byte(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:decodeLines", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(163);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK((frame[1].o)))->F_decodingMap;
	sp[0].o = (jobject)SM_arc_util_serialization_Base64Coder_decodeLines_java_lang_String_Array1_byte_R_Array1_byte(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_decodeLines_java_lang_String_Array1_byte_R_Array1_byte(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:decodeLines", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(176);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject) createArray(ctx, &class_char, temp0);
	frame[2].o = sp[0].o;
	LINE_NUMBER(177);
	frame[3].i = (jint(0));
	LINE_NUMBER(178);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_4;
	}
	{
	LINE_NUMBER(179);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[4].i));
	frame[5].i = temp0;
	LINE_NUMBER(180);
	if ((frame[5].i) == (32)) goto label_7;
	}
	{
	if ((frame[5].i) == (13)) goto label_7;
	}
	{
	if ((frame[5].i) == (10)) goto label_7;
	}
	{
	if ((frame[5].i) == (9)) goto label_7;
	}
	{
	LINE_NUMBER(181);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (frame[5].i);
	}
label_7:;
	{
	LINE_NUMBER(178);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)SM_arc_util_serialization_Base64Coder_decode_Array1_char_int_int_Array1_byte_R_Array1_byte(ctx, (frame[2].o), (jint(0)), (frame[3].i), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_decode_java_lang_String_R_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:decode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_arc_util_serialization_Base64Coder_decode_Array1_char_R_Array1_byte(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_decode_java_lang_String_arc_util_serialization_Base64Coder$CharMap_R_Array1_byte(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:decode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_arc_util_serialization_Base64Coder_decode_Array1_char_arc_util_serialization_Base64Coder$CharMap_R_Array1_byte(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_decode_Array1_char_Array1_byte_R_Array1_byte(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:decode", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)SM_arc_util_serialization_Base64Coder_decode_Array1_char_int_int_Array1_byte_R_Array1_byte(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_decode_Array1_char_arc_util_serialization_Base64Coder$CharMap_R_Array1_byte(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:decode", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)SM_arc_util_serialization_Base64Coder_decode_Array1_char_int_int_arc_util_serialization_Base64Coder$CharMap_R_Array1_byte(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_decode_Array1_char_R_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:decode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(226);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jint temp1 = ((jarray) nullCheck(ctx, (frame[0].o)))->length;
	clinit_arc_util_serialization_Base64Coder(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_Base64Coder_regularMap;
	sp[1].o = (jobject)((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK(sp[1].o))->F_decodingMap;
	sp[0].o = (jobject)SM_arc_util_serialization_Base64Coder_decode_Array1_char_int_int_Array1_byte_R_Array1_byte(ctx, sp[0].o, temp0, temp1, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_decode_Array1_char_int_int_arc_util_serialization_Base64Coder$CharMap_R_Array1_byte(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:decode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK((frame[3].o)))->F_decodingMap;
	sp[0].o = (jobject)SM_arc_util_serialization_Base64Coder_decode_Array1_char_int_int_Array1_byte_R_Array1_byte(ctx, sp[0].o, temp0, temp1, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Base64Coder_decode_Array1_char_int_int_Array1_byte_R_Array1_byte(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[23];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:decode", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(244);
	if (((frame[2].i) % (jint(4))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(245);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Length of Base64 encoded input string is not a multiple of 4."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(247);
	if ((frame[2].i) <= 0) goto label_3;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[0].o), (((frame[1].i) + (frame[2].i)) - (jint(1))))) != (61)) goto label_3;
	}
	{
	LINE_NUMBER(248);
	INST_IINC(2, -1);
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(250);
	frame[4].i = (((frame[2].i) * (jint(3))) / (jint(4)));
	LINE_NUMBER(251);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(252);
	frame[6].i = (frame[1].i);
	LINE_NUMBER(253);
	frame[7].i = ((frame[1].i) + (frame[2].i));
	LINE_NUMBER(254);
	frame[8].i = (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(255);
	if ((frame[6].i) >= (frame[7].i)) goto label_10;
	}
	{
	LINE_NUMBER(256);
	sp[0].o = frame[0].o;
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	frame[9].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	LINE_NUMBER(257);
	sp[0].o = frame[0].o;
	jint temp1 = frame[6].i;
	INST_IINC(6, 1);
	frame[10].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp1));
	LINE_NUMBER(258);
	if ((frame[6].i) >= (frame[7].i)) goto label_14;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	jint temp1 = (jint)ARRAY_ACCESS(jchar, sp[0].o, temp0);
	sp[0].i = temp1;
	sp += 1;
	goto label_15;
	}
label_14:;
	INST_BIPUSH(65);
label_15:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(259);
	if ((frame[6].i) >= (frame[7].i)) goto label_17;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	jint temp1 = (jint)ARRAY_ACCESS(jchar, sp[0].o, temp0);
	sp[0].i = temp1;
	sp += 1;
	goto label_18;
	}
label_17:;
	INST_BIPUSH(65);
label_18:;
	{
	sp -= 1;
	frame[12].i = sp[0].i;
	LINE_NUMBER(260);
	if ((frame[9].i) > (127)) goto label_20;
	}
	{
	if ((frame[10].i) > (127)) goto label_20;
	}
	{
	if ((frame[11].i) > (127)) goto label_20;
	}
	{
	if ((frame[12].i) <= (127)) goto label_21;
	}
label_20:;
	{
	LINE_NUMBER(261);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Illegal character in Base64 encoded data."_j))));
	throwException(ctx, sp[0].o);	}
label_21:;
	{
	LINE_NUMBER(263);
	frame[13].i = ((jint)ARRAY_ACCESS(jbyte, (frame[3].o), (frame[9].i)));
	LINE_NUMBER(264);
	frame[14].i = ((jint)ARRAY_ACCESS(jbyte, (frame[3].o), (frame[10].i)));
	LINE_NUMBER(265);
	frame[15].i = ((jint)ARRAY_ACCESS(jbyte, (frame[3].o), (frame[11].i)));
	LINE_NUMBER(266);
	frame[16].i = ((jint)ARRAY_ACCESS(jbyte, (frame[3].o), (frame[12].i)));
	LINE_NUMBER(267);
	if ((frame[13].i) < 0) goto label_26;
	}
	INST_ILOAD(14);
	if ((--sp)->i < 0) goto label_26;
	INST_ILOAD(15);
	if ((--sp)->i < 0) goto label_26;
	INST_ILOAD(16);
	if ((--sp)->i >= 0) goto label_27;
label_26:;
	{
	LINE_NUMBER(268);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Illegal character in Base64 encoded data."_j))));
	throwException(ctx, sp[0].o);	}
label_27:;
	{
	LINE_NUMBER(270);
	frame[17].i = (((frame[13].i) << (jint(2))) | (bit_cast<jint>(bit_cast<uint32_t>((frame[14].i)) >> (jint(4)))));
	LINE_NUMBER(271);
	frame[18].i = ((((frame[14].i) & (15)) << (jint(4))) | (bit_cast<jint>(bit_cast<uint32_t>((frame[15].i)) >> (jint(2)))));
	LINE_NUMBER(272);
	frame[19].i = ((((frame[15].i) & (jint(3))) << (6)) | (frame[16].i));
	LINE_NUMBER(273);
	sp[0].o = frame[5].o;
	jint temp0 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((frame[17].i)));
	LINE_NUMBER(274);
	if ((frame[8].i) >= (frame[4].i)) goto label_32;
	}
	{
	LINE_NUMBER(275);
	sp[0].o = frame[5].o;
	jint temp0 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((frame[18].i)));
	}
label_32:;
	{
	LINE_NUMBER(277);
	if ((frame[8].i) >= (frame[4].i)) goto label_34;
	}
	{
	LINE_NUMBER(278);
	sp[0].o = frame[5].o;
	jint temp0 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((frame[19].i)));
	}
label_34:;
	LINE_NUMBER(280);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

void clinit_arc_util_serialization_Base64Coder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_util_serialization_Base64Coder_systemLineSeparator = ((jobject) createStringLiteral(ctx, u8"\n"_j));
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder(ctx);
	{
	LINE_NUMBER(6);
	clinit_arc_util_serialization_Base64Coder$CharMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Base64Coder$CharMap);
	init_arc_util_serialization_Base64Coder$CharMap_char_char(ctx, sp[0].o, (43), (47));
	clinit_arc_util_serialization_Base64Coder(ctx);
	SF_arc_util_serialization_Base64Coder_regularMap = sp[0].o;
	clinit_arc_util_serialization_Base64Coder$CharMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Base64Coder$CharMap);
	init_arc_util_serialization_Base64Coder$CharMap_char_char(ctx, sp[0].o, (45), (95));
	clinit_arc_util_serialization_Base64Coder(ctx);
	SF_arc_util_serialization_Base64Coder_urlsafeMap = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_serialization_Base64Coder[] {
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

static jclass innerClasses[] {
	&class_arc_util_serialization_Base64Coder$CharMap,
};

static FieldMetadata fields[] {
	{ "regularMap", &class_arc_util_serialization_Base64Coder$CharMap, (intptr_t) &SF_arc_util_serialization_Base64Coder_regularMap, "Larc/util/serialization/Base64Coder$CharMap;", 25 },
	{ "urlsafeMap", &class_arc_util_serialization_Base64Coder$CharMap, (intptr_t) &SF_arc_util_serialization_Base64Coder_urlsafeMap, "Larc/util/serialization/Base64Coder$CharMap;", 25 },
	{ "systemLineSeparator", &class_java_lang_String, (intptr_t) &SF_arc_util_serialization_Base64Coder_systemLineSeparator, "Ljava/lang/String;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_serialization_Base64Coder, 0, "()V", 2 },
	{ "encodeString", (intptr_t) SM_arc_util_serialization_Base64Coder_encodeString_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "encodeString", (intptr_t) SM_arc_util_serialization_Base64Coder_encodeString_java_lang_String_boolean_R_java_lang_String, 0, "(Ljava/lang/String;Z)Ljava/lang/String;", 9 },
	{ "encodeLines", (intptr_t) SM_arc_util_serialization_Base64Coder_encodeLines_Array1_byte_R_java_lang_String, 0, "([B)Ljava/lang/String;", 9 },
	{ "encodeLines", (intptr_t) SM_arc_util_serialization_Base64Coder_encodeLines_Array1_byte_int_int_int_java_lang_String_arc_util_serialization_Base64Coder$CharMap_R_java_lang_String, 0, "([BIIILjava/lang/String;Larc/util/serialization/Base64Coder$CharMap;)Ljava/lang/String;", 9 },
	{ "encodeLines", (intptr_t) SM_arc_util_serialization_Base64Coder_encodeLines_Array1_byte_int_int_int_java_lang_String_Array1_char_R_java_lang_String, 0, "([BIIILjava/lang/String;[C)Ljava/lang/String;", 9 },
	{ "encode", (intptr_t) SM_arc_util_serialization_Base64Coder_encode_Array1_byte_R_Array1_char, 0, "([B)[C", 9 },
	{ "encode", (intptr_t) SM_arc_util_serialization_Base64Coder_encode_Array1_byte_boolean_R_Array1_char, 0, "([BZ)[C", 9 },
	{ "encode", (intptr_t) SM_arc_util_serialization_Base64Coder_encode_Array1_byte_arc_util_serialization_Base64Coder$CharMap_R_Array1_char, 0, "([BLarc/util/serialization/Base64Coder$CharMap;)[C", 9 },
	{ "encode", (intptr_t) SM_arc_util_serialization_Base64Coder_encode_Array1_byte_Array1_char_R_Array1_char, 0, "([B[C)[C", 9 },
	{ "encode", (intptr_t) SM_arc_util_serialization_Base64Coder_encode_Array1_byte_int_R_Array1_char, 0, "([BI)[C", 9 },
	{ "encode", (intptr_t) SM_arc_util_serialization_Base64Coder_encode_Array1_byte_int_int_arc_util_serialization_Base64Coder$CharMap_R_Array1_char, 0, "([BIILarc/util/serialization/Base64Coder$CharMap;)[C", 9 },
	{ "encode", (intptr_t) SM_arc_util_serialization_Base64Coder_encode_Array1_byte_int_int_Array1_char_R_Array1_char, 0, "([BII[C)[C", 9 },
	{ "decodeString", (intptr_t) SM_arc_util_serialization_Base64Coder_decodeString_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "decodeString", (intptr_t) SM_arc_util_serialization_Base64Coder_decodeString_java_lang_String_boolean_R_java_lang_String, 0, "(Ljava/lang/String;Z)Ljava/lang/String;", 9 },
	{ "decodeLines", (intptr_t) SM_arc_util_serialization_Base64Coder_decodeLines_java_lang_String_R_Array1_byte, 0, "(Ljava/lang/String;)[B", 9 },
	{ "decodeLines", (intptr_t) SM_arc_util_serialization_Base64Coder_decodeLines_java_lang_String_arc_util_serialization_Base64Coder$CharMap_R_Array1_byte, 0, "(Ljava/lang/String;Larc/util/serialization/Base64Coder$CharMap;)[B", 9 },
	{ "decodeLines", (intptr_t) SM_arc_util_serialization_Base64Coder_decodeLines_java_lang_String_Array1_byte_R_Array1_byte, 0, "(Ljava/lang/String;[B)[B", 9 },
	{ "decode", (intptr_t) SM_arc_util_serialization_Base64Coder_decode_java_lang_String_R_Array1_byte, 0, "(Ljava/lang/String;)[B", 9 },
	{ "decode", (intptr_t) SM_arc_util_serialization_Base64Coder_decode_java_lang_String_arc_util_serialization_Base64Coder$CharMap_R_Array1_byte, 0, "(Ljava/lang/String;Larc/util/serialization/Base64Coder$CharMap;)[B", 9 },
	{ "decode", (intptr_t) SM_arc_util_serialization_Base64Coder_decode_Array1_char_Array1_byte_R_Array1_byte, 0, "([C[B)[B", 9 },
	{ "decode", (intptr_t) SM_arc_util_serialization_Base64Coder_decode_Array1_char_arc_util_serialization_Base64Coder$CharMap_R_Array1_byte, 0, "([CLarc/util/serialization/Base64Coder$CharMap;)[B", 9 },
	{ "decode", (intptr_t) SM_arc_util_serialization_Base64Coder_decode_Array1_char_R_Array1_byte, 0, "([C)[B", 9 },
	{ "decode", (intptr_t) SM_arc_util_serialization_Base64Coder_decode_Array1_char_int_int_arc_util_serialization_Base64Coder$CharMap_R_Array1_byte, 0, "([CIILarc/util/serialization/Base64Coder$CharMap;)[B", 9 },
	{ "decode", (intptr_t) SM_arc_util_serialization_Base64Coder_decode_Array1_char_int_int_Array1_byte_R_Array1_byte, 0, "([CII[B)[B", 9 },
	{ "<clinit>", (intptr_t) clinit_arc_util_serialization_Base64Coder, 0, "()V", 8 },
};

Class class_arc_util_serialization_Base64Coder{
		.nativeName = (intptr_t) "arc/util/serialization/Base64Coder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_serialization_Base64Coder),
		.classVtable = (intptr_t) vtable_arc_util_serialization_Base64Coder,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_Base64Coder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_Base64Coder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 26,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_Base64Coder = registerClass(&class_arc_util_serialization_Base64Coder);

}
