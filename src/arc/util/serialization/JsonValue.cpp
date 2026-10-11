#include "arc/util/serialization/JsonValue.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Boolean.h"
#include "java/io/Writer.h"
#include "java/lang/Float.h"
#include "java/lang/Iterable.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Short.h"
#include "java/lang/String.h"
#include "arc/util/serialization/SerializationException.h"
#include "java/lang/reflect/Method.h"
#include "arc/util/serialization/JsonValue_ValueType.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "java/lang/Byte.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/serialization/JsonValue_PrettyPrintSettings.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/util/serialization/JsonValue_JsonIterator.h"
#include "java/lang/Enum.h"
#include "java/lang/Long.h"
#include "arc/util/Nullable.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "arc/util/serialization/JsonValue.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Double.h"
#include "arc/util/serialization/JsonWriter_OutputType.h"

extern "C" {


void mark_arc_util_serialization_JsonValue(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_serialization_JsonValue *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_child)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_child)->clazz)->markFunction)((jobject) self->F_child, mark, depth + 1);
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
	if (self->F_prev)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prev)->clazz)->markFunction)((jobject) self->F_prev, mark, depth + 1);
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_stringValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stringValue)->clazz)->markFunction)((jobject) self->F_stringValue, mark, depth + 1);
}

void clinit_arc_util_serialization_JsonValue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_serialization_JsonValue_arc_util_serialization_JsonValue$ValueType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonValue(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(35);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_util_serialization_JsonValue_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonValue(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(39);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(40);
	((func_arc_util_serialization_JsonValue_set_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_set_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_util_serialization_JsonValue_double(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonValue(ctx);
	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(43);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(44);
	((func_arc_util_serialization_JsonValue_set_double_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_set_double_java_lang_String])(ctx, (frame[0].o), (frame[1].d), (jobject(nullptr)));
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_util_serialization_JsonValue_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonValue(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(47);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(48);
	((func_arc_util_serialization_JsonValue_set_long_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_set_long_java_lang_String])(ctx, (frame[0].o), (frame[1].l), (jobject(nullptr)));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_util_serialization_JsonValue_double_java_lang_String(jcontext ctx, jobject self, jdouble param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonValue(ctx);
	frame[0].o = self;
	frame[1].d = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(51);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(52);
	((func_arc_util_serialization_JsonValue_set_double_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_set_double_java_lang_String])(ctx, (frame[0].o), (frame[1].d), (frame[3].o));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_util_serialization_JsonValue_long_java_lang_String(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonValue(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(55);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(56);
	((func_arc_util_serialization_JsonValue_set_long_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_set_long_java_lang_String])(ctx, (frame[0].o), (frame[1].l), (frame[3].o));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_util_serialization_JsonValue_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonValue(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(59);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(60);
	((func_arc_util_serialization_JsonValue_set_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_set_boolean])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_arc_util_serialization_JsonValue_isFlat_arc_util_serialization_JsonValue_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:isFlat", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonValue(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[1].o = sp[0].o;
	}
label_1:;
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_2;
	{
	LINE_NUMBER(65);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
label_4:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_next;
	frame[1].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_arc_util_serialization_JsonValue_isNumeric_arc_util_serialization_JsonValue_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:isNumeric", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonValue(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[1].o = sp[0].o;
	}
label_1:;
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_2;
	{
	LINE_NUMBER(71);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isNumber_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isNumber_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_next;
	frame[1].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void SM_arc_util_serialization_JsonValue_indent_int_java_lang_StringBuilder(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:indent", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonValue(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(76);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (frame[0].i)) goto label_2;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (9));
	LINE_NUMBER(76);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(78);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_util_serialization_JsonValue_indent_int_java_io_Writer(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:indent", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonValue(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(81);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (frame[0].i)) goto label_2;
	}
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((func_java_io_Writer_append_char_R_java_io_Writer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_append_char_R_java_io_Writer])(ctx, (frame[1].o), (9));
	LINE_NUMBER(81);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(83);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(92);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	INST_ILOAD(1);
	if ((--sp)->i <= 0) goto label_2;
	{
	LINE_NUMBER(93);
	INST_IINC(1, -1);
	LINE_NUMBER(94);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(105);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_name;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:has", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	if (sp[0].o == nullptr) goto label_1;
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

jobject M_arc_util_serialization_JsonValue_require_int_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:require", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(122);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	INST_ILOAD(1);
	if ((--sp)->i <= 0) goto label_2;
	{
	LINE_NUMBER(123);
	INST_IINC(1, -1);
	LINE_NUMBER(124);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(126);
	if ((frame[2].o) != nullptr) goto label_5;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Child not found with index: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_require_java_lang_String_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:require", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(136);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_name;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(138);
	if ((frame[2].o) != nullptr) goto label_4;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Child not found with name: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_remove_int_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(149);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_prev;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_child = (jref) sp[1].o;
	LINE_NUMBER(152);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_prev = (jref) (jobject(nullptr));
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_prev;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(155);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_prev;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_prev = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(167);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_prev;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_child = (jref) sp[1].o;
	LINE_NUMBER(170);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_prev = (jref) (jobject(nullptr));
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_prev;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(173);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_prev;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_prev = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_asString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:asString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue$ValueType_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 2: goto label_1;
		case 3: goto label_2;
		case 4: goto label_3;
		case 5: goto label_4;
		case 6: goto label_5;
		default: goto label_6;
	}
	}
label_1:;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	sp += 1;
	goto label_8;
	}
label_7:;
	{
	sp[0].o = (jobject)SM_java_lang_Double_toString_double_R_java_lang_String(ctx, ((jdouble)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue));
	sp += 1;
	}
label_8:;
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	sp += 1;
	goto label_10;
	}
label_9:;
	{
	sp[0].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, ((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue));
	sp += 1;
	}
label_10:;
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(193);
	if ((longCompare(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue), (jlong(0)))) == 0) goto label_11;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"true"_j));
	goto label_12;
label_11:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"false"_j));
label_12:;
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
	{
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_6:;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)M_arc_util_serialization_JsonValue_typeMismatch_java_lang_String_R_java_lang_RuntimeException(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"string"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jfloat M_arc_util_serialization_JsonValue_asFloat_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:asFloat", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue$ValueType_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 2: goto label_1;
		case 3: goto label_2;
		case 4: goto label_3;
		case 5: goto label_4;
		default: goto label_5;
	}
	}
label_1:;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return (jfloat(((jdouble)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue)));
	}
label_3:;
	{
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return (jfloat(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue)));
	}
label_4:;
	{
	LINE_NUMBER(213);
	if ((longCompare(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue), (jlong(0)))) == 0) goto label_6;
	}
	INST_FCONST(1);
	goto label_7;
label_6:;
	INST_FCONST(0);
label_7:;
	popStackFrame(ctx);
	INST_FRETURN();
label_5:;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)M_arc_util_serialization_JsonValue_typeMismatch_java_lang_String_R_java_lang_RuntimeException(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"float"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jdouble M_arc_util_serialization_JsonValue_asDouble_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:asDouble", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue$ValueType_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 2: goto label_1;
		case 3: goto label_2;
		case 4: goto label_3;
		case 5: goto label_4;
		default: goto label_5;
	}
	}
label_1:;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return ((jdouble)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue);
	}
label_3:;
	{
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return (jdouble(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue)));
	}
label_4:;
	{
	LINE_NUMBER(231);
	if ((longCompare(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue), (jlong(0)))) == 0) goto label_6;
	}
	INST_DCONST(1);
	goto label_7;
label_6:;
	INST_DCONST(0);
label_7:;
	popStackFrame(ctx);
	INST_DRETURN();
label_5:;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)M_arc_util_serialization_JsonValue_typeMismatch_java_lang_String_R_java_lang_RuntimeException(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"double"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jlong M_arc_util_serialization_JsonValue_asLong_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:asLong", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue$ValueType_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 2: goto label_1;
		case 3: goto label_2;
		case 4: goto label_3;
		case 5: goto label_4;
		default: goto label_5;
	}
	}
label_1:;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_R_long(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return (jlong(((jdouble)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue)));
	}
label_3:;
	{
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return ((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue);
	}
label_4:;
	{
	LINE_NUMBER(249);
	if ((longCompare(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue), (jlong(0)))) == 0) goto label_6;
	}
	INST_LCONST(1);
	goto label_7;
label_6:;
	INST_LCONST(0);
label_7:;
	popStackFrame(ctx);
	INST_LRETURN();
label_5:;
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)M_arc_util_serialization_JsonValue_typeMismatch_java_lang_String_R_java_lang_RuntimeException(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"long"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_arc_util_serialization_JsonValue_asInt_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:asInt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue$ValueType_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 2: goto label_1;
		case 3: goto label_2;
		case 4: goto label_3;
		case 5: goto label_4;
		default: goto label_5;
	}
	}
label_1:;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(263);
	popStackFrame(ctx);
	return (jint(((jdouble)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue)));
	}
label_3:;
	{
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return (jint(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue)));
	}
label_4:;
	{
	LINE_NUMBER(267);
	if ((longCompare(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue), (jlong(0)))) == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)M_arc_util_serialization_JsonValue_typeMismatch_java_lang_String_R_java_lang_RuntimeException(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"int"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_JsonValue_asBoolean_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:asBoolean", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue$ValueType_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 2: goto label_1;
		case 3: goto label_2;
		case 4: goto label_3;
		case 5: goto label_4;
		default: goto label_5;
	}
	}
label_1:;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"true"_j))));
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(281);
	if ((doubleCompare(((jdouble)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue), (jdouble(0)), -1)) == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(283);
	if ((longCompare(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue), (jlong(0)))) == 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(285);
	if ((longCompare(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue), (jlong(0)))) == 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)M_arc_util_serialization_JsonValue_typeMismatch_java_lang_String_R_java_lang_RuntimeException(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"boolean"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbyte M_arc_util_serialization_JsonValue_asByte_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:asByte", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue$ValueType_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 2: goto label_1;
		case 3: goto label_2;
		case 4: goto label_3;
		case 5: goto label_4;
		default: goto label_5;
	}
	}
label_1:;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	jint temp0 = (jint)SM_java_lang_Byte_parseByte_java_lang_String_R_byte(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return (jbyte((jint(((jdouble)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue)))));
	}
label_3:;
	{
	LINE_NUMBER(301);
	popStackFrame(ctx);
	return (jbyte((jint(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue)))));
	}
label_4:;
	{
	LINE_NUMBER(303);
	if ((longCompare(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue), (jlong(0)))) == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)M_arc_util_serialization_JsonValue_typeMismatch_java_lang_String_R_java_lang_RuntimeException(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"byte"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jshort M_arc_util_serialization_JsonValue_asShort_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:asShort", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue$ValueType_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 2: goto label_1;
		case 3: goto label_2;
		case 4: goto label_3;
		case 5: goto label_4;
		default: goto label_5;
	}
	}
label_1:;
	{
	LINE_NUMBER(315);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	jint temp0 = (jint)SM_java_lang_Short_parseShort_java_lang_String_R_short(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return (jshort((jint(((jdouble)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue)))));
	}
label_3:;
	{
	LINE_NUMBER(319);
	popStackFrame(ctx);
	return (jshort((jint(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue)))));
	}
label_4:;
	{
	LINE_NUMBER(321);
	if ((longCompare(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue), (jlong(0)))) == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(323);
	sp[0].o = (jobject)M_arc_util_serialization_JsonValue_typeMismatch_java_lang_String_R_java_lang_RuntimeException(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"short"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jchar M_arc_util_serialization_JsonValue_asChar_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:asChar", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue$ValueType_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 2: goto label_1;
		case 3: goto label_2;
		case 4: goto label_3;
		case 5: goto label_4;
		default: goto label_5;
	}
	}
label_1:;
	{
	LINE_NUMBER(333);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_6;
	}
	INST_ICONST(0);
	goto label_7;
label_6:;
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (jint(0)));
	sp[0].i = temp0;
	sp += 1;
	}
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(335);
	popStackFrame(ctx);
	return (jchar((jint(((jdouble)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue)))));
	}
label_3:;
	{
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return (jchar((jint(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue)))));
	}
label_4:;
	{
	LINE_NUMBER(339);
	if ((longCompare(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue), (jlong(0)))) == 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)M_arc_util_serialization_JsonValue_typeMismatch_java_lang_String_R_java_lang_RuntimeException(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"char"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_asStringArray_R_Array1_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:asStringArray", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_array;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value is not an array: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, ((jint)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(351);
	frame[2].i = (jint(0));
	LINE_NUMBER(352);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[3].o = sp[0].o;
	}
label_4:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue$ValueType_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 2: goto label_7;
		case 3: goto label_8;
		case 4: goto label_9;
		case 5: goto label_10;
		case 6: goto label_11;
		default: goto label_12;
	}
	}
label_7:;
	{
	LINE_NUMBER(356);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_stringValue;
	frame[4].o = sp[0].o;
	LINE_NUMBER(357);
	goto label_14;
	}
label_8:;
	{
	LINE_NUMBER(359);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	sp += 1;
	goto label_16;
	}
label_15:;
	{
	sp[0].o = (jobject)SM_java_lang_Double_toString_double_R_java_lang_String(ctx, ((jdouble)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_doubleValue));
	sp += 1;
	}
label_16:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(360);
	goto label_14;
	}
label_9:;
	{
	LINE_NUMBER(362);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	sp += 1;
	goto label_19;
	}
label_18:;
	{
	sp[0].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, ((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue));
	sp += 1;
	}
label_19:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(363);
	goto label_14;
	}
label_10:;
	{
	LINE_NUMBER(365);
	if ((longCompare(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue), (jlong(0)))) == 0) goto label_21;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"true"_j));
	goto label_22;
label_21:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"false"_j));
label_22:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(366);
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(368);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(369);
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(371);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to string: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(373);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)) = (frame[4].o);
	LINE_NUMBER(352);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(375);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_asFloatArray_R_Array1_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:asFloatArray", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_array;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value is not an array: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject) createArray(ctx, &class_float, ((jint)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(385);
	frame[2].i = (jint(0));
	LINE_NUMBER(386);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[3].o = sp[0].o;
	}
label_4:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue$ValueType_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 2: goto label_7;
		case 3: goto label_8;
		case 4: goto label_9;
		case 5: goto label_10;
		default: goto label_11;
	}
	}
label_7:;
	{
	LINE_NUMBER(390);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_stringValue;
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[4].f = temp0;
	LINE_NUMBER(391);
	goto label_13;
	}
label_8:;
	{
	LINE_NUMBER(393);
	frame[4].f = (jfloat(((jdouble)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_doubleValue)));
	LINE_NUMBER(394);
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(396);
	frame[4].f = (jfloat(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue)));
	LINE_NUMBER(397);
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(399);
	if ((longCompare(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue), (jlong(0)))) == 0) goto label_16;
	}
	INST_FCONST(1);
	goto label_17;
label_16:;
	INST_FCONST(0);
label_17:;
	{
	sp -= 1;
	frame[4].f = sp[0].f;
	LINE_NUMBER(400);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(402);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to float: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(404);
	ARRAY_ACCESS(jfloat, (frame[1].o), (frame[2].i)) = (frame[4].f);
	LINE_NUMBER(386);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(406);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_asDoubleArray_R_Array1_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:asDoubleArray", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(414);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_array;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value is not an array: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(415);
	sp[0].o = (jobject) createArray(ctx, &class_double, ((jint)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(416);
	frame[2].i = (jint(0));
	LINE_NUMBER(417);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[3].o = sp[0].o;
	}
label_4:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(419);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue$ValueType_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 2: goto label_7;
		case 3: goto label_8;
		case 4: goto label_9;
		case 5: goto label_10;
		default: goto label_11;
	}
	}
label_7:;
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_stringValue;
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, sp[0].o);
	frame[4].d = temp0;
	LINE_NUMBER(422);
	goto label_13;
	}
label_8:;
	{
	LINE_NUMBER(424);
	frame[4].d = ((jdouble)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_doubleValue);
	LINE_NUMBER(425);
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(427);
	frame[4].d = (jdouble(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue)));
	LINE_NUMBER(428);
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(430);
	if ((longCompare(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue), (jlong(0)))) == 0) goto label_16;
	}
	INST_DCONST(1);
	goto label_17;
label_16:;
	INST_DCONST(0);
label_17:;
	{
	sp -= 1;
	frame[4].d = sp[0].d;
	LINE_NUMBER(431);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(433);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to double: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(435);
	ARRAY_ACCESS(jdouble, (frame[1].o), (frame[2].i)) = (frame[4].d);
	LINE_NUMBER(417);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(437);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_asLongArray_R_Array1_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:asLongArray", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(445);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_array;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value is not an array: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(446);
	sp[0].o = (jobject) createArray(ctx, &class_long, ((jint)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(447);
	frame[2].i = (jint(0));
	LINE_NUMBER(448);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[3].o = sp[0].o;
	}
label_4:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(450);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue$ValueType_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 2: goto label_7;
		case 3: goto label_8;
		case 4: goto label_9;
		case 5: goto label_10;
		default: goto label_11;
	}
	}
label_7:;
	{
	LINE_NUMBER(452);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_stringValue;
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_R_long(ctx, sp[0].o);
	frame[4].l = temp0;
	LINE_NUMBER(453);
	goto label_13;
	}
label_8:;
	{
	LINE_NUMBER(455);
	frame[4].l = (jlong(((jdouble)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_doubleValue)));
	LINE_NUMBER(456);
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(458);
	frame[4].l = ((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue);
	LINE_NUMBER(459);
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(461);
	if ((longCompare(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue), (jlong(0)))) == 0) goto label_16;
	}
	INST_LCONST(1);
	goto label_17;
label_16:;
	INST_LCONST(0);
label_17:;
	{
	sp -= 1;
	frame[4].l = sp[0].l;
	LINE_NUMBER(462);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(464);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to long: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(466);
	ARRAY_ACCESS(jlong, (frame[1].o), (frame[2].i)) = (frame[4].l);
	LINE_NUMBER(448);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(468);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_asIntArray_R_Array1_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:asIntArray", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_array;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value is not an array: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(477);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((jint)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(478);
	frame[2].i = (jint(0));
	LINE_NUMBER(479);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[3].o = sp[0].o;
	}
label_4:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue$ValueType_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 2: goto label_7;
		case 3: goto label_8;
		case 4: goto label_9;
		case 5: goto label_10;
		default: goto label_11;
	}
	}
label_7:;
	{
	LINE_NUMBER(483);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_stringValue;
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(484);
	goto label_13;
	}
label_8:;
	{
	LINE_NUMBER(486);
	frame[4].i = (jint(((jdouble)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_doubleValue)));
	LINE_NUMBER(487);
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(489);
	frame[4].i = (jint(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue)));
	LINE_NUMBER(490);
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(492);
	if ((longCompare(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue), (jlong(0)))) == 0) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(493);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(495);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to int: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(497);
	ARRAY_ACCESS(jint, (frame[1].o), (frame[2].i)) = (frame[4].i);
	LINE_NUMBER(479);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(499);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_asBooleanArray_R_Array1_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:asBooleanArray", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(507);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_array;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value is not an array: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(508);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, ((jint)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(509);
	frame[2].i = (jint(0));
	LINE_NUMBER(510);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[3].o = sp[0].o;
	}
label_4:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(512);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue$ValueType_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 2: goto label_7;
		case 3: goto label_8;
		case 4: goto label_9;
		case 5: goto label_10;
		default: goto label_11;
	}
	}
label_7:;
	{
	LINE_NUMBER(514);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_stringValue;
	jint temp0 = (jint)SM_java_lang_Boolean_parseBoolean_java_lang_String_R_boolean(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(515);
	goto label_13;
	}
label_8:;
	{
	LINE_NUMBER(517);
	if ((doubleCompare(((jdouble)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_doubleValue), (jdouble(0)), -1)) != 0) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(518);
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(520);
	if ((longCompare(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue), (jlong(0)))) != 0) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(521);
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(523);
	if ((longCompare(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue), (jlong(0)))) == 0) goto label_20;
	}
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(0);
label_21:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(524);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(526);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to boolean: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(528);
	ARRAY_ACCESS(jbyte, (frame[1].o), (frame[2].i)) = (frame[4].i);
	LINE_NUMBER(510);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(530);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_asByteArray_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:asByteArray", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(538);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_array;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value is not an array: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(539);
	sp[0].o = (jobject) createArray(ctx, &class_byte, ((jint)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(540);
	frame[2].i = (jint(0));
	LINE_NUMBER(541);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[3].o = sp[0].o;
	}
label_4:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(543);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue$ValueType_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 2: goto label_7;
		case 3: goto label_8;
		case 4: goto label_9;
		case 5: goto label_10;
		default: goto label_11;
	}
	}
label_7:;
	{
	LINE_NUMBER(545);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_stringValue;
	jint temp0 = (jint)SM_java_lang_Byte_parseByte_java_lang_String_R_byte(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(546);
	goto label_13;
	}
label_8:;
	{
	LINE_NUMBER(548);
	frame[4].i = (jbyte((jint(((jdouble)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_doubleValue)))));
	LINE_NUMBER(549);
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(551);
	frame[4].i = (jbyte((jint(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue)))));
	LINE_NUMBER(552);
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(554);
	if ((longCompare(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue), (jlong(0)))) == 0) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(555);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(557);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to byte: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(559);
	ARRAY_ACCESS(jbyte, (frame[1].o), (frame[2].i)) = (frame[4].i);
	LINE_NUMBER(541);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(561);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_asShortArray_R_Array1_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:asShortArray", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(569);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_array;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value is not an array: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(570);
	sp[0].o = (jobject) createArray(ctx, &class_short, ((jint)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(571);
	frame[2].i = (jint(0));
	LINE_NUMBER(572);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[3].o = sp[0].o;
	}
label_4:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(574);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue$ValueType_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 2: goto label_7;
		case 3: goto label_8;
		case 4: goto label_9;
		case 5: goto label_10;
		default: goto label_11;
	}
	}
label_7:;
	{
	LINE_NUMBER(576);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_stringValue;
	jint temp0 = (jint)SM_java_lang_Short_parseShort_java_lang_String_R_short(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(577);
	goto label_13;
	}
label_8:;
	{
	LINE_NUMBER(579);
	frame[4].i = (jshort((jint(((jdouble)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_doubleValue)))));
	LINE_NUMBER(580);
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(582);
	frame[4].i = (jshort((jint(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue)))));
	LINE_NUMBER(583);
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(585);
	if ((longCompare(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue), (jlong(0)))) == 0) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(586);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(588);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to short: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(590);
	ARRAY_ACCESS(jshort, (frame[1].o), (frame[2].i)) = (frame[4].i);
	LINE_NUMBER(572);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(592);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonValue_mismatch_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:mismatch", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(596);
	sp[0].o = (jobject)M_arc_util_serialization_JsonValue_typeMismatch_java_lang_String_R_java_lang_RuntimeException(ctx, (frame[0].o), (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_typeMismatch_java_lang_String_R_java_lang_RuntimeException(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:typeMismatch", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(600);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\""_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	jobject temp1 = sp[2].o;
	sp[2].o = temp0;
	sp += 3;
	if (temp1 != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"value"_j));
	goto label_2;
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((arc_util_serialization_JsonValue *) NULL_CHECK(sp[-1].o))->F_name;
label_2:;
	{
	sp -= 4;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\" should be a "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", but it is a "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_asCharArray_R_Array1_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:asCharArray", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(608);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_array;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value is not an array: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(609);
	sp[0].o = (jobject) createArray(ctx, &class_char, ((jint)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(610);
	frame[2].i = (jint(0));
	LINE_NUMBER(611);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[3].o = sp[0].o;
	}
label_4:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(613);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue$ValueType_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 2: goto label_7;
		case 3: goto label_8;
		case 4: goto label_9;
		case 5: goto label_10;
		default: goto label_11;
	}
	}
label_7:;
	{
	LINE_NUMBER(615);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_stringValue;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_12;
	}
	INST_ICONST(0);
	goto label_13;
label_12:;
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_stringValue;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (jint(0)));
	sp[0].i = temp0;
	sp += 1;
	}
label_13:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(616);
	goto label_15;
	}
label_8:;
	{
	LINE_NUMBER(618);
	frame[4].i = (jchar((jint(((jdouble)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_doubleValue)))));
	LINE_NUMBER(619);
	goto label_15;
	}
label_9:;
	{
	LINE_NUMBER(621);
	frame[4].i = (jchar((jint(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue)))));
	LINE_NUMBER(622);
	goto label_15;
	}
label_10:;
	{
	LINE_NUMBER(624);
	if ((longCompare(((jlong)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue), (jlong(0)))) == 0) goto label_18;
	}
	INST_ICONST(1);
	goto label_19;
label_18:;
	INST_ICONST(0);
label_19:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(625);
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(627);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to char: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(629);
	ARRAY_ACCESS(jchar, (frame[1].o), (frame[2].i)) = (frame[4].i);
	LINE_NUMBER(611);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(631);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_JsonValue_hasChild_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:hasChild", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(636);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_getChild_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getChild_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	if (sp[0].o == nullptr) goto label_1;
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

jobject M_arc_util_serialization_JsonValue_getChild_java_lang_String_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getChild", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(644);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(645);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	INST_ALOAD(2);
	sp[-1].o = (jobject) ((arc_util_serialization_JsonValue *) NULL_CHECK(sp[-1].o))->F_child;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(653);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(654);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isValue_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isValue_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isNull_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ALOAD(2);
	goto label_4;
label_3:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jfloat M_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getFloat", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(659);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(660);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isValue_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isValue_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isNull_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_FLOAD(2);
	goto label_4;
label_3:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_arc_util_serialization_JsonValue_asFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_asFloat_R_float])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jdouble M_arc_util_serialization_JsonValue_getDouble_java_lang_String_double_R_double(jcontext ctx, jobject self, jobject param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getDouble", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(665);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(666);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isValue_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isValue_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isNull_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_DLOAD(2);
	goto label_4;
label_3:;
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	sp->d = (jdouble)((func_arc_util_serialization_JsonValue_asDouble_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_asDouble_R_double])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jlong M_arc_util_serialization_JsonValue_getLong_java_lang_String_long_R_long(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getLong", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(671);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(672);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isValue_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isValue_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isNull_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_LLOAD(2);
	goto label_4;
label_3:;
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	sp->l = (jlong)((func_arc_util_serialization_JsonValue_asLong_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_asLong_R_long])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_LRETURN();

	popStackFrame(ctx);
}

jint M_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getInt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(677);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(678);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isValue_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isValue_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isNull_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ILOAD(2);
	goto label_4;
label_3:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_arc_util_serialization_JsonValue_asInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_asInt_R_int])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_JsonValue_getBoolean_java_lang_String_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getBoolean", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(683);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(684);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isValue_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isValue_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isNull_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ILOAD(2);
	goto label_4;
label_3:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_arc_util_serialization_JsonValue_asBoolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_asBoolean_R_boolean])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbyte M_arc_util_serialization_JsonValue_getByte_java_lang_String_byte_R_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getByte", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(689);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(690);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isValue_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isValue_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isNull_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ILOAD(2);
	goto label_4;
label_3:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_arc_util_serialization_JsonValue_asByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_asByte_R_byte])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jshort M_arc_util_serialization_JsonValue_getShort_java_lang_String_short_R_short(jcontext ctx, jobject self, jobject param0, jshort param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getShort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(695);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(696);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isValue_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isValue_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isNull_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ILOAD(2);
	goto label_4;
label_3:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_arc_util_serialization_JsonValue_asShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_asShort_R_short])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jchar M_arc_util_serialization_JsonValue_getChar_java_lang_String_char_R_char(jcontext ctx, jobject self, jobject param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getChar", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(701);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(702);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isValue_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isValue_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isNull_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ILOAD(2);
	goto label_4;
label_3:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_arc_util_serialization_JsonValue_asChar_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_asChar_R_char])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(710);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(711);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Named value not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(712);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getFloat", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(720);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(721);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Named value not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(722);
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_asFloat_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asFloat_R_float])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble M_arc_util_serialization_JsonValue_getDouble_java_lang_String_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getDouble", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(730);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(731);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Named value not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(732);
	jdouble temp0 = (jdouble)((func_arc_util_serialization_JsonValue_asDouble_R_double) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asDouble_R_double])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_arc_util_serialization_JsonValue_getLong_java_lang_String_R_long(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getLong", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(740);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(741);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Named value not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(742);
	jlong temp0 = (jlong)((func_arc_util_serialization_JsonValue_asLong_R_long) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asLong_R_long])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_util_serialization_JsonValue_getInt_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getInt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(750);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(751);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Named value not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(752);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asInt_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asInt_R_int])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_JsonValue_getBoolean_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getBoolean", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(760);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(761);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Named value not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(762);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asBoolean_R_boolean])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbyte M_arc_util_serialization_JsonValue_getByte_java_lang_String_R_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getByte", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(770);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(771);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Named value not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(772);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asByte_R_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asByte_R_byte])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jshort M_arc_util_serialization_JsonValue_getShort_java_lang_String_R_short(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getShort", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(780);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(781);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Named value not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(782);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asShort_R_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asShort_R_short])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jchar M_arc_util_serialization_JsonValue_getChar_java_lang_String_R_char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getChar", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(790);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(791);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Named value not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(792);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asChar_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asChar_R_char])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_getString_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(800);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(801);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Indexed value not found: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(802);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_util_serialization_JsonValue_getFloat_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getFloat", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(810);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(811);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Indexed value not found: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(812);
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_asFloat_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asFloat_R_float])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble M_arc_util_serialization_JsonValue_getDouble_int_R_double(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getDouble", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(820);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(821);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Indexed value not found: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(822);
	jdouble temp0 = (jdouble)((func_arc_util_serialization_JsonValue_asDouble_R_double) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asDouble_R_double])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_arc_util_serialization_JsonValue_getLong_int_R_long(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getLong", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(830);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(831);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Indexed value not found: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(832);
	jlong temp0 = (jlong)((func_arc_util_serialization_JsonValue_asLong_R_long) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asLong_R_long])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_util_serialization_JsonValue_getInt_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getInt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(840);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(841);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Indexed value not found: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(842);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asInt_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asInt_R_int])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_JsonValue_getBoolean_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getBoolean", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(850);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(851);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Indexed value not found: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(852);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asBoolean_R_boolean])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbyte M_arc_util_serialization_JsonValue_getByte_int_R_byte(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getByte", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(860);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(861);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Indexed value not found: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(862);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asByte_R_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asByte_R_byte])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jshort M_arc_util_serialization_JsonValue_getShort_int_R_short(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getShort", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(870);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(871);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Indexed value not found: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(872);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asShort_R_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asShort_R_short])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jchar M_arc_util_serialization_JsonValue_getChar_int_R_char(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:getChar", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(880);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(881);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Indexed value not found: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(882);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asChar_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asChar_R_char])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_type_R_arc_util_serialization_JsonValue$ValueType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:type", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(886);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonValue_setType_arc_util_serialization_JsonValue$ValueType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:setType", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(890);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"type cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(891);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(892);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_JsonValue_isArray_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:isArray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(895);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_array;
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

jbool M_arc_util_serialization_JsonValue_isObject_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:isObject", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(899);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_object;
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

jbool M_arc_util_serialization_JsonValue_isString_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:isString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(903);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_stringValue;
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

jbool M_arc_util_serialization_JsonValue_isNumber_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:isNumber", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(908);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_doubleValue;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_longValue;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_JsonValue_isDouble_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:isDouble", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(912);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_doubleValue;
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

jbool M_arc_util_serialization_JsonValue_isLong_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:isLong", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(916);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_longValue;
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

jbool M_arc_util_serialization_JsonValue_isBoolean_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:isBoolean", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(920);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_booleanValue;
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

jbool M_arc_util_serialization_JsonValue_isNull_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:isNull", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(924);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_nullValue;
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

jbool M_arc_util_serialization_JsonValue_isValue_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:isValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(929);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue$ValueType_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 2: goto label_1;
		case 3: goto label_1;
		case 4: goto label_1;
		case 5: goto label_1;
		case 6: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(935);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(937);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_name_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:name", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(945);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonValue_setName_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:setName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(949);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(950);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_parent_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:parent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(957);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_parent;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_child_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:child", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(965);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonValue_addChild_java_lang_String_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:addChild", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(970);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(971);
	((func_arc_util_serialization_JsonValue_addChild_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_addChild_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(972);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonValue_addChild_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:addChild", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(976);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_parent = (jref) (frame[0].o);
	LINE_NUMBER(977);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[2].o = sp[0].o;
	LINE_NUMBER(978);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(979);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_child = (jref) (frame[1].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(982);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(983);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_next = (jref) (frame[1].o);
	LINE_NUMBER(984);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_prev = (jref) (frame[2].o);
	LINE_NUMBER(985);
	popStackFrame(ctx);
	return;
	}
label_6:;
	{
	LINE_NUMBER(987);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	goto label_3;
	}
label_5:;
	LINE_NUMBER(990);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_next_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(997);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_next;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonValue_setNext_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:setNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1001);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_next = (jref) (frame[1].o);
	LINE_NUMBER(1002);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_prev_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:prev", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1009);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_prev;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonValue_setPrev_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:setPrev", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1013);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_prev = (jref) (frame[1].o);
	LINE_NUMBER(1014);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonValue_set_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1018);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue = (jref) (frame[1].o);
	LINE_NUMBER(1019);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_2;
	}
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	(sp++)->o = SF_arc_util_serialization_JsonValue$ValueType_nullValue;
	goto label_3;
label_2:;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	(sp++)->o = SF_arc_util_serialization_JsonValue$ValueType_stringValue;
label_3:;
	{
	sp -= 2;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(1020);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonValue_set_double_java_lang_String(jcontext ctx, jobject self, jdouble param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(1024);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue = (frame[1].d);
	LINE_NUMBER(1025);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue = (jlong((frame[1].d)));
	LINE_NUMBER(1026);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue = (jref) (frame[3].o);
	LINE_NUMBER(1027);
	sp[0].o = frame[0].o;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_doubleValue;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(1028);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonValue_set_long_java_lang_String(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(1032);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue = (frame[1].l);
	LINE_NUMBER(1033);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue = (jdouble((frame[1].l)));
	LINE_NUMBER(1034);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue = (jref) (frame[3].o);
	LINE_NUMBER(1035);
	sp[0].o = frame[0].o;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_longValue;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(1036);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonValue_set_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1039);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_1;
	}
	INST_LCONST(1);
	goto label_2;
label_1:;
	INST_LCONST(0);
label_2:;
	{
	sp -= 2;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_longValue = sp[1].l;
	LINE_NUMBER(1040);
	sp[0].o = frame[0].o;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_booleanValue;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(1041);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_toJson_arc_util_serialization_JsonWriter$OutputType_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:toJson", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1044);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isValue_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isValue_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1045);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (512));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1046);
	M_arc_util_serialization_JsonValue_json_arc_util_serialization_JsonValue_java_lang_StringBuilder_arc_util_serialization_JsonWriter$OutputType(ctx, (frame[0].o), (frame[0].o), (frame[2].o), (frame[1].o));
	LINE_NUMBER(1047);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonValue_json_arc_util_serialization_JsonValue_java_lang_StringBuilder_arc_util_serialization_JsonWriter$OutputType(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:json", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1051);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1052);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1053);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"{}"_j))));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(1055);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[2].o));
	frame[4].i = temp0;
	LINE_NUMBER(1057);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (123));
	LINE_NUMBER(1058);
	frame[5].i = (jint(0));
	LINE_NUMBER(1059);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	frame[6].o = sp[0].o;
	}
label_9:;
	INST_ALOAD(6);
	if ((--sp)->o == nullptr) goto label_10;
	{
	LINE_NUMBER(1060);
	sp[0].o = frame[2].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[6].o)))->F_name;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1061);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (58));
	LINE_NUMBER(1062);
	M_arc_util_serialization_JsonValue_json_arc_util_serialization_JsonValue_java_lang_StringBuilder_arc_util_serialization_JsonWriter$OutputType(ctx, (frame[0].o), (frame[6].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(1063);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[6].o)))->F_next;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (44));
	}
label_15:;
	{
	LINE_NUMBER(1059);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[6].o)))->F_next;
	frame[6].o = sp[0].o;
	goto label_9;
	}
label_10:;
	LINE_NUMBER(1065);
	goto label_16;
label_16:;
	{
	LINE_NUMBER(1067);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (125));
	LINE_NUMBER(1068);
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(1069);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(1070);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	if (sp[0].o != nullptr) goto label_20;
	}
	{
	LINE_NUMBER(1071);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"[]"_j))));
	goto label_5;
	}
label_20:;
	{
	LINE_NUMBER(1073);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[2].o));
	frame[4].i = temp0;
	LINE_NUMBER(1075);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (91));
	LINE_NUMBER(1076);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	frame[5].o = sp[0].o;
	}
label_24:;
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_25;
	{
	LINE_NUMBER(1077);
	M_arc_util_serialization_JsonValue_json_arc_util_serialization_JsonValue_java_lang_StringBuilder_arc_util_serialization_JsonWriter$OutputType(ctx, (frame[0].o), (frame[5].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(1078);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[5].o)))->F_next;
	if (sp[0].o == nullptr) goto label_28;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (44));
	}
label_28:;
	{
	LINE_NUMBER(1076);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[5].o)))->F_next;
	frame[5].o = sp[0].o;
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(1082);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (93));
	LINE_NUMBER(1083);
	goto label_5;
	}
label_18:;
	{
	LINE_NUMBER(1084);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(1085);
	sp[0].o = frame[2].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_arc_util_serialization_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_5;
	}
label_30:;
	{
	LINE_NUMBER(1086);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isDouble_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isDouble_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_32;
	}
	{
	LINE_NUMBER(1087);
	jdouble temp0 = (jdouble)((func_arc_util_serialization_JsonValue_asDouble_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asDouble_R_double])(ctx, (frame[1].o));
	frame[4].d = temp0;
	LINE_NUMBER(1088);
	jlong temp1 = (jlong)((func_arc_util_serialization_JsonValue_asLong_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asLong_R_long])(ctx, (frame[1].o));
	frame[6].l = temp1;
	LINE_NUMBER(1089);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[4].d));
	LINE_NUMBER(1090);
	goto label_5;
	}
label_32:;
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isLong_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isLong_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_37;
	}
	{
	LINE_NUMBER(1091);
	sp[0].o = frame[2].o;
	jlong temp0 = (jlong)((func_arc_util_serialization_JsonValue_asLong_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asLong_R_long])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	goto label_5;
	}
label_37:;
	{
	LINE_NUMBER(1092);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isBoolean_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_39;
	}
	{
	LINE_NUMBER(1093);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asBoolean_R_boolean])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	goto label_5;
	}
label_39:;
	{
	LINE_NUMBER(1094);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isNull_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_41;
	}
	{
	LINE_NUMBER(1095);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	goto label_5;
	}
label_41:;
	{
	LINE_NUMBER(1097);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unknown object type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	LINE_NUMBER(1098);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1101);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isValue_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isValue_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[0].o));
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(1102);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp += 1;
	if (sp[0].o != nullptr) goto label_4;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_5;
label_4:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_5:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = frame[0].o;
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	sp[2].o = (jobject)SF_arc_util_serialization_JsonWriter$OutputType_minimal;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonWriter$OutputType_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonWriter$OutputType_int_R_java_lang_String])(ctx, sp[1].o, sp[2].o, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonWriter$OutputType_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:prettyPrint", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1106);
	clinit_arc_util_serialization_JsonValue$PrettyPrintSettings(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue$PrettyPrintSettings);
	init_arc_util_serialization_JsonValue$PrettyPrintSettings(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1107);
	((arc_util_serialization_JsonValue$PrettyPrintSettings *) NULL_CHECK((frame[3].o)))->F_outputType = (jref) (frame[1].o);
	LINE_NUMBER(1108);
	((arc_util_serialization_JsonValue$PrettyPrintSettings *) NULL_CHECK((frame[3].o)))->F_singleLineColumns = (frame[2].i);
	LINE_NUMBER(1109);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String])(ctx, (frame[0].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:prettyPrint", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1113);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (512));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1114);
	M_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonValue_java_lang_StringBuilder_int_arc_util_serialization_JsonValue$PrettyPrintSettings(ctx, (frame[0].o), (frame[0].o), (frame[2].o), (jint(0)), (frame[1].o));
	LINE_NUMBER(1115);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonValue_java_lang_StringBuilder_int_arc_util_serialization_JsonValue$PrettyPrintSettings(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:prettyPrint", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(1119);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue$PrettyPrintSettings *) NULL_CHECK((frame[4].o)))->F_outputType;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1120);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1121);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(1122);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"{}"_j))));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(1124);
	jint temp0 = (jint)SM_arc_util_serialization_JsonValue_isFlat_arc_util_serialization_JsonValue_R_boolean(ctx, (frame[1].o));
	if (temp0 != 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(1125);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[2].o));
	frame[7].i = temp0;
	}
label_10:;
	{
	LINE_NUMBER(1128);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[6].i) == 0) goto label_11;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"{\n"_j));
	goto label_12;
label_11:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"{ "_j));
label_12:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1129);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	frame[8].o = sp[0].o;
	}
label_14:;
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_15;
	{
	LINE_NUMBER(1130);
	if ((frame[6].i) == 0) goto label_17;
	}
	{
	SM_arc_util_serialization_JsonValue_indent_int_java_lang_StringBuilder(ctx, (frame[3].i), (frame[2].o));
	}
label_17:;
	{
	LINE_NUMBER(1131);
	sp[0].o = frame[2].o;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[8].o)))->F_name;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1132);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8": "_j))));
	LINE_NUMBER(1133);
	M_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonValue_java_lang_StringBuilder_int_arc_util_serialization_JsonValue$PrettyPrintSettings(ctx, (frame[0].o), (frame[8].o), (frame[2].o), ((frame[3].i) + (jint(1))), (frame[4].o));
	LINE_NUMBER(1134);
	if ((frame[6].i) == 0) goto label_21;
	}
	{
	sp[0].o = frame[5].o;
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonWriter$OutputType_minimal;
	if (sp[0].o == sp[1].o) goto label_22;
	}
label_21:;
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[8].o)))->F_next;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (44));
	}
label_22:;
	{
	LINE_NUMBER(1135);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[6].i) == 0) goto label_23;
	}
	INST_BIPUSH(10);
	goto label_24;
label_23:;
	INST_BIPUSH(32);
label_24:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1136);
	if ((frame[6].i) != 0) goto label_26;
	}
	{
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[2].o));
	if ((temp0 - (frame[7].i)) <= ((jint)((arc_util_serialization_JsonValue$PrettyPrintSettings *) NULL_CHECK((frame[4].o)))->F_singleLineColumns)) goto label_26;
	}
	{
	LINE_NUMBER(1137);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[2].o), (frame[7].i));
	LINE_NUMBER(1138);
	frame[6].i = (jint(1));
	LINE_NUMBER(1139);
	goto label_10;
	}
label_26:;
	{
	LINE_NUMBER(1129);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[8].o)))->F_next;
	frame[8].o = sp[0].o;
	goto label_14;
	}
label_15:;
	LINE_NUMBER(1142);
	goto label_30;
label_30:;
	{
	LINE_NUMBER(1144);
	if ((frame[6].i) == 0) goto label_31;
	}
	{
	SM_arc_util_serialization_JsonValue_indent_int_java_lang_StringBuilder(ctx, ((frame[3].i) - (jint(1))), (frame[2].o));
	}
label_31:;
	{
	LINE_NUMBER(1145);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (125));
	LINE_NUMBER(1146);
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(1147);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(1148);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	if (sp[0].o != nullptr) goto label_35;
	}
	{
	LINE_NUMBER(1149);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"[]"_j))));
	goto label_6;
	}
label_35:;
	{
	LINE_NUMBER(1151);
	jint temp0 = (jint)SM_arc_util_serialization_JsonValue_isFlat_arc_util_serialization_JsonValue_R_boolean(ctx, (frame[1].o));
	if (temp0 != 0) goto label_37;
	}
	INST_ICONST(1);
	goto label_38;
label_37:;
	INST_ICONST(0);
label_38:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(1152);
	if (((jint)((arc_util_serialization_JsonValue$PrettyPrintSettings *) NULL_CHECK((frame[4].o)))->F_wrapNumericArrays) != 0) goto label_40;
	}
	{
	jint temp0 = (jint)SM_arc_util_serialization_JsonValue_isNumeric_arc_util_serialization_JsonValue_R_boolean(ctx, (frame[1].o));
	if (temp0 != 0) goto label_41;
	}
label_40:;
	INST_ICONST(1);
	goto label_42;
label_41:;
	INST_ICONST(0);
label_42:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(1153);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[2].o));
	frame[8].i = temp0;
	}
label_44:;
	{
	LINE_NUMBER(1156);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[6].i) == 0) goto label_45;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[\n"_j));
	goto label_46;
label_45:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[ "_j));
label_46:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1157);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	frame[9].o = sp[0].o;
	}
label_48:;
	INST_ALOAD(9);
	if ((--sp)->o == nullptr) goto label_49;
	{
	LINE_NUMBER(1158);
	if ((frame[6].i) == 0) goto label_51;
	}
	{
	SM_arc_util_serialization_JsonValue_indent_int_java_lang_StringBuilder(ctx, (frame[3].i), (frame[2].o));
	}
label_51:;
	{
	LINE_NUMBER(1159);
	M_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonValue_java_lang_StringBuilder_int_arc_util_serialization_JsonValue$PrettyPrintSettings(ctx, (frame[0].o), (frame[9].o), (frame[2].o), ((frame[3].i) + (jint(1))), (frame[4].o));
	LINE_NUMBER(1160);
	if ((frame[6].i) == 0) goto label_53;
	}
	{
	sp[0].o = frame[5].o;
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonWriter$OutputType_minimal;
	if (sp[0].o == sp[1].o) goto label_54;
	}
label_53:;
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[9].o)))->F_next;
	if (sp[0].o == nullptr) goto label_54;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (44));
	}
label_54:;
	{
	LINE_NUMBER(1161);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[6].i) == 0) goto label_55;
	}
	INST_BIPUSH(10);
	goto label_56;
label_55:;
	INST_BIPUSH(32);
label_56:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1162);
	if ((frame[7].i) == 0) goto label_58;
	}
	INST_ILOAD(6);
	if ((--sp)->i != 0) goto label_58;
	{
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[2].o));
	if ((temp0 - (frame[8].i)) <= ((jint)((arc_util_serialization_JsonValue$PrettyPrintSettings *) NULL_CHECK((frame[4].o)))->F_singleLineColumns)) goto label_58;
	}
	{
	LINE_NUMBER(1163);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[2].o), (frame[8].i));
	LINE_NUMBER(1164);
	frame[6].i = (jint(1));
	LINE_NUMBER(1165);
	goto label_44;
	}
label_58:;
	{
	LINE_NUMBER(1157);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[9].o)))->F_next;
	frame[9].o = sp[0].o;
	goto label_48;
	}
label_49:;
	LINE_NUMBER(1168);
	goto label_62;
label_62:;
	{
	LINE_NUMBER(1170);
	if ((frame[6].i) == 0) goto label_63;
	}
	{
	SM_arc_util_serialization_JsonValue_indent_int_java_lang_StringBuilder(ctx, ((frame[3].i) - (jint(1))), (frame[2].o));
	}
label_63:;
	{
	LINE_NUMBER(1171);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (93));
	LINE_NUMBER(1172);
	goto label_6;
	}
label_33:;
	{
	LINE_NUMBER(1173);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_65;
	}
	{
	LINE_NUMBER(1174);
	sp[0].o = frame[2].o;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_arc_util_serialization_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_6;
	}
label_65:;
	{
	LINE_NUMBER(1175);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isDouble_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isDouble_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_67;
	}
	{
	LINE_NUMBER(1176);
	jdouble temp0 = (jdouble)((func_arc_util_serialization_JsonValue_asDouble_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asDouble_R_double])(ctx, (frame[1].o));
	frame[6].d = temp0;
	LINE_NUMBER(1177);
	jlong temp1 = (jlong)((func_arc_util_serialization_JsonValue_asLong_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asLong_R_long])(ctx, (frame[1].o));
	frame[8].l = temp1;
	LINE_NUMBER(1178);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[6].d));
	LINE_NUMBER(1179);
	goto label_6;
	}
label_67:;
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isLong_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isLong_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_72;
	}
	{
	LINE_NUMBER(1180);
	sp[0].o = frame[2].o;
	jlong temp0 = (jlong)((func_arc_util_serialization_JsonValue_asLong_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asLong_R_long])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	goto label_6;
	}
label_72:;
	{
	LINE_NUMBER(1181);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isBoolean_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_74;
	}
	{
	LINE_NUMBER(1182);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asBoolean_R_boolean])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	goto label_6;
	}
label_74:;
	{
	LINE_NUMBER(1183);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isNull_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_76;
	}
	{
	LINE_NUMBER(1184);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	goto label_6;
	}
label_76:;
	{
	LINE_NUMBER(1186);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unknown object type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	LINE_NUMBER(1187);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonWriter$OutputType_java_io_Writer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:prettyPrint", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1194);
	clinit_arc_util_serialization_JsonValue$PrettyPrintSettings(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue$PrettyPrintSettings);
	init_arc_util_serialization_JsonValue$PrettyPrintSettings(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1195);
	((arc_util_serialization_JsonValue$PrettyPrintSettings *) NULL_CHECK((frame[3].o)))->F_outputType = (jref) (frame[1].o);
	LINE_NUMBER(1196);
	M_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonValue_java_io_Writer_int_arc_util_serialization_JsonValue$PrettyPrintSettings(ctx, (frame[0].o), (frame[0].o), (frame[2].o), (jint(0)), (frame[3].o));
	LINE_NUMBER(1197);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonValue_java_io_Writer_int_arc_util_serialization_JsonValue$PrettyPrintSettings(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:prettyPrint", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(1200);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue$PrettyPrintSettings *) NULL_CHECK((frame[4].o)))->F_outputType;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1201);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1202);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(1203);
	sp[0].o = (jobject)((func_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"{}"_j))));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(1205);
	jint temp0 = (jint)SM_arc_util_serialization_JsonValue_isFlat_arc_util_serialization_JsonValue_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	if (((jint)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_size) <= (6)) goto label_8;
	}
label_7:;
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(1206);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[6].i) == 0) goto label_11;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"{\n"_j));
	goto label_12;
label_11:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"{ "_j));
label_12:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1207);
	frame[7].i = (jint(0));
	LINE_NUMBER(1208);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	frame[8].o = sp[0].o;
	}
label_15:;
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_16;
	{
	LINE_NUMBER(1209);
	if ((frame[6].i) == 0) goto label_18;
	}
	{
	SM_arc_util_serialization_JsonValue_indent_int_java_io_Writer(ctx, (frame[3].i), (frame[2].o));
	}
label_18:;
	{
	LINE_NUMBER(1210);
	sp[0].o = frame[2].o;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[8].o)))->F_name;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1211);
	sp[0].o = (jobject)((func_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8": "_j))));
	LINE_NUMBER(1212);
	M_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonValue_java_io_Writer_int_arc_util_serialization_JsonValue$PrettyPrintSettings(ctx, (frame[0].o), (frame[8].o), (frame[2].o), ((frame[3].i) + (jint(1))), (frame[4].o));
	LINE_NUMBER(1213);
	if ((frame[6].i) == 0) goto label_22;
	}
	{
	sp[0].o = frame[5].o;
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonWriter$OutputType_minimal;
	if (sp[0].o == sp[1].o) goto label_23;
	}
label_22:;
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[8].o)))->F_next;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	sp[0].o = (jobject)((func_java_io_Writer_append_char_R_java_io_Writer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_append_char_R_java_io_Writer])(ctx, (frame[2].o), (44));
	}
label_23:;
	{
	LINE_NUMBER(1214);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[6].i) == 0) goto label_24;
	}
	INST_BIPUSH(10);
	goto label_25;
label_24:;
	INST_BIPUSH(32);
label_25:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_io_Writer_append_char_R_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_append_char_R_java_io_Writer])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1208);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[8].o)))->F_next;
	frame[8].o = sp[0].o;
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(1216);
	if ((frame[6].i) == 0) goto label_27;
	}
	{
	SM_arc_util_serialization_JsonValue_indent_int_java_io_Writer(ctx, ((frame[3].i) - (jint(1))), (frame[2].o));
	}
label_27:;
	{
	LINE_NUMBER(1217);
	sp[0].o = (jobject)((func_java_io_Writer_append_char_R_java_io_Writer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_append_char_R_java_io_Writer])(ctx, (frame[2].o), (125));
	LINE_NUMBER(1218);
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(1219);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(1220);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	if (sp[0].o != nullptr) goto label_31;
	}
	{
	LINE_NUMBER(1221);
	sp[0].o = (jobject)((func_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"[]"_j))));
	goto label_6;
	}
label_31:;
	{
	LINE_NUMBER(1223);
	jint temp0 = (jint)SM_arc_util_serialization_JsonValue_isFlat_arc_util_serialization_JsonValue_R_boolean(ctx, (frame[1].o));
	if (temp0 != 0) goto label_33;
	}
	INST_ICONST(1);
	goto label_34;
label_33:;
	INST_ICONST(0);
label_34:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(1224);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[6].i) == 0) goto label_36;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[\n"_j));
	goto label_37;
label_36:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[ "_j));
label_37:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1225);
	frame[7].i = (jint(0));
	LINE_NUMBER(1226);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	frame[8].o = sp[0].o;
	}
label_40:;
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_41;
	{
	LINE_NUMBER(1227);
	if ((frame[6].i) == 0) goto label_43;
	}
	{
	SM_arc_util_serialization_JsonValue_indent_int_java_io_Writer(ctx, (frame[3].i), (frame[2].o));
	}
label_43:;
	{
	LINE_NUMBER(1228);
	M_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonValue_java_io_Writer_int_arc_util_serialization_JsonValue$PrettyPrintSettings(ctx, (frame[0].o), (frame[8].o), (frame[2].o), ((frame[3].i) + (jint(1))), (frame[4].o));
	LINE_NUMBER(1229);
	if ((frame[6].i) == 0) goto label_45;
	}
	{
	sp[0].o = frame[5].o;
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonWriter$OutputType_minimal;
	if (sp[0].o == sp[1].o) goto label_46;
	}
label_45:;
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[8].o)))->F_next;
	if (sp[0].o == nullptr) goto label_46;
	}
	{
	sp[0].o = (jobject)((func_java_io_Writer_append_char_R_java_io_Writer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_append_char_R_java_io_Writer])(ctx, (frame[2].o), (44));
	}
label_46:;
	{
	LINE_NUMBER(1230);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[6].i) == 0) goto label_47;
	}
	INST_BIPUSH(10);
	goto label_48;
label_47:;
	INST_BIPUSH(32);
label_48:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_io_Writer_append_char_R_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_append_char_R_java_io_Writer])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1226);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[8].o)))->F_next;
	frame[8].o = sp[0].o;
	goto label_40;
	}
label_41:;
	{
	LINE_NUMBER(1232);
	if ((frame[6].i) == 0) goto label_50;
	}
	{
	SM_arc_util_serialization_JsonValue_indent_int_java_io_Writer(ctx, ((frame[3].i) - (jint(1))), (frame[2].o));
	}
label_50:;
	{
	LINE_NUMBER(1233);
	sp[0].o = (jobject)((func_java_io_Writer_append_char_R_java_io_Writer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_append_char_R_java_io_Writer])(ctx, (frame[2].o), (93));
	LINE_NUMBER(1234);
	goto label_6;
	}
label_29:;
	{
	LINE_NUMBER(1235);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_52;
	}
	{
	LINE_NUMBER(1236);
	sp[0].o = frame[2].o;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_arc_util_serialization_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer])(ctx, sp[0].o, sp[1].o);
	goto label_6;
	}
label_52:;
	{
	LINE_NUMBER(1237);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isDouble_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isDouble_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_54;
	}
	{
	LINE_NUMBER(1238);
	jdouble temp0 = (jdouble)((func_arc_util_serialization_JsonValue_asDouble_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asDouble_R_double])(ctx, (frame[1].o));
	frame[6].d = temp0;
	LINE_NUMBER(1239);
	jlong temp1 = (jlong)((func_arc_util_serialization_JsonValue_asLong_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asLong_R_long])(ctx, (frame[1].o));
	frame[8].l = temp1;
	LINE_NUMBER(1240);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_java_lang_Double_toString_double_R_java_lang_String(ctx, (frame[6].d));
	sp[0].o = (jobject)((func_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1241);
	goto label_6;
	}
label_54:;
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isLong_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isLong_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_59;
	}
	{
	LINE_NUMBER(1242);
	sp[0].o = frame[2].o;
	jlong temp0 = (jlong)((func_arc_util_serialization_JsonValue_asLong_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asLong_R_long])(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, temp0);
	sp[0].o = (jobject)((func_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer])(ctx, sp[0].o, sp[1].o);
	goto label_6;
	}
label_59:;
	{
	LINE_NUMBER(1243);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isBoolean_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_61;
	}
	{
	LINE_NUMBER(1244);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asBoolean_R_boolean])(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_java_lang_Boolean_toString_boolean_R_java_lang_String(ctx, temp0);
	sp[0].o = (jobject)((func_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer])(ctx, sp[0].o, sp[1].o);
	goto label_6;
	}
label_61:;
	{
	LINE_NUMBER(1245);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isNull_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_63;
	}
	{
	LINE_NUMBER(1246);
	sp[0].o = (jobject)((func_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	goto label_6;
	}
label_63:;
	{
	LINE_NUMBER(1248);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unknown object type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	LINE_NUMBER(1249);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:iterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1252);
	clinit_arc_util_serialization_JsonValue$JsonIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue$JsonIterator);
	init_arc_util_serialization_JsonValue$JsonIterator_arc_util_serialization_JsonValue(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_trace_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:trace", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1257);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1258);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_array;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[]"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(1259);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_object;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"{}"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(1260);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_1:;
	{
	LINE_NUMBER(1263);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_type;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_array;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(1264);
	frame[1].o = (((jobject) createStringLiteral(ctx, u8"[]"_j)));
	LINE_NUMBER(1265);
	frame[2].i = (jint(0));
	LINE_NUMBER(1266);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_child;
	frame[3].o = sp[0].o;
	}
label_9:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_10;
	{
	LINE_NUMBER(1267);
	if ((frame[3].o) != (frame[0].o)) goto label_12;
	}
	{
	LINE_NUMBER(1268);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1269);
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(1266);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	INST_IINC(2, 1);
	goto label_9;
	}
label_10:;
	LINE_NUMBER(1272);
	goto label_15;
label_5:;
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, sp[0].o, (46));
	if (temp0 == (jint(-1))) goto label_16;
	}
	{
	LINE_NUMBER(1273);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".\""_j))));
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\""_j))), (((jobject) createStringLiteral(ctx, u8"\\\""_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\""_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(1275);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (46));
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(1276);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_trace_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_trace_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_util_serialization_JsonValue;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field name
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field child
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field next
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field prev
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field parent
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field stringValue
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[3])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[4])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[5])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[6])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[85]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[86]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[87]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[88]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[89]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[90]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[91]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[92]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[93]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[94]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[95]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_util_serialization_JsonValue[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_util_serialization_JsonValue_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_util_serialization_JsonValue_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean,
	(void *) M_arc_util_serialization_JsonValue_require_int_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_JsonValue_require_java_lang_String_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_JsonValue_remove_int_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_JsonValue_asString_R_java_lang_String,
	(void *) M_arc_util_serialization_JsonValue_asFloat_R_float,
	(void *) M_arc_util_serialization_JsonValue_asDouble_R_double,
	(void *) M_arc_util_serialization_JsonValue_asLong_R_long,
	(void *) M_arc_util_serialization_JsonValue_asInt_R_int,
	(void *) M_arc_util_serialization_JsonValue_asBoolean_R_boolean,
	(void *) M_arc_util_serialization_JsonValue_asByte_R_byte,
	(void *) M_arc_util_serialization_JsonValue_asShort_R_short,
	(void *) M_arc_util_serialization_JsonValue_asChar_R_char,
	(void *) M_arc_util_serialization_JsonValue_asStringArray_R_Array1_java_lang_String,
	(void *) M_arc_util_serialization_JsonValue_asFloatArray_R_Array1_float,
	(void *) M_arc_util_serialization_JsonValue_asDoubleArray_R_Array1_double,
	(void *) M_arc_util_serialization_JsonValue_asLongArray_R_Array1_long,
	(void *) M_arc_util_serialization_JsonValue_asIntArray_R_Array1_int,
	(void *) M_arc_util_serialization_JsonValue_asBooleanArray_R_Array1_boolean,
	(void *) M_arc_util_serialization_JsonValue_asByteArray_R_Array1_byte,
	(void *) M_arc_util_serialization_JsonValue_asShortArray_R_Array1_short,
	(void *) M_arc_util_serialization_JsonValue_mismatch_java_lang_String,
	(void *) M_arc_util_serialization_JsonValue_typeMismatch_java_lang_String_R_java_lang_RuntimeException,
	(void *) M_arc_util_serialization_JsonValue_asCharArray_R_Array1_char,
	(void *) M_arc_util_serialization_JsonValue_hasChild_java_lang_String_R_boolean,
	(void *) M_arc_util_serialization_JsonValue_getChild_java_lang_String_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String,
	(void *) M_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float,
	(void *) M_arc_util_serialization_JsonValue_getDouble_java_lang_String_double_R_double,
	(void *) M_arc_util_serialization_JsonValue_getLong_java_lang_String_long_R_long,
	(void *) M_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int,
	(void *) M_arc_util_serialization_JsonValue_getBoolean_java_lang_String_boolean_R_boolean,
	(void *) M_arc_util_serialization_JsonValue_getByte_java_lang_String_byte_R_byte,
	(void *) M_arc_util_serialization_JsonValue_getShort_java_lang_String_short_R_short,
	(void *) M_arc_util_serialization_JsonValue_getChar_java_lang_String_char_R_char,
	(void *) M_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String,
	(void *) M_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float,
	(void *) M_arc_util_serialization_JsonValue_getDouble_java_lang_String_R_double,
	(void *) M_arc_util_serialization_JsonValue_getLong_java_lang_String_R_long,
	(void *) M_arc_util_serialization_JsonValue_getInt_java_lang_String_R_int,
	(void *) M_arc_util_serialization_JsonValue_getBoolean_java_lang_String_R_boolean,
	(void *) M_arc_util_serialization_JsonValue_getByte_java_lang_String_R_byte,
	(void *) M_arc_util_serialization_JsonValue_getShort_java_lang_String_R_short,
	(void *) M_arc_util_serialization_JsonValue_getChar_java_lang_String_R_char,
	(void *) M_arc_util_serialization_JsonValue_getString_int_R_java_lang_String,
	(void *) M_arc_util_serialization_JsonValue_getFloat_int_R_float,
	(void *) M_arc_util_serialization_JsonValue_getDouble_int_R_double,
	(void *) M_arc_util_serialization_JsonValue_getLong_int_R_long,
	(void *) M_arc_util_serialization_JsonValue_getInt_int_R_int,
	(void *) M_arc_util_serialization_JsonValue_getBoolean_int_R_boolean,
	(void *) M_arc_util_serialization_JsonValue_getByte_int_R_byte,
	(void *) M_arc_util_serialization_JsonValue_getShort_int_R_short,
	(void *) M_arc_util_serialization_JsonValue_getChar_int_R_char,
	(void *) M_arc_util_serialization_JsonValue_type_R_arc_util_serialization_JsonValue$ValueType,
	(void *) M_arc_util_serialization_JsonValue_setType_arc_util_serialization_JsonValue$ValueType,
	(void *) M_arc_util_serialization_JsonValue_isArray_R_boolean,
	(void *) M_arc_util_serialization_JsonValue_isObject_R_boolean,
	(void *) M_arc_util_serialization_JsonValue_isString_R_boolean,
	(void *) M_arc_util_serialization_JsonValue_isNumber_R_boolean,
	(void *) M_arc_util_serialization_JsonValue_isDouble_R_boolean,
	(void *) M_arc_util_serialization_JsonValue_isLong_R_boolean,
	(void *) M_arc_util_serialization_JsonValue_isBoolean_R_boolean,
	(void *) M_arc_util_serialization_JsonValue_isNull_R_boolean,
	(void *) M_arc_util_serialization_JsonValue_isValue_R_boolean,
	(void *) M_arc_util_serialization_JsonValue_name_R_java_lang_String,
	(void *) M_arc_util_serialization_JsonValue_setName_java_lang_String,
	(void *) M_arc_util_serialization_JsonValue_parent_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_JsonValue_child_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_JsonValue_addChild_java_lang_String_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_JsonValue_addChild_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_JsonValue_next_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_JsonValue_setNext_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_JsonValue_prev_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_JsonValue_setPrev_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_JsonValue_set_java_lang_String,
	(void *) M_arc_util_serialization_JsonValue_set_double_java_lang_String,
	(void *) M_arc_util_serialization_JsonValue_set_long_java_lang_String,
	(void *) M_arc_util_serialization_JsonValue_set_boolean,
	(void *) M_arc_util_serialization_JsonValue_toJson_arc_util_serialization_JsonWriter$OutputType_R_java_lang_String,
	(void *) M_arc_util_serialization_JsonValue_json_arc_util_serialization_JsonValue_java_lang_StringBuilder_arc_util_serialization_JsonWriter$OutputType,
	(void *) M_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonWriter$OutputType_int_R_java_lang_String,
	(void *) M_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String,
	(void *) M_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonValue_java_lang_StringBuilder_int_arc_util_serialization_JsonValue$PrettyPrintSettings,
	(void *) M_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonWriter$OutputType_java_io_Writer,
	(void *) M_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonValue_java_io_Writer_int_arc_util_serialization_JsonValue$PrettyPrintSettings,
	(void *) M_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator,
	(void *) M_arc_util_serialization_JsonValue_trace_R_java_lang_String,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "get", "(I)Larc/util/serialization/JsonValue;" },
	{ "get", "(Ljava/lang/String;)Larc/util/serialization/JsonValue;" },
	{ "has", "(Ljava/lang/String;)Z" },
	{ "require", "(I)Larc/util/serialization/JsonValue;" },
	{ "require", "(Ljava/lang/String;)Larc/util/serialization/JsonValue;" },
	{ "remove", "(I)Larc/util/serialization/JsonValue;" },
	{ "remove", "(Ljava/lang/String;)Larc/util/serialization/JsonValue;" },
	{ "asString", "()Ljava/lang/String;" },
	{ "asFloat", "()F" },
	{ "asDouble", "()D" },
	{ "asLong", "()J" },
	{ "asInt", "()I" },
	{ "asBoolean", "()Z" },
	{ "asByte", "()B" },
	{ "asShort", "()S" },
	{ "asChar", "()C" },
	{ "asStringArray", "()[Ljava/lang/String;" },
	{ "asFloatArray", "()[F" },
	{ "asDoubleArray", "()[D" },
	{ "asLongArray", "()[J" },
	{ "asIntArray", "()[I" },
	{ "asBooleanArray", "()[Z" },
	{ "asByteArray", "()[B" },
	{ "asShortArray", "()[S" },
	{ "mismatch", "(Ljava/lang/String;)V" },
	{ "typeMismatch", "(Ljava/lang/String;)Ljava/lang/RuntimeException;" },
	{ "asCharArray", "()[C" },
	{ "hasChild", "(Ljava/lang/String;)Z" },
	{ "getChild", "(Ljava/lang/String;)Larc/util/serialization/JsonValue;" },
	{ "getString", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;" },
	{ "getFloat", "(Ljava/lang/String;F)F" },
	{ "getDouble", "(Ljava/lang/String;D)D" },
	{ "getLong", "(Ljava/lang/String;J)J" },
	{ "getInt", "(Ljava/lang/String;I)I" },
	{ "getBoolean", "(Ljava/lang/String;Z)Z" },
	{ "getByte", "(Ljava/lang/String;B)B" },
	{ "getShort", "(Ljava/lang/String;S)S" },
	{ "getChar", "(Ljava/lang/String;C)C" },
	{ "getString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "getFloat", "(Ljava/lang/String;)F" },
	{ "getDouble", "(Ljava/lang/String;)D" },
	{ "getLong", "(Ljava/lang/String;)J" },
	{ "getInt", "(Ljava/lang/String;)I" },
	{ "getBoolean", "(Ljava/lang/String;)Z" },
	{ "getByte", "(Ljava/lang/String;)B" },
	{ "getShort", "(Ljava/lang/String;)S" },
	{ "getChar", "(Ljava/lang/String;)C" },
	{ "getString", "(I)Ljava/lang/String;" },
	{ "getFloat", "(I)F" },
	{ "getDouble", "(I)D" },
	{ "getLong", "(I)J" },
	{ "getInt", "(I)I" },
	{ "getBoolean", "(I)Z" },
	{ "getByte", "(I)B" },
	{ "getShort", "(I)S" },
	{ "getChar", "(I)C" },
	{ "type", "()Larc/util/serialization/JsonValue$ValueType;" },
	{ "setType", "(Larc/util/serialization/JsonValue$ValueType;)V" },
	{ "isArray", "()Z" },
	{ "isObject", "()Z" },
	{ "isString", "()Z" },
	{ "isNumber", "()Z" },
	{ "isDouble", "()Z" },
	{ "isLong", "()Z" },
	{ "isBoolean", "()Z" },
	{ "isNull", "()Z" },
	{ "isValue", "()Z" },
	{ "name", "()Ljava/lang/String;" },
	{ "setName", "(Ljava/lang/String;)V" },
	{ "parent", "()Larc/util/serialization/JsonValue;" },
	{ "child", "()Larc/util/serialization/JsonValue;" },
	{ "addChild", "(Ljava/lang/String;Larc/util/serialization/JsonValue;)V" },
	{ "addChild", "(Larc/util/serialization/JsonValue;)V" },
	{ "next", "()Larc/util/serialization/JsonValue;" },
	{ "setNext", "(Larc/util/serialization/JsonValue;)V" },
	{ "prev", "()Larc/util/serialization/JsonValue;" },
	{ "setPrev", "(Larc/util/serialization/JsonValue;)V" },
	{ "set", "(Ljava/lang/String;)V" },
	{ "set", "(DLjava/lang/String;)V" },
	{ "set", "(JLjava/lang/String;)V" },
	{ "set", "(Z)V" },
	{ "toJson", "(Larc/util/serialization/JsonWriter$OutputType;)Ljava/lang/String;" },
	{ "json", "(Larc/util/serialization/JsonValue;Ljava/lang/StringBuilder;Larc/util/serialization/JsonWriter$OutputType;)V" },
	{ "prettyPrint", "(Larc/util/serialization/JsonWriter$OutputType;I)Ljava/lang/String;" },
	{ "prettyPrint", "(Larc/util/serialization/JsonValue$PrettyPrintSettings;)Ljava/lang/String;" },
	{ "prettyPrint", "(Larc/util/serialization/JsonValue;Ljava/lang/StringBuilder;ILarc/util/serialization/JsonValue$PrettyPrintSettings;)V" },
	{ "prettyPrint", "(Larc/util/serialization/JsonWriter$OutputType;Ljava/io/Writer;)V" },
	{ "prettyPrint", "(Larc/util/serialization/JsonValue;Ljava/io/Writer;ILarc/util/serialization/JsonValue$PrettyPrintSettings;)V" },
	{ "iterator", "()Larc/util/serialization/JsonValue$JsonIterator;" },
	{ "trace", "()Ljava/lang/String;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static jclass innerClasses[] {
	&class_arc_util_serialization_JsonValue$ValueType,
	&class_arc_util_serialization_JsonValue$PrettyPrintSettings,
	&class_arc_util_serialization_JsonValue$JsonIterator,
};

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(arc_util_serialization_JsonValue, F_name), "Ljava/lang/String;", 1 },
	{ "child", &class_arc_util_serialization_JsonValue, offsetof(arc_util_serialization_JsonValue, F_child), "Larc/util/serialization/JsonValue;", 1 },
	{ "next", &class_arc_util_serialization_JsonValue, offsetof(arc_util_serialization_JsonValue, F_next), "Larc/util/serialization/JsonValue;", 1 },
	{ "prev", &class_arc_util_serialization_JsonValue, offsetof(arc_util_serialization_JsonValue, F_prev), "Larc/util/serialization/JsonValue;", 1 },
	{ "parent", &class_arc_util_serialization_JsonValue, offsetof(arc_util_serialization_JsonValue, F_parent), "Larc/util/serialization/JsonValue;", 1 },
	{ "size", &class_int, offsetof(arc_util_serialization_JsonValue, F_size), "I", 1 },
	{ "type", &class_arc_util_serialization_JsonValue$ValueType, offsetof(arc_util_serialization_JsonValue, F_type), "Larc/util/serialization/JsonValue$ValueType;", 2 },
	{ "stringValue", &class_java_lang_String, offsetof(arc_util_serialization_JsonValue, F_stringValue), "Ljava/lang/String;", 2 },
	{ "doubleValue", &class_double, offsetof(arc_util_serialization_JsonValue, F_doubleValue), "D", 2 },
	{ "longValue", &class_long, offsetof(arc_util_serialization_JsonValue, F_longValue), "J", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_serialization_JsonValue_arc_util_serialization_JsonValue$ValueType, 0, "(Larc/util/serialization/JsonValue$ValueType;)V", 1 },
	{ "<init>", (intptr_t) init_arc_util_serialization_JsonValue_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_arc_util_serialization_JsonValue_double, 0, "(D)V", 1 },
	{ "<init>", (intptr_t) init_arc_util_serialization_JsonValue_long, 0, "(J)V", 1 },
	{ "<init>", (intptr_t) init_arc_util_serialization_JsonValue_double_java_lang_String, 0, "(DLjava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_arc_util_serialization_JsonValue_long_java_lang_String, 0, "(JLjava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_arc_util_serialization_JsonValue_boolean, 0, "(Z)V", 1 },
	{ "isFlat", (intptr_t) SM_arc_util_serialization_JsonValue_isFlat_arc_util_serialization_JsonValue_R_boolean, 0, "(Larc/util/serialization/JsonValue;)Z", 10 },
	{ "isNumeric", (intptr_t) SM_arc_util_serialization_JsonValue_isNumeric_arc_util_serialization_JsonValue_R_boolean, 0, "(Larc/util/serialization/JsonValue;)Z", 10 },
	{ "indent", (intptr_t) SM_arc_util_serialization_JsonValue_indent_int_java_lang_StringBuilder, 0, "(ILjava/lang/StringBuilder;)V", 10 },
	{ "indent", (intptr_t) SM_arc_util_serialization_JsonValue_indent_int_java_io_Writer, 0, "(ILjava/io/Writer;)V", 10 },
	{ "get", (intptr_t) M_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue, "(I)Larc/util/serialization/JsonValue;", 1 },
	{ "get", (intptr_t) M_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue, "(Ljava/lang/String;)Larc/util/serialization/JsonValue;", 1 },
	{ "has", (intptr_t) M_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean, VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "require", (intptr_t) M_arc_util_serialization_JsonValue_require_int_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_JsonValue_require_int_R_arc_util_serialization_JsonValue, "(I)Larc/util/serialization/JsonValue;", 1 },
	{ "require", (intptr_t) M_arc_util_serialization_JsonValue_require_java_lang_String_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_JsonValue_require_java_lang_String_R_arc_util_serialization_JsonValue, "(Ljava/lang/String;)Larc/util/serialization/JsonValue;", 1 },
	{ "remove", (intptr_t) M_arc_util_serialization_JsonValue_remove_int_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_JsonValue_remove_int_R_arc_util_serialization_JsonValue, "(I)Larc/util/serialization/JsonValue;", 1 },
	{ "remove", (intptr_t) M_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue, "(Ljava/lang/String;)Larc/util/serialization/JsonValue;", 1 },
	{ "asString", (intptr_t) M_arc_util_serialization_JsonValue_asString_R_java_lang_String, VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "asFloat", (intptr_t) M_arc_util_serialization_JsonValue_asFloat_R_float, VTABLE_arc_util_serialization_JsonValue_asFloat_R_float, "()F", 1 },
	{ "asDouble", (intptr_t) M_arc_util_serialization_JsonValue_asDouble_R_double, VTABLE_arc_util_serialization_JsonValue_asDouble_R_double, "()D", 1 },
	{ "asLong", (intptr_t) M_arc_util_serialization_JsonValue_asLong_R_long, VTABLE_arc_util_serialization_JsonValue_asLong_R_long, "()J", 1 },
	{ "asInt", (intptr_t) M_arc_util_serialization_JsonValue_asInt_R_int, VTABLE_arc_util_serialization_JsonValue_asInt_R_int, "()I", 1 },
	{ "asBoolean", (intptr_t) M_arc_util_serialization_JsonValue_asBoolean_R_boolean, VTABLE_arc_util_serialization_JsonValue_asBoolean_R_boolean, "()Z", 1 },
	{ "asByte", (intptr_t) M_arc_util_serialization_JsonValue_asByte_R_byte, VTABLE_arc_util_serialization_JsonValue_asByte_R_byte, "()B", 1 },
	{ "asShort", (intptr_t) M_arc_util_serialization_JsonValue_asShort_R_short, VTABLE_arc_util_serialization_JsonValue_asShort_R_short, "()S", 1 },
	{ "asChar", (intptr_t) M_arc_util_serialization_JsonValue_asChar_R_char, VTABLE_arc_util_serialization_JsonValue_asChar_R_char, "()C", 1 },
	{ "asStringArray", (intptr_t) M_arc_util_serialization_JsonValue_asStringArray_R_Array1_java_lang_String, VTABLE_arc_util_serialization_JsonValue_asStringArray_R_Array1_java_lang_String, "()[Ljava/lang/String;", 1 },
	{ "asFloatArray", (intptr_t) M_arc_util_serialization_JsonValue_asFloatArray_R_Array1_float, VTABLE_arc_util_serialization_JsonValue_asFloatArray_R_Array1_float, "()[F", 1 },
	{ "asDoubleArray", (intptr_t) M_arc_util_serialization_JsonValue_asDoubleArray_R_Array1_double, VTABLE_arc_util_serialization_JsonValue_asDoubleArray_R_Array1_double, "()[D", 1 },
	{ "asLongArray", (intptr_t) M_arc_util_serialization_JsonValue_asLongArray_R_Array1_long, VTABLE_arc_util_serialization_JsonValue_asLongArray_R_Array1_long, "()[J", 1 },
	{ "asIntArray", (intptr_t) M_arc_util_serialization_JsonValue_asIntArray_R_Array1_int, VTABLE_arc_util_serialization_JsonValue_asIntArray_R_Array1_int, "()[I", 1 },
	{ "asBooleanArray", (intptr_t) M_arc_util_serialization_JsonValue_asBooleanArray_R_Array1_boolean, VTABLE_arc_util_serialization_JsonValue_asBooleanArray_R_Array1_boolean, "()[Z", 1 },
	{ "asByteArray", (intptr_t) M_arc_util_serialization_JsonValue_asByteArray_R_Array1_byte, VTABLE_arc_util_serialization_JsonValue_asByteArray_R_Array1_byte, "()[B", 1 },
	{ "asShortArray", (intptr_t) M_arc_util_serialization_JsonValue_asShortArray_R_Array1_short, VTABLE_arc_util_serialization_JsonValue_asShortArray_R_Array1_short, "()[S", 1 },
	{ "mismatch", (intptr_t) M_arc_util_serialization_JsonValue_mismatch_java_lang_String, VTABLE_arc_util_serialization_JsonValue_mismatch_java_lang_String, "(Ljava/lang/String;)V", 2 },
	{ "typeMismatch", (intptr_t) M_arc_util_serialization_JsonValue_typeMismatch_java_lang_String_R_java_lang_RuntimeException, VTABLE_arc_util_serialization_JsonValue_typeMismatch_java_lang_String_R_java_lang_RuntimeException, "(Ljava/lang/String;)Ljava/lang/RuntimeException;", 2 },
	{ "asCharArray", (intptr_t) M_arc_util_serialization_JsonValue_asCharArray_R_Array1_char, VTABLE_arc_util_serialization_JsonValue_asCharArray_R_Array1_char, "()[C", 1 },
	{ "hasChild", (intptr_t) M_arc_util_serialization_JsonValue_hasChild_java_lang_String_R_boolean, VTABLE_arc_util_serialization_JsonValue_hasChild_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "getChild", (intptr_t) M_arc_util_serialization_JsonValue_getChild_java_lang_String_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_JsonValue_getChild_java_lang_String_R_arc_util_serialization_JsonValue, "(Ljava/lang/String;)Larc/util/serialization/JsonValue;", 1 },
	{ "getString", (intptr_t) M_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String, VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "getFloat", (intptr_t) M_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float, VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float, "(Ljava/lang/String;F)F", 1 },
	{ "getDouble", (intptr_t) M_arc_util_serialization_JsonValue_getDouble_java_lang_String_double_R_double, VTABLE_arc_util_serialization_JsonValue_getDouble_java_lang_String_double_R_double, "(Ljava/lang/String;D)D", 1 },
	{ "getLong", (intptr_t) M_arc_util_serialization_JsonValue_getLong_java_lang_String_long_R_long, VTABLE_arc_util_serialization_JsonValue_getLong_java_lang_String_long_R_long, "(Ljava/lang/String;J)J", 1 },
	{ "getInt", (intptr_t) M_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int, VTABLE_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int, "(Ljava/lang/String;I)I", 1 },
	{ "getBoolean", (intptr_t) M_arc_util_serialization_JsonValue_getBoolean_java_lang_String_boolean_R_boolean, VTABLE_arc_util_serialization_JsonValue_getBoolean_java_lang_String_boolean_R_boolean, "(Ljava/lang/String;Z)Z", 1 },
	{ "getByte", (intptr_t) M_arc_util_serialization_JsonValue_getByte_java_lang_String_byte_R_byte, VTABLE_arc_util_serialization_JsonValue_getByte_java_lang_String_byte_R_byte, "(Ljava/lang/String;B)B", 1 },
	{ "getShort", (intptr_t) M_arc_util_serialization_JsonValue_getShort_java_lang_String_short_R_short, VTABLE_arc_util_serialization_JsonValue_getShort_java_lang_String_short_R_short, "(Ljava/lang/String;S)S", 1 },
	{ "getChar", (intptr_t) M_arc_util_serialization_JsonValue_getChar_java_lang_String_char_R_char, VTABLE_arc_util_serialization_JsonValue_getChar_java_lang_String_char_R_char, "(Ljava/lang/String;C)C", 1 },
	{ "getString", (intptr_t) M_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String, VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "getFloat", (intptr_t) M_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float, VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float, "(Ljava/lang/String;)F", 1 },
	{ "getDouble", (intptr_t) M_arc_util_serialization_JsonValue_getDouble_java_lang_String_R_double, VTABLE_arc_util_serialization_JsonValue_getDouble_java_lang_String_R_double, "(Ljava/lang/String;)D", 1 },
	{ "getLong", (intptr_t) M_arc_util_serialization_JsonValue_getLong_java_lang_String_R_long, VTABLE_arc_util_serialization_JsonValue_getLong_java_lang_String_R_long, "(Ljava/lang/String;)J", 1 },
	{ "getInt", (intptr_t) M_arc_util_serialization_JsonValue_getInt_java_lang_String_R_int, VTABLE_arc_util_serialization_JsonValue_getInt_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "getBoolean", (intptr_t) M_arc_util_serialization_JsonValue_getBoolean_java_lang_String_R_boolean, VTABLE_arc_util_serialization_JsonValue_getBoolean_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "getByte", (intptr_t) M_arc_util_serialization_JsonValue_getByte_java_lang_String_R_byte, VTABLE_arc_util_serialization_JsonValue_getByte_java_lang_String_R_byte, "(Ljava/lang/String;)B", 1 },
	{ "getShort", (intptr_t) M_arc_util_serialization_JsonValue_getShort_java_lang_String_R_short, VTABLE_arc_util_serialization_JsonValue_getShort_java_lang_String_R_short, "(Ljava/lang/String;)S", 1 },
	{ "getChar", (intptr_t) M_arc_util_serialization_JsonValue_getChar_java_lang_String_R_char, VTABLE_arc_util_serialization_JsonValue_getChar_java_lang_String_R_char, "(Ljava/lang/String;)C", 1 },
	{ "getString", (intptr_t) M_arc_util_serialization_JsonValue_getString_int_R_java_lang_String, VTABLE_arc_util_serialization_JsonValue_getString_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "getFloat", (intptr_t) M_arc_util_serialization_JsonValue_getFloat_int_R_float, VTABLE_arc_util_serialization_JsonValue_getFloat_int_R_float, "(I)F", 1 },
	{ "getDouble", (intptr_t) M_arc_util_serialization_JsonValue_getDouble_int_R_double, VTABLE_arc_util_serialization_JsonValue_getDouble_int_R_double, "(I)D", 1 },
	{ "getLong", (intptr_t) M_arc_util_serialization_JsonValue_getLong_int_R_long, VTABLE_arc_util_serialization_JsonValue_getLong_int_R_long, "(I)J", 1 },
	{ "getInt", (intptr_t) M_arc_util_serialization_JsonValue_getInt_int_R_int, VTABLE_arc_util_serialization_JsonValue_getInt_int_R_int, "(I)I", 1 },
	{ "getBoolean", (intptr_t) M_arc_util_serialization_JsonValue_getBoolean_int_R_boolean, VTABLE_arc_util_serialization_JsonValue_getBoolean_int_R_boolean, "(I)Z", 1 },
	{ "getByte", (intptr_t) M_arc_util_serialization_JsonValue_getByte_int_R_byte, VTABLE_arc_util_serialization_JsonValue_getByte_int_R_byte, "(I)B", 1 },
	{ "getShort", (intptr_t) M_arc_util_serialization_JsonValue_getShort_int_R_short, VTABLE_arc_util_serialization_JsonValue_getShort_int_R_short, "(I)S", 1 },
	{ "getChar", (intptr_t) M_arc_util_serialization_JsonValue_getChar_int_R_char, VTABLE_arc_util_serialization_JsonValue_getChar_int_R_char, "(I)C", 1 },
	{ "type", (intptr_t) M_arc_util_serialization_JsonValue_type_R_arc_util_serialization_JsonValue$ValueType, VTABLE_arc_util_serialization_JsonValue_type_R_arc_util_serialization_JsonValue$ValueType, "()Larc/util/serialization/JsonValue$ValueType;", 1 },
	{ "setType", (intptr_t) M_arc_util_serialization_JsonValue_setType_arc_util_serialization_JsonValue$ValueType, VTABLE_arc_util_serialization_JsonValue_setType_arc_util_serialization_JsonValue$ValueType, "(Larc/util/serialization/JsonValue$ValueType;)V", 1 },
	{ "isArray", (intptr_t) M_arc_util_serialization_JsonValue_isArray_R_boolean, VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean, "()Z", 1 },
	{ "isObject", (intptr_t) M_arc_util_serialization_JsonValue_isObject_R_boolean, VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean, "()Z", 1 },
	{ "isString", (intptr_t) M_arc_util_serialization_JsonValue_isString_R_boolean, VTABLE_arc_util_serialization_JsonValue_isString_R_boolean, "()Z", 1 },
	{ "isNumber", (intptr_t) M_arc_util_serialization_JsonValue_isNumber_R_boolean, VTABLE_arc_util_serialization_JsonValue_isNumber_R_boolean, "()Z", 1 },
	{ "isDouble", (intptr_t) M_arc_util_serialization_JsonValue_isDouble_R_boolean, VTABLE_arc_util_serialization_JsonValue_isDouble_R_boolean, "()Z", 1 },
	{ "isLong", (intptr_t) M_arc_util_serialization_JsonValue_isLong_R_boolean, VTABLE_arc_util_serialization_JsonValue_isLong_R_boolean, "()Z", 1 },
	{ "isBoolean", (intptr_t) M_arc_util_serialization_JsonValue_isBoolean_R_boolean, VTABLE_arc_util_serialization_JsonValue_isBoolean_R_boolean, "()Z", 1 },
	{ "isNull", (intptr_t) M_arc_util_serialization_JsonValue_isNull_R_boolean, VTABLE_arc_util_serialization_JsonValue_isNull_R_boolean, "()Z", 1 },
	{ "isValue", (intptr_t) M_arc_util_serialization_JsonValue_isValue_R_boolean, VTABLE_arc_util_serialization_JsonValue_isValue_R_boolean, "()Z", 1 },
	{ "name", (intptr_t) M_arc_util_serialization_JsonValue_name_R_java_lang_String, VTABLE_arc_util_serialization_JsonValue_name_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setName", (intptr_t) M_arc_util_serialization_JsonValue_setName_java_lang_String, VTABLE_arc_util_serialization_JsonValue_setName_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "parent", (intptr_t) M_arc_util_serialization_JsonValue_parent_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_JsonValue_parent_R_arc_util_serialization_JsonValue, "()Larc/util/serialization/JsonValue;", 1 },
	{ "child", (intptr_t) M_arc_util_serialization_JsonValue_child_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_JsonValue_child_R_arc_util_serialization_JsonValue, "()Larc/util/serialization/JsonValue;", 1 },
	{ "addChild", (intptr_t) M_arc_util_serialization_JsonValue_addChild_java_lang_String_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_JsonValue_addChild_java_lang_String_arc_util_serialization_JsonValue, "(Ljava/lang/String;Larc/util/serialization/JsonValue;)V", 1 },
	{ "addChild", (intptr_t) M_arc_util_serialization_JsonValue_addChild_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_JsonValue_addChild_arc_util_serialization_JsonValue, "(Larc/util/serialization/JsonValue;)V", 1 },
	{ "next", (intptr_t) M_arc_util_serialization_JsonValue_next_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_JsonValue_next_R_arc_util_serialization_JsonValue, "()Larc/util/serialization/JsonValue;", 1 },
	{ "setNext", (intptr_t) M_arc_util_serialization_JsonValue_setNext_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_JsonValue_setNext_arc_util_serialization_JsonValue, "(Larc/util/serialization/JsonValue;)V", 1 },
	{ "prev", (intptr_t) M_arc_util_serialization_JsonValue_prev_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_JsonValue_prev_R_arc_util_serialization_JsonValue, "()Larc/util/serialization/JsonValue;", 1 },
	{ "setPrev", (intptr_t) M_arc_util_serialization_JsonValue_setPrev_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_JsonValue_setPrev_arc_util_serialization_JsonValue, "(Larc/util/serialization/JsonValue;)V", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_JsonValue_set_java_lang_String, VTABLE_arc_util_serialization_JsonValue_set_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_JsonValue_set_double_java_lang_String, VTABLE_arc_util_serialization_JsonValue_set_double_java_lang_String, "(DLjava/lang/String;)V", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_JsonValue_set_long_java_lang_String, VTABLE_arc_util_serialization_JsonValue_set_long_java_lang_String, "(JLjava/lang/String;)V", 1 },
	{ "set", (intptr_t) M_arc_util_serialization_JsonValue_set_boolean, VTABLE_arc_util_serialization_JsonValue_set_boolean, "(Z)V", 1 },
	{ "toJson", (intptr_t) M_arc_util_serialization_JsonValue_toJson_arc_util_serialization_JsonWriter$OutputType_R_java_lang_String, VTABLE_arc_util_serialization_JsonValue_toJson_arc_util_serialization_JsonWriter$OutputType_R_java_lang_String, "(Larc/util/serialization/JsonWriter$OutputType;)Ljava/lang/String;", 1 },
	{ "json", (intptr_t) M_arc_util_serialization_JsonValue_json_arc_util_serialization_JsonValue_java_lang_StringBuilder_arc_util_serialization_JsonWriter$OutputType, VTABLE_arc_util_serialization_JsonValue_json_arc_util_serialization_JsonValue_java_lang_StringBuilder_arc_util_serialization_JsonWriter$OutputType, "(Larc/util/serialization/JsonValue;Ljava/lang/StringBuilder;Larc/util/serialization/JsonWriter$OutputType;)V", 2 },
	{ "toString", (intptr_t) M_arc_util_serialization_JsonValue_toString_R_java_lang_String, VTABLE_arc_util_serialization_JsonValue_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "prettyPrint", (intptr_t) M_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonWriter$OutputType_int_R_java_lang_String, VTABLE_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonWriter$OutputType_int_R_java_lang_String, "(Larc/util/serialization/JsonWriter$OutputType;I)Ljava/lang/String;", 1 },
	{ "prettyPrint", (intptr_t) M_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String, VTABLE_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String, "(Larc/util/serialization/JsonValue$PrettyPrintSettings;)Ljava/lang/String;", 1 },
	{ "prettyPrint", (intptr_t) M_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonValue_java_lang_StringBuilder_int_arc_util_serialization_JsonValue$PrettyPrintSettings, VTABLE_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonValue_java_lang_StringBuilder_int_arc_util_serialization_JsonValue$PrettyPrintSettings, "(Larc/util/serialization/JsonValue;Ljava/lang/StringBuilder;ILarc/util/serialization/JsonValue$PrettyPrintSettings;)V", 2 },
	{ "prettyPrint", (intptr_t) M_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonWriter$OutputType_java_io_Writer, VTABLE_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonWriter$OutputType_java_io_Writer, "(Larc/util/serialization/JsonWriter$OutputType;Ljava/io/Writer;)V", 1 },
	{ "prettyPrint", (intptr_t) M_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonValue_java_io_Writer_int_arc_util_serialization_JsonValue$PrettyPrintSettings, VTABLE_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonValue_java_io_Writer_int_arc_util_serialization_JsonValue$PrettyPrintSettings, "(Larc/util/serialization/JsonValue;Ljava/io/Writer;ILarc/util/serialization/JsonValue$PrettyPrintSettings;)V", 2 },
	{ "iterator", (intptr_t) M_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator, VTABLE_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator, "()Larc/util/serialization/JsonValue$JsonIterator;", 1 },
	{ "trace", (intptr_t) M_arc_util_serialization_JsonValue_trace_R_java_lang_String, VTABLE_arc_util_serialization_JsonValue_trace_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "iterator", (intptr_t) M_arc_util_serialization_JsonValue_iterator_R_java_util_Iterator, VTABLE_arc_util_serialization_JsonValue_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 4161 },
};

Class class_arc_util_serialization_JsonValue{
		.nativeName = (intptr_t) "arc/util/serialization/JsonValue",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_serialization_JsonValue),
		.classVtable = (intptr_t) vtable_arc_util_serialization_JsonValue,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_JsonValue,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_util_serialization_JsonValue,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 103,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 104,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_JsonValue = registerClass(&class_arc_util_serialization_JsonValue);

}
