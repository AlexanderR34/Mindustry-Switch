#include "java/lang/Float.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Number.h"
#include "java/lang/Comparable.h"
#include "java/lang/Float.h"
#include "java/lang/Class.h"
#include "java/lang/StringToReal.h"
#include "java/nio/NativeUtils.h"

extern "C" {

jfloat SF_java_lang_Float_MAX_VALUE;
jfloat SF_java_lang_Float_MIN_VALUE;
jint SF_java_lang_Float_MAX_EXPONENT;
jint SF_java_lang_Float_MIN_EXPONENT;
jfloat SF_java_lang_Float_NaN;
jfloat SF_java_lang_Float_NEGATIVE_INFINITY;
jfloat SF_java_lang_Float_POSITIVE_INFINITY;
jobject SF_java_lang_Float_TYPE;
jint SF_java_lang_Float_NEGATIVE_ZERO_BITS;

void mark_java_lang_Float(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_lang_Float_TYPE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Float_TYPE)->clazz)->markFunction)((jobject) SF_java_lang_Float_TYPE, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Number(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_lang_Float *) object;
}

void init_java_lang_Float_double(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Float(ctx);
	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(90);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(91);
	((java_lang_Float *) NULL_CHECK((frame[0].o)))->F_value = (jfloat((frame[1].d)));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_Float_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Float(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(98);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(99);
	((java_lang_Float *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].f);
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbyte M_java_lang_Float_byteValue_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:byteValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return (jbyte((jint(((jfloat)((java_lang_Float *) NULL_CHECK((frame[0].o)))->F_value)))));
	}

	popStackFrame(ctx);
}

jdouble M_java_lang_Float_doubleValue_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:doubleValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return (jdouble(((jfloat)((java_lang_Float *) NULL_CHECK((frame[0].o)))->F_value)));
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Float_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(124);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((java_lang_Float *) NULL_CHECK((checkCast(ctx, &class_java_lang_Float, (frame[1].o)))))->F_value));
	jint temp1 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((java_lang_Float *) NULL_CHECK((frame[0].o)))->F_value));
	if (temp0 != temp1) goto label_1;
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

jint SM_java_lang_Float_hashCode_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Float(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(136);
	jint temp0 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (frame[0].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Float_floatToRawIntBits_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:floatToRawIntBits", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Float(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(149);
	jint temp0 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (frame[0].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_java_lang_Float_floatValue_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:floatValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return ((jfloat)((java_lang_Float *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

jint M_java_lang_Float_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(164);
	jint temp0 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((java_lang_Float *) NULL_CHECK((frame[0].o)))->F_value));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_lang_Float_intValue_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:intValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return (jint(((jfloat)((java_lang_Float *) NULL_CHECK((frame[0].o)))->F_value)));
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Float_isInfinite_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:isInfinite", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(189);
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, ((jfloat)((java_lang_Float *) NULL_CHECK((frame[0].o)))->F_value));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Float_isInfinite_float_R_boolean(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:isInfinite", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Float(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(201);
	if ((floatCompare((frame[0].f), (jfloat(std::numeric_limits<float>::infinity())), -1)) == 0) goto label_1;
	}
	{
	if ((floatCompare((frame[0].f), (jfloat(-std::numeric_limits<float>::infinity())), -1)) != 0) goto label_2;
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

jbool M_java_lang_Float_isNaN_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:isNaN", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(208);
	if ((floatCompare(((jfloat)((java_lang_Float *) NULL_CHECK((frame[0].o)))->F_value), ((jfloat)((java_lang_Float *) NULL_CHECK((frame[0].o)))->F_value), -1)) == 0) goto label_1;
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

jbool SM_java_lang_Float_isNaN_float_R_boolean(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:isNaN", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Float(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(215);
	if ((floatCompare((frame[0].f), (frame[0].f), -1)) == 0) goto label_1;
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

jlong M_java_lang_Float_longValue_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:longValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return (jlong(((jfloat)((java_lang_Float *) NULL_CHECK((frame[0].o)))->F_value)));
	}

	popStackFrame(ctx);
}

jfloat SM_java_lang_Float_parseFloat_java_lang_String_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:parseFloat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Float(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(229);
	jfloat temp0 = (jfloat)SM_java_lang_StringToReal_parseFloat_java_lang_String_R_float(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jshort M_java_lang_Float_shortValue_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:shortValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return (jshort((jint(((jfloat)((java_lang_Float *) NULL_CHECK((frame[0].o)))->F_value)))));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Float_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)SM_java_lang_Float_toString_float_R_java_lang_String(ctx, ((jfloat)((java_lang_Float *) NULL_CHECK((frame[0].o)))->F_value));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Float_toString_float_R_java_lang_String(jcontext ctx, jfloat param0) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:toString", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Float(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(254);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[0].f));
	frame[1].f = temp0;
	LINE_NUMBER(255);
	if ((floatCompare((frame[0].f), (jfloat(std::numeric_limits<float>::infinity())), -1)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Infinity"_j)));
	}
label_2:;
	{
	LINE_NUMBER(257);
	if ((floatCompare((frame[0].f), (jfloat(-std::numeric_limits<float>::infinity())), -1)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(258);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"-Infinity"_j)));
	}
label_4:;
	{
	LINE_NUMBER(259);
	if ((floatCompare((frame[0].f), (jfloat(0)), -1)) != 0) goto label_6;
	}
	{
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"0.0"_j)));
	}
label_6:;
	{
	LINE_NUMBER(261);
	if ((doubleCompare((jdouble((frame[1].f))), (jdouble(1,000000e-03)), -1)) < 0) goto label_8;
	}
	{
	if ((doubleCompare((jdouble((frame[1].f))), (jdouble(1.0E7)), 1)) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)SM_java_lang_Float_toStringImpl_float_boolean_R_java_lang_String(ctx, (frame[0].f), (jint(0)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(263);
	sp[0].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(264);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_12:;
	{
	LINE_NUMBER(266);
	if ((frame[4].i) < 0) goto label_13;
	}
	{
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[4].i));
	frame[5].i = temp0;
	if (temp0 != (48)) goto label_13;
	}
	{
	LINE_NUMBER(267);
	INST_IINC(4, -1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(269);
	if ((frame[4].i) < 0) goto label_16;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[2].o), (46));
	if (temp0 != (jint(-1))) goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_17:;
	{
	LINE_NUMBER(271);
	if (((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[4].i))) == (46)) goto label_18;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[4].i))) != (44)) goto label_19;
	}
label_18:;
	LINE_NUMBER(272);
	INST_IINC(4, 1);
label_19:;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[2].o), (jint(0)), ((frame[4].i) + (jint(1))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)SM_java_lang_Float_toStringImpl_float_boolean_R_java_lang_String(ctx, (frame[0].f), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Float_valueOf_java_lang_String_R_java_lang_Float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:valueOf", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Float(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(294);
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Float_valueOf_float_R_java_lang_Float(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:valueOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Float(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(304);
	clinit_java_lang_Float(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Float);
	init_java_lang_Float_float(ctx, sp[0].o, (frame[0].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Float_compare_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:compare", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Float(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(310);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[0].f));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[1].f));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(312);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[0].f));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(314);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[1].f));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(315);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_5:;
	{
	LINE_NUMBER(316);
	if ((floatCompare((frame[0].f), (jfloat(0)), -1)) != 0) goto label_7;
	}
	{
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_7;
	}
	{
	LINE_NUMBER(317);
	jint temp0 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (frame[0].f));
	frame[2].i = temp0;
	LINE_NUMBER(318);
	jint temp1 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (frame[1].f));
	frame[3].i = temp1;
	LINE_NUMBER(319);
	if ((frame[2].i) != (frame[3].i)) goto label_11;
	}
	INST_ICONST(0);
	goto label_12;
label_11:;
	{
	LINE_NUMBER(320);
	if ((frame[2].i) != (clinit_java_lang_Float(ctx), (jint)SF_java_lang_Float_NEGATIVE_ZERO_BITS)) goto label_13;
	}
	INST_ICONST(-1);
	goto label_12;
label_13:;
	INST_ICONST(1);
label_12:;
	LINE_NUMBER(319);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(322);
	if ((floatCompare((frame[0].f), (frame[1].f), 1)) >= 0) goto label_14;
	}
	INST_ICONST(-1);
	goto label_15;
label_14:;
	{
	if ((floatCompare((frame[0].f), (frame[1].f), -1)) <= 0) goto label_16;
	}
	INST_ICONST(1);
	goto label_15;
label_16:;
	INST_ICONST(0);
label_15:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_lang_Float_compareTo_java_lang_Float_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(327);
	jint temp0 = (jint)SM_java_lang_Float_compare_float_float_R_int(ctx, ((jfloat)((java_lang_Float *) NULL_CHECK((frame[0].o)))->F_value), ((jfloat)((java_lang_Float *) NULL_CHECK((frame[1].o)))->F_value));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_lang_Float_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	jint temp0 = (jint)((func_java_lang_Float_compareTo_java_lang_Float_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Float_compareTo_java_lang_Float_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Float, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_java_lang_Float(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Number(ctx);
	SF_java_lang_Float_MAX_VALUE = jfloat(3,402823e+38f);
	SF_java_lang_Float_MIN_VALUE = jfloat(1,401298e-45f);
	SF_java_lang_Float_MAX_EXPONENT = jint(127);
	SF_java_lang_Float_MIN_EXPONENT = jint(-126);
	SF_java_lang_Float_NaN = jfloat(std::numeric_limits<float>::quiet_NaN());
	SF_java_lang_Float_NEGATIVE_INFINITY = jfloat(-std::numeric_limits<float>::infinity());
	SF_java_lang_Float_POSITIVE_INFINITY = jfloat(std::numeric_limits<float>::infinity());
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Float:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Float(ctx);
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)SM_java_nio_NativeUtils_getPrimitive_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"F"_j))));
	clinit_java_lang_Float(ctx);
	SF_java_lang_Float_TYPE = sp[0].o;
	LINE_NUMBER(307);
	jint temp0 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (jfloat(-0,000000e+00f)));
	clinit_java_lang_Float(ctx);
	SF_java_lang_Float_NEGATIVE_ZERO_BITS = temp0;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_Float[] {
	(void *) M_java_lang_Float_hashCode_R_int,
	(void *) M_java_lang_Float_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Float_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Float_intValue_R_int,
	(void *) M_java_lang_Float_byteValue_R_byte,
	(void *) M_java_lang_Float_longValue_R_long,
	(void *) M_java_lang_Float_floatValue_R_float,
	(void *) M_java_lang_Float_doubleValue_R_double,
	(void *) M_java_lang_Float_shortValue_R_short,
	(void *) M_java_lang_Float_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Float_isInfinite_R_boolean,
	(void *) M_java_lang_Float_isNaN_R_boolean,
	(void *) M_java_lang_Float_compareTo_java_lang_Float_R_int,
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
	{ "intValue", "()I" },
	{ "byteValue", "()B" },
	{ "longValue", "()J" },
	{ "floatValue", "()F" },
	{ "doubleValue", "()D" },
	{ "shortValue", "()S" },
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "isInfinite", "()Z" },
	{ "isNaN", "()Z" },
	{ "compareTo", "(Ljava/lang/Float;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "MAX_VALUE", &class_float, (intptr_t) &SF_java_lang_Float_MAX_VALUE, "F", 25 },
	{ "MIN_VALUE", &class_float, (intptr_t) &SF_java_lang_Float_MIN_VALUE, "F", 25 },
	{ "MAX_EXPONENT", &class_int, (intptr_t) &SF_java_lang_Float_MAX_EXPONENT, "I", 25 },
	{ "MIN_EXPONENT", &class_int, (intptr_t) &SF_java_lang_Float_MIN_EXPONENT, "I", 25 },
	{ "NaN", &class_float, (intptr_t) &SF_java_lang_Float_NaN, "F", 25 },
	{ "NEGATIVE_INFINITY", &class_float, (intptr_t) &SF_java_lang_Float_NEGATIVE_INFINITY, "F", 25 },
	{ "POSITIVE_INFINITY", &class_float, (intptr_t) &SF_java_lang_Float_POSITIVE_INFINITY, "F", 25 },
	{ "TYPE", &class_java_lang_Class, (intptr_t) &SF_java_lang_Float_TYPE, "Ljava/lang/Class;", 25 },
	{ "value", &class_float, offsetof(java_lang_Float, F_value), "F", 2 },
	{ "NEGATIVE_ZERO_BITS", &class_int, (intptr_t) &SF_java_lang_Float_NEGATIVE_ZERO_BITS, "I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_Float_double, 0, "(D)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_Float_float, 0, "(F)V", 1 },
	{ "byteValue", (intptr_t) M_java_lang_Float_byteValue_R_byte, VTABLE_java_lang_Float_byteValue_R_byte, "()B", 1 },
	{ "doubleValue", (intptr_t) M_java_lang_Float_doubleValue_R_double, VTABLE_java_lang_Float_doubleValue_R_double, "()D", 1 },
	{ "equals", (intptr_t) M_java_lang_Float_equals_java_lang_Object_R_boolean, VTABLE_java_lang_Float_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) SM_java_lang_Float_hashCode_float_R_int, 0, "(F)I", 9 },
	{ "floatToIntBits", (intptr_t) SM_java_lang_Float_floatToIntBits_float_R_int, 0, "(F)I", 265 },
	{ "floatToRawIntBits", (intptr_t) SM_java_lang_Float_floatToRawIntBits_float_R_int, 0, "(F)I", 9 },
	{ "floatValue", (intptr_t) M_java_lang_Float_floatValue_R_float, VTABLE_java_lang_Float_floatValue_R_float, "()F", 1 },
	{ "hashCode", (intptr_t) M_java_lang_Float_hashCode_R_int, VTABLE_java_lang_Float_hashCode_R_int, "()I", 1 },
	{ "intBitsToFloat", (intptr_t) SM_java_lang_Float_intBitsToFloat_int_R_float, 0, "(I)F", 265 },
	{ "intValue", (intptr_t) M_java_lang_Float_intValue_R_int, VTABLE_java_lang_Float_intValue_R_int, "()I", 1 },
	{ "isInfinite", (intptr_t) M_java_lang_Float_isInfinite_R_boolean, VTABLE_java_lang_Float_isInfinite_R_boolean, "()Z", 1 },
	{ "isInfinite", (intptr_t) SM_java_lang_Float_isInfinite_float_R_boolean, 0, "(F)Z", 9 },
	{ "isNaN", (intptr_t) M_java_lang_Float_isNaN_R_boolean, VTABLE_java_lang_Float_isNaN_R_boolean, "()Z", 1 },
	{ "isNaN", (intptr_t) SM_java_lang_Float_isNaN_float_R_boolean, 0, "(F)Z", 9 },
	{ "longValue", (intptr_t) M_java_lang_Float_longValue_R_long, VTABLE_java_lang_Float_longValue_R_long, "()J", 1 },
	{ "parseFloat", (intptr_t) SM_java_lang_Float_parseFloat_java_lang_String_R_float, 0, "(Ljava/lang/String;)F", 9 },
	{ "shortValue", (intptr_t) M_java_lang_Float_shortValue_R_short, VTABLE_java_lang_Float_shortValue_R_short, "()S", 1 },
	{ "toString", (intptr_t) M_java_lang_Float_toString_R_java_lang_String, VTABLE_java_lang_Float_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) SM_java_lang_Float_toString_float_R_java_lang_String, 0, "(F)Ljava/lang/String;", 9 },
	{ "toStringImpl", (intptr_t) SM_java_lang_Float_toStringImpl_float_boolean_R_java_lang_String, 0, "(FZ)Ljava/lang/String;", 265 },
	{ "valueOf", (intptr_t) SM_java_lang_Float_valueOf_java_lang_String_R_java_lang_Float, 0, "(Ljava/lang/String;)Ljava/lang/Float;", 9 },
	{ "valueOf", (intptr_t) SM_java_lang_Float_valueOf_float_R_java_lang_Float, 0, "(F)Ljava/lang/Float;", 9 },
	{ "compare", (intptr_t) SM_java_lang_Float_compare_float_float_R_int, 0, "(FF)I", 9 },
	{ "compareTo", (intptr_t) M_java_lang_Float_compareTo_java_lang_Float_R_int, VTABLE_java_lang_Float_compareTo_java_lang_Float_R_int, "(Ljava/lang/Float;)I", 1 },
	{ "compareTo", (intptr_t) M_java_lang_Float_compareTo_java_lang_Object_R_int, VTABLE_java_lang_Float_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_java_lang_Float, 0, "()V", 8 },
};

Class class_java_lang_Float{
		.nativeName = (intptr_t) "java/lang/Float",
		.parentClass = (intptr_t) &class_java_lang_Number,
		.size = sizeof(java_lang_Float),
		.classVtable = (intptr_t) vtable_java_lang_Float,
		.staticInitializer = (intptr_t) clinit_java_lang_Float,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_Float,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 28,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_Float = registerClass(&class_java_lang_Float);

}
