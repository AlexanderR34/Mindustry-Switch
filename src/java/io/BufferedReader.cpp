#include "java/io/BufferedReader.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/io/IOException.h"
#include "java/io/Reader.h"
#include "java/io/BufferedReader.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"

extern "C" {

jint SF_java_io_BufferedReader_INVALIDATED;
jint SF_java_io_BufferedReader_UNMARKED;
jint SF_java_io_BufferedReader_defaultCharBufferSize;
jint SF_java_io_BufferedReader_defaultExpectedLineLength;

void mark_java_io_BufferedReader(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_Reader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_io_BufferedReader *) object;
	if (self->F_in)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_in)->clazz)->markFunction)((jobject) self->F_in, mark, depth + 1);
	if (self->F_cb)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cb)->clazz)->markFunction)((jobject) self->F_cb, mark, depth + 1);
}

void init_java_io_BufferedReader_java_io_Reader_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedReader:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_BufferedReader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(94);
	init_java_io_Reader_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(72);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_markedChar = (jint(-1));
	LINE_NUMBER(73);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_readAheadLimit = (jint(0));
	LINE_NUMBER(76);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_skipLF = (jint(0));
	LINE_NUMBER(79);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_markedSkipLF = (jint(0));
	LINE_NUMBER(95);
	if ((frame[2].i) > 0) goto label_6;
	}
	{
	LINE_NUMBER(96);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Buffer size <= 0"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(97);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_in = (jref) (frame[1].o);
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (frame[2].i));
	((java_io_BufferedReader *) NULL_CHECK(sp[0].o))->F_cb = (jref) sp[1].o;
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((java_io_BufferedReader *) NULL_CHECK(sp[1].o))->F_nChars = temp0;
	((java_io_BufferedReader *) NULL_CHECK(sp[0].o))->F_nextChar = temp0;
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_BufferedReader_java_io_Reader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedReader:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_BufferedReader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(109);
	init_java_io_BufferedReader_java_io_Reader_int(ctx, (frame[0].o), (frame[1].o), (clinit_java_io_BufferedReader(ctx), (jint)SF_java_io_BufferedReader_defaultCharBufferSize));
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_BufferedReader_ensureOpen(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedReader:ensureOpen", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_in;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(115);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stream closed"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(116);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_BufferedReader_fill(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedReader:fill", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(123);
	if (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_markedChar) > (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(125);
	frame[1].i = (jint(0));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(128);
	frame[2].i = (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar) - ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_markedChar));
	LINE_NUMBER(129);
	if ((frame[2].i) < ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_readAheadLimit)) goto label_6;
	}
	{
	LINE_NUMBER(131);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_markedChar = (-2);
	LINE_NUMBER(132);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_readAheadLimit = (jint(0));
	LINE_NUMBER(133);
	frame[1].i = (jint(0));
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(135);
	jint temp0 = (jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_readAheadLimit;
	sp[0].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_cb;
	if (temp0 > (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_11;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_cb;
	jint temp0 = (jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_markedChar;
	sp[1].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_cb;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (frame[2].i));
	LINE_NUMBER(138);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_markedChar = (jint(0));
	LINE_NUMBER(139);
	frame[1].i = (frame[2].i);
	goto label_16;
	}
label_11:;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject) createArray(ctx, &class_char, ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_readAheadLimit));
	frame[3].o = sp[0].o;
	LINE_NUMBER(143);
	sp[0].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_cb;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_markedChar), (frame[3].o), (jint(0)), (frame[2].i));
	LINE_NUMBER(144);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_cb = (jref) (frame[3].o);
	LINE_NUMBER(145);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_markedChar = (jint(0));
	LINE_NUMBER(146);
	frame[1].i = (frame[2].i);
	}
label_16:;
	{
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = frame[2].i;
	((java_io_BufferedReader *) NULL_CHECK(sp[1].o))->F_nChars = temp0;
	((java_io_BufferedReader *) NULL_CHECK(sp[0].o))->F_nextChar = temp0;
	}
label_4:;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_in;
	sp[1].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_cb;
	jint temp0 = frame[1].i;
	sp[2].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_cb;
	jint temp1 = (jint)((func_java_io_Reader_read_Array1_char_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Reader_read_Array1_char_int_int_R_int])(ctx, sp[0].o, sp[1].o, temp0, ((((jarray) nullCheck(ctx, sp[2].o))->length) - (frame[1].i)));
	frame[2].i = temp1;
	LINE_NUMBER(155);
	if ((frame[2].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(156);
	if ((frame[2].i) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(157);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nChars = ((frame[1].i) + (frame[2].i));
	LINE_NUMBER(158);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar = (frame[1].i);
	}
label_23:;
	LINE_NUMBER(160);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_io_BufferedReader_read_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedReader:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((java_io_Reader *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_10; }
	{
	LINE_NUMBER(172);
	M_java_io_BufferedReader_ensureOpen(ctx, (frame[0].o));
	}
label_10:;
	{
	LINE_NUMBER(174);
	if (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar) < ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nChars)) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(175);
	M_java_io_BufferedReader_fill(ctx, (frame[0].o));
	LINE_NUMBER(176);
	if (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar) < ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nChars)) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(177);
	jint temp0 = jint(-1);
	monitorExit(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(179);
	if (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_skipLF) == 0) goto label_14;
	}
	{
	LINE_NUMBER(180);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_skipLF = (jint(0));
	LINE_NUMBER(181);
	sp[0].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_cb;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar))) != (10)) goto label_14;
	}
	{
	LINE_NUMBER(182);
	sp[0].o = frame[0].o;
	((java_io_BufferedReader *) NULL_CHECK(sp[0].o))->F_nextChar = (((jint)((java_io_BufferedReader *) NULL_CHECK(sp[0].o))->F_nextChar) + (jint(1)));
	LINE_NUMBER(183);
	{ popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_3; } // goto label_10
	}
label_14:;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_cb;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((java_io_BufferedReader *) NULL_CHECK(sp[1].o))->F_nextChar;
	((java_io_BufferedReader *) NULL_CHECK(sp[1].o))->F_nextChar = (temp0 + (jint(1)));
	jint temp3 = (jint)ARRAY_ACCESS(jchar, sp[0].o, temp0);
	monitorExit(ctx, (frame[1].o));
	sp[0].i = temp3;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(188);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jint M_java_io_BufferedReader_read1_Array1_char_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedReader:read1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(196);
	if (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar) < ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nChars)) goto label_1;
	}
	{
	LINE_NUMBER(202);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_cb;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	if (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_markedChar) > (jint(-1))) goto label_3;
	}
	{
	if (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_skipLF) != 0) goto label_3;
	}
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp0 = (jint)((func_java_io_Reader_read_Array1_char_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Reader_read_Array1_char_int_int_R_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(205);
	M_java_io_BufferedReader_fill(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(207);
	if (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar) < ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nChars)) goto label_5;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(208);
	if (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_skipLF) == 0) goto label_6;
	}
	{
	LINE_NUMBER(209);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_skipLF = (jint(0));
	LINE_NUMBER(210);
	sp[0].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_cb;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar))) != (10)) goto label_6;
	}
	{
	LINE_NUMBER(211);
	sp[0].o = frame[0].o;
	((java_io_BufferedReader *) NULL_CHECK(sp[0].o))->F_nextChar = (((jint)((java_io_BufferedReader *) NULL_CHECK(sp[0].o))->F_nextChar) + (jint(1)));
	LINE_NUMBER(212);
	if (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar) < ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nChars)) goto label_11;
	}
	{
	LINE_NUMBER(213);
	M_java_io_BufferedReader_fill(ctx, (frame[0].o));
	}
label_11:;
	{
	LINE_NUMBER(214);
	if (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar) < ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nChars)) goto label_6;
	}
	{
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_6:;
	{
	LINE_NUMBER(218);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[3].i), (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nChars) - ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar)));
	frame[4].i = temp0;
	LINE_NUMBER(219);
	sp[0].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_cb;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar), (frame[1].o), (frame[2].i), (frame[4].i));
	LINE_NUMBER(220);
	sp[0].o = frame[0].o;
	((java_io_BufferedReader *) NULL_CHECK(sp[0].o))->F_nextChar = (((jint)((java_io_BufferedReader *) NULL_CHECK(sp[0].o))->F_nextChar) + (frame[4].i));
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jint M_java_io_BufferedReader_read_Array1_char_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedReader:read", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((java_io_Reader *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(271);
	M_java_io_BufferedReader_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(272);
	if ((frame[2].i) < 0) goto label_14;
	}
	{
	if ((frame[2].i) > (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_14;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_14;
	{
	if (((frame[2].i) + (frame[3].i)) > (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_14;
	}
	{
	if (((frame[2].i) + (frame[3].i)) >= 0) goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(274);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(275);
	if ((frame[3].i) != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(276);
	jint temp0 = jint(0);
	monitorExit(ctx, (frame[4].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(279);
	jint temp0 = (jint)M_java_io_BufferedReader_read1_Array1_char_int_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	frame[5].i = temp0;
	LINE_NUMBER(280);
	if ((frame[5].i) > 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	jint temp0 = frame[5].i;
	monitorExit(ctx, (frame[4].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(281);
	if ((frame[5].i) >= (frame[3].i)) goto label_18;
	}
	{
	sp[0].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp0 = (jint)((func_java_io_Reader_ready_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Reader_ready_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(282);
	jint temp0 = (jint)M_java_io_BufferedReader_read1_Array1_char_int_int_R_int(ctx, (frame[0].o), (frame[1].o), ((frame[2].i) + (frame[5].i)), ((frame[3].i) - (frame[5].i)));
	frame[6].i = temp0;
	LINE_NUMBER(283);
	if ((frame[6].i) > 0) goto label_21;
	}
	goto label_18;
label_21:;
	{
	LINE_NUMBER(284);
	frame[5].i = ((frame[5].i) + (frame[6].i));
	LINE_NUMBER(285);
	{ popExceptionFrames(frameRef, 1); goto label_7; }
	}
label_18:;
	{
	LINE_NUMBER(286);
	jint temp0 = frame[5].i;
	monitorExit(ctx, (frame[4].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(287);
	frame[7].o = sp[0].o;
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(7);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_io_BufferedReader_readLine_boolean_R_java_lang_String(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedReader:readLine", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[4]{};

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(306);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(309);
	sp[0].o = (jobject)((java_io_Reader *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_12; } // goto label_2
	}
	if (bypasses[3]) { bypasses[3] = false; goto label_19; }
	{
	LINE_NUMBER(310);
	M_java_io_BufferedReader_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(311);
	if ((frame[1].i) != 0) goto label_16;
	}
	{
	if (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_skipLF) == 0) goto label_17;
	}
label_16:;
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	INST_ISTORE(5);
label_19:;
	{
	LINE_NUMBER(316);
	if (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar) < ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nChars)) goto label_20;
	}
	{
	LINE_NUMBER(317);
	M_java_io_BufferedReader_fill(ctx, (frame[0].o));
	}
label_20:;
	{
	LINE_NUMBER(318);
	if (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar) < ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nChars)) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(319);
	if ((frame[2].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[2].o));
	if (temp0 <= 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	monitorExit(ctx, (frame[4].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_12; } // goto label_2
	}
	{
	LINE_NUMBER(322);
	sp[0].o = jobject(nullptr);
	monitorExit(ctx, (frame[4].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_12; } // goto label_2
	}
	{
	LINE_NUMBER(324);
	frame[6].i = (jint(0));
	LINE_NUMBER(325);
	frame[7].i = (jint(0));
	LINE_NUMBER(329);
	if ((frame[5].i) == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_cb;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar))) != (10)) goto label_26;
	}
	{
	LINE_NUMBER(330);
	sp[0].o = frame[0].o;
	((java_io_BufferedReader *) NULL_CHECK(sp[0].o))->F_nextChar = (((jint)((java_io_BufferedReader *) NULL_CHECK(sp[0].o))->F_nextChar) + (jint(1)));
	}
label_26:;
	{
	LINE_NUMBER(331);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_skipLF = (jint(0));
	LINE_NUMBER(332);
	frame[5].i = (jint(0));
	LINE_NUMBER(335);
	frame[8].i = ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar);
	}
label_30:;
	{
	if ((frame[8].i) >= ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nChars)) goto label_31;
	}
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_cb;
	frame[7].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[8].i)));
	LINE_NUMBER(337);
	if ((frame[7].i) == (10)) goto label_34;
	}
	{
	if ((frame[7].i) != (13)) goto label_35;
	}
label_34:;
	{
	LINE_NUMBER(338);
	frame[6].i = (jint(1));
	LINE_NUMBER(339);
	goto label_31;
	}
label_35:;
	{
	LINE_NUMBER(335);
	INST_IINC(8, 1);
	goto label_30;
	}
label_31:;
	{
	LINE_NUMBER(343);
	frame[3].i = ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar);
	LINE_NUMBER(344);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar = (frame[8].i);
	LINE_NUMBER(346);
	if ((frame[6].i) == 0) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(348);
	if ((frame[2].o) != nullptr) goto label_40;
	}
	{
	LINE_NUMBER(349);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_cb;
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, sp[1].o, (frame[3].i), ((frame[8].i) - (frame[3].i)));
	frame[9].o = sp[0].o;
	goto label_43;
	}
label_40:;
	{
	LINE_NUMBER(351);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_cb;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o, (frame[3].i), ((frame[8].i) - (frame[3].i)));
	LINE_NUMBER(352);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	frame[9].o = sp[0].o;
	}
label_43:;
	{
	LINE_NUMBER(354);
	sp[0].o = frame[0].o;
	((java_io_BufferedReader *) NULL_CHECK(sp[0].o))->F_nextChar = (((jint)((java_io_BufferedReader *) NULL_CHECK(sp[0].o))->F_nextChar) + (jint(1)));
	LINE_NUMBER(355);
	if ((frame[7].i) != (13)) goto label_46;
	}
	{
	LINE_NUMBER(356);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_skipLF = (jint(1));
	}
label_46:;
	{
	LINE_NUMBER(358);
	sp[0].o = frame[9].o;
	monitorExit(ctx, (frame[4].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_2;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_2; }
	if (bypasses[1]) { bypasses[1] = false; goto label_2; }
	if (bypasses[2]) { bypasses[2] = false; goto label_2; }
	{
	LINE_NUMBER(361);
	if ((frame[2].o) != nullptr) goto label_48;
	}
	{
	LINE_NUMBER(362);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (clinit_java_io_BufferedReader(ctx), (jint)SF_java_io_BufferedReader_defaultExpectedLineLength));
	frame[2].o = sp[0].o;
	}
label_48:;
	{
	LINE_NUMBER(363);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_cb;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o, (frame[3].i), ((frame[8].i) - (frame[3].i)));
	LINE_NUMBER(364);
	{ popExceptionFrames(frameRef, 1); bypasses[3] = true; goto label_3; } // goto label_19
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(365);
	frame[10].o = sp[0].o;
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(10);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_io_BufferedReader_readLine_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedReader:readLine", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(382);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_boolean_R_java_lang_String])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jlong M_java_io_BufferedReader_skip_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedReader:skip", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(396);
	if ((longCompare((frame[1].l), (jlong(0)))) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(397);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"skip value is negative"_j))));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(399);
	sp[0].o = (jobject)((java_io_Reader *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(400);
	M_java_io_BufferedReader_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(401);
	frame[4].l = (frame[1].l);
	}
label_10:;
	{
	LINE_NUMBER(402);
	if ((longCompare((frame[4].l), (jlong(0)))) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(403);
	if (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar) < ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nChars)) goto label_13;
	}
	{
	LINE_NUMBER(404);
	M_java_io_BufferedReader_fill(ctx, (frame[0].o));
	}
label_13:;
	{
	LINE_NUMBER(405);
	if (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar) < ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nChars)) goto label_15;
	}
	LINE_NUMBER(406);
	goto label_11;
label_15:;
	{
	LINE_NUMBER(407);
	if (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_skipLF) == 0) goto label_17;
	}
	{
	LINE_NUMBER(408);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_skipLF = (jint(0));
	LINE_NUMBER(409);
	sp[0].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_cb;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar))) != (10)) goto label_17;
	}
	{
	LINE_NUMBER(410);
	sp[0].o = frame[0].o;
	((java_io_BufferedReader *) NULL_CHECK(sp[0].o))->F_nextChar = (((jint)((java_io_BufferedReader *) NULL_CHECK(sp[0].o))->F_nextChar) + (jint(1)));
	}
label_17:;
	{
	LINE_NUMBER(413);
	frame[6].l = (jlong((((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nChars) - ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar))));
	LINE_NUMBER(414);
	if ((longCompare((frame[4].l), (frame[6].l))) > 0) goto label_22;
	}
	{
	LINE_NUMBER(415);
	sp[0].o = frame[0].o;
	((java_io_BufferedReader *) NULL_CHECK(sp[0].o))->F_nextChar = (jint(((jlong(((jint)((java_io_BufferedReader *) NULL_CHECK(sp[0].o))->F_nextChar))) + (frame[4].l))));
	LINE_NUMBER(416);
	frame[4].l = (jlong(0));
	LINE_NUMBER(417);
	goto label_11;
	}
label_22:;
	{
	LINE_NUMBER(420);
	frame[4].l = ((frame[4].l) - (frame[6].l));
	LINE_NUMBER(421);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar = ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nChars);
	LINE_NUMBER(423);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(424);
	jlong temp0 = (frame[1].l) - (frame[4].l);
	monitorExit(ctx, (frame[3].o));
	sp[0].l = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_LRETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(425);
	frame[8].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(8);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jbool M_java_io_BufferedReader_ready_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedReader:ready", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(436);
	sp[0].o = (jobject)((java_io_Reader *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(437);
	M_java_io_BufferedReader_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(443);
	if (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_skipLF) == 0) goto label_8;
	}
	{
	LINE_NUMBER(447);
	if (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar) < ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nChars)) goto label_10;
	}
	{
	sp[0].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp0 = (jint)((func_java_io_Reader_ready_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Reader_ready_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(448);
	M_java_io_BufferedReader_fill(ctx, (frame[0].o));
	}
label_10:;
	{
	LINE_NUMBER(450);
	if (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar) >= ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nChars)) goto label_8;
	}
	{
	LINE_NUMBER(451);
	sp[0].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_cb;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar))) != (10)) goto label_13;
	}
	{
	LINE_NUMBER(452);
	sp[0].o = frame[0].o;
	((java_io_BufferedReader *) NULL_CHECK(sp[0].o))->F_nextChar = (((jint)((java_io_BufferedReader *) NULL_CHECK(sp[0].o))->F_nextChar) + (jint(1)));
	}
label_13:;
	{
	LINE_NUMBER(453);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_skipLF = (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(456);
	if (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar) < ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nChars)) goto label_15;
	}
	{
	sp[0].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp0 = (jint)((func_java_io_Reader_ready_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Reader_ready_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_16;
	}
label_15:;
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	INST_ALOAD(1);
	INST_MONITOREXIT();
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(457);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jbool M_java_io_BufferedReader_markSupported_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedReader:markSupported", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(464);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_java_io_BufferedReader_mark_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedReader:mark", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(484);
	if ((frame[1].i) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(485);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Read-ahead limit < 0"_j))));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(487);
	sp[0].o = (jobject)((java_io_Reader *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(488);
	M_java_io_BufferedReader_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(489);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_readAheadLimit = (frame[1].i);
	LINE_NUMBER(490);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_markedChar = ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar);
	LINE_NUMBER(491);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_markedSkipLF = ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_skipLF);
	LINE_NUMBER(492);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_13;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	label_13:;
	LINE_NUMBER(493);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_BufferedReader_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedReader:reset", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(502);
	sp[0].o = (jobject)((java_io_Reader *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(503);
	M_java_io_BufferedReader_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(504);
	if (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_markedChar) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(505);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	sp[1].o = sp[0].o;
	sp += 2;
	if (((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_markedChar) != (-2)) goto label_10;
	}
	{
	LINE_NUMBER(506);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Mark invalid"_j));
	sp += 1;
	goto label_12;
	}
label_10:;
	LINE_NUMBER(507);
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Stream not marked"_j));
label_12:;
	POP_N(2); // Pop method args
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	INST_ATHROW();
	label_8:;
	{
	LINE_NUMBER(508);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_nextChar = ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_markedChar);
	LINE_NUMBER(509);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_skipLF = ((jint)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_markedSkipLF);
	LINE_NUMBER(510);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_15;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	label_15:;
	LINE_NUMBER(511);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_BufferedReader_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedReader:close", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(514);
	sp[0].o = (jobject)((java_io_Reader *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(515);
	sp[0].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_in;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_0; }
	}
	{
	LINE_NUMBER(516);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_RETURN();
label_0:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(518);
	sp[0].o = (jobject)((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_in;
	((func_java_io_Reader_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Reader_close])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(520);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_in = (jref) (jobject(nullptr));
	LINE_NUMBER(521);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_cb = (jref) (jobject(nullptr));
	LINE_NUMBER(522);
	goto label_16;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(520);
	frame[2].o = sp[0].o;
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_in = (jref) (jobject(nullptr));
	LINE_NUMBER(521);
	((java_io_BufferedReader *) NULL_CHECK((frame[0].o)))->F_cb = (jref) (jobject(nullptr));
	LINE_NUMBER(522);
	throwException(ctx, (frame[2].o));	}
label_16:;
	{
	LINE_NUMBER(523);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_19;
label_6:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	label_19:;
	LINE_NUMBER(524);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_java_io_BufferedReader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_Reader(ctx);
	SF_java_io_BufferedReader_INVALIDATED = jint(-2);
	SF_java_io_BufferedReader_UNMARKED = jint(-1);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedReader:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_BufferedReader(ctx);
	{
	LINE_NUMBER(81);
	clinit_java_io_BufferedReader(ctx);
	SF_java_io_BufferedReader_defaultCharBufferSize = (8192);
	LINE_NUMBER(82);
	clinit_java_io_BufferedReader(ctx);
	SF_java_io_BufferedReader_defaultExpectedLineLength = (80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_io_BufferedReader[] {
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
	(void *) M_java_io_Reader_read_java_nio_CharBuffer_R_int,
	(void *) M_java_io_BufferedReader_close,
	(void *) M_java_io_BufferedReader_mark_int,
	(void *) M_java_io_BufferedReader_markSupported_R_boolean,
	(void *) M_java_io_BufferedReader_read_R_int,
	(void *) M_java_io_Reader_read_Array1_char_R_int,
	(void *) M_java_io_BufferedReader_read_Array1_char_int_int_R_int,
	(void *) M_java_io_BufferedReader_ready_R_boolean,
	(void *) M_java_io_BufferedReader_reset,
	(void *) M_java_io_BufferedReader_skip_long_R_long,
	(void *) M_java_io_BufferedReader_ensureOpen,
	(void *) M_java_io_BufferedReader_fill,
	(void *) M_java_io_BufferedReader_read1_Array1_char_int_int_R_int,
	(void *) M_java_io_BufferedReader_readLine_boolean_R_java_lang_String,
	(void *) M_java_io_BufferedReader_readLine_R_java_lang_String,
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
	{ "read", "(Ljava/nio/CharBuffer;)I" },
	{ "close", "()V" },
	{ "mark", "(I)V" },
	{ "markSupported", "()Z" },
	{ "read", "()I" },
	{ "read", "([C)I" },
	{ "read", "([CII)I" },
	{ "ready", "()Z" },
	{ "reset", "()V" },
	{ "skip", "(J)J" },
	{ "ensureOpen", "()V" },
	{ "fill", "()V" },
	{ "read1", "([CII)I" },
	{ "readLine", "(Z)Ljava/lang/String;" },
	{ "readLine", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "in", &class_java_io_Reader, offsetof(java_io_BufferedReader, F_in), "Ljava/io/Reader;", 2 },
	{ "cb", getArrayClass(&class_char, 1), offsetof(java_io_BufferedReader, F_cb), "[C", 2 },
	{ "nChars", &class_int, offsetof(java_io_BufferedReader, F_nChars), "I", 2 },
	{ "nextChar", &class_int, offsetof(java_io_BufferedReader, F_nextChar), "I", 2 },
	{ "INVALIDATED", &class_int, (intptr_t) &SF_java_io_BufferedReader_INVALIDATED, "I", 26 },
	{ "UNMARKED", &class_int, (intptr_t) &SF_java_io_BufferedReader_UNMARKED, "I", 26 },
	{ "markedChar", &class_int, offsetof(java_io_BufferedReader, F_markedChar), "I", 2 },
	{ "readAheadLimit", &class_int, offsetof(java_io_BufferedReader, F_readAheadLimit), "I", 2 },
	{ "skipLF", &class_boolean, offsetof(java_io_BufferedReader, F_skipLF), "Z", 2 },
	{ "markedSkipLF", &class_boolean, offsetof(java_io_BufferedReader, F_markedSkipLF), "Z", 2 },
	{ "defaultCharBufferSize", &class_int, (intptr_t) &SF_java_io_BufferedReader_defaultCharBufferSize, "I", 10 },
	{ "defaultExpectedLineLength", &class_int, (intptr_t) &SF_java_io_BufferedReader_defaultExpectedLineLength, "I", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_BufferedReader_java_io_Reader_int, 0, "(Ljava/io/Reader;I)V", 1 },
	{ "<init>", (intptr_t) init_java_io_BufferedReader_java_io_Reader, 0, "(Ljava/io/Reader;)V", 1 },
	{ "ensureOpen", (intptr_t) M_java_io_BufferedReader_ensureOpen, VTABLE_java_io_BufferedReader_ensureOpen, "()V", 2 },
	{ "fill", (intptr_t) M_java_io_BufferedReader_fill, VTABLE_java_io_BufferedReader_fill, "()V", 2 },
	{ "read", (intptr_t) M_java_io_BufferedReader_read_R_int, VTABLE_java_io_BufferedReader_read_R_int, "()I", 1 },
	{ "read1", (intptr_t) M_java_io_BufferedReader_read1_Array1_char_int_int_R_int, VTABLE_java_io_BufferedReader_read1_Array1_char_int_int_R_int, "([CII)I", 2 },
	{ "read", (intptr_t) M_java_io_BufferedReader_read_Array1_char_int_int_R_int, VTABLE_java_io_BufferedReader_read_Array1_char_int_int_R_int, "([CII)I", 1 },
	{ "readLine", (intptr_t) M_java_io_BufferedReader_readLine_boolean_R_java_lang_String, VTABLE_java_io_BufferedReader_readLine_boolean_R_java_lang_String, "(Z)Ljava/lang/String;", 0 },
	{ "readLine", (intptr_t) M_java_io_BufferedReader_readLine_R_java_lang_String, VTABLE_java_io_BufferedReader_readLine_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "skip", (intptr_t) M_java_io_BufferedReader_skip_long_R_long, VTABLE_java_io_BufferedReader_skip_long_R_long, "(J)J", 1 },
	{ "ready", (intptr_t) M_java_io_BufferedReader_ready_R_boolean, VTABLE_java_io_BufferedReader_ready_R_boolean, "()Z", 1 },
	{ "markSupported", (intptr_t) M_java_io_BufferedReader_markSupported_R_boolean, VTABLE_java_io_BufferedReader_markSupported_R_boolean, "()Z", 1 },
	{ "mark", (intptr_t) M_java_io_BufferedReader_mark_int, VTABLE_java_io_BufferedReader_mark_int, "(I)V", 1 },
	{ "reset", (intptr_t) M_java_io_BufferedReader_reset, VTABLE_java_io_BufferedReader_reset, "()V", 1 },
	{ "close", (intptr_t) M_java_io_BufferedReader_close, VTABLE_java_io_BufferedReader_close, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_java_io_BufferedReader, 0, "()V", 8 },
};

Class class_java_io_BufferedReader{
		.nativeName = (intptr_t) "java/io/BufferedReader",
		.parentClass = (intptr_t) &class_java_io_Reader,
		.size = sizeof(java_io_BufferedReader),
		.classVtable = (intptr_t) vtable_java_io_BufferedReader,
		.staticInitializer = (intptr_t) clinit_java_io_BufferedReader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_BufferedReader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_BufferedReader = registerClass(&class_java_io_BufferedReader);

}
