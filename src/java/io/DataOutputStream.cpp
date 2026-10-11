#include "java/io/DataOutputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/DataOutputStream.h"
#include "java/lang/NullPointerException.h"
#include "java/io/IOException.h"
#include "java/io/FilterOutputStream.h"
#include "java/lang/Float.h"
#include "java/lang/Double.h"
#include "java/io/DataOutput.h"
#include "java/io/OutputStream.h"

extern "C" {


void mark_java_io_DataOutputStream(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_FilterOutputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_io_DataOutputStream *) object;
	if (self->F_buff)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buff)->clazz)->markFunction)((jobject) self->F_buff, mark, depth + 1);
}

void clinit_java_io_DataOutputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_FilterOutputStream(ctx);
}

void init_java_io_DataOutputStream_java_io_OutputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataOutputStream:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_DataOutputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	init_java_io_FilterOutputStream_java_io_OutputStream(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (8));
	((java_io_DataOutputStream *) NULL_CHECK(sp[0].o))->F_buff = (jref) sp[1].o;
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_DataOutputStream_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataOutputStream:flush", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	M_java_io_FilterOutputStream_flush(ctx, (frame[0].o));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_io_DataOutputStream_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataOutputStream:size", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	if (((jint)((java_io_DataOutputStream *) NULL_CHECK((frame[0].o)))->F_written) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(63);
	((java_io_DataOutputStream *) NULL_CHECK((frame[0].o)))->F_written = (jint(2147483647));
	}
label_1:;
	{
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return ((jint)((java_io_DataOutputStream *) NULL_CHECK((frame[0].o)))->F_written);
	}

	popStackFrame(ctx);
}

void M_java_io_DataOutputStream_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataOutputStream:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(87);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(88);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_OutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	((java_io_DataOutputStream *) NULL_CHECK(sp[0].o))->F_written = (((jint)((java_io_DataOutputStream *) NULL_CHECK(sp[0].o))->F_written) + (frame[3].i));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_DataOutputStream_write_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataOutputStream:write", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_OutputStream_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	((java_io_DataOutputStream *) NULL_CHECK(sp[0].o))->F_written = (((jint)((java_io_DataOutputStream *) NULL_CHECK(sp[0].o))->F_written) + (jint(1)));
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_DataOutputStream_writeBoolean_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataOutputStream:writeBoolean", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	sp += 1;
	if ((frame[1].i) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((func_java_io_OutputStream_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	((java_io_DataOutputStream *) NULL_CHECK(sp[0].o))->F_written = (((jint)((java_io_DataOutputStream *) NULL_CHECK(sp[0].o))->F_written) + (jint(1)));
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_DataOutputStream_writeByte_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataOutputStream:writeByte", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_OutputStream_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	((java_io_DataOutputStream *) NULL_CHECK(sp[0].o))->F_written = (((jint)((java_io_DataOutputStream *) NULL_CHECK(sp[0].o))->F_written) + (jint(1)));
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_DataOutputStream_writeBytes_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataOutputStream:writeBytes", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(151);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	LINE_NUMBER(152);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(154);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject) createArray(ctx, &class_byte, temp0);
	frame[2].o = sp[0].o;
	LINE_NUMBER(155);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_5;
	}
	{
	LINE_NUMBER(156);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[3].i));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte(temp1));
	LINE_NUMBER(155);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_OutputStream_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	((java_io_DataOutputStream *) NULL_CHECK(sp[0].o))->F_written = (((jint)((java_io_DataOutputStream *) NULL_CHECK(sp[0].o))->F_written) + (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_DataOutputStream_writeChar_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataOutputStream:writeChar", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((java_io_DataOutputStream *) NULL_CHECK((frame[0].o)))->F_buff;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jbyte(((frame[1].i) >> (8))));
	LINE_NUMBER(175);
	sp[0].o = (jobject)((java_io_DataOutputStream *) NULL_CHECK((frame[0].o)))->F_buff;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jbyte((frame[1].i)));
	LINE_NUMBER(176);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	sp[1].o = (jobject)((java_io_DataOutputStream *) NULL_CHECK((frame[0].o)))->F_buff;
	((func_java_io_OutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(2)));
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	((java_io_DataOutputStream *) NULL_CHECK(sp[0].o))->F_written = (((jint)((java_io_DataOutputStream *) NULL_CHECK(sp[0].o))->F_written) + (jint(2)));
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_DataOutputStream_writeChars_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataOutputStream:writeChars", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(192);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject) createArray(ctx, &class_byte, (temp0 * (jint(2))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(193);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_3;
	}
	{
	LINE_NUMBER(194);
	if ((frame[3].i) != 0) goto label_5;
	}
	INST_ILOAD(3);
	goto label_6;
label_5:;
	{
	jint temp0 = (frame[3].i) * (jint(2));
	sp[0].i = temp0;
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(195);
	sp[0].o = frame[2].o;
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[3].i));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((temp1 >> (8))));
	LINE_NUMBER(196);
	sp[0].o = frame[2].o;
	jint temp2 = (frame[4].i) + (jint(1));
	jint temp3 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[3].i));
	ARRAY_ACCESS(jbyte, sp[0].o, temp2) = (jbyte(temp3));
	LINE_NUMBER(193);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_OutputStream_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	((java_io_DataOutputStream *) NULL_CHECK(sp[0].o))->F_written = (((jint)((java_io_DataOutputStream *) NULL_CHECK(sp[0].o))->F_written) + (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_DataOutputStream_writeDouble_double(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataOutputStream:writeDouble", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[1].d));
	((func_java_io_DataOutputStream_writeLong_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeLong_long])(ctx, sp[0].o, temp0);
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_DataOutputStream_writeFloat_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataOutputStream:writeFloat", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(227);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (frame[1].f));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(228);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_DataOutputStream_writeInt_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataOutputStream:writeInt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((java_io_DataOutputStream *) NULL_CHECK((frame[0].o)))->F_buff;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jbyte(((frame[1].i) >> (24))));
	LINE_NUMBER(242);
	sp[0].o = (jobject)((java_io_DataOutputStream *) NULL_CHECK((frame[0].o)))->F_buff;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jbyte(((frame[1].i) >> (16))));
	LINE_NUMBER(243);
	sp[0].o = (jobject)((java_io_DataOutputStream *) NULL_CHECK((frame[0].o)))->F_buff;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jbyte(((frame[1].i) >> (8))));
	LINE_NUMBER(244);
	sp[0].o = (jobject)((java_io_DataOutputStream *) NULL_CHECK((frame[0].o)))->F_buff;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jbyte((frame[1].i)));
	LINE_NUMBER(245);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	sp[1].o = (jobject)((java_io_DataOutputStream *) NULL_CHECK((frame[0].o)))->F_buff;
	((func_java_io_OutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(4)));
	LINE_NUMBER(246);
	sp[0].o = frame[0].o;
	((java_io_DataOutputStream *) NULL_CHECK(sp[0].o))->F_written = (((jint)((java_io_DataOutputStream *) NULL_CHECK(sp[0].o))->F_written) + (jint(4)));
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_DataOutputStream_writeLong_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataOutputStream:writeLong", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((java_io_DataOutputStream *) NULL_CHECK((frame[0].o)))->F_buff;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jbyte((jint(((frame[1].l) >> (56))))));
	LINE_NUMBER(261);
	sp[0].o = (jobject)((java_io_DataOutputStream *) NULL_CHECK((frame[0].o)))->F_buff;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jbyte((jint(((frame[1].l) >> (48))))));
	LINE_NUMBER(262);
	sp[0].o = (jobject)((java_io_DataOutputStream *) NULL_CHECK((frame[0].o)))->F_buff;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jbyte((jint(((frame[1].l) >> (40))))));
	LINE_NUMBER(263);
	sp[0].o = (jobject)((java_io_DataOutputStream *) NULL_CHECK((frame[0].o)))->F_buff;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jbyte((jint(((frame[1].l) >> (32))))));
	LINE_NUMBER(264);
	sp[0].o = (jobject)((java_io_DataOutputStream *) NULL_CHECK((frame[0].o)))->F_buff;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jbyte((jint(((frame[1].l) >> (24))))));
	LINE_NUMBER(265);
	sp[0].o = (jobject)((java_io_DataOutputStream *) NULL_CHECK((frame[0].o)))->F_buff;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jbyte((jint(((frame[1].l) >> (16))))));
	LINE_NUMBER(266);
	sp[0].o = (jobject)((java_io_DataOutputStream *) NULL_CHECK((frame[0].o)))->F_buff;
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jbyte((jint(((frame[1].l) >> (8))))));
	LINE_NUMBER(267);
	sp[0].o = (jobject)((java_io_DataOutputStream *) NULL_CHECK((frame[0].o)))->F_buff;
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (jbyte((jint((frame[1].l)))));
	LINE_NUMBER(268);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	sp[1].o = (jobject)((java_io_DataOutputStream *) NULL_CHECK((frame[0].o)))->F_buff;
	((func_java_io_OutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (8));
	LINE_NUMBER(269);
	sp[0].o = frame[0].o;
	((java_io_DataOutputStream *) NULL_CHECK(sp[0].o))->F_written = (((jint)((java_io_DataOutputStream *) NULL_CHECK(sp[0].o))->F_written) + (8));
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_io_DataOutputStream_writeLongToBuffer_long_Array1_byte_int_R_int(jcontext ctx, jobject self, jlong param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataOutputStream:writeLongToBuffer", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	frame[4].i = param2;
	{
	LINE_NUMBER(274);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((jint(((frame[1].l) >> (56))))));
	LINE_NUMBER(275);
	sp[0].o = frame[3].o;
	jint temp1 = frame[4].i;
	INST_IINC(4, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (jbyte((jint(((frame[1].l) >> (48))))));
	LINE_NUMBER(276);
	sp[0].o = frame[3].o;
	jint temp2 = frame[4].i;
	INST_IINC(4, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp2) = (jbyte((jint(((frame[1].l) >> (40))))));
	LINE_NUMBER(277);
	sp[0].o = frame[3].o;
	jint temp3 = frame[4].i;
	INST_IINC(4, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp3) = (jbyte((jint(((frame[1].l) >> (32))))));
	LINE_NUMBER(278);
	sp[0].o = frame[3].o;
	jint temp4 = frame[4].i;
	INST_IINC(4, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp4) = (jbyte((jint(((frame[1].l) >> (24))))));
	LINE_NUMBER(279);
	sp[0].o = frame[3].o;
	jint temp5 = frame[4].i;
	INST_IINC(4, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp5) = (jbyte((jint(((frame[1].l) >> (16))))));
	LINE_NUMBER(280);
	sp[0].o = frame[3].o;
	jint temp6 = frame[4].i;
	INST_IINC(4, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp6) = (jbyte((jint(((frame[1].l) >> (8))))));
	LINE_NUMBER(281);
	sp[0].o = frame[3].o;
	jint temp7 = frame[4].i;
	INST_IINC(4, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp7) = (jbyte((jint((frame[1].l)))));
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

void M_java_io_DataOutputStream_writeShort_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataOutputStream:writeShort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((java_io_DataOutputStream *) NULL_CHECK((frame[0].o)))->F_buff;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jbyte(((frame[1].i) >> (8))));
	LINE_NUMBER(299);
	sp[0].o = (jobject)((java_io_DataOutputStream *) NULL_CHECK((frame[0].o)))->F_buff;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jbyte((frame[1].i)));
	LINE_NUMBER(300);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	sp[1].o = (jobject)((java_io_DataOutputStream *) NULL_CHECK((frame[0].o)))->F_buff;
	((func_java_io_OutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(2)));
	LINE_NUMBER(301);
	sp[0].o = frame[0].o;
	((java_io_DataOutputStream *) NULL_CHECK(sp[0].o))->F_written = (((jint)((java_io_DataOutputStream *) NULL_CHECK(sp[0].o))->F_written) + (jint(2)));
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_io_DataOutputStream_writeShortToBuffer_int_Array1_byte_int_R_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataOutputStream:writeShortToBuffer", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(306);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte(((frame[1].i) >> (8))));
	LINE_NUMBER(307);
	sp[0].o = frame[2].o;
	jint temp1 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (jbyte((frame[1].i)));
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_java_io_DataOutputStream_writeUTF_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataOutputStream:writeUTF", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(325);
	jlong temp0 = (jlong)((func_java_io_DataOutputStream_countUTFBytes_java_lang_String_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_DataOutputStream_countUTFBytes_java_lang_String_R_long])(ctx, (frame[0].o), (frame[1].o));
	frame[2].l = temp0;
	LINE_NUMBER(326);
	if ((longCompare((frame[2].l), (jlong(65535ll)))) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(327);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UTF Error"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject) createArray(ctx, &class_byte, ((jint((frame[2].l))) + (jint(2))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(330);
	frame[5].i = (jint(0));
	LINE_NUMBER(331);
	jint temp0 = (jint)((func_java_io_DataOutputStream_writeShortToBuffer_int_Array1_byte_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_DataOutputStream_writeShortToBuffer_int_Array1_byte_int_R_int])(ctx, (frame[0].o), (jint((frame[2].l))), (frame[4].o), (frame[5].i));
	frame[5].i = temp0;
	LINE_NUMBER(332);
	jint temp1 = (jint)((func_java_io_DataOutputStream_writeUTFBytesToBuffer_java_lang_String_long_Array1_byte_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_DataOutputStream_writeUTFBytesToBuffer_java_lang_String_long_Array1_byte_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jlong((jint((frame[2].l))))), (frame[4].o), (frame[5].i));
	frame[5].i = temp1;
	LINE_NUMBER(333);
	((func_java_io_DataOutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_DataOutputStream_write_Array1_byte_int_int])(ctx, (frame[0].o), (frame[4].o), (jint(0)), (frame[5].i));
	LINE_NUMBER(334);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_java_io_DataOutputStream_countUTFBytes_java_lang_String_R_long(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataOutputStream:countUTFBytes", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(337);
	frame[2].i = (jint(0));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(338);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(339);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[4].i));
	frame[5].i = temp0;
	LINE_NUMBER(340);
	if ((frame[5].i) <= 0) goto label_7;
	}
	{
	if ((frame[5].i) > (127)) goto label_7;
	}
	{
	LINE_NUMBER(341);
	INST_IINC(2, 1);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(342);
	if ((frame[5].i) > (2047)) goto label_10;
	}
	{
	LINE_NUMBER(343);
	INST_IINC(2, 2);
	goto label_9;
	}
label_10:;
	LINE_NUMBER(345);
	INST_IINC(2, 3);
label_9:;
	{
	LINE_NUMBER(338);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(348);
	popStackFrame(ctx);
	return (jlong((frame[2].i)));
	}

	popStackFrame(ctx);
}

jint M_java_io_DataOutputStream_writeUTFBytesToBuffer_java_lang_String_long_Array1_byte_int_R_int(jcontext ctx, jobject self, jobject param0, jlong param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataOutputStream:writeUTFBytesToBuffer", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	frame[4].o = param2;
	frame[5].i = param3;
	{
	LINE_NUMBER(353);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(354);
	frame[7].i = (jint(0));
	}
label_2:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_3;
	}
	{
	LINE_NUMBER(355);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[7].i));
	frame[8].i = temp0;
	LINE_NUMBER(356);
	if ((frame[8].i) <= 0) goto label_6;
	}
	{
	if ((frame[8].i) > (127)) goto label_6;
	}
	{
	LINE_NUMBER(357);
	sp[0].o = frame[4].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((frame[8].i)));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(358);
	if ((frame[8].i) > (2047)) goto label_9;
	}
	{
	LINE_NUMBER(359);
	sp[0].o = frame[4].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte(((192) | ((31) & ((frame[8].i) >> (6))))));
	LINE_NUMBER(360);
	sp[0].o = frame[4].o;
	jint temp1 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (jbyte(((128) | ((63) & (frame[8].i)))));
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(362);
	sp[0].o = frame[4].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte(((224) | ((15) & ((frame[8].i) >> (12))))));
	LINE_NUMBER(363);
	sp[0].o = frame[4].o;
	jint temp1 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (jbyte(((128) | ((63) & ((frame[8].i) >> (6))))));
	LINE_NUMBER(364);
	sp[0].o = frame[4].o;
	jint temp2 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp2) = (jbyte(((128) | ((63) & (frame[8].i)))));
	}
label_8:;
	{
	LINE_NUMBER(354);
	INST_IINC(7, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

void *vtable_java_io_DataOutputStream[] {
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
	(void *) M_java_io_FilterOutputStream_close,
	(void *) M_java_io_DataOutputStream_flush,
	(void *) M_java_io_OutputStream_write_Array1_byte,
	(void *) M_java_io_DataOutputStream_write_Array1_byte_int_int,
	(void *) M_java_io_DataOutputStream_write_int,
	(void *) M_java_io_OutputStream_checkError_R_boolean,
	(void *) M_java_io_DataOutputStream_writeBoolean_boolean,
	(void *) M_java_io_DataOutputStream_writeByte_int,
	(void *) M_java_io_DataOutputStream_writeChar_int,
	(void *) M_java_io_DataOutputStream_writeChars_java_lang_String,
	(void *) M_java_io_DataOutputStream_writeDouble_double,
	(void *) M_java_io_DataOutputStream_writeFloat_float,
	(void *) M_java_io_DataOutputStream_writeInt_int,
	(void *) M_java_io_DataOutputStream_writeLong_long,
	(void *) M_java_io_DataOutputStream_writeShort_int,
	(void *) M_java_io_DataOutputStream_writeUTF_java_lang_String,
	(void *) M_java_io_DataOutputStream_size_R_int,
	(void *) M_java_io_DataOutputStream_writeBytes_java_lang_String,
	(void *) M_java_io_DataOutputStream_writeLongToBuffer_long_Array1_byte_int_R_int,
	(void *) M_java_io_DataOutputStream_writeShortToBuffer_int_Array1_byte_int_R_int,
	(void *) M_java_io_DataOutputStream_countUTFBytes_java_lang_String_R_long,
	(void *) M_java_io_DataOutputStream_writeUTFBytesToBuffer_java_lang_String_long_Array1_byte_int_R_int,
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
	{ "close", "()V" },
	{ "flush", "()V" },
	{ "write", "([B)V" },
	{ "write", "([BII)V" },
	{ "write", "(I)V" },
	{ "checkError", "()Z" },
	{ "writeBoolean", "(Z)V" },
	{ "writeByte", "(I)V" },
	{ "writeChar", "(I)V" },
	{ "writeChars", "(Ljava/lang/String;)V" },
	{ "writeDouble", "(D)V" },
	{ "writeFloat", "(F)V" },
	{ "writeInt", "(I)V" },
	{ "writeLong", "(J)V" },
	{ "writeShort", "(I)V" },
	{ "writeUTF", "(Ljava/lang/String;)V" },
	{ "size", "()I" },
	{ "writeBytes", "(Ljava/lang/String;)V" },
	{ "writeLongToBuffer", "(J[BI)I" },
	{ "writeShortToBuffer", "(I[BI)I" },
	{ "countUTFBytes", "(Ljava/lang/String;)J" },
	{ "writeUTFBytesToBuffer", "(Ljava/lang/String;J[BI)I" },
};

static jclass interfaces[] { &class_java_io_DataOutput, };

static FieldMetadata fields[] {
	{ "written", &class_int, offsetof(java_io_DataOutputStream, F_written), "I", 4 },
	{ "buff", getArrayClass(&class_byte, 1), offsetof(java_io_DataOutputStream, F_buff), "[B", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_DataOutputStream_java_io_OutputStream, 0, "(Ljava/io/OutputStream;)V", 1 },
	{ "flush", (intptr_t) M_java_io_DataOutputStream_flush, VTABLE_java_io_DataOutputStream_flush, "()V", 1 },
	{ "size", (intptr_t) M_java_io_DataOutputStream_size_R_int, VTABLE_java_io_DataOutputStream_size_R_int, "()I", 17 },
	{ "write", (intptr_t) M_java_io_DataOutputStream_write_Array1_byte_int_int, VTABLE_java_io_DataOutputStream_write_Array1_byte_int_int, "([BII)V", 1 },
	{ "write", (intptr_t) M_java_io_DataOutputStream_write_int, VTABLE_java_io_DataOutputStream_write_int, "(I)V", 1 },
	{ "writeBoolean", (intptr_t) M_java_io_DataOutputStream_writeBoolean_boolean, VTABLE_java_io_DataOutputStream_writeBoolean_boolean, "(Z)V", 17 },
	{ "writeByte", (intptr_t) M_java_io_DataOutputStream_writeByte_int, VTABLE_java_io_DataOutputStream_writeByte_int, "(I)V", 17 },
	{ "writeBytes", (intptr_t) M_java_io_DataOutputStream_writeBytes_java_lang_String, VTABLE_java_io_DataOutputStream_writeBytes_java_lang_String, "(Ljava/lang/String;)V", 17 },
	{ "writeChar", (intptr_t) M_java_io_DataOutputStream_writeChar_int, VTABLE_java_io_DataOutputStream_writeChar_int, "(I)V", 17 },
	{ "writeChars", (intptr_t) M_java_io_DataOutputStream_writeChars_java_lang_String, VTABLE_java_io_DataOutputStream_writeChars_java_lang_String, "(Ljava/lang/String;)V", 17 },
	{ "writeDouble", (intptr_t) M_java_io_DataOutputStream_writeDouble_double, VTABLE_java_io_DataOutputStream_writeDouble_double, "(D)V", 17 },
	{ "writeFloat", (intptr_t) M_java_io_DataOutputStream_writeFloat_float, VTABLE_java_io_DataOutputStream_writeFloat_float, "(F)V", 17 },
	{ "writeInt", (intptr_t) M_java_io_DataOutputStream_writeInt_int, VTABLE_java_io_DataOutputStream_writeInt_int, "(I)V", 17 },
	{ "writeLong", (intptr_t) M_java_io_DataOutputStream_writeLong_long, VTABLE_java_io_DataOutputStream_writeLong_long, "(J)V", 17 },
	{ "writeLongToBuffer", (intptr_t) M_java_io_DataOutputStream_writeLongToBuffer_long_Array1_byte_int_R_int, VTABLE_java_io_DataOutputStream_writeLongToBuffer_long_Array1_byte_int_R_int, "(J[BI)I", 0 },
	{ "writeShort", (intptr_t) M_java_io_DataOutputStream_writeShort_int, VTABLE_java_io_DataOutputStream_writeShort_int, "(I)V", 17 },
	{ "writeShortToBuffer", (intptr_t) M_java_io_DataOutputStream_writeShortToBuffer_int_Array1_byte_int_R_int, VTABLE_java_io_DataOutputStream_writeShortToBuffer_int_Array1_byte_int_R_int, "(I[BI)I", 0 },
	{ "writeUTF", (intptr_t) M_java_io_DataOutputStream_writeUTF_java_lang_String, VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String, "(Ljava/lang/String;)V", 17 },
	{ "countUTFBytes", (intptr_t) M_java_io_DataOutputStream_countUTFBytes_java_lang_String_R_long, VTABLE_java_io_DataOutputStream_countUTFBytes_java_lang_String_R_long, "(Ljava/lang/String;)J", 0 },
	{ "writeUTFBytesToBuffer", (intptr_t) M_java_io_DataOutputStream_writeUTFBytesToBuffer_java_lang_String_long_Array1_byte_int_R_int, VTABLE_java_io_DataOutputStream_writeUTFBytesToBuffer_java_lang_String_long_Array1_byte_int_R_int, "(Ljava/lang/String;J[BI)I", 0 },
};

Class class_java_io_DataOutputStream{
		.nativeName = (intptr_t) "java/io/DataOutputStream",
		.parentClass = (intptr_t) &class_java_io_FilterOutputStream,
		.size = sizeof(java_io_DataOutputStream),
		.classVtable = (intptr_t) vtable_java_io_DataOutputStream,
		.staticInitializer = (intptr_t) clinit_java_io_DataOutputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_DataOutputStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_DataOutputStream = registerClass(&class_java_io_DataOutputStream);

}
