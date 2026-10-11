#include "arc/util/serialization/JsonWriter.h"
#include "java/math/BigInteger.h"
#include "java/lang/Number.h"
#include "arc/util/serialization/BaseJsonWriter.h"
#include "java/io/Writer.h"
#include "java/lang/Long.h"
#include "arc/util/serialization/JsonWriter.h"
#include "arc/util/serialization/JsonWriter_JsonObject.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "java/lang/IllegalStateException.h"
#include "java/math/BigDecimal.h"
#include "java/lang/Double.h"
#include "arc/util/serialization/JsonWriter_OutputType.h"

extern "C" {


void mark_arc_util_serialization_JsonWriter(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_serialization_JsonWriter *) object;
	if (self->F_writer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_writer)->clazz)->markFunction)((jobject) self->F_writer, mark, depth + 1);
	if (self->F_stack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stack)->clazz)->markFunction)((jobject) self->F_stack, mark, depth + 1);
	if (self->F_current)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_current)->clazz)->markFunction)((jobject) self->F_current, mark, depth + 1);
	if (self->F_outputType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outputType)->clazz)->markFunction)((jobject) self->F_outputType, mark, depth + 1);
}

void clinit_arc_util_serialization_JsonWriter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_Writer(ctx);
}

void init_arc_util_serialization_JsonWriter_java_io_Writer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonWriter:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonWriter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	init_java_io_Writer(ctx, (frame[0].o));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_util_serialization_JsonWriter *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonWriter$OutputType_json;
	((arc_util_serialization_JsonWriter *) NULL_CHECK(sp[0].o))->F_outputType = (jref) sp[1].o;
	LINE_NUMBER(22);
	((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_quoteLongValues = (jint(0));
	LINE_NUMBER(25);
	((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer = (jref) (frame[1].o);
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonWriter_getWriter_R_java_io_Writer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonWriter:getWriter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonWriter_setOutputType_arc_util_serialization_JsonWriter$OutputType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonWriter:setOutputType", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_outputType = (jref) (frame[1].o);
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonWriter_setQuoteLongValues_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonWriter:setQuoteLongValues", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(44);
	((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_quoteLongValues = (frame[1].i);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonWriter:name", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_current;
	if (((jint)((arc_util_serialization_JsonWriter$JsonObject *) NULL_CHECK(sp[0].o))->F_array) == 0) goto label_2;
	}
label_1:;
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Current item must be an object."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_current;
	if (((jint)((arc_util_serialization_JsonWriter$JsonObject *) NULL_CHECK(sp[0].o))->F_needsComma) != 0) goto label_3;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_current;
	((arc_util_serialization_JsonWriter$JsonObject *) NULL_CHECK(sp[0].o))->F_needsComma = (jint(1));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_int])(ctx, sp[0].o, (44));
	}
label_5:;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_outputType;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (frame[1].o));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(55);
	sp[0].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_int])(ctx, sp[0].o, (58));
	LINE_NUMBER(56);
	((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_named = (jint(1));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonWriter_object_R_arc_util_serialization_BaseJsonWriter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonWriter:object", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	M_arc_util_serialization_JsonWriter_requireCommaOrName(ctx, (frame[0].o));
	LINE_NUMBER(63);
	sp[0].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = frame[0].o;
	clinit_arc_util_serialization_JsonWriter$JsonObject(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_util_serialization_JsonWriter$JsonObject);
	init_arc_util_serialization_JsonWriter$JsonObject_arc_util_serialization_JsonWriter_boolean(ctx, sp[2].o, (frame[0].o), (jint(0)));
	((arc_util_serialization_JsonWriter *) NULL_CHECK(sp[1].o))->F_current = (jref) sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[2].o);
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonWriter_array_R_arc_util_serialization_BaseJsonWriter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonWriter:array", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	M_arc_util_serialization_JsonWriter_requireCommaOrName(ctx, (frame[0].o));
	LINE_NUMBER(70);
	sp[0].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = frame[0].o;
	clinit_arc_util_serialization_JsonWriter$JsonObject(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_util_serialization_JsonWriter$JsonObject);
	init_arc_util_serialization_JsonWriter$JsonObject_arc_util_serialization_JsonWriter_boolean(ctx, sp[2].o, (frame[0].o), (jint(1)));
	((arc_util_serialization_JsonWriter *) NULL_CHECK(sp[1].o))->F_current = (jref) sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[2].o);
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonWriter:value", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(76);
	if (((jint)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_quoteLongValues) == 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Long)) != 0) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Double)) != 0) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_math_BigDecimal)) != 0) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_math_BigInteger)) == 0) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(79);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Number)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(80);
	frame[2].o = (checkCast(ctx, &class_java_lang_Number, (frame[1].o)));
	LINE_NUMBER(81);
	jlong temp0 = (jlong)((func_java_lang_Number_longValue_R_long) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Number_longValue_R_long])(ctx, (frame[2].o));
	frame[3].l = temp0;
	LINE_NUMBER(82);
	jdouble temp1 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (frame[2].o));
	if ((doubleCompare(temp1, (jdouble((frame[3].l))), -1)) != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, (frame[3].l));
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(84);
	M_arc_util_serialization_JsonWriter_requireCommaOrName(ctx, (frame[0].o));
	LINE_NUMBER(85);
	sp[0].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_outputType;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, (frame[1].o));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonWriter_requireCommaOrName(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonWriter:requireCommaOrName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_current;
	if (((jint)((arc_util_serialization_JsonWriter$JsonObject *) NULL_CHECK(sp[0].o))->F_array) == 0) goto label_2;
	}
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_current;
	if (((jint)((arc_util_serialization_JsonWriter$JsonObject *) NULL_CHECK(sp[0].o))->F_needsComma) != 0) goto label_4;
	}
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_current;
	((arc_util_serialization_JsonWriter$JsonObject *) NULL_CHECK(sp[0].o))->F_needsComma = (jint(1));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_int])(ctx, sp[0].o, (44));
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(97);
	if (((jint)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_named) != 0) goto label_7;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Name must be set."_j))));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(98);
	((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_named = (jint(0));
	}
label_6:;
	LINE_NUMBER(100);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonWriter_object_java_lang_String_R_arc_util_serialization_BaseJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonWriter:object", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_object_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_object_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonWriter_array_java_lang_String_R_arc_util_serialization_BaseJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonWriter:array", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_array_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_array_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonWriter_set_java_lang_String_java_lang_Object_R_arc_util_serialization_BaseJsonWriter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonWriter:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonWriter_pop_R_arc_util_serialization_BaseJsonWriter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonWriter:pop", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(119);
	if (((jint)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_named) == 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Expected an object, array, or value since a name was set."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, sp[0].o);
	((func_arc_util_serialization_JsonWriter$JsonObject_close) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_util_serialization_JsonWriter$JsonObject, sp[0].o)))->vtable)[VTABLE_arc_util_serialization_JsonWriter$JsonObject_close])(ctx, (checkCast(ctx, &class_arc_util_serialization_JsonWriter$JsonObject, sp[0].o)));
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_stack;
	sp += 1;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_3;
	}
	INST_ACONST_NULL();
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_util_serialization_JsonWriter$JsonObject, sp[0].o);
	sp += 1;
	}
label_4:;
	{
	sp -= 2;
	((arc_util_serialization_JsonWriter *) NULL_CHECK(sp[0].o))->F_current = (jref) sp[1].o;
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonWriter_write_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonWriter:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	((func_java_io_Writer_write_Array1_char_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_Array1_char_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonWriter_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonWriter:flush", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	((func_java_io_Writer_flush) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_flush])(ctx, sp[0].o);
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonWriter_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonWriter:close", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_stack;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonWriter_pop_R_arc_util_serialization_BaseJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonWriter_pop_R_arc_util_serialization_BaseJsonWriter])(ctx, (frame[0].o));
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((arc_util_serialization_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	((func_java_io_Writer_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_close])(ctx, sp[0].o);
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_serialization_JsonWriter[] {
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
	(void *) M_java_io_Writer_append_char_R_java_lang_Appendable,
	(void *) M_java_io_Writer_append_java_lang_CharSequence_R_java_lang_Appendable,
	(void *) M_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable,
	(void *) M_arc_util_serialization_JsonWriter_close,
	(void *) M_arc_util_serialization_JsonWriter_flush,
	(void *) M_java_io_Writer_write_Array1_char,
	(void *) M_arc_util_serialization_JsonWriter_write_Array1_char_int_int,
	(void *) M_java_io_Writer_write_int,
	(void *) M_java_io_Writer_write_java_lang_String,
	(void *) M_java_io_Writer_write_java_lang_String_int_int,
	(void *) M_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer,
	(void *) M_java_io_Writer_append_char_R_java_io_Writer,
	(void *) M_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_io_Writer,
	(void *) M_arc_util_serialization_JsonWriter_setOutputType_arc_util_serialization_JsonWriter$OutputType,
	(void *) M_arc_util_serialization_JsonWriter_setQuoteLongValues_boolean,
	(void *) M_arc_util_serialization_JsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter,
	(void *) M_arc_util_serialization_JsonWriter_object_R_arc_util_serialization_BaseJsonWriter,
	(void *) M_arc_util_serialization_JsonWriter_array_R_arc_util_serialization_BaseJsonWriter,
	(void *) M_arc_util_serialization_JsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter,
	(void *) M_arc_util_serialization_JsonWriter_object_java_lang_String_R_arc_util_serialization_BaseJsonWriter,
	(void *) M_arc_util_serialization_JsonWriter_array_java_lang_String_R_arc_util_serialization_BaseJsonWriter,
	(void *) M_arc_util_serialization_JsonWriter_set_java_lang_String_java_lang_Object_R_arc_util_serialization_BaseJsonWriter,
	(void *) M_arc_util_serialization_JsonWriter_pop_R_arc_util_serialization_BaseJsonWriter,
	(void *) M_arc_util_serialization_JsonWriter_getWriter_R_java_io_Writer,
	(void *) M_arc_util_serialization_JsonWriter_requireCommaOrName,
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
	{ "getWriter", "()Ljava/io/Writer;" },
	{ "requireCommaOrName", "()V" },
};

static jclass interfaces[] { &class_arc_util_serialization_BaseJsonWriter, };

static jclass innerClasses[] {
	&class_arc_util_serialization_JsonWriter$OutputType,
	&class_arc_util_serialization_JsonWriter$JsonObject,
};

static FieldMetadata fields[] {
	{ "writer", &class_java_io_Writer, offsetof(arc_util_serialization_JsonWriter, F_writer), "Ljava/io/Writer;", 16 },
	{ "stack", &class_arc_struct_Seq, offsetof(arc_util_serialization_JsonWriter, F_stack), "Larc/struct/Seq;", 18 },
	{ "current", &class_arc_util_serialization_JsonWriter$JsonObject, offsetof(arc_util_serialization_JsonWriter, F_current), "Larc/util/serialization/JsonWriter$JsonObject;", 2 },
	{ "named", &class_boolean, offsetof(arc_util_serialization_JsonWriter, F_named), "Z", 2 },
	{ "outputType", &class_arc_util_serialization_JsonWriter$OutputType, offsetof(arc_util_serialization_JsonWriter, F_outputType), "Larc/util/serialization/JsonWriter$OutputType;", 2 },
	{ "quoteLongValues", &class_boolean, offsetof(arc_util_serialization_JsonWriter, F_quoteLongValues), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_serialization_JsonWriter_java_io_Writer, 0, "(Ljava/io/Writer;)V", 1 },
	{ "getWriter", (intptr_t) M_arc_util_serialization_JsonWriter_getWriter_R_java_io_Writer, VTABLE_arc_util_serialization_JsonWriter_getWriter_R_java_io_Writer, "()Ljava/io/Writer;", 1 },
	{ "setOutputType", (intptr_t) M_arc_util_serialization_JsonWriter_setOutputType_arc_util_serialization_JsonWriter$OutputType, VTABLE_arc_util_serialization_JsonWriter_setOutputType_arc_util_serialization_JsonWriter$OutputType, "(Larc/util/serialization/JsonWriter$OutputType;)V", 1 },
	{ "setQuoteLongValues", (intptr_t) M_arc_util_serialization_JsonWriter_setQuoteLongValues_boolean, VTABLE_arc_util_serialization_JsonWriter_setQuoteLongValues_boolean, "(Z)V", 1 },
	{ "name", (intptr_t) M_arc_util_serialization_JsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter, VTABLE_arc_util_serialization_JsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter, "(Ljava/lang/String;)Larc/util/serialization/BaseJsonWriter;", 1 },
	{ "object", (intptr_t) M_arc_util_serialization_JsonWriter_object_R_arc_util_serialization_BaseJsonWriter, VTABLE_arc_util_serialization_JsonWriter_object_R_arc_util_serialization_BaseJsonWriter, "()Larc/util/serialization/BaseJsonWriter;", 1 },
	{ "array", (intptr_t) M_arc_util_serialization_JsonWriter_array_R_arc_util_serialization_BaseJsonWriter, VTABLE_arc_util_serialization_JsonWriter_array_R_arc_util_serialization_BaseJsonWriter, "()Larc/util/serialization/BaseJsonWriter;", 1 },
	{ "value", (intptr_t) M_arc_util_serialization_JsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter, VTABLE_arc_util_serialization_JsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter, "(Ljava/lang/Object;)Larc/util/serialization/BaseJsonWriter;", 1 },
	{ "requireCommaOrName", (intptr_t) M_arc_util_serialization_JsonWriter_requireCommaOrName, VTABLE_arc_util_serialization_JsonWriter_requireCommaOrName, "()V", 2 },
	{ "object", (intptr_t) M_arc_util_serialization_JsonWriter_object_java_lang_String_R_arc_util_serialization_BaseJsonWriter, VTABLE_arc_util_serialization_JsonWriter_object_java_lang_String_R_arc_util_serialization_BaseJsonWriter, "(Ljava/lang/String;)Larc/util/serialization/BaseJsonWriter;", 1 },
	{ "array", (intptr_t) M_arc_util_serialization_JsonWriter_array_java_lang_String_R_arc_util_serialization_BaseJsonWriter, VTABLE_arc_util_serialization_JsonWriter_array_java_lang_String_R_arc_util_serialization_BaseJsonWriter, "(Ljava/lang/String;)Larc/util/serialization/BaseJsonWriter;", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_JsonWriter_set_java_lang_String_java_lang_Object_R_arc_util_serialization_BaseJsonWriter, VTABLE_arc_util_serialization_JsonWriter_set_java_lang_String_java_lang_Object_R_arc_util_serialization_BaseJsonWriter, "(Ljava/lang/String;Ljava/lang/Object;)Larc/util/serialization/BaseJsonWriter;", 1 },
	{ "pop", (intptr_t) M_arc_util_serialization_JsonWriter_pop_R_arc_util_serialization_BaseJsonWriter, VTABLE_arc_util_serialization_JsonWriter_pop_R_arc_util_serialization_BaseJsonWriter, "()Larc/util/serialization/BaseJsonWriter;", 1 },
	{ "write", (intptr_t) M_arc_util_serialization_JsonWriter_write_Array1_char_int_int, VTABLE_arc_util_serialization_JsonWriter_write_Array1_char_int_int, "([CII)V", 1 },
	{ "flush", (intptr_t) M_arc_util_serialization_JsonWriter_flush, VTABLE_arc_util_serialization_JsonWriter_flush, "()V", 1 },
	{ "close", (intptr_t) M_arc_util_serialization_JsonWriter_close, VTABLE_arc_util_serialization_JsonWriter_close, "()V", 1 },
};

Class class_arc_util_serialization_JsonWriter{
		.nativeName = (intptr_t) "arc/util/serialization/JsonWriter",
		.parentClass = (intptr_t) &class_java_io_Writer,
		.size = sizeof(arc_util_serialization_JsonWriter),
		.classVtable = (intptr_t) vtable_arc_util_serialization_JsonWriter,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_JsonWriter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_JsonWriter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 36,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_JsonWriter = registerClass(&class_arc_util_serialization_JsonWriter);

}
