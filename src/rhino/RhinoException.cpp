#include "rhino/RhinoException.h"
#include "java/lang/StringBuilder.h"
#include "rhino/RhinoException_1.h"
#include "java/io/Writer.h"
#include "java/util/ArrayList.h"
#include "java/util/regex/Matcher.h"
#include "rhino/StackStyle.h"
#include "java/io/PrintStream.h"
#include "java/lang/String.h"
#include "java/util/regex/Pattern.h"
#include "java/io/PrintWriter.h"
#include "java/io/CharArrayWriter.h"
#include "java/lang/Throwable.h"
#include "rhino/Evaluator.h"
#include "rhino/Interpreter.h"
#include "rhino/Context.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Enum.h"
#include "rhino/ScriptStackElement.h"
#include "java/lang/CharSequence.h"
#include "rhino/RhinoException.h"
#include "java/lang/Object.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/RuntimeException.h"
#include "java/util/List.h"
#include "java/lang/System.h"
#include "java/lang/StackTraceElement.h"

extern "C" {

jobject SF_rhino_RhinoException_JAVA_STACK_PATTERN;
jobject SF_rhino_RhinoException_stackStyle;

void mark_rhino_RhinoException(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_RhinoException_JAVA_STACK_PATTERN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_RhinoException_JAVA_STACK_PATTERN)->clazz)->markFunction)((jobject) SF_rhino_RhinoException_JAVA_STACK_PATTERN, mark, depth + 1);
		if (SF_rhino_RhinoException_stackStyle)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_RhinoException_stackStyle)->clazz)->markFunction)((jobject) SF_rhino_RhinoException_stackStyle, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_RuntimeException(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_RhinoException *) object;
	if (self->F_sourceName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sourceName)->clazz)->markFunction)((jobject) self->F_sourceName, mark, depth + 1);
	if (self->F_lineSource)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lineSource)->clazz)->markFunction)((jobject) self->F_lineSource, mark, depth + 1);
	if (self->F_interpreterStackInfo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_interpreterStackInfo)->clazz)->markFunction)((jobject) self->F_interpreterStackInfo, mark, depth + 1);
	if (self->F_interpreterLineData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_interpreterLineData)->clazz)->markFunction)((jobject) self->F_interpreterLineData, mark, depth + 1);
}

void init_rhino_RhinoException(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_RhinoException(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_RuntimeException(ctx, (frame[0].o));
	LINE_NUMBER(14);
	sp[0].o = (jobject)SM_rhino_Context_createInterpreter_R_rhino_Evaluator(ctx);
	frame[1].o = sp[0].o;
	LINE_NUMBER(15);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(16);
	((func_rhino_Evaluator_captureStackInfo_rhino_RhinoException) resolveInterfaceMethod(ctx, &class_rhino_Evaluator, INDEX_rhino_Evaluator_captureStackInfo_rhino_RhinoException, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o));
	}
label_3:;
	LINE_NUMBER(17);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_rhino_RhinoException_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_RhinoException(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	init_java_lang_RuntimeException_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(21);
	sp[0].o = (jobject)SM_rhino_Context_createInterpreter_R_rhino_Evaluator(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(22);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(23);
	((func_rhino_Evaluator_captureStackInfo_rhino_RhinoException) resolveInterfaceMethod(ctx, &class_rhino_Evaluator, INDEX_rhino_Evaluator_captureStackInfo_rhino_RhinoException, (frame[2].o)))(ctx, (frame[2].o), (frame[0].o));
	}
label_3:;
	LINE_NUMBER(24);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_RhinoException_getMessage_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:getMessage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((func_rhino_RhinoException_details_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_RhinoException_details_R_java_lang_String])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(29);
	sp[0].o = (jobject)((rhino_RhinoException *) NULL_CHECK((frame[0].o)))->F_sourceName;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	if (((jint)((rhino_RhinoException *) NULL_CHECK((frame[0].o)))->F_lineNumber) > 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_3:;
	{
	LINE_NUMBER(32);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_java_lang_String(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(33);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" ("_j))));
	LINE_NUMBER(34);
	sp[0].o = (jobject)((rhino_RhinoException *) NULL_CHECK((frame[0].o)))->F_sourceName;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(35);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_RhinoException *) NULL_CHECK((frame[0].o)))->F_sourceName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	{
	LINE_NUMBER(37);
	if (((jint)((rhino_RhinoException *) NULL_CHECK((frame[0].o)))->F_lineNumber) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (35));
	LINE_NUMBER(39);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jint)((rhino_RhinoException *) NULL_CHECK((frame[0].o)))->F_lineNumber));
	}
label_8:;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (41));
	LINE_NUMBER(42);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_RhinoException_details_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:details", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)M_java_lang_Throwable_getMessage_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_RhinoException_sourceName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:sourceName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((rhino_RhinoException *) NULL_CHECK((frame[0].o)))->F_sourceName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_RhinoException_initSourceName_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:initSourceName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(64);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((rhino_RhinoException *) NULL_CHECK((frame[0].o)))->F_sourceName;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(66);
	((rhino_RhinoException *) NULL_CHECK((frame[0].o)))->F_sourceName = (jref) (frame[1].o);
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_RhinoException_lineNumber_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:lineNumber", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return ((jint)((rhino_RhinoException *) NULL_CHECK((frame[0].o)))->F_lineNumber);
	}

	popStackFrame(ctx);
}

void M_rhino_RhinoException_initLineNumber_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:initLineNumber", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(84);
	if ((frame[1].i) > 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(85);
	if (((jint)((rhino_RhinoException *) NULL_CHECK((frame[0].o)))->F_lineNumber) <= 0) goto label_2;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(86);
	((rhino_RhinoException *) NULL_CHECK((frame[0].o)))->F_lineNumber = (frame[1].i);
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_RhinoException_columnNumber_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:columnNumber", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return ((jint)((rhino_RhinoException *) NULL_CHECK((frame[0].o)))->F_columnNumber);
	}

	popStackFrame(ctx);
}

void M_rhino_RhinoException_initColumnNumber_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:initColumnNumber", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(103);
	if ((frame[1].i) > 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(104);
	if (((jint)((rhino_RhinoException *) NULL_CHECK((frame[0].o)))->F_columnNumber) <= 0) goto label_2;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(105);
	((rhino_RhinoException *) NULL_CHECK((frame[0].o)))->F_columnNumber = (frame[1].i);
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_RhinoException_lineSource_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:lineSource", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((rhino_RhinoException *) NULL_CHECK((frame[0].o)))->F_lineSource;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_RhinoException_initLineSource_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:initLineSource", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(122);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((rhino_RhinoException *) NULL_CHECK((frame[0].o)))->F_lineSource;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(124);
	((rhino_RhinoException *) NULL_CHECK((frame[0].o)))->F_lineSource = (jref) (frame[1].o);
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_RhinoException_recordErrorOrigin_java_lang_String_int_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:recordErrorOrigin", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(130);
	if ((frame[2].i) != (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(131);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(134);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(135);
	((func_rhino_RhinoException_initSourceName_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_RhinoException_initSourceName_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	}
label_3:;
	{
	LINE_NUMBER(137);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(138);
	((func_rhino_RhinoException_initLineNumber_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_RhinoException_initLineNumber_int])(ctx, (frame[0].o), (frame[2].i));
	}
label_5:;
	{
	LINE_NUMBER(140);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(141);
	((func_rhino_RhinoException_initLineSource_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_RhinoException_initLineSource_java_lang_String])(ctx, (frame[0].o), (frame[3].o));
	}
label_7:;
	{
	LINE_NUMBER(143);
	if ((frame[4].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(144);
	((func_rhino_RhinoException_initColumnNumber_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_RhinoException_initColumnNumber_int])(ctx, (frame[0].o), (frame[4].i));
	}
label_9:;
	LINE_NUMBER(146);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_RhinoException_generateStackTrace_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:generateStackTrace", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(150);
	clinit_java_io_CharArrayWriter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_CharArrayWriter);
	init_java_io_CharArrayWriter(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	clinit_java_io_PrintWriter(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_PrintWriter);
	init_java_io_PrintWriter_java_io_Writer(ctx, sp[1].o, (frame[1].o));
	M_java_lang_Throwable_printStackTrace_java_io_PrintWriter(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(152);
	sp[0].o = (jobject)((func_java_io_CharArrayWriter_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_CharArrayWriter_toString_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(153);
	sp[0].o = (jobject)SM_rhino_Context_createInterpreter_R_rhino_Evaluator(ctx);
	frame[3].o = sp[0].o;
	LINE_NUMBER(154);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((func_rhino_Evaluator_getPatchedStack_rhino_RhinoException_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_Evaluator, INDEX_rhino_Evaluator_getPatchedStack_rhino_RhinoException_java_lang_String_R_java_lang_String, (frame[3].o)))(ctx, (frame[3].o), (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_rhino_RhinoException_getScriptStackTrace_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:getScriptStackTrace", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((func_rhino_RhinoException_getScriptStackTrace_int_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_RhinoException_getScriptStackTrace_int_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (jint(-1)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_RhinoException_getScriptStackTrace_int_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:getScriptStackTrace", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((func_rhino_RhinoException_getScriptStack_int_java_lang_String_R_Array1_rhino_ScriptStackElement) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_RhinoException_getScriptStack_int_java_lang_String_R_Array1_rhino_ScriptStackElement])(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(186);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_rhino_RhinoException_details_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_RhinoException_details_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_rhino_RhinoException_formatStackTrace_Array1_rhino_ScriptStackElement_java_lang_String_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_RhinoException_formatStackTrace_Array1_rhino_ScriptStackElement_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:formatStackTrace", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_RhinoException(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(190);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(191);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"line.separator"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(193);
	clinit_rhino_RhinoException(ctx);
	sp[0].o = (jobject)SF_rhino_RhinoException_stackStyle;
	clinit_rhino_StackStyle(ctx);
	sp[1].o = (jobject)SF_rhino_StackStyle_V8;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"null"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"null"_j))), (frame[1].o));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(196);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[3].o));
	}
label_3:;
	{
	LINE_NUMBER(199);
	frame[4].o = (frame[0].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_7;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(200);
	clinit_rhino_RhinoException$1(ctx);
	sp[0].o = (jobject)SF_rhino_RhinoException$1_$SwitchMap$rhino$StackStyle;
	clinit_rhino_RhinoException(ctx);
	sp[1].o = (jobject)SF_rhino_RhinoException_stackStyle;
	jint temp0 = (jint)((func_rhino_StackStyle_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_StackStyle_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_9;
		case 2: goto label_10;
		case 3: goto label_11;
		default: goto label_12;
	}
	}
label_9:;
	{
	LINE_NUMBER(202);
	((func_rhino_ScriptStackElement_renderMozillaStyle_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ScriptStackElement_renderMozillaStyle_java_lang_StringBuilder])(ctx, (frame[7].o), (frame[2].o));
	LINE_NUMBER(203);
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(205);
	((func_rhino_ScriptStackElement_renderV8Style_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ScriptStackElement_renderV8Style_java_lang_StringBuilder])(ctx, (frame[7].o), (frame[2].o));
	LINE_NUMBER(206);
	goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(208);
	((func_rhino_ScriptStackElement_renderJavaStyle_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ScriptStackElement_renderJavaStyle_java_lang_StringBuilder])(ctx, (frame[7].o), (frame[2].o));
	}
label_12:;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(199);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_RhinoException_getScriptStack_R_Array1_rhino_ScriptStackElement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:getScriptStack", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((func_rhino_RhinoException_getScriptStack_int_java_lang_String_R_Array1_rhino_ScriptStackElement) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_RhinoException_getScriptStack_int_java_lang_String_R_Array1_rhino_ScriptStackElement])(ctx, (frame[0].o), (jint(-1)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_RhinoException_getScriptStack_int_java_lang_String_R_Array1_rhino_ScriptStackElement(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:getScriptStack", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(241);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(242);
	frame[4].o = (checkCast(ctx, getArrayClass(&class_rhino_ScriptStackElement, 2), (jobject(nullptr))));
	LINE_NUMBER(243);
	sp[0].o = (jobject)((rhino_RhinoException *) NULL_CHECK((frame[0].o)))->F_interpreterStackInfo;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)SM_rhino_Context_createInterpreter_R_rhino_Evaluator(ctx);
	frame[5].o = sp[0].o;
	LINE_NUMBER(245);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_Interpreter)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((func_rhino_Interpreter_getScriptStackElements_rhino_RhinoException_R_Array2_rhino_ScriptStackElement) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_Interpreter, (frame[5].o))))->vtable)[VTABLE_rhino_Interpreter_getScriptStackElements_rhino_RhinoException_R_Array2_rhino_ScriptStackElement])(ctx, (checkCast(ctx, &class_rhino_Interpreter, (frame[5].o))), (frame[0].o));
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(249);
	frame[5].i = (jint(0));
	LINE_NUMBER(250);
	sp[0].o = (jobject)((func_rhino_RhinoException_getStackTrace_R_Array1_java_lang_StackTraceElement) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_RhinoException_getStackTrace_R_Array1_java_lang_StackTraceElement])(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(251);
	frame[7].i = (jint(0));
	LINE_NUMBER(252);
	if ((frame[2].o) != nullptr) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(257);
	frame[9].o = (frame[6].o);
	frame[10].i = (((jarray) nullCheck(ctx, (frame[9].o)))->length);
	frame[11].i = (jint(0));
	}
label_13:;
	{
	if ((frame[11].i) >= (frame[10].i)) goto label_14;
	}
	{
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[11].i)));
	LINE_NUMBER(258);
	sp[0].o = (jobject)((func_java_lang_StackTraceElement_getFileName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_StackTraceElement_getFileName_R_java_lang_String])(ctx, (frame[12].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(259);
	sp[0].o = (jobject)((func_java_lang_StackTraceElement_getMethodName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_StackTraceElement_getMethodName_R_java_lang_String])(ctx, (frame[12].o));
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"_c_"_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = frame[12].o;
	LINE_NUMBER(260);
	jint temp0 = (jint)((func_java_lang_StackTraceElement_getLineNumber_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StackTraceElement_getLineNumber_R_int])(ctx, sp[0].o);
	if (temp0 <= (jint(-1))) goto label_17;
	}
	INST_ALOAD(13);
	if ((--sp)->o == nullptr) goto label_17;
	{
	sp[0].o = frame[13].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8".java"_j));
	LINE_NUMBER(262);
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_17;
	}
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((func_java_lang_StackTraceElement_getMethodName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_StackTraceElement_getMethodName_R_java_lang_String])(ctx, (frame[12].o));
	frame[14].o = sp[0].o;
	LINE_NUMBER(264);
	clinit_rhino_RhinoException(ctx);
	sp[0].o = (jobject)SF_rhino_RhinoException_JAVA_STACK_PATTERN;
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, sp[0].o, (frame[14].o));
	frame[15].o = sp[0].o;
	LINE_NUMBER(267);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"_c_script_0"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"_c_script_0"_j))), (frame[14].o));
	if (temp0 != 0) goto label_23;
	}
	{
	jint temp0 = (jint)((func_java_util_regex_Matcher_find_R_boolean) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_util_regex_Matcher_find_R_boolean])(ctx, (frame[15].o));
	if (temp0 == 0) goto label_23;
	}
	{
	sp[0].o = frame[15].o;
	jint temp0 = jint(1);
	LINE_NUMBER(268);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, sp[0].o, temp0);
	sp += 1;
	goto label_25;
	}
label_23:;
	INST_ACONST_NULL();
label_25:;
	{
	sp -= 1;
	frame[14].o = sp[0].o;
	LINE_NUMBER(270);
	if ((frame[8].i) != 0) goto label_27;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[14].o));
	if (temp0 == 0) goto label_27;
	}
	{
	LINE_NUMBER(271);
	frame[8].i = (jint(1));
	goto label_29;
	}
label_27:;
	{
	LINE_NUMBER(272);
	if ((frame[8].i) == 0) goto label_29;
	}
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_30;
	{
	if ((frame[7].i) >= (frame[1].i)) goto label_29;
	}
label_30:;
	{
	LINE_NUMBER(273);
	sp[0].o = frame[3].o;
	clinit_rhino_ScriptStackElement(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ScriptStackElement);
	sp[2].o = frame[13].o;
	sp[3].o = frame[14].o;
	jint temp0 = (jint)((func_java_lang_StackTraceElement_getLineNumber_R_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_StackTraceElement_getLineNumber_R_int])(ctx, (frame[12].o));
	init_rhino_ScriptStackElement_java_lang_String_java_lang_String_int(ctx, sp[1].o, sp[2].o, sp[3].o, temp0);
	jint temp1 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(274);
	INST_IINC(7, 1);
	}
label_29:;
	LINE_NUMBER(277);
	goto label_32;
label_17:;
	{
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"rhino.Interpreter"_j));
	sp[1].o = (jobject)((func_java_lang_StackTraceElement_getClassName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_StackTraceElement_getClassName_R_java_lang_String])(ctx, (frame[12].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_32;
	}
	{
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"interpretLoop"_j));
	sp[1].o = frame[12].o;
	LINE_NUMBER(278);
	sp[1].o = (jobject)((func_java_lang_StackTraceElement_getMethodName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StackTraceElement_getMethodName_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_32;
	}
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_32;
	{
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) <= (frame[5].i)) goto label_32;
	}
	{
	LINE_NUMBER(282);
	sp[0].o = frame[4].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	frame[14].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	frame[15].i = (((jarray) nullCheck(ctx, (frame[14].o)))->length);
	frame[16].i = (jint(0));
	}
label_35:;
	{
	if ((frame[16].i) >= (frame[15].i)) goto label_32;
	}
	{
	frame[17].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[16].i)));
	LINE_NUMBER(283);
	if ((frame[8].i) != 0) goto label_37;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_ScriptStackElement *) NULL_CHECK((frame[17].o)))->F_functionName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_37;
	}
	{
	LINE_NUMBER(284);
	frame[8].i = (jint(1));
	goto label_39;
	}
label_37:;
	{
	LINE_NUMBER(285);
	if ((frame[8].i) == 0) goto label_39;
	}
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_40;
	{
	if ((frame[7].i) >= (frame[1].i)) goto label_39;
	}
label_40:;
	{
	LINE_NUMBER(286);
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, (frame[3].o)))(ctx, (frame[3].o), (frame[17].o));
	LINE_NUMBER(287);
	INST_IINC(7, 1);
	}
label_39:;
	{
	LINE_NUMBER(282);
	INST_IINC(16, 1);
	goto label_35;
	}
label_32:;
	{
	LINE_NUMBER(257);
	INST_IINC(11, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(292);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)createArray(ctx, &class_rhino_ScriptStackElement, (jint(0)));
	sp[0].o = (jobject)((func_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_rhino_ScriptStackElement, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

void M_rhino_RhinoException_printStackTrace_java_io_PrintWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:printStackTrace", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((rhino_RhinoException *) NULL_CHECK((frame[0].o)))->F_interpreterStackInfo;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(299);
	M_java_lang_Throwable_printStackTrace_java_io_PrintWriter(ctx, (frame[0].o), (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(301);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)M_rhino_RhinoException_generateStackTrace_R_java_lang_String(ctx, (frame[0].o));
	((func_java_io_PrintWriter_print_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintWriter_print_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(303);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_RhinoException_printStackTrace_java_io_PrintStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:printStackTrace", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((rhino_RhinoException *) NULL_CHECK((frame[0].o)))->F_interpreterStackInfo;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(308);
	M_java_lang_Throwable_printStackTrace_java_io_PrintStream(ctx, (frame[0].o), (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(310);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)M_rhino_RhinoException_generateStackTrace_R_java_lang_String(ctx, (frame[0].o));
	((func_java_io_PrintStream_print_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_print_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(312);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_RhinoException_usesMozillaStackStyle_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:usesMozillaStackStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_RhinoException(ctx);
	{
	LINE_NUMBER(325);
	clinit_rhino_RhinoException(ctx);
	sp[0].o = (jobject)SF_rhino_RhinoException_stackStyle;
	clinit_rhino_StackStyle(ctx);
	sp[1].o = (jobject)SF_rhino_StackStyle_MOZILLA;
	if (sp[0].o != sp[1].o) goto label_1;
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

void SM_rhino_RhinoException_useMozillaStackStyle_boolean(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:useMozillaStackStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_RhinoException(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(340);
	if ((frame[0].i) == 0) goto label_1;
	}
	clinit_rhino_StackStyle(ctx);
	(sp++)->o = SF_rhino_StackStyle_MOZILLA;
	goto label_2;
label_1:;
	clinit_rhino_StackStyle(ctx);
	(sp++)->o = SF_rhino_StackStyle_RHINO;
label_2:;
	{
	sp -= 1;
	clinit_rhino_RhinoException(ctx);
	SF_rhino_RhinoException_stackStyle = sp[0].o;
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_RhinoException_setStackStyle_rhino_StackStyle(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:setStackStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_RhinoException(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(351);
	clinit_rhino_RhinoException(ctx);
	SF_rhino_RhinoException_stackStyle = (frame[0].o);
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_RhinoException_getStackStyle_R_rhino_StackStyle(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:getStackStyle", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_RhinoException(ctx);
	{
	LINE_NUMBER(359);
	clinit_rhino_RhinoException(ctx);
	sp[0].o = (jobject)SF_rhino_RhinoException_stackStyle;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_rhino_RhinoException(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_RuntimeException(ctx);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/RhinoException:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_RhinoException(ctx);
	{
	LINE_NUMBER(11);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8"_c_(.*)_\\d+"_j))));
	clinit_rhino_RhinoException(ctx);
	SF_rhino_RhinoException_JAVA_STACK_PATTERN = sp[0].o;
	LINE_NUMBER(363);
	clinit_rhino_StackStyle(ctx);
	sp[0].o = (jobject)SF_rhino_StackStyle_RHINO;
	clinit_rhino_RhinoException(ctx);
	SF_rhino_RhinoException_stackStyle = sp[0].o;
	LINE_NUMBER(375);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"rhino.stack.style"_j))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(376);
	if ((frame[0].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(377);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"Rhino"_j))))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"Rhino"_j))), (frame[0].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(378);
	clinit_rhino_StackStyle(ctx);
	sp[0].o = (jobject)SF_rhino_StackStyle_RHINO;
	clinit_rhino_RhinoException(ctx);
	SF_rhino_RhinoException_stackStyle = sp[0].o;
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(379);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"Mozilla"_j))))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"Mozilla"_j))), (frame[0].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(380);
	clinit_rhino_StackStyle(ctx);
	sp[0].o = (jobject)SF_rhino_StackStyle_MOZILLA;
	clinit_rhino_RhinoException(ctx);
	SF_rhino_RhinoException_stackStyle = sp[0].o;
	goto label_4;
	}
label_8:;
	{
	LINE_NUMBER(381);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"V8"_j))))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"V8"_j))), (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(382);
	clinit_rhino_StackStyle(ctx);
	sp[0].o = (jobject)SF_rhino_StackStyle_V8;
	clinit_rhino_RhinoException(ctx);
	SF_rhino_RhinoException_stackStyle = sp[0].o;
	}
label_4:;
	LINE_NUMBER(385);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_RhinoException[] {
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
	(void *) M_rhino_RhinoException_getMessage_R_java_lang_String,
	(void *) M_java_lang_Throwable_fillInStack,
	(void *) M_java_lang_Throwable_fillInStackTrace_R_java_lang_Throwable,
	(void *) M_java_lang_Throwable_printStackTrace,
	(void *) M_rhino_RhinoException_printStackTrace_java_io_PrintStream,
	(void *) M_rhino_RhinoException_printStackTrace_java_io_PrintWriter,
	(void *) M_java_lang_Throwable_getStackTrace_R_Array1_java_lang_StackTraceElement,
	(void *) M_java_lang_Throwable_setStackTrace_Array1_java_lang_StackTraceElement,
	(void *) M_java_lang_Throwable_addSuppressed_java_lang_Throwable,
	(void *) M_java_lang_Throwable_getSuppressed_R_Array1_java_lang_Throwable,
	(void *) M_java_lang_Throwable_getLocalizedMessage_R_java_lang_String,
	(void *) M_rhino_RhinoException_details_R_java_lang_String,
	(void *) M_rhino_RhinoException_sourceName_R_java_lang_String,
	(void *) M_rhino_RhinoException_initSourceName_java_lang_String,
	(void *) M_rhino_RhinoException_lineNumber_R_int,
	(void *) M_rhino_RhinoException_initLineNumber_int,
	(void *) M_rhino_RhinoException_columnNumber_R_int,
	(void *) M_rhino_RhinoException_initColumnNumber_int,
	(void *) M_rhino_RhinoException_lineSource_R_java_lang_String,
	(void *) M_rhino_RhinoException_initLineSource_java_lang_String,
	(void *) M_rhino_RhinoException_recordErrorOrigin_java_lang_String_int_java_lang_String_int,
	(void *) M_rhino_RhinoException_generateStackTrace_R_java_lang_String,
	(void *) M_rhino_RhinoException_getScriptStackTrace_R_java_lang_String,
	(void *) M_rhino_RhinoException_getScriptStackTrace_int_java_lang_String_R_java_lang_String,
	(void *) M_rhino_RhinoException_getScriptStack_R_Array1_rhino_ScriptStackElement,
	(void *) M_rhino_RhinoException_getScriptStack_int_java_lang_String_R_Array1_rhino_ScriptStackElement,
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
	{ "details", "()Ljava/lang/String;" },
	{ "sourceName", "()Ljava/lang/String;" },
	{ "initSourceName", "(Ljava/lang/String;)V" },
	{ "lineNumber", "()I" },
	{ "initLineNumber", "(I)V" },
	{ "columnNumber", "()I" },
	{ "initColumnNumber", "(I)V" },
	{ "lineSource", "()Ljava/lang/String;" },
	{ "initLineSource", "(Ljava/lang/String;)V" },
	{ "recordErrorOrigin", "(Ljava/lang/String;ILjava/lang/String;I)V" },
	{ "generateStackTrace", "()Ljava/lang/String;" },
	{ "getScriptStackTrace", "()Ljava/lang/String;" },
	{ "getScriptStackTrace", "(ILjava/lang/String;)Ljava/lang/String;" },
	{ "getScriptStack", "()[Lrhino/ScriptStackElement;" },
	{ "getScriptStack", "(ILjava/lang/String;)[Lrhino/ScriptStackElement;" },
};

static FieldMetadata fields[] {
	{ "JAVA_STACK_PATTERN", &class_java_util_regex_Pattern, (intptr_t) &SF_rhino_RhinoException_JAVA_STACK_PATTERN, "Ljava/util/regex/Pattern;", 26 },
	{ "stackStyle", &class_rhino_StackStyle, (intptr_t) &SF_rhino_RhinoException_stackStyle, "Lrhino/StackStyle;", 10 },
	{ "sourceName", &class_java_lang_String, offsetof(rhino_RhinoException, F_sourceName), "Ljava/lang/String;", 2 },
	{ "lineNumber", &class_int, offsetof(rhino_RhinoException, F_lineNumber), "I", 2 },
	{ "lineSource", &class_java_lang_String, offsetof(rhino_RhinoException, F_lineSource), "Ljava/lang/String;", 2 },
	{ "columnNumber", &class_int, offsetof(rhino_RhinoException, F_columnNumber), "I", 2 },
	{ "interpreterStackInfo", &class_java_lang_Object, offsetof(rhino_RhinoException, F_interpreterStackInfo), "Ljava/lang/Object;", 0 },
	{ "interpreterLineData", getArrayClass(&class_int, 1), offsetof(rhino_RhinoException, F_interpreterLineData), "[I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_RhinoException, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_rhino_RhinoException_java_lang_String, 0, "(Ljava/lang/String;)V", 0 },
	{ "getMessage", (intptr_t) M_rhino_RhinoException_getMessage_R_java_lang_String, VTABLE_rhino_RhinoException_getMessage_R_java_lang_String, "()Ljava/lang/String;", 17 },
	{ "details", (intptr_t) M_rhino_RhinoException_details_R_java_lang_String, VTABLE_rhino_RhinoException_details_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "sourceName", (intptr_t) M_rhino_RhinoException_sourceName_R_java_lang_String, VTABLE_rhino_RhinoException_sourceName_R_java_lang_String, "()Ljava/lang/String;", 17 },
	{ "initSourceName", (intptr_t) M_rhino_RhinoException_initSourceName_java_lang_String, VTABLE_rhino_RhinoException_initSourceName_java_lang_String, "(Ljava/lang/String;)V", 17 },
	{ "lineNumber", (intptr_t) M_rhino_RhinoException_lineNumber_R_int, VTABLE_rhino_RhinoException_lineNumber_R_int, "()I", 17 },
	{ "initLineNumber", (intptr_t) M_rhino_RhinoException_initLineNumber_int, VTABLE_rhino_RhinoException_initLineNumber_int, "(I)V", 17 },
	{ "columnNumber", (intptr_t) M_rhino_RhinoException_columnNumber_R_int, VTABLE_rhino_RhinoException_columnNumber_R_int, "()I", 17 },
	{ "initColumnNumber", (intptr_t) M_rhino_RhinoException_initColumnNumber_int, VTABLE_rhino_RhinoException_initColumnNumber_int, "(I)V", 17 },
	{ "lineSource", (intptr_t) M_rhino_RhinoException_lineSource_R_java_lang_String, VTABLE_rhino_RhinoException_lineSource_R_java_lang_String, "()Ljava/lang/String;", 17 },
	{ "initLineSource", (intptr_t) M_rhino_RhinoException_initLineSource_java_lang_String, VTABLE_rhino_RhinoException_initLineSource_java_lang_String, "(Ljava/lang/String;)V", 17 },
	{ "recordErrorOrigin", (intptr_t) M_rhino_RhinoException_recordErrorOrigin_java_lang_String_int_java_lang_String_int, VTABLE_rhino_RhinoException_recordErrorOrigin_java_lang_String_int_java_lang_String_int, "(Ljava/lang/String;ILjava/lang/String;I)V", 16 },
	{ "generateStackTrace", (intptr_t) M_rhino_RhinoException_generateStackTrace_R_java_lang_String, VTABLE_rhino_RhinoException_generateStackTrace_R_java_lang_String, "()Ljava/lang/String;", 2 },
	{ "getScriptStackTrace", (intptr_t) M_rhino_RhinoException_getScriptStackTrace_R_java_lang_String, VTABLE_rhino_RhinoException_getScriptStackTrace_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getScriptStackTrace", (intptr_t) M_rhino_RhinoException_getScriptStackTrace_int_java_lang_String_R_java_lang_String, VTABLE_rhino_RhinoException_getScriptStackTrace_int_java_lang_String_R_java_lang_String, "(ILjava/lang/String;)Ljava/lang/String;", 1 },
	{ "formatStackTrace", (intptr_t) SM_rhino_RhinoException_formatStackTrace_Array1_rhino_ScriptStackElement_java_lang_String_R_java_lang_String, 0, "([Lrhino/ScriptStackElement;Ljava/lang/String;)Ljava/lang/String;", 8 },
	{ "getScriptStack", (intptr_t) M_rhino_RhinoException_getScriptStack_R_Array1_rhino_ScriptStackElement, VTABLE_rhino_RhinoException_getScriptStack_R_Array1_rhino_ScriptStackElement, "()[Lrhino/ScriptStackElement;", 1 },
	{ "getScriptStack", (intptr_t) M_rhino_RhinoException_getScriptStack_int_java_lang_String_R_Array1_rhino_ScriptStackElement, VTABLE_rhino_RhinoException_getScriptStack_int_java_lang_String_R_Array1_rhino_ScriptStackElement, "(ILjava/lang/String;)[Lrhino/ScriptStackElement;", 1 },
	{ "printStackTrace", (intptr_t) M_rhino_RhinoException_printStackTrace_java_io_PrintWriter, VTABLE_rhino_RhinoException_printStackTrace_java_io_PrintWriter, "(Ljava/io/PrintWriter;)V", 1 },
	{ "printStackTrace", (intptr_t) M_rhino_RhinoException_printStackTrace_java_io_PrintStream, VTABLE_rhino_RhinoException_printStackTrace_java_io_PrintStream, "(Ljava/io/PrintStream;)V", 1 },
	{ "usesMozillaStackStyle", (intptr_t) SM_rhino_RhinoException_usesMozillaStackStyle_R_boolean, 0, "()Z", 9 },
	{ "useMozillaStackStyle", (intptr_t) SM_rhino_RhinoException_useMozillaStackStyle_boolean, 0, "(Z)V", 9 },
	{ "setStackStyle", (intptr_t) SM_rhino_RhinoException_setStackStyle_rhino_StackStyle, 0, "(Lrhino/StackStyle;)V", 9 },
	{ "getStackStyle", (intptr_t) SM_rhino_RhinoException_getStackStyle_R_rhino_StackStyle, 0, "()Lrhino/StackStyle;", 9 },
	{ "<clinit>", (intptr_t) clinit_rhino_RhinoException, 0, "()V", 8 },
};

Class class_rhino_RhinoException{
		.nativeName = (intptr_t) "rhino/RhinoException",
		.parentClass = (intptr_t) &class_java_lang_RuntimeException,
		.size = sizeof(rhino_RhinoException),
		.classVtable = (intptr_t) vtable_rhino_RhinoException,
		.staticInitializer = (intptr_t) clinit_rhino_RhinoException,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_RhinoException,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 26,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 40,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_RhinoException = registerClass(&class_rhino_RhinoException);

}
