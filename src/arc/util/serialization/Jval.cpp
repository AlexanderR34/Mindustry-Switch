#include "arc/util/serialization/Jval.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/lang/Boolean.h"
#include "arc/util/serialization/Jval_Jformat.h"
#include "arc/util/serialization/Jval_JsonMap.h"
#include "java/io/Writer.h"
#include "java/lang/Float.h"
#include "arc/struct/ArrayMap.h"
#include "java/lang/reflect/Constructor.h"
#include "java/io/InputStream.h"
#include "java/lang/Short.h"
#include "arc/util/serialization/Jval_Jwriter.h"
#include "java/lang/String.h"
#include "java/io/InputStreamReader.h"
#include "java/lang/NullPointerException.h"
#include "arc/struct/Seq.h"
#include "java/io/IOException.h"
#include "java/lang/reflect/Method.h"
#include "arc/util/serialization/Jval_JsonParseException.h"
#include "arc/util/serialization/Jval_Hwriter.h"
#include "java/io/Reader.h"
#include "java/io/StringWriter.h"
#include "java/lang/Throwable.h"
#include "java/lang/reflect/Field.h"
#include "arc/util/serialization/Jval_Jtype.h"
#include "arc/util/serialization/Jval.h"
#include "java/lang/Number.h"
#include "java/lang/Byte.h"
#include "java/lang/annotation/Annotation.h"
#include "java/io/ByteArrayInputStream.h"
#include "arc/util/serialization/Jval_Hparser.h"
#include "java/lang/Long.h"
#include "arc/util/Nullable.h"
#include "java/lang/Enum.h"
#include "java/lang/Object.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/util/serialization/Jval_WritingBuffer.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "arc/util/serialization/Jval_JsonArray.h"
#include "java/lang/Double.h"

extern "C" {

jobject SF_arc_util_serialization_Jval_TRUE;
jobject SF_arc_util_serialization_Jval_FALSE;
jobject SF_arc_util_serialization_Jval_NULL;

void mark_arc_util_serialization_Jval(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_serialization_Jval_TRUE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_Jval_TRUE)->clazz)->markFunction)((jobject) SF_arc_util_serialization_Jval_TRUE, mark, depth + 1);
		if (SF_arc_util_serialization_Jval_FALSE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_Jval_FALSE)->clazz)->markFunction)((jobject) SF_arc_util_serialization_Jval_FALSE, mark, depth + 1);
		if (SF_arc_util_serialization_Jval_NULL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_Jval_NULL)->clazz)->markFunction)((jobject) SF_arc_util_serialization_Jval_NULL, mark, depth + 1);
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
	auto self = (arc_util_serialization_Jval *) object;
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
}

void init_arc_util_serialization_Jval_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[1].o);
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Jval_newObject_R_arc_util_serialization_Jval(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:newObject", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval(ctx);
	{
	LINE_NUMBER(25);
	clinit_arc_util_serialization_Jval(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	clinit_arc_util_serialization_Jval$JsonMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_serialization_Jval$JsonMap);
	init_arc_util_serialization_Jval$JsonMap(ctx, sp[1].o);
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Jval_newArray_R_arc_util_serialization_Jval(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:newArray", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval(ctx);
	{
	LINE_NUMBER(29);
	clinit_arc_util_serialization_Jval(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	clinit_arc_util_serialization_Jval$JsonArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_serialization_Jval$JsonArray);
	init_arc_util_serialization_Jval$JsonArray(ctx, sp[1].o);
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Jval_read_java_io_Reader_R_arc_util_serialization_Jval(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:read", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(44);
	clinit_arc_util_serialization_Jval$Hparser(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval$Hparser);
	init_arc_util_serialization_Jval$Hparser_java_io_Reader(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Jval$Hparser_parse_R_arc_util_serialization_Jval) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval$Hparser_parse_R_arc_util_serialization_Jval])(ctx, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(45);
	frame[1].o = sp[0].o;
	LINE_NUMBER(46);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Jval_read_Array1_byte_R_arc_util_serialization_Jval(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:read", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(52);
	clinit_arc_util_serialization_Jval$Hparser(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval$Hparser);
	clinit_java_io_InputStreamReader(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	clinit_java_io_ByteArrayInputStream(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_io_ByteArrayInputStream);
	init_java_io_ByteArrayInputStream_Array1_byte(ctx, sp[2].o, (frame[0].o));
	init_java_io_InputStreamReader_java_io_InputStream(ctx, sp[1].o, sp[2].o);
	init_arc_util_serialization_Jval$Hparser_java_io_Reader(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval$Hparser_parse_R_arc_util_serialization_Jval) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval$Hparser_parse_R_arc_util_serialization_Jval])(ctx, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(53);
	frame[1].o = sp[0].o;
	LINE_NUMBER(54);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Jval_read_java_lang_String_R_arc_util_serialization_Jval(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:read", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(64);
	clinit_arc_util_serialization_Jval$Hparser(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval$Hparser);
	init_arc_util_serialization_Jval$Hparser_java_lang_String(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Jval$Hparser_parse_R_arc_util_serialization_Jval) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval$Hparser_parse_R_arc_util_serialization_Jval])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval_getType_R_arc_util_serialization_Jval$Jtype(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if (sp[0].o != nullptr) goto label_1;
	}
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	(sp++)->o = SF_arc_util_serialization_Jval$Jtype_nil;
	goto label_2;
label_1:;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Number)) == 0) goto label_3;
	}
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	(sp++)->o = SF_arc_util_serialization_Jval$Jtype_number;
	goto label_2;
label_3:;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_String)) == 0) goto label_4;
	}
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	(sp++)->o = SF_arc_util_serialization_Jval$Jtype_string;
	goto label_2;
label_4:;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Boolean)) == 0) goto label_5;
	}
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	(sp++)->o = SF_arc_util_serialization_Jval$Jtype_bool;
	goto label_2;
label_5:;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_arc_util_serialization_Jval$JsonMap)) == 0) goto label_6;
	}
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	(sp++)->o = SF_arc_util_serialization_Jval$Jtype_object;
	goto label_2;
label_6:;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_arc_util_serialization_Jval$JsonArray)) == 0) goto label_7;
	}
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	(sp++)->o = SF_arc_util_serialization_Jval$Jtype_array;
	goto label_2;
label_7:;
	INST_ACONST_NULL();
label_2:;
	LINE_NUMBER(68);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Jval_valueOf_int_R_arc_util_serialization_Jval(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:valueOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(76);
	clinit_arc_util_serialization_Jval(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[0].i));
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Jval_valueOf_long_R_arc_util_serialization_Jval(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:valueOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(77);
	clinit_arc_util_serialization_Jval(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	sp[1].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, (frame[0].l));
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Jval_valueOf_float_R_arc_util_serialization_Jval(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:valueOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(78);
	clinit_arc_util_serialization_Jval(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	sp[1].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (frame[0].f));
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Jval_valueOf_double_R_arc_util_serialization_Jval(jcontext ctx, jdouble param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:valueOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(79);
	clinit_arc_util_serialization_Jval(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	sp[1].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (frame[0].d));
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Jval_valueOf_java_lang_String_R_arc_util_serialization_Jval(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:valueOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(80);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	clinit_arc_util_serialization_Jval(ctx);
	(sp++)->o = SF_arc_util_serialization_Jval_NULL;
	goto label_2;
label_1:;
	{
	clinit_arc_util_serialization_Jval(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[0].o, (frame[0].o));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Jval_valueOf_boolean_R_arc_util_serialization_Jval(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:valueOf", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(81);
	if ((frame[0].i) == 0) goto label_1;
	}
	clinit_arc_util_serialization_Jval(ctx);
	(sp++)->o = SF_arc_util_serialization_Jval_TRUE;
	goto label_2;
label_1:;
	clinit_arc_util_serialization_Jval(ctx);
	(sp++)->o = SF_arc_util_serialization_Jval_FALSE;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_Jval_isObject_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:isObject", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_arc_util_serialization_Jval$JsonMap));
	}

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_Jval_isArray_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:isArray", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_arc_util_serialization_Jval$JsonArray));
	}

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_Jval_isNumber_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:isNumber", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_java_lang_Number));
	}

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_Jval_isString_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:isString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_java_lang_String));
	}

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_Jval_isBoolean_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:isBoolean", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_java_lang_Boolean));
	}

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_Jval_isTrue_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:isTrue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TRUE;
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

jbool M_arc_util_serialization_Jval_isFalse_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:isFalse", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_FALSE;
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

jbool M_arc_util_serialization_Jval_isNull_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:isNull", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
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

jobject M_arc_util_serialization_Jval_asObject_R_arc_util_serialization_Jval$JsonMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:asObject", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_arc_util_serialization_Jval$JsonMap)) != 0) goto label_1;
	}
	{
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Not an object: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_util_serialization_Jval$JsonMap, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:asArray", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_arc_util_serialization_Jval$JsonArray)) != 0) goto label_1;
	}
	{
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Not an array: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_util_serialization_Jval$JsonArray, sp[0].o));
	}

	popStackFrame(ctx);
}

jbyte M_arc_util_serialization_Jval_asByte_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:asByte", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Number)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)((func_java_lang_Number_byteValue_R_byte) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, sp[0].o)))->vtable)[VTABLE_java_lang_Number_byteValue_R_byte])(ctx, (checkCast(ctx, &class_java_lang_Number, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_String)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)SM_java_lang_Byte_parseByte_java_lang_String_R_byte(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(101);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Not a number: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jshort M_arc_util_serialization_Jval_asShort_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:asShort", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Number)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)((func_java_lang_Number_shortValue_R_short) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, sp[0].o)))->vtable)[VTABLE_java_lang_Number_shortValue_R_short])(ctx, (checkCast(ctx, &class_java_lang_Number, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_String)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)SM_java_lang_Short_parseShort_java_lang_String_R_short(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(111);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Not a number: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_arc_util_serialization_Jval_asInt_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:asInt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Number)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)((func_java_lang_Number_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, sp[0].o)))->vtable)[VTABLE_java_lang_Number_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Number, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_String)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(121);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Not a number: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jlong M_arc_util_serialization_Jval_asLong_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:asLong", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Number)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	jlong temp0 = (jlong)((func_java_lang_Number_longValue_R_long) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, sp[0].o)))->vtable)[VTABLE_java_lang_Number_longValue_R_long])(ctx, (checkCast(ctx, &class_java_lang_Number, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_String)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_R_long(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(131);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Not a number: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jfloat M_arc_util_serialization_Jval_asFloat_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:asFloat", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Number)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	jfloat temp0 = (jfloat)((func_java_lang_Number_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, sp[0].o)))->vtable)[VTABLE_java_lang_Number_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Number, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_String)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(141);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Not a number: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jdouble M_arc_util_serialization_Jval_asDouble_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:asDouble", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Number)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, sp[0].o)))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_String)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(151);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Not a number: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval_asString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:asString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_String)) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Number)) != 0) goto label_1;
	}
	{
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Not a string: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_Jval_asBool_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:asBool", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Boolean)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[0].o)))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_String)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)SM_java_lang_Boolean_parseBoolean_java_lang_String_R_boolean(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(166);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Not a bool: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(170);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name is null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_asObject_R_arc_util_serialization_Jval$JsonMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_asObject_R_arc_util_serialization_Jval$JsonMap])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Jval$JsonMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval$JsonMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_util_serialization_Jval, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Jval_add_java_lang_String_arc_util_serialization_Jval(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(175);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name is null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_asObject_R_arc_util_serialization_Jval$JsonMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_asObject_R_arc_util_serialization_Jval$JsonMap])(ctx, (frame[0].o));
	sp[1].o = frame[1].o;
	sp += 2;
	if ((frame[2].o) != nullptr) goto label_2;
	}
	clinit_arc_util_serialization_Jval(ctx);
	(sp++)->o = SF_arc_util_serialization_Jval_NULL;
	goto label_3;
label_2:;
	INST_ALOAD(2);
label_3:;
	{
	sp -= 3;
	jint temp0 = (jint)((func_arc_util_serialization_Jval$JsonMap_put_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval$JsonMap_put_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Jval_add_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(180);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_arc_util_serialization_Jval_valueOf_java_lang_String_R_arc_util_serialization_Jval(ctx, (frame[2].o));
	((func_arc_util_serialization_Jval_add_java_lang_String_arc_util_serialization_Jval) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval_add_java_lang_String_arc_util_serialization_Jval])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval_add_arc_util_serialization_Jval_R_arc_util_serialization_Jval(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Jval$JsonArray_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval$JsonArray_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval_add_java_lang_String_R_arc_util_serialization_Jval(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray])(ctx, (frame[0].o));
	clinit_arc_util_serialization_Jval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Jval$JsonArray_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval$JsonArray_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval_add_java_lang_Number_R_arc_util_serialization_Jval(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray])(ctx, (frame[0].o));
	clinit_arc_util_serialization_Jval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Jval$JsonArray_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval$JsonArray_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval_add_boolean_R_arc_util_serialization_Jval(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray])(ctx, (frame[0].o));
	clinit_arc_util_serialization_Jval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (frame[1].i));
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval$JsonArray_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval$JsonArray_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval_put_java_lang_String_arc_util_serialization_Jval_R_arc_util_serialization_Jval(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:put", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(204);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	((func_arc_util_serialization_Jval_add_java_lang_String_arc_util_serialization_Jval) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_add_java_lang_String_arc_util_serialization_Jval])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	}
label_1:;
	{
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval_put_java_lang_String_java_lang_String_R_arc_util_serialization_Jval(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:put", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(209);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	((func_arc_util_serialization_Jval_add_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_add_java_lang_String_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	}
label_1:;
	{
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval_put_java_lang_String_java_lang_Number_R_arc_util_serialization_Jval(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(214);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_util_serialization_Jval(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[2].o, (frame[2].o));
	((func_arc_util_serialization_Jval_add_java_lang_String_arc_util_serialization_Jval) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval_add_java_lang_String_arc_util_serialization_Jval])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	{
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval_put_java_lang_String_boolean_R_arc_util_serialization_Jval(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(219);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_util_serialization_Jval(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	sp[3].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (frame[2].i));
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[2].o, sp[3].o);
	((func_arc_util_serialization_Jval_add_java_lang_String_arc_util_serialization_Jval) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval_add_java_lang_String_arc_util_serialization_Jval])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval_remove_java_lang_String_R_arc_util_serialization_Jval(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(224);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name is null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_asObject_R_arc_util_serialization_Jval$JsonMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_asObject_R_arc_util_serialization_Jval$JsonMap])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Jval$JsonMap_removeKey_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval$JsonMap_removeKey_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_util_serialization_Jval, sp[0].o));
	}

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_Jval_has_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:has", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(229);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name is null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_asObject_R_arc_util_serialization_Jval$JsonMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_asObject_R_arc_util_serialization_Jval$JsonMap])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_util_serialization_Jval$JsonMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval$JsonMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_util_serialization_Jval_getInt_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:getInt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(235);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_Jval_asInt_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_Jval_asInt_R_int])(ctx, (frame[3].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ILOAD(2);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jlong M_arc_util_serialization_Jval_getLong_java_lang_String_long_R_long(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:getLong", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval])(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(240);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	jlong temp0 = (jlong)((func_arc_util_serialization_Jval_asLong_R_long) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_Jval_asLong_R_long])(ctx, (frame[4].o));
	sp[0].l = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_LLOAD(2);
label_3:;
	popStackFrame(ctx);
	INST_LRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_util_serialization_Jval_getFloat_java_lang_String_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:getFloat", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(245);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jfloat temp0 = (jfloat)((func_arc_util_serialization_Jval_asFloat_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_Jval_asFloat_R_float])(ctx, (frame[3].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_FLOAD(2);
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jdouble M_arc_util_serialization_Jval_getDouble_java_lang_String_double_R_double(jcontext ctx, jobject self, jobject param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:getDouble", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval])(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(250);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	jdouble temp0 = (jdouble)((func_arc_util_serialization_Jval_asDouble_R_double) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_Jval_asDouble_R_double])(ctx, (frame[4].o));
	sp[0].d = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_DLOAD(2);
label_3:;
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_Jval_getBool_java_lang_String_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:getBool", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(255);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_Jval_asBool_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_Jval_asBool_R_boolean])(ctx, (frame[3].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ILOAD(2);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:getString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval_getString_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:getString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(264);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_Jval_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_Jval_isNull_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_Jval_asString_R_java_lang_String])(ctx, (frame[3].o));
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(2);
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_arc_util_serialization_Jval_writeTo_java_io_Writer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:writeTo", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(277);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_util_serialization_Jval$Jformat(ctx);
	sp[2].o = (jobject)SF_arc_util_serialization_Jval$Jformat_plain;
	((func_arc_util_serialization_Jval_writeTo_java_io_Writer_arc_util_serialization_Jval$Jformat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval_writeTo_java_io_Writer_arc_util_serialization_Jval$Jformat])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Jval_writeTo_java_io_Writer_arc_util_serialization_Jval$Jformat(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:writeTo", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(290);
	clinit_arc_util_serialization_Jval$WritingBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval$WritingBuffer);
	init_arc_util_serialization_Jval$WritingBuffer_java_io_Writer_int(ctx, sp[0].o, (frame[1].o), (128));
	frame[3].o = sp[0].o;
	LINE_NUMBER(291);
	jint temp0 = (jint)((func_arc_util_serialization_Jval$Jformat_ordinal_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_Jval$Jformat_ordinal_R_int])(ctx, (frame[2].o));
	switch(temp0) {
		case 0: goto label_2;
		case 1: goto label_3;
		case 2: goto label_4;
		case 3: goto label_5;
		default: goto label_6;
	}
	}
label_2:;
	{
	LINE_NUMBER(293);
	SM_arc_util_serialization_Jval$Jwriter_save_arc_util_serialization_Jval_boolean_boolean_java_io_Writer_int(ctx, (frame[0].o), (jint(0)), (jint(1)), (frame[3].o), (jint(0)));
	LINE_NUMBER(294);
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(296);
	SM_arc_util_serialization_Jval$Jwriter_save_arc_util_serialization_Jval_boolean_boolean_java_io_Writer_int(ctx, (frame[0].o), (jint(0)), (jint(0)), (frame[3].o), (jint(0)));
	LINE_NUMBER(297);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(299);
	SM_arc_util_serialization_Jval$Jwriter_save_arc_util_serialization_Jval_boolean_boolean_java_io_Writer_int(ctx, (frame[0].o), (jint(1)), (jint(1)), (frame[3].o), (jint(0)));
	LINE_NUMBER(300);
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(302);
	SM_arc_util_serialization_Jval$Hwriter_save_arc_util_serialization_Jval_java_io_Writer_int_java_lang_String_boolean(ctx, (frame[0].o), (frame[3].o), (jint(-1)), (((jobject) createStringLiteral(ctx, u8""_j))), (jint(1)));
	}
label_6:;
	{
	LINE_NUMBER(305);
	((func_arc_util_serialization_Jval$WritingBuffer_flush) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_Jval$WritingBuffer_flush])(ctx, (frame[3].o));
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(311);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_getType_R_arc_util_serialization_Jval$Jtype) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_getType_R_arc_util_serialization_Jval$Jtype])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(312);
	jint temp0 = (jint)((func_arc_util_serialization_Jval$Jtype_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Jval$Jtype_ordinal_R_int])(ctx, (frame[1].o));
	switch(temp0) {
		case 0: goto label_2;
		case 1: goto label_3;
		case 2: goto label_4;
		case 3: goto label_4;
		case 4: goto label_2;
		case 5: goto label_5;
		default: goto label_4;
	}
	}
label_5:;
	{
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"null"_j)));
	}
label_3:;
	{
	LINE_NUMBER(315);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(316);
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8".0"_j))));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - (jint(2))));
	frame[2].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, (frame[2].o), (69), (101));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(323);
	sp[0].o = frame[0].o;
	clinit_arc_util_serialization_Jval$Jformat(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_Jval$Jformat_plain;
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_toString_arc_util_serialization_Jval$Jformat_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval_toString_arc_util_serialization_Jval$Jformat_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Jval_toString_arc_util_serialization_Jval$Jformat_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(332);
	clinit_java_io_StringWriter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_StringWriter);
	init_java_io_StringWriter(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(334);
	((func_arc_util_serialization_Jval_writeTo_java_io_Writer_arc_util_serialization_Jval$Jformat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_writeTo_java_io_Writer_arc_util_serialization_Jval$Jformat])(ctx, (frame[0].o), (frame[2].o), (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(338);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(335);
	frame[3].o = sp[0].o;
	LINE_NUMBER(337);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(339);
	sp[0].o = (jobject)((func_java_io_StringWriter_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_StringWriter_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_Jval_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(344);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((checkCast(ctx, &class_arc_util_serialization_Jval, (frame[1].o)))))->F_value;
	if (sp[0].o == nullptr) goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((checkCast(ctx, &class_arc_util_serialization_Jval, (frame[1].o)))))->F_value;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((frame[0].o)))->F_value;
	sp[1].o = (jobject)((arc_util_serialization_Jval *) NULL_CHECK((checkCast(ctx, &class_arc_util_serialization_Jval, (frame[1].o)))))->F_value;
	LINE_NUMBER(346);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
label_3:;
	INST_ICONST(1);
	goto label_5;
label_1:;
	INST_ICONST(0);
label_5:;
	LINE_NUMBER(344);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void clinit_arc_util_serialization_Jval(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval(ctx);
	{
	LINE_NUMBER(13);
	clinit_arc_util_serialization_Jval(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	sp[1].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_serialization_Jval(ctx);
	SF_arc_util_serialization_Jval_TRUE = sp[0].o;
	LINE_NUMBER(14);
	clinit_arc_util_serialization_Jval(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	sp[1].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_serialization_Jval(ctx);
	SF_arc_util_serialization_Jval_FALSE = sp[0].o;
	LINE_NUMBER(15);
	clinit_arc_util_serialization_Jval(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval);
	init_arc_util_serialization_Jval_java_lang_Object(ctx, sp[0].o, (jobject(nullptr)));
	clinit_arc_util_serialization_Jval(ctx);
	SF_arc_util_serialization_Jval_NULL = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_util_serialization_Jval;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field value
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getString
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[48]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_util_serialization_Jval[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_arc_util_serialization_Jval_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_util_serialization_Jval_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_util_serialization_Jval_getType_R_arc_util_serialization_Jval$Jtype,
	(void *) M_arc_util_serialization_Jval_isObject_R_boolean,
	(void *) M_arc_util_serialization_Jval_isArray_R_boolean,
	(void *) M_arc_util_serialization_Jval_isNumber_R_boolean,
	(void *) M_arc_util_serialization_Jval_isString_R_boolean,
	(void *) M_arc_util_serialization_Jval_isBoolean_R_boolean,
	(void *) M_arc_util_serialization_Jval_isTrue_R_boolean,
	(void *) M_arc_util_serialization_Jval_isFalse_R_boolean,
	(void *) M_arc_util_serialization_Jval_isNull_R_boolean,
	(void *) M_arc_util_serialization_Jval_asObject_R_arc_util_serialization_Jval$JsonMap,
	(void *) M_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray,
	(void *) M_arc_util_serialization_Jval_asByte_R_byte,
	(void *) M_arc_util_serialization_Jval_asShort_R_short,
	(void *) M_arc_util_serialization_Jval_asInt_R_int,
	(void *) M_arc_util_serialization_Jval_asLong_R_long,
	(void *) M_arc_util_serialization_Jval_asFloat_R_float,
	(void *) M_arc_util_serialization_Jval_asDouble_R_double,
	(void *) M_arc_util_serialization_Jval_asString_R_java_lang_String,
	(void *) M_arc_util_serialization_Jval_asBool_R_boolean,
	(void *) M_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval,
	(void *) M_arc_util_serialization_Jval_add_java_lang_String_arc_util_serialization_Jval,
	(void *) M_arc_util_serialization_Jval_add_java_lang_String_java_lang_String,
	(void *) M_arc_util_serialization_Jval_add_arc_util_serialization_Jval_R_arc_util_serialization_Jval,
	(void *) M_arc_util_serialization_Jval_add_java_lang_String_R_arc_util_serialization_Jval,
	(void *) M_arc_util_serialization_Jval_add_java_lang_Number_R_arc_util_serialization_Jval,
	(void *) M_arc_util_serialization_Jval_add_boolean_R_arc_util_serialization_Jval,
	(void *) M_arc_util_serialization_Jval_put_java_lang_String_arc_util_serialization_Jval_R_arc_util_serialization_Jval,
	(void *) M_arc_util_serialization_Jval_put_java_lang_String_java_lang_String_R_arc_util_serialization_Jval,
	(void *) M_arc_util_serialization_Jval_put_java_lang_String_java_lang_Number_R_arc_util_serialization_Jval,
	(void *) M_arc_util_serialization_Jval_put_java_lang_String_boolean_R_arc_util_serialization_Jval,
	(void *) M_arc_util_serialization_Jval_remove_java_lang_String_R_arc_util_serialization_Jval,
	(void *) M_arc_util_serialization_Jval_has_java_lang_String_R_boolean,
	(void *) M_arc_util_serialization_Jval_getInt_java_lang_String_int_R_int,
	(void *) M_arc_util_serialization_Jval_getLong_java_lang_String_long_R_long,
	(void *) M_arc_util_serialization_Jval_getFloat_java_lang_String_float_R_float,
	(void *) M_arc_util_serialization_Jval_getDouble_java_lang_String_double_R_double,
	(void *) M_arc_util_serialization_Jval_getBool_java_lang_String_boolean_R_boolean,
	(void *) M_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String,
	(void *) M_arc_util_serialization_Jval_getString_java_lang_String_java_lang_String_R_java_lang_String,
	(void *) M_arc_util_serialization_Jval_writeTo_java_io_Writer,
	(void *) M_arc_util_serialization_Jval_writeTo_java_io_Writer_arc_util_serialization_Jval$Jformat,
	(void *) M_arc_util_serialization_Jval_toString_arc_util_serialization_Jval$Jformat_R_java_lang_String,
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
	{ "getType", "()Larc/util/serialization/Jval$Jtype;" },
	{ "isObject", "()Z" },
	{ "isArray", "()Z" },
	{ "isNumber", "()Z" },
	{ "isString", "()Z" },
	{ "isBoolean", "()Z" },
	{ "isTrue", "()Z" },
	{ "isFalse", "()Z" },
	{ "isNull", "()Z" },
	{ "asObject", "()Larc/util/serialization/Jval$JsonMap;" },
	{ "asArray", "()Larc/util/serialization/Jval$JsonArray;" },
	{ "asByte", "()B" },
	{ "asShort", "()S" },
	{ "asInt", "()I" },
	{ "asLong", "()J" },
	{ "asFloat", "()F" },
	{ "asDouble", "()D" },
	{ "asString", "()Ljava/lang/String;" },
	{ "asBool", "()Z" },
	{ "get", "(Ljava/lang/String;)Larc/util/serialization/Jval;" },
	{ "add", "(Ljava/lang/String;Larc/util/serialization/Jval;)V" },
	{ "add", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "add", "(Larc/util/serialization/Jval;)Larc/util/serialization/Jval;" },
	{ "add", "(Ljava/lang/String;)Larc/util/serialization/Jval;" },
	{ "add", "(Ljava/lang/Number;)Larc/util/serialization/Jval;" },
	{ "add", "(Z)Larc/util/serialization/Jval;" },
	{ "put", "(Ljava/lang/String;Larc/util/serialization/Jval;)Larc/util/serialization/Jval;" },
	{ "put", "(Ljava/lang/String;Ljava/lang/String;)Larc/util/serialization/Jval;" },
	{ "put", "(Ljava/lang/String;Ljava/lang/Number;)Larc/util/serialization/Jval;" },
	{ "put", "(Ljava/lang/String;Z)Larc/util/serialization/Jval;" },
	{ "remove", "(Ljava/lang/String;)Larc/util/serialization/Jval;" },
	{ "has", "(Ljava/lang/String;)Z" },
	{ "getInt", "(Ljava/lang/String;I)I" },
	{ "getLong", "(Ljava/lang/String;J)J" },
	{ "getFloat", "(Ljava/lang/String;F)F" },
	{ "getDouble", "(Ljava/lang/String;D)D" },
	{ "getBool", "(Ljava/lang/String;Z)Z" },
	{ "getString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "getString", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;" },
	{ "writeTo", "(Ljava/io/Writer;)V" },
	{ "writeTo", "(Ljava/io/Writer;Larc/util/serialization/Jval$Jformat;)V" },
	{ "toString", "(Larc/util/serialization/Jval$Jformat;)Ljava/lang/String;" },
};

static jclass innerClasses[] {
	&class_arc_util_serialization_Jval$JsonMap,
	&class_arc_util_serialization_Jval$JsonArray,
	&class_arc_util_serialization_Jval$Hparser,
	&class_arc_util_serialization_Jval$Jtype,
	&class_arc_util_serialization_Jval$Jformat,
	&class_arc_util_serialization_Jval$WritingBuffer,
	&class_arc_util_serialization_Jval$Jwriter,
	&class_arc_util_serialization_Jval$Hwriter,
	&class_arc_util_serialization_Jval$JsonParseException,
};

static FieldMetadata fields[] {
	{ "TRUE", &class_arc_util_serialization_Jval, (intptr_t) &SF_arc_util_serialization_Jval_TRUE, "Larc/util/serialization/Jval;", 25 },
	{ "FALSE", &class_arc_util_serialization_Jval, (intptr_t) &SF_arc_util_serialization_Jval_FALSE, "Larc/util/serialization/Jval;", 25 },
	{ "NULL", &class_arc_util_serialization_Jval, (intptr_t) &SF_arc_util_serialization_Jval_NULL, "Larc/util/serialization/Jval;", 25 },
	{ "value", &class_java_lang_Object, offsetof(arc_util_serialization_Jval, F_value), "Ljava/lang/Object;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_serialization_Jval_java_lang_Object, 0, "(Ljava/lang/Object;)V", 0 },
	{ "newObject", (intptr_t) SM_arc_util_serialization_Jval_newObject_R_arc_util_serialization_Jval, 0, "()Larc/util/serialization/Jval;", 9 },
	{ "newArray", (intptr_t) SM_arc_util_serialization_Jval_newArray_R_arc_util_serialization_Jval, 0, "()Larc/util/serialization/Jval;", 9 },
	{ "read", (intptr_t) SM_arc_util_serialization_Jval_read_java_io_Reader_R_arc_util_serialization_Jval, 0, "(Ljava/io/Reader;)Larc/util/serialization/Jval;", 9 },
	{ "read", (intptr_t) SM_arc_util_serialization_Jval_read_Array1_byte_R_arc_util_serialization_Jval, 0, "([B)Larc/util/serialization/Jval;", 9 },
	{ "read", (intptr_t) SM_arc_util_serialization_Jval_read_java_lang_String_R_arc_util_serialization_Jval, 0, "(Ljava/lang/String;)Larc/util/serialization/Jval;", 9 },
	{ "getType", (intptr_t) M_arc_util_serialization_Jval_getType_R_arc_util_serialization_Jval$Jtype, VTABLE_arc_util_serialization_Jval_getType_R_arc_util_serialization_Jval$Jtype, "()Larc/util/serialization/Jval$Jtype;", 1 },
	{ "valueOf", (intptr_t) SM_arc_util_serialization_Jval_valueOf_int_R_arc_util_serialization_Jval, 0, "(I)Larc/util/serialization/Jval;", 9 },
	{ "valueOf", (intptr_t) SM_arc_util_serialization_Jval_valueOf_long_R_arc_util_serialization_Jval, 0, "(J)Larc/util/serialization/Jval;", 9 },
	{ "valueOf", (intptr_t) SM_arc_util_serialization_Jval_valueOf_float_R_arc_util_serialization_Jval, 0, "(F)Larc/util/serialization/Jval;", 9 },
	{ "valueOf", (intptr_t) SM_arc_util_serialization_Jval_valueOf_double_R_arc_util_serialization_Jval, 0, "(D)Larc/util/serialization/Jval;", 9 },
	{ "valueOf", (intptr_t) SM_arc_util_serialization_Jval_valueOf_java_lang_String_R_arc_util_serialization_Jval, 0, "(Ljava/lang/String;)Larc/util/serialization/Jval;", 9 },
	{ "valueOf", (intptr_t) SM_arc_util_serialization_Jval_valueOf_boolean_R_arc_util_serialization_Jval, 0, "(Z)Larc/util/serialization/Jval;", 9 },
	{ "isObject", (intptr_t) M_arc_util_serialization_Jval_isObject_R_boolean, VTABLE_arc_util_serialization_Jval_isObject_R_boolean, "()Z", 1 },
	{ "isArray", (intptr_t) M_arc_util_serialization_Jval_isArray_R_boolean, VTABLE_arc_util_serialization_Jval_isArray_R_boolean, "()Z", 1 },
	{ "isNumber", (intptr_t) M_arc_util_serialization_Jval_isNumber_R_boolean, VTABLE_arc_util_serialization_Jval_isNumber_R_boolean, "()Z", 1 },
	{ "isString", (intptr_t) M_arc_util_serialization_Jval_isString_R_boolean, VTABLE_arc_util_serialization_Jval_isString_R_boolean, "()Z", 1 },
	{ "isBoolean", (intptr_t) M_arc_util_serialization_Jval_isBoolean_R_boolean, VTABLE_arc_util_serialization_Jval_isBoolean_R_boolean, "()Z", 1 },
	{ "isTrue", (intptr_t) M_arc_util_serialization_Jval_isTrue_R_boolean, VTABLE_arc_util_serialization_Jval_isTrue_R_boolean, "()Z", 1 },
	{ "isFalse", (intptr_t) M_arc_util_serialization_Jval_isFalse_R_boolean, VTABLE_arc_util_serialization_Jval_isFalse_R_boolean, "()Z", 1 },
	{ "isNull", (intptr_t) M_arc_util_serialization_Jval_isNull_R_boolean, VTABLE_arc_util_serialization_Jval_isNull_R_boolean, "()Z", 1 },
	{ "asObject", (intptr_t) M_arc_util_serialization_Jval_asObject_R_arc_util_serialization_Jval$JsonMap, VTABLE_arc_util_serialization_Jval_asObject_R_arc_util_serialization_Jval$JsonMap, "()Larc/util/serialization/Jval$JsonMap;", 1 },
	{ "asArray", (intptr_t) M_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray, VTABLE_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray, "()Larc/util/serialization/Jval$JsonArray;", 1 },
	{ "asByte", (intptr_t) M_arc_util_serialization_Jval_asByte_R_byte, VTABLE_arc_util_serialization_Jval_asByte_R_byte, "()B", 1 },
	{ "asShort", (intptr_t) M_arc_util_serialization_Jval_asShort_R_short, VTABLE_arc_util_serialization_Jval_asShort_R_short, "()S", 1 },
	{ "asInt", (intptr_t) M_arc_util_serialization_Jval_asInt_R_int, VTABLE_arc_util_serialization_Jval_asInt_R_int, "()I", 1 },
	{ "asLong", (intptr_t) M_arc_util_serialization_Jval_asLong_R_long, VTABLE_arc_util_serialization_Jval_asLong_R_long, "()J", 1 },
	{ "asFloat", (intptr_t) M_arc_util_serialization_Jval_asFloat_R_float, VTABLE_arc_util_serialization_Jval_asFloat_R_float, "()F", 1 },
	{ "asDouble", (intptr_t) M_arc_util_serialization_Jval_asDouble_R_double, VTABLE_arc_util_serialization_Jval_asDouble_R_double, "()D", 1 },
	{ "asString", (intptr_t) M_arc_util_serialization_Jval_asString_R_java_lang_String, VTABLE_arc_util_serialization_Jval_asString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "asBool", (intptr_t) M_arc_util_serialization_Jval_asBool_R_boolean, VTABLE_arc_util_serialization_Jval_asBool_R_boolean, "()Z", 1 },
	{ "get", (intptr_t) M_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval, VTABLE_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval, "(Ljava/lang/String;)Larc/util/serialization/Jval;", 1 },
	{ "add", (intptr_t) M_arc_util_serialization_Jval_add_java_lang_String_arc_util_serialization_Jval, VTABLE_arc_util_serialization_Jval_add_java_lang_String_arc_util_serialization_Jval, "(Ljava/lang/String;Larc/util/serialization/Jval;)V", 1 },
	{ "add", (intptr_t) M_arc_util_serialization_Jval_add_java_lang_String_java_lang_String, VTABLE_arc_util_serialization_Jval_add_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "add", (intptr_t) M_arc_util_serialization_Jval_add_arc_util_serialization_Jval_R_arc_util_serialization_Jval, VTABLE_arc_util_serialization_Jval_add_arc_util_serialization_Jval_R_arc_util_serialization_Jval, "(Larc/util/serialization/Jval;)Larc/util/serialization/Jval;", 1 },
	{ "add", (intptr_t) M_arc_util_serialization_Jval_add_java_lang_String_R_arc_util_serialization_Jval, VTABLE_arc_util_serialization_Jval_add_java_lang_String_R_arc_util_serialization_Jval, "(Ljava/lang/String;)Larc/util/serialization/Jval;", 1 },
	{ "add", (intptr_t) M_arc_util_serialization_Jval_add_java_lang_Number_R_arc_util_serialization_Jval, VTABLE_arc_util_serialization_Jval_add_java_lang_Number_R_arc_util_serialization_Jval, "(Ljava/lang/Number;)Larc/util/serialization/Jval;", 1 },
	{ "add", (intptr_t) M_arc_util_serialization_Jval_add_boolean_R_arc_util_serialization_Jval, VTABLE_arc_util_serialization_Jval_add_boolean_R_arc_util_serialization_Jval, "(Z)Larc/util/serialization/Jval;", 1 },
	{ "put", (intptr_t) M_arc_util_serialization_Jval_put_java_lang_String_arc_util_serialization_Jval_R_arc_util_serialization_Jval, VTABLE_arc_util_serialization_Jval_put_java_lang_String_arc_util_serialization_Jval_R_arc_util_serialization_Jval, "(Ljava/lang/String;Larc/util/serialization/Jval;)Larc/util/serialization/Jval;", 1 },
	{ "put", (intptr_t) M_arc_util_serialization_Jval_put_java_lang_String_java_lang_String_R_arc_util_serialization_Jval, VTABLE_arc_util_serialization_Jval_put_java_lang_String_java_lang_String_R_arc_util_serialization_Jval, "(Ljava/lang/String;Ljava/lang/String;)Larc/util/serialization/Jval;", 1 },
	{ "put", (intptr_t) M_arc_util_serialization_Jval_put_java_lang_String_java_lang_Number_R_arc_util_serialization_Jval, VTABLE_arc_util_serialization_Jval_put_java_lang_String_java_lang_Number_R_arc_util_serialization_Jval, "(Ljava/lang/String;Ljava/lang/Number;)Larc/util/serialization/Jval;", 1 },
	{ "put", (intptr_t) M_arc_util_serialization_Jval_put_java_lang_String_boolean_R_arc_util_serialization_Jval, VTABLE_arc_util_serialization_Jval_put_java_lang_String_boolean_R_arc_util_serialization_Jval, "(Ljava/lang/String;Z)Larc/util/serialization/Jval;", 1 },
	{ "remove", (intptr_t) M_arc_util_serialization_Jval_remove_java_lang_String_R_arc_util_serialization_Jval, VTABLE_arc_util_serialization_Jval_remove_java_lang_String_R_arc_util_serialization_Jval, "(Ljava/lang/String;)Larc/util/serialization/Jval;", 1 },
	{ "has", (intptr_t) M_arc_util_serialization_Jval_has_java_lang_String_R_boolean, VTABLE_arc_util_serialization_Jval_has_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "getInt", (intptr_t) M_arc_util_serialization_Jval_getInt_java_lang_String_int_R_int, VTABLE_arc_util_serialization_Jval_getInt_java_lang_String_int_R_int, "(Ljava/lang/String;I)I", 1 },
	{ "getLong", (intptr_t) M_arc_util_serialization_Jval_getLong_java_lang_String_long_R_long, VTABLE_arc_util_serialization_Jval_getLong_java_lang_String_long_R_long, "(Ljava/lang/String;J)J", 1 },
	{ "getFloat", (intptr_t) M_arc_util_serialization_Jval_getFloat_java_lang_String_float_R_float, VTABLE_arc_util_serialization_Jval_getFloat_java_lang_String_float_R_float, "(Ljava/lang/String;F)F", 1 },
	{ "getDouble", (intptr_t) M_arc_util_serialization_Jval_getDouble_java_lang_String_double_R_double, VTABLE_arc_util_serialization_Jval_getDouble_java_lang_String_double_R_double, "(Ljava/lang/String;D)D", 1 },
	{ "getBool", (intptr_t) M_arc_util_serialization_Jval_getBool_java_lang_String_boolean_R_boolean, VTABLE_arc_util_serialization_Jval_getBool_java_lang_String_boolean_R_boolean, "(Ljava/lang/String;Z)Z", 1 },
	{ "getString", (intptr_t) M_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String, VTABLE_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "getString", (intptr_t) M_arc_util_serialization_Jval_getString_java_lang_String_java_lang_String_R_java_lang_String, VTABLE_arc_util_serialization_Jval_getString_java_lang_String_java_lang_String_R_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "writeTo", (intptr_t) M_arc_util_serialization_Jval_writeTo_java_io_Writer, VTABLE_arc_util_serialization_Jval_writeTo_java_io_Writer, "(Ljava/io/Writer;)V", 1 },
	{ "writeTo", (intptr_t) M_arc_util_serialization_Jval_writeTo_java_io_Writer_arc_util_serialization_Jval$Jformat, VTABLE_arc_util_serialization_Jval_writeTo_java_io_Writer_arc_util_serialization_Jval$Jformat, "(Ljava/io/Writer;Larc/util/serialization/Jval$Jformat;)V", 1 },
	{ "toString", (intptr_t) M_arc_util_serialization_Jval_toString_R_java_lang_String, VTABLE_arc_util_serialization_Jval_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_arc_util_serialization_Jval_toString_arc_util_serialization_Jval$Jformat_R_java_lang_String, VTABLE_arc_util_serialization_Jval_toString_arc_util_serialization_Jval$Jformat_R_java_lang_String, "(Larc/util/serialization/Jval$Jformat;)Ljava/lang/String;", 1 },
	{ "equals", (intptr_t) M_arc_util_serialization_Jval_equals_java_lang_Object_R_boolean, VTABLE_arc_util_serialization_Jval_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "<clinit>", (intptr_t) clinit_arc_util_serialization_Jval, 0, "()V", 8 },
};

Class class_arc_util_serialization_Jval{
		.nativeName = (intptr_t) "arc/util/serialization/Jval",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_serialization_Jval),
		.classVtable = (intptr_t) vtable_arc_util_serialization_Jval,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_Jval,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_util_serialization_Jval,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 9,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 57,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 53,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_Jval = registerClass(&class_arc_util_serialization_Jval);

}
