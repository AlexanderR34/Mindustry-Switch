#include "java/io/CharArrayWriter.h"
#include "java/lang/Math.h"
#include "java/lang/StringIndexOutOfBoundsException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/CharArrayWriter.h"
#include "java/io/Writer.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/Throwable.h"
#include "java/lang/Appendable.h"
#include "java/lang/System.h"
#include "java/lang/CharSequence.h"

extern "C" {


void mark_java_io_CharArrayWriter(jobject object, jint mark, jint depth) {
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
	auto self = (java_io_CharArrayWriter *) object;
	if (self->F_buf)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buf)->clazz)->markFunction)((jobject) self->F_buf, mark, depth + 1);
}

void clinit_java_io_CharArrayWriter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_Writer(ctx);
}

void init_java_io_CharArrayWriter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/CharArrayWriter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_CharArrayWriter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(47);
	init_java_io_Writer(ctx, (frame[0].o));
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (32));
	((java_io_CharArrayWriter *) NULL_CHECK(sp[0].o))->F_buf = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_io_CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_buf;
	((java_io_Writer *) NULL_CHECK(sp[0].o))->F_lock = (jref) sp[1].o;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_CharArrayWriter_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/CharArrayWriter:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_CharArrayWriter(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(62);
	init_java_io_Writer(ctx, (frame[0].o));
	LINE_NUMBER(63);
	if ((frame[1].i) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(64);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"size < 0"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (frame[1].i));
	((java_io_CharArrayWriter *) NULL_CHECK(sp[0].o))->F_buf = (jref) sp[1].o;
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_io_CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_buf;
	((java_io_Writer *) NULL_CHECK(sp[0].o))->F_lock = (jref) sp[1].o;
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_CharArrayWriter_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/CharArrayWriter:close", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(76);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_CharArrayWriter_expand_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/CharArrayWriter:expand", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(80);
	jint temp0 = ((jint)((java_io_CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_count) + (frame[1].i);
	sp[0].o = (jobject)((java_io_CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_buf;
	if (temp0 > (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	LINE_NUMBER(81);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(84);
	jint temp0 = jint(2);
	sp[0].o = (jobject)((java_io_CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (temp0 * (((jarray) nullCheck(ctx, sp[0].o))->length)), (((jint)((java_io_CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_count) + (frame[1].i)));
	frame[2].i = temp1;
	LINE_NUMBER(85);
	sp[0].o = (jobject) createArray(ctx, &class_char, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(86);
	sp[0].o = (jobject)((java_io_CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_buf;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[3].o), (jint(0)), ((jint)((java_io_CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_count));
	LINE_NUMBER(87);
	((java_io_CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_buf = (jref) (frame[3].o);
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_CharArrayWriter_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/CharArrayWriter:flush", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(96);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_CharArrayWriter_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/CharArrayWriter:reset", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(105);
	((java_io_CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_count = (jint(0));
	LINE_NUMBER(106);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_8;
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
	label_8:;
	LINE_NUMBER(107);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_io_CharArrayWriter_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/CharArrayWriter:size", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(118);
	jint temp0 = (jint)((java_io_CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_count;
	monitorExit(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(119);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_io_CharArrayWriter_toCharArray_R_Array1_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/CharArrayWriter:toCharArray", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject) createArray(ctx, &class_char, ((jint)((java_io_CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_count));
	frame[2].o = sp[0].o;
	LINE_NUMBER(132);
	sp[0].o = (jobject)((java_io_CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_buf;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[2].o), (jint(0)), ((jint)((java_io_CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_count));
	LINE_NUMBER(133);
	sp[0].o = frame[2].o;
	monitorExit(ctx, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(134);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_io_CharArrayWriter_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/CharArrayWriter:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(147);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((java_io_CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_buf;
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((java_io_CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_count));
	monitorExit(ctx, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(148);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

void M_java_io_CharArrayWriter_write_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/CharArrayWriter:write", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(169);
	M_java_io_CharArrayWriter_expand_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(170);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((java_io_CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_buf;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((jint)((java_io_CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_count), (frame[3].i));
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	((java_io_CharArrayWriter *) NULL_CHECK(sp[0].o))->F_count = (((jint)((java_io_CharArrayWriter *) NULL_CHECK(sp[0].o))->F_count) + (frame[3].i));
	LINE_NUMBER(172);
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	goto label_10;
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
	label_10:;
	LINE_NUMBER(173);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_CharArrayWriter_write_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/CharArrayWriter:write", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(186);
	M_java_io_CharArrayWriter_expand_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(187);
	sp[0].o = (jobject)((java_io_CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((java_io_CharArrayWriter *) NULL_CHECK(sp[1].o))->F_count;
	((java_io_CharArrayWriter *) NULL_CHECK(sp[1].o))->F_count = (temp0 + (jint(1)));
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (jchar((frame[1].i)));
	LINE_NUMBER(188);
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
	LINE_NUMBER(189);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_CharArrayWriter_write_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/CharArrayWriter:write", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(204);
	if ((frame[1].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(205);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"str == null"_j))));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(207);
	if (((frame[2].i) | (frame[3].i)) < 0) goto label_9;
	}
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 <= (temp1 - (frame[3].i))) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(208);
	clinit_java_lang_StringIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringIndexOutOfBoundsException);
	init_java_lang_StringIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(211);
	M_java_io_CharArrayWriter_expand_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(212);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = (frame[2].i) + (frame[3].i);
	sp[1].o = (jobject)((java_io_CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_buf;
	((func_java_lang_String_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getChars_int_int_Array1_char_int])(ctx, sp[0].o, temp0, temp1, sp[1].o, ((jint)((java_io_CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_count));
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	((java_io_CharArrayWriter *) NULL_CHECK(sp[0].o))->F_count = (((jint)((java_io_CharArrayWriter *) NULL_CHECK(sp[0].o))->F_count) + (frame[3].i));
	LINE_NUMBER(214);
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	goto label_14;
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
	label_14:;
	LINE_NUMBER(215);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_CharArrayWriter_writeTo_java_io_Writer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/CharArrayWriter:writeTo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(231);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_io_CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_buf;
	((func_java_io_Writer_write_Array1_char_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_Array1_char_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((java_io_CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_count));
	LINE_NUMBER(232);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_8;
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
	label_8:;
	LINE_NUMBER(233);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_io_CharArrayWriter_append_char_R_java_io_CharArrayWriter(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/CharArrayWriter:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(245);
	((func_java_io_CharArrayWriter_write_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_CharArrayWriter_write_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_io_CharArrayWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/CharArrayWriter:append", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
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
	LINE_NUMBER(264);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_io_CharArrayWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_io_CharArrayWriter])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_io_CharArrayWriter(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/CharArrayWriter:append", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(293);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(294);
	frame[1].o = (((jobject) createStringLiteral(ctx, u8"null"_j)));
	}
label_1:;
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((func_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence, (frame[1].o)))(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(297);
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[4].o));
	((func_java_io_CharArrayWriter_write_java_lang_String_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_CharArrayWriter_write_java_lang_String_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_io_Writer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/CharArrayWriter:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((func_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_io_CharArrayWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_io_CharArrayWriter])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_CharArrayWriter_append_char_R_java_io_Writer(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/CharArrayWriter:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((func_java_io_CharArrayWriter_append_char_R_java_io_CharArrayWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_CharArrayWriter_append_char_R_java_io_CharArrayWriter])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_io_Writer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/CharArrayWriter:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((func_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_io_CharArrayWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_io_CharArrayWriter])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/CharArrayWriter:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((func_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_io_CharArrayWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_io_CharArrayWriter])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/CharArrayWriter:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((func_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_io_CharArrayWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_io_CharArrayWriter])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_CharArrayWriter_append_char_R_java_lang_Appendable(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/CharArrayWriter:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((func_java_io_CharArrayWriter_append_char_R_java_io_CharArrayWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_CharArrayWriter_append_char_R_java_io_CharArrayWriter])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_io_CharArrayWriter[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_io_CharArrayWriter_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_io_CharArrayWriter_append_char_R_java_lang_Appendable,
	(void *) M_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_lang_Appendable,
	(void *) M_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_lang_Appendable,
	(void *) M_java_io_CharArrayWriter_close,
	(void *) M_java_io_CharArrayWriter_flush,
	(void *) M_java_io_Writer_write_Array1_char,
	(void *) M_java_io_CharArrayWriter_write_Array1_char_int_int,
	(void *) M_java_io_CharArrayWriter_write_int,
	(void *) M_java_io_Writer_write_java_lang_String,
	(void *) M_java_io_CharArrayWriter_write_java_lang_String_int_int,
	(void *) M_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_io_Writer,
	(void *) M_java_io_CharArrayWriter_append_char_R_java_io_Writer,
	(void *) M_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_io_Writer,
	(void *) M_java_io_CharArrayWriter_expand_int,
	(void *) M_java_io_CharArrayWriter_reset,
	(void *) M_java_io_CharArrayWriter_size_R_int,
	(void *) M_java_io_CharArrayWriter_toCharArray_R_Array1_char,
	(void *) M_java_io_CharArrayWriter_writeTo_java_io_Writer,
	(void *) M_java_io_CharArrayWriter_append_char_R_java_io_CharArrayWriter,
	(void *) M_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_io_CharArrayWriter,
	(void *) M_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_io_CharArrayWriter,
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
	{ "expand", "(I)V" },
	{ "reset", "()V" },
	{ "size", "()I" },
	{ "toCharArray", "()[C" },
	{ "writeTo", "(Ljava/io/Writer;)V" },
	{ "append", "(C)Ljava/io/CharArrayWriter;" },
	{ "append", "(Ljava/lang/CharSequence;)Ljava/io/CharArrayWriter;" },
	{ "append", "(Ljava/lang/CharSequence;II)Ljava/io/CharArrayWriter;" },
};

static FieldMetadata fields[] {
	{ "buf", getArrayClass(&class_char, 1), offsetof(java_io_CharArrayWriter, F_buf), "[C", 4 },
	{ "count", &class_int, offsetof(java_io_CharArrayWriter, F_count), "I", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_CharArrayWriter, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_io_CharArrayWriter_int, 0, "(I)V", 1 },
	{ "close", (intptr_t) M_java_io_CharArrayWriter_close, VTABLE_java_io_CharArrayWriter_close, "()V", 1 },
	{ "expand", (intptr_t) M_java_io_CharArrayWriter_expand_int, VTABLE_java_io_CharArrayWriter_expand_int, "(I)V", 2 },
	{ "flush", (intptr_t) M_java_io_CharArrayWriter_flush, VTABLE_java_io_CharArrayWriter_flush, "()V", 1 },
	{ "reset", (intptr_t) M_java_io_CharArrayWriter_reset, VTABLE_java_io_CharArrayWriter_reset, "()V", 1 },
	{ "size", (intptr_t) M_java_io_CharArrayWriter_size_R_int, VTABLE_java_io_CharArrayWriter_size_R_int, "()I", 1 },
	{ "toCharArray", (intptr_t) M_java_io_CharArrayWriter_toCharArray_R_Array1_char, VTABLE_java_io_CharArrayWriter_toCharArray_R_Array1_char, "()[C", 1 },
	{ "toString", (intptr_t) M_java_io_CharArrayWriter_toString_R_java_lang_String, VTABLE_java_io_CharArrayWriter_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "write", (intptr_t) M_java_io_CharArrayWriter_write_Array1_char_int_int, VTABLE_java_io_CharArrayWriter_write_Array1_char_int_int, "([CII)V", 1 },
	{ "write", (intptr_t) M_java_io_CharArrayWriter_write_int, VTABLE_java_io_CharArrayWriter_write_int, "(I)V", 1 },
	{ "write", (intptr_t) M_java_io_CharArrayWriter_write_java_lang_String_int_int, VTABLE_java_io_CharArrayWriter_write_java_lang_String_int_int, "(Ljava/lang/String;II)V", 1 },
	{ "writeTo", (intptr_t) M_java_io_CharArrayWriter_writeTo_java_io_Writer, VTABLE_java_io_CharArrayWriter_writeTo_java_io_Writer, "(Ljava/io/Writer;)V", 1 },
	{ "append", (intptr_t) M_java_io_CharArrayWriter_append_char_R_java_io_CharArrayWriter, VTABLE_java_io_CharArrayWriter_append_char_R_java_io_CharArrayWriter, "(C)Ljava/io/CharArrayWriter;", 1 },
	{ "append", (intptr_t) M_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_io_CharArrayWriter, VTABLE_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_io_CharArrayWriter, "(Ljava/lang/CharSequence;)Ljava/io/CharArrayWriter;", 1 },
	{ "append", (intptr_t) M_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_io_CharArrayWriter, VTABLE_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_io_CharArrayWriter, "(Ljava/lang/CharSequence;II)Ljava/io/CharArrayWriter;", 1 },
	{ "append", (intptr_t) M_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_io_Writer, VTABLE_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_io_Writer, "(Ljava/lang/CharSequence;II)Ljava/io/Writer;", 4161 },
	{ "append", (intptr_t) M_java_io_CharArrayWriter_append_char_R_java_io_Writer, VTABLE_java_io_CharArrayWriter_append_char_R_java_io_Writer, "(C)Ljava/io/Writer;", 4161 },
	{ "append", (intptr_t) M_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_io_Writer, VTABLE_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_io_Writer, "(Ljava/lang/CharSequence;)Ljava/io/Writer;", 4161 },
	{ "append", (intptr_t) M_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_lang_Appendable, VTABLE_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_lang_Appendable, "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;", 4161 },
	{ "append", (intptr_t) M_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_lang_Appendable, VTABLE_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_lang_Appendable, "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;", 4161 },
	{ "append", (intptr_t) M_java_io_CharArrayWriter_append_char_R_java_lang_Appendable, VTABLE_java_io_CharArrayWriter_append_char_R_java_lang_Appendable, "(C)Ljava/lang/Appendable;", 4161 },
};

Class class_java_io_CharArrayWriter{
		.nativeName = (intptr_t) "java/io/CharArrayWriter",
		.parentClass = (intptr_t) &class_java_io_Writer,
		.size = sizeof(java_io_CharArrayWriter),
		.classVtable = (intptr_t) vtable_java_io_CharArrayWriter,
		.staticInitializer = (intptr_t) clinit_java_io_CharArrayWriter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_CharArrayWriter,
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
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 32,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_CharArrayWriter = registerClass(&class_java_io_CharArrayWriter);

}
