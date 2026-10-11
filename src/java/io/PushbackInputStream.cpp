#include "java/io/PushbackInputStream.h"
#include "java/io/InputStream.h"
#include "java/io/PushbackInputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/io/FilterInputStream.h"
#include "java/io/IOException.h"
#include "java/lang/System.h"

extern "C" {


void mark_java_io_PushbackInputStream(jobject object, jint mark, jint depth) {
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
	auto self = (java_io_PushbackInputStream *) object;
	if (self->F_buf)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buf)->clazz)->markFunction)((jobject) self->F_buf, mark, depth + 1);
}

void clinit_java_io_PushbackInputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_FilterInputStream(ctx);
}

void init_java_io_PushbackInputStream_java_io_InputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PushbackInputStream:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_PushbackInputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(55);
	init_java_io_FilterInputStream_java_io_InputStream(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	INST_ICONST(1);
	INST_NEWARRAY(&class_byte);
label_3:;
	{
	sp -= 2;
	((java_io_PushbackInputStream *) NULL_CHECK(sp[0].o))->F_buf = (jref) sp[1].o;
	LINE_NUMBER(57);
	((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_pos = (jint(1));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_PushbackInputStream_java_io_InputStream_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PushbackInputStream:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_PushbackInputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(76);
	init_java_io_FilterInputStream_java_io_InputStream(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(77);
	if ((frame[2].i) > 0) goto label_2;
	}
	{
	LINE_NUMBER(78);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"size <= 0"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_4;
	}
	INST_ACONST_NULL();
	goto label_5;
label_4:;
	INST_ILOAD(2);
	INST_NEWARRAY(&class_byte);
label_5:;
	{
	sp -= 2;
	((java_io_PushbackInputStream *) NULL_CHECK(sp[0].o))->F_buf = (jref) sp[1].o;
	LINE_NUMBER(81);
	((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_pos = (frame[2].i);
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_io_PushbackInputStream_available_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PushbackInputStream:available", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(87);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp0 = (((jarray) nullCheck(ctx, sp[0].o))->length) - ((jint)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_pos);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp1 = (jint)((func_java_io_InputStream_available_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_available_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

void M_java_io_PushbackInputStream_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PushbackInputStream:close", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_close])(ctx, sp[0].o);
	LINE_NUMBER(103);
	((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in = (jref) (jobject(nullptr));
	LINE_NUMBER(104);
	((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_buf = (jref) (jobject(nullptr));
	}
label_1:;
	LINE_NUMBER(106);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_io_PushbackInputStream_markSupported_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PushbackInputStream:markSupported", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_java_io_PushbackInputStream_read_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PushbackInputStream:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(138);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(141);
	jint temp0 = (jint)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((java_io_PushbackInputStream *) NULL_CHECK(sp[1].o))->F_pos;
	((java_io_PushbackInputStream *) NULL_CHECK(sp[1].o))->F_pos = (temp0 + (jint(1)));
	popStackFrame(ctx);
	return (((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) & (255));
	}
label_3:;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp0 = (jint)((func_java_io_InputStream_read_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_read_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_io_PushbackInputStream_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PushbackInputStream:read", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)M_java_io_PushbackInputStream_streamClosed_R_java_io_IOException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(180);
	SM_java_util_Arrays_checkOffsetAndCount_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[1].o)))->length), (frame[2].i), (frame[3].i));
	LINE_NUMBER(181);
	frame[4].i = (jint(0));
	frame[5].i = (jint(0));
	frame[6].i = (frame[2].i);
	LINE_NUMBER(183);
	jint temp0 = (jint)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	if (((((jarray) nullCheck(ctx, sp[0].o))->length) - ((jint)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_pos)) < (frame[3].i)) goto label_9;
	}
	INST_ILOAD(3);
	goto label_10;
label_9:;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp0 = (((jarray) nullCheck(ctx, sp[0].o))->length) - ((jint)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_pos);
	sp[0].i = temp0;
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(186);
	sp[0].o = (jobject)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, ((jint)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_pos), (frame[1].o), (frame[6].i), (frame[5].i));
	LINE_NUMBER(187);
	frame[6].i = ((frame[6].i) + (frame[5].i));
	LINE_NUMBER(188);
	frame[4].i = ((frame[4].i) + (frame[5].i));
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	((java_io_PushbackInputStream *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((java_io_PushbackInputStream *) NULL_CHECK(sp[0].o))->F_pos) + (frame[5].i));
	}
label_7:;
	{
	LINE_NUMBER(193);
	if ((frame[5].i) != (frame[3].i)) goto label_15;
	}
	{
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_15:;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_int_int_R_int])(ctx, sp[0].o, (frame[1].o), (frame[6].i), ((frame[3].i) - (frame[4].i)));
	frame[7].i = temp0;
	LINE_NUMBER(197);
	if ((frame[7].i) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return ((frame[7].i) + (frame[4].i));
	}
label_18:;
	{
	LINE_NUMBER(200);
	if ((frame[4].i) != 0) goto label_20;
	}
	{
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return (frame[7].i);
	}
label_20:;
	{
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jobject M_java_io_PushbackInputStream_streamClosed_R_java_io_IOException(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PushbackInputStream:streamClosed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(207);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PushbackInputStream is closed"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jlong M_java_io_PushbackInputStream_skip_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PushbackInputStream:skip", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)M_java_io_PushbackInputStream_streamClosed_R_java_io_IOException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(223);
	if ((longCompare((frame[1].l), (jlong(0)))) > 0) goto label_3;
	}
	{
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return (jlong(0));
	}
label_3:;
	{
	LINE_NUMBER(226);
	frame[3].i = (jint(0));
	LINE_NUMBER(227);
	jint temp0 = (jint)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(228);
	jlong temp0 = jlong((frame[3].i));
	jlong temp1 = frame[1].l;
	sp[0].o = (jobject)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	jobject temp2 = sp[0].o;
	sp[0].l = temp0;
	sp += 1;
	if ((longCompare(temp1, (jlong(((((jarray) nullCheck(ctx, temp2))->length) - ((jint)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_pos)))))) >= 0) goto label_8;
	}
	INST_LLOAD(1);
	goto label_9;
label_8:;
	{
	sp[0].o = (jobject)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	jlong temp0 = jlong(((((jarray) nullCheck(ctx, sp[0].o))->length) - ((jint)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_pos)));
	sp[0].l = temp0;
	sp += 1;
	}
label_9:;
	{
	sp -= 2;
	frame[3].i = (jint((sp[0].l + sp[1].l)));
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	((java_io_PushbackInputStream *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((java_io_PushbackInputStream *) NULL_CHECK(sp[0].o))->F_pos) + (frame[3].i));
	}
label_6:;
	{
	LINE_NUMBER(231);
	if ((longCompare((jlong((frame[3].i))), (frame[1].l))) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(232);
	jlong temp0 = jlong((frame[3].i));
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	jlong temp1 = (jlong)((func_java_io_InputStream_skip_long_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_skip_long_R_long])(ctx, sp[0].o, ((frame[1].l) - (jlong((frame[3].i)))));
	frame[3].i = (jint((temp0 + temp1)));
	}
label_11:;
	{
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return (jlong((frame[3].i)));
	}

	popStackFrame(ctx);
}

void M_java_io_PushbackInputStream_unread_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PushbackInputStream:unread", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(254);
	((func_java_io_PushbackInputStream_unread_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PushbackInputStream_unread_Array1_byte_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PushbackInputStream_unread_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PushbackInputStream:unread", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(284);
	if ((frame[3].i) <= ((jint)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_pos)) goto label_1;
	}
	{
	LINE_NUMBER(285);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Pushback buffer full"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(287);
	SM_java_util_Arrays_checkOffsetAndCount_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[1].o)))->length), (frame[2].i), (frame[3].i));
	LINE_NUMBER(288);
	sp[0].o = (jobject)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)M_java_io_PushbackInputStream_streamClosed_R_java_io_IOException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(292);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (((jint)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_pos) - (frame[3].i)), (frame[3].i));
	LINE_NUMBER(293);
	((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_pos = (((jint)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_pos) - (frame[3].i));
	LINE_NUMBER(294);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PushbackInputStream_unread_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PushbackInputStream:unread", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(313);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(315);
	if (((jint)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_pos) != 0) goto label_3;
	}
	{
	LINE_NUMBER(316);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Pushback buffer full"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(318);
	sp[0].o = (jobject)((java_io_PushbackInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[1].o = frame[0].o;
	jint temp0 = ((jint)((java_io_PushbackInputStream *) NULL_CHECK(sp[1].o))->F_pos) - (jint(1));
	((java_io_PushbackInputStream *) NULL_CHECK(sp[1].o))->F_pos = temp0;
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((frame[1].i)));
	LINE_NUMBER(319);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PushbackInputStream_mark_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PushbackInputStream:mark", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(330);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_PushbackInputStream_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PushbackInputStream:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(342);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_java_io_PushbackInputStream[] {
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
	(void *) M_java_io_PushbackInputStream_close,
	(void *) M_java_io_PushbackInputStream_available_R_int,
	(void *) M_java_io_PushbackInputStream_mark_int,
	(void *) M_java_io_PushbackInputStream_markSupported_R_boolean,
	(void *) M_java_io_PushbackInputStream_read_R_int,
	(void *) M_java_io_InputStream_read_Array1_byte_R_int,
	(void *) M_java_io_PushbackInputStream_read_Array1_byte_int_int_R_int,
	(void *) M_java_io_PushbackInputStream_reset,
	(void *) M_java_io_PushbackInputStream_skip_long_R_long,
	(void *) M_java_io_PushbackInputStream_streamClosed_R_java_io_IOException,
	(void *) M_java_io_PushbackInputStream_unread_Array1_byte,
	(void *) M_java_io_PushbackInputStream_unread_Array1_byte_int_int,
	(void *) M_java_io_PushbackInputStream_unread_int,
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
	{ "streamClosed", "()Ljava/io/IOException;" },
	{ "unread", "([B)V" },
	{ "unread", "([BII)V" },
	{ "unread", "(I)V" },
};

static FieldMetadata fields[] {
	{ "buf", getArrayClass(&class_byte, 1), offsetof(java_io_PushbackInputStream, F_buf), "[B", 4 },
	{ "pos", &class_int, offsetof(java_io_PushbackInputStream, F_pos), "I", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_PushbackInputStream_java_io_InputStream, 0, "(Ljava/io/InputStream;)V", 1 },
	{ "<init>", (intptr_t) init_java_io_PushbackInputStream_java_io_InputStream_int, 0, "(Ljava/io/InputStream;I)V", 1 },
	{ "available", (intptr_t) M_java_io_PushbackInputStream_available_R_int, VTABLE_java_io_PushbackInputStream_available_R_int, "()I", 1 },
	{ "close", (intptr_t) M_java_io_PushbackInputStream_close, VTABLE_java_io_PushbackInputStream_close, "()V", 1 },
	{ "markSupported", (intptr_t) M_java_io_PushbackInputStream_markSupported_R_boolean, VTABLE_java_io_PushbackInputStream_markSupported_R_boolean, "()Z", 1 },
	{ "read", (intptr_t) M_java_io_PushbackInputStream_read_R_int, VTABLE_java_io_PushbackInputStream_read_R_int, "()I", 1 },
	{ "read", (intptr_t) M_java_io_PushbackInputStream_read_Array1_byte_int_int_R_int, VTABLE_java_io_PushbackInputStream_read_Array1_byte_int_int_R_int, "([BII)I", 1 },
	{ "streamClosed", (intptr_t) M_java_io_PushbackInputStream_streamClosed_R_java_io_IOException, VTABLE_java_io_PushbackInputStream_streamClosed_R_java_io_IOException, "()Ljava/io/IOException;", 2 },
	{ "skip", (intptr_t) M_java_io_PushbackInputStream_skip_long_R_long, VTABLE_java_io_PushbackInputStream_skip_long_R_long, "(J)J", 1 },
	{ "unread", (intptr_t) M_java_io_PushbackInputStream_unread_Array1_byte, VTABLE_java_io_PushbackInputStream_unread_Array1_byte, "([B)V", 1 },
	{ "unread", (intptr_t) M_java_io_PushbackInputStream_unread_Array1_byte_int_int, VTABLE_java_io_PushbackInputStream_unread_Array1_byte_int_int, "([BII)V", 1 },
	{ "unread", (intptr_t) M_java_io_PushbackInputStream_unread_int, VTABLE_java_io_PushbackInputStream_unread_int, "(I)V", 1 },
	{ "mark", (intptr_t) M_java_io_PushbackInputStream_mark_int, VTABLE_java_io_PushbackInputStream_mark_int, "(I)V", 1 },
	{ "reset", (intptr_t) M_java_io_PushbackInputStream_reset, VTABLE_java_io_PushbackInputStream_reset, "()V", 1 },
};

Class class_java_io_PushbackInputStream{
		.nativeName = (intptr_t) "java/io/PushbackInputStream",
		.parentClass = (intptr_t) &class_java_io_FilterInputStream,
		.size = sizeof(java_io_PushbackInputStream),
		.classVtable = (intptr_t) vtable_java_io_PushbackInputStream,
		.staticInitializer = (intptr_t) clinit_java_io_PushbackInputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_PushbackInputStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_PushbackInputStream = registerClass(&class_java_io_PushbackInputStream);

}
