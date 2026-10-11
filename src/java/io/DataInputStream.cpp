#include "java/io/DataInputStream.h"
#include "java/lang/StringBuilder.h"
#include "java/io/DataInputStream.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/Float.h"
#include "java/io/DataInput.h"
#include "java/io/InputStream.h"
#include "java/io/PushbackInputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/EOFException.h"
#include "java/io/FilterInputStream.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"

extern "C" {


void mark_java_io_DataInputStream(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_FilterInputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_io_DataInputStream *) object;
	if (self->F_scratch)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scratch)->clazz)->markFunction)((jobject) self->F_scratch, mark, depth + 1);
}

void clinit_java_io_DataInputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_FilterInputStream(ctx);
}

void init_java_io_DataInputStream_java_io_InputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataInputStream:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_DataInputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(37);
	init_java_io_FilterInputStream_java_io_InputStream(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (8));
	((java_io_DataInputStream *) NULL_CHECK(sp[0].o))->F_scratch = (jref) sp[1].o;
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_io_DataInputStream_readBoolean_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataInputStream:readBoolean", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp0 = (jint)((func_java_io_InputStream_read_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_read_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(46);
	if ((frame[1].i) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(47);
	clinit_java_io_EOFException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_EOFException);
	init_java_io_EOFException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(49);
	if ((frame[1].i) == 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbyte M_java_io_DataInputStream_readByte_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataInputStream:readByte", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp0 = (jint)((func_java_io_InputStream_read_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_read_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(58);
	if ((frame[1].i) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(59);
	clinit_java_io_EOFException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_EOFException);
	init_java_io_EOFException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (jbyte((frame[1].i)));
	}

	popStackFrame(ctx);
}

jchar M_java_io_DataInputStream_readChar_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataInputStream:readChar", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jchar(temp0));
	}

	popStackFrame(ctx);
}

jdouble M_java_io_DataInputStream_readDouble_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataInputStream:readDouble", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	jlong temp0 = (jlong)((func_java_io_DataInputStream_readLong_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_DataInputStream_readLong_R_long])(ctx, (frame[0].o));
	jdouble temp1 = (jdouble)SM_java_lang_Double_longBitsToDouble_long_R_double(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jfloat M_java_io_DataInputStream_readFloat_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataInputStream:readFloat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)SM_java_lang_Float_intBitsToFloat_int_R_float(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

void M_java_io_DataInputStream_readFully_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataInputStream:readFully", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(93);
	((func_java_io_DataInputStream_readFully_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_DataInputStream_readFully_Array1_byte_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_DataInputStream_readFully_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataInputStream:readFully", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(101);
	if ((frame[3].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(102);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(104);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(105);
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(106);
	jint temp0 = (jint)((func_java_io_DataInputStream_read_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_DataInputStream_read_Array1_byte_int_int_R_int])(ctx, (frame[0].o), (frame[1].o), ((frame[2].i) + (frame[4].i)), ((frame[3].i) - (frame[4].i)));
	frame[5].i = temp0;
	LINE_NUMBER(107);
	if ((frame[5].i) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(108);
	clinit_java_io_EOFException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_EOFException);
	init_java_io_EOFException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(110);
	frame[4].i = ((frame[4].i) + (frame[5].i));
	LINE_NUMBER(111);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(112);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_io_DataInputStream_readInt_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataInputStream:readInt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_io_DataInputStream *) NULL_CHECK((frame[0].o)))->F_scratch;
	((func_java_io_DataInputStream_readFully_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readFully_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(4)));
	LINE_NUMBER(120);
	sp[0].o = (jobject)((java_io_DataInputStream *) NULL_CHECK((frame[0].o)))->F_scratch;
	jint temp0 = (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0)))) & (255)) << (24);
	sp[0].o = (jobject)((java_io_DataInputStream *) NULL_CHECK((frame[0].o)))->F_scratch;
	jint temp1 = temp0 | ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(1)))) & (255)) << (16));
	sp[0].o = (jobject)((java_io_DataInputStream *) NULL_CHECK((frame[0].o)))->F_scratch;
	jint temp2 = temp1 | ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2)))) & (255)) << (8));
	sp[0].o = (jobject)((java_io_DataInputStream *) NULL_CHECK((frame[0].o)))->F_scratch;
	popStackFrame(ctx);
	return (temp2 | ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(3)))) & (255)) << (jint(0))));
	}

	popStackFrame(ctx);
}

jlong M_java_io_DataInputStream_readLong_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataInputStream:readLong", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(131);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_io_DataInputStream *) NULL_CHECK((frame[0].o)))->F_scratch;
	((func_java_io_DataInputStream_readFully_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readFully_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (8));
	LINE_NUMBER(132);
	sp[0].o = (jobject)((java_io_DataInputStream *) NULL_CHECK((frame[0].o)))->F_scratch;
	jint temp0 = (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0)))) & (255)) << (24);
	sp[0].o = (jobject)((java_io_DataInputStream *) NULL_CHECK((frame[0].o)))->F_scratch;
	jint temp1 = temp0 | ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(1)))) & (255)) << (16));
	sp[0].o = (jobject)((java_io_DataInputStream *) NULL_CHECK((frame[0].o)))->F_scratch;
	jint temp2 = temp1 | ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2)))) & (255)) << (8));
	sp[0].o = (jobject)((java_io_DataInputStream *) NULL_CHECK((frame[0].o)))->F_scratch;
	frame[1].i = (temp2 | ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(3)))) & (255)) << (jint(0))));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((java_io_DataInputStream *) NULL_CHECK((frame[0].o)))->F_scratch;
	jint temp3 = (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(4)))) & (255)) << (24);
	sp[0].o = (jobject)((java_io_DataInputStream *) NULL_CHECK((frame[0].o)))->F_scratch;
	jint temp4 = temp3 | ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(5)))) & (255)) << (16));
	sp[0].o = (jobject)((java_io_DataInputStream *) NULL_CHECK((frame[0].o)))->F_scratch;
	jint temp5 = temp4 | ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (6))) & (255)) << (8));
	sp[0].o = (jobject)((java_io_DataInputStream *) NULL_CHECK((frame[0].o)))->F_scratch;
	frame[2].i = (temp5 | ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (7))) & (255)) << (jint(0))));
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return (((jlong((frame[1].i))) << (32)) | ((jlong((frame[2].i))) & (jlong(4294967295ll))));
	}

	popStackFrame(ctx);
}

jshort M_java_io_DataInputStream_readShort_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataInputStream:readShort", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_io_DataInputStream *) NULL_CHECK((frame[0].o)))->F_scratch;
	((func_java_io_DataInputStream_readFully_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readFully_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(2)));
	LINE_NUMBER(149);
	sp[0].o = (jobject)((java_io_DataInputStream *) NULL_CHECK((frame[0].o)))->F_scratch;
	jint temp0 = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0)))) << (8);
	sp[0].o = (jobject)((java_io_DataInputStream *) NULL_CHECK((frame[0].o)))->F_scratch;
	popStackFrame(ctx);
	return (jshort((temp0 | (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(1)))) & (255)))));
	}

	popStackFrame(ctx);
}

jint M_java_io_DataInputStream_readUnsignedByte_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataInputStream:readUnsignedByte", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp0 = (jint)((func_java_io_InputStream_read_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_read_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(158);
	if ((frame[1].i) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(159);
	clinit_java_io_EOFException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_EOFException);
	init_java_io_EOFException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_java_io_DataInputStream_readUnsignedShort_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataInputStream:readUnsignedShort", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(169);
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 & (jint(65535)));
	}

	popStackFrame(ctx);
}

jobject M_java_io_DataInputStream_readUTF_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataInputStream:readUTF", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_io_DataInputStream_readUnsignedShort_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedShort_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_io_DataInputStream_decodeUTF_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_decodeUTF_int_R_java_lang_String])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_DataInputStream_decodeUTF_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataInputStream:decodeUTF", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)SM_java_io_DataInputStream_decodeUTF_int_java_io_DataInput_R_java_lang_String(ctx, (frame[1].i), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_io_DataInputStream_decodeUTF_int_java_io_DataInput_R_java_lang_String(jcontext ctx, jint param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataInputStream:decodeUTF", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_DataInputStream(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[0].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(186);
	((func_java_io_DataInput_readFully_Array1_byte_int_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readFully_Array1_byte_int_int, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o), (jint(0)), (frame[0].i));
	LINE_NUMBER(187);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (frame[0].i));
	sp[0].o = (jobject)SM_java_io_DataInputStream_decode_Array1_byte_Array1_char_int_int_R_java_lang_String(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_io_DataInputStream_decode_Array1_byte_Array1_char_int_int_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataInputStream:decode", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_DataInputStream(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(197);
	frame[4].i = (jint(0));
	frame[5].i = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(198);
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(199);
	sp[0].o = frame[1].o;
	jint temp0 = frame[5].i;
	sp[1].o = frame[0].o;
	jint temp1 = frame[2].i;
	jint temp2 = frame[4].i;
	INST_IINC(4, 1);
	jint temp3 = jchar(((jint)ARRAY_ACCESS(jbyte, sp[1].o, (temp1 + temp2))));
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = temp3;
	if (temp3 >= (128)) goto label_5;
	}
	{
	LINE_NUMBER(200);
	INST_IINC(5, 1);
	goto label_2;
	}
label_5:;
	{
	LINE_NUMBER(201);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i));
	frame[6].i = temp0;
	if ((temp0 & (224)) != (192)) goto label_8;
	}
	{
	LINE_NUMBER(202);
	if ((frame[4].i) < (frame[3].i)) goto label_10;
	}
	{
	LINE_NUMBER(203);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"bad second byte at "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[4].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(205);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[4].i;
	INST_IINC(4, 1);
	frame[7].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (temp0 + temp1)));
	LINE_NUMBER(206);
	if (((frame[7].i) & (192)) == (128)) goto label_13;
	}
	{
	LINE_NUMBER(207);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"bad second byte at "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((frame[4].i) - (jint(1))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(209);
	sp[0].o = frame[1].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (jchar(((((frame[6].i) & (31)) << (6)) | ((frame[7].i) & (63)))));
	LINE_NUMBER(210);
	goto label_2;
	}
label_8:;
	{
	if (((frame[6].i) & (240)) != (224)) goto label_16;
	}
	{
	LINE_NUMBER(211);
	if (((frame[4].i) + (jint(1))) < (frame[3].i)) goto label_18;
	}
	{
	LINE_NUMBER(212);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"bad third byte at "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((frame[4].i) + (jint(1))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(214);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[4].i;
	INST_IINC(4, 1);
	frame[7].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (temp0 + temp1)));
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	jint temp2 = frame[2].i;
	jint temp3 = frame[4].i;
	INST_IINC(4, 1);
	frame[8].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (temp2 + temp3)));
	LINE_NUMBER(216);
	if (((frame[7].i) & (192)) != (128)) goto label_22;
	}
	{
	if (((frame[8].i) & (192)) == (128)) goto label_23;
	}
label_22:;
	{
	LINE_NUMBER(217);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"bad second or third byte at "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((frame[4].i) - (jint(2))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_23:;
	{
	LINE_NUMBER(219);
	sp[0].o = frame[1].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (jchar((((((frame[6].i) & (15)) << (12)) | (((frame[7].i) & (63)) << (6))) | ((frame[8].i) & (63)))));
	LINE_NUMBER(220);
	goto label_2;
	}
label_16:;
	{
	LINE_NUMBER(221);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"bad byte at "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((frame[4].i) - (jint(1))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(224);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[1].o), (jint(0)), (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_io_DataInputStream_readUTF_java_io_DataInput_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataInputStream:readUTF", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_DataInputStream(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(231);
	jint temp0 = (jint)((func_java_io_DataInput_readUnsignedShort_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedShort_R_int, (frame[0].o)))(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_io_DataInputStream_decodeUTF_int_java_io_DataInput_R_java_lang_String(ctx, temp0, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_io_DataInputStream_skipBytes_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataInputStream:skipBytes", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	
	jint total = 0;
	jint toSkip = param0;
	if (toSkip <= 0) {
		popStackFrame(ctx);
		return 0;
	}
	jobject inStream = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	while (total < toSkip) {
		jlong skipped = ((func_java_io_InputStream_skip_long_R_long) ((void **) nullCheck(ctx, inStream)->vtable)[VTABLE_java_io_InputStream_skip_long_R_long])(ctx, inStream, (jlong(toSkip - total)));
		if (skipped > 0) {
			total += (jint)skipped;
		} else {
			jint b = ((func_java_io_InputStream_read_R_int) ((void **) nullCheck(ctx, inStream)->vtable)[VTABLE_java_io_InputStream_read_R_int])(ctx, inStream);
			if (b < 0) {
				break;
			}
			total++;
		}
	}

	popStackFrame(ctx);
	return total;
}

jobject M_java_io_DataInputStream_readLine_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/DataInputStream:readLine", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(248);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (80));
	frame[1].o = sp[0].o;
	LINE_NUMBER(249);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp0 = (jint)((func_java_io_InputStream_read_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_read_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(252);
	switch((frame[3].i)) {
		case -1: goto label_4;
		case 10: goto label_5;
		case 13: goto label_6;
		default: goto label_7;
	}
	}
label_4:;
	{
	LINE_NUMBER(254);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_8;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_8;
	{
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_8:;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(259);
	if ((frame[2].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	((func_java_io_PushbackInputStream_unread_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_io_PushbackInputStream, sp[0].o)))->vtable)[VTABLE_java_io_PushbackInputStream_unread_int])(ctx, (checkCast(ctx, &class_java_io_PushbackInputStream, sp[0].o)), (frame[3].i));
	LINE_NUMBER(261);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(263);
	frame[2].i = (jint(1));
	LINE_NUMBER(265);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	if (sp[0].o == (((jobject) &class_java_io_PushbackInputStream))) goto label_14;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	clinit_java_io_PushbackInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_PushbackInputStream);
	sp[2].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	init_java_io_PushbackInputStream_java_io_InputStream(ctx, sp[1].o, sp[2].o);
	((java_io_FilterInputStream *) NULL_CHECK(sp[0].o))->F_in = (jref) sp[1].o;
	goto label_14;
	}
label_5:;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(272);
	if ((frame[2].i) == 0) goto label_16;
	}
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	((func_java_io_PushbackInputStream_unread_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_io_PushbackInputStream, sp[0].o)))->vtable)[VTABLE_java_io_PushbackInputStream_unread_int])(ctx, (checkCast(ctx, &class_java_io_PushbackInputStream, sp[0].o)), (frame[3].i));
	LINE_NUMBER(274);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (jchar((frame[3].i))));
	}
label_14:;
	LINE_NUMBER(278);
	goto label_2;

	popStackFrame(ctx);
}

void *vtable_java_io_DataInputStream[] {
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
	(void *) M_java_io_FilterInputStream_close,
	(void *) M_java_io_FilterInputStream_available_R_int,
	(void *) M_java_io_FilterInputStream_mark_int,
	(void *) M_java_io_FilterInputStream_markSupported_R_boolean,
	(void *) M_java_io_FilterInputStream_read_R_int,
	(void *) M_java_io_InputStream_read_Array1_byte_R_int,
	(void *) M_java_io_FilterInputStream_read_Array1_byte_int_int_R_int,
	(void *) M_java_io_FilterInputStream_reset,
	(void *) M_java_io_FilterInputStream_skip_long_R_long,
	(void *) M_java_io_DataInputStream_readBoolean_R_boolean,
	(void *) M_java_io_DataInputStream_readByte_R_byte,
	(void *) M_java_io_DataInputStream_readChar_R_char,
	(void *) M_java_io_DataInputStream_readDouble_R_double,
	(void *) M_java_io_DataInputStream_readFloat_R_float,
	(void *) M_java_io_DataInputStream_readFully_Array1_byte,
	(void *) M_java_io_DataInputStream_readFully_Array1_byte_int_int,
	(void *) M_java_io_DataInputStream_readInt_R_int,
	(void *) M_java_io_DataInputStream_readLong_R_long,
	(void *) M_java_io_DataInputStream_readShort_R_short,
	(void *) M_java_io_DataInputStream_readUnsignedByte_R_int,
	(void *) M_java_io_DataInputStream_readUnsignedShort_R_int,
	(void *) M_java_io_DataInputStream_readUTF_R_java_lang_String,
	(void *) M_java_io_DataInputStream_skipBytes_int_R_int,
	(void *) M_java_io_DataInputStream_decodeUTF_int_R_java_lang_String,
	(void *) M_java_io_DataInputStream_readLine_R_java_lang_String,
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
	{ "available", "()I" },
	{ "mark", "(I)V" },
	{ "markSupported", "()Z" },
	{ "read", "()I" },
	{ "read", "([B)I" },
	{ "read", "([BII)I" },
	{ "reset", "()V" },
	{ "skip", "(J)J" },
	{ "readBoolean", "()Z" },
	{ "readByte", "()B" },
	{ "readChar", "()C" },
	{ "readDouble", "()D" },
	{ "readFloat", "()F" },
	{ "readFully", "([B)V" },
	{ "readFully", "([BII)V" },
	{ "readInt", "()I" },
	{ "readLong", "()J" },
	{ "readShort", "()S" },
	{ "readUnsignedByte", "()I" },
	{ "readUnsignedShort", "()I" },
	{ "readUTF", "()Ljava/lang/String;" },
	{ "skipBytes", "(I)I" },
	{ "decodeUTF", "(I)Ljava/lang/String;" },
	{ "readLine", "()Ljava/lang/String;" },
};

static jclass interfaces[] { &class_java_io_DataInput, };

static FieldMetadata fields[] {
	{ "scratch", getArrayClass(&class_byte, 1), offsetof(java_io_DataInputStream, F_scratch), "[B", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_DataInputStream_java_io_InputStream, 0, "(Ljava/io/InputStream;)V", 1 },
	{ "readBoolean", (intptr_t) M_java_io_DataInputStream_readBoolean_R_boolean, VTABLE_java_io_DataInputStream_readBoolean_R_boolean, "()Z", 17 },
	{ "readByte", (intptr_t) M_java_io_DataInputStream_readByte_R_byte, VTABLE_java_io_DataInputStream_readByte_R_byte, "()B", 17 },
	{ "readChar", (intptr_t) M_java_io_DataInputStream_readChar_R_char, VTABLE_java_io_DataInputStream_readChar_R_char, "()C", 17 },
	{ "readDouble", (intptr_t) M_java_io_DataInputStream_readDouble_R_double, VTABLE_java_io_DataInputStream_readDouble_R_double, "()D", 17 },
	{ "readFloat", (intptr_t) M_java_io_DataInputStream_readFloat_R_float, VTABLE_java_io_DataInputStream_readFloat_R_float, "()F", 17 },
	{ "readFully", (intptr_t) M_java_io_DataInputStream_readFully_Array1_byte, VTABLE_java_io_DataInputStream_readFully_Array1_byte, "([B)V", 17 },
	{ "readFully", (intptr_t) M_java_io_DataInputStream_readFully_Array1_byte_int_int, VTABLE_java_io_DataInputStream_readFully_Array1_byte_int_int, "([BII)V", 17 },
	{ "readInt", (intptr_t) M_java_io_DataInputStream_readInt_R_int, VTABLE_java_io_DataInputStream_readInt_R_int, "()I", 17 },
	{ "readLong", (intptr_t) M_java_io_DataInputStream_readLong_R_long, VTABLE_java_io_DataInputStream_readLong_R_long, "()J", 17 },
	{ "readShort", (intptr_t) M_java_io_DataInputStream_readShort_R_short, VTABLE_java_io_DataInputStream_readShort_R_short, "()S", 17 },
	{ "readUnsignedByte", (intptr_t) M_java_io_DataInputStream_readUnsignedByte_R_int, VTABLE_java_io_DataInputStream_readUnsignedByte_R_int, "()I", 17 },
	{ "readUnsignedShort", (intptr_t) M_java_io_DataInputStream_readUnsignedShort_R_int, VTABLE_java_io_DataInputStream_readUnsignedShort_R_int, "()I", 17 },
	{ "readUTF", (intptr_t) M_java_io_DataInputStream_readUTF_R_java_lang_String, VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String, "()Ljava/lang/String;", 17 },
	{ "decodeUTF", (intptr_t) M_java_io_DataInputStream_decodeUTF_int_R_java_lang_String, VTABLE_java_io_DataInputStream_decodeUTF_int_R_java_lang_String, "(I)Ljava/lang/String;", 0 },
	{ "decodeUTF", (intptr_t) SM_java_io_DataInputStream_decodeUTF_int_java_io_DataInput_R_java_lang_String, 0, "(ILjava/io/DataInput;)Ljava/lang/String;", 10 },
	{ "decode", (intptr_t) SM_java_io_DataInputStream_decode_Array1_byte_Array1_char_int_int_R_java_lang_String, 0, "([B[CII)Ljava/lang/String;", 10 },
	{ "readUTF", (intptr_t) SM_java_io_DataInputStream_readUTF_java_io_DataInput_R_java_lang_String, 0, "(Ljava/io/DataInput;)Ljava/lang/String;", 25 },
	{ "skipBytes", (intptr_t) M_java_io_DataInputStream_skipBytes_int_R_int, VTABLE_java_io_DataInputStream_skipBytes_int_R_int, "(I)I", 17 },
	{ "readLine", (intptr_t) M_java_io_DataInputStream_readLine_R_java_lang_String, VTABLE_java_io_DataInputStream_readLine_R_java_lang_String, "()Ljava/lang/String;", 17 },
};

Class class_java_io_DataInputStream{
		.nativeName = (intptr_t) "java/io/DataInputStream",
		.parentClass = (intptr_t) &class_java_io_FilterInputStream,
		.size = sizeof(java_io_DataInputStream),
		.classVtable = (intptr_t) vtable_java_io_DataInputStream,
		.staticInitializer = (intptr_t) clinit_java_io_DataInputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_DataInputStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 36,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_DataInputStream = registerClass(&class_java_io_DataInputStream);

}
