#include "java/lang/StringBuilder.h"
#include "java/lang/Math.h"
#include "java/lang/Integer.h"
#include "java/lang/StringIndexOutOfBoundsException.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Float.h"
#include "java/lang/Long.h"
#include "java/lang/Appendable.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/NegativeArraySizeException.h"
#include "java/lang/Double.h"
#include "java/lang/System.h"

extern "C" {

jint SF_java_lang_StringBuilder_INITIAL_CAPACITY;

void mark_java_lang_StringBuilder(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_StringBuilder *) object;
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
}

void clinit_java_lang_StringBuilder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_lang_StringBuilder_INITIAL_CAPACITY = jint(16);
}

void init_java_lang_StringBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_StringBuilder(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(48);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (16));
	((java_lang_StringBuilder *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_StringBuilder_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_StringBuilder(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(57);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(58);
	if ((frame[1].i) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(59);
	clinit_java_lang_NegativeArraySizeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NegativeArraySizeException);
	sp[1].o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_NegativeArraySizeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (frame[1].i));
	((java_lang_StringBuilder *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_StringBuilder_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_StringBuilder(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	((java_lang_StringBuilder *) NULL_CHECK(sp[0].o))->F_count = temp0;
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count) + (16)));
	((java_lang_StringBuilder *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(72);
	sp[0].o = frame[1].o;
	jint temp1 = jint(0);
	jint temp2 = (jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count;
	sp[1].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	((func_java_lang_String_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getChars_int_int_Array1_char_int])(ctx, sp[0].o, temp1, temp2, sp[1].o, (jint(0)));
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_StringBuilder_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_StringBuilder(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	init_java_lang_StringBuilder_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_lang_StringBuilder_enlargeBuffer_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:enlargeBuffer", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(80);
	if (((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count) < (frame[1].i)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (((jarray) nullCheck(ctx, sp[0].o))->length) >> (jint(1));
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	frame[2].i = ((temp0 + (((jarray) nullCheck(ctx, sp[0].o))->length)) + (jint(2)));
	LINE_NUMBER(82);
	if ((frame[1].i) <= (frame[2].i)) goto label_3;
	}
	INST_ILOAD(1);
	goto label_4;
label_3:;
	INST_ILOAD(2);
label_4:;
	{
	sp -= 1;
	sp[0].o = (jobject) createArray(ctx, &class_char, sp[0].i);
	frame[3].o = sp[0].o;
	LINE_NUMBER(83);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[3].o), (jint(0)), ((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count));
	LINE_NUMBER(84);
	((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[3].o);
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_lang_StringBuilder_appendNull(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:appendNull", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	frame[1].i = (((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count) + (jint(4)));
	LINE_NUMBER(90);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(91);
	M_java_lang_StringBuilder_enlargeBuffer_int(ctx, (frame[0].o), (frame[1].i));
	}
label_2:;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((java_lang_StringBuilder *) NULL_CHECK(sp[1].o))->F_count;
	((java_lang_StringBuilder *) NULL_CHECK(sp[1].o))->F_count = (temp0 + (jint(1)));
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (110);
	LINE_NUMBER(94);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	sp[1].o = frame[0].o;
	jint temp3 = (jint)((java_lang_StringBuilder *) NULL_CHECK(sp[1].o))->F_count;
	((java_lang_StringBuilder *) NULL_CHECK(sp[1].o))->F_count = (temp3 + (jint(1)));
	ARRAY_ACCESS(jchar, sp[0].o, temp3) = (117);
	LINE_NUMBER(95);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	sp[1].o = frame[0].o;
	jint temp6 = (jint)((java_lang_StringBuilder *) NULL_CHECK(sp[1].o))->F_count;
	((java_lang_StringBuilder *) NULL_CHECK(sp[1].o))->F_count = (temp6 + (jint(1)));
	ARRAY_ACCESS(jchar, sp[0].o, temp6) = (108);
	LINE_NUMBER(96);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	sp[1].o = frame[0].o;
	jint temp9 = (jint)((java_lang_StringBuilder *) NULL_CHECK(sp[1].o))->F_count;
	((java_lang_StringBuilder *) NULL_CHECK(sp[1].o))->F_count = (temp9 + (jint(1)));
	ARRAY_ACCESS(jchar, sp[0].o, temp9) = (108);
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_lang_StringBuilder_indexOf_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:indexOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_lang_StringBuilder_indexOf_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:indexOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_int_R_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(112);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"true"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"false"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_append_Array1_char_R_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(132);
	frame[2].i = (((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count) + (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(133);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(134);
	M_java_lang_StringBuilder_enlargeBuffer_int(ctx, (frame[0].o), (frame[2].i));
	}
label_2:;
	{
	LINE_NUMBER(136);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(137);
	((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count = (frame[2].i);
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:append", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(148);
	frame[4].i = (((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count) + (frame[3].i));
	LINE_NUMBER(149);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(150);
	M_java_lang_StringBuilder_enlargeBuffer_int(ctx, (frame[0].o), (frame[4].i));
	}
label_2:;
	{
	LINE_NUMBER(152);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count), (frame[3].i));
	LINE_NUMBER(153);
	((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count = (frame[4].i);
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:append", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(162);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Double_toString_double_R_java_lang_String(ctx, (frame[1].d));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_append_java_lang_StringBuffer_R_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(166);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Float_toString_float_R_java_lang_String(ctx, (frame[1].f));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(185);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:append", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, (frame[1].l));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_lang_StringBuilder_capacity_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:capacity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	popStackFrame(ctx);
	return (((jarray) nullCheck(ctx, sp[0].o))->length);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_delete_int_int_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:delete", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(247);
	if ((frame[2].i) <= ((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count)) goto label_1;
	}
	{
	LINE_NUMBER(248);
	frame[2].i = ((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count);
	}
label_1:;
	{
	LINE_NUMBER(250);
	if ((frame[2].i) != (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_3:;
	{
	LINE_NUMBER(253);
	if ((frame[2].i) <= (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(254);
	frame[3].i = (((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count) - (frame[2].i));
	LINE_NUMBER(255);
	if ((frame[3].i) < 0) goto label_8;
	}
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (frame[1].i), (frame[3].i));
	}
label_8:;
	{
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	((java_lang_StringBuilder *) NULL_CHECK(sp[0].o))->F_count = (((jint)((java_lang_StringBuilder *) NULL_CHECK(sp[0].o))->F_count) - ((frame[2].i) - (frame[1].i)));
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_5:;
	{
	LINE_NUMBER(269);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_deleteCharAt_int_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:deleteCharAt", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(276);
	frame[2].i = ((((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count) - (frame[1].i)) - (jint(1)));
	LINE_NUMBER(277);
	if ((frame[2].i) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (frame[1].i) + (jint(1));
	sp[1].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (frame[1].i), (frame[2].i));
	}
label_2:;
	{
	LINE_NUMBER(288);
	sp[0].o = frame[0].o;
	((java_lang_StringBuilder *) NULL_CHECK(sp[0].o))->F_count = (((jint)((java_lang_StringBuilder *) NULL_CHECK(sp[0].o))->F_count) - (jint(1)));
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_java_lang_StringBuilder_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:ensureCapacity", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(296);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	frame[2].i = (((((jarray) nullCheck(ctx, sp[0].o))->length) * (jint(2))) + (jint(2)));
	LINE_NUMBER(298);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[2].i), (frame[1].i));
	M_java_lang_StringBuilder_enlargeBuffer_int(ctx, sp[0].o, temp0);
	}
label_1:;
	LINE_NUMBER(300);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_replace_int_int_java_lang_String_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:replace", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(311);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(312);
	clinit_java_lang_StringIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringIndexOutOfBoundsException);
	init_java_lang_StringIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[1].i));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(313);
	if ((frame[1].i) <= ((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count)) goto label_3;
	}
	{
	LINE_NUMBER(314);
	clinit_java_lang_StringIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringIndexOutOfBoundsException);
	init_java_lang_StringIndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"start > length()"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(315);
	if ((frame[1].i) <= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(316);
	clinit_java_lang_StringIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringIndexOutOfBoundsException);
	init_java_lang_StringIndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"start > end"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(318);
	if ((frame[2].i) <= ((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count)) goto label_7;
	}
	{
	LINE_NUMBER(319);
	frame[2].i = ((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count);
	}
label_7:;
	{
	LINE_NUMBER(320);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(321);
	frame[5].i = ((((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count) + (frame[4].i)) - ((frame[2].i) - (frame[1].i)));
	LINE_NUMBER(322);
	if ((frame[5].i) <= ((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count)) goto label_11;
	}
	{
	LINE_NUMBER(323);
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (((((jarray) nullCheck(ctx, sp[0].o))->length) * (jint(2))) + (jint(2))));
	frame[5].i = temp1;
	LINE_NUMBER(324);
	sp[0].o = (jobject) createArray(ctx, &class_char, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(325);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp2 = jint(0);
	sp[1].o = frame[6].o;
	jint temp3 = jint(0);
	sp[2].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(326);
	((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[6].o);
	}
label_11:;
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[1].i) + (frame[4].i)), (((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count) - (frame[2].i)));
	LINE_NUMBER(330);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	((func_java_lang_String_getChars_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getChars_Array1_char_int])(ctx, sp[0].o, sp[1].o, (frame[1].i));
	LINE_NUMBER(331);
	((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count = (frame[5].i);
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_insert_int_Array1_char_int_int_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:insert", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(336);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) == 0) goto label_1;
	}
	{
	LINE_NUMBER(337);
	M_java_lang_StringBuilder_move_int_int(ctx, (frame[0].o), (frame[4].i), (frame[1].i));
	LINE_NUMBER(338);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[1].i) + (frame[4].i)), (((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count) - (frame[1].i)));
	LINE_NUMBER(339);
	sp[0].o = frame[2].o;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (frame[1].i), (frame[4].i));
	LINE_NUMBER(340);
	sp[0].o = frame[0].o;
	((java_lang_StringBuilder *) NULL_CHECK(sp[0].o))->F_count = (((jint)((java_lang_StringBuilder *) NULL_CHECK(sp[0].o))->F_count) + (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	}
label_1:;
	{
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_insert_int_boolean_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(351);
	if ((frame[2].i) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[1].i), (((jobject) createStringLiteral(ctx, u8"true"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[1].i), (((jobject) createStringLiteral(ctx, u8"false"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(362);
	M_java_lang_StringBuilder_move_int_int(ctx, (frame[0].o), (jint(1)), (frame[1].i));
	LINE_NUMBER(363);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(364);
	sp[0].o = frame[0].o;
	((java_lang_StringBuilder *) NULL_CHECK(sp[0].o))->F_count = (((jint)((java_lang_StringBuilder *) NULL_CHECK(sp[0].o))->F_count) + (jint(1)));
	LINE_NUMBER(365);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_java_lang_StringBuilder_move_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:move", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	if (((((jarray) nullCheck(ctx, sp[0].o))->length) - ((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count)) < (frame[1].i)) goto label_1;
	}
	{
	LINE_NUMBER(373);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[2].i) + (frame[1].i)), (((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count) - (frame[2].i)));
	LINE_NUMBER(374);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(378);
	jint temp0 = ((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count) + (frame[1].i);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (((((jarray) nullCheck(ctx, sp[0].o))->length) * (jint(2))) + (jint(2))));
	frame[3].i = temp1;
	LINE_NUMBER(381);
	sp[0].o = (jobject) createArray(ctx, &class_char, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(382);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[4].o), (jint(0)), (frame[2].i));
	LINE_NUMBER(384);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (frame[2].i), (frame[4].o), ((frame[2].i) + (frame[1].i)), (((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count) - (frame[2].i)));
	LINE_NUMBER(385);
	((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[4].o);
	LINE_NUMBER(387);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_insert_int_Array1_char_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:insert", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(390);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) == 0) goto label_1;
	}
	{
	LINE_NUMBER(391);
	M_java_lang_StringBuilder_move_int_int(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[2].o)))->length), (frame[1].i));
	LINE_NUMBER(392);
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (frame[1].i), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	LINE_NUMBER(393);
	sp[0].o = frame[0].o;
	((java_lang_StringBuilder *) NULL_CHECK(sp[0].o))->F_count = (((jint)((java_lang_StringBuilder *) NULL_CHECK(sp[0].o))->F_count) + (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	}
label_1:;
	{
	LINE_NUMBER(395);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_insert_int_double_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:insert", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(404);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)SM_java_lang_Double_toString_double_R_java_lang_String(ctx, (frame[2].d));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_insert_int_float_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(413);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)SM_java_lang_Float_toString_float_R_java_lang_String(ctx, (frame[2].f));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_insert_int_int_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(422);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_insert_int_long_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:insert", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(431);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, (frame[2].l));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_insert_int_java_lang_Object_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(440);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(441);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[1].i), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(443);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:insert", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(453);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(454);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"null"_j)));
	}
label_1:;
	{
	LINE_NUMBER(456);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(457);
	if ((frame[3].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(458);
	M_java_lang_StringBuilder_move_int_int(ctx, (frame[0].o), (frame[3].i), (frame[1].i));
	LINE_NUMBER(459);
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	((func_java_lang_String_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getChars_int_int_Array1_char_int])(ctx, sp[0].o, temp0, temp1, sp[1].o, (frame[1].i));
	LINE_NUMBER(460);
	sp[0].o = frame[0].o;
	((java_lang_StringBuilder *) NULL_CHECK(sp[0].o))->F_count = (((jint)((java_lang_StringBuilder *) NULL_CHECK(sp[0].o))->F_count) + (frame[3].i));
	}
label_4:;
	{
	LINE_NUMBER(462);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint M_java_lang_StringBuilder_length_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:length", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(469);
	popStackFrame(ctx);
	return ((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_reverse_R_java_lang_StringBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:reverse", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(477);
	if (((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count) >= (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(478);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(481);
	frame[1].i = (((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count) - (jint(1)));
	LINE_NUMBER(482);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	frame[2].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (jint(0))));
	LINE_NUMBER(483);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	frame[3].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)));
	LINE_NUMBER(484);
	frame[4].i = (jint(1));
	frame[5].i = (jint(1));
	LINE_NUMBER(485);
	frame[6].i = (jint(0));
	frame[7].i = (((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count) / (jint(2)));
	}
label_9:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_10;
	}
	{
	LINE_NUMBER(486);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	frame[8].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, ((frame[6].i) + (jint(1)))));
	LINE_NUMBER(487);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	frame[9].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, ((frame[1].i) - (jint(1)))));
	LINE_NUMBER(488);
	if ((frame[4].i) == 0) goto label_14;
	}
	{
	if ((frame[8].i) < (jint(56320))) goto label_14;
	}
	{
	if ((frame[8].i) > (jint(57343))) goto label_14;
	}
	{
	if ((frame[2].i) < (jint(55296))) goto label_14;
	}
	{
	if ((frame[2].i) > (jint(56319))) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(491);
	if ((frame[10].i) == 0) goto label_17;
	}
	{
	if (((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count) >= (jint(3))) goto label_17;
	}
	{
	LINE_NUMBER(492);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_17:;
	{
	LINE_NUMBER(494);
	if ((frame[5].i) == 0) goto label_19;
	}
	{
	if ((frame[9].i) < (jint(55296))) goto label_19;
	}
	{
	if ((frame[9].i) > (jint(56319))) goto label_19;
	}
	{
	if ((frame[3].i) < (jint(56320))) goto label_19;
	}
	{
	if ((frame[3].i) > (jint(57343))) goto label_19;
	}
	INST_ICONST(1);
	goto label_20;
label_19:;
	INST_ICONST(0);
label_20:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(497);
	jint temp0 = jint(1);
	frame[5].i = temp0;
	frame[4].i = temp0;
	LINE_NUMBER(498);
	if ((frame[10].i) != (frame[11].i)) goto label_23;
	}
	{
	LINE_NUMBER(499);
	if ((frame[10].i) == 0) goto label_25;
	}
	{
	LINE_NUMBER(501);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)) = (frame[8].i);
	LINE_NUMBER(502);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	ARRAY_ACCESS(jchar, sp[0].o, ((frame[1].i) - (jint(1)))) = (frame[2].i);
	LINE_NUMBER(503);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[6].i)) = (frame[9].i);
	LINE_NUMBER(504);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	ARRAY_ACCESS(jchar, sp[0].o, ((frame[6].i) + (jint(1)))) = (frame[3].i);
	LINE_NUMBER(505);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	frame[2].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, ((frame[6].i) + (jint(2)))));
	LINE_NUMBER(506);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	frame[3].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, ((frame[1].i) - (jint(2)))));
	LINE_NUMBER(507);
	INST_IINC(6, 1);
	LINE_NUMBER(508);
	INST_IINC(1, -1);
	goto label_34;
	}
label_25:;
	{
	LINE_NUMBER(511);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(512);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[6].i)) = (frame[3].i);
	LINE_NUMBER(513);
	frame[2].i = (frame[8].i);
	LINE_NUMBER(514);
	frame[3].i = (frame[9].i);
	goto label_34;
	}
label_23:;
	{
	LINE_NUMBER(517);
	if ((frame[10].i) == 0) goto label_38;
	}
	{
	LINE_NUMBER(519);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)) = (frame[8].i);
	LINE_NUMBER(520);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[6].i)) = (frame[3].i);
	LINE_NUMBER(521);
	frame[3].i = (frame[9].i);
	LINE_NUMBER(522);
	frame[4].i = (jint(0));
	goto label_34;
	}
label_38:;
	{
	LINE_NUMBER(525);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(526);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[6].i)) = (frame[9].i);
	LINE_NUMBER(527);
	frame[2].i = (frame[8].i);
	LINE_NUMBER(528);
	frame[5].i = (jint(0));
	}
label_34:;
	{
	LINE_NUMBER(485);
	INST_IINC(6, 1);
	INST_IINC(1, -1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(532);
	if ((((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count) & (jint(1))) != (jint(1))) goto label_46;
	}
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_47;
	INST_ILOAD(5);
	if ((--sp)->i != 0) goto label_46;
label_47:;
	{
	LINE_NUMBER(533);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = frame[1].i;
	sp[1].i = temp0;
	sp += 2;
	if ((frame[4].i) == 0) goto label_48;
	}
	INST_ILOAD(3);
	goto label_49;
label_48:;
	INST_ILOAD(2);
label_49:;
	INST_CASTORE();
label_46:;
	{
	LINE_NUMBER(551);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_java_lang_StringBuilder_setCharAt_int_char(jcontext ctx, jobject self, jint param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:setCharAt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(559);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(560);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_lang_StringBuilder_setLength_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:setLength", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(572);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(573);
	M_java_lang_StringBuilder_enlargeBuffer_int(ctx, (frame[0].o), (frame[1].i));
	}
label_1:;
	{
	LINE_NUMBER(586);
	((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count = (frame[1].i);
	LINE_NUMBER(587);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:toString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(594);
	if (((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count) != 0) goto label_1;
	}
	{
	LINE_NUMBER(595);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_1:;
	{
	LINE_NUMBER(604);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_lang_StringBuilder_trimToSize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:trimToSize", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(612);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:append", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(615);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(616);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(618);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:append", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(622);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(623);
	frame[1].o = (((jobject) createStringLiteral(ctx, u8"null"_j)));
	}
label_1:;
	{
	LINE_NUMBER(626);
	frame[4].i = ((frame[3].i) - (frame[2].i));
	LINE_NUMBER(627);
	frame[5].i = (((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count) + (frame[4].i));
	LINE_NUMBER(628);
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(629);
	M_java_lang_StringBuilder_enlargeBuffer_int(ctx, (frame[0].o), (frame[5].i));
	}
label_5:;
	{
	LINE_NUMBER(632);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_String)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(633);
	sp[0].o = checkCast(ctx, &class_java_lang_String, (frame[1].o));
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	((func_java_lang_String_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getChars_int_int_Array1_char_int])(ctx, sp[0].o, temp0, temp1, sp[1].o, ((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(634);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_StringBuilder)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(635);
	frame[6].o = (checkCast(ctx, &class_java_lang_StringBuilder, (frame[1].o)));
	LINE_NUMBER(636);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[6].o)))->F_value;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count), (frame[4].i));
	LINE_NUMBER(637);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(638);
	frame[6].i = ((jint)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count);
	LINE_NUMBER(639);
	frame[7].i = (frame[2].i);
	}
label_15:;
	{
	if ((frame[7].i) >= (frame[3].i)) goto label_9;
	}
	{
	LINE_NUMBER(640);
	sp[0].o = (jobject)((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	jint temp1 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[1].o)))(ctx, (frame[1].o), (frame[7].i));
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = temp1;
	LINE_NUMBER(639);
	INST_IINC(7, 1);
	goto label_15;
	}
label_9:;
	{
	LINE_NUMBER(644);
	((java_lang_StringBuilder *) NULL_CHECK((frame[0].o)))->F_count = (frame[5].i);
	LINE_NUMBER(645);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_insert_int_java_lang_CharSequence_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(649);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(650);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[1].i), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(652);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_insert_int_java_lang_CharSequence_int_int_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:insert", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(656);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(657);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[1].i), (((jobject) createStringLiteral(ctx, u8"null"_j))), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(659);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_insert_int_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0, sp[1].o, (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_substring_int_int_R_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:substring", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(663);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_subSequence_int_int_R_java_lang_CharSequence(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:subSequence", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(668);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuilder_append_char_R_java_lang_Appendable(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuilder:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_StringBuilder[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_StringBuilder_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_StringBuilder_length_R_int,
	(void *) M_java_lang_StringBuilder_charAt_int_R_char,
	(void *) M_java_lang_StringBuilder_subSequence_int_int_R_java_lang_CharSequence,
	(void *) M_java_lang_StringBuilder_append_char_R_java_lang_Appendable,
	(void *) M_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_Appendable,
	(void *) M_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_Appendable,
	(void *) M_java_lang_StringBuilder_enlargeBuffer_int,
	(void *) M_java_lang_StringBuilder_appendNull,
	(void *) M_java_lang_StringBuilder_indexOf_java_lang_String_R_int,
	(void *) M_java_lang_StringBuilder_indexOf_java_lang_String_int_R_int,
	(void *) M_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_append_Array1_char_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_append_java_lang_StringBuffer_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_capacity_R_int,
	(void *) M_java_lang_StringBuilder_delete_int_int_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_deleteCharAt_int_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_ensureCapacity_int,
	(void *) M_java_lang_StringBuilder_getChars_int_int_Array1_char_int,
	(void *) M_java_lang_StringBuilder_replace_int_int_java_lang_String_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_insert_int_Array1_char_int_int_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_insert_int_boolean_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_move_int_int,
	(void *) M_java_lang_StringBuilder_insert_int_Array1_char_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_insert_int_double_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_insert_int_float_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_insert_int_int_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_insert_int_long_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_insert_int_java_lang_Object_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_reverse_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_setCharAt_int_char,
	(void *) M_java_lang_StringBuilder_setLength_int,
	(void *) M_java_lang_StringBuilder_trimToSize,
	(void *) M_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_insert_int_java_lang_CharSequence_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_insert_int_java_lang_CharSequence_int_int_R_java_lang_StringBuilder,
	(void *) M_java_lang_StringBuilder_substring_int_int_R_java_lang_String,
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
	{ "length", "()I" },
	{ "charAt", "(I)C" },
	{ "subSequence", "(II)Ljava/lang/CharSequence;" },
	{ "append", "(C)Ljava/lang/Appendable;" },
	{ "append", "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;" },
	{ "append", "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;" },
	{ "enlargeBuffer", "(I)V" },
	{ "appendNull", "()V" },
	{ "indexOf", "(Ljava/lang/String;)I" },
	{ "indexOf", "(Ljava/lang/String;I)I" },
	{ "append", "(Z)Ljava/lang/StringBuilder;" },
	{ "append", "(C)Ljava/lang/StringBuilder;" },
	{ "append", "([C)Ljava/lang/StringBuilder;" },
	{ "append", "([CII)Ljava/lang/StringBuilder;" },
	{ "append", "(D)Ljava/lang/StringBuilder;" },
	{ "append", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuilder;" },
	{ "append", "(F)Ljava/lang/StringBuilder;" },
	{ "append", "(I)Ljava/lang/StringBuilder;" },
	{ "append", "(J)Ljava/lang/StringBuilder;" },
	{ "append", "(Ljava/lang/Object;)Ljava/lang/StringBuilder;" },
	{ "append", "(Ljava/lang/String;)Ljava/lang/StringBuilder;" },
	{ "capacity", "()I" },
	{ "delete", "(II)Ljava/lang/StringBuilder;" },
	{ "deleteCharAt", "(I)Ljava/lang/StringBuilder;" },
	{ "ensureCapacity", "(I)V" },
	{ "getChars", "(II[CI)V" },
	{ "replace", "(IILjava/lang/String;)Ljava/lang/StringBuilder;" },
	{ "insert", "(I[CII)Ljava/lang/StringBuilder;" },
	{ "insert", "(IZ)Ljava/lang/StringBuilder;" },
	{ "insert", "(IC)Ljava/lang/StringBuilder;" },
	{ "move", "(II)V" },
	{ "insert", "(I[C)Ljava/lang/StringBuilder;" },
	{ "insert", "(ID)Ljava/lang/StringBuilder;" },
	{ "insert", "(IF)Ljava/lang/StringBuilder;" },
	{ "insert", "(II)Ljava/lang/StringBuilder;" },
	{ "insert", "(IJ)Ljava/lang/StringBuilder;" },
	{ "insert", "(ILjava/lang/Object;)Ljava/lang/StringBuilder;" },
	{ "insert", "(ILjava/lang/String;)Ljava/lang/StringBuilder;" },
	{ "reverse", "()Ljava/lang/StringBuilder;" },
	{ "setCharAt", "(IC)V" },
	{ "setLength", "(I)V" },
	{ "trimToSize", "()V" },
	{ "append", "(Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;" },
	{ "append", "(Ljava/lang/CharSequence;II)Ljava/lang/StringBuilder;" },
	{ "insert", "(ILjava/lang/CharSequence;)Ljava/lang/StringBuilder;" },
	{ "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/StringBuilder;" },
	{ "substring", "(II)Ljava/lang/String;" },
};

static jclass interfaces[] { &class_java_lang_CharSequence, &class_java_lang_Appendable, };

static FieldMetadata fields[] {
	{ "INITIAL_CAPACITY", &class_int, (intptr_t) &SF_java_lang_StringBuilder_INITIAL_CAPACITY, "I", 24 },
	{ "value", getArrayClass(&class_char, 1), offsetof(java_lang_StringBuilder, F_value), "[C", 2 },
	{ "count", &class_int, offsetof(java_lang_StringBuilder, F_count), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_StringBuilder, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_lang_StringBuilder_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_StringBuilder_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_StringBuilder_java_lang_CharSequence, 0, "(Ljava/lang/CharSequence;)V", 1 },
	{ "enlargeBuffer", (intptr_t) M_java_lang_StringBuilder_enlargeBuffer_int, VTABLE_java_lang_StringBuilder_enlargeBuffer_int, "(I)V", 2 },
	{ "appendNull", (intptr_t) M_java_lang_StringBuilder_appendNull, VTABLE_java_lang_StringBuilder_appendNull, "()V", 16 },
	{ "indexOf", (intptr_t) M_java_lang_StringBuilder_indexOf_java_lang_String_R_int, VTABLE_java_lang_StringBuilder_indexOf_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "indexOf", (intptr_t) M_java_lang_StringBuilder_indexOf_java_lang_String_int_R_int, VTABLE_java_lang_StringBuilder_indexOf_java_lang_String_int_R_int, "(Ljava/lang/String;I)I", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder, "(Z)Ljava/lang/StringBuilder;", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder, "(C)Ljava/lang/StringBuilder;", 257 },
	{ "append", (intptr_t) M_java_lang_StringBuilder_append_Array1_char_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_append_Array1_char_R_java_lang_StringBuilder, "([C)Ljava/lang/StringBuilder;", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder, "([CII)Ljava/lang/StringBuilder;", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder, "(D)Ljava/lang/StringBuilder;", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuilder_append_java_lang_StringBuffer_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_append_java_lang_StringBuffer_R_java_lang_StringBuilder, "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuilder;", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder, "(F)Ljava/lang/StringBuilder;", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder, "(I)Ljava/lang/StringBuilder;", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder, "(J)Ljava/lang/StringBuilder;", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder, "(Ljava/lang/Object;)Ljava/lang/StringBuilder;", 257 },
	{ "append", (intptr_t) M_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder, "(Ljava/lang/String;)Ljava/lang/StringBuilder;", 257 },
	{ "capacity", (intptr_t) M_java_lang_StringBuilder_capacity_R_int, VTABLE_java_lang_StringBuilder_capacity_R_int, "()I", 1 },
	{ "charAt", (intptr_t) M_java_lang_StringBuilder_charAt_int_R_char, VTABLE_java_lang_StringBuilder_charAt_int_R_char, "(I)C", 257 },
	{ "delete", (intptr_t) M_java_lang_StringBuilder_delete_int_int_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_delete_int_int_R_java_lang_StringBuilder, "(II)Ljava/lang/StringBuilder;", 1 },
	{ "deleteCharAt", (intptr_t) M_java_lang_StringBuilder_deleteCharAt_int_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_deleteCharAt_int_R_java_lang_StringBuilder, "(I)Ljava/lang/StringBuilder;", 1 },
	{ "ensureCapacity", (intptr_t) M_java_lang_StringBuilder_ensureCapacity_int, VTABLE_java_lang_StringBuilder_ensureCapacity_int, "(I)V", 1 },
	{ "getChars", (intptr_t) M_java_lang_StringBuilder_getChars_int_int_Array1_char_int, VTABLE_java_lang_StringBuilder_getChars_int_int_Array1_char_int, "(II[CI)V", 257 },
	{ "replace", (intptr_t) M_java_lang_StringBuilder_replace_int_int_java_lang_String_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_replace_int_int_java_lang_String_R_java_lang_StringBuilder, "(IILjava/lang/String;)Ljava/lang/StringBuilder;", 1 },
	{ "insert", (intptr_t) M_java_lang_StringBuilder_insert_int_Array1_char_int_int_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_insert_int_Array1_char_int_int_R_java_lang_StringBuilder, "(I[CII)Ljava/lang/StringBuilder;", 1 },
	{ "insert", (intptr_t) M_java_lang_StringBuilder_insert_int_boolean_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_insert_int_boolean_R_java_lang_StringBuilder, "(IZ)Ljava/lang/StringBuilder;", 1 },
	{ "insert", (intptr_t) M_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder, "(IC)Ljava/lang/StringBuilder;", 1 },
	{ "move", (intptr_t) M_java_lang_StringBuilder_move_int_int, VTABLE_java_lang_StringBuilder_move_int_int, "(II)V", 2 },
	{ "insert", (intptr_t) M_java_lang_StringBuilder_insert_int_Array1_char_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_insert_int_Array1_char_R_java_lang_StringBuilder, "(I[C)Ljava/lang/StringBuilder;", 0 },
	{ "insert", (intptr_t) M_java_lang_StringBuilder_insert_int_double_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_insert_int_double_R_java_lang_StringBuilder, "(ID)Ljava/lang/StringBuilder;", 1 },
	{ "insert", (intptr_t) M_java_lang_StringBuilder_insert_int_float_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_insert_int_float_R_java_lang_StringBuilder, "(IF)Ljava/lang/StringBuilder;", 1 },
	{ "insert", (intptr_t) M_java_lang_StringBuilder_insert_int_int_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_insert_int_int_R_java_lang_StringBuilder, "(II)Ljava/lang/StringBuilder;", 1 },
	{ "insert", (intptr_t) M_java_lang_StringBuilder_insert_int_long_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_insert_int_long_R_java_lang_StringBuilder, "(IJ)Ljava/lang/StringBuilder;", 1 },
	{ "insert", (intptr_t) M_java_lang_StringBuilder_insert_int_java_lang_Object_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_insert_int_java_lang_Object_R_java_lang_StringBuilder, "(ILjava/lang/Object;)Ljava/lang/StringBuilder;", 1 },
	{ "insert", (intptr_t) M_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder, "(ILjava/lang/String;)Ljava/lang/StringBuilder;", 1 },
	{ "length", (intptr_t) M_java_lang_StringBuilder_length_R_int, VTABLE_java_lang_StringBuilder_length_R_int, "()I", 1 },
	{ "reverse", (intptr_t) M_java_lang_StringBuilder_reverse_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_reverse_R_java_lang_StringBuilder, "()Ljava/lang/StringBuilder;", 1 },
	{ "setCharAt", (intptr_t) M_java_lang_StringBuilder_setCharAt_int_char, VTABLE_java_lang_StringBuilder_setCharAt_int_char, "(IC)V", 1 },
	{ "setLength", (intptr_t) M_java_lang_StringBuilder_setLength_int, VTABLE_java_lang_StringBuilder_setLength_int, "(I)V", 1 },
	{ "toString", (intptr_t) M_java_lang_StringBuilder_toString_R_java_lang_String, VTABLE_java_lang_StringBuilder_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "trimToSize", (intptr_t) M_java_lang_StringBuilder_trimToSize, VTABLE_java_lang_StringBuilder_trimToSize, "()V", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder, "(Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder, "(Ljava/lang/CharSequence;II)Ljava/lang/StringBuilder;", 1 },
	{ "insert", (intptr_t) M_java_lang_StringBuilder_insert_int_java_lang_CharSequence_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_insert_int_java_lang_CharSequence_R_java_lang_StringBuilder, "(ILjava/lang/CharSequence;)Ljava/lang/StringBuilder;", 1 },
	{ "insert", (intptr_t) M_java_lang_StringBuilder_insert_int_java_lang_CharSequence_int_int_R_java_lang_StringBuilder, VTABLE_java_lang_StringBuilder_insert_int_java_lang_CharSequence_int_int_R_java_lang_StringBuilder, "(ILjava/lang/CharSequence;II)Ljava/lang/StringBuilder;", 1 },
	{ "substring", (intptr_t) M_java_lang_StringBuilder_substring_int_int_R_java_lang_String, VTABLE_java_lang_StringBuilder_substring_int_int_R_java_lang_String, "(II)Ljava/lang/String;", 1 },
	{ "subSequence", (intptr_t) M_java_lang_StringBuilder_subSequence_int_int_R_java_lang_CharSequence, VTABLE_java_lang_StringBuilder_subSequence_int_int_R_java_lang_CharSequence, "(II)Ljava/lang/CharSequence;", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_Appendable, VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_Appendable, "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;", 4161 },
	{ "append", (intptr_t) M_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_Appendable, VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_Appendable, "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;", 4161 },
	{ "append", (intptr_t) M_java_lang_StringBuilder_append_char_R_java_lang_Appendable, VTABLE_java_lang_StringBuilder_append_char_R_java_lang_Appendable, "(C)Ljava/lang/Appendable;", 4161 },
};

Class class_java_lang_StringBuilder{
		.nativeName = (intptr_t) "java/lang/StringBuilder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_StringBuilder),
		.classVtable = (intptr_t) vtable_java_lang_StringBuilder,
		.staticInitializer = (intptr_t) clinit_java_lang_StringBuilder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_StringBuilder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 52,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 58,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_StringBuilder = registerClass(&class_java_lang_StringBuilder);

}
