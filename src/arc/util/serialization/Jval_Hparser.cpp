#include "arc/util/serialization/Jval_Hparser.h"
#include "java/lang/Exception.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "arc/util/serialization/Jval.h"
#include "arc/util/serialization/Jval_JsonMap.h"
#include "arc/util/serialization/Jval_Hparser.h"
#include "java/lang/Long.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/lang/NumberFormatException.h"
#include "java/util/Arrays.h"
#include "arc/struct/Seq.h"
#include "arc/util/serialization/Jval_JsonParseException.h"
#include "java/io/Reader.h"
#include "arc/util/serialization/Jval_Hwriter.h"
#include "java/lang/Double.h"
#include "arc/util/serialization/Jval_JsonArray.h"

extern "C" {


void mark_arc_util_serialization_Jval$Hparser(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_serialization_Jval$Hparser *) object;
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
	if (self->F_captureBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_captureBuffer)->clazz)->markFunction)((jobject) self->F_captureBuffer, mark, depth + 1);
}

void clinit_arc_util_serialization_Jval$Hparser(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_serialization_Jval$Hparser_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Hparser(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(460);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(461);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (frame[1].o));
	((arc_util_serialization_Jval$Hparser *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(462);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_buffer;
	((arc_util_serialization_Jval$Hparser *) NULL_CHECK(sp[0].o))->F_bufferLength = (((jarray) nullCheck(ctx, sp[1].o))->length);
	LINE_NUMBER(463);
	((func_arc_util_serialization_Jval$Hparser_reset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval$Hparser_reset])(ctx, (frame[0].o));
	LINE_NUMBER(464);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_util_serialization_Jval$Hparser_java_io_Reader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Hparser(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(466);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(467);
	sp[0].o = (jobject) createArray(ctx, &class_char, (8192));
	frame[2].o = sp[0].o;
	LINE_NUMBER(468);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(469);
	jint temp0 = (jint)((func_java_io_Reader_read_Array1_char_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Reader_read_Array1_char_int_int_R_int])(ctx, (frame[1].o), (frame[2].o), (frame[3].i), ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i)));
	frame[4].i = temp0;
	if (temp0 == (jint(-1))) goto label_5;
	}
	{
	LINE_NUMBER(470);
	frame[3].i = ((frame[3].i) + (frame[4].i));
	LINE_NUMBER(471);
	if ((frame[3].i) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_3;
	}
	{
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_char_int_R_Array1_char(ctx, (frame[2].o), ((((jarray) nullCheck(ctx, (frame[2].o)))->length) * (jint(2))));
	frame[2].o = sp[0].o;
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(473);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[3].i) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_8;
	}
	INST_ALOAD(2);
	goto label_9;
label_8:;
	{
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_char_int_R_Array1_char(ctx, (frame[2].o), (frame[3].i));
	sp += 1;
	}
label_9:;
	{
	sp -= 2;
	((arc_util_serialization_Jval$Hparser *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(474);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_buffer;
	((arc_util_serialization_Jval$Hparser *) NULL_CHECK(sp[0].o))->F_bufferLength = (((jarray) nullCheck(ctx, sp[1].o))->length);
	LINE_NUMBER(475);
	((func_arc_util_serialization_Jval$Hparser_reset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval$Hparser_reset])(ctx, (frame[0].o));
	LINE_NUMBER(476);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_arc_util_serialization_Jval$Hparser_isWhiteSpace_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:isWhiteSpace", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Hparser(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(479);
	if ((frame[0].i) == (32)) goto label_1;
	}
	{
	if ((frame[0].i) == (9)) goto label_1;
	}
	{
	if ((frame[0].i) == (10)) goto label_1;
	}
	{
	if ((frame[0].i) != (13)) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_util_serialization_Jval$Hparser_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:reset", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(483);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jint temp0 = jint(0);
	((arc_util_serialization_Jval$Hparser *) NULL_CHECK(sp[2].o))->F_current = temp0;
	((arc_util_serialization_Jval$Hparser *) NULL_CHECK(sp[1].o))->F_lineOffset = temp0;
	((arc_util_serialization_Jval$Hparser *) NULL_CHECK(sp[0].o))->F_index = temp0;
	LINE_NUMBER(484);
	((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_line = (jint(1));
	LINE_NUMBER(485);
	((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_captureBuffer = (jref) (jobject(nullptr));
	LINE_NUMBER(486);
	((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_escaped = (jint(0));
	LINE_NUMBER(487);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval$Hparser_parse_R_arc_util_serialization_Jval(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:parse", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(492);
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	LINE_NUMBER(493);
	M_arc_util_serialization_Jval$Hparser_skipWhiteSpace(ctx, (frame[0].o));
	LINE_NUMBER(495);
	switch(((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current)) {
		case 91: goto label_11;
		case 123: goto label_11;
		default: goto label_0;
	}
	}
label_11:;
	{
	LINE_NUMBER(498);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_arc_util_serialization_Jval$Hparser_readValue_R_arc_util_serialization_Jval(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Jval$Hparser_checkTrailing_arc_util_serialization_Jval_R_arc_util_serialization_Jval) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval$Hparser_checkTrailing_arc_util_serialization_Jval_R_arc_util_serialization_Jval])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(502);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_arc_util_serialization_Jval$Hparser_readObject_boolean_R_arc_util_serialization_Jval(ctx, (frame[0].o), (jint(1)));
	sp[0].o = (jobject)((func_arc_util_serialization_Jval$Hparser_checkTrailing_arc_util_serialization_Jval_R_arc_util_serialization_Jval) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval$Hparser_checkTrailing_arc_util_serialization_Jval_R_arc_util_serialization_Jval])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(503);
	frame[1].o = sp[0].o;
	LINE_NUMBER(505);
	((func_arc_util_serialization_Jval$Hparser_reset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval$Hparser_reset])(ctx, (frame[0].o));
	LINE_NUMBER(506);
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	LINE_NUMBER(507);
	M_arc_util_serialization_Jval$Hparser_skipWhiteSpace(ctx, (frame[0].o));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(509);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_arc_util_serialization_Jval$Hparser_readValue_R_arc_util_serialization_Jval(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Jval$Hparser_checkTrailing_arc_util_serialization_Jval_R_arc_util_serialization_Jval) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval$Hparser_checkTrailing_arc_util_serialization_Jval_R_arc_util_serialization_Jval])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(510);
	frame[2].o = sp[0].o;
	LINE_NUMBER(512);
	throwException(ctx, (frame[1].o));	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval$Hparser_checkTrailing_arc_util_serialization_Jval_R_arc_util_serialization_Jval(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:checkTrailing", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(518);
	M_arc_util_serialization_Jval$Hparser_skipWhiteSpace(ctx, (frame[0].o));
	LINE_NUMBER(519);
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_isEndOfText_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Extra characters in input: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)M_arc_util_serialization_Jval$Hparser_error_java_lang_String_R_arc_util_serialization_Jval$JsonParseException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(520);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval$Hparser_readValue_R_arc_util_serialization_Jval(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:readValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(524);
	switch(((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current)) {
		case 34: goto label_1;
		case 39: goto label_1;
		case 91: goto label_2;
		case 123: goto label_3;
		default: goto label_4;
	}
	}
label_1:;
	{
	LINE_NUMBER(527);
	sp[0].o = (jobject)M_arc_util_serialization_Jval$Hparser_readString_R_arc_util_serialization_Jval(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(529);
	sp[0].o = (jobject)M_arc_util_serialization_Jval$Hparser_readArray_R_arc_util_serialization_Jval(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(531);
	sp[0].o = (jobject)M_arc_util_serialization_Jval$Hparser_readObject_boolean_R_arc_util_serialization_Jval(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(533);
	sp[0].o = (jobject)M_arc_util_serialization_Jval$Hparser_readTfnns_R_arc_util_serialization_Jval(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval$Hparser_readTfnns_R_arc_util_serialization_Jval(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:readTfnns", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(538);
	frame[1].i = (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_index) - (jint(1)));
	LINE_NUMBER(539);
	frame[2].i = ((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current);
	LINE_NUMBER(540);
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hwriter_isPunctuatorChar_int_R_boolean(ctx, (frame[2].i));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(541);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Found a punctuator character '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (jchar((frame[2].i))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"' when expecting a quoteless string (check your syntax)"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)M_arc_util_serialization_Jval$Hparser_error_java_lang_String_R_arc_util_serialization_Jval$JsonParseException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(544);
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	LINE_NUMBER(545);
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) == (35)) goto label_6;
	}
	{
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) != (47)) goto label_7;
	}
	{
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_peek_R_int(ctx, (frame[0].o));
	if (temp0 == (47)) goto label_6;
	}
	{
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_peek_R_int(ctx, (frame[0].o));
	if (temp0 != (42)) goto label_7;
	}
label_6:;
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(546);
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) < 0) goto label_10;
	}
	{
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) == (13)) goto label_10;
	}
	{
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) == (10)) goto label_10;
	}
	{
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) != (44)) goto label_11;
	}
	{
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_isArray) != 0) goto label_10;
	}
label_11:;
	{
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) == (93)) goto label_10;
	}
	{
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) == (125)) goto label_10;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_12;
label_10:;
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(547);
	if ((frame[4].i) != 0) goto label_15;
	}
	{
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) != (44)) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(548);
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) >= 0) goto label_17;
	}
	{
	jint temp0 = (jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].i = temp0;
	sp += 1;
	goto label_18;
	}
label_17:;
	{
	jint temp0 = ((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_index) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_18:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(550);
	switch((frame[2].i)) {
		case 102: goto label_20;
		case 110: goto label_20;
		case 116: goto label_20;
		default: goto label_21;
	}
	}
label_20:;
	{
	LINE_NUMBER(554);
	frame[6].i = (frame[1].i);
	frame[7].i = (frame[5].i);
	}
label_23:;
	{
	LINE_NUMBER(555);
	if ((frame[6].i) >= (frame[7].i)) goto label_24;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hparser_isTrimChar_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[6].i))));
	if (temp0 == 0) goto label_24;
	}
	INST_IINC(6, 1);
	goto label_23;
label_24:;
	{
	LINE_NUMBER(556);
	if ((frame[7].i) <= (frame[6].i)) goto label_25;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hparser_isTrimChar_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, sp[0].o, ((frame[7].i) - (jint(1))))));
	if (temp0 == 0) goto label_25;
	}
	INST_IINC(7, -1);
	goto label_24;
label_25:;
	{
	LINE_NUMBER(557);
	frame[8].i = ((frame[7].i) - (frame[6].i));
	LINE_NUMBER(558);
	if ((frame[8].i) != (jint(5))) goto label_27;
	}
	{
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_regionMatches_int_java_lang_String_R_boolean(ctx, (frame[0].o), (frame[6].i), (((jobject) createStringLiteral(ctx, u8"false"_j))));
	if (temp0 == 0) goto label_27;
	}
	clinit_arc_util_serialization_Jval(ctx);
	(sp++)->o = SF_arc_util_serialization_Jval_FALSE;
	popStackFrame(ctx);
	INST_ARETURN();
label_27:;
	{
	LINE_NUMBER(559);
	if ((frame[8].i) != (jint(4))) goto label_28;
	}
	{
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_regionMatches_int_java_lang_String_R_boolean(ctx, (frame[0].o), (frame[6].i), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	if (temp0 == 0) goto label_28;
	}
	clinit_arc_util_serialization_Jval(ctx);
	(sp++)->o = SF_arc_util_serialization_Jval_NULL;
	popStackFrame(ctx);
	INST_ARETURN();
label_28:;
	{
	LINE_NUMBER(560);
	if ((frame[8].i) != (jint(4))) goto label_29;
	}
	{
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_regionMatches_int_java_lang_String_R_boolean(ctx, (frame[0].o), (frame[6].i), (((jobject) createStringLiteral(ctx, u8"true"_j))));
	if (temp0 == 0) goto label_29;
	}
	clinit_arc_util_serialization_Jval(ctx);
	(sp++)->o = SF_arc_util_serialization_Jval_TRUE;
	popStackFrame(ctx);
	INST_ARETURN();
label_21:;
	{
	LINE_NUMBER(564);
	if ((frame[2].i) == (45)) goto label_30;
	}
	{
	if ((frame[2].i) < (48)) goto label_29;
	}
	{
	if ((frame[2].i) > (57)) goto label_29;
	}
label_30:;
	{
	LINE_NUMBER(565);
	sp[0].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)SM_arc_util_serialization_Jval$Hparser_tryParseNumber_Array1_char_int_int_boolean_R_arc_util_serialization_Jval(ctx, sp[0].o, (frame[1].i), (frame[5].i), (jint(0)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(566);
	if ((frame[6].o) == nullptr) goto label_29;
	}
	INST_ALOAD(6);
	popStackFrame(ctx);
	INST_ARETURN();
label_29:;
	{
	LINE_NUMBER(569);
	if ((frame[4].i) == 0) goto label_16;
	}
	{
	LINE_NUMBER(570);
	frame[6].i = (frame[5].i);
	LINE_NUMBER(572);
	if ((frame[6].i) <= (frame[1].i)) goto label_34;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_buffer;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, ((frame[6].i) - (jint(1))))) != (44)) goto label_34;
	}
	INST_IINC(6, -1);
label_34:;
	{
	LINE_NUMBER(574);
	frame[7].i = (frame[1].i);
	frame[8].i = (frame[6].i);
	}
label_36:;
	{
	LINE_NUMBER(575);
	if ((frame[7].i) >= (frame[8].i)) goto label_37;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hparser_isTrimChar_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[7].i))));
	if (temp0 == 0) goto label_37;
	}
	INST_IINC(7, 1);
	goto label_36;
label_37:;
	{
	LINE_NUMBER(576);
	if ((frame[8].i) <= (frame[7].i)) goto label_38;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hparser_isTrimChar_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, sp[0].o, ((frame[8].i) - (jint(1))))));
	if (temp0 == 0) goto label_38;
	}
	INST_IINC(8, -1);
	goto label_37;
label_38:;
	{
	LINE_NUMBER(577);
	clinit_arc_util_serialization_Jval(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	sp[2].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_buffer;
	init_java_lang_String_Array1_char_int_int(ctx, sp[1].o, sp[2].o, (frame[7].i), ((frame[8].i) - (frame[7].i)));
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_16:;
	LINE_NUMBER(580);
	goto label_3;

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Jval$Hparser_tryParseNumber_Array1_char_int_int_boolean_R_arc_util_serialization_Jval(jcontext ctx, jobject param0, jint param1, jint param2, jbool param3) {
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:tryParseNumber", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Hparser(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(584);
	frame[4].i = (frame[1].i);
	frame[5].i = (frame[2].i);
	LINE_NUMBER(585);
	if ((frame[4].i) >= (frame[5].i)) goto label_7;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[4].i))) != (45)) goto label_7;
	}
	INST_IINC(4, 1);
label_7:;
	{
	LINE_NUMBER(587);
	if ((frame[4].i) < (frame[5].i)) goto label_8;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	{
	LINE_NUMBER(588);
	sp[0].o = frame[0].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	frame[6].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	LINE_NUMBER(589);
	jint temp1 = (jint)SM_arc_util_serialization_Jval$Hparser_isDigit_char_R_boolean(ctx, (frame[6].i));
	if (temp1 != 0) goto label_10;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_10:;
	{
	LINE_NUMBER(591);
	if ((frame[6].i) != (48)) goto label_11;
	}
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_11;
	}
	{
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hparser_isDigit_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[4].i))));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(592);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_11:;
	{
	LINE_NUMBER(594);
	if ((frame[4].i) >= (frame[5].i)) goto label_13;
	}
	{
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hparser_isDigit_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[4].i))));
	if (temp0 == 0) goto label_13;
	}
	INST_IINC(4, 1);
	goto label_11;
label_13:;
	{
	LINE_NUMBER(597);
	if ((frame[4].i) >= (frame[5].i)) goto label_14;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[4].i))) != (46)) goto label_14;
	}
	{
	LINE_NUMBER(598);
	INST_IINC(4, 1);
	LINE_NUMBER(599);
	if ((frame[4].i) >= (frame[5].i)) goto label_17;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	jint temp1 = (jint)SM_arc_util_serialization_Jval$Hparser_isDigit_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0)));
	if (temp1 != 0) goto label_18;
	}
label_17:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_18:;
	{
	LINE_NUMBER(600);
	if ((frame[4].i) >= (frame[5].i)) goto label_14;
	}
	{
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hparser_isDigit_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[4].i))));
	if (temp0 == 0) goto label_14;
	}
	INST_IINC(4, 1);
	goto label_18;
label_14:;
	{
	LINE_NUMBER(604);
	if ((frame[4].i) >= (frame[5].i)) goto label_19;
	}
	{
	jint temp0 = (jint)SM_java_lang_Character_toLowerCase_char_R_char(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[4].i))));
	if (temp0 != (101)) goto label_19;
	}
	{
	LINE_NUMBER(605);
	INST_IINC(4, 1);
	LINE_NUMBER(606);
	if ((frame[4].i) >= (frame[5].i)) goto label_22;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[4].i))) == (43)) goto label_23;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[4].i))) != (45)) goto label_22;
	}
label_23:;
	INST_IINC(4, 1);
label_22:;
	{
	LINE_NUMBER(607);
	if ((frame[4].i) >= (frame[5].i)) goto label_24;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	jint temp1 = (jint)SM_arc_util_serialization_Jval$Hparser_isDigit_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0)));
	if (temp1 != 0) goto label_25;
	}
label_24:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_25:;
	{
	LINE_NUMBER(608);
	if ((frame[4].i) >= (frame[5].i)) goto label_19;
	}
	{
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hparser_isDigit_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[4].i))));
	if (temp0 == 0) goto label_19;
	}
	INST_IINC(4, 1);
	goto label_25;
label_19:;
	{
	LINE_NUMBER(611);
	frame[7].i = (frame[4].i);
	}
label_26:;
	{
	LINE_NUMBER(612);
	if ((frame[4].i) >= (frame[5].i)) goto label_27;
	}
	{
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hparser_isWhiteSpace_int_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[4].i))));
	if (temp0 == 0) goto label_27;
	}
	INST_IINC(4, 1);
	goto label_26;
label_27:;
	{
	LINE_NUMBER(614);
	frame[8].i = (jint(0));
	LINE_NUMBER(615);
	if ((frame[4].i) >= (frame[5].i)) goto label_29;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_29;
	{
	LINE_NUMBER(616);
	frame[9].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[4].i)));
	LINE_NUMBER(617);
	if ((frame[9].i) == (44)) goto label_32;
	}
	{
	if ((frame[9].i) == (125)) goto label_32;
	}
	{
	if ((frame[9].i) == (93)) goto label_32;
	}
	{
	if ((frame[9].i) == (35)) goto label_32;
	}
	{
	if ((frame[9].i) != (47)) goto label_29;
	}
	{
	if ((frame[5].i) <= ((frame[4].i) + (jint(1)))) goto label_29;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[0].o), ((frame[4].i) + (jint(1))))) == (47)) goto label_32;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[0].o), ((frame[4].i) + (jint(1))))) != (42)) goto label_29;
	}
label_32:;
	{
	LINE_NUMBER(618);
	frame[8].i = (jint(1));
	}
label_29:;
	{
	LINE_NUMBER(621);
	if ((frame[4].i) >= (frame[5].i)) goto label_33;
	}
	INST_ILOAD(8);
	if ((--sp)->i != 0) goto label_33;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_33:;
	{
	LINE_NUMBER(623);
	frame[9].i = (jint(0));
	LINE_NUMBER(624);
	frame[10].i = (frame[1].i);
	}
label_35:;
	{
	if ((frame[10].i) >= (frame[7].i)) goto label_36;
	}
	{
	LINE_NUMBER(625);
	frame[11].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[10].i)));
	LINE_NUMBER(626);
	if ((frame[11].i) == (46)) goto label_39;
	}
	{
	if ((frame[11].i) == (101)) goto label_39;
	}
	{
	if ((frame[11].i) != (69)) goto label_40;
	}
label_39:;
	{
	LINE_NUMBER(627);
	frame[9].i = (jint(1));
	LINE_NUMBER(628);
	goto label_36;
	}
label_40:;
	{
	LINE_NUMBER(624);
	INST_IINC(10, 1);
	goto label_35;
	}
label_36:;
	{
	LINE_NUMBER(632);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[0].o), (frame[1].i), ((frame[7].i) - (frame[1].i)));
	frame[10].o = sp[0].o;
	LINE_NUMBER(634);
	if ((frame[9].i) != 0) goto label_43;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(636);
	clinit_arc_util_serialization_Jval(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_R_long(ctx, (frame[10].o));
	sp[1].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, temp0);
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	LINE_NUMBER(637);
	INST_ASTORE(11);
label_43:;
	{
	LINE_NUMBER(641);
	clinit_arc_util_serialization_Jval(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, (frame[10].o));
	sp[1].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, temp0);
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_Jval$Hparser_regionMatches_int_java_lang_String_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:regionMatches", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(645);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(646);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)ARRAY_ACCESS(jchar, sp[0].o, ((frame[1].i) + (frame[4].i)));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[4].i));
	if (temp0 == temp1) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	INST_IINC(4, 1);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(647);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_arc_util_serialization_Jval$Hparser_isTrimChar_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:isTrimChar", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Hparser(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(652);
	if ((frame[0].i) > (32)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval$Hparser_readArray_R_arc_util_serialization_Jval(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:readArray", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(656);
	((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_isArray = (jint(1));
	LINE_NUMBER(657);
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	LINE_NUMBER(658);
	clinit_arc_util_serialization_Jval$JsonArray(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval$JsonArray);
	init_arc_util_serialization_Jval$JsonArray(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(659);
	M_arc_util_serialization_Jval$Hparser_skipWhiteSpace(ctx, (frame[0].o));
	LINE_NUMBER(660);
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_readIf_char_R_boolean(ctx, (frame[0].o), (93));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(661);
	clinit_arc_util_serialization_Jval(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(664);
	M_arc_util_serialization_Jval$Hparser_skipWhiteSpace(ctx, (frame[0].o));
	LINE_NUMBER(665);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)M_arc_util_serialization_Jval$Hparser_readValue_R_arc_util_serialization_Jval(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Jval$JsonArray_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval$JsonArray_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(666);
	M_arc_util_serialization_Jval$Hparser_skipWhiteSpace(ctx, (frame[0].o));
	LINE_NUMBER(667);
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_readIf_char_R_boolean(ctx, (frame[0].o), (44));
	if (temp0 == 0) goto label_10;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_arc_util_serialization_Jval$Hparser_skipWhiteSpace(ctx, sp[0].o);
label_10:;
	{
	LINE_NUMBER(668);
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_readIf_char_R_boolean(ctx, (frame[0].o), (93));
	if (temp0 == 0) goto label_11;
	}
	goto label_12;
label_11:;
	{
	LINE_NUMBER(669);
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_isEndOfText_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)M_arc_util_serialization_Jval$Hparser_error_java_lang_String_R_arc_util_serialization_Jval$JsonParseException(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"End of input while parsing an array (did you forget a closing ']'?)"_j))));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(671);
	((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_isArray = (jint(0));
	LINE_NUMBER(672);
	clinit_arc_util_serialization_Jval(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval$Hparser_readObject_boolean_R_arc_util_serialization_Jval(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:readObject", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(676);
	if ((frame[1].i) != 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_arc_util_serialization_Jval$Hparser_read(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(677);
	clinit_arc_util_serialization_Jval$JsonMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval$JsonMap);
	init_arc_util_serialization_Jval$JsonMap(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(678);
	M_arc_util_serialization_Jval$Hparser_skipWhiteSpace(ctx, (frame[0].o));
	}
label_3:;
	{
	LINE_NUMBER(680);
	if ((frame[1].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(681);
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_isEndOfText_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_6;
	}
	goto label_7;
label_4:;
	{
	LINE_NUMBER(683);
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_isEndOfText_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)M_arc_util_serialization_Jval$Hparser_error_java_lang_String_R_arc_util_serialization_Jval$JsonParseException(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"End of input while parsing an object (did you forget a closing '}'?)"_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(684);
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_readIf_char_R_boolean(ctx, (frame[0].o), (125));
	if (temp0 == 0) goto label_6;
	}
	goto label_7;
label_6:;
	{
	LINE_NUMBER(686);
	sp[0].o = (jobject)M_arc_util_serialization_Jval$Hparser_readName_R_java_lang_String(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(687);
	M_arc_util_serialization_Jval$Hparser_skipWhiteSpace(ctx, (frame[0].o));
	LINE_NUMBER(688);
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_readIf_char_R_boolean(ctx, (frame[0].o), (58));
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(689);
	sp[0].o = (jobject)M_arc_util_serialization_Jval$Hparser_expected_java_lang_String_R_arc_util_serialization_Jval$JsonParseException(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"':'"_j))));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(691);
	M_arc_util_serialization_Jval$Hparser_skipWhiteSpace(ctx, (frame[0].o));
	LINE_NUMBER(692);
	sp[0].o = frame[2].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)M_arc_util_serialization_Jval$Hparser_readValue_R_arc_util_serialization_Jval(ctx, (frame[0].o));
	((func_arc_util_serialization_Jval$JsonMap_putAdd_java_lang_String_arc_util_serialization_Jval) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval$JsonMap_putAdd_java_lang_String_arc_util_serialization_Jval])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(693);
	M_arc_util_serialization_Jval$Hparser_skipWhiteSpace(ctx, (frame[0].o));
	LINE_NUMBER(694);
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_readIf_char_R_boolean(ctx, (frame[0].o), (44));
	if (temp0 == 0) goto label_16;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_arc_util_serialization_Jval$Hparser_skipWhiteSpace(ctx, sp[0].o);
label_16:;
	LINE_NUMBER(695);
	goto label_3;
label_7:;
	{
	LINE_NUMBER(696);
	clinit_arc_util_serialization_Jval(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval$Hparser_readName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:readName", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(700);
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) == (34)) goto label_1;
	}
	{
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) != (39)) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)M_arc_util_serialization_Jval$Hparser_readStringInternal_boolean_R_java_lang_String(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(702);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(703);
	frame[2].i = (jint(-1));
	frame[3].i = ((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_index);
	}
label_5:;
	{
	LINE_NUMBER(705);
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) != (58)) goto label_6;
	}
	{
	LINE_NUMBER(706);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)M_arc_util_serialization_Jval$Hparser_error_java_lang_String_R_arc_util_serialization_Jval$JsonParseException(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Found ':' but no key name (for an empty key name use quotes)"_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(707);
	if ((frame[2].i) < 0) goto label_9;
	}
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[1].o));
	if (temp0 == temp1) goto label_9;
	}
	{
	LINE_NUMBER(708);
	((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_index = ((frame[3].i) + (frame[2].i));
	LINE_NUMBER(709);
	sp[0].o = (jobject)M_arc_util_serialization_Jval$Hparser_error_java_lang_String_R_arc_util_serialization_Jval$JsonParseException(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Found whitespace in your key name (use quotes to include)"_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(711);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(712);
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hparser_isWhiteSpace_int_R_boolean(ctx, ((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(713);
	if ((frame[2].i) >= 0) goto label_14;
	}
	{
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(714);
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) >= (32)) goto label_15;
	}
	{
	LINE_NUMBER(715);
	sp[0].o = (jobject)M_arc_util_serialization_Jval$Hparser_error_java_lang_String_R_arc_util_serialization_Jval$JsonParseException(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Name is not closed"_j))));
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(716);
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hwriter_isPunctuatorChar_int_R_boolean(ctx, ((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(717);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Found '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (jchar(((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"' where a key name was expected (check your syntax or use quotes if the key name includes {}[],: or whitespace)"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)M_arc_util_serialization_Jval$Hparser_error_java_lang_String_R_arc_util_serialization_Jval$JsonParseException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(718);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (jchar(((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current))));
	}
label_14:;
	{
	LINE_NUMBER(719);
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	goto label_5;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval$Hparser_readMlString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:readMlString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(726);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(727);
	frame[2].i = (jint(0));
	LINE_NUMBER(730);
	frame[3].i = ((((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_index) - ((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_lineOffset)) - (jint(4)));
	}
label_3:;
	{
	LINE_NUMBER(734);
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hparser_isWhiteSpace_int_R_boolean(ctx, ((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current));
	if (temp0 == 0) goto label_4;
	}
	{
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) == (10)) goto label_4;
	}
	{
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(737);
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) != (10)) goto label_5;
	}
	{
	LINE_NUMBER(738);
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	LINE_NUMBER(739);
	M_arc_util_serialization_Jval$Hparser_skipIndent_int(ctx, (frame[0].o), (frame[3].i));
	}
label_5:;
	{
	LINE_NUMBER(744);
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) >= 0) goto label_8;
	}
	{
	sp[0].o = (jobject)M_arc_util_serialization_Jval$Hparser_error_java_lang_String_R_arc_util_serialization_Jval$JsonParseException(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Bad multiline string"_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(745);
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) != (39)) goto label_9;
	}
	{
	LINE_NUMBER(746);
	INST_IINC(2, 1);
	LINE_NUMBER(747);
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	LINE_NUMBER(748);
	if ((frame[2].i) != (jint(3))) goto label_5;
	}
	{
	LINE_NUMBER(749);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	if (temp1 != (10)) goto label_14;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_deleteCharAt_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_deleteCharAt_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (temp0 - (jint(1))));
	}
label_14:;
	{
	LINE_NUMBER(751);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(754);
	if ((frame[2].i) <= 0) goto label_15;
	}
	{
	LINE_NUMBER(755);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (39));
	LINE_NUMBER(756);
	INST_IINC(2, -1);
	goto label_9;
	}
label_15:;
	{
	LINE_NUMBER(759);
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) != (10)) goto label_18;
	}
	{
	LINE_NUMBER(760);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (10));
	LINE_NUMBER(761);
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	LINE_NUMBER(762);
	M_arc_util_serialization_Jval$Hparser_skipIndent_int(ctx, (frame[0].o), (frame[3].i));
	goto label_5;
	}
label_18:;
	{
	LINE_NUMBER(764);
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) == (13)) goto label_22;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (jchar(((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current))));
	}
label_22:;
	{
	LINE_NUMBER(765);
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	goto label_5;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Jval$Hparser_skipIndent_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:skipIndent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
label_0:;
	{
	LINE_NUMBER(771);
	jint temp0 = frame[1].i;
	INST_IINC(1, -1);
	if (temp0 <= 0) goto label_1;
	}
	{
	LINE_NUMBER(772);
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hparser_isWhiteSpace_int_R_boolean(ctx, ((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current));
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) == (10)) goto label_1;
	}
	{
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	goto label_0;
	}
label_1:;
	LINE_NUMBER(775);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval$Hparser_readString_R_arc_util_serialization_Jval(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:readString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(778);
	clinit_arc_util_serialization_Jval(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	sp[1].o = (jobject)M_arc_util_serialization_Jval$Hparser_readStringInternal_boolean_R_java_lang_String(ctx, (frame[0].o), (jint(1)));
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval$Hparser_readStringInternal_boolean_R_java_lang_String(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:readStringInternal", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(783);
	frame[2].i = ((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current);
	LINE_NUMBER(784);
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	LINE_NUMBER(785);
	M_arc_util_serialization_Jval$Hparser_startCapture(ctx, (frame[0].o));
	}
label_3:;
	{
	LINE_NUMBER(786);
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) < 0) goto label_4;
	}
	{
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) == (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(787);
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) != (92)) goto label_6;
	}
	{
	M_arc_util_serialization_Jval$Hparser_readEscape(ctx, (frame[0].o));
	goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(788);
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(790);
	sp[0].o = (jobject)M_arc_util_serialization_Jval$Hparser_endCapture_R_java_lang_String(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(791);
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	LINE_NUMBER(793);
	if ((frame[1].i) == 0) goto label_9;
	}
	{
	if ((frame[2].i) != (39)) goto label_9;
	}
	{
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) != (39)) goto label_9;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(795);
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	LINE_NUMBER(796);
	sp[0].o = (jobject)M_arc_util_serialization_Jval$Hparser_readMlString_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(797);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Jval$Hparser_startCapture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:startCapture", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(801);
	((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_captureStart = (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_index) - (jint(1)));
	LINE_NUMBER(802);
	((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_rawStart = ((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_captureStart);
	LINE_NUMBER(803);
	((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_escaped = (jint(0));
	LINE_NUMBER(804);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Jval$Hparser_readEscape(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:readEscape", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(808);
	frame[1].i = (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_index) - (jint(1)));
	LINE_NUMBER(809);
	sp[0].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_captureBuffer;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[1].o, (32));
	((arc_util_serialization_Jval$Hparser *) NULL_CHECK(sp[0].o))->F_captureBuffer = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(810);
	sp[0].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_captureBuffer;
	sp[1].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o, ((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_rawStart), ((frame[1].i) - ((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_rawStart)));
	LINE_NUMBER(811);
	((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_escaped = (jint(1));
	LINE_NUMBER(813);
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	LINE_NUMBER(814);
	switch(((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current)) {
		case 34: goto label_6;
		case 35: goto label_6;
		case 39: goto label_6;
		case 47: goto label_6;
		case 92: goto label_6;
		case 98: goto label_7;
		case 102: goto label_8;
		case 110: goto label_9;
		case 114: goto label_10;
		case 116: goto label_11;
		case 117: goto label_12;
		default: goto label_13;
	}
	}
label_6:;
	{
	LINE_NUMBER(820);
	sp[0].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_captureBuffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (jchar(((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current))));
	LINE_NUMBER(821);
	goto label_15;
	}
label_7:;
	{
	LINE_NUMBER(823);
	sp[0].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_captureBuffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (8));
	LINE_NUMBER(824);
	goto label_15;
	}
label_8:;
	{
	LINE_NUMBER(826);
	sp[0].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_captureBuffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (12));
	LINE_NUMBER(827);
	goto label_15;
	}
label_9:;
	{
	LINE_NUMBER(829);
	sp[0].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_captureBuffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (10));
	LINE_NUMBER(830);
	goto label_15;
	}
label_10:;
	{
	LINE_NUMBER(832);
	sp[0].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_captureBuffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (13));
	LINE_NUMBER(833);
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(835);
	sp[0].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_captureBuffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (9));
	LINE_NUMBER(836);
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(838);
	sp[0].o = (jobject) createArray(ctx, &class_char, (jint(4)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(839);
	frame[3].i = (jint(0));
	}
label_22:;
	{
	if ((frame[3].i) >= (jint(4))) goto label_23;
	}
	{
	LINE_NUMBER(840);
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	LINE_NUMBER(841);
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_isHexDigit_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_26;
	}
	{
	LINE_NUMBER(842);
	sp[0].o = (jobject)M_arc_util_serialization_Jval$Hparser_expected_java_lang_String_R_arc_util_serialization_Jval$JsonParseException(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"hexadecimal digit"_j))));
	throwException(ctx, sp[0].o);	}
label_26:;
	{
	LINE_NUMBER(844);
	ARRAY_ACCESS(jchar, (frame[2].o), (frame[3].i)) = (jchar(((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current)));
	LINE_NUMBER(839);
	INST_IINC(3, 1);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(846);
	sp[0].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_captureBuffer;
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char(ctx, sp[1].o, (frame[2].o));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_int_R_int(ctx, sp[1].o, (16));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (jchar(temp0)));
	LINE_NUMBER(847);
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(849);
	sp[0].o = (jobject)M_arc_util_serialization_Jval$Hparser_expected_java_lang_String_R_arc_util_serialization_Jval$JsonParseException(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"valid escape sequence"_j))));
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(851);
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	LINE_NUMBER(852);
	((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_rawStart = (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_index) - (jint(1)));
	LINE_NUMBER(853);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval$Hparser_endCapture_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:endCapture", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(856);
	frame[1].i = (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_index) - (jint(1)));
	LINE_NUMBER(858);
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_escaped) == 0) goto label_2;
	}
	{
	LINE_NUMBER(859);
	sp[0].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_captureBuffer;
	sp[1].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o, ((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_rawStart), ((frame[1].i) - ((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_rawStart)));
	LINE_NUMBER(860);
	sp[0].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_captureBuffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(861);
	sp[0].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_captureBuffer;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(863);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_buffer;
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, sp[1].o, ((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_captureStart), ((frame[1].i) - ((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_captureStart)));
	frame[2].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(865);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool SM_arc_util_serialization_Jval$Hparser_isDigit_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:isDigit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Hparser(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(869);
	if ((frame[0].i) < (48)) goto label_1;
	}
	{
	if ((frame[0].i) > (57)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Jval$Hparser_tryParseNumber_java_lang_StringBuilder_boolean_R_arc_util_serialization_Jval(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:tryParseNumber", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Hparser(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(873);
	frame[2].i = (jint(0));
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(874);
	if ((frame[2].i) >= (frame[3].i)) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, (frame[0].o), (frame[2].i));
	if (temp0 != (45)) goto label_7;
	}
	INST_IINC(2, 1);
label_7:;
	{
	LINE_NUMBER(876);
	if ((frame[2].i) < (frame[3].i)) goto label_8;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	{
	LINE_NUMBER(877);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	jint temp1 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, sp[0].o, temp0);
	frame[4].i = temp1;
	LINE_NUMBER(878);
	jint temp2 = (jint)SM_arc_util_serialization_Jval$Hparser_isDigit_char_R_boolean(ctx, (frame[4].i));
	if (temp2 != 0) goto label_10;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_10:;
	{
	LINE_NUMBER(880);
	if ((frame[4].i) != (48)) goto label_11;
	}
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, (frame[0].o), (frame[2].i));
	jint temp1 = (jint)SM_arc_util_serialization_Jval$Hparser_isDigit_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_11;
	}
	{
	LINE_NUMBER(881);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_11:;
	{
	LINE_NUMBER(883);
	if ((frame[2].i) >= (frame[3].i)) goto label_13;
	}
	{
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, (frame[0].o), (frame[2].i));
	jint temp1 = (jint)SM_arc_util_serialization_Jval$Hparser_isDigit_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_13;
	}
	INST_IINC(2, 1);
	goto label_11;
label_13:;
	{
	LINE_NUMBER(886);
	if ((frame[2].i) >= (frame[3].i)) goto label_14;
	}
	{
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, (frame[0].o), (frame[2].i));
	if (temp0 != (46)) goto label_14;
	}
	{
	LINE_NUMBER(887);
	INST_IINC(2, 1);
	LINE_NUMBER(888);
	if ((frame[2].i) >= (frame[3].i)) goto label_17;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	jint temp1 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, sp[0].o, temp0);
	jint temp2 = (jint)SM_arc_util_serialization_Jval$Hparser_isDigit_char_R_boolean(ctx, temp1);
	if (temp2 != 0) goto label_18;
	}
label_17:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_18:;
	{
	LINE_NUMBER(889);
	if ((frame[2].i) >= (frame[3].i)) goto label_14;
	}
	{
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, (frame[0].o), (frame[2].i));
	jint temp1 = (jint)SM_arc_util_serialization_Jval$Hparser_isDigit_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_14;
	}
	INST_IINC(2, 1);
	goto label_18;
label_14:;
	{
	LINE_NUMBER(893);
	if ((frame[2].i) >= (frame[3].i)) goto label_19;
	}
	{
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, (frame[0].o), (frame[2].i));
	jint temp1 = (jint)SM_java_lang_Character_toLowerCase_char_R_char(ctx, temp0);
	if (temp1 != (101)) goto label_19;
	}
	{
	LINE_NUMBER(894);
	INST_IINC(2, 1);
	LINE_NUMBER(895);
	if ((frame[2].i) >= (frame[3].i)) goto label_22;
	}
	{
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, (frame[0].o), (frame[2].i));
	if (temp0 == (43)) goto label_23;
	}
	{
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, (frame[0].o), (frame[2].i));
	if (temp0 != (45)) goto label_22;
	}
label_23:;
	INST_IINC(2, 1);
label_22:;
	{
	LINE_NUMBER(897);
	if ((frame[2].i) >= (frame[3].i)) goto label_24;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	jint temp1 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, sp[0].o, temp0);
	jint temp2 = (jint)SM_arc_util_serialization_Jval$Hparser_isDigit_char_R_boolean(ctx, temp1);
	if (temp2 != 0) goto label_25;
	}
label_24:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_25:;
	{
	LINE_NUMBER(898);
	if ((frame[2].i) >= (frame[3].i)) goto label_19;
	}
	{
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, (frame[0].o), (frame[2].i));
	jint temp1 = (jint)SM_arc_util_serialization_Jval$Hparser_isDigit_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_19;
	}
	INST_IINC(2, 1);
	goto label_25;
label_19:;
	{
	LINE_NUMBER(901);
	frame[5].i = (frame[2].i);
	}
label_26:;
	{
	LINE_NUMBER(902);
	if ((frame[2].i) >= (frame[3].i)) goto label_27;
	}
	{
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, (frame[0].o), (frame[2].i));
	jint temp1 = (jint)SM_arc_util_serialization_Jval$Hparser_isWhiteSpace_int_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_27;
	}
	INST_IINC(2, 1);
	goto label_26;
label_27:;
	{
	LINE_NUMBER(904);
	frame[6].i = (jint(0));
	LINE_NUMBER(905);
	if ((frame[2].i) >= (frame[3].i)) goto label_29;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_29;
	{
	LINE_NUMBER(906);
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, (frame[0].o), (frame[2].i));
	frame[7].i = temp0;
	LINE_NUMBER(907);
	if ((frame[7].i) == (44)) goto label_32;
	}
	{
	if ((frame[7].i) == (125)) goto label_32;
	}
	{
	if ((frame[7].i) == (93)) goto label_32;
	}
	{
	if ((frame[7].i) == (35)) goto label_32;
	}
	{
	if ((frame[7].i) != (47)) goto label_29;
	}
	{
	if ((frame[3].i) <= ((frame[2].i) + (jint(1)))) goto label_29;
	}
	{
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, (frame[0].o), ((frame[2].i) + (jint(1))));
	if (temp0 == (47)) goto label_32;
	}
	{
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, (frame[0].o), ((frame[2].i) + (jint(1))));
	if (temp0 != (42)) goto label_29;
	}
label_32:;
	{
	LINE_NUMBER(908);
	frame[6].i = (jint(1));
	}
label_29:;
	{
	LINE_NUMBER(911);
	if ((frame[2].i) >= (frame[3].i)) goto label_33;
	}
	INST_ILOAD(6);
	if ((--sp)->i != 0) goto label_33;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_33:;
	{
	LINE_NUMBER(913);
	frame[7].i = (jint(0));
	LINE_NUMBER(914);
	frame[8].i = (jint(0));
	}
label_35:;
	{
	if ((frame[8].i) >= (frame[5].i)) goto label_36;
	}
	{
	LINE_NUMBER(915);
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, (frame[0].o), (frame[8].i));
	frame[9].i = temp0;
	LINE_NUMBER(916);
	if ((frame[9].i) == (46)) goto label_39;
	}
	{
	if ((frame[9].i) == (101)) goto label_39;
	}
	{
	if ((frame[9].i) != (69)) goto label_40;
	}
label_39:;
	{
	LINE_NUMBER(917);
	frame[7].i = (jint(1));
	LINE_NUMBER(918);
	goto label_36;
	}
label_40:;
	{
	LINE_NUMBER(914);
	INST_IINC(8, 1);
	goto label_35;
	}
label_36:;
	{
	LINE_NUMBER(922);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (jint(0)), (frame[5].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(924);
	if ((frame[7].i) != 0) goto label_43;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(926);
	clinit_arc_util_serialization_Jval(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_R_long(ctx, (frame[8].o));
	sp[1].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, temp0);
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	LINE_NUMBER(927);
	INST_ASTORE(9);
label_43:;
	{
	LINE_NUMBER(931);
	clinit_arc_util_serialization_Jval(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, (frame[8].o));
	sp[1].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, temp0);
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Jval$Hparser_tryParseNumber_java_lang_String_R_arc_util_serialization_Jval(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:tryParseNumber", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Hparser(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(935);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_java_lang_String(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)SM_arc_util_serialization_Jval$Hparser_tryParseNumber_java_lang_StringBuilder_boolean_R_arc_util_serialization_Jval(ctx, sp[0].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_Jval$Hparser_readIf_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:readIf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(939);
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) == (frame[1].i)) goto label_1;
	}
	{
	LINE_NUMBER(940);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(942);
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	LINE_NUMBER(943);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Jval$Hparser_skipWhiteSpace(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:skipWhiteSpace", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(947);
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_isEndOfText_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(948);
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_isWhiteSpace_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(949);
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) == (35)) goto label_4;
	}
	{
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) != (47)) goto label_5;
	}
	{
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_peek_R_int(ctx, (frame[0].o));
	if (temp0 != (47)) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(951);
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	LINE_NUMBER(952);
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) < 0) goto label_0;
	}
	{
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) != (10)) goto label_4;
	}
	goto label_0;
label_5:;
	{
	LINE_NUMBER(953);
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) != (47)) goto label_1;
	}
	{
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_peek_R_int(ctx, (frame[0].o));
	if (temp0 != (42)) goto label_1;
	}
	{
	LINE_NUMBER(954);
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	}
label_8:;
	{
	LINE_NUMBER(956);
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	LINE_NUMBER(957);
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) < 0) goto label_10;
	}
	{
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) != (42)) goto label_8;
	}
	{
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_peek_R_int(ctx, (frame[0].o));
	if (temp0 != (47)) goto label_8;
	}
label_10:;
	{
	LINE_NUMBER(958);
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	LINE_NUMBER(959);
	M_arc_util_serialization_Jval$Hparser_read(ctx, (frame[0].o));
	goto label_0;
	}
label_1:;
	LINE_NUMBER(962);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_serialization_Jval$Hparser_read(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:read", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(965);
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) != (10)) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	((arc_util_serialization_Jval$Hparser *) NULL_CHECK(sp[0].o))->F_line = (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK(sp[0].o))->F_line) + (jint(1)));
	((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_lineOffset = ((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_index);
	}
label_1:;
	{
	LINE_NUMBER(966);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_index) >= ((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_bufferLength)) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK(sp[1].o))->F_index;
	((arc_util_serialization_Jval$Hparser *) NULL_CHECK(sp[1].o))->F_index = (temp0 + (jint(1)));
	jint temp3 = (jint)ARRAY_ACCESS(jchar, sp[0].o, temp0);
	sp[0].i = temp3;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ICONST(-1);
label_3:;
	{
	sp -= 2;
	((arc_util_serialization_Jval$Hparser *) NULL_CHECK(sp[0].o))->F_current = sp[1].i;
	LINE_NUMBER(967);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_util_serialization_Jval$Hparser_peek_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:peek", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(970);
	frame[2].i = (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_index) + (frame[1].i));
	LINE_NUMBER(971);
	if ((frame[2].i) >= ((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_bufferLength)) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[2].i));
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ICONST(-1);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_arc_util_serialization_Jval$Hparser_peek_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:peek", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(975);
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_peek_int_R_int(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval$Hparser_expected_java_lang_String_R_arc_util_serialization_Jval$JsonParseException(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:expected", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(979);
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_isEndOfText_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(980);
	sp[0].o = (jobject)M_arc_util_serialization_Jval$Hparser_error_java_lang_String_R_arc_util_serialization_Jval$JsonParseException(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Unexpected end of input"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(982);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Expected "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)M_arc_util_serialization_Jval$Hparser_error_java_lang_String_R_arc_util_serialization_Jval$JsonParseException(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval$Hparser_error_java_lang_String_R_arc_util_serialization_Jval$JsonParseException(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:error", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(986);
	frame[2].i = (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_index) - ((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_lineOffset));
	LINE_NUMBER(987);
	jint temp0 = (jint)M_arc_util_serialization_Jval$Hparser_isEndOfText_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	jint temp0 = ((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_index) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(988);
	clinit_arc_util_serialization_Jval$JsonParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval$JsonParseException);
	init_arc_util_serialization_Jval$JsonParseException_java_lang_String_int_int_int(ctx, sp[0].o, (frame[1].o), (frame[3].i), ((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_line), ((frame[2].i) - (jint(1))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_Jval$Hparser_isWhiteSpace_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:isWhiteSpace", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(992);
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hparser_isWhiteSpace_int_R_boolean(ctx, (jchar(((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_Jval$Hparser_isHexDigit_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:isHexDigit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(996);
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) < (48)) goto label_1;
	}
	{
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) <= (57)) goto label_2;
	}
label_1:;
	{
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) < (97)) goto label_3;
	}
	{
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) <= (102)) goto label_2;
	}
label_3:;
	{
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) < (65)) goto label_4;
	}
	{
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) > (70)) goto label_4;
	}
label_2:;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_Jval$Hparser_isEndOfText_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hparser:isEndOfText", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1002);
	if (((jint)((arc_util_serialization_Jval$Hparser *) NULL_CHECK((frame[0].o)))->F_current) != (jint(-1))) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_arc_util_serialization_Jval$Hparser[] {
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
	(void *) M_arc_util_serialization_Jval$Hparser_reset,
	(void *) M_arc_util_serialization_Jval$Hparser_parse_R_arc_util_serialization_Jval,
	(void *) M_arc_util_serialization_Jval$Hparser_checkTrailing_arc_util_serialization_Jval_R_arc_util_serialization_Jval,
	(void *) M_arc_util_serialization_Jval$Hparser_readValue_R_arc_util_serialization_Jval,
	(void *) M_arc_util_serialization_Jval$Hparser_readTfnns_R_arc_util_serialization_Jval,
	(void *) M_arc_util_serialization_Jval$Hparser_regionMatches_int_java_lang_String_R_boolean,
	(void *) M_arc_util_serialization_Jval$Hparser_readArray_R_arc_util_serialization_Jval,
	(void *) M_arc_util_serialization_Jval$Hparser_readObject_boolean_R_arc_util_serialization_Jval,
	(void *) M_arc_util_serialization_Jval$Hparser_readName_R_java_lang_String,
	(void *) M_arc_util_serialization_Jval$Hparser_readMlString_R_java_lang_String,
	(void *) M_arc_util_serialization_Jval$Hparser_skipIndent_int,
	(void *) M_arc_util_serialization_Jval$Hparser_readString_R_arc_util_serialization_Jval,
	(void *) M_arc_util_serialization_Jval$Hparser_readStringInternal_boolean_R_java_lang_String,
	(void *) M_arc_util_serialization_Jval$Hparser_startCapture,
	(void *) M_arc_util_serialization_Jval$Hparser_readEscape,
	(void *) M_arc_util_serialization_Jval$Hparser_endCapture_R_java_lang_String,
	(void *) M_arc_util_serialization_Jval$Hparser_readIf_char_R_boolean,
	(void *) M_arc_util_serialization_Jval$Hparser_skipWhiteSpace,
	(void *) M_arc_util_serialization_Jval$Hparser_read,
	(void *) M_arc_util_serialization_Jval$Hparser_peek_int_R_int,
	(void *) M_arc_util_serialization_Jval$Hparser_peek_R_int,
	(void *) M_arc_util_serialization_Jval$Hparser_expected_java_lang_String_R_arc_util_serialization_Jval$JsonParseException,
	(void *) M_arc_util_serialization_Jval$Hparser_error_java_lang_String_R_arc_util_serialization_Jval$JsonParseException,
	(void *) M_arc_util_serialization_Jval$Hparser_isWhiteSpace_R_boolean,
	(void *) M_arc_util_serialization_Jval$Hparser_isHexDigit_R_boolean,
	(void *) M_arc_util_serialization_Jval$Hparser_isEndOfText_R_boolean,
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
	{ "reset", "()V" },
	{ "parse", "()Larc/util/serialization/Jval;" },
	{ "checkTrailing", "(Larc/util/serialization/Jval;)Larc/util/serialization/Jval;" },
	{ "readValue", "()Larc/util/serialization/Jval;" },
	{ "readTfnns", "()Larc/util/serialization/Jval;" },
	{ "regionMatches", "(ILjava/lang/String;)Z" },
	{ "readArray", "()Larc/util/serialization/Jval;" },
	{ "readObject", "(Z)Larc/util/serialization/Jval;" },
	{ "readName", "()Ljava/lang/String;" },
	{ "readMlString", "()Ljava/lang/String;" },
	{ "skipIndent", "(I)V" },
	{ "readString", "()Larc/util/serialization/Jval;" },
	{ "readStringInternal", "(Z)Ljava/lang/String;" },
	{ "startCapture", "()V" },
	{ "readEscape", "()V" },
	{ "endCapture", "()Ljava/lang/String;" },
	{ "readIf", "(C)Z" },
	{ "skipWhiteSpace", "()V" },
	{ "read", "()V" },
	{ "peek", "(I)I" },
	{ "peek", "()I" },
	{ "expected", "(Ljava/lang/String;)Larc/util/serialization/Jval$JsonParseException;" },
	{ "error", "(Ljava/lang/String;)Larc/util/serialization/Jval$JsonParseException;" },
	{ "isWhiteSpace", "()Z" },
	{ "isHexDigit", "()Z" },
	{ "isEndOfText", "()Z" },
};

static FieldMetadata fields[] {
	{ "buffer", getArrayClass(&class_char, 1), offsetof(arc_util_serialization_Jval$Hparser, F_buffer), "[C", 18 },
	{ "index", &class_int, offsetof(arc_util_serialization_Jval$Hparser, F_index), "I", 2 },
	{ "bufferLength", &class_int, offsetof(arc_util_serialization_Jval$Hparser, F_bufferLength), "I", 2 },
	{ "line", &class_int, offsetof(arc_util_serialization_Jval$Hparser, F_line), "I", 2 },
	{ "lineOffset", &class_int, offsetof(arc_util_serialization_Jval$Hparser, F_lineOffset), "I", 2 },
	{ "current", &class_int, offsetof(arc_util_serialization_Jval$Hparser, F_current), "I", 2 },
	{ "captureBuffer", &class_java_lang_StringBuilder, offsetof(arc_util_serialization_Jval$Hparser, F_captureBuffer), "Ljava/lang/StringBuilder;", 2 },
	{ "captureStart", &class_int, offsetof(arc_util_serialization_Jval$Hparser, F_captureStart), "I", 2 },
	{ "rawStart", &class_int, offsetof(arc_util_serialization_Jval$Hparser, F_rawStart), "I", 2 },
	{ "escaped", &class_boolean, offsetof(arc_util_serialization_Jval$Hparser, F_escaped), "Z", 2 },
	{ "isArray", &class_boolean, offsetof(arc_util_serialization_Jval$Hparser, F_isArray), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_serialization_Jval$Hparser_java_lang_String, 0, "(Ljava/lang/String;)V", 0 },
	{ "<init>", (intptr_t) init_arc_util_serialization_Jval$Hparser_java_io_Reader, 0, "(Ljava/io/Reader;)V", 0 },
	{ "isWhiteSpace", (intptr_t) SM_arc_util_serialization_Jval$Hparser_isWhiteSpace_int_R_boolean, 0, "(I)Z", 8 },
	{ "reset", (intptr_t) M_arc_util_serialization_Jval$Hparser_reset, VTABLE_arc_util_serialization_Jval$Hparser_reset, "()V", 0 },
	{ "parse", (intptr_t) M_arc_util_serialization_Jval$Hparser_parse_R_arc_util_serialization_Jval, VTABLE_arc_util_serialization_Jval$Hparser_parse_R_arc_util_serialization_Jval, "()Larc/util/serialization/Jval;", 0 },
	{ "checkTrailing", (intptr_t) M_arc_util_serialization_Jval$Hparser_checkTrailing_arc_util_serialization_Jval_R_arc_util_serialization_Jval, VTABLE_arc_util_serialization_Jval$Hparser_checkTrailing_arc_util_serialization_Jval_R_arc_util_serialization_Jval, "(Larc/util/serialization/Jval;)Larc/util/serialization/Jval;", 0 },
	{ "readValue", (intptr_t) M_arc_util_serialization_Jval$Hparser_readValue_R_arc_util_serialization_Jval, VTABLE_arc_util_serialization_Jval$Hparser_readValue_R_arc_util_serialization_Jval, "()Larc/util/serialization/Jval;", 2 },
	{ "readTfnns", (intptr_t) M_arc_util_serialization_Jval$Hparser_readTfnns_R_arc_util_serialization_Jval, VTABLE_arc_util_serialization_Jval$Hparser_readTfnns_R_arc_util_serialization_Jval, "()Larc/util/serialization/Jval;", 2 },
	{ "tryParseNumber", (intptr_t) SM_arc_util_serialization_Jval$Hparser_tryParseNumber_Array1_char_int_int_boolean_R_arc_util_serialization_Jval, 0, "([CIIZ)Larc/util/serialization/Jval;", 8 },
	{ "regionMatches", (intptr_t) M_arc_util_serialization_Jval$Hparser_regionMatches_int_java_lang_String_R_boolean, VTABLE_arc_util_serialization_Jval$Hparser_regionMatches_int_java_lang_String_R_boolean, "(ILjava/lang/String;)Z", 2 },
	{ "isTrimChar", (intptr_t) SM_arc_util_serialization_Jval$Hparser_isTrimChar_char_R_boolean, 0, "(C)Z", 10 },
	{ "readArray", (intptr_t) M_arc_util_serialization_Jval$Hparser_readArray_R_arc_util_serialization_Jval, VTABLE_arc_util_serialization_Jval$Hparser_readArray_R_arc_util_serialization_Jval, "()Larc/util/serialization/Jval;", 2 },
	{ "readObject", (intptr_t) M_arc_util_serialization_Jval$Hparser_readObject_boolean_R_arc_util_serialization_Jval, VTABLE_arc_util_serialization_Jval$Hparser_readObject_boolean_R_arc_util_serialization_Jval, "(Z)Larc/util/serialization/Jval;", 2 },
	{ "readName", (intptr_t) M_arc_util_serialization_Jval$Hparser_readName_R_java_lang_String, VTABLE_arc_util_serialization_Jval$Hparser_readName_R_java_lang_String, "()Ljava/lang/String;", 2 },
	{ "readMlString", (intptr_t) M_arc_util_serialization_Jval$Hparser_readMlString_R_java_lang_String, VTABLE_arc_util_serialization_Jval$Hparser_readMlString_R_java_lang_String, "()Ljava/lang/String;", 2 },
	{ "skipIndent", (intptr_t) M_arc_util_serialization_Jval$Hparser_skipIndent_int, VTABLE_arc_util_serialization_Jval$Hparser_skipIndent_int, "(I)V", 2 },
	{ "readString", (intptr_t) M_arc_util_serialization_Jval$Hparser_readString_R_arc_util_serialization_Jval, VTABLE_arc_util_serialization_Jval$Hparser_readString_R_arc_util_serialization_Jval, "()Larc/util/serialization/Jval;", 2 },
	{ "readStringInternal", (intptr_t) M_arc_util_serialization_Jval$Hparser_readStringInternal_boolean_R_java_lang_String, VTABLE_arc_util_serialization_Jval$Hparser_readStringInternal_boolean_R_java_lang_String, "(Z)Ljava/lang/String;", 2 },
	{ "startCapture", (intptr_t) M_arc_util_serialization_Jval$Hparser_startCapture, VTABLE_arc_util_serialization_Jval$Hparser_startCapture, "()V", 2 },
	{ "readEscape", (intptr_t) M_arc_util_serialization_Jval$Hparser_readEscape, VTABLE_arc_util_serialization_Jval$Hparser_readEscape, "()V", 2 },
	{ "endCapture", (intptr_t) M_arc_util_serialization_Jval$Hparser_endCapture_R_java_lang_String, VTABLE_arc_util_serialization_Jval$Hparser_endCapture_R_java_lang_String, "()Ljava/lang/String;", 2 },
	{ "isDigit", (intptr_t) SM_arc_util_serialization_Jval$Hparser_isDigit_char_R_boolean, 0, "(C)Z", 10 },
	{ "tryParseNumber", (intptr_t) SM_arc_util_serialization_Jval$Hparser_tryParseNumber_java_lang_StringBuilder_boolean_R_arc_util_serialization_Jval, 0, "(Ljava/lang/StringBuilder;Z)Larc/util/serialization/Jval;", 8 },
	{ "tryParseNumber", (intptr_t) SM_arc_util_serialization_Jval$Hparser_tryParseNumber_java_lang_String_R_arc_util_serialization_Jval, 0, "(Ljava/lang/String;)Larc/util/serialization/Jval;", 8 },
	{ "readIf", (intptr_t) M_arc_util_serialization_Jval$Hparser_readIf_char_R_boolean, VTABLE_arc_util_serialization_Jval$Hparser_readIf_char_R_boolean, "(C)Z", 2 },
	{ "skipWhiteSpace", (intptr_t) M_arc_util_serialization_Jval$Hparser_skipWhiteSpace, VTABLE_arc_util_serialization_Jval$Hparser_skipWhiteSpace, "()V", 2 },
	{ "read", (intptr_t) M_arc_util_serialization_Jval$Hparser_read, VTABLE_arc_util_serialization_Jval$Hparser_read, "()V", 2 },
	{ "peek", (intptr_t) M_arc_util_serialization_Jval$Hparser_peek_int_R_int, VTABLE_arc_util_serialization_Jval$Hparser_peek_int_R_int, "(I)I", 2 },
	{ "peek", (intptr_t) M_arc_util_serialization_Jval$Hparser_peek_R_int, VTABLE_arc_util_serialization_Jval$Hparser_peek_R_int, "()I", 2 },
	{ "expected", (intptr_t) M_arc_util_serialization_Jval$Hparser_expected_java_lang_String_R_arc_util_serialization_Jval$JsonParseException, VTABLE_arc_util_serialization_Jval$Hparser_expected_java_lang_String_R_arc_util_serialization_Jval$JsonParseException, "(Ljava/lang/String;)Larc/util/serialization/Jval$JsonParseException;", 2 },
	{ "error", (intptr_t) M_arc_util_serialization_Jval$Hparser_error_java_lang_String_R_arc_util_serialization_Jval$JsonParseException, VTABLE_arc_util_serialization_Jval$Hparser_error_java_lang_String_R_arc_util_serialization_Jval$JsonParseException, "(Ljava/lang/String;)Larc/util/serialization/Jval$JsonParseException;", 2 },
	{ "isWhiteSpace", (intptr_t) M_arc_util_serialization_Jval$Hparser_isWhiteSpace_R_boolean, VTABLE_arc_util_serialization_Jval$Hparser_isWhiteSpace_R_boolean, "()Z", 2 },
	{ "isHexDigit", (intptr_t) M_arc_util_serialization_Jval$Hparser_isHexDigit_R_boolean, VTABLE_arc_util_serialization_Jval$Hparser_isHexDigit_R_boolean, "()Z", 2 },
	{ "isEndOfText", (intptr_t) M_arc_util_serialization_Jval$Hparser_isEndOfText_R_boolean, VTABLE_arc_util_serialization_Jval$Hparser_isEndOfText_R_boolean, "()Z", 2 },
};

Class class_arc_util_serialization_Jval$Hparser{
		.nativeName = (intptr_t) "arc/util/serialization/Jval$Hparser",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_serialization_Jval$Hparser),
		.classVtable = (intptr_t) vtable_arc_util_serialization_Jval$Hparser,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_Jval$Hparser,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_Jval$Hparser,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_serialization_Jval,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 34,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 37,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_Jval$Hparser = registerClass(&class_arc_util_serialization_Jval$Hparser);

}

