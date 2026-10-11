#include "arc/util/serialization/UBJsonWriter.h"
#include "java/lang/Integer.h"
#include "java/nio/charset/Charset.h"
#include "java/lang/Boolean.h"
#include "java/lang/Float.h"
#include "java/io/DataOutput.h"
#include "java/lang/Short.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "arc/util/serialization/UBJsonWriter_JsonObject.h"
#include "arc/struct/Seq.h"
#include "java/io/IOException.h"
#include "java/io/Closeable.h"
#include "java/lang/Number.h"
#include "java/lang/Byte.h"
#include "arc/util/serialization/BaseJsonWriter.h"
#include "java/lang/AutoCloseable.h"
#include "arc/util/serialization/UBJsonWriter.h"
#include "java/lang/Long.h"
#include "java/io/OutputStream.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "arc/util/serialization/JsonValue.h"
#include "java/io/DataOutputStream.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/Double.h"
#include "arc/util/serialization/JsonWriter_OutputType.h"

extern "C" {


void mark_arc_util_serialization_UBJsonWriter(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_serialization_UBJsonWriter *) object;
	if (self->F_out)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_out)->clazz)->markFunction)((jobject) self->F_out, mark, depth + 1);
	if (self->F_stack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stack)->clazz)->markFunction)((jobject) self->F_stack, mark, depth + 1);
	if (self->F_current)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_current)->clazz)->markFunction)((jobject) self->F_current, mark, depth + 1);
}

void clinit_arc_util_serialization_UBJsonWriter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_serialization_UBJsonWriter_java_io_OutputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_UBJsonWriter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(22);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_util_serialization_UBJsonWriter *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(23);
	if ((isInstance(ctx, (frame[1].o), &class_java_io_DataOutputStream)) != 0) goto label_3;
	}
	{
	clinit_java_io_DataOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataOutputStream);
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[0].o, (frame[1].o));
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(24);
	((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out = (jref) (checkCast(ctx, &class_java_io_DataOutputStream, (frame[1].o)));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_UBJsonWriter_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(29);
	((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_current = (jref) (jobject(nullptr));
	LINE_NUMBER(30);
	((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_named = (jint(0));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_object_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:object", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_current;
	if (((jint)((arc_util_serialization_UBJsonWriter$JsonObject *) NULL_CHECK(sp[0].o))->F_array) != 0) goto label_1;
	}
	{
	LINE_NUMBER(41);
	if (((jint)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_named) != 0) goto label_4;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Name must be set."_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(42);
	((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_named = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = frame[0].o;
	clinit_arc_util_serialization_UBJsonWriter$JsonObject(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_util_serialization_UBJsonWriter$JsonObject);
	init_arc_util_serialization_UBJsonWriter$JsonObject_arc_util_serialization_UBJsonWriter_boolean(ctx, sp[2].o, (frame[0].o), (jint(0)));
	((arc_util_serialization_UBJsonWriter *) NULL_CHECK(sp[1].o))->F_current = (jref) sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[2].o);
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_object_java_lang_String_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:object", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_object_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_object_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o);
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:array", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_current;
	if (((jint)((arc_util_serialization_UBJsonWriter$JsonObject *) NULL_CHECK(sp[0].o))->F_array) != 0) goto label_1;
	}
	{
	LINE_NUMBER(67);
	if (((jint)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_named) != 0) goto label_4;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Name must be set."_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(68);
	((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_named = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = frame[0].o;
	clinit_arc_util_serialization_UBJsonWriter$JsonObject(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_util_serialization_UBJsonWriter$JsonObject);
	init_arc_util_serialization_UBJsonWriter$JsonObject_arc_util_serialization_UBJsonWriter_boolean(ctx, sp[2].o, (frame[0].o), (jint(1)));
	((arc_util_serialization_UBJsonWriter *) NULL_CHECK(sp[1].o))->F_current = (jref) sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[2].o);
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_array_java_lang_String_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:array", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o);
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:name", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_current;
	if (((jint)((arc_util_serialization_UBJsonWriter$JsonObject *) NULL_CHECK(sp[0].o))->F_array) == 0) goto label_2;
	}
label_1:;
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Current item must be an object."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(92);
	sp[0].o = frame[1].o;
	clinit_arc_util_Strings(ctx);
	sp[1].o = (jobject)SF_arc_util_Strings_utf8;
	sp[0].o = (jobject)((func_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(93);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) > (127)) goto label_4;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (105));
	LINE_NUMBER(95);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(96);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) > (32767)) goto label_8;
	}
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (73));
	LINE_NUMBER(98);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (108));
	LINE_NUMBER(101);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	}
label_7:;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_write_Array1_byte])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(104);
	((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_named = (jint(1));
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_value_byte_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:value", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(113);
	M_arc_util_serialization_UBJsonWriter_checkName(ctx, (frame[0].o));
	LINE_NUMBER(114);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (105));
	LINE_NUMBER(115);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_value_short_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:value", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(124);
	M_arc_util_serialization_UBJsonWriter_checkName(ctx, (frame[0].o));
	LINE_NUMBER(125);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (73));
	LINE_NUMBER(126);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:value", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(135);
	M_arc_util_serialization_UBJsonWriter_checkName(ctx, (frame[0].o));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (108));
	LINE_NUMBER(137);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_value_long_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:value", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(146);
	M_arc_util_serialization_UBJsonWriter_checkName(ctx, (frame[0].o));
	LINE_NUMBER(147);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (76));
	LINE_NUMBER(148);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeLong_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeLong_long])(ctx, sp[0].o, (frame[1].l));
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_value_float_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:value", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(157);
	M_arc_util_serialization_UBJsonWriter_checkName(ctx, (frame[0].o));
	LINE_NUMBER(158);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (100));
	LINE_NUMBER(159);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeFloat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeFloat_float])(ctx, sp[0].o, (frame[1].f));
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_value_double_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:value", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(169);
	M_arc_util_serialization_UBJsonWriter_checkName(ctx, (frame[0].o));
	LINE_NUMBER(170);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (68));
	LINE_NUMBER(171);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeDouble_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeDouble_double])(ctx, sp[0].o, (frame[1].d));
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_value_boolean_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:value", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(181);
	M_arc_util_serialization_UBJsonWriter_checkName(ctx, (frame[0].o));
	LINE_NUMBER(182);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	sp += 1;
	if ((frame[1].i) == 0) goto label_2;
	}
	INST_BIPUSH(84);
	goto label_3;
label_2:;
	INST_BIPUSH(70);
label_3:;
	{
	sp -= 2;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_value_char_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:value", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(192);
	M_arc_util_serialization_UBJsonWriter_checkName(ctx, (frame[0].o));
	LINE_NUMBER(193);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (73));
	LINE_NUMBER(194);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeChar_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeChar_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_value_java_lang_String_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:value", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(203);
	M_arc_util_serialization_UBJsonWriter_checkName(ctx, (frame[0].o));
	LINE_NUMBER(204);
	sp[0].o = frame[1].o;
	clinit_arc_util_Strings(ctx);
	sp[1].o = (jobject)SF_arc_util_Strings_utf8;
	sp[0].o = (jobject)((func_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(205);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (83));
	LINE_NUMBER(206);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) > (127)) goto label_4;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (105));
	LINE_NUMBER(208);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(209);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) > (32767)) goto label_8;
	}
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (73));
	LINE_NUMBER(211);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (108));
	LINE_NUMBER(214);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	}
label_7:;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_write_Array1_byte])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(217);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_value_Array1_byte_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:value", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o));
	LINE_NUMBER(227);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (36));
	LINE_NUMBER(228);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (105));
	LINE_NUMBER(229);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (35));
	LINE_NUMBER(230);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(231);
	frame[2].i = (jint(0));
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_7:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[2].i))));
	LINE_NUMBER(231);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_pop_boolean_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_pop_boolean_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_value_Array1_short_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:value", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o));
	LINE_NUMBER(245);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (36));
	LINE_NUMBER(246);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (73));
	LINE_NUMBER(247);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (35));
	LINE_NUMBER(248);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(249);
	frame[2].i = (jint(0));
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_7:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jshort, (frame[1].o), (frame[2].i))));
	LINE_NUMBER(249);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_pop_boolean_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_pop_boolean_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_value_Array1_int_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:value", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o));
	LINE_NUMBER(263);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (36));
	LINE_NUMBER(264);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (108));
	LINE_NUMBER(265);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (35));
	LINE_NUMBER(266);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(267);
	frame[2].i = (jint(0));
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_7:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[2].i))));
	LINE_NUMBER(267);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_pop_boolean_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_pop_boolean_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_value_Array1_long_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:value", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o));
	LINE_NUMBER(281);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (36));
	LINE_NUMBER(282);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (76));
	LINE_NUMBER(283);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (35));
	LINE_NUMBER(284);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(285);
	frame[2].i = (jint(0));
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_7:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeLong_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeLong_long])(ctx, sp[0].o, ((jlong)ARRAY_ACCESS(jlong, (frame[1].o), (frame[2].i))));
	LINE_NUMBER(285);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_pop_boolean_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_pop_boolean_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_value_Array1_float_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:value", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o));
	LINE_NUMBER(299);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (36));
	LINE_NUMBER(300);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (100));
	LINE_NUMBER(301);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (35));
	LINE_NUMBER(302);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(303);
	frame[2].i = (jint(0));
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_7:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeFloat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeFloat_float])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[2].i))));
	LINE_NUMBER(303);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_pop_boolean_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_pop_boolean_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_value_Array1_double_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:value", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o));
	LINE_NUMBER(318);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (36));
	LINE_NUMBER(319);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (68));
	LINE_NUMBER(320);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (35));
	LINE_NUMBER(321);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(322);
	frame[2].i = (jint(0));
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_7:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(323);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeDouble_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeDouble_double])(ctx, sp[0].o, ((jdouble)ARRAY_ACCESS(jdouble, (frame[1].o), (frame[2].i))));
	LINE_NUMBER(322);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_pop_boolean_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_pop_boolean_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(326);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_value_Array1_boolean_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:value", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o));
	LINE_NUMBER(335);
	frame[2].i = (jint(0));
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_3:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	sp += 1;
	if (((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[2].i))) == 0) goto label_6;
	}
	INST_BIPUSH(84);
	goto label_7;
label_6:;
	INST_BIPUSH(70);
label_7:;
	{
	sp -= 2;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(335);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(338);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_pop_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_pop_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o));
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_value_Array1_char_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:value", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(348);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o));
	LINE_NUMBER(349);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (36));
	LINE_NUMBER(350);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (67));
	LINE_NUMBER(351);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (35));
	LINE_NUMBER(352);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(353);
	frame[2].i = (jint(0));
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_7:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeChar_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeChar_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[2].i))));
	LINE_NUMBER(353);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(356);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_pop_boolean_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_pop_boolean_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(357);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_value_Array1_java_lang_String_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:value", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o));
	LINE_NUMBER(367);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (36));
	LINE_NUMBER(368);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (83));
	LINE_NUMBER(369);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (35));
	LINE_NUMBER(370);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(371);
	frame[2].i = (jint(0));
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_7:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i));
	clinit_arc_util_Strings(ctx);
	sp[1].o = (jobject)SF_arc_util_Strings_utf8;
	sp[0].o = (jobject)((func_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(373);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) > (127)) goto label_11;
	}
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (105));
	LINE_NUMBER(375);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(376);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) > (32767)) goto label_15;
	}
	{
	LINE_NUMBER(377);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (73));
	LINE_NUMBER(378);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (108));
	LINE_NUMBER(381);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	}
label_14:;
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_write_Array1_byte])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(371);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(385);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_pop_boolean_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_pop_boolean_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(386);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_value_arc_util_serialization_JsonValue_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:value", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(394);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_name;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(396);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_name;
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_object_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_object_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, sp[1].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_object_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_object_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(399);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	frame[2].o = sp[0].o;
	}
label_6:;
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_7;
	{
	LINE_NUMBER(400);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_arc_util_serialization_JsonValue_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_arc_util_serialization_JsonValue_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(399);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_pop_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_pop_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o));
	goto label_10;
	}
label_1:;
	{
	LINE_NUMBER(402);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_name;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(404);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_name;
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_array_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_array_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, sp[1].o);
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o));
	}
label_15:;
	{
	LINE_NUMBER(407);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	frame[2].o = sp[0].o;
	}
label_16:;
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_17;
	{
	LINE_NUMBER(408);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_arc_util_serialization_JsonValue_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_arc_util_serialization_JsonValue_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(407);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(409);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_pop_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_pop_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o));
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(410);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isBoolean_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(411);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_name;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_name;
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, sp[1].o);
	}
label_22:;
	{
	LINE_NUMBER(412);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asBoolean_R_boolean])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_boolean_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_boolean_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, temp0);
	goto label_10;
	}
label_20:;
	{
	LINE_NUMBER(413);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isDouble_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isDouble_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_23;
	}
	{
	LINE_NUMBER(414);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_name;
	if (sp[0].o == nullptr) goto label_25;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_name;
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, sp[1].o);
	}
label_25:;
	{
	LINE_NUMBER(415);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)((func_arc_util_serialization_JsonValue_asDouble_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asDouble_R_double])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_double_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_double_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, temp0);
	goto label_10;
	}
label_23:;
	{
	LINE_NUMBER(416);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isLong_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isLong_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(417);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_name;
	if (sp[0].o == nullptr) goto label_28;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_name;
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, sp[1].o);
	}
label_28:;
	{
	LINE_NUMBER(418);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((func_arc_util_serialization_JsonValue_asLong_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asLong_R_long])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_long_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_long_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, temp0);
	goto label_10;
	}
label_26:;
	{
	LINE_NUMBER(419);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_name;
	if (sp[0].o == nullptr) goto label_31;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_name;
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, sp[1].o);
	}
label_31:;
	{
	LINE_NUMBER(421);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, sp[1].o);
	goto label_10;
	}
label_29:;
	{
	LINE_NUMBER(422);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isNull_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_32;
	}
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_name;
	if (sp[0].o == nullptr) goto label_34;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_name;
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, sp[1].o);
	}
label_34:;
	{
	LINE_NUMBER(424);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o));
	goto label_10;
	}
label_32:;
	{
	LINE_NUMBER(426);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unhandled JsonValue type"_j))));
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(428);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_value_java_lang_Object_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:value", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(438);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(439);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(440);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Number)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(441);
	frame[2].o = (checkCast(ctx, &class_java_lang_Number, (frame[1].o)));
	LINE_NUMBER(442);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Byte)) == 0) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Number_byteValue_R_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Number_byteValue_R_byte])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_byte_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_byte_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(443);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Short)) == 0) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Number_shortValue_R_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Number_shortValue_R_short])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_short_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_short_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(444);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Integer)) == 0) goto label_8;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Number_intValue_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Number_intValue_R_int])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(445);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Long)) == 0) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((func_java_lang_Number_longValue_R_long) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Number_longValue_R_long])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_long_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_long_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(446);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Float)) == 0) goto label_10;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_java_lang_Number_floatValue_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Number_floatValue_R_float])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_float_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_float_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(447);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Double)) == 0) goto label_11;
	}
	{
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_double_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_double_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	LINE_NUMBER(448);
	goto label_12;
label_3:;
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Character)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(449);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Character_charValue_R_char) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Character, (frame[1].o))))->vtable)[VTABLE_java_lang_Character_charValue_R_char])(ctx, (checkCast(ctx, &class_java_lang_Character, (frame[1].o))));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_char_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_char_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(450);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_CharSequence)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(451);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(452);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Boolean)) == 0) goto label_17;
	}
	{
	LINE_NUMBER(453);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[1].o))))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[1].o))));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_boolean_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_boolean_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(455);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unknown object type."_j))));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(457);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_value_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:value", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(465);
	M_arc_util_serialization_UBJsonWriter_checkName(ctx, (frame[0].o));
	LINE_NUMBER(466);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (90));
	LINE_NUMBER(467);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_UBJsonWriter_setOutputType_arc_util_serialization_JsonWriter$OutputType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:setOutputType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(473);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_serialization_UBJsonWriter_setQuoteLongValues_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:setQuoteLongValues", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(478);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_set_java_lang_String_java_lang_Object_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(486);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_java_lang_Object_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_java_lang_Object_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_set_java_lang_String_byte_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(495);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_byte_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_byte_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_set_java_lang_String_short_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0, jshort param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(503);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_short_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_short_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_set_java_lang_String_int_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(511);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_set_java_lang_String_long_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(519);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_long_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_long_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, (frame[2].l));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_set_java_lang_String_float_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(527);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_float_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_float_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_set_java_lang_String_double_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(535);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_double_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_double_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, (frame[2].d));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_set_java_lang_String_boolean_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(543);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_boolean_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_boolean_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_set_java_lang_String_char_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(551);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_char_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_char_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_set_java_lang_String_java_lang_String_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(559);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_byte_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(567);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_Array1_byte_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_Array1_byte_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_short_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(575);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_Array1_short_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_Array1_short_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_int_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(583);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_Array1_int_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_Array1_int_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_long_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(591);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_Array1_long_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_Array1_long_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_float_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(599);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_Array1_float_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_Array1_float_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_double_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(607);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_Array1_double_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_Array1_double_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_boolean_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(615);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_Array1_boolean_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_Array1_boolean_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_char_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(623);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_Array1_char_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_Array1_char_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_java_lang_String_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(631);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_Array1_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_Array1_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_set_java_lang_String_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(639);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_R_arc_util_serialization_UBJsonWriter])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_UBJsonWriter_checkName(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:checkName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(643);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(644);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_current;
	if (((jint)((arc_util_serialization_UBJsonWriter$JsonObject *) NULL_CHECK(sp[0].o))->F_array) != 0) goto label_1;
	}
	{
	LINE_NUMBER(645);
	if (((jint)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_named) != 0) goto label_4;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Name must be set."_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(646);
	((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_named = (jint(0));
	}
label_1:;
	LINE_NUMBER(649);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_pop_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:pop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(657);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_pop_boolean_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_pop_boolean_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_pop_boolean_R_arc_util_serialization_UBJsonWriter(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:pop", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(661);
	if (((jint)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_named) == 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Expected an object, array, or value since a name was set."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(662);
	if ((frame[1].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(663);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, sp[0].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(665);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, sp[0].o);
	((func_arc_util_serialization_UBJsonWriter$JsonObject_close) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_util_serialization_UBJsonWriter$JsonObject, sp[0].o)))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter$JsonObject_close])(ctx, (checkCast(ctx, &class_arc_util_serialization_UBJsonWriter$JsonObject, sp[0].o)));
	}
label_4:;
	{
	LINE_NUMBER(666);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_stack;
	sp += 1;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_5;
	}
	INST_ACONST_NULL();
	goto label_6;
label_5:;
	{
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_util_serialization_UBJsonWriter$JsonObject, sp[0].o);
	sp += 1;
	}
label_6:;
	{
	sp -= 2;
	((arc_util_serialization_UBJsonWriter *) NULL_CHECK(sp[0].o))->F_current = (jref) sp[1].o;
	LINE_NUMBER(667);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_UBJsonWriter_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:flush", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(672);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_flush) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_flush])(ctx, sp[0].o);
	LINE_NUMBER(673);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_UBJsonWriter_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:close", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(678);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_stack;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(679);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_pop_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_pop_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o));
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(680);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, sp[0].o);
	LINE_NUMBER(681);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_pop_R_arc_util_serialization_BaseJsonWriter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:pop", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_pop_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_pop_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_set_java_lang_String_java_lang_Object_R_arc_util_serialization_BaseJsonWriter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_set_java_lang_String_java_lang_Object_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_set_java_lang_String_java_lang_Object_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_array_java_lang_String_R_arc_util_serialization_BaseJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:array", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_array_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_array_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_object_java_lang_String_R_arc_util_serialization_BaseJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:object", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_object_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_object_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:value", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_value_java_lang_Object_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_value_java_lang_Object_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_BaseJsonWriter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:array", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_object_R_arc_util_serialization_BaseJsonWriter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:object", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_object_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_object_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter:name", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((func_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_serialization_UBJsonWriter[] {
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
	(void *) M_arc_util_serialization_UBJsonWriter_close,
	(void *) M_arc_util_serialization_UBJsonWriter_setOutputType_arc_util_serialization_JsonWriter$OutputType,
	(void *) M_arc_util_serialization_UBJsonWriter_setQuoteLongValues_boolean,
	(void *) M_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_object_R_arc_util_serialization_BaseJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_BaseJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_object_java_lang_String_R_arc_util_serialization_BaseJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_array_java_lang_String_R_arc_util_serialization_BaseJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_java_lang_Object_R_arc_util_serialization_BaseJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_pop_R_arc_util_serialization_BaseJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_reset,
	(void *) M_arc_util_serialization_UBJsonWriter_object_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_object_java_lang_String_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_array_java_lang_String_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_value_byte_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_value_short_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_value_long_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_value_float_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_value_double_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_value_boolean_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_value_char_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_value_java_lang_String_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_value_Array1_byte_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_value_Array1_short_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_value_Array1_int_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_value_Array1_long_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_value_Array1_float_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_value_Array1_double_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_value_Array1_boolean_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_value_Array1_char_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_value_Array1_java_lang_String_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_value_arc_util_serialization_JsonValue_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_value_java_lang_Object_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_value_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_java_lang_Object_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_byte_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_short_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_int_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_long_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_float_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_double_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_boolean_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_char_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_java_lang_String_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_byte_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_short_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_int_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_long_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_float_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_double_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_boolean_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_char_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_java_lang_String_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_checkName,
	(void *) M_arc_util_serialization_UBJsonWriter_pop_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_pop_boolean_R_arc_util_serialization_UBJsonWriter,
	(void *) M_arc_util_serialization_UBJsonWriter_flush,
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
	{ "setOutputType", "(Larc/util/serialization/JsonWriter$OutputType;)V" },
	{ "setQuoteLongValues", "(Z)V" },
	{ "name", "(Ljava/lang/String;)Larc/util/serialization/BaseJsonWriter;" },
	{ "object", "()Larc/util/serialization/BaseJsonWriter;" },
	{ "array", "()Larc/util/serialization/BaseJsonWriter;" },
	{ "value", "(Ljava/lang/Object;)Larc/util/serialization/BaseJsonWriter;" },
	{ "object", "(Ljava/lang/String;)Larc/util/serialization/BaseJsonWriter;" },
	{ "array", "(Ljava/lang/String;)Larc/util/serialization/BaseJsonWriter;" },
	{ "set", "(Ljava/lang/String;Ljava/lang/Object;)Larc/util/serialization/BaseJsonWriter;" },
	{ "pop", "()Larc/util/serialization/BaseJsonWriter;" },
	{ "reset", "()V" },
	{ "object", "()Larc/util/serialization/UBJsonWriter;" },
	{ "object", "(Ljava/lang/String;)Larc/util/serialization/UBJsonWriter;" },
	{ "array", "()Larc/util/serialization/UBJsonWriter;" },
	{ "array", "(Ljava/lang/String;)Larc/util/serialization/UBJsonWriter;" },
	{ "name", "(Ljava/lang/String;)Larc/util/serialization/UBJsonWriter;" },
	{ "value", "(B)Larc/util/serialization/UBJsonWriter;" },
	{ "value", "(S)Larc/util/serialization/UBJsonWriter;" },
	{ "value", "(I)Larc/util/serialization/UBJsonWriter;" },
	{ "value", "(J)Larc/util/serialization/UBJsonWriter;" },
	{ "value", "(F)Larc/util/serialization/UBJsonWriter;" },
	{ "value", "(D)Larc/util/serialization/UBJsonWriter;" },
	{ "value", "(Z)Larc/util/serialization/UBJsonWriter;" },
	{ "value", "(C)Larc/util/serialization/UBJsonWriter;" },
	{ "value", "(Ljava/lang/String;)Larc/util/serialization/UBJsonWriter;" },
	{ "value", "([B)Larc/util/serialization/UBJsonWriter;" },
	{ "value", "([S)Larc/util/serialization/UBJsonWriter;" },
	{ "value", "([I)Larc/util/serialization/UBJsonWriter;" },
	{ "value", "([J)Larc/util/serialization/UBJsonWriter;" },
	{ "value", "([F)Larc/util/serialization/UBJsonWriter;" },
	{ "value", "([D)Larc/util/serialization/UBJsonWriter;" },
	{ "value", "([Z)Larc/util/serialization/UBJsonWriter;" },
	{ "value", "([C)Larc/util/serialization/UBJsonWriter;" },
	{ "value", "([Ljava/lang/String;)Larc/util/serialization/UBJsonWriter;" },
	{ "value", "(Larc/util/serialization/JsonValue;)Larc/util/serialization/UBJsonWriter;" },
	{ "value", "(Ljava/lang/Object;)Larc/util/serialization/UBJsonWriter;" },
	{ "value", "()Larc/util/serialization/UBJsonWriter;" },
	{ "set", "(Ljava/lang/String;Ljava/lang/Object;)Larc/util/serialization/UBJsonWriter;" },
	{ "set", "(Ljava/lang/String;B)Larc/util/serialization/UBJsonWriter;" },
	{ "set", "(Ljava/lang/String;S)Larc/util/serialization/UBJsonWriter;" },
	{ "set", "(Ljava/lang/String;I)Larc/util/serialization/UBJsonWriter;" },
	{ "set", "(Ljava/lang/String;J)Larc/util/serialization/UBJsonWriter;" },
	{ "set", "(Ljava/lang/String;F)Larc/util/serialization/UBJsonWriter;" },
	{ "set", "(Ljava/lang/String;D)Larc/util/serialization/UBJsonWriter;" },
	{ "set", "(Ljava/lang/String;Z)Larc/util/serialization/UBJsonWriter;" },
	{ "set", "(Ljava/lang/String;C)Larc/util/serialization/UBJsonWriter;" },
	{ "set", "(Ljava/lang/String;Ljava/lang/String;)Larc/util/serialization/UBJsonWriter;" },
	{ "set", "(Ljava/lang/String;[B)Larc/util/serialization/UBJsonWriter;" },
	{ "set", "(Ljava/lang/String;[S)Larc/util/serialization/UBJsonWriter;" },
	{ "set", "(Ljava/lang/String;[I)Larc/util/serialization/UBJsonWriter;" },
	{ "set", "(Ljava/lang/String;[J)Larc/util/serialization/UBJsonWriter;" },
	{ "set", "(Ljava/lang/String;[F)Larc/util/serialization/UBJsonWriter;" },
	{ "set", "(Ljava/lang/String;[D)Larc/util/serialization/UBJsonWriter;" },
	{ "set", "(Ljava/lang/String;[Z)Larc/util/serialization/UBJsonWriter;" },
	{ "set", "(Ljava/lang/String;[C)Larc/util/serialization/UBJsonWriter;" },
	{ "set", "(Ljava/lang/String;[Ljava/lang/String;)Larc/util/serialization/UBJsonWriter;" },
	{ "set", "(Ljava/lang/String;)Larc/util/serialization/UBJsonWriter;" },
	{ "checkName", "()V" },
	{ "pop", "()Larc/util/serialization/UBJsonWriter;" },
	{ "pop", "(Z)Larc/util/serialization/UBJsonWriter;" },
	{ "flush", "()V" },
};

static jclass interfaces[] { &class_java_io_Closeable, &class_arc_util_serialization_BaseJsonWriter, };

static jclass innerClasses[] {
	&class_arc_util_serialization_UBJsonWriter$JsonObject,
};

static FieldMetadata fields[] {
	{ "out", &class_java_io_DataOutputStream, offsetof(arc_util_serialization_UBJsonWriter, F_out), "Ljava/io/DataOutputStream;", 16 },
	{ "stack", &class_arc_struct_Seq, offsetof(arc_util_serialization_UBJsonWriter, F_stack), "Larc/struct/Seq;", 18 },
	{ "current", &class_arc_util_serialization_UBJsonWriter$JsonObject, offsetof(arc_util_serialization_UBJsonWriter, F_current), "Larc/util/serialization/UBJsonWriter$JsonObject;", 2 },
	{ "named", &class_boolean, offsetof(arc_util_serialization_UBJsonWriter, F_named), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_serialization_UBJsonWriter_java_io_OutputStream, 0, "(Ljava/io/OutputStream;)V", 1 },
	{ "reset", (intptr_t) M_arc_util_serialization_UBJsonWriter_reset, VTABLE_arc_util_serialization_UBJsonWriter_reset, "()V", 1 },
	{ "object", (intptr_t) M_arc_util_serialization_UBJsonWriter_object_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_object_R_arc_util_serialization_UBJsonWriter, "()Larc/util/serialization/UBJsonWriter;", 1 },
	{ "object", (intptr_t) M_arc_util_serialization_UBJsonWriter_object_java_lang_String_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_object_java_lang_String_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "array", (intptr_t) M_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_UBJsonWriter, "()Larc/util/serialization/UBJsonWriter;", 1 },
	{ "array", (intptr_t) M_arc_util_serialization_UBJsonWriter_array_java_lang_String_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_array_java_lang_String_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "name", (intptr_t) M_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "value", (intptr_t) M_arc_util_serialization_UBJsonWriter_value_byte_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_value_byte_R_arc_util_serialization_UBJsonWriter, "(B)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "value", (intptr_t) M_arc_util_serialization_UBJsonWriter_value_short_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_value_short_R_arc_util_serialization_UBJsonWriter, "(S)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "value", (intptr_t) M_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_value_int_R_arc_util_serialization_UBJsonWriter, "(I)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "value", (intptr_t) M_arc_util_serialization_UBJsonWriter_value_long_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_value_long_R_arc_util_serialization_UBJsonWriter, "(J)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "value", (intptr_t) M_arc_util_serialization_UBJsonWriter_value_float_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_value_float_R_arc_util_serialization_UBJsonWriter, "(F)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "value", (intptr_t) M_arc_util_serialization_UBJsonWriter_value_double_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_value_double_R_arc_util_serialization_UBJsonWriter, "(D)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "value", (intptr_t) M_arc_util_serialization_UBJsonWriter_value_boolean_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_value_boolean_R_arc_util_serialization_UBJsonWriter, "(Z)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "value", (intptr_t) M_arc_util_serialization_UBJsonWriter_value_char_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_value_char_R_arc_util_serialization_UBJsonWriter, "(C)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "value", (intptr_t) M_arc_util_serialization_UBJsonWriter_value_java_lang_String_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_value_java_lang_String_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "value", (intptr_t) M_arc_util_serialization_UBJsonWriter_value_Array1_byte_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_value_Array1_byte_R_arc_util_serialization_UBJsonWriter, "([B)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "value", (intptr_t) M_arc_util_serialization_UBJsonWriter_value_Array1_short_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_value_Array1_short_R_arc_util_serialization_UBJsonWriter, "([S)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "value", (intptr_t) M_arc_util_serialization_UBJsonWriter_value_Array1_int_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_value_Array1_int_R_arc_util_serialization_UBJsonWriter, "([I)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "value", (intptr_t) M_arc_util_serialization_UBJsonWriter_value_Array1_long_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_value_Array1_long_R_arc_util_serialization_UBJsonWriter, "([J)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "value", (intptr_t) M_arc_util_serialization_UBJsonWriter_value_Array1_float_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_value_Array1_float_R_arc_util_serialization_UBJsonWriter, "([F)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "value", (intptr_t) M_arc_util_serialization_UBJsonWriter_value_Array1_double_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_value_Array1_double_R_arc_util_serialization_UBJsonWriter, "([D)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "value", (intptr_t) M_arc_util_serialization_UBJsonWriter_value_Array1_boolean_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_value_Array1_boolean_R_arc_util_serialization_UBJsonWriter, "([Z)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "value", (intptr_t) M_arc_util_serialization_UBJsonWriter_value_Array1_char_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_value_Array1_char_R_arc_util_serialization_UBJsonWriter, "([C)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "value", (intptr_t) M_arc_util_serialization_UBJsonWriter_value_Array1_java_lang_String_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_value_Array1_java_lang_String_R_arc_util_serialization_UBJsonWriter, "([Ljava/lang/String;)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "value", (intptr_t) M_arc_util_serialization_UBJsonWriter_value_arc_util_serialization_JsonValue_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_value_arc_util_serialization_JsonValue_R_arc_util_serialization_UBJsonWriter, "(Larc/util/serialization/JsonValue;)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "value", (intptr_t) M_arc_util_serialization_UBJsonWriter_value_java_lang_Object_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_value_java_lang_Object_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/Object;)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "value", (intptr_t) M_arc_util_serialization_UBJsonWriter_value_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_value_R_arc_util_serialization_UBJsonWriter, "()Larc/util/serialization/UBJsonWriter;", 1 },
	{ "setOutputType", (intptr_t) M_arc_util_serialization_UBJsonWriter_setOutputType_arc_util_serialization_JsonWriter$OutputType, VTABLE_arc_util_serialization_UBJsonWriter_setOutputType_arc_util_serialization_JsonWriter$OutputType, "(Larc/util/serialization/JsonWriter$OutputType;)V", 1 },
	{ "setQuoteLongValues", (intptr_t) M_arc_util_serialization_UBJsonWriter_setQuoteLongValues_boolean, VTABLE_arc_util_serialization_UBJsonWriter_setQuoteLongValues_boolean, "(Z)V", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_java_lang_Object_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_set_java_lang_String_java_lang_Object_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;Ljava/lang/Object;)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_byte_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_set_java_lang_String_byte_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;B)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_short_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_set_java_lang_String_short_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;S)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_int_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_set_java_lang_String_int_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;I)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_long_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_set_java_lang_String_long_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;J)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_float_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_set_java_lang_String_float_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;F)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_double_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_set_java_lang_String_double_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;D)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_boolean_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_set_java_lang_String_boolean_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;Z)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_char_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_set_java_lang_String_char_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;C)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_java_lang_String_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_set_java_lang_String_java_lang_String_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;Ljava/lang/String;)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_byte_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_byte_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;[B)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_short_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_short_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;[S)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_int_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_int_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;[I)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_long_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_long_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;[J)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_float_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_float_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;[F)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_double_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_double_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;[D)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_boolean_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_boolean_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;[Z)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_char_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_char_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;[C)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_java_lang_String_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_set_java_lang_String_Array1_java_lang_String_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;[Ljava/lang/String;)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_set_java_lang_String_R_arc_util_serialization_UBJsonWriter, "(Ljava/lang/String;)Larc/util/serialization/UBJsonWriter;", 1 },
	{ "checkName", (intptr_t) M_arc_util_serialization_UBJsonWriter_checkName, VTABLE_arc_util_serialization_UBJsonWriter_checkName, "()V", 2 },
	{ "pop", (intptr_t) M_arc_util_serialization_UBJsonWriter_pop_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_pop_R_arc_util_serialization_UBJsonWriter, "()Larc/util/serialization/UBJsonWriter;", 1 },
	{ "pop", (intptr_t) M_arc_util_serialization_UBJsonWriter_pop_boolean_R_arc_util_serialization_UBJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_pop_boolean_R_arc_util_serialization_UBJsonWriter, "(Z)Larc/util/serialization/UBJsonWriter;", 4 },
	{ "flush", (intptr_t) M_arc_util_serialization_UBJsonWriter_flush, VTABLE_arc_util_serialization_UBJsonWriter_flush, "()V", 1 },
	{ "close", (intptr_t) M_arc_util_serialization_UBJsonWriter_close, VTABLE_arc_util_serialization_UBJsonWriter_close, "()V", 1 },
	{ "pop", (intptr_t) M_arc_util_serialization_UBJsonWriter_pop_R_arc_util_serialization_BaseJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_pop_R_arc_util_serialization_BaseJsonWriter, "()Larc/util/serialization/BaseJsonWriter;", 4161 },
	{ "set", (intptr_t) M_arc_util_serialization_UBJsonWriter_set_java_lang_String_java_lang_Object_R_arc_util_serialization_BaseJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_set_java_lang_String_java_lang_Object_R_arc_util_serialization_BaseJsonWriter, "(Ljava/lang/String;Ljava/lang/Object;)Larc/util/serialization/BaseJsonWriter;", 4161 },
	{ "array", (intptr_t) M_arc_util_serialization_UBJsonWriter_array_java_lang_String_R_arc_util_serialization_BaseJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_array_java_lang_String_R_arc_util_serialization_BaseJsonWriter, "(Ljava/lang/String;)Larc/util/serialization/BaseJsonWriter;", 4161 },
	{ "object", (intptr_t) M_arc_util_serialization_UBJsonWriter_object_java_lang_String_R_arc_util_serialization_BaseJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_object_java_lang_String_R_arc_util_serialization_BaseJsonWriter, "(Ljava/lang/String;)Larc/util/serialization/BaseJsonWriter;", 4161 },
	{ "value", (intptr_t) M_arc_util_serialization_UBJsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter, "(Ljava/lang/Object;)Larc/util/serialization/BaseJsonWriter;", 4161 },
	{ "array", (intptr_t) M_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_BaseJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_array_R_arc_util_serialization_BaseJsonWriter, "()Larc/util/serialization/BaseJsonWriter;", 4161 },
	{ "object", (intptr_t) M_arc_util_serialization_UBJsonWriter_object_R_arc_util_serialization_BaseJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_object_R_arc_util_serialization_BaseJsonWriter, "()Larc/util/serialization/BaseJsonWriter;", 4161 },
	{ "name", (intptr_t) M_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter, VTABLE_arc_util_serialization_UBJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter, "(Ljava/lang/String;)Larc/util/serialization/BaseJsonWriter;", 4161 },
};

Class class_arc_util_serialization_UBJsonWriter{
		.nativeName = (intptr_t) "arc/util/serialization/UBJsonWriter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_serialization_UBJsonWriter),
		.classVtable = (intptr_t) vtable_arc_util_serialization_UBJsonWriter,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_UBJsonWriter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_UBJsonWriter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 63,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 73,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_UBJsonWriter = registerClass(&class_arc_util_serialization_UBJsonWriter);

}
