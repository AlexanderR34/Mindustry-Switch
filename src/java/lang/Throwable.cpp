#include "java/lang/Throwable.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/ArrayList.h"
#include "java/io/PrintStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/PrintWriter.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "java/util/List.h"
#include "java/lang/System.h"
#include "java/lang/StackTraceElement.h"

extern "C" {


void mark_java_lang_Throwable(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_lang_Throwable *) object;
	if (self->F_message)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_message)->clazz)->markFunction)((jobject) self->F_message, mark, depth + 1);
	if (self->F_cause)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cause)->clazz)->markFunction)((jobject) self->F_cause, mark, depth + 1);
	if (self->F_stack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stack)->clazz)->markFunction)((jobject) self->F_stack, mark, depth + 1);
	if (self->F_suppressed)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_suppressed)->clazz)->markFunction)((jobject) self->F_suppressed, mark, depth + 1);
	if (self->F_stackTrace)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stackTrace)->clazz)->markFunction)((jobject) self->F_stackTrace, mark, depth + 1);
}

void clinit_java_lang_Throwable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_lang_Throwable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Throwable:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Throwable(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(47);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(48);
	M_java_lang_Throwable_fillInStack(ctx, (frame[0].o));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_Throwable_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Throwable:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Throwable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(52);
	M_java_lang_Throwable_fillInStack(ctx, (frame[0].o));
	LINE_NUMBER(53);
	((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_cause = (jref) (frame[1].o);
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_4;
	}
	INST_ACONST_NULL();
	goto label_5;
label_4:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Throwable_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Throwable_toString_R_java_lang_String])(ctx, sp[0].o);
	sp++;
label_5:;
	{
	sp -= 2;
	((java_lang_Throwable *) NULL_CHECK(sp[0].o))->F_message = (jref) sp[1].o;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Throwable_initCause_java_lang_Throwable_R_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Throwable:initCause", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_cause = (jref) (frame[1].o);
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Throwable_getStack_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Throwable:getStack", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_stack;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Throwable_getCause_R_java_lang_Throwable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Throwable:getCause", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_cause;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_java_lang_Throwable_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Throwable:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Throwable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(79);
	M_java_lang_Throwable_fillInStack(ctx, (frame[0].o));
	LINE_NUMBER(80);
	((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_message = (jref) (frame[1].o);
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_Throwable_java_lang_String_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Throwable:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Throwable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(83);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(84);
	M_java_lang_Throwable_fillInStack(ctx, (frame[0].o));
	LINE_NUMBER(85);
	((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_message = (jref) (frame[1].o);
	LINE_NUMBER(86);
	((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_cause = (jref) (frame[2].o);
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_Throwable_java_lang_String_java_lang_Throwable_boolean_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Throwable:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Throwable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(90);
	init_java_lang_Throwable_java_lang_String_java_lang_Throwable(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Throwable_getMessage_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Throwable:getMessage", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_message;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Throwable_fillInStackTrace_R_java_lang_Throwable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Throwable:fillInStackTrace", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	M_java_lang_Throwable_fillInStack(ctx, (frame[0].o));
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_java_lang_Throwable_printStackTrace(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Throwable:printStackTrace", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	sp[1].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_stack;
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(114);
	sp[0].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_cause;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(115);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Caused by "_j))));
	LINE_NUMBER(116);
	sp[0].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_cause;
	((func_java_lang_Throwable_printStackTrace) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Throwable_printStackTrace])(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_Throwable_printStackTrace_java_io_PrintStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Throwable:printStackTrace", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(121);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_stack;
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(122);
	sp[0].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_cause;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(123);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Caused by "_j))));
	LINE_NUMBER(124);
	sp[0].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_cause;
	((func_java_lang_Throwable_printStackTrace_java_io_PrintStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Throwable_printStackTrace_java_io_PrintStream])(ctx, sp[0].o, (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_message;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(127);
	((func_java_io_PrintStream_print_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_PrintStream_print_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Message: "_j))));
	LINE_NUMBER(128);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_message;
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	LINE_NUMBER(130);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_Throwable_printStackTrace_java_io_PrintWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Throwable:printStackTrace", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(133);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_stack;
	((func_java_io_PrintWriter_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintWriter_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(134);
	sp[0].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_cause;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(135);
	((func_java_io_PrintWriter_println_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_PrintWriter_println_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Caused by "_j))));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_cause;
	((func_java_lang_Throwable_printStackTrace_java_io_PrintWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Throwable_printStackTrace_java_io_PrintWriter])(ctx, sp[0].o, (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_message;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(139);
	((func_java_io_PrintWriter_print_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_PrintWriter_print_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Message: "_j))));
	LINE_NUMBER(140);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_message;
	((func_java_io_PrintWriter_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintWriter_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	LINE_NUMBER(142);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_lang_Throwable_getStackTrace_R_Array1_java_lang_StackTraceElement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Throwable:getStackTrace", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_stackTrace;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_lang_Throwable_setStackTrace_Array1_java_lang_StackTraceElement(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Throwable:setStackTrace", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(150);
	((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_stackTrace = (jref) (frame[1].o);
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Throwable_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Throwable:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(160);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_message;
	sp += 1;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[1].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_message;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_2:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_lang_Throwable_addSuppressed_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Throwable:addSuppressed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(164);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(165);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Throwable cannot suppress itself"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(167);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(168);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"null exception cannot be added suppressed"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_suppressed;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[1].o);
	((java_lang_Throwable *) NULL_CHECK(sp[0].o))->F_suppressed = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_suppressed;
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Throwable_getSuppressed_R_Array1_java_lang_Throwable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Throwable:getSuppressed", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_suppressed;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Throwable, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_suppressed;
	sp[1].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_suppressed;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[1].o))(ctx, sp[1].o);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Throwable, temp0);
	sp[0].o = (jobject)((func_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_Throwable, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Throwable_getLocalizedMessage_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Throwable:getLocalizedMessage", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((java_lang_Throwable *) NULL_CHECK((frame[0].o)))->F_message;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_Throwable[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Throwable_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Throwable_initCause_java_lang_Throwable_R_java_lang_Throwable,
	(void *) M_java_lang_Throwable_getStack_R_java_lang_String,
	(void *) M_java_lang_Throwable_getCause_R_java_lang_Throwable,
	(void *) M_java_lang_Throwable_getMessage_R_java_lang_String,
	(void *) M_java_lang_Throwable_fillInStack,
	(void *) M_java_lang_Throwable_fillInStackTrace_R_java_lang_Throwable,
	(void *) M_java_lang_Throwable_printStackTrace,
	(void *) M_java_lang_Throwable_printStackTrace_java_io_PrintStream,
	(void *) M_java_lang_Throwable_printStackTrace_java_io_PrintWriter,
	(void *) M_java_lang_Throwable_getStackTrace_R_Array1_java_lang_StackTraceElement,
	(void *) M_java_lang_Throwable_setStackTrace_Array1_java_lang_StackTraceElement,
	(void *) M_java_lang_Throwable_addSuppressed_java_lang_Throwable,
	(void *) M_java_lang_Throwable_getSuppressed_R_Array1_java_lang_Throwable,
	(void *) M_java_lang_Throwable_getLocalizedMessage_R_java_lang_String,
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
	{ "initCause", "(Ljava/lang/Throwable;)Ljava/lang/Throwable;" },
	{ "getStack", "()Ljava/lang/String;" },
	{ "getCause", "()Ljava/lang/Throwable;" },
	{ "getMessage", "()Ljava/lang/String;" },
	{ "fillInStack", "()V" },
	{ "fillInStackTrace", "()Ljava/lang/Throwable;" },
	{ "printStackTrace", "()V" },
	{ "printStackTrace", "(Ljava/io/PrintStream;)V" },
	{ "printStackTrace", "(Ljava/io/PrintWriter;)V" },
	{ "getStackTrace", "()[Ljava/lang/StackTraceElement;" },
	{ "setStackTrace", "([Ljava/lang/StackTraceElement;)V" },
	{ "addSuppressed", "(Ljava/lang/Throwable;)V" },
	{ "getSuppressed", "()[Ljava/lang/Throwable;" },
	{ "getLocalizedMessage", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "message", &class_java_lang_String, offsetof(java_lang_Throwable, F_message), "Ljava/lang/String;", 2 },
	{ "cause", &class_java_lang_Throwable, offsetof(java_lang_Throwable, F_cause), "Ljava/lang/Throwable;", 2 },
	{ "stack", &class_java_lang_String, offsetof(java_lang_Throwable, F_stack), "Ljava/lang/String;", 2 },
	{ "suppressed", &class_java_util_List, offsetof(java_lang_Throwable, F_suppressed), "Ljava/util/List;", 2 },
	{ "stackTrace", getArrayClass(&class_java_lang_StackTraceElement, 1), offsetof(java_lang_Throwable, F_stackTrace), "[Ljava/lang/StackTraceElement;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_Throwable, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_lang_Throwable_java_lang_Throwable, 0, "(Ljava/lang/Throwable;)V", 1 },
	{ "initCause", (intptr_t) M_java_lang_Throwable_initCause_java_lang_Throwable_R_java_lang_Throwable, VTABLE_java_lang_Throwable_initCause_java_lang_Throwable_R_java_lang_Throwable, "(Ljava/lang/Throwable;)Ljava/lang/Throwable;", 131073 },
	{ "getStack", (intptr_t) M_java_lang_Throwable_getStack_R_java_lang_String, VTABLE_java_lang_Throwable_getStack_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getCause", (intptr_t) M_java_lang_Throwable_getCause_R_java_lang_Throwable, VTABLE_java_lang_Throwable_getCause_R_java_lang_Throwable, "()Ljava/lang/Throwable;", 1 },
	{ "<init>", (intptr_t) init_java_lang_Throwable_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_Throwable_java_lang_String_java_lang_Throwable, 0, "(Ljava/lang/String;Ljava/lang/Throwable;)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_Throwable_java_lang_String_java_lang_Throwable_boolean_boolean, 0, "(Ljava/lang/String;Ljava/lang/Throwable;ZZ)V", 4 },
	{ "getMessage", (intptr_t) M_java_lang_Throwable_getMessage_R_java_lang_String, VTABLE_java_lang_Throwable_getMessage_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "fillInStack", (intptr_t) M_java_lang_Throwable_fillInStack, VTABLE_java_lang_Throwable_fillInStack, "()V", 258 },
	{ "fillInStackTrace", (intptr_t) M_java_lang_Throwable_fillInStackTrace_R_java_lang_Throwable, VTABLE_java_lang_Throwable_fillInStackTrace_R_java_lang_Throwable, "()Ljava/lang/Throwable;", 1 },
	{ "printStackTrace", (intptr_t) M_java_lang_Throwable_printStackTrace, VTABLE_java_lang_Throwable_printStackTrace, "()V", 1 },
	{ "printStackTrace", (intptr_t) M_java_lang_Throwable_printStackTrace_java_io_PrintStream, VTABLE_java_lang_Throwable_printStackTrace_java_io_PrintStream, "(Ljava/io/PrintStream;)V", 1 },
	{ "printStackTrace", (intptr_t) M_java_lang_Throwable_printStackTrace_java_io_PrintWriter, VTABLE_java_lang_Throwable_printStackTrace_java_io_PrintWriter, "(Ljava/io/PrintWriter;)V", 1 },
	{ "getStackTrace", (intptr_t) M_java_lang_Throwable_getStackTrace_R_Array1_java_lang_StackTraceElement, VTABLE_java_lang_Throwable_getStackTrace_R_Array1_java_lang_StackTraceElement, "()[Ljava/lang/StackTraceElement;", 1 },
	{ "setStackTrace", (intptr_t) M_java_lang_Throwable_setStackTrace_Array1_java_lang_StackTraceElement, VTABLE_java_lang_Throwable_setStackTrace_Array1_java_lang_StackTraceElement, "([Ljava/lang/StackTraceElement;)V", 1 },
	{ "toString", (intptr_t) M_java_lang_Throwable_toString_R_java_lang_String, VTABLE_java_lang_Throwable_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "addSuppressed", (intptr_t) M_java_lang_Throwable_addSuppressed_java_lang_Throwable, VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable, "(Ljava/lang/Throwable;)V", 17 },
	{ "getSuppressed", (intptr_t) M_java_lang_Throwable_getSuppressed_R_Array1_java_lang_Throwable, VTABLE_java_lang_Throwable_getSuppressed_R_Array1_java_lang_Throwable, "()[Ljava/lang/Throwable;", 17 },
	{ "getLocalizedMessage", (intptr_t) M_java_lang_Throwable_getLocalizedMessage_R_java_lang_String, VTABLE_java_lang_Throwable_getLocalizedMessage_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_java_lang_Throwable{
		.nativeName = (intptr_t) "java/lang/Throwable",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_Throwable),
		.classVtable = (intptr_t) vtable_java_lang_Throwable,
		.staticInitializer = (intptr_t) clinit_java_lang_Throwable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_Throwable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_Throwable = registerClass(&class_java_lang_Throwable);

}
