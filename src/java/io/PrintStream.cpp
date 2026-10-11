#include "java/io/PrintStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Formatter.h"
#include "java/lang/NullPointerException.h"
#include "java/io/IOException.h"
#include "java/io/FilterOutputStream.h"
#include "java/lang/Appendable.h"
#include "java/lang/Throwable.h"
#include "java/util/Locale.h"
#include "java/io/OutputStream.h"
#include "java/io/PrintStream.h"
#include "java/lang/CharSequence.h"

extern "C" {


void mark_java_io_PrintStream(jobject object, jint mark, jint depth) {
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
	auto self = (java_io_PrintStream *) object;
	if (self->F_formatter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_formatter)->clazz)->markFunction)((jobject) self->F_formatter, mark, depth + 1);
	if (self->F_encoding)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_encoding)->clazz)->markFunction)((jobject) self->F_encoding, mark, depth + 1);
}

void clinit_java_io_PrintStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_FilterOutputStream(ctx);
}

void init_java_io_PrintStream_java_io_OutputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_PrintStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	init_java_io_FilterOutputStream_java_io_OutputStream(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(63);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(64);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"out == null"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	LINE_NUMBER(66);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_io_PrintStream_java_io_OutputStream_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_PrintStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(83);
	init_java_io_FilterOutputStream_java_io_OutputStream(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(84);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(85);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"out == null"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(87);
	((java_io_PrintStream *) NULL_CHECK((frame[0].o)))->F_autoFlush = (frame[2].i);
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_PrintStream_java_io_OutputStream_boolean_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_PrintStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(110);
	init_java_io_FilterOutputStream_java_io_OutputStream(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(111);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(112);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"out == null"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(113);
	if ((frame[3].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(114);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"charsetName == null"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(116);
	((java_io_PrintStream *) NULL_CHECK((frame[0].o)))->F_autoFlush = (frame[2].i);
	LINE_NUMBER(124);
	((java_io_PrintStream *) NULL_CHECK((frame[0].o)))->F_encoding = (jref) (frame[3].o);
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_io_PrintStream_checkError_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:checkError", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	frame[1].o = sp[0].o;
	LINE_NUMBER(213);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return ((jint)((java_io_PrintStream *) NULL_CHECK((frame[0].o)))->F_ioError);
	}
label_2:;
	{
	LINE_NUMBER(217);
	((func_java_io_PrintStream_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintStream_flush])(ctx, (frame[0].o));
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return ((jint)((java_io_PrintStream *) NULL_CHECK((frame[0].o)))->F_ioError);
	}

	popStackFrame(ctx);
}

void M_java_io_PrintStream_clearError(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:clearError", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(226);
	((java_io_PrintStream *) NULL_CHECK((frame[0].o)))->F_ioError = (jint(0));
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintStream_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:close", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(236);
	((func_java_io_PrintStream_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintStream_flush])(ctx, (frame[0].o));
	LINE_NUMBER(237);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	if (sp[0].o == nullptr) goto label_6;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_OutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_close])(ctx, sp[0].o);
	LINE_NUMBER(240);
	((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out = (jref) (jobject(nullptr));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(243);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(241);
	frame[1].o = sp[0].o;
	LINE_NUMBER(242);
	((func_java_io_PrintStream_setError) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintStream_setError])(ctx, (frame[0].o));
	}
label_6:;
	LINE_NUMBER(245);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_PrintStream_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:flush", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	if (sp[0].o == nullptr) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_OutputStream_flush) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_flush])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(257);
	popStackFrame(ctx, self);
	INST_RETURN();
label_2:;
	LINE_NUMBER(258);
	INST_ASTORE(1);
label_5:;
	{
	LINE_NUMBER(262);
	((func_java_io_PrintStream_setError) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintStream_setError])(ctx, (frame[0].o));
	LINE_NUMBER(263);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintStream_newline(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:newline", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(269);
	((func_java_io_PrintStream_print_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintStream_print_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintStream_print_Array1_char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:print", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(276);
	sp[0].o = frame[0].o;
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[1].o, (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	((func_java_io_PrintStream_print_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_print_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintStream_print_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:print", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(283);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, (frame[1].i));
	((func_java_io_PrintStream_print_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_print_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintStream_print_double(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:print", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(290);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_double_R_java_lang_String(ctx, (frame[1].d));
	((func_java_io_PrintStream_print_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_print_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintStream_print_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:print", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(297);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_float_R_java_lang_String(ctx, (frame[1].f));
	((func_java_io_PrintStream_print_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_print_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintStream_print_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:print", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(304);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	((func_java_io_PrintStream_print_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_print_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintStream_print_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:print", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(311);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_long_R_java_lang_String(ctx, (frame[1].l));
	((func_java_io_PrintStream_print_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_print_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintStream_print_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:print", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(318);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	((func_java_io_PrintStream_print_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_print_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(319);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintStream_print_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:print", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(335);
	((func_java_io_PrintStream_setError) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintStream_setError])(ctx, (frame[0].o));
	LINE_NUMBER(336);
	popStackFrame(ctx, self);
	return;
	}
label_5:;
	{
	LINE_NUMBER(338);
	if ((frame[1].o) != nullptr) goto label_0;
	}
	{
	LINE_NUMBER(339);
	((func_java_io_PrintStream_print_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintStream_print_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	LINE_NUMBER(340);
	popStackFrame(ctx, self);
	return;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)((java_io_PrintStream *) NULL_CHECK((frame[0].o)))->F_encoding;
	if (sp[0].o != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(345);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_getBytes_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_getBytes_R_Array1_byte])(ctx, (frame[1].o));
	((func_java_io_PrintStream_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_write_Array1_byte])(ctx, sp[0].o, sp[1].o);
	goto label_1;
	}
label_10:;
	{
	LINE_NUMBER(347);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_io_PrintStream *) NULL_CHECK((frame[0].o)))->F_encoding;
	sp[1].o = (jobject)((func_java_lang_String_getBytes_java_lang_String_R_Array1_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_getBytes_java_lang_String_R_Array1_byte])(ctx, sp[1].o, sp[2].o);
	((func_java_io_PrintStream_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_write_Array1_byte])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(351);
	goto label_12;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(349);
	frame[2].o = sp[0].o;
	LINE_NUMBER(350);
	((func_java_io_PrintStream_setError) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintStream_setError])(ctx, (frame[0].o));
	}
label_12:;
	LINE_NUMBER(352);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_PrintStream_print_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:print", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(358);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_boolean_R_java_lang_String(ctx, (frame[1].i));
	((func_java_io_PrintStream_print_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_print_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintStream_println(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:println", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(365);
	M_java_io_PrintStream_newline(ctx, (frame[0].o));
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintStream_println_Array1_char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:println", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(372);
	sp[0].o = frame[0].o;
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[1].o, (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(373);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintStream_println_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:println", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(379);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, (frame[1].i));
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(380);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintStream_println_double(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:println", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(386);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_double_R_java_lang_String(ctx, (frame[1].d));
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(387);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintStream_println_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:println", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(393);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_float_R_java_lang_String(ctx, (frame[1].f));
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintStream_println_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:println", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(400);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(401);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintStream_println_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:println", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(407);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_long_R_java_lang_String(ctx, (frame[1].l));
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintStream_println_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:println", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(415);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintStream_println_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:println", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(430);
	((func_java_io_PrintStream_print_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintStream_print_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(431);
	M_java_io_PrintStream_newline(ctx, (frame[0].o));
	LINE_NUMBER(432);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintStream_println_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:println", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(438);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_boolean_R_java_lang_String(ctx, (frame[1].i));
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(439);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintStream_setError(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:setError", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(445);
	((java_io_PrintStream *) NULL_CHECK((frame[0].o)))->F_ioError = (jint(1));
	LINE_NUMBER(446);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_PrintStream_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:write", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(470);
	sp[0].o = frame[0].o;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_0; }
	}
	{
	LINE_NUMBER(472);
	((func_java_io_PrintStream_setError) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintStream_setError])(ctx, (frame[0].o));
	LINE_NUMBER(473);
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_RETURN();
label_0:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_OutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(477);
	if (((jint)((java_io_PrintStream *) NULL_CHECK((frame[0].o)))->F_autoFlush) == 0) goto label_1;
	}
	{
	LINE_NUMBER(478);
	((func_java_io_PrintStream_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintStream_flush])(ctx, (frame[0].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(482);
	goto label_17;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(480);
	frame[5].o = sp[0].o;
	LINE_NUMBER(481);
	((func_java_io_PrintStream_setError) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintStream_setError])(ctx, (frame[0].o));
	}
label_17:;
	{
	LINE_NUMBER(483);
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	goto label_19;
label_6:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	label_19:;
	LINE_NUMBER(484);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_PrintStream_write_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(500);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	if (sp[0].o != nullptr) goto label_0;
	}
	{
	LINE_NUMBER(501);
	((func_java_io_PrintStream_setError) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintStream_setError])(ctx, (frame[0].o));
	LINE_NUMBER(502);
	popStackFrame(ctx, self);
	return;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(505);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_OutputStream_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(506);
	frame[2].i = ((frame[1].i) & (255));
	LINE_NUMBER(508);
	if ((frame[2].i) == (10)) goto label_9;
	}
	{
	if ((frame[2].i) != (21)) goto label_10;
	}
label_9:;
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(509);
	if (((jint)((java_io_PrintStream *) NULL_CHECK((frame[0].o)))->F_autoFlush) == 0) goto label_1;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_1;
	{
	LINE_NUMBER(510);
	((func_java_io_PrintStream_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintStream_flush])(ctx, (frame[0].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(514);
	goto label_14;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(512);
	frame[2].o = sp[0].o;
	LINE_NUMBER(513);
	((func_java_io_PrintStream_setError) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintStream_setError])(ctx, (frame[0].o));
	}
label_14:;
	LINE_NUMBER(515);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_io_PrintStream_printf_java_lang_String_Array1_java_lang_Object_R_java_io_PrintStream(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:printf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(518);
	sp[0].o = (jobject)((java_io_PrintStream *) NULL_CHECK((frame[0].o)))->F_formatter;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(519);
	sp[0].o = frame[0].o;
	clinit_java_util_Formatter(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Formatter);
	init_java_util_Formatter(ctx, sp[1].o);
	((java_io_PrintStream *) NULL_CHECK(sp[0].o))->F_formatter = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(520);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_io_PrintStream *) NULL_CHECK((frame[0].o)))->F_formatter;
	sp[1].o = (jobject)((func_java_util_Formatter_format_java_lang_String_Array1_java_lang_Object_R_java_util_Formatter) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Formatter_format_java_lang_String_Array1_java_lang_Object_R_java_util_Formatter])(ctx, sp[1].o, (frame[1].o), (frame[2].o));
	((func_java_io_PrintStream_print_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_print_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(521);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_io_PrintStream_printf_java_util_Locale_java_lang_String_Array1_java_lang_Object_R_java_io_PrintStream(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:printf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(525);
	sp[0].o = (jobject)((func_java_io_PrintStream_printf_java_lang_String_Array1_java_lang_Object_R_java_io_PrintStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintStream_printf_java_lang_String_Array1_java_lang_Object_R_java_io_PrintStream])(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_PrintStream_append_char_R_java_io_PrintStream(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(553);
	((func_java_io_PrintStream_print_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintStream_print_char])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(554);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_io_PrintStream_append_java_lang_CharSequence_R_java_io_PrintStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(562);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(563);
	((func_java_io_PrintStream_print_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintStream_print_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(565);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	((func_java_io_PrintStream_print_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_print_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(567);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_io_PrintStream_append_java_lang_CharSequence_int_int_R_java_io_PrintStream(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(571);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence, (frame[1].o)))(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	sp[0].o = (jobject)((func_java_io_PrintStream_append_java_lang_CharSequence_R_java_io_PrintStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_append_java_lang_CharSequence_R_java_io_PrintStream])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_PrintStream_append_java_lang_CharSequence_int_int_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((func_java_io_PrintStream_append_java_lang_CharSequence_int_int_R_java_io_PrintStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintStream_append_java_lang_CharSequence_int_int_R_java_io_PrintStream])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_PrintStream_append_java_lang_CharSequence_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((func_java_io_PrintStream_append_java_lang_CharSequence_R_java_io_PrintStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintStream_append_java_lang_CharSequence_R_java_io_PrintStream])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_PrintStream_append_char_R_java_lang_Appendable(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/PrintStream:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((func_java_io_PrintStream_append_char_R_java_io_PrintStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_PrintStream_append_char_R_java_io_PrintStream])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_io_PrintStream[] {
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
	(void *) M_java_io_PrintStream_close,
	(void *) M_java_io_PrintStream_flush,
	(void *) M_java_io_OutputStream_write_Array1_byte,
	(void *) M_java_io_PrintStream_write_Array1_byte_int_int,
	(void *) M_java_io_PrintStream_write_int,
	(void *) M_java_io_PrintStream_checkError_R_boolean,
	(void *) M_java_io_PrintStream_append_char_R_java_lang_Appendable,
	(void *) M_java_io_PrintStream_append_java_lang_CharSequence_R_java_lang_Appendable,
	(void *) M_java_io_PrintStream_append_java_lang_CharSequence_int_int_R_java_lang_Appendable,
	(void *) M_java_io_PrintStream_clearError,
	(void *) M_java_io_PrintStream_newline,
	(void *) M_java_io_PrintStream_print_Array1_char,
	(void *) M_java_io_PrintStream_print_char,
	(void *) M_java_io_PrintStream_print_double,
	(void *) M_java_io_PrintStream_print_float,
	(void *) M_java_io_PrintStream_print_int,
	(void *) M_java_io_PrintStream_print_long,
	(void *) M_java_io_PrintStream_print_java_lang_Object,
	(void *) M_java_io_PrintStream_print_java_lang_String,
	(void *) M_java_io_PrintStream_print_boolean,
	(void *) M_java_io_PrintStream_println,
	(void *) M_java_io_PrintStream_println_Array1_char,
	(void *) M_java_io_PrintStream_println_char,
	(void *) M_java_io_PrintStream_println_double,
	(void *) M_java_io_PrintStream_println_float,
	(void *) M_java_io_PrintStream_println_int,
	(void *) M_java_io_PrintStream_println_long,
	(void *) M_java_io_PrintStream_println_java_lang_Object,
	(void *) M_java_io_PrintStream_println_java_lang_String,
	(void *) M_java_io_PrintStream_println_boolean,
	(void *) M_java_io_PrintStream_setError,
	(void *) M_java_io_PrintStream_printf_java_lang_String_Array1_java_lang_Object_R_java_io_PrintStream,
	(void *) M_java_io_PrintStream_printf_java_util_Locale_java_lang_String_Array1_java_lang_Object_R_java_io_PrintStream,
	(void *) M_java_io_PrintStream_append_char_R_java_io_PrintStream,
	(void *) M_java_io_PrintStream_append_java_lang_CharSequence_R_java_io_PrintStream,
	(void *) M_java_io_PrintStream_append_java_lang_CharSequence_int_int_R_java_io_PrintStream,
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
	{ "append", "(C)Ljava/lang/Appendable;" },
	{ "append", "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;" },
	{ "append", "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;" },
	{ "clearError", "()V" },
	{ "newline", "()V" },
	{ "print", "([C)V" },
	{ "print", "(C)V" },
	{ "print", "(D)V" },
	{ "print", "(F)V" },
	{ "print", "(I)V" },
	{ "print", "(J)V" },
	{ "print", "(Ljava/lang/Object;)V" },
	{ "print", "(Ljava/lang/String;)V" },
	{ "print", "(Z)V" },
	{ "println", "()V" },
	{ "println", "([C)V" },
	{ "println", "(C)V" },
	{ "println", "(D)V" },
	{ "println", "(F)V" },
	{ "println", "(I)V" },
	{ "println", "(J)V" },
	{ "println", "(Ljava/lang/Object;)V" },
	{ "println", "(Ljava/lang/String;)V" },
	{ "println", "(Z)V" },
	{ "setError", "()V" },
	{ "printf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;" },
	{ "printf", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;" },
	{ "append", "(C)Ljava/io/PrintStream;" },
	{ "append", "(Ljava/lang/CharSequence;)Ljava/io/PrintStream;" },
	{ "append", "(Ljava/lang/CharSequence;II)Ljava/io/PrintStream;" },
};

static jclass interfaces[] { &class_java_lang_Appendable, };

static FieldMetadata fields[] {
	{ "ioError", &class_boolean, offsetof(java_io_PrintStream, F_ioError), "Z", 2 },
	{ "formatter", &class_java_util_Formatter, offsetof(java_io_PrintStream, F_formatter), "Ljava/util/Formatter;", 2 },
	{ "autoFlush", &class_boolean, offsetof(java_io_PrintStream, F_autoFlush), "Z", 2 },
	{ "encoding", &class_java_lang_String, offsetof(java_io_PrintStream, F_encoding), "Ljava/lang/String;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_PrintStream_java_io_OutputStream, 0, "(Ljava/io/OutputStream;)V", 1 },
	{ "<init>", (intptr_t) init_java_io_PrintStream_java_io_OutputStream_boolean, 0, "(Ljava/io/OutputStream;Z)V", 1 },
	{ "<init>", (intptr_t) init_java_io_PrintStream_java_io_OutputStream_boolean_java_lang_String, 0, "(Ljava/io/OutputStream;ZLjava/lang/String;)V", 1 },
	{ "checkError", (intptr_t) M_java_io_PrintStream_checkError_R_boolean, VTABLE_java_io_PrintStream_checkError_R_boolean, "()Z", 1 },
	{ "clearError", (intptr_t) M_java_io_PrintStream_clearError, VTABLE_java_io_PrintStream_clearError, "()V", 4 },
	{ "close", (intptr_t) M_java_io_PrintStream_close, VTABLE_java_io_PrintStream_close, "()V", 33 },
	{ "flush", (intptr_t) M_java_io_PrintStream_flush, VTABLE_java_io_PrintStream_flush, "()V", 33 },
	{ "newline", (intptr_t) M_java_io_PrintStream_newline, VTABLE_java_io_PrintStream_newline, "()V", 2 },
	{ "print", (intptr_t) M_java_io_PrintStream_print_Array1_char, VTABLE_java_io_PrintStream_print_Array1_char, "([C)V", 1 },
	{ "print", (intptr_t) M_java_io_PrintStream_print_char, VTABLE_java_io_PrintStream_print_char, "(C)V", 1 },
	{ "print", (intptr_t) M_java_io_PrintStream_print_double, VTABLE_java_io_PrintStream_print_double, "(D)V", 1 },
	{ "print", (intptr_t) M_java_io_PrintStream_print_float, VTABLE_java_io_PrintStream_print_float, "(F)V", 1 },
	{ "print", (intptr_t) M_java_io_PrintStream_print_int, VTABLE_java_io_PrintStream_print_int, "(I)V", 1 },
	{ "print", (intptr_t) M_java_io_PrintStream_print_long, VTABLE_java_io_PrintStream_print_long, "(J)V", 1 },
	{ "print", (intptr_t) M_java_io_PrintStream_print_java_lang_Object, VTABLE_java_io_PrintStream_print_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "print", (intptr_t) M_java_io_PrintStream_print_java_lang_String, VTABLE_java_io_PrintStream_print_java_lang_String, "(Ljava/lang/String;)V", 33 },
	{ "print", (intptr_t) M_java_io_PrintStream_print_boolean, VTABLE_java_io_PrintStream_print_boolean, "(Z)V", 1 },
	{ "println", (intptr_t) M_java_io_PrintStream_println, VTABLE_java_io_PrintStream_println, "()V", 1 },
	{ "println", (intptr_t) M_java_io_PrintStream_println_Array1_char, VTABLE_java_io_PrintStream_println_Array1_char, "([C)V", 1 },
	{ "println", (intptr_t) M_java_io_PrintStream_println_char, VTABLE_java_io_PrintStream_println_char, "(C)V", 1 },
	{ "println", (intptr_t) M_java_io_PrintStream_println_double, VTABLE_java_io_PrintStream_println_double, "(D)V", 1 },
	{ "println", (intptr_t) M_java_io_PrintStream_println_float, VTABLE_java_io_PrintStream_println_float, "(F)V", 1 },
	{ "println", (intptr_t) M_java_io_PrintStream_println_int, VTABLE_java_io_PrintStream_println_int, "(I)V", 1 },
	{ "println", (intptr_t) M_java_io_PrintStream_println_long, VTABLE_java_io_PrintStream_println_long, "(J)V", 1 },
	{ "println", (intptr_t) M_java_io_PrintStream_println_java_lang_Object, VTABLE_java_io_PrintStream_println_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "println", (intptr_t) M_java_io_PrintStream_println_java_lang_String, VTABLE_java_io_PrintStream_println_java_lang_String, "(Ljava/lang/String;)V", 33 },
	{ "println", (intptr_t) M_java_io_PrintStream_println_boolean, VTABLE_java_io_PrintStream_println_boolean, "(Z)V", 1 },
	{ "setError", (intptr_t) M_java_io_PrintStream_setError, VTABLE_java_io_PrintStream_setError, "()V", 4 },
	{ "write", (intptr_t) M_java_io_PrintStream_write_Array1_byte_int_int, VTABLE_java_io_PrintStream_write_Array1_byte_int_int, "([BII)V", 1 },
	{ "write", (intptr_t) M_java_io_PrintStream_write_int, VTABLE_java_io_PrintStream_write_int, "(I)V", 33 },
	{ "printf", (intptr_t) M_java_io_PrintStream_printf_java_lang_String_Array1_java_lang_Object_R_java_io_PrintStream, VTABLE_java_io_PrintStream_printf_java_lang_String_Array1_java_lang_Object_R_java_io_PrintStream, "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;", 129 },
	{ "printf", (intptr_t) M_java_io_PrintStream_printf_java_util_Locale_java_lang_String_Array1_java_lang_Object_R_java_io_PrintStream, VTABLE_java_io_PrintStream_printf_java_util_Locale_java_lang_String_Array1_java_lang_Object_R_java_io_PrintStream, "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;", 129 },
	{ "append", (intptr_t) M_java_io_PrintStream_append_char_R_java_io_PrintStream, VTABLE_java_io_PrintStream_append_char_R_java_io_PrintStream, "(C)Ljava/io/PrintStream;", 1 },
	{ "append", (intptr_t) M_java_io_PrintStream_append_java_lang_CharSequence_R_java_io_PrintStream, VTABLE_java_io_PrintStream_append_java_lang_CharSequence_R_java_io_PrintStream, "(Ljava/lang/CharSequence;)Ljava/io/PrintStream;", 1 },
	{ "append", (intptr_t) M_java_io_PrintStream_append_java_lang_CharSequence_int_int_R_java_io_PrintStream, VTABLE_java_io_PrintStream_append_java_lang_CharSequence_int_int_R_java_io_PrintStream, "(Ljava/lang/CharSequence;II)Ljava/io/PrintStream;", 1 },
	{ "append", (intptr_t) M_java_io_PrintStream_append_java_lang_CharSequence_int_int_R_java_lang_Appendable, VTABLE_java_io_PrintStream_append_java_lang_CharSequence_int_int_R_java_lang_Appendable, "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;", 4161 },
	{ "append", (intptr_t) M_java_io_PrintStream_append_java_lang_CharSequence_R_java_lang_Appendable, VTABLE_java_io_PrintStream_append_java_lang_CharSequence_R_java_lang_Appendable, "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;", 4161 },
	{ "append", (intptr_t) M_java_io_PrintStream_append_char_R_java_lang_Appendable, VTABLE_java_io_PrintStream_append_char_R_java_lang_Appendable, "(C)Ljava/lang/Appendable;", 4161 },
};

Class class_java_io_PrintStream{
		.nativeName = (intptr_t) "java/io/PrintStream",
		.parentClass = (intptr_t) &class_java_io_FilterOutputStream,
		.size = sizeof(java_io_PrintStream),
		.classVtable = (intptr_t) vtable_java_io_PrintStream,
		.staticInitializer = (intptr_t) clinit_java_io_PrintStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_PrintStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 38,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 47,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_PrintStream = registerClass(&class_java_io_PrintStream);

}
