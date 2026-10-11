#include "java/io/PrintWriter.h"
#include "java/io/Writer.h"
#include "java/io/OutputStreamWriter.h"
#include "java/lang/Appendable.h"
#include "java/io/PrintStream.h"
#include "java/io/OutputStream.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/PrintWriter.h"
#include "java/io/IOException.h"
#include "java/io/InterruptedIOException.h"
#include "java/lang/Throwable.h"
#include "java/lang/Thread.h"

extern "C" {


void mark_java_io_PrintWriter(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_Writer(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_io_PrintWriter *) object;
	if (self->F_out)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_out)->clazz)->markFunction)((jobject) self->F_out, mark, depth + 1);
	if (self->F_psOut)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_psOut)->clazz)->markFunction)((jobject) self->F_psOut, mark, depth + 1);
}

void clinit_java_io_PrintWriter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_Writer(ctx);
}

void init_java_io_PrintWriter_java_io_Writer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_PrintWriter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	init_java_io_PrintWriter_java_io_Writer_boolean(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_PrintWriter_java_io_Writer_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_PrintWriter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(14);
	init_java_io_Writer_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(15);
	((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_trouble = (jint(0));
	LINE_NUMBER(16);
	((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_psOut = (jref) (jobject(nullptr));
	LINE_NUMBER(17);
	((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_out = (jref) (frame[1].o);
	LINE_NUMBER(18);
	((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_autoFlush = (frame[2].i);
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_PrintWriter_java_io_OutputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_PrintWriter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(22);
	init_java_io_PrintWriter_java_io_OutputStream_boolean(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_PrintWriter_java_io_OutputStream_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_PrintWriter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_java_io_OutputStreamWriter(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_OutputStreamWriter);
	init_java_io_OutputStreamWriter_java_io_OutputStream(ctx, sp[1].o, (frame[1].o));
	init_java_io_PrintWriter_java_io_Writer_boolean(ctx, sp[0].o, sp[1].o, (frame[2].i));
	LINE_NUMBER(27);
	if ((isInstance(ctx, (frame[1].o), &class_java_io_PrintStream)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(28);
	((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_psOut = (jref) (checkCast(ctx, &class_java_io_PrintStream, (frame[1].o)));
	}
label_2:;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_ensureOpen(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:ensureOpen", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_out;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(35);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stream closed"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(37);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:flush", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(42);
	M_java_io_PrintWriter_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(43);
	sp[0].o = (jobject)((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_Writer_flush) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_flush])(ctx, sp[0].o);
	LINE_NUMBER(44);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_7;
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
	label_7:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(47);
	goto label_12;
label_8:;
	{
	sp -= 1;
	LINE_NUMBER(45);
	frame[1].o = sp[0].o;
	LINE_NUMBER(46);
	((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_trouble = (jint(1));
	}
label_12:;
	LINE_NUMBER(49);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:close", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_13; } // goto label_2
	}
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_out;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(55);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_2; }
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_Writer_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_close])(ctx, sp[0].o);
	LINE_NUMBER(59);
	((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_out = (jref) (jobject(nullptr));
	LINE_NUMBER(60);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_12;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
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
	label_12:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(63);
	goto label_17;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(61);
	frame[1].o = sp[0].o;
	LINE_NUMBER(62);
	((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_trouble = (jint(1));
	}
label_17:;
	LINE_NUMBER(65);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_io_PrintWriter_checkError_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:checkError", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_out;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(69);
	((func_java_io_PrintWriter_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_flush])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_out;
	if ((isInstance(ctx, sp[0].o, &class_java_io_PrintWriter)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_out;
	frame[1].o = (checkCast(ctx, &class_java_io_PrintWriter, sp[0].o));
	LINE_NUMBER(74);
	jint temp0 = (jint)((func_java_io_PrintWriter_checkError_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_PrintWriter_checkError_R_boolean])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_psOut;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_psOut;
	jint temp0 = (jint)((func_java_io_PrintStream_checkError_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_checkError_R_boolean])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ALOAD(0);
	sp[-1].i = ((java_io_PrintWriter *) NULL_CHECK(sp[-1].o))->F_trouble;
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_setError(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:setError", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_trouble = (jint(1));
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_write_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_InterruptedIOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_10; }
	}
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(87);
	M_java_io_PrintWriter_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(88);
	sp[0].o = (jobject)((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(89);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_7;
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
	label_7:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(94);
	goto label_14;
label_8:;
	{
	sp -= 1;
	LINE_NUMBER(90);
	frame[2].o = sp[0].o;
	LINE_NUMBER(91);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	LINE_NUMBER(94);
	goto label_14;
	}
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(92);
	frame[2].o = sp[0].o;
	LINE_NUMBER(93);
	((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_trouble = (jint(1));
	}
label_14:;
	LINE_NUMBER(96);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_write_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:write", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_InterruptedIOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_10; }
	}
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(101);
	M_java_io_PrintWriter_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(102);
	sp[0].o = (jobject)((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_Writer_write_Array1_char_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_Array1_char_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(103);
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	goto label_7;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	label_7:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(108);
	goto label_14;
label_8:;
	{
	sp -= 1;
	LINE_NUMBER(104);
	frame[4].o = sp[0].o;
	LINE_NUMBER(105);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	LINE_NUMBER(108);
	goto label_14;
	}
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(106);
	frame[4].o = sp[0].o;
	LINE_NUMBER(107);
	((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_trouble = (jint(1));
	}
label_14:;
	LINE_NUMBER(110);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_write_Array1_char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	((func_java_io_PrintWriter_write_Array1_char_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_write_Array1_char_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_write_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:write", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_InterruptedIOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_10; }
	}
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(119);
	M_java_io_PrintWriter_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(120);
	sp[0].o = (jobject)((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_Writer_write_java_lang_String_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(121);
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	goto label_7;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	label_7:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(126);
	goto label_14;
label_8:;
	{
	sp -= 1;
	LINE_NUMBER(122);
	frame[4].o = sp[0].o;
	LINE_NUMBER(123);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	LINE_NUMBER(126);
	goto label_14;
	}
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(124);
	frame[4].o = sp[0].o;
	LINE_NUMBER(125);
	((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_trouble = (jint(1));
	}
label_14:;
	LINE_NUMBER(128);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_write_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(131);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	((func_java_io_PrintWriter_write_java_lang_String_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintWriter_write_java_lang_String_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_newLine(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:newLine", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_InterruptedIOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_10; }
	}
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(137);
	M_java_io_PrintWriter_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(138);
	sp[0].o = (jobject)((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_int])(ctx, sp[0].o, (10));
	LINE_NUMBER(139);
	if (((jint)((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_autoFlush) == 0) goto label_14;
	}
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_Writer_flush) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_flush])(ctx, sp[0].o);
	}
label_14:;
	{
	LINE_NUMBER(142);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_7;
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
	label_7:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(147);
	goto label_16;
label_8:;
	{
	sp -= 1;
	LINE_NUMBER(143);
	frame[1].o = sp[0].o;
	LINE_NUMBER(144);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	LINE_NUMBER(147);
	goto label_16;
	}
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(145);
	frame[1].o = sp[0].o;
	LINE_NUMBER(146);
	((java_io_PrintWriter *) NULL_CHECK((frame[0].o)))->F_trouble = (jint(1));
	}
label_16:;
	LINE_NUMBER(149);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_print_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:print", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_boolean_R_java_lang_String(ctx, (frame[1].i));
	((func_java_io_PrintWriter_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintWriter_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_print_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:print", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(156);
	((func_java_io_PrintWriter_write_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_write_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_print_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:print", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(160);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	((func_java_io_PrintWriter_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintWriter_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_print_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:print", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_long_R_java_lang_String(ctx, (frame[1].l));
	((func_java_io_PrintWriter_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintWriter_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_print_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:print", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(168);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_float_R_java_lang_String(ctx, (frame[1].f));
	((func_java_io_PrintWriter_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintWriter_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_print_double(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:print", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_double_R_java_lang_String(ctx, (frame[1].d));
	((func_java_io_PrintWriter_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintWriter_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_print_Array1_char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:print", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(176);
	((func_java_io_PrintWriter_write_Array1_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_write_Array1_char])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_print_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:print", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(180);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	((func_java_io_PrintWriter_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintWriter_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_print_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:print", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(184);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	((func_java_io_PrintWriter_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintWriter_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_println(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:println", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(188);
	M_java_io_PrintWriter_newLine(ctx, (frame[0].o));
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_println_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:println", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(193);
	((func_java_io_PrintWriter_print_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_print_boolean])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(194);
	((func_java_io_PrintWriter_println) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_println])(ctx, (frame[0].o));
	LINE_NUMBER(195);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_9;
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
	label_9:;
	LINE_NUMBER(196);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_println_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:println", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(200);
	((func_java_io_PrintWriter_print_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_print_char])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(201);
	((func_java_io_PrintWriter_println) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_println])(ctx, (frame[0].o));
	LINE_NUMBER(202);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_9;
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
	label_9:;
	LINE_NUMBER(203);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_println_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:println", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(207);
	((func_java_io_PrintWriter_print_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_print_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(208);
	((func_java_io_PrintWriter_println) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_println])(ctx, (frame[0].o));
	LINE_NUMBER(209);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_9;
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
	label_9:;
	LINE_NUMBER(210);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_println_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:println", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(214);
	((func_java_io_PrintWriter_print_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_print_long])(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(215);
	((func_java_io_PrintWriter_println) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_println])(ctx, (frame[0].o));
	LINE_NUMBER(216);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_9;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_9:;
	LINE_NUMBER(217);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_println_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:println", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(221);
	((func_java_io_PrintWriter_print_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_print_float])(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(222);
	((func_java_io_PrintWriter_println) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_println])(ctx, (frame[0].o));
	LINE_NUMBER(223);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_9;
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
	label_9:;
	LINE_NUMBER(224);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_println_double(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:println", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(228);
	((func_java_io_PrintWriter_print_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_print_double])(ctx, (frame[0].o), (frame[1].d));
	LINE_NUMBER(229);
	((func_java_io_PrintWriter_println) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_println])(ctx, (frame[0].o));
	LINE_NUMBER(230);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_9;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_9:;
	LINE_NUMBER(231);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_println_Array1_char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:println", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(235);
	((func_java_io_PrintWriter_print_Array1_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_print_Array1_char])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(236);
	((func_java_io_PrintWriter_println) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_println])(ctx, (frame[0].o));
	LINE_NUMBER(237);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_9;
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
	label_9:;
	LINE_NUMBER(238);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_println_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:println", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(242);
	((func_java_io_PrintWriter_print_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_print_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(243);
	((func_java_io_PrintWriter_println) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_println])(ctx, (frame[0].o));
	LINE_NUMBER(244);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_9;
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
	label_9:;
	LINE_NUMBER(245);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_PrintWriter_println_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:println", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(249);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(250);
	((func_java_io_PrintWriter_print_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_print_java_lang_String])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(251);
	((func_java_io_PrintWriter_println) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_println])(ctx, (frame[0].o));
	LINE_NUMBER(252);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_10;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_10:;
	LINE_NUMBER(253);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_io_PrintWriter_append_java_lang_CharSequence_R_java_io_PrintWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(256);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	((func_java_io_PrintWriter_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintWriter_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_io_PrintWriter(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(261);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(262);
	frame[1].o = (((jobject) createStringLiteral(ctx, u8"null"_j)));
	}
label_1:;
	{
	LINE_NUMBER(265);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence, (frame[1].o)))(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	sp[0].o = (jobject)((func_java_io_PrintWriter_append_java_lang_CharSequence_R_java_io_PrintWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintWriter_append_java_lang_CharSequence_R_java_io_PrintWriter])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_PrintWriter_append_char_R_java_io_PrintWriter(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(269);
	((func_java_io_PrintWriter_write_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_write_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_io_Writer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)((func_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_io_PrintWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_io_PrintWriter])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_PrintWriter_append_char_R_java_io_Writer(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)((func_java_io_PrintWriter_append_char_R_java_io_PrintWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_append_char_R_java_io_PrintWriter])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_PrintWriter_append_java_lang_CharSequence_R_java_io_Writer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)((func_java_io_PrintWriter_append_java_lang_CharSequence_R_java_io_PrintWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_append_java_lang_CharSequence_R_java_io_PrintWriter])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)((func_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_io_PrintWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_io_PrintWriter])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_PrintWriter_append_java_lang_CharSequence_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)((func_java_io_PrintWriter_append_java_lang_CharSequence_R_java_io_PrintWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_append_java_lang_CharSequence_R_java_io_PrintWriter])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_PrintWriter_append_char_R_java_lang_Appendable(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintWriter:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)((func_java_io_PrintWriter_append_char_R_java_io_PrintWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintWriter_append_char_R_java_io_PrintWriter])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_io_PrintWriter[] {
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
	(void *) M_java_io_PrintWriter_append_char_R_java_lang_Appendable,
	(void *) M_java_io_PrintWriter_append_java_lang_CharSequence_R_java_lang_Appendable,
	(void *) M_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_lang_Appendable,
	(void *) M_java_io_PrintWriter_close,
	(void *) M_java_io_PrintWriter_flush,
	(void *) M_java_io_PrintWriter_write_Array1_char,
	(void *) M_java_io_PrintWriter_write_Array1_char_int_int,
	(void *) M_java_io_PrintWriter_write_int,
	(void *) M_java_io_PrintWriter_write_java_lang_String,
	(void *) M_java_io_PrintWriter_write_java_lang_String_int_int,
	(void *) M_java_io_PrintWriter_append_java_lang_CharSequence_R_java_io_Writer,
	(void *) M_java_io_PrintWriter_append_char_R_java_io_Writer,
	(void *) M_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_io_Writer,
	(void *) M_java_io_PrintWriter_ensureOpen,
	(void *) M_java_io_PrintWriter_checkError_R_boolean,
	(void *) M_java_io_PrintWriter_setError,
	(void *) M_java_io_PrintWriter_newLine,
	(void *) M_java_io_PrintWriter_print_boolean,
	(void *) M_java_io_PrintWriter_print_char,
	(void *) M_java_io_PrintWriter_print_int,
	(void *) M_java_io_PrintWriter_print_long,
	(void *) M_java_io_PrintWriter_print_float,
	(void *) M_java_io_PrintWriter_print_double,
	(void *) M_java_io_PrintWriter_print_Array1_char,
	(void *) M_java_io_PrintWriter_print_java_lang_String,
	(void *) M_java_io_PrintWriter_print_java_lang_Object,
	(void *) M_java_io_PrintWriter_println,
	(void *) M_java_io_PrintWriter_println_boolean,
	(void *) M_java_io_PrintWriter_println_char,
	(void *) M_java_io_PrintWriter_println_int,
	(void *) M_java_io_PrintWriter_println_long,
	(void *) M_java_io_PrintWriter_println_float,
	(void *) M_java_io_PrintWriter_println_double,
	(void *) M_java_io_PrintWriter_println_Array1_char,
	(void *) M_java_io_PrintWriter_println_java_lang_String,
	(void *) M_java_io_PrintWriter_println_java_lang_Object,
	(void *) M_java_io_PrintWriter_append_java_lang_CharSequence_R_java_io_PrintWriter,
	(void *) M_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_io_PrintWriter,
	(void *) M_java_io_PrintWriter_append_char_R_java_io_PrintWriter,
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
	{ "append", "(C)Ljava/lang/Appendable;" },
	{ "append", "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;" },
	{ "append", "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;" },
	{ "close", "()V" },
	{ "flush", "()V" },
	{ "write", "([C)V" },
	{ "write", "([CII)V" },
	{ "write", "(I)V" },
	{ "write", "(Ljava/lang/String;)V" },
	{ "write", "(Ljava/lang/String;II)V" },
	{ "append", "(Ljava/lang/CharSequence;)Ljava/io/Writer;" },
	{ "append", "(C)Ljava/io/Writer;" },
	{ "append", "(Ljava/lang/CharSequence;II)Ljava/io/Writer;" },
	{ "ensureOpen", "()V" },
	{ "checkError", "()Z" },
	{ "setError", "()V" },
	{ "newLine", "()V" },
	{ "print", "(Z)V" },
	{ "print", "(C)V" },
	{ "print", "(I)V" },
	{ "print", "(J)V" },
	{ "print", "(F)V" },
	{ "print", "(D)V" },
	{ "print", "([C)V" },
	{ "print", "(Ljava/lang/String;)V" },
	{ "print", "(Ljava/lang/Object;)V" },
	{ "println", "()V" },
	{ "println", "(Z)V" },
	{ "println", "(C)V" },
	{ "println", "(I)V" },
	{ "println", "(J)V" },
	{ "println", "(F)V" },
	{ "println", "(D)V" },
	{ "println", "([C)V" },
	{ "println", "(Ljava/lang/String;)V" },
	{ "println", "(Ljava/lang/Object;)V" },
	{ "append", "(Ljava/lang/CharSequence;)Ljava/io/PrintWriter;" },
	{ "append", "(Ljava/lang/CharSequence;II)Ljava/io/PrintWriter;" },
	{ "append", "(C)Ljava/io/PrintWriter;" },
};

static FieldMetadata fields[] {
	{ "out", &class_java_io_Writer, offsetof(java_io_PrintWriter, F_out), "Ljava/io/Writer;", 4 },
	{ "autoFlush", &class_boolean, offsetof(java_io_PrintWriter, F_autoFlush), "Z", 18 },
	{ "trouble", &class_boolean, offsetof(java_io_PrintWriter, F_trouble), "Z", 2 },
	{ "psOut", &class_java_io_PrintStream, offsetof(java_io_PrintWriter, F_psOut), "Ljava/io/PrintStream;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_PrintWriter_java_io_Writer, 0, "(Ljava/io/Writer;)V", 1 },
	{ "<init>", (intptr_t) init_java_io_PrintWriter_java_io_Writer_boolean, 0, "(Ljava/io/Writer;Z)V", 1 },
	{ "<init>", (intptr_t) init_java_io_PrintWriter_java_io_OutputStream, 0, "(Ljava/io/OutputStream;)V", 1 },
	{ "<init>", (intptr_t) init_java_io_PrintWriter_java_io_OutputStream_boolean, 0, "(Ljava/io/OutputStream;Z)V", 1 },
	{ "ensureOpen", (intptr_t) M_java_io_PrintWriter_ensureOpen, VTABLE_java_io_PrintWriter_ensureOpen, "()V", 2 },
	{ "flush", (intptr_t) M_java_io_PrintWriter_flush, VTABLE_java_io_PrintWriter_flush, "()V", 1 },
	{ "close", (intptr_t) M_java_io_PrintWriter_close, VTABLE_java_io_PrintWriter_close, "()V", 1 },
	{ "checkError", (intptr_t) M_java_io_PrintWriter_checkError_R_boolean, VTABLE_java_io_PrintWriter_checkError_R_boolean, "()Z", 1 },
	{ "setError", (intptr_t) M_java_io_PrintWriter_setError, VTABLE_java_io_PrintWriter_setError, "()V", 4 },
	{ "write", (intptr_t) M_java_io_PrintWriter_write_int, VTABLE_java_io_PrintWriter_write_int, "(I)V", 1 },
	{ "write", (intptr_t) M_java_io_PrintWriter_write_Array1_char_int_int, VTABLE_java_io_PrintWriter_write_Array1_char_int_int, "([CII)V", 1 },
	{ "write", (intptr_t) M_java_io_PrintWriter_write_Array1_char, VTABLE_java_io_PrintWriter_write_Array1_char, "([C)V", 1 },
	{ "write", (intptr_t) M_java_io_PrintWriter_write_java_lang_String_int_int, VTABLE_java_io_PrintWriter_write_java_lang_String_int_int, "(Ljava/lang/String;II)V", 1 },
	{ "write", (intptr_t) M_java_io_PrintWriter_write_java_lang_String, VTABLE_java_io_PrintWriter_write_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "newLine", (intptr_t) M_java_io_PrintWriter_newLine, VTABLE_java_io_PrintWriter_newLine, "()V", 2 },
	{ "print", (intptr_t) M_java_io_PrintWriter_print_boolean, VTABLE_java_io_PrintWriter_print_boolean, "(Z)V", 1 },
	{ "print", (intptr_t) M_java_io_PrintWriter_print_char, VTABLE_java_io_PrintWriter_print_char, "(C)V", 1 },
	{ "print", (intptr_t) M_java_io_PrintWriter_print_int, VTABLE_java_io_PrintWriter_print_int, "(I)V", 1 },
	{ "print", (intptr_t) M_java_io_PrintWriter_print_long, VTABLE_java_io_PrintWriter_print_long, "(J)V", 1 },
	{ "print", (intptr_t) M_java_io_PrintWriter_print_float, VTABLE_java_io_PrintWriter_print_float, "(F)V", 1 },
	{ "print", (intptr_t) M_java_io_PrintWriter_print_double, VTABLE_java_io_PrintWriter_print_double, "(D)V", 1 },
	{ "print", (intptr_t) M_java_io_PrintWriter_print_Array1_char, VTABLE_java_io_PrintWriter_print_Array1_char, "([C)V", 1 },
	{ "print", (intptr_t) M_java_io_PrintWriter_print_java_lang_String, VTABLE_java_io_PrintWriter_print_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "print", (intptr_t) M_java_io_PrintWriter_print_java_lang_Object, VTABLE_java_io_PrintWriter_print_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "println", (intptr_t) M_java_io_PrintWriter_println, VTABLE_java_io_PrintWriter_println, "()V", 1 },
	{ "println", (intptr_t) M_java_io_PrintWriter_println_boolean, VTABLE_java_io_PrintWriter_println_boolean, "(Z)V", 1 },
	{ "println", (intptr_t) M_java_io_PrintWriter_println_char, VTABLE_java_io_PrintWriter_println_char, "(C)V", 1 },
	{ "println", (intptr_t) M_java_io_PrintWriter_println_int, VTABLE_java_io_PrintWriter_println_int, "(I)V", 1 },
	{ "println", (intptr_t) M_java_io_PrintWriter_println_long, VTABLE_java_io_PrintWriter_println_long, "(J)V", 1 },
	{ "println", (intptr_t) M_java_io_PrintWriter_println_float, VTABLE_java_io_PrintWriter_println_float, "(F)V", 1 },
	{ "println", (intptr_t) M_java_io_PrintWriter_println_double, VTABLE_java_io_PrintWriter_println_double, "(D)V", 1 },
	{ "println", (intptr_t) M_java_io_PrintWriter_println_Array1_char, VTABLE_java_io_PrintWriter_println_Array1_char, "([C)V", 1 },
	{ "println", (intptr_t) M_java_io_PrintWriter_println_java_lang_String, VTABLE_java_io_PrintWriter_println_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "println", (intptr_t) M_java_io_PrintWriter_println_java_lang_Object, VTABLE_java_io_PrintWriter_println_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "append", (intptr_t) M_java_io_PrintWriter_append_java_lang_CharSequence_R_java_io_PrintWriter, VTABLE_java_io_PrintWriter_append_java_lang_CharSequence_R_java_io_PrintWriter, "(Ljava/lang/CharSequence;)Ljava/io/PrintWriter;", 1 },
	{ "append", (intptr_t) M_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_io_PrintWriter, VTABLE_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_io_PrintWriter, "(Ljava/lang/CharSequence;II)Ljava/io/PrintWriter;", 1 },
	{ "append", (intptr_t) M_java_io_PrintWriter_append_char_R_java_io_PrintWriter, VTABLE_java_io_PrintWriter_append_char_R_java_io_PrintWriter, "(C)Ljava/io/PrintWriter;", 1 },
	{ "append", (intptr_t) M_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_io_Writer, VTABLE_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_io_Writer, "(Ljava/lang/CharSequence;II)Ljava/io/Writer;", 4161 },
	{ "append", (intptr_t) M_java_io_PrintWriter_append_char_R_java_io_Writer, VTABLE_java_io_PrintWriter_append_char_R_java_io_Writer, "(C)Ljava/io/Writer;", 4161 },
	{ "append", (intptr_t) M_java_io_PrintWriter_append_java_lang_CharSequence_R_java_io_Writer, VTABLE_java_io_PrintWriter_append_java_lang_CharSequence_R_java_io_Writer, "(Ljava/lang/CharSequence;)Ljava/io/Writer;", 4161 },
	{ "append", (intptr_t) M_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_lang_Appendable, VTABLE_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_lang_Appendable, "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;", 4161 },
	{ "append", (intptr_t) M_java_io_PrintWriter_append_java_lang_CharSequence_R_java_lang_Appendable, VTABLE_java_io_PrintWriter_append_java_lang_CharSequence_R_java_lang_Appendable, "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;", 4161 },
	{ "append", (intptr_t) M_java_io_PrintWriter_append_char_R_java_lang_Appendable, VTABLE_java_io_PrintWriter_append_char_R_java_lang_Appendable, "(C)Ljava/lang/Appendable;", 4161 },
};

Class class_java_io_PrintWriter{
		.nativeName = (intptr_t) "java/io/PrintWriter",
		.parentClass = (intptr_t) &class_java_io_Writer,
		.size = sizeof(java_io_PrintWriter),
		.classVtable = (intptr_t) vtable_java_io_PrintWriter,
		.staticInitializer = (intptr_t) clinit_java_io_PrintWriter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_PrintWriter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 43,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 50,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_PrintWriter = registerClass(&class_java_io_PrintWriter);

}
