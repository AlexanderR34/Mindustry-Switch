#include "java/lang/Double.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Number.h"
#include "java/lang/Comparable.h"
#include "java/lang/Class.h"
#include "java/lang/StringToReal.h"
#include "java/nio/NativeUtils.h"
#include "java/lang/Double.h"

extern "C" {

jobject SF_java_lang_Double_TYPE;
jdouble SF_java_lang_Double_MAX_VALUE;
jdouble SF_java_lang_Double_MIN_VALUE;
jdouble SF_java_lang_Double_NaN;
jdouble SF_java_lang_Double_NEGATIVE_INFINITY;
jdouble SF_java_lang_Double_POSITIVE_INFINITY;
jint SF_java_lang_Double_MAX_EXPONENT;
jint SF_java_lang_Double_MIN_EXPONENT;
jint SF_java_lang_Double_SIZE;
jlong SF_java_lang_Double_POSITIVE_ZERO_BITS;
jlong SF_java_lang_Double_NEGATIVE_ZERO_BITS;

void mark_java_lang_Double(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_lang_Double_TYPE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Double_TYPE)->clazz)->markFunction)((jobject) SF_java_lang_Double_TYPE, mark, depth + 1);
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
	auto self = (java_lang_Double *) object;
}

void init_java_lang_Double_double(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Double:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Double(ctx);
	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(75);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(76);
	((java_lang_Double *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].d);
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbyte M_java_lang_Double_byteValue_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Double:byteValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return (jbyte((jint(((jdouble)((java_lang_Double *) NULL_CHECK((frame[0].o)))->F_value)))));
	}

	popStackFrame(ctx);
}

jdouble M_java_lang_Double_doubleValue_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Double:doubleValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return ((jdouble)((java_lang_Double *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Double_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Double:equals", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(115);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Class_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) &class_java_lang_Double)));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(119);
	frame[2].o = (checkCast(ctx, &class_java_lang_Double, (frame[1].o)));
	LINE_NUMBER(120);
	jint temp0 = (jint)((func_java_lang_Double_isNaN_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Double_isNaN_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_lang_Double_isNaN_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Double_isNaN_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(125);
	if ((doubleCompare(((jdouble)((java_lang_Double *) NULL_CHECK((frame[0].o)))->F_value), (jdouble(0)), -1)) != 0) goto label_6;
	}
	{
	if ((doubleCompare(((jdouble)((java_lang_Double *) NULL_CHECK((frame[2].o)))->F_value), (jdouble(0)), -1)) != 0) goto label_6;
	}
	{
	LINE_NUMBER(128);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, ((jdouble)((java_lang_Double *) NULL_CHECK((frame[2].o)))->F_value));
	jlong temp1 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, ((jdouble)((java_lang_Double *) NULL_CHECK((frame[0].o)))->F_value));
	if ((longCompare(temp0, temp1)) != 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(130);
	if ((doubleCompare(((jdouble)((java_lang_Double *) NULL_CHECK((frame[2].o)))->F_value), ((jdouble)((java_lang_Double *) NULL_CHECK((frame[0].o)))->F_value), -1)) != 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat M_java_lang_Double_floatValue_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Double:floatValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return (jfloat(((jdouble)((java_lang_Double *) NULL_CHECK((frame[0].o)))->F_value)));
	}

	popStackFrame(ctx);
}

jint M_java_lang_Double_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Double:hashCode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(145);
	jint temp0 = (jint)SM_java_lang_Double_hashCode_double_R_int(ctx, ((jdouble)((java_lang_Double *) NULL_CHECK((frame[0].o)))->F_value));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Double_hashCode_double_R_int(jcontext ctx, jdouble param0) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Double:hashCode", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Double(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(149);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[0].d));
	frame[2].l = temp0;
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return (jint(((frame[2].l) ^ (bit_cast<jlong>(bit_cast<uint64_t>((frame[2].l)) >> (32))))));
	}

	popStackFrame(ctx);
}

jint M_java_lang_Double_intValue_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Double:intValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return (jint(((jdouble)((java_lang_Double *) NULL_CHECK((frame[0].o)))->F_value)));
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Double_isInfinite_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Double:isInfinite", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(164);
	jint temp0 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, ((jdouble)((java_lang_Double *) NULL_CHECK((frame[0].o)))->F_value));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Double_isInfinite_double_R_boolean(jcontext ctx, jdouble param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Double:isInfinite", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Double(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(176);
	if ((doubleCompare((frame[0].d), (jdouble(std::numeric_limits<double>::infinity())), -1)) == 0) goto label_1;
	}
	{
	if ((doubleCompare((frame[0].d), (jdouble(-std::numeric_limits<double>::infinity())), -1)) != 0) goto label_2;
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

jbool M_java_lang_Double_isNaN_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Double:isNaN", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(183);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, ((jdouble)((java_lang_Double *) NULL_CHECK((frame[0].o)))->F_value));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Double_isNaN_double_R_boolean(jcontext ctx, jdouble param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Double:isNaN", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Double(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(196);
	if ((doubleCompare((frame[0].d), (frame[0].d), -1)) == 0) goto label_1;
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

jlong M_java_lang_Double_longValue_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Double:longValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return (jlong(((jdouble)((java_lang_Double *) NULL_CHECK((frame[0].o)))->F_value)));
	}

	popStackFrame(ctx);
}

jdouble SM_java_lang_Double_parseDouble_java_lang_String_R_double(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Double:parseDouble", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Double(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(221);
	jdouble temp0 = (jdouble)SM_java_lang_StringToReal_parseDouble_java_lang_String_R_double(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jshort M_java_lang_Double_shortValue_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Double:shortValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(228);
	popStackFrame(ctx);
	return (jshort((jint(((jdouble)((java_lang_Double *) NULL_CHECK((frame[0].o)))->F_value)))));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Double_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Double:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)SM_java_lang_Double_toString_double_R_java_lang_String(ctx, ((jdouble)((java_lang_Double *) NULL_CHECK((frame[0].o)))->F_value));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Double_toString_double_R_java_lang_String(jcontext ctx, jdouble param0) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Double:toString", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Double(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(261);
	jdouble temp0 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, (frame[0].d));
	frame[2].d = temp0;
	LINE_NUMBER(262);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[0].d));
	if (temp1 == 0) goto label_2;
	}
	{
	LINE_NUMBER(263);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"NaN"_j)));
	}
label_2:;
	{
	LINE_NUMBER(264);
	if ((doubleCompare((frame[0].d), (jdouble(std::numeric_limits<double>::infinity())), -1)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Infinity"_j)));
	}
label_4:;
	{
	LINE_NUMBER(266);
	if ((doubleCompare((frame[0].d), (jdouble(-std::numeric_limits<double>::infinity())), -1)) != 0) goto label_6;
	}
	{
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"-Infinity"_j)));
	}
label_6:;
	{
	LINE_NUMBER(268);
	if ((doubleCompare((frame[0].d), (jdouble(0)), -1)) != 0) goto label_8;
	}
	{
	LINE_NUMBER(269);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[0].d));
	if ((longCompare(temp0, (clinit_java_lang_Double(ctx), (jlong)SF_java_lang_Double_POSITIVE_ZERO_BITS))) != 0) goto label_10;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"0.0"_j));
	goto label_11;
label_10:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"-0.0"_j));
label_11:;
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	{
	LINE_NUMBER(270);
	if ((doubleCompare((frame[2].d), (jdouble(1,000000e-03)), -1)) < 0) goto label_12;
	}
	{
	if ((doubleCompare((frame[2].d), (jdouble(1.0E7)), 1)) >= 0) goto label_12;
	}
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)SM_java_lang_Double_toStringImpl_double_boolean_R_java_lang_String(ctx, (frame[0].d), (jint(0)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(272);
	sp[0].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(273);
	frame[6].i = ((((jarray) nullCheck(ctx, (frame[5].o)))->length) - (jint(1)));
	}
label_16:;
	{
	LINE_NUMBER(275);
	if ((frame[6].i) < 0) goto label_17;
	}
	{
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[5].o), (frame[6].i));
	frame[7].i = temp0;
	if (temp0 != (48)) goto label_17;
	}
	{
	LINE_NUMBER(276);
	INST_IINC(6, -1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(279);
	if ((frame[6].i) < 0) goto label_20;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[4].o), (46));
	if (temp0 != (jint(-1))) goto label_21;
	}
label_20:;
	{
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_21:;
	{
	LINE_NUMBER(281);
	if (((jint)ARRAY_ACCESS(jchar, (frame[5].o), (frame[6].i))) == (46)) goto label_22;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[5].o), (frame[6].i))) != (44)) goto label_23;
	}
label_22:;
	LINE_NUMBER(282);
	INST_IINC(6, 1);
label_23:;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[4].o), (jint(0)), ((frame[6].i) + (jint(1))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)SM_java_lang_Double_toStringImpl_double_boolean_R_java_lang_String(ctx, (frame[0].d), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Double_valueOf_java_lang_String_R_java_lang_Double(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Double:valueOf", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Double(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(307);
	clinit_java_lang_Double(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Double);
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, (frame[0].o));
	init_java_lang_Double_double(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Double_valueOf_double_R_java_lang_Double(jcontext ctx, jdouble param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Double:valueOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Double(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(316);
	clinit_java_lang_Double(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Double);
	init_java_lang_Double_double(ctx, sp[0].o, (frame[0].d));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Double_compare_double_double_R_int(jcontext ctx, jdouble param0, jdouble param1) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Double:compare", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Double(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(325);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[0].d));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[2].d));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(326);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(327);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[0].d));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(328);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(329);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[2].d));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_5:;
	{
	LINE_NUMBER(331);
	if ((doubleCompare((frame[0].d), (jdouble(0)), -1)) != 0) goto label_7;
	}
	{
	if ((doubleCompare((frame[2].d), (jdouble(0)), -1)) != 0) goto label_7;
	}
	{
	LINE_NUMBER(332);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[0].d));
	frame[4].l = temp0;
	LINE_NUMBER(333);
	jlong temp1 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[2].d));
	frame[6].l = temp1;
	LINE_NUMBER(334);
	if ((longCompare((frame[4].l), (frame[6].l))) != 0) goto label_11;
	}
	INST_ICONST(0);
	goto label_12;
label_11:;
	{
	LINE_NUMBER(335);
	if ((longCompare((frame[4].l), (clinit_java_lang_Double(ctx), (jlong)SF_java_lang_Double_NEGATIVE_ZERO_BITS))) != 0) goto label_13;
	}
	INST_ICONST(-1);
	goto label_12;
label_13:;
	INST_ICONST(1);
label_12:;
	LINE_NUMBER(334);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(337);
	if ((doubleCompare((frame[0].d), (frame[2].d), 1)) >= 0) goto label_14;
	}
	INST_ICONST(-1);
	goto label_15;
label_14:;
	{
	if ((doubleCompare((frame[0].d), (frame[2].d), -1)) <= 0) goto label_16;
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

jint M_java_lang_Double_compareTo_java_lang_Double_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Double:compareTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(350);
	jint temp0 = (jint)SM_java_lang_Double_compare_double_double_R_int(ctx, ((jdouble)((java_lang_Double *) NULL_CHECK((frame[0].o)))->F_value), ((jdouble)((java_lang_Double *) NULL_CHECK((frame[1].o)))->F_value));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_lang_Double_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Double:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	jint temp0 = (jint)((func_java_lang_Double_compareTo_java_lang_Double_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Double_compareTo_java_lang_Double_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Double, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_java_lang_Double(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Number(ctx);
	SF_java_lang_Double_MAX_VALUE = jdouble(1,797693e+308);
	SF_java_lang_Double_MIN_VALUE = jdouble(4,900000e-324);
	SF_java_lang_Double_NaN = jdouble(std::numeric_limits<double>::quiet_NaN());
	SF_java_lang_Double_NEGATIVE_INFINITY = jdouble(-std::numeric_limits<double>::infinity());
	SF_java_lang_Double_POSITIVE_INFINITY = jdouble(std::numeric_limits<double>::infinity());
	SF_java_lang_Double_MAX_EXPONENT = jint(1023);
	SF_java_lang_Double_MIN_EXPONENT = jint(-1022);
	SF_java_lang_Double_SIZE = jint(64);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Double:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Double(ctx);
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)SM_java_nio_NativeUtils_getPrimitive_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"D"_j))));
	clinit_java_lang_Double(ctx);
	SF_java_lang_Double_TYPE = sp[0].o;
	LINE_NUMBER(320);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (jdouble(0)));
	clinit_java_lang_Double(ctx);
	SF_java_lang_Double_POSITIVE_ZERO_BITS = temp0;
	LINE_NUMBER(321);
	jlong temp1 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (jdouble(-0,000000e+00)));
	clinit_java_lang_Double(ctx);
	SF_java_lang_Double_NEGATIVE_ZERO_BITS = temp1;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_Double[] {
	(void *) M_java_lang_Double_hashCode_R_int,
	(void *) M_java_lang_Double_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Double_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Double_intValue_R_int,
	(void *) M_java_lang_Double_byteValue_R_byte,
	(void *) M_java_lang_Double_longValue_R_long,
	(void *) M_java_lang_Double_floatValue_R_float,
	(void *) M_java_lang_Double_doubleValue_R_double,
	(void *) M_java_lang_Double_shortValue_R_short,
	(void *) M_java_lang_Double_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Double_isInfinite_R_boolean,
	(void *) M_java_lang_Double_isNaN_R_boolean,
	(void *) M_java_lang_Double_compareTo_java_lang_Double_R_int,
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
	{ "compareTo", "(Ljava/lang/Double;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "TYPE", &class_java_lang_Class, (intptr_t) &SF_java_lang_Double_TYPE, "Ljava/lang/Class;", 25 },
	{ "MAX_VALUE", &class_double, (intptr_t) &SF_java_lang_Double_MAX_VALUE, "D", 25 },
	{ "MIN_VALUE", &class_double, (intptr_t) &SF_java_lang_Double_MIN_VALUE, "D", 25 },
	{ "NaN", &class_double, (intptr_t) &SF_java_lang_Double_NaN, "D", 25 },
	{ "NEGATIVE_INFINITY", &class_double, (intptr_t) &SF_java_lang_Double_NEGATIVE_INFINITY, "D", 25 },
	{ "POSITIVE_INFINITY", &class_double, (intptr_t) &SF_java_lang_Double_POSITIVE_INFINITY, "D", 25 },
	{ "MAX_EXPONENT", &class_int, (intptr_t) &SF_java_lang_Double_MAX_EXPONENT, "I", 25 },
	{ "MIN_EXPONENT", &class_int, (intptr_t) &SF_java_lang_Double_MIN_EXPONENT, "I", 25 },
	{ "SIZE", &class_int, (intptr_t) &SF_java_lang_Double_SIZE, "I", 25 },
	{ "value", &class_double, offsetof(java_lang_Double, F_value), "D", 2 },
	{ "POSITIVE_ZERO_BITS", &class_long, (intptr_t) &SF_java_lang_Double_POSITIVE_ZERO_BITS, "J", 26 },
	{ "NEGATIVE_ZERO_BITS", &class_long, (intptr_t) &SF_java_lang_Double_NEGATIVE_ZERO_BITS, "J", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_Double_double, 0, "(D)V", 1 },
	{ "byteValue", (intptr_t) M_java_lang_Double_byteValue_R_byte, VTABLE_java_lang_Double_byteValue_R_byte, "()B", 1 },
	{ "doubleToLongBits", (intptr_t) SM_java_lang_Double_doubleToLongBits_double_R_long, 0, "(D)J", 265 },
	{ "doubleToRawLongBits", (intptr_t) SM_java_lang_Double_doubleToRawLongBits_double_R_long, 0, "(D)J", 265 },
	{ "doubleValue", (intptr_t) M_java_lang_Double_doubleValue_R_double, VTABLE_java_lang_Double_doubleValue_R_double, "()D", 1 },
	{ "equals", (intptr_t) M_java_lang_Double_equals_java_lang_Object_R_boolean, VTABLE_java_lang_Double_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "floatValue", (intptr_t) M_java_lang_Double_floatValue_R_float, VTABLE_java_lang_Double_floatValue_R_float, "()F", 1 },
	{ "hashCode", (intptr_t) M_java_lang_Double_hashCode_R_int, VTABLE_java_lang_Double_hashCode_R_int, "()I", 1 },
	{ "hashCode", (intptr_t) SM_java_lang_Double_hashCode_double_R_int, 0, "(D)I", 9 },
	{ "intValue", (intptr_t) M_java_lang_Double_intValue_R_int, VTABLE_java_lang_Double_intValue_R_int, "()I", 1 },
	{ "isInfinite", (intptr_t) M_java_lang_Double_isInfinite_R_boolean, VTABLE_java_lang_Double_isInfinite_R_boolean, "()Z", 1 },
	{ "isInfinite", (intptr_t) SM_java_lang_Double_isInfinite_double_R_boolean, 0, "(D)Z", 9 },
	{ "isNaN", (intptr_t) M_java_lang_Double_isNaN_R_boolean, VTABLE_java_lang_Double_isNaN_R_boolean, "()Z", 1 },
	{ "isNaN", (intptr_t) SM_java_lang_Double_isNaN_double_R_boolean, 0, "(D)Z", 9 },
	{ "longBitsToDouble", (intptr_t) SM_java_lang_Double_longBitsToDouble_long_R_double, 0, "(J)D", 265 },
	{ "longValue", (intptr_t) M_java_lang_Double_longValue_R_long, VTABLE_java_lang_Double_longValue_R_long, "()J", 1 },
	{ "parseDouble", (intptr_t) SM_java_lang_Double_parseDouble_java_lang_String_R_double, 0, "(Ljava/lang/String;)D", 9 },
	{ "shortValue", (intptr_t) M_java_lang_Double_shortValue_R_short, VTABLE_java_lang_Double_shortValue_R_short, "()S", 1 },
	{ "toString", (intptr_t) M_java_lang_Double_toString_R_java_lang_String, VTABLE_java_lang_Double_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) SM_java_lang_Double_toString_double_R_java_lang_String, 0, "(D)Ljava/lang/String;", 9 },
	{ "toStringImpl", (intptr_t) SM_java_lang_Double_toStringImpl_double_boolean_R_java_lang_String, 0, "(DZ)Ljava/lang/String;", 264 },
	{ "valueOf", (intptr_t) SM_java_lang_Double_valueOf_java_lang_String_R_java_lang_Double, 0, "(Ljava/lang/String;)Ljava/lang/Double;", 9 },
	{ "valueOf", (intptr_t) SM_java_lang_Double_valueOf_double_R_java_lang_Double, 0, "(D)Ljava/lang/Double;", 9 },
	{ "compare", (intptr_t) SM_java_lang_Double_compare_double_double_R_int, 0, "(DD)I", 9 },
	{ "compareTo", (intptr_t) M_java_lang_Double_compareTo_java_lang_Double_R_int, VTABLE_java_lang_Double_compareTo_java_lang_Double_R_int, "(Ljava/lang/Double;)I", 1 },
	{ "compareTo", (intptr_t) M_java_lang_Double_compareTo_java_lang_Object_R_int, VTABLE_java_lang_Double_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_java_lang_Double, 0, "()V", 8 },
};

Class class_java_lang_Double{
		.nativeName = (intptr_t) "java/lang/Double",
		.parentClass = (intptr_t) &class_java_lang_Number,
		.size = sizeof(java_lang_Double),
		.classVtable = (intptr_t) vtable_java_lang_Double,
		.staticInitializer = (intptr_t) clinit_java_lang_Double,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_Double,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 27,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_Double = registerClass(&class_java_lang_Double);

}
