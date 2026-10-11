#include "java/io/StringReader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/ArrayIndexOutOfBoundsException.h"
#include "java/io/StringReader.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/io/IOException.h"
#include "java/io/Reader.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_java_io_StringReader(jobject object, jint mark, jint depth) {
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
	auto self = (java_io_StringReader *) object;
	if (self->F_str)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_str)->clazz)->markFunction)((jobject) self->F_str, mark, depth + 1);
}

void clinit_java_io_StringReader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_Reader(ctx);
}

void init_java_io_StringReader_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringReader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_StringReader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(44);
	init_java_io_Reader(ctx, (frame[0].o));
	LINE_NUMBER(29);
	((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_markpos = (jint(-1));
	LINE_NUMBER(45);
	((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_str = (jref) (frame[1].o);
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	((java_io_StringReader *) NULL_CHECK(sp[0].o))->F_count = temp0;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_StringReader_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringReader:close", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_str = (jref) (jobject(nullptr));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_io_StringReader_isClosed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringReader:isClosed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_str;
	if (sp[0].o != nullptr) goto label_1;
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

void M_java_io_StringReader_mark_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringReader:mark", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(84);
	if ((frame[1].i) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(85);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((java_io_Reader *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(89);
	jint temp0 = (jint)M_java_io_StringReader_isClosed_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(90);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"String reader already closed"_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(92);
	((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_markpos = ((jint)((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_pos);
	LINE_NUMBER(93);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_12;
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
	label_12:;
	LINE_NUMBER(94);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_io_StringReader_markSupported_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringReader:markSupported", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_java_io_StringReader_read_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringReader:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((java_io_Reader *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(120);
	jint temp0 = (jint)M_java_io_StringReader_isClosed_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(121);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"String reader already closed"_j))));
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(123);
	if (((jint)((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_pos) == ((jint)((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_count)) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_str;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((java_io_StringReader *) NULL_CHECK(sp[1].o))->F_pos;
	((java_io_StringReader *) NULL_CHECK(sp[1].o))->F_pos = (temp0 + (jint(1)));
	jint temp3 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	monitorExit(ctx, (frame[1].o));
	sp[0].i = temp3;
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
	LINE_NUMBER(126);
	jint temp0 = jint(-1);
	monitorExit(ctx, (frame[1].o));
	sp[0].i = temp0;
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
	LINE_NUMBER(127);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jint M_java_io_StringReader_read_Array1_char_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringReader:read", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((java_io_Reader *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(154);
	jint temp0 = (jint)M_java_io_StringReader_isClosed_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(156);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"StringReader already closed"_j))));
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(158);
	if ((frame[2].i) < 0) goto label_15;
	}
	{
	if ((frame[2].i) <= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(160);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_16:;
	{
	LINE_NUMBER(162);
	if ((frame[3].i) < 0) goto label_17;
	}
	{
	if ((frame[3].i) <= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[2].i))) goto label_18;
	}
label_17:;
	{
	LINE_NUMBER(164);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(166);
	if ((frame[3].i) != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(167);
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
	LINE_NUMBER(169);
	if (((jint)((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_pos) != ((jint)((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_count)) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(170);
	jint temp0 = jint(-1);
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
	LINE_NUMBER(172);
	if ((((jint)((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_pos) + (frame[3].i)) <= ((jint)((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_count)) goto label_21;
	}
	{
	jint temp0 = (jint)((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_count;
	sp[0].i = temp0;
	sp += 1;
	goto label_22;
	}
label_21:;
	{
	jint temp0 = ((jint)((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_pos) + (frame[3].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_22:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(173);
	sp[0].o = (jobject)((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_str;
	((func_java_lang_String_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getChars_int_int_Array1_char_int])(ctx, sp[0].o, ((jint)((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_pos), (frame[5].i), (frame[1].o), (frame[2].i));
	LINE_NUMBER(174);
	frame[6].i = ((frame[5].i) - ((jint)((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_pos));
	LINE_NUMBER(175);
	((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_pos = (frame[5].i);
	LINE_NUMBER(176);
	jint temp0 = frame[6].i;
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
	LINE_NUMBER(177);
	frame[7].o = sp[0].o;
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(7);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jbool M_java_io_StringReader_ready_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringReader:ready", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((java_io_Reader *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(193);
	jint temp0 = (jint)M_java_io_StringReader_isClosed_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(194);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"String reader already closed"_j))));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(196);
	jint temp0 = jint(1);
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
	LINE_NUMBER(197);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

void M_java_io_StringReader_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringReader:reset", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((java_io_Reader *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(214);
	jint temp0 = (jint)M_java_io_StringReader_isClosed_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(215);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"StringReader already closed"_j))));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(217);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_markpos) == (jint(-1))) goto label_9;
	}
	{
	jint temp0 = (jint)((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_markpos;
	sp[0].i = temp0;
	sp += 1;
	goto label_10;
	}
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 2;
	((java_io_StringReader *) NULL_CHECK(sp[0].o))->F_pos = sp[1].i;
	LINE_NUMBER(218);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_12;
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
	label_12:;
	LINE_NUMBER(219);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jlong M_java_io_StringReader_skip_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringReader:skip", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((java_io_Reader *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(244);
	jint temp0 = (jint)M_java_io_StringReader_isClosed_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(245);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"StringReader already closed"_j))));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(248);
	frame[4].i = (-((jint)((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_pos));
	LINE_NUMBER(249);
	frame[5].i = (((jint)((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_count) - ((jint)((java_io_StringReader *) NULL_CHECK((frame[0].o)))->F_pos));
	LINE_NUMBER(251);
	if ((frame[5].i) == 0) goto label_11;
	}
	{
	if ((longCompare((frame[1].l), (jlong((frame[5].i))))) <= 0) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(252);
	frame[1].l = (jlong((frame[5].i)));
	goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(253);
	if ((longCompare((frame[1].l), (jlong((frame[4].i))))) >= 0) goto label_13;
	}
	{
	LINE_NUMBER(254);
	frame[1].l = (jlong((frame[4].i)));
	}
label_13:;
	{
	LINE_NUMBER(257);
	sp[0].o = frame[0].o;
	((java_io_StringReader *) NULL_CHECK(sp[0].o))->F_pos = (jint(((jlong(((jint)((java_io_StringReader *) NULL_CHECK(sp[0].o))->F_pos))) + (frame[1].l))));
	LINE_NUMBER(258);
	jlong temp0 = frame[1].l;
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
	LINE_NUMBER(259);
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

void *vtable_java_io_StringReader[] {
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
	(void *) M_java_io_StringReader_close,
	(void *) M_java_io_StringReader_mark_int,
	(void *) M_java_io_StringReader_markSupported_R_boolean,
	(void *) M_java_io_StringReader_read_R_int,
	(void *) M_java_io_Reader_read_Array1_char_R_int,
	(void *) M_java_io_StringReader_read_Array1_char_int_int_R_int,
	(void *) M_java_io_StringReader_ready_R_boolean,
	(void *) M_java_io_StringReader_reset,
	(void *) M_java_io_StringReader_skip_long_R_long,
	(void *) M_java_io_StringReader_isClosed_R_boolean,
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
	{ "isClosed", "()Z" },
};

static FieldMetadata fields[] {
	{ "str", &class_java_lang_String, offsetof(java_io_StringReader, F_str), "Ljava/lang/String;", 2 },
	{ "markpos", &class_int, offsetof(java_io_StringReader, F_markpos), "I", 2 },
	{ "pos", &class_int, offsetof(java_io_StringReader, F_pos), "I", 2 },
	{ "count", &class_int, offsetof(java_io_StringReader, F_count), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_StringReader_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "close", (intptr_t) M_java_io_StringReader_close, VTABLE_java_io_StringReader_close, "()V", 1 },
	{ "isClosed", (intptr_t) M_java_io_StringReader_isClosed_R_boolean, VTABLE_java_io_StringReader_isClosed_R_boolean, "()Z", 2 },
	{ "mark", (intptr_t) M_java_io_StringReader_mark_int, VTABLE_java_io_StringReader_mark_int, "(I)V", 1 },
	{ "markSupported", (intptr_t) M_java_io_StringReader_markSupported_R_boolean, VTABLE_java_io_StringReader_markSupported_R_boolean, "()Z", 1 },
	{ "read", (intptr_t) M_java_io_StringReader_read_R_int, VTABLE_java_io_StringReader_read_R_int, "()I", 1 },
	{ "read", (intptr_t) M_java_io_StringReader_read_Array1_char_int_int_R_int, VTABLE_java_io_StringReader_read_Array1_char_int_int_R_int, "([CII)I", 1 },
	{ "ready", (intptr_t) M_java_io_StringReader_ready_R_boolean, VTABLE_java_io_StringReader_ready_R_boolean, "()Z", 1 },
	{ "reset", (intptr_t) M_java_io_StringReader_reset, VTABLE_java_io_StringReader_reset, "()V", 1 },
	{ "skip", (intptr_t) M_java_io_StringReader_skip_long_R_long, VTABLE_java_io_StringReader_skip_long_R_long, "(J)J", 1 },
};

Class class_java_io_StringReader{
		.nativeName = (intptr_t) "java/io/StringReader",
		.parentClass = (intptr_t) &class_java_io_Reader,
		.size = sizeof(java_io_StringReader),
		.classVtable = (intptr_t) vtable_java_io_StringReader,
		.staticInitializer = (intptr_t) clinit_java_io_StringReader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_StringReader,
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
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_StringReader = registerClass(&class_java_io_StringReader);

}
