#include "java/io/BufferedInputStream.h"
#include "java/io/BufferedInputStream.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/io/FilterInputStream.h"
#include "java/io/IOException.h"
#include "java/lang/System.h"
#include "java/lang/OutOfMemoryError.h"

extern "C" {

jint SF_java_io_BufferedInputStream_DEFAULT_BUFFER_SIZE;
jint SF_java_io_BufferedInputStream_MAX_BUFFER_SIZE;

void mark_java_io_BufferedInputStream(jobject object, jint mark, jint depth) {
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
	auto self = (java_io_BufferedInputStream *) object;
	if (self->F_buf)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buf)->clazz)->markFunction)((jobject) self->F_buf, mark, depth + 1);
}

jobject M_java_io_BufferedInputStream_getInIfOpen_R_java_io_InputStream(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedInputStream:getInIfOpen", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	frame[1].o = sp[0].o;
	LINE_NUMBER(146);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(147);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stream closed"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_io_BufferedInputStream_getBufIfOpen_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedInputStream:getBufIfOpen", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	frame[1].o = sp[0].o;
	LINE_NUMBER(157);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(158);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stream closed"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void init_java_io_BufferedInputStream_java_io_InputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedInputStream:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_BufferedInputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(171);
	init_java_io_BufferedInputStream_java_io_InputStream_int(ctx, (frame[0].o), (frame[1].o), (clinit_java_io_BufferedInputStream(ctx), (jint)SF_java_io_BufferedInputStream_DEFAULT_BUFFER_SIZE));
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_BufferedInputStream_java_io_InputStream_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedInputStream:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_BufferedInputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(187);
	init_java_io_FilterInputStream_java_io_InputStream(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(124);
	((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_markpos = (jint(-1));
	LINE_NUMBER(188);
	if ((frame[2].i) > 0) goto label_3;
	}
	{
	LINE_NUMBER(189);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Buffer size <= 0"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(191);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (frame[2].i));
	((java_io_BufferedInputStream *) NULL_CHECK(sp[0].o))->F_buf = (jref) sp[1].o;
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_BufferedInputStream_fill(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedInputStream:fill", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)M_java_io_BufferedInputStream_getBufIfOpen_R_Array1_byte(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(203);
	if (((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_markpos) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(204);
	((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_pos = (jint(0));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(205);
	if (((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_pos) < (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(206);
	if (((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_markpos) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(207);
	frame[2].i = (((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_pos) - ((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_markpos));
	LINE_NUMBER(208);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[1].o), ((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_markpos), (frame[1].o), (jint(0)), (frame[2].i));
	LINE_NUMBER(209);
	((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_pos = (frame[2].i);
	LINE_NUMBER(210);
	((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_markpos = (jint(0));
	LINE_NUMBER(211);
	goto label_4;
	}
label_6:;
	{
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) < ((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_marklimit)) goto label_12;
	}
	{
	LINE_NUMBER(212);
	((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_markpos = (jint(-1));
	LINE_NUMBER(213);
	((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_pos = (jint(0));
	goto label_4;
	}
label_12:;
	{
	LINE_NUMBER(214);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) < (clinit_java_io_BufferedInputStream(ctx), (jint)SF_java_io_BufferedInputStream_MAX_BUFFER_SIZE)) goto label_15;
	}
	{
	LINE_NUMBER(215);
	clinit_java_lang_OutOfMemoryError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_OutOfMemoryError);
	init_java_lang_OutOfMemoryError_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Required array size too large"_j))));
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(217);
	if (((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_pos) > ((clinit_java_io_BufferedInputStream(ctx), (jint)SF_java_io_BufferedInputStream_MAX_BUFFER_SIZE) - ((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_pos))) goto label_17;
	}
	{
	LINE_NUMBER(218);
	jint temp0 = ((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_pos) * (jint(2));
	sp[0].i = temp0;
	sp += 1;
	goto label_19;
	}
label_17:;
	clinit_java_io_BufferedInputStream(ctx);
	(sp++)->i = SF_java_io_BufferedInputStream_MAX_BUFFER_SIZE;
label_19:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(219);
	if ((frame[2].i) <= ((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_marklimit)) goto label_21;
	}
	{
	LINE_NUMBER(220);
	frame[2].i = ((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_marklimit);
	}
label_21:;
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(222);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[1].o), (jint(0)), (frame[3].o), (jint(0)), ((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_pos));
	LINE_NUMBER(223);
	((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_buf = (jref) (frame[3].o);
	LINE_NUMBER(232);
	frame[1].o = (frame[3].o);
	}
label_4:;
	{
	LINE_NUMBER(234);
	((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_count = ((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_pos);
	LINE_NUMBER(235);
	sp[0].o = (jobject)M_java_io_BufferedInputStream_getInIfOpen_R_java_io_InputStream(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_int_int_R_int])(ctx, sp[0].o, (frame[1].o), ((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_pos), ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - ((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_pos)));
	frame[2].i = temp0;
	LINE_NUMBER(236);
	if ((frame[2].i) <= 0) goto label_28;
	}
	{
	LINE_NUMBER(237);
	((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_count = ((frame[2].i) + ((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_pos));
	}
label_28:;
	LINE_NUMBER(238);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_io_BufferedInputStream_read_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedInputStream:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(253);
	if (((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_pos) < ((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_count)) goto label_1;
	}
	{
	LINE_NUMBER(254);
	M_java_io_BufferedInputStream_fill(ctx, (frame[0].o));
	LINE_NUMBER(255);
	if (((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_pos) < ((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_count)) goto label_1;
	}
	{
	LINE_NUMBER(256);
	popStackFrame(ctx, self);
	return (jint(-1));
	}
label_1:;
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)M_java_io_BufferedInputStream_getBufIfOpen_R_Array1_byte(ctx, (frame[0].o));
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((java_io_BufferedInputStream *) NULL_CHECK(sp[1].o))->F_pos;
	((java_io_BufferedInputStream *) NULL_CHECK(sp[1].o))->F_pos = (temp0 + (jint(1)));
	popStackFrame(ctx, self);
	return (((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) & (255));
	}

	popStackFrame(ctx);
}

jint M_java_io_BufferedInputStream_read1_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedInputStream:read1", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(266);
	frame[4].i = (((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_count) - ((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_pos));
	LINE_NUMBER(267);
	if ((frame[4].i) > 0) goto label_2;
	}
	{
	LINE_NUMBER(272);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)M_java_io_BufferedInputStream_getBufIfOpen_R_Array1_byte(ctx, (frame[0].o));
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	if (((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_markpos) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)M_java_io_BufferedInputStream_getInIfOpen_R_java_io_InputStream(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_int_int_R_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return temp0;
	}
label_4:;
	{
	LINE_NUMBER(275);
	M_java_io_BufferedInputStream_fill(ctx, (frame[0].o));
	LINE_NUMBER(276);
	frame[4].i = (((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_count) - ((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_pos));
	LINE_NUMBER(277);
	if ((frame[4].i) > 0) goto label_2;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(279);
	if ((frame[4].i) >= (frame[3].i)) goto label_8;
	}
	INST_ILOAD(4);
	goto label_9;
label_8:;
	INST_ILOAD(3);
label_9:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(280);
	sp[0].o = (jobject)M_java_io_BufferedInputStream_getBufIfOpen_R_Array1_byte(ctx, (frame[0].o));
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, ((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_pos), (frame[1].o), (frame[2].i), (frame[5].i));
	LINE_NUMBER(281);
	sp[0].o = frame[0].o;
	((java_io_BufferedInputStream *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((java_io_BufferedInputStream *) NULL_CHECK(sp[0].o))->F_pos) + (frame[5].i));
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jint M_java_io_BufferedInputStream_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedInputStream:read", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)M_java_io_BufferedInputStream_getBufIfOpen_R_Array1_byte(ctx, (frame[0].o));
	LINE_NUMBER(326);
	if (((((frame[2].i) | (frame[3].i)) | ((frame[2].i) + (frame[3].i))) | ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - ((frame[2].i) + (frame[3].i)))) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(327);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(328);
	if ((frame[3].i) != 0) goto label_4;
	}
	{
	LINE_NUMBER(329);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(332);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(334);
	jint temp0 = (jint)M_java_io_BufferedInputStream_read1_Array1_byte_int_int_R_int(ctx, (frame[0].o), (frame[1].o), ((frame[2].i) + (frame[4].i)), ((frame[3].i) - (frame[4].i)));
	frame[5].i = temp0;
	LINE_NUMBER(335);
	if ((frame[5].i) > 0) goto label_8;
	}
	{
	LINE_NUMBER(336);
	if ((frame[4].i) != 0) goto label_10;
	}
	INST_ILOAD(5);
	goto label_11;
label_10:;
	INST_ILOAD(4);
label_11:;
	popStackFrame(ctx, self);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(337);
	frame[4].i = ((frame[4].i) + (frame[5].i));
	LINE_NUMBER(338);
	if ((frame[4].i) < (frame[3].i)) goto label_13;
	}
	{
	LINE_NUMBER(339);
	popStackFrame(ctx, self);
	return (frame[4].i);
	}
label_13:;
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	frame[6].o = sp[0].o;
	LINE_NUMBER(342);
	if ((frame[6].o) == nullptr) goto label_16;
	}
	{
	jint temp0 = (jint)((func_java_io_InputStream_available_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_io_InputStream_available_R_int])(ctx, (frame[6].o));
	if (temp0 > 0) goto label_16;
	}
	{
	LINE_NUMBER(343);
	popStackFrame(ctx, self);
	return (frame[4].i);
	}
label_16:;
	LINE_NUMBER(344);
	goto label_6;

	popStackFrame(ctx);
}

jlong M_java_io_BufferedInputStream_skip_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedInputStream:skip", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(357);
	sp[0].o = (jobject)M_java_io_BufferedInputStream_getBufIfOpen_R_Array1_byte(ctx, (frame[0].o));
	LINE_NUMBER(358);
	if ((longCompare((frame[1].l), (jlong(0)))) > 0) goto label_2;
	}
	{
	LINE_NUMBER(359);
	popStackFrame(ctx, self);
	return (jlong(0));
	}
label_2:;
	{
	LINE_NUMBER(361);
	frame[3].l = (jlong((((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_count) - ((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_pos))));
	LINE_NUMBER(363);
	if ((longCompare((frame[3].l), (jlong(0)))) > 0) goto label_5;
	}
	{
	LINE_NUMBER(365);
	if (((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_markpos) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject)M_java_io_BufferedInputStream_getInIfOpen_R_java_io_InputStream(ctx, (frame[0].o));
	jlong temp0 = (jlong)((func_java_io_InputStream_skip_long_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_skip_long_R_long])(ctx, sp[0].o, (frame[1].l));
	popStackFrame(ctx, self);
	return temp0;
	}
label_7:;
	{
	LINE_NUMBER(369);
	M_java_io_BufferedInputStream_fill(ctx, (frame[0].o));
	LINE_NUMBER(370);
	frame[3].l = (jlong((((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_count) - ((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_pos))));
	LINE_NUMBER(371);
	if ((longCompare((frame[3].l), (jlong(0)))) > 0) goto label_5;
	}
	{
	LINE_NUMBER(372);
	popStackFrame(ctx, self);
	return (jlong(0));
	}
label_5:;
	{
	LINE_NUMBER(375);
	if ((longCompare((frame[3].l), (frame[1].l))) >= 0) goto label_12;
	}
	INST_LLOAD(3);
	goto label_13;
label_12:;
	INST_LLOAD(1);
label_13:;
	{
	sp -= 1;
	frame[5].l = sp[0].l;
	LINE_NUMBER(376);
	sp[0].o = frame[0].o;
	((java_io_BufferedInputStream *) NULL_CHECK(sp[0].o))->F_pos = (jint(((jlong(((jint)((java_io_BufferedInputStream *) NULL_CHECK(sp[0].o))->F_pos))) + (frame[5].l))));
	LINE_NUMBER(377);
	popStackFrame(ctx, self);
	return (frame[5].l);
	}

	popStackFrame(ctx);
}

jint M_java_io_BufferedInputStream_available_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedInputStream:available", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(398);
	frame[1].i = (((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_count) - ((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_pos));
	LINE_NUMBER(399);
	sp[0].o = (jobject)M_java_io_BufferedInputStream_getInIfOpen_R_java_io_InputStream(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_InputStream_available_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_available_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(400);
	if ((frame[1].i) <= ((jint(2147483647)) - (frame[2].i))) goto label_3;
	}
	{
	LINE_NUMBER(401);
	jint temp0 = jint(2147483647);
	sp[0].i = temp0;
	sp += 1;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(402);
	jint temp0 = (frame[1].i) + (frame[2].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_5:;
	LINE_NUMBER(400);
	popStackFrame(ctx, self);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_java_io_BufferedInputStream_mark_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedInputStream:mark", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(414);
	((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_marklimit = (frame[1].i);
	LINE_NUMBER(415);
	((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_markpos = ((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_pos);
	LINE_NUMBER(416);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_BufferedInputStream_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedInputStream:reset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(435);
	sp[0].o = (jobject)M_java_io_BufferedInputStream_getBufIfOpen_R_Array1_byte(ctx, (frame[0].o));
	LINE_NUMBER(436);
	if (((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_markpos) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(437);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Resetting to invalid mark"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(438);
	((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_pos = ((jint)((java_io_BufferedInputStream *) NULL_CHECK((frame[0].o)))->F_markpos);
	LINE_NUMBER(439);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_io_BufferedInputStream_markSupported_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedInputStream:markSupported", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(453);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_java_io_BufferedInputStream_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedInputStream:close", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(466);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(467);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_close])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(468);
	((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in = (jref) (jobject(nullptr));
	LINE_NUMBER(469);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_java_io_BufferedInputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_FilterInputStream(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedInputStream:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_BufferedInputStream(ctx);
	{
	LINE_NUMBER(52);
	clinit_java_io_BufferedInputStream(ctx);
	SF_java_io_BufferedInputStream_DEFAULT_BUFFER_SIZE = (8192);
	LINE_NUMBER(60);
	clinit_java_io_BufferedInputStream(ctx);
	SF_java_io_BufferedInputStream_MAX_BUFFER_SIZE = (jint(2147483639));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_io_BufferedInputStream[] {
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
	(void *) M_java_io_BufferedInputStream_close,
	(void *) M_java_io_BufferedInputStream_available_R_int,
	(void *) M_java_io_BufferedInputStream_mark_int,
	(void *) M_java_io_BufferedInputStream_markSupported_R_boolean,
	(void *) M_java_io_BufferedInputStream_read_R_int,
	(void *) M_java_io_InputStream_read_Array1_byte_R_int,
	(void *) M_java_io_BufferedInputStream_read_Array1_byte_int_int_R_int,
	(void *) M_java_io_BufferedInputStream_reset,
	(void *) M_java_io_BufferedInputStream_skip_long_R_long,
	(void *) M_java_io_BufferedInputStream_getInIfOpen_R_java_io_InputStream,
	(void *) M_java_io_BufferedInputStream_getBufIfOpen_R_Array1_byte,
	(void *) M_java_io_BufferedInputStream_fill,
	(void *) M_java_io_BufferedInputStream_read1_Array1_byte_int_int_R_int,
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
	{ "getInIfOpen", "()Ljava/io/InputStream;" },
	{ "getBufIfOpen", "()[B" },
	{ "fill", "()V" },
	{ "read1", "([BII)I" },
};

static FieldMetadata fields[] {
	{ "DEFAULT_BUFFER_SIZE", &class_int, (intptr_t) &SF_java_io_BufferedInputStream_DEFAULT_BUFFER_SIZE, "I", 10 },
	{ "MAX_BUFFER_SIZE", &class_int, (intptr_t) &SF_java_io_BufferedInputStream_MAX_BUFFER_SIZE, "I", 10 },
	{ "buf", getArrayClass(&class_byte, 1), offsetof(java_io_BufferedInputStream, F_buf), "[B", 68 },
	{ "count", &class_int, offsetof(java_io_BufferedInputStream, F_count), "I", 4 },
	{ "pos", &class_int, offsetof(java_io_BufferedInputStream, F_pos), "I", 4 },
	{ "markpos", &class_int, offsetof(java_io_BufferedInputStream, F_markpos), "I", 4 },
	{ "marklimit", &class_int, offsetof(java_io_BufferedInputStream, F_marklimit), "I", 4 },
};

static MethodMetadata methods[] {
	{ "getInIfOpen", (intptr_t) M_java_io_BufferedInputStream_getInIfOpen_R_java_io_InputStream, VTABLE_java_io_BufferedInputStream_getInIfOpen_R_java_io_InputStream, "()Ljava/io/InputStream;", 2 },
	{ "getBufIfOpen", (intptr_t) M_java_io_BufferedInputStream_getBufIfOpen_R_Array1_byte, VTABLE_java_io_BufferedInputStream_getBufIfOpen_R_Array1_byte, "()[B", 2 },
	{ "<init>", (intptr_t) init_java_io_BufferedInputStream_java_io_InputStream, 0, "(Ljava/io/InputStream;)V", 1 },
	{ "<init>", (intptr_t) init_java_io_BufferedInputStream_java_io_InputStream_int, 0, "(Ljava/io/InputStream;I)V", 1 },
	{ "fill", (intptr_t) M_java_io_BufferedInputStream_fill, VTABLE_java_io_BufferedInputStream_fill, "()V", 2 },
	{ "read", (intptr_t) M_java_io_BufferedInputStream_read_R_int, VTABLE_java_io_BufferedInputStream_read_R_int, "()I", 33 },
	{ "read1", (intptr_t) M_java_io_BufferedInputStream_read1_Array1_byte_int_int_R_int, VTABLE_java_io_BufferedInputStream_read1_Array1_byte_int_int_R_int, "([BII)I", 2 },
	{ "read", (intptr_t) M_java_io_BufferedInputStream_read_Array1_byte_int_int_R_int, VTABLE_java_io_BufferedInputStream_read_Array1_byte_int_int_R_int, "([BII)I", 33 },
	{ "skip", (intptr_t) M_java_io_BufferedInputStream_skip_long_R_long, VTABLE_java_io_BufferedInputStream_skip_long_R_long, "(J)J", 33 },
	{ "available", (intptr_t) M_java_io_BufferedInputStream_available_R_int, VTABLE_java_io_BufferedInputStream_available_R_int, "()I", 33 },
	{ "mark", (intptr_t) M_java_io_BufferedInputStream_mark_int, VTABLE_java_io_BufferedInputStream_mark_int, "(I)V", 33 },
	{ "reset", (intptr_t) M_java_io_BufferedInputStream_reset, VTABLE_java_io_BufferedInputStream_reset, "()V", 33 },
	{ "markSupported", (intptr_t) M_java_io_BufferedInputStream_markSupported_R_boolean, VTABLE_java_io_BufferedInputStream_markSupported_R_boolean, "()Z", 1 },
	{ "close", (intptr_t) M_java_io_BufferedInputStream_close, VTABLE_java_io_BufferedInputStream_close, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_java_io_BufferedInputStream, 0, "()V", 8 },
};

Class class_java_io_BufferedInputStream{
		.nativeName = (intptr_t) "java/io/BufferedInputStream",
		.parentClass = (intptr_t) &class_java_io_FilterInputStream,
		.size = sizeof(java_io_BufferedInputStream),
		.classVtable = (intptr_t) vtable_java_io_BufferedInputStream,
		.staticInitializer = (intptr_t) clinit_java_io_BufferedInputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_BufferedInputStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_BufferedInputStream = registerClass(&class_java_io_BufferedInputStream);

}
