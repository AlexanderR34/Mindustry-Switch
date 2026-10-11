#include "java/util/zip/InflaterInputStream.h"
#include "java/lang/Math.h"
#include "java/lang/Byte.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/zip/DataFormatException.h"
#include "java/util/zip/ZipException.h"
#include "java/util/zip/Inflater.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/zip/InflaterInputStream.h"
#include "java/lang/NullPointerException.h"
#include "java/io/EOFException.h"
#include "java/io/FilterInputStream.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_java_util_zip_InflaterInputStream(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_zip_InflaterInputStream *) object;
	if (self->F_inf)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_inf)->clazz)->markFunction)((jobject) self->F_inf, mark, depth + 1);
	if (self->F_buf)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buf)->clazz)->markFunction)((jobject) self->F_buf, mark, depth + 1);
	if (self->F_singleByteBuf)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_singleByteBuf)->clazz)->markFunction)((jobject) self->F_singleByteBuf, mark, depth + 1);
	if (self->F_b)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_b)->clazz)->markFunction)((jobject) self->F_b, mark, depth + 1);
}

void clinit_java_util_zip_InflaterInputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_FilterInputStream(ctx);
}

void M_java_util_zip_InflaterInputStream_ensureOpen(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/InflaterInputStream:ensureOpen", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	if (((jint)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_closed) == 0) goto label_1;
	}
	{
	LINE_NUMBER(67);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stream closed"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(69);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_util_zip_InflaterInputStream_java_io_InputStream_java_util_zip_Inflater_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/InflaterInputStream:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_InflaterInputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(81);
	init_java_io_FilterInputStream_java_io_InputStream(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(58);
	((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_closed = (jint(0));
	LINE_NUMBER(60);
	((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_reachEOF = (jint(0));
	LINE_NUMBER(101);
	((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_usesDefaultInflater = (jint(0));
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	((java_util_zip_InflaterInputStream *) NULL_CHECK(sp[0].o))->F_singleByteBuf = (jref) sp[1].o;
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (512));
	((java_util_zip_InflaterInputStream *) NULL_CHECK(sp[0].o))->F_b = (jref) sp[1].o;
	LINE_NUMBER(82);
	if ((frame[1].o) == nullptr) goto label_7;
	}
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_8;
label_7:;
	{
	LINE_NUMBER(83);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(84);
	if ((frame[3].i) > 0) goto label_9;
	}
	{
	LINE_NUMBER(85);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buffer size <= 0"_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(87);
	((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_inf = (jref) (frame[2].o);
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (frame[3].i));
	((java_util_zip_InflaterInputStream *) NULL_CHECK(sp[0].o))->F_buf = (jref) sp[1].o;
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_zip_InflaterInputStream_java_io_InputStream_java_util_zip_Inflater(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/InflaterInputStream:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_InflaterInputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(98);
	init_java_util_zip_InflaterInputStream_java_io_InputStream_java_util_zip_Inflater_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (512));
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_zip_InflaterInputStream_java_io_InputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/InflaterInputStream:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_InflaterInputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_java_util_zip_Inflater(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_zip_Inflater);
	init_java_util_zip_Inflater(ctx, sp[2].o);
	init_java_util_zip_InflaterInputStream_java_io_InputStream_java_util_zip_Inflater(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(109);
	((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_usesDefaultInflater = (jint(1));
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_zip_InflaterInputStream_read_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/InflaterInputStream:read", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(121);
	M_java_util_zip_InflaterInputStream_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_singleByteBuf;
	jint temp0 = (jint)((func_java_util_zip_InflaterInputStream_read_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_InflaterInputStream_read_Array1_byte_int_int_R_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(1)));
	if (temp0 != (jint(-1))) goto label_2;
	}
	INST_ICONST(-1);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_singleByteBuf;
	jint temp0 = (jint)SM_java_lang_Byte_toUnsignedInt_byte_R_int(ctx, ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0)))));
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_util_zip_InflaterInputStream_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/InflaterInputStream:read", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(142);
	M_java_util_zip_InflaterInputStream_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(143);
	if ((frame[1].o) != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(144);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(145);
	if ((frame[2].i) < 0) goto label_11;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_11;
	{
	if ((frame[3].i) <= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[2].i))) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(146);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(147);
	if ((frame[3].i) != 0) goto label_0;
	}
	{
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return (jint(0));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_util_zip_DataFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_inf;
	jint temp0 = (jint)((func_java_util_zip_Inflater_inflate_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Inflater_inflate_Array1_byte_int_int_R_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	frame[4].i = temp0;
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_15
	}
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_inf;
	jint temp0 = (jint)((func_java_util_zip_Inflater_finished_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Inflater_finished_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_inf;
	jint temp0 = (jint)((func_java_util_zip_Inflater_needsDictionary_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Inflater_needsDictionary_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
label_17:;
	{
	LINE_NUMBER(154);
	((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_reachEOF = (jint(1));
	LINE_NUMBER(155);
	jint temp0 = jint(-1);
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_util_zip_DataFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_15; }
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_inf;
	jint temp0 = (jint)((func_java_util_zip_Inflater_needsInput_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Inflater_needsInput_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_0; }
	}
	{
	LINE_NUMBER(158);
	((func_java_util_zip_InflaterInputStream_fill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_InflaterInputStream_fill])(ctx, (frame[0].o));
	{ popExceptionFrames(frameRef, 1); goto label_0; }
	}
label_15:;
	LINE_NUMBER(161);
	INST_ILOAD(4);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(162);
	frame[4].o = sp[0].o;
	LINE_NUMBER(163);
	sp[0].o = (jobject)((func_java_util_zip_DataFormatException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_zip_DataFormatException_getMessage_R_java_lang_String])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(164);
	clinit_java_util_zip_ZipException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipException);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((frame[5].o) == nullptr) goto label_22;
	}
	INST_ALOAD(5);
	goto label_23;
label_22:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Invalid ZLIB data format"_j));
label_23:;
	POP_N(2); // Pop method args
	init_java_util_zip_ZipException_java_lang_String(ctx, sp[0].o, sp[1].o);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jint M_java_util_zip_InflaterInputStream_available_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/InflaterInputStream:available", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(179);
	M_java_util_zip_InflaterInputStream_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(180);
	if (((jint)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_reachEOF) == 0) goto label_2;
	}
	{
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jlong M_java_util_zip_InflaterInputStream_skip_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/InflaterInputStream:skip", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(197);
	if ((longCompare((frame[1].l), (jlong(0)))) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(198);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"negative skip length"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(200);
	M_java_util_zip_InflaterInputStream_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(201);
	jlong temp0 = (jlong)SM_java_lang_Math_min_long_long_R_long(ctx, (frame[1].l), (jlong(2147483647ll)));
	frame[3].i = (jint(temp0));
	LINE_NUMBER(202);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(203);
	if ((frame[4].i) >= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(204);
	frame[5].i = ((frame[3].i) - (frame[4].i));
	LINE_NUMBER(205);
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_b;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_9;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_b;
	frame[5].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_9:;
	{
	LINE_NUMBER(208);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_b;
	jint temp0 = (jint)((func_java_util_zip_InflaterInputStream_read_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_InflaterInputStream_read_Array1_byte_int_int_R_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[5].i));
	frame[5].i = temp0;
	LINE_NUMBER(209);
	if ((frame[5].i) != (jint(-1))) goto label_12;
	}
	{
	LINE_NUMBER(210);
	((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_reachEOF = (jint(1));
	LINE_NUMBER(211);
	goto label_6;
	}
label_12:;
	{
	LINE_NUMBER(213);
	frame[4].i = ((frame[4].i) + (frame[5].i));
	LINE_NUMBER(214);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return (jlong((frame[4].i)));
	}

	popStackFrame(ctx);
}

void M_java_util_zip_InflaterInputStream_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/InflaterInputStream:close", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(224);
	if (((jint)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_closed) != 0) goto label_1;
	}
	{
	LINE_NUMBER(225);
	if (((jint)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_usesDefaultInflater) == 0) goto label_3;
	}
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_inf;
	((func_java_util_zip_Inflater_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Inflater_end])(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_close])(ctx, sp[0].o);
	LINE_NUMBER(228);
	((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_closed = (jint(1));
	}
label_1:;
	LINE_NUMBER(230);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_zip_InflaterInputStream_fill(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/InflaterInputStream:fill", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(237);
	M_java_util_zip_InflaterInputStream_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(238);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	sp[2].o = (jobject)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp0 = jint(0);
	sp[3].o = (jobject)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp1 = (jint)((func_java_io_InputStream_read_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_int_int_R_int])(ctx, sp[1].o, sp[2].o, temp0, (((jarray) nullCheck(ctx, sp[3].o))->length));
	((java_util_zip_InflaterInputStream *) NULL_CHECK(sp[0].o))->F_len = temp1;
	LINE_NUMBER(239);
	if (((jint)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_len) != (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(240);
	clinit_java_io_EOFException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_EOFException);
	init_java_io_EOFException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unexpected end of ZLIB input stream"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_inf;
	sp[1].o = (jobject)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	((func_java_util_zip_Inflater_setInput_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Inflater_setInput_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_len));
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_zip_InflaterInputStream_markSupported_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/InflaterInputStream:markSupported", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_util_zip_InflaterInputStream_mark_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/InflaterInputStream:mark", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(271);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_zip_InflaterInputStream_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/InflaterInputStream:reset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(286);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mark/reset not supported"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_java_util_zip_InflaterInputStream[] {
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
	(void *) M_java_util_zip_InflaterInputStream_close,
	(void *) M_java_util_zip_InflaterInputStream_available_R_int,
	(void *) M_java_util_zip_InflaterInputStream_mark_int,
	(void *) M_java_util_zip_InflaterInputStream_markSupported_R_boolean,
	(void *) M_java_util_zip_InflaterInputStream_read_R_int,
	(void *) M_java_io_InputStream_read_Array1_byte_R_int,
	(void *) M_java_util_zip_InflaterInputStream_read_Array1_byte_int_int_R_int,
	(void *) M_java_util_zip_InflaterInputStream_reset,
	(void *) M_java_util_zip_InflaterInputStream_skip_long_R_long,
	(void *) M_java_util_zip_InflaterInputStream_ensureOpen,
	(void *) M_java_util_zip_InflaterInputStream_fill,
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
	{ "ensureOpen", "()V" },
	{ "fill", "()V" },
};

static FieldMetadata fields[] {
	{ "inf", &class_java_util_zip_Inflater, offsetof(java_util_zip_InflaterInputStream, F_inf), "Ljava/util/zip/Inflater;", 4 },
	{ "buf", getArrayClass(&class_byte, 1), offsetof(java_util_zip_InflaterInputStream, F_buf), "[B", 4 },
	{ "len", &class_int, offsetof(java_util_zip_InflaterInputStream, F_len), "I", 4 },
	{ "closed", &class_boolean, offsetof(java_util_zip_InflaterInputStream, F_closed), "Z", 2 },
	{ "reachEOF", &class_boolean, offsetof(java_util_zip_InflaterInputStream, F_reachEOF), "Z", 2 },
	{ "usesDefaultInflater", &class_boolean, offsetof(java_util_zip_InflaterInputStream, F_usesDefaultInflater), "Z", 0 },
	{ "singleByteBuf", getArrayClass(&class_byte, 1), offsetof(java_util_zip_InflaterInputStream, F_singleByteBuf), "[B", 2 },
	{ "b", getArrayClass(&class_byte, 1), offsetof(java_util_zip_InflaterInputStream, F_b), "[B", 2 },
};

static MethodMetadata methods[] {
	{ "ensureOpen", (intptr_t) M_java_util_zip_InflaterInputStream_ensureOpen, VTABLE_java_util_zip_InflaterInputStream_ensureOpen, "()V", 2 },
	{ "<init>", (intptr_t) init_java_util_zip_InflaterInputStream_java_io_InputStream_java_util_zip_Inflater_int, 0, "(Ljava/io/InputStream;Ljava/util/zip/Inflater;I)V", 1 },
	{ "<init>", (intptr_t) init_java_util_zip_InflaterInputStream_java_io_InputStream_java_util_zip_Inflater, 0, "(Ljava/io/InputStream;Ljava/util/zip/Inflater;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_zip_InflaterInputStream_java_io_InputStream, 0, "(Ljava/io/InputStream;)V", 1 },
	{ "read", (intptr_t) M_java_util_zip_InflaterInputStream_read_R_int, VTABLE_java_util_zip_InflaterInputStream_read_R_int, "()I", 1 },
	{ "read", (intptr_t) M_java_util_zip_InflaterInputStream_read_Array1_byte_int_int_R_int, VTABLE_java_util_zip_InflaterInputStream_read_Array1_byte_int_int_R_int, "([BII)I", 1 },
	{ "available", (intptr_t) M_java_util_zip_InflaterInputStream_available_R_int, VTABLE_java_util_zip_InflaterInputStream_available_R_int, "()I", 1 },
	{ "skip", (intptr_t) M_java_util_zip_InflaterInputStream_skip_long_R_long, VTABLE_java_util_zip_InflaterInputStream_skip_long_R_long, "(J)J", 1 },
	{ "close", (intptr_t) M_java_util_zip_InflaterInputStream_close, VTABLE_java_util_zip_InflaterInputStream_close, "()V", 1 },
	{ "fill", (intptr_t) M_java_util_zip_InflaterInputStream_fill, VTABLE_java_util_zip_InflaterInputStream_fill, "()V", 4 },
	{ "markSupported", (intptr_t) M_java_util_zip_InflaterInputStream_markSupported_R_boolean, VTABLE_java_util_zip_InflaterInputStream_markSupported_R_boolean, "()Z", 1 },
	{ "mark", (intptr_t) M_java_util_zip_InflaterInputStream_mark_int, VTABLE_java_util_zip_InflaterInputStream_mark_int, "(I)V", 33 },
	{ "reset", (intptr_t) M_java_util_zip_InflaterInputStream_reset, VTABLE_java_util_zip_InflaterInputStream_reset, "()V", 33 },
};

Class class_java_util_zip_InflaterInputStream{
		.nativeName = (intptr_t) "java/util/zip/InflaterInputStream",
		.parentClass = (intptr_t) &class_java_io_FilterInputStream,
		.size = sizeof(java_util_zip_InflaterInputStream),
		.classVtable = (intptr_t) vtable_java_util_zip_InflaterInputStream,
		.staticInitializer = (intptr_t) clinit_java_util_zip_InflaterInputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_zip_InflaterInputStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_zip_InflaterInputStream = registerClass(&class_java_util_zip_InflaterInputStream);

}
