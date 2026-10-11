#include "arc/util/Log.h"
#include "java/lang/StringBuilder.h"
#include "arc/util/Log.h"
#include "arc/util/Log_DefaultLogFormatter.h"
#include "arc/util/ColorCodes.h"
#include "java/io/Writer.h"
#include "arc/util/Log_DefaultLogHandler.h"
#include "arc/util/Log_NoopLogHandler.h"
#include "java/lang/Enum.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/PrintWriter.h"
#include "arc/util/Log_LogFormatter.h"
#include "arc/util/Log_LogHandler.h"
#include "java/io/StringWriter.h"
#include "arc/util/Log_LogLevel.h"
#include "java/lang/Throwable.h"

extern "C" {

jobject SF_arc_util_Log_empty;
jbool SF_arc_util_Log_useColors;
jobject SF_arc_util_Log_level;
jobject SF_arc_util_Log_logger;
jobject SF_arc_util_Log_formatter;

void mark_arc_util_Log(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_Log_empty)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Log_empty)->clazz)->markFunction)((jobject) SF_arc_util_Log_empty, mark, depth + 1);
		if (SF_arc_util_Log_level)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Log_level)->clazz)->markFunction)((jobject) SF_arc_util_Log_level, mark, depth + 1);
		if (SF_arc_util_Log_logger)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Log_logger)->clazz)->markFunction)((jobject) SF_arc_util_Log_logger, mark, depth + 1);
		if (SF_arc_util_Log_formatter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Log_formatter)->clazz)->markFunction)((jobject) SF_arc_util_Log_formatter, mark, depth + 1);
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
	auto self = (arc_util_Log *) object;
}

void init_arc_util_Log(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Log_log_arc_util_Log$LogLevel_java_lang_String_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log:log", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(15);
	clinit_arc_util_Log(ctx);
	sp[0].o = (jobject)SF_arc_util_Log_level;
	jint temp0 = (jint)((func_arc_util_Log$LogLevel_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Log$LogLevel_ordinal_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)((func_arc_util_Log$LogLevel_ordinal_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_Log$LogLevel_ordinal_R_int])(ctx, (frame[0].o));
	if (temp0 <= temp1) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(16);
	clinit_arc_util_Log(ctx);
	sp[0].o = (jobject)SF_arc_util_Log_logger;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)SM_arc_util_Log_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[1].o), (frame[2].o));
	((func_arc_util_Log$LogHandler_log_arc_util_Log$LogLevel_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_util_Log$LogHandler, INDEX_arc_util_Log$LogHandler_log_arc_util_Log$LogLevel_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Log_debug_java_lang_String_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log:debug", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(20);
	clinit_arc_util_Log$LogLevel(ctx);
	sp[0].o = (jobject)SF_arc_util_Log$LogLevel_debug;
	SM_arc_util_Log_log_arc_util_Log$LogLevel_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Log_debug_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log:debug", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	clinit_arc_util_Log(ctx);
	sp[1].o = (jobject)SF_arc_util_Log_empty;
	SM_arc_util_Log_debug_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Log_infoList_Array1_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log:infoList", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(28);
	clinit_arc_util_Log(ctx);
	sp[0].o = (jobject)SF_arc_util_Log_level;
	jint temp0 = (jint)((func_arc_util_Log$LogLevel_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Log$LogLevel_ordinal_R_int])(ctx, sp[0].o);
	clinit_arc_util_Log$LogLevel(ctx);
	sp[0].o = (jobject)SF_arc_util_Log$LogLevel_info;
	jint temp1 = (jint)((func_arc_util_Log$LogLevel_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Log$LogLevel_ordinal_R_int])(ctx, sp[0].o);
	if (temp0 <= temp1) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(29);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(30);
	frame[2].o = (frame[0].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(31);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[5].o));
	LINE_NUMBER(32);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(30);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	SM_arc_util_Log_info_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Log_infoTag_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log:infoTag", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(38);
	clinit_arc_util_Log$LogLevel(ctx);
	sp[0].o = (jobject)SF_arc_util_Log$LogLevel_info;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"] "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	SM_arc_util_Log_log_arc_util_Log$LogLevel_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log:info", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(42);
	clinit_arc_util_Log$LogLevel(ctx);
	sp[0].o = (jobject)SF_arc_util_Log$LogLevel_info;
	SM_arc_util_Log_log_arc_util_Log$LogLevel_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Log_info_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log:info", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	clinit_arc_util_Log(ctx);
	sp[1].o = (jobject)SF_arc_util_Log_empty;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log:warn", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(50);
	clinit_arc_util_Log$LogLevel(ctx);
	sp[0].o = (jobject)SF_arc_util_Log$LogLevel_warn;
	SM_arc_util_Log_log_arc_util_Log$LogLevel_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Log_errTag_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log:errTag", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(54);
	clinit_arc_util_Log$LogLevel(ctx);
	sp[0].o = (jobject)SF_arc_util_Log$LogLevel_err;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"] "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	SM_arc_util_Log_log_arc_util_Log$LogLevel_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log:err", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(58);
	clinit_arc_util_Log$LogLevel(ctx);
	sp[0].o = (jobject)SF_arc_util_Log$LogLevel_err;
	SM_arc_util_Log_log_arc_util_Log$LogLevel_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Log_err_java_lang_Throwable(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log:err", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(62);
	clinit_java_io_StringWriter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_StringWriter);
	init_java_io_StringWriter(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(63);
	clinit_java_io_PrintWriter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_PrintWriter);
	init_java_io_PrintWriter_java_io_Writer(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(64);
	((func_java_lang_Throwable_printStackTrace_java_io_PrintWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Throwable_printStackTrace_java_io_PrintWriter])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(65);
	sp[0].o = (jobject)((func_java_io_StringWriter_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_StringWriter_toString_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log:err", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(69);
	clinit_java_io_StringWriter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_StringWriter);
	init_java_io_StringWriter(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(70);
	clinit_java_io_PrintWriter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_PrintWriter);
	init_java_io_PrintWriter_java_io_Writer(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(71);
	((func_java_lang_Throwable_printStackTrace_java_io_PrintWriter) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Throwable_printStackTrace_java_io_PrintWriter])(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(72);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Log_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log:format", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)SM_arc_util_Log_formatColors_java_lang_String_boolean_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[0].o), (clinit_arc_util_Log(ctx), (jint)SF_arc_util_Log_useColors), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Log_formatColors_java_lang_String_boolean_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0, jbool param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log:formatColors", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(80);
	clinit_arc_util_Log(ctx);
	sp[0].o = (jobject)SF_arc_util_Log_formatter;
	sp[0].o = (jobject)((func_arc_util_Log$LogFormatter_format_java_lang_String_boolean_Array1_java_lang_Object_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_util_Log$LogFormatter, INDEX_arc_util_Log$LogFormatter_format_java_lang_String_boolean_Array1_java_lang_Object_R_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[0].o), (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Log_removeColors_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	return param0;
}

jobject SM_arc_util_Log_addColors_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	return param0;
}

void clinit_arc_util_Log(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log(ctx);
	{
	LINE_NUMBER(7);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	clinit_arc_util_Log(ctx);
	SF_arc_util_Log_empty = sp[0].o;
	LINE_NUMBER(9);
	clinit_arc_util_Log(ctx);
	SF_arc_util_Log_useColors = (jint(1));
	LINE_NUMBER(10);
	clinit_arc_util_Log$LogLevel(ctx);
	sp[0].o = (jobject)SF_arc_util_Log$LogLevel_info;
	clinit_arc_util_Log(ctx);
	SF_arc_util_Log_level = sp[0].o;
	LINE_NUMBER(11);
	clinit_arc_util_Log$DefaultLogHandler(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Log$DefaultLogHandler);
	init_arc_util_Log$DefaultLogHandler(ctx, sp[0].o);
	clinit_arc_util_Log(ctx);
	SF_arc_util_Log_logger = sp[0].o;
	LINE_NUMBER(12);
	clinit_arc_util_Log$DefaultLogFormatter(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Log$DefaultLogFormatter);
	init_arc_util_Log$DefaultLogFormatter(ctx, sp[0].o);
	clinit_arc_util_Log(ctx);
	SF_arc_util_Log_formatter = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Log[] {
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
};

static jclass innerClasses[] {
	&class_arc_util_Log$LogLevel,
	&class_arc_util_Log$LogHandler,
	&class_arc_util_Log$LogFormatter,
	&class_arc_util_Log$DefaultLogHandler,
	&class_arc_util_Log$DefaultLogFormatter,
	&class_arc_util_Log$NoopLogHandler,
};

static FieldMetadata fields[] {
	{ "empty", getArrayClass(&class_java_lang_Object, 1), (intptr_t) &SF_arc_util_Log_empty, "[Ljava/lang/Object;", 26 },
	{ "useColors", &class_boolean, (intptr_t) &SF_arc_util_Log_useColors, "Z", 9 },
	{ "level", &class_arc_util_Log$LogLevel, (intptr_t) &SF_arc_util_Log_level, "Larc/util/Log$LogLevel;", 9 },
	{ "logger", &class_arc_util_Log$LogHandler, (intptr_t) &SF_arc_util_Log_logger, "Larc/util/Log$LogHandler;", 9 },
	{ "formatter", &class_arc_util_Log$LogFormatter, (intptr_t) &SF_arc_util_Log_formatter, "Larc/util/Log$LogFormatter;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Log, 0, "()V", 1 },
	{ "log", (intptr_t) SM_arc_util_Log_log_arc_util_Log$LogLevel_java_lang_String_Array1_java_lang_Object, 0, "(Larc/util/Log$LogLevel;Ljava/lang/String;[Ljava/lang/Object;)V", 137 },
	{ "debug", (intptr_t) SM_arc_util_Log_debug_java_lang_String_Array1_java_lang_Object, 0, "(Ljava/lang/String;[Ljava/lang/Object;)V", 137 },
	{ "debug", (intptr_t) SM_arc_util_Log_debug_java_lang_Object, 0, "(Ljava/lang/Object;)V", 9 },
	{ "infoList", (intptr_t) SM_arc_util_Log_infoList_Array1_java_lang_Object, 0, "([Ljava/lang/Object;)V", 137 },
	{ "infoTag", (intptr_t) SM_arc_util_Log_infoTag_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 9 },
	{ "info", (intptr_t) SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object, 0, "(Ljava/lang/String;[Ljava/lang/Object;)V", 137 },
	{ "info", (intptr_t) SM_arc_util_Log_info_java_lang_Object, 0, "(Ljava/lang/Object;)V", 9 },
	{ "warn", (intptr_t) SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object, 0, "(Ljava/lang/String;[Ljava/lang/Object;)V", 137 },
	{ "errTag", (intptr_t) SM_arc_util_Log_errTag_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 9 },
	{ "err", (intptr_t) SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object, 0, "(Ljava/lang/String;[Ljava/lang/Object;)V", 137 },
	{ "err", (intptr_t) SM_arc_util_Log_err_java_lang_Throwable, 0, "(Ljava/lang/Throwable;)V", 9 },
	{ "err", (intptr_t) SM_arc_util_Log_err_java_lang_String_java_lang_Throwable, 0, "(Ljava/lang/String;Ljava/lang/Throwable;)V", 9 },
	{ "format", (intptr_t) SM_arc_util_Log_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String, 0, "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", 137 },
	{ "formatColors", (intptr_t) SM_arc_util_Log_formatColors_java_lang_String_boolean_Array1_java_lang_Object_R_java_lang_String, 0, "(Ljava/lang/String;Z[Ljava/lang/Object;)Ljava/lang/String;", 137 },
	{ "removeColors", (intptr_t) SM_arc_util_Log_removeColors_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "addColors", (intptr_t) SM_arc_util_Log_addColors_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "<clinit>", (intptr_t) clinit_arc_util_Log, 0, "()V", 8 },
};

Class class_arc_util_Log{
		.nativeName = (intptr_t) "arc/util/Log",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Log),
		.classVtable = (intptr_t) vtable_arc_util_Log,
		.staticInitializer = (intptr_t) clinit_arc_util_Log,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Log,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 6,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Log = registerClass(&class_arc_util_Log);

}
