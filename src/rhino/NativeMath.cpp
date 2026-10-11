#include "rhino/NativeMath.h"
#include "java/lang/Math.h"
#include "java/lang/Integer.h"
#include "java/lang/Number.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Context.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/Scriptable.h"
#include "rhino/IdFunctionObject.h"
#include "rhino/NativeMath.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/Double.h"

extern "C" {

jobject SF_rhino_NativeMath_MATH_TAG;
jdouble SF_rhino_NativeMath_LOG2E;
jint SF_rhino_NativeMath_Id_toSource;
jint SF_rhino_NativeMath_Id_abs;
jint SF_rhino_NativeMath_Id_acos;
jint SF_rhino_NativeMath_Id_asin;
jint SF_rhino_NativeMath_Id_atan;
jint SF_rhino_NativeMath_Id_atan2;
jint SF_rhino_NativeMath_Id_ceil;
jint SF_rhino_NativeMath_Id_cos;
jint SF_rhino_NativeMath_Id_exp;
jint SF_rhino_NativeMath_Id_floor;
jint SF_rhino_NativeMath_Id_log;
jint SF_rhino_NativeMath_Id_max;
jint SF_rhino_NativeMath_Id_min;
jint SF_rhino_NativeMath_Id_pow;
jint SF_rhino_NativeMath_Id_random;
jint SF_rhino_NativeMath_Id_round;
jint SF_rhino_NativeMath_Id_sin;
jint SF_rhino_NativeMath_Id_sqrt;
jint SF_rhino_NativeMath_Id_tan;
jint SF_rhino_NativeMath_Id_cbrt;
jint SF_rhino_NativeMath_Id_cosh;
jint SF_rhino_NativeMath_Id_expm1;
jint SF_rhino_NativeMath_Id_hypot;
jint SF_rhino_NativeMath_Id_log1p;
jint SF_rhino_NativeMath_Id_log10;
jint SF_rhino_NativeMath_Id_sinh;
jint SF_rhino_NativeMath_Id_tanh;
jint SF_rhino_NativeMath_Id_imul;
jint SF_rhino_NativeMath_Id_trunc;
jint SF_rhino_NativeMath_Id_acosh;
jint SF_rhino_NativeMath_Id_asinh;
jint SF_rhino_NativeMath_Id_atanh;
jint SF_rhino_NativeMath_Id_sign;
jint SF_rhino_NativeMath_Id_log2;
jint SF_rhino_NativeMath_Id_fround;
jint SF_rhino_NativeMath_Id_clz32;
jint SF_rhino_NativeMath_LAST_METHOD_ID;
jint SF_rhino_NativeMath_Id_E;
jint SF_rhino_NativeMath_Id_PI;
jint SF_rhino_NativeMath_Id_LN10;
jint SF_rhino_NativeMath_Id_LN2;
jint SF_rhino_NativeMath_Id_LOG2E;
jint SF_rhino_NativeMath_Id_LOG10E;
jint SF_rhino_NativeMath_Id_SQRT1_2;
jint SF_rhino_NativeMath_Id_SQRT2;
jint SF_rhino_NativeMath_MAX_ID;

void mark_rhino_NativeMath(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_NativeMath_MATH_TAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeMath_MATH_TAG)->clazz)->markFunction)((jobject) SF_rhino_NativeMath_MATH_TAG, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_IdScriptableObject(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_NativeMath *) object;
}

void SM_rhino_NativeMath_init_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMath:init", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeMath(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(20);
	clinit_rhino_NativeMath(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeMath);
	init_rhino_NativeMath(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(21);
	((func_rhino_NativeMath_activatePrototypeMap_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeMath_activatePrototypeMap_int])(ctx, (frame[2].o), (44));
	LINE_NUMBER(22);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getObjectPrototype_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	((func_rhino_NativeMath_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeMath_setPrototype_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(23);
	((func_rhino_NativeMath_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeMath_setParentScope_rhino_Scriptable])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(24);
	if ((frame[1].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(25);
	((func_rhino_NativeMath_sealObject) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeMath_sealObject])(ctx, (frame[2].o));
	}
label_5:;
	{
	LINE_NUMBER(27);
	SM_rhino_ScriptableObject_defineProperty_rhino_Scriptable_java_lang_String_java_lang_Object_int(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Math"_j))), (frame[2].o), (jint(2)));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeMath(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMath:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeMath(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(31);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeMath_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMath:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Math"_j)));
	}

	popStackFrame(ctx);
}

void M_rhino_NativeMath_initPrototypeId_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMath:initPrototypeId", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(41);
	if ((frame[1].i) > (36)) goto label_1;
	}
	{
	LINE_NUMBER(44);
	switch((frame[1].i)) {
		case 1: goto label_3;
		case 2: goto label_4;
		case 3: goto label_5;
		case 4: goto label_6;
		case 5: goto label_7;
		case 6: goto label_8;
		case 7: goto label_9;
		case 8: goto label_10;
		case 9: goto label_11;
		case 10: goto label_12;
		case 11: goto label_13;
		case 12: goto label_14;
		case 13: goto label_15;
		case 14: goto label_16;
		case 15: goto label_17;
		case 16: goto label_18;
		case 17: goto label_19;
		case 18: goto label_20;
		case 19: goto label_21;
		case 20: goto label_22;
		case 21: goto label_23;
		case 22: goto label_24;
		case 23: goto label_25;
		case 24: goto label_26;
		case 25: goto label_27;
		case 26: goto label_28;
		case 27: goto label_29;
		case 28: goto label_30;
		case 29: goto label_31;
		case 30: goto label_32;
		case 31: goto label_33;
		case 32: goto label_34;
		case 33: goto label_35;
		case 34: goto label_36;
		case 35: goto label_37;
		case 36: goto label_38;
		default: goto label_39;
	}
	}
label_3:;
	{
	LINE_NUMBER(46);
	frame[3].i = (jint(0));
	LINE_NUMBER(47);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toSource"_j)));
	LINE_NUMBER(48);
	goto label_42;
	}
label_4:;
	{
	LINE_NUMBER(50);
	frame[3].i = (jint(1));
	LINE_NUMBER(51);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"abs"_j)));
	LINE_NUMBER(52);
	goto label_42;
	}
label_5:;
	{
	LINE_NUMBER(54);
	frame[3].i = (jint(1));
	LINE_NUMBER(55);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"acos"_j)));
	LINE_NUMBER(56);
	goto label_42;
	}
label_32:;
	{
	LINE_NUMBER(58);
	frame[3].i = (jint(1));
	LINE_NUMBER(59);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"acosh"_j)));
	LINE_NUMBER(60);
	goto label_42;
	}
label_6:;
	{
	LINE_NUMBER(62);
	frame[3].i = (jint(1));
	LINE_NUMBER(63);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"asin"_j)));
	LINE_NUMBER(64);
	goto label_42;
	}
label_33:;
	{
	LINE_NUMBER(66);
	frame[3].i = (jint(1));
	LINE_NUMBER(67);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"asinh"_j)));
	LINE_NUMBER(68);
	goto label_42;
	}
label_7:;
	{
	LINE_NUMBER(70);
	frame[3].i = (jint(1));
	LINE_NUMBER(71);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"atan"_j)));
	LINE_NUMBER(72);
	goto label_42;
	}
label_34:;
	{
	LINE_NUMBER(74);
	frame[3].i = (jint(1));
	LINE_NUMBER(75);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"atanh"_j)));
	LINE_NUMBER(76);
	goto label_42;
	}
label_8:;
	{
	LINE_NUMBER(78);
	frame[3].i = (jint(2));
	LINE_NUMBER(79);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"atan2"_j)));
	LINE_NUMBER(80);
	goto label_42;
	}
label_22:;
	{
	LINE_NUMBER(82);
	frame[3].i = (jint(1));
	LINE_NUMBER(83);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"cbrt"_j)));
	LINE_NUMBER(84);
	goto label_42;
	}
label_9:;
	{
	LINE_NUMBER(86);
	frame[3].i = (jint(1));
	LINE_NUMBER(87);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"ceil"_j)));
	LINE_NUMBER(88);
	goto label_42;
	}
label_38:;
	{
	LINE_NUMBER(90);
	frame[3].i = (jint(1));
	LINE_NUMBER(91);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"clz32"_j)));
	LINE_NUMBER(92);
	goto label_42;
	}
label_10:;
	{
	LINE_NUMBER(94);
	frame[3].i = (jint(1));
	LINE_NUMBER(95);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"cos"_j)));
	LINE_NUMBER(96);
	goto label_42;
	}
label_23:;
	{
	LINE_NUMBER(98);
	frame[3].i = (jint(1));
	LINE_NUMBER(99);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"cosh"_j)));
	LINE_NUMBER(100);
	goto label_42;
	}
label_11:;
	{
	LINE_NUMBER(102);
	frame[3].i = (jint(1));
	LINE_NUMBER(103);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"exp"_j)));
	LINE_NUMBER(104);
	goto label_42;
	}
label_24:;
	{
	LINE_NUMBER(106);
	frame[3].i = (jint(1));
	LINE_NUMBER(107);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"expm1"_j)));
	LINE_NUMBER(108);
	goto label_42;
	}
label_12:;
	{
	LINE_NUMBER(110);
	frame[3].i = (jint(1));
	LINE_NUMBER(111);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"floor"_j)));
	LINE_NUMBER(112);
	goto label_42;
	}
label_37:;
	{
	LINE_NUMBER(114);
	frame[3].i = (jint(1));
	LINE_NUMBER(115);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"fround"_j)));
	LINE_NUMBER(116);
	goto label_42;
	}
label_25:;
	{
	LINE_NUMBER(118);
	frame[3].i = (jint(2));
	LINE_NUMBER(119);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"hypot"_j)));
	LINE_NUMBER(120);
	goto label_42;
	}
label_30:;
	{
	LINE_NUMBER(122);
	frame[3].i = (jint(2));
	LINE_NUMBER(123);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"imul"_j)));
	LINE_NUMBER(124);
	goto label_42;
	}
label_13:;
	{
	LINE_NUMBER(126);
	frame[3].i = (jint(1));
	LINE_NUMBER(127);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"log"_j)));
	LINE_NUMBER(128);
	goto label_42;
	}
label_26:;
	{
	LINE_NUMBER(130);
	frame[3].i = (jint(1));
	LINE_NUMBER(131);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"log1p"_j)));
	LINE_NUMBER(132);
	goto label_42;
	}
label_27:;
	{
	LINE_NUMBER(134);
	frame[3].i = (jint(1));
	LINE_NUMBER(135);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"log10"_j)));
	LINE_NUMBER(136);
	goto label_42;
	}
label_36:;
	{
	LINE_NUMBER(138);
	frame[3].i = (jint(1));
	LINE_NUMBER(139);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"log2"_j)));
	LINE_NUMBER(140);
	goto label_42;
	}
label_14:;
	{
	LINE_NUMBER(142);
	frame[3].i = (jint(2));
	LINE_NUMBER(143);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"max"_j)));
	LINE_NUMBER(144);
	goto label_42;
	}
label_15:;
	{
	LINE_NUMBER(146);
	frame[3].i = (jint(2));
	LINE_NUMBER(147);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"min"_j)));
	LINE_NUMBER(148);
	goto label_42;
	}
label_16:;
	{
	LINE_NUMBER(150);
	frame[3].i = (jint(2));
	LINE_NUMBER(151);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"pow"_j)));
	LINE_NUMBER(152);
	goto label_42;
	}
label_17:;
	{
	LINE_NUMBER(154);
	frame[3].i = (jint(0));
	LINE_NUMBER(155);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"random"_j)));
	LINE_NUMBER(156);
	goto label_42;
	}
label_18:;
	{
	LINE_NUMBER(158);
	frame[3].i = (jint(1));
	LINE_NUMBER(159);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"round"_j)));
	LINE_NUMBER(160);
	goto label_42;
	}
label_35:;
	{
	LINE_NUMBER(162);
	frame[3].i = (jint(1));
	LINE_NUMBER(163);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"sign"_j)));
	LINE_NUMBER(164);
	goto label_42;
	}
label_19:;
	{
	LINE_NUMBER(166);
	frame[3].i = (jint(1));
	LINE_NUMBER(167);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"sin"_j)));
	LINE_NUMBER(168);
	goto label_42;
	}
label_28:;
	{
	LINE_NUMBER(170);
	frame[3].i = (jint(1));
	LINE_NUMBER(171);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"sinh"_j)));
	LINE_NUMBER(172);
	goto label_42;
	}
label_20:;
	{
	LINE_NUMBER(174);
	frame[3].i = (jint(1));
	LINE_NUMBER(175);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"sqrt"_j)));
	LINE_NUMBER(176);
	goto label_42;
	}
label_21:;
	{
	LINE_NUMBER(178);
	frame[3].i = (jint(1));
	LINE_NUMBER(179);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"tan"_j)));
	LINE_NUMBER(180);
	goto label_42;
	}
label_29:;
	{
	LINE_NUMBER(182);
	frame[3].i = (jint(1));
	LINE_NUMBER(183);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"tanh"_j)));
	LINE_NUMBER(184);
	goto label_42;
	}
label_31:;
	{
	LINE_NUMBER(186);
	frame[3].i = (jint(1));
	LINE_NUMBER(187);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"trunc"_j)));
	LINE_NUMBER(188);
	goto label_42;
	}
label_39:;
	{
	LINE_NUMBER(190);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_42:;
	{
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	clinit_rhino_NativeMath(ctx);
	sp[1].o = (jobject)SF_rhino_NativeMath_MATH_TAG;
	sp[0].o = (jobject)((func_rhino_NativeMath_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeMath_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(193);
	goto label_114;
	}
label_1:;
	{
	LINE_NUMBER(196);
	switch((frame[1].i)) {
		case 37: goto label_115;
		case 38: goto label_116;
		case 39: goto label_117;
		case 40: goto label_118;
		case 41: goto label_119;
		case 42: goto label_120;
		case 43: goto label_121;
		case 44: goto label_122;
		default: goto label_123;
	}
	}
label_115:;
	{
	LINE_NUMBER(198);
	frame[3].d = (jdouble(2.718281828459045));
	LINE_NUMBER(199);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"E"_j)));
	LINE_NUMBER(200);
	goto label_126;
	}
label_116:;
	{
	LINE_NUMBER(202);
	frame[3].d = (jdouble(3.141592653589793));
	LINE_NUMBER(203);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"PI"_j)));
	LINE_NUMBER(204);
	goto label_126;
	}
label_117:;
	{
	LINE_NUMBER(206);
	frame[3].d = (jdouble(2.302585092994046));
	LINE_NUMBER(207);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"LN10"_j)));
	LINE_NUMBER(208);
	goto label_126;
	}
label_118:;
	{
	LINE_NUMBER(210);
	frame[3].d = (jdouble(0.6931471805599453));
	LINE_NUMBER(211);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"LN2"_j)));
	LINE_NUMBER(212);
	goto label_126;
	}
label_119:;
	{
	LINE_NUMBER(214);
	frame[3].d = (jdouble(1.4426950408889634));
	LINE_NUMBER(215);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"LOG2E"_j)));
	LINE_NUMBER(216);
	goto label_126;
	}
label_120:;
	{
	LINE_NUMBER(218);
	frame[3].d = (jdouble(0.4342944819032518));
	LINE_NUMBER(219);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"LOG10E"_j)));
	LINE_NUMBER(220);
	goto label_126;
	}
label_121:;
	{
	LINE_NUMBER(222);
	frame[3].d = (jdouble(0.7071067811865476));
	LINE_NUMBER(223);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"SQRT1_2"_j)));
	LINE_NUMBER(224);
	goto label_126;
	}
label_122:;
	{
	LINE_NUMBER(226);
	frame[3].d = (jdouble(1.4142135623730951));
	LINE_NUMBER(227);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"SQRT2"_j)));
	LINE_NUMBER(228);
	goto label_126;
	}
label_123:;
	{
	LINE_NUMBER(230);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_126:;
	{
	LINE_NUMBER(232);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[3].d));
	((func_rhino_NativeMath_initPrototypeValue_int_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeMath_initPrototypeValue_int_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, (7));
	}
label_114:;
	LINE_NUMBER(235);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_NativeMath_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMath:execIdCall", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(241);
	sp[0].o = frame[1].o;
	clinit_rhino_NativeMath(ctx);
	sp[1].o = (jobject)SF_rhino_NativeMath_MATH_TAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(245);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	frame[8].i = temp0;
	LINE_NUMBER(246);
	switch((frame[8].i)) {
		case 1: goto label_4;
		case 2: goto label_5;
		case 3: goto label_6;
		case 4: goto label_6;
		case 5: goto label_7;
		case 6: goto label_8;
		case 7: goto label_9;
		case 8: goto label_10;
		case 9: goto label_11;
		case 10: goto label_12;
		case 11: goto label_13;
		case 12: goto label_14;
		case 13: goto label_14;
		case 14: goto label_15;
		case 15: goto label_16;
		case 16: goto label_17;
		case 17: goto label_18;
		case 18: goto label_19;
		case 19: goto label_20;
		case 20: goto label_21;
		case 21: goto label_22;
		case 22: goto label_23;
		case 23: goto label_24;
		case 24: goto label_25;
		case 25: goto label_26;
		case 26: goto label_27;
		case 27: goto label_28;
		case 28: goto label_29;
		case 29: goto label_30;
		case 30: goto label_31;
		case 31: goto label_32;
		case 32: goto label_33;
		case 33: goto label_34;
		case 34: goto label_35;
		case 35: goto label_36;
		case 36: goto label_37;
		default: goto label_38;
	}
	}
label_4:;
	{
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Math"_j)));
	}
label_5:;
	{
	LINE_NUMBER(251);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(253);
	if ((doubleCompare((frame[6].d), (jdouble(0)), -1)) != 0) goto label_40;
	}
	INST_DCONST(0);
	goto label_41;
label_40:;
	{
	if ((doubleCompare((frame[6].d), (jdouble(0)), 1)) >= 0) goto label_42;
	}
	{
	jdouble temp0 = -(frame[6].d);
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_42:;
	INST_DLOAD(6);
label_41:;
	{
	sp -= 1;
	frame[6].d = sp[0].d;
	LINE_NUMBER(254);
	goto label_44;
	}
label_6:;
	{
	LINE_NUMBER(258);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(259);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[6].d));
	if (temp1 != 0) goto label_46;
	}
	{
	if ((doubleCompare((jdouble(-1.0)), (frame[6].d), 1)) > 0) goto label_46;
	}
	{
	if ((doubleCompare((frame[6].d), (jdouble(1)), 1)) > 0) goto label_46;
	}
	{
	LINE_NUMBER(260);
	if ((frame[8].i) != (jint(3))) goto label_48;
	}
	{
	jdouble temp0 = (jdouble)SM_java_lang_Math_acos_double_R_double(ctx, (frame[6].d));
	sp[0].d = temp0;
	sp += 1;
	goto label_49;
	}
label_48:;
	INST_DLOAD(6);
	POP_N(1); // Pop method args
	sp->d = (jdouble)SM_java_lang_Math_asin_double_R_double(ctx, sp[0].d);
	sp++;
label_49:;
	INST_DSTORE(6);
	goto label_44;
label_46:;
	{
	LINE_NUMBER(262);
	frame[6].d = (jdouble(std::numeric_limits<double>::quiet_NaN()));
	LINE_NUMBER(264);
	goto label_44;
	}
label_31:;
	{
	LINE_NUMBER(267);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(268);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[6].d));
	if (temp1 != 0) goto label_52;
	}
	{
	LINE_NUMBER(269);
	jdouble temp0 = frame[6].d;
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (((frame[6].d) * (frame[6].d)) - (jdouble(1))));
	jdouble temp2 = (jdouble)SM_java_lang_Math_log_double_R_double(ctx, (temp0 + temp1));
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, temp2);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_52:;
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (jdouble(std::numeric_limits<double>::quiet_NaN())));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_32:;
	{
	LINE_NUMBER(274);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(275);
	jint temp1 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[6].d));
	if (temp1 == 0) goto label_55;
	}
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (frame[6].d));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_55:;
	{
	LINE_NUMBER(278);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[6].d));
	if (temp0 != 0) goto label_57;
	}
	{
	LINE_NUMBER(279);
	if ((doubleCompare((frame[6].d), (jdouble(0)), -1)) != 0) goto label_59;
	}
	{
	LINE_NUMBER(280);
	if ((doubleCompare(((jdouble(1)) / (frame[6].d)), (jdouble(0)), -1)) <= 0) goto label_61;
	}
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (jdouble(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_61:;
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (jdouble(-0,000000e+00)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_59:;
	{
	LINE_NUMBER(285);
	jdouble temp0 = frame[6].d;
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (((frame[6].d) * (frame[6].d)) + (jdouble(1))));
	jdouble temp2 = (jdouble)SM_java_lang_Math_log_double_R_double(ctx, (temp0 + temp1));
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, temp2);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_57:;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (jdouble(std::numeric_limits<double>::quiet_NaN())));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(290);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(291);
	jdouble temp1 = (jdouble)SM_java_lang_Math_atan_double_R_double(ctx, (frame[6].d));
	frame[6].d = temp1;
	LINE_NUMBER(292);
	goto label_44;
	}
label_33:;
	{
	LINE_NUMBER(295);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(296);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[6].d));
	if (temp1 != 0) goto label_66;
	}
	{
	if ((doubleCompare((jdouble(-1.0)), (frame[6].d), 1)) > 0) goto label_66;
	}
	{
	if ((doubleCompare((frame[6].d), (jdouble(1)), 1)) > 0) goto label_66;
	}
	{
	LINE_NUMBER(297);
	if ((doubleCompare((frame[6].d), (jdouble(0)), -1)) != 0) goto label_68;
	}
	{
	LINE_NUMBER(298);
	if ((doubleCompare(((jdouble(1)) / (frame[6].d)), (jdouble(0)), -1)) <= 0) goto label_70;
	}
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (jdouble(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_70:;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (jdouble(-0,000000e+00)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_68:;
	{
	LINE_NUMBER(303);
	jdouble temp0 = jdouble(0.5);
	jdouble temp1 = (jdouble)SM_java_lang_Math_log_double_R_double(ctx, (((frame[6].d) + (jdouble(1))) / ((frame[6].d) - (jdouble(1)))));
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (temp0 * temp1));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_66:;
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (jdouble(std::numeric_limits<double>::quiet_NaN())));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(308);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(309);
	jdouble temp1 = frame[6].d;
	jdouble temp2 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(1)));
	jdouble temp3 = (jdouble)SM_java_lang_Math_atan2_double_double_R_double(ctx, temp1, temp2);
	frame[6].d = temp3;
	LINE_NUMBER(310);
	goto label_44;
	}
label_21:;
	{
	LINE_NUMBER(313);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(314);
	jdouble temp1 = (jdouble)SM_java_lang_Math_cbrt_double_R_double(ctx, (frame[6].d));
	frame[6].d = temp1;
	LINE_NUMBER(315);
	goto label_44;
	}
label_9:;
	{
	LINE_NUMBER(318);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(319);
	jdouble temp1 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (frame[6].d));
	frame[6].d = temp1;
	LINE_NUMBER(320);
	goto label_44;
	}
label_37:;
	{
	LINE_NUMBER(323);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(324);
	if ((doubleCompare((frame[6].d), (jdouble(0)), -1)) == 0) goto label_79;
	}
	{
	jdouble temp0 = frame[6].d;
	LINE_NUMBER(325);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_79;
	}
	{
	jdouble temp0 = frame[6].d;
	LINE_NUMBER(326);
	jint temp1 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_82;
	}
label_79:;
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (32));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_82:;
	{
	LINE_NUMBER(329);
	jlong temp0 = (jlong)SM_rhino_ScriptRuntime_toUint32_double_R_long(ctx, (frame[6].d));
	frame[9].l = temp0;
	LINE_NUMBER(330);
	if ((longCompare((frame[9].l), (jlong(0)))) != 0) goto label_84;
	}
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (32));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_84:;
	{
	LINE_NUMBER(333);
	jdouble temp0 = jdouble(31.0);
	jdouble temp1 = (jdouble)SM_java_lang_Math_log_double_R_double(ctx, (jdouble((bit_cast<jlong>(bit_cast<uint64_t>((frame[9].l)) >> (jint(0)))))));
	jdouble temp2 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (temp1 * (jdouble(1.4426950408889634))));
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (temp0 - temp2));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(336);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(337);
	jint temp1 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[6].d));
	if (temp1 == 0) goto label_87;
	}
	(sp++)->d = jdouble(std::numeric_limits<double>::quiet_NaN());
	goto label_88;
label_87:;
	INST_DLOAD(6);
	POP_N(1); // Pop method args
	sp->d = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, sp[0].d);
	sp++;
label_88:;
	{
	sp -= 1;
	frame[6].d = sp[0].d;
	LINE_NUMBER(338);
	goto label_44;
	}
label_22:;
	{
	LINE_NUMBER(341);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(342);
	jdouble temp1 = (jdouble)SM_java_lang_Math_cosh_double_R_double(ctx, (frame[6].d));
	frame[6].d = temp1;
	LINE_NUMBER(343);
	goto label_44;
	}
label_24:;
	{
	LINE_NUMBER(346);
	jdouble temp0 = (jdouble)SM_rhino_NativeMath_js_hypot_Array1_java_lang_Object_R_double(ctx, (frame[5].o));
	frame[6].d = temp0;
	LINE_NUMBER(347);
	goto label_44;
	}
label_11:;
	{
	LINE_NUMBER(350);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(351);
	if ((doubleCompare((frame[6].d), (jdouble(std::numeric_limits<double>::infinity())), -1)) != 0) goto label_94;
	}
	INST_DLOAD(6);
	goto label_95;
label_94:;
	{
	if ((doubleCompare((frame[6].d), (jdouble(-std::numeric_limits<double>::infinity())), -1)) != 0) goto label_96;
	}
	INST_DCONST(0);
	goto label_95;
label_96:;
	{
	jdouble temp0 = frame[6].d;
	LINE_NUMBER(353);
	jdouble temp1 = (jdouble)SM_java_lang_Math_exp_double_R_double(ctx, temp0);
	sp[0].d = temp1;
	sp += 1;
	}
label_95:;
	{
	sp -= 1;
	frame[6].d = sp[0].d;
	LINE_NUMBER(354);
	goto label_44;
	}
label_23:;
	{
	LINE_NUMBER(357);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(358);
	jdouble temp1 = (jdouble)SM_java_lang_Math_expm1_double_R_double(ctx, (frame[6].d));
	frame[6].d = temp1;
	LINE_NUMBER(359);
	goto label_44;
	}
label_12:;
	{
	LINE_NUMBER(362);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(363);
	jdouble temp1 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (frame[6].d));
	frame[6].d = temp1;
	LINE_NUMBER(364);
	goto label_44;
	}
label_36:;
	{
	LINE_NUMBER(367);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(369);
	frame[6].d = (jdouble((jfloat((frame[6].d)))));
	LINE_NUMBER(370);
	goto label_44;
	}
label_29:;
	{
	LINE_NUMBER(373);
	jint temp0 = (jint)SM_rhino_NativeMath_js_imul_Array1_java_lang_Object_R_int(ctx, (frame[5].o));
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(376);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(378);
	if ((doubleCompare((frame[6].d), (jdouble(0)), 1)) >= 0) goto label_106;
	}
	(sp++)->d = jdouble(std::numeric_limits<double>::quiet_NaN());
	goto label_107;
label_106:;
	INST_DLOAD(6);
	POP_N(1); // Pop method args
	sp->d = (jdouble)SM_java_lang_Math_log_double_R_double(ctx, sp[0].d);
	sp++;
label_107:;
	{
	sp -= 1;
	frame[6].d = sp[0].d;
	LINE_NUMBER(379);
	goto label_44;
	}
label_25:;
	{
	LINE_NUMBER(382);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(383);
	jdouble temp1 = (jdouble)SM_java_lang_Math_log1p_double_R_double(ctx, (frame[6].d));
	frame[6].d = temp1;
	LINE_NUMBER(384);
	goto label_44;
	}
label_26:;
	{
	LINE_NUMBER(387);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(388);
	jdouble temp1 = (jdouble)SM_java_lang_Math_log10_double_R_double(ctx, (frame[6].d));
	frame[6].d = temp1;
	LINE_NUMBER(389);
	goto label_44;
	}
label_35:;
	{
	LINE_NUMBER(392);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(394);
	if ((doubleCompare((frame[6].d), (jdouble(0)), 1)) >= 0) goto label_114;
	}
	(sp++)->d = jdouble(std::numeric_limits<double>::quiet_NaN());
	goto label_115;
label_114:;
	{
	jdouble temp0 = (jdouble)SM_java_lang_Math_log_double_R_double(ctx, (frame[6].d));
	jdouble temp1 = temp0 * (jdouble(1.4426950408889634));
	sp[0].d = temp1;
	sp += 1;
	}
label_115:;
	{
	sp -= 1;
	frame[6].d = sp[0].d;
	LINE_NUMBER(395);
	goto label_44;
	}
label_14:;
	{
	LINE_NUMBER(399);
	if ((frame[8].i) != (12)) goto label_117;
	}
	(sp++)->d = jdouble(-std::numeric_limits<double>::infinity());
	goto label_118;
label_117:;
	(sp++)->d = jdouble(std::numeric_limits<double>::infinity());
label_118:;
	{
	sp -= 1;
	frame[6].d = sp[0].d;
	LINE_NUMBER(401);
	frame[11].i = (jint(0));
	}
label_120:;
	{
	if ((frame[11].i) == (((jarray) nullCheck(ctx, (frame[5].o)))->length)) goto label_121;
	}
	{
	LINE_NUMBER(402);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[11].i))));
	frame[12].d = temp0;
	LINE_NUMBER(403);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[12].d));
	if (temp1 == 0) goto label_124;
	}
	{
	LINE_NUMBER(404);
	frame[6].d = (frame[12].d);
	LINE_NUMBER(405);
	goto label_121;
	}
label_124:;
	{
	LINE_NUMBER(407);
	if ((frame[8].i) != (12)) goto label_127;
	}
	{
	LINE_NUMBER(409);
	jdouble temp0 = (jdouble)SM_java_lang_Math_max_double_double_R_double(ctx, (frame[6].d), (frame[12].d));
	frame[6].d = temp0;
	goto label_129;
	}
label_127:;
	{
	LINE_NUMBER(411);
	jdouble temp0 = (jdouble)SM_java_lang_Math_min_double_double_R_double(ctx, (frame[6].d), (frame[12].d));
	frame[6].d = temp0;
	}
label_129:;
	{
	LINE_NUMBER(401);
	INST_IINC(11, 1);
	goto label_120;
	}
label_121:;
	LINE_NUMBER(414);
	goto label_44;
label_15:;
	{
	LINE_NUMBER(417);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(418);
	jdouble temp1 = frame[6].d;
	jdouble temp2 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(1)));
	jdouble temp3 = (jdouble)SM_rhino_NativeMath_js_pow_double_double_R_double(ctx, temp1, temp2);
	frame[6].d = temp3;
	LINE_NUMBER(419);
	goto label_44;
	}
label_16:;
	{
	LINE_NUMBER(422);
	jdouble temp0 = (jdouble)SM_java_lang_Math_random_R_double(ctx);
	frame[6].d = temp0;
	LINE_NUMBER(423);
	goto label_44;
	}
label_17:;
	{
	LINE_NUMBER(426);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(427);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[6].d));
	if (temp1 != 0) goto label_44;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[6].d));
	if (temp0 != 0) goto label_44;
	}
	{
	LINE_NUMBER(429);
	jlong temp0 = (jlong)SM_java_lang_Math_round_double_R_long(ctx, (frame[6].d));
	frame[11].l = temp0;
	LINE_NUMBER(430);
	if ((longCompare((frame[11].l), (jlong(0)))) == 0) goto label_136;
	}
	{
	LINE_NUMBER(431);
	frame[6].d = (jdouble((frame[11].l)));
	goto label_138;
	}
label_136:;
	{
	LINE_NUMBER(434);
	if ((doubleCompare((frame[6].d), (jdouble(0)), 1)) >= 0) goto label_139;
	}
	{
	LINE_NUMBER(435);
	frame[6].d = (clinit_rhino_ScriptRuntime(ctx), (jdouble)SF_rhino_ScriptRuntime_negativeZero);
	goto label_138;
	}
label_139:;
	{
	LINE_NUMBER(436);
	if ((doubleCompare((frame[6].d), (jdouble(0)), -1)) == 0) goto label_138;
	}
	{
	LINE_NUMBER(437);
	frame[6].d = (jdouble(0));
	}
label_138:;
	LINE_NUMBER(440);
	goto label_44;
label_34:;
	{
	LINE_NUMBER(444);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(445);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[6].d));
	if (temp1 != 0) goto label_143;
	}
	{
	LINE_NUMBER(446);
	if ((doubleCompare((frame[6].d), (jdouble(0)), -1)) != 0) goto label_145;
	}
	{
	LINE_NUMBER(447);
	if ((doubleCompare(((jdouble(1)) / (frame[6].d)), (jdouble(0)), -1)) <= 0) goto label_147;
	}
	{
	LINE_NUMBER(448);
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (jdouble(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_147:;
	{
	LINE_NUMBER(450);
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (jdouble(-0,000000e+00)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_145:;
	{
	LINE_NUMBER(452);
	jdouble temp0 = (jdouble)SM_java_lang_Math_signum_double_R_double(ctx, (frame[6].d));
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_143:;
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (jdouble(std::numeric_limits<double>::quiet_NaN())));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_18:;
	{
	LINE_NUMBER(457);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(458);
	jint temp1 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[6].d));
	if (temp1 == 0) goto label_150;
	}
	(sp++)->d = jdouble(std::numeric_limits<double>::quiet_NaN());
	goto label_151;
label_150:;
	INST_DLOAD(6);
	POP_N(1); // Pop method args
	sp->d = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, sp[0].d);
	sp++;
label_151:;
	{
	sp -= 1;
	frame[6].d = sp[0].d;
	LINE_NUMBER(459);
	goto label_44;
	}
label_27:;
	{
	LINE_NUMBER(462);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(463);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sinh_double_R_double(ctx, (frame[6].d));
	frame[6].d = temp1;
	LINE_NUMBER(464);
	goto label_44;
	}
label_19:;
	{
	LINE_NUMBER(467);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(468);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (frame[6].d));
	frame[6].d = temp1;
	LINE_NUMBER(469);
	goto label_44;
	}
label_20:;
	{
	LINE_NUMBER(472);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(473);
	jdouble temp1 = (jdouble)SM_java_lang_Math_tan_double_R_double(ctx, (frame[6].d));
	frame[6].d = temp1;
	LINE_NUMBER(474);
	goto label_44;
	}
label_28:;
	{
	LINE_NUMBER(477);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(478);
	jdouble temp1 = (jdouble)SM_java_lang_Math_tanh_double_R_double(ctx, (frame[6].d));
	frame[6].d = temp1;
	LINE_NUMBER(479);
	goto label_44;
	}
label_30:;
	{
	LINE_NUMBER(482);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[6].d = temp0;
	LINE_NUMBER(483);
	jdouble temp1 = (jdouble)SM_rhino_NativeMath_js_trunc_double_R_double(ctx, (frame[6].d));
	frame[6].d = temp1;
	LINE_NUMBER(484);
	goto label_44;
	}
label_38:;
	{
	LINE_NUMBER(487);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[8].i));
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_44:;
	{
	LINE_NUMBER(489);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[6].d));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeMath_js_pow_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMath:js_pow", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeMath(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(495);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[2].d));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(497);
	frame[4].d = (frame[2].d);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(498);
	if ((doubleCompare((frame[2].d), (jdouble(0)), -1)) != 0) goto label_5;
	}
	{
	LINE_NUMBER(500);
	frame[4].d = (jdouble(1));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(501);
	if ((doubleCompare((frame[0].d), (jdouble(0)), -1)) != 0) goto label_8;
	}
	{
	LINE_NUMBER(503);
	if ((doubleCompare(((jdouble(1)) / (frame[0].d)), (jdouble(0)), -1)) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(504);
	if ((doubleCompare((frame[2].d), (jdouble(0)), -1)) <= 0) goto label_12;
	}
	INST_DCONST(0);
	goto label_13;
label_12:;
	(sp++)->d = jdouble(std::numeric_limits<double>::infinity());
label_13:;
	INST_DSTORE(4);
	goto label_4;
label_10:;
	{
	LINE_NUMBER(507);
	frame[6].l = (jlong((frame[2].d)));
	LINE_NUMBER(508);
	if ((doubleCompare((jdouble((frame[6].l))), (frame[2].d), -1)) != 0) goto label_16;
	}
	{
	if ((longCompare(((frame[6].l) & (jlong(1))), (jlong(0)))) == 0) goto label_16;
	}
	{
	LINE_NUMBER(509);
	if ((doubleCompare((frame[2].d), (jdouble(0)), -1)) <= 0) goto label_18;
	}
	(sp++)->d = jdouble(-0,000000e+00);
	goto label_19;
label_18:;
	(sp++)->d = jdouble(-std::numeric_limits<double>::infinity());
label_19:;
	INST_DSTORE(4);
	goto label_21;
label_16:;
	{
	LINE_NUMBER(511);
	if ((doubleCompare((frame[2].d), (jdouble(0)), -1)) <= 0) goto label_22;
	}
	INST_DCONST(0);
	goto label_23;
label_22:;
	(sp++)->d = jdouble(std::numeric_limits<double>::infinity());
label_23:;
	INST_DSTORE(4);
label_21:;
	LINE_NUMBER(513);
	goto label_4;
label_8:;
	{
	LINE_NUMBER(515);
	jdouble temp0 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, (frame[0].d), (frame[2].d));
	frame[4].d = temp0;
	LINE_NUMBER(516);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[4].d));
	if (temp1 == 0) goto label_4;
	}
	{
	LINE_NUMBER(519);
	if ((doubleCompare((frame[2].d), (jdouble(std::numeric_limits<double>::infinity())), -1)) != 0) goto label_26;
	}
	{
	LINE_NUMBER(520);
	if ((doubleCompare((frame[0].d), (jdouble(-1.0)), 1)) < 0) goto label_28;
	}
	{
	if ((doubleCompare((jdouble(1)), (frame[0].d), 1)) >= 0) goto label_29;
	}
label_28:;
	{
	LINE_NUMBER(521);
	frame[4].d = (jdouble(std::numeric_limits<double>::infinity()));
	goto label_4;
	}
label_29:;
	{
	LINE_NUMBER(522);
	if ((doubleCompare((jdouble(-1.0)), (frame[0].d), 1)) >= 0) goto label_4;
	}
	{
	if ((doubleCompare((frame[0].d), (jdouble(1)), 1)) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(523);
	frame[4].d = (jdouble(0));
	goto label_4;
	}
label_26:;
	{
	LINE_NUMBER(525);
	if ((doubleCompare((frame[2].d), (jdouble(-std::numeric_limits<double>::infinity())), -1)) != 0) goto label_31;
	}
	{
	LINE_NUMBER(526);
	if ((doubleCompare((frame[0].d), (jdouble(-1.0)), 1)) < 0) goto label_33;
	}
	{
	if ((doubleCompare((jdouble(1)), (frame[0].d), 1)) >= 0) goto label_34;
	}
label_33:;
	{
	LINE_NUMBER(527);
	frame[4].d = (jdouble(0));
	goto label_4;
	}
label_34:;
	{
	LINE_NUMBER(528);
	if ((doubleCompare((jdouble(-1.0)), (frame[0].d), 1)) >= 0) goto label_4;
	}
	{
	if ((doubleCompare((frame[0].d), (jdouble(1)), 1)) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(529);
	frame[4].d = (jdouble(std::numeric_limits<double>::infinity()));
	goto label_4;
	}
label_31:;
	{
	LINE_NUMBER(531);
	if ((doubleCompare((frame[0].d), (jdouble(std::numeric_limits<double>::infinity())), -1)) != 0) goto label_36;
	}
	{
	LINE_NUMBER(532);
	if ((doubleCompare((frame[2].d), (jdouble(0)), -1)) <= 0) goto label_38;
	}
	(sp++)->d = jdouble(std::numeric_limits<double>::infinity());
	goto label_39;
label_38:;
	INST_DCONST(0);
label_39:;
	INST_DSTORE(4);
	goto label_4;
label_36:;
	{
	LINE_NUMBER(533);
	if ((doubleCompare((frame[0].d), (jdouble(-std::numeric_limits<double>::infinity())), -1)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(534);
	frame[6].l = (jlong((frame[2].d)));
	LINE_NUMBER(535);
	if ((doubleCompare((jdouble((frame[6].l))), (frame[2].d), -1)) != 0) goto label_42;
	}
	{
	if ((longCompare(((frame[6].l) & (jlong(1))), (jlong(0)))) == 0) goto label_42;
	}
	{
	LINE_NUMBER(537);
	if ((doubleCompare((frame[2].d), (jdouble(0)), -1)) <= 0) goto label_44;
	}
	(sp++)->d = jdouble(-std::numeric_limits<double>::infinity());
	goto label_45;
label_44:;
	(sp++)->d = jdouble(-0,000000e+00);
label_45:;
	INST_DSTORE(4);
	goto label_4;
label_42:;
	{
	LINE_NUMBER(539);
	if ((doubleCompare((frame[2].d), (jdouble(0)), -1)) <= 0) goto label_46;
	}
	(sp++)->d = jdouble(std::numeric_limits<double>::infinity());
	goto label_47;
label_46:;
	INST_DCONST(0);
label_47:;
	INST_DSTORE(4);
label_4:;
	{
	LINE_NUMBER(544);
	popStackFrame(ctx);
	return (frame[4].d);
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeMath_js_hypot_Array1_java_lang_Object_R_double(jcontext ctx, jobject param0) {
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMath:js_hypot", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeMath(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(549);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(550);
	popStackFrame(ctx);
	return (jdouble(0));
	}
label_1:;
	{
	LINE_NUMBER(552);
	frame[1].d = (jdouble(0));
	LINE_NUMBER(555);
	frame[3].i = (jint(0));
	LINE_NUMBER(556);
	frame[4].i = (jint(0));
	LINE_NUMBER(558);
	frame[5].o = (frame[0].o);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_6:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_7;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(559);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[8].o));
	frame[9].d = temp0;
	LINE_NUMBER(560);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[9].d));
	if (temp1 == 0) goto label_10;
	}
	{
	LINE_NUMBER(561);
	frame[3].i = (jint(1));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(562);
	jint temp0 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[9].d));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(563);
	frame[4].i = (jint(1));
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(565);
	frame[1].d = ((frame[1].d) + ((frame[9].d) * (frame[9].d)));
	}
label_12:;
	{
	LINE_NUMBER(558);
	INST_IINC(7, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(569);
	if ((frame[4].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(570);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::infinity()));
	}
label_15:;
	{
	LINE_NUMBER(572);
	if ((frame[3].i) == 0) goto label_17;
	}
	{
	LINE_NUMBER(573);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_17:;
	{
	LINE_NUMBER(575);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (frame[1].d));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeMath_js_trunc_double_R_double(jcontext ctx, jdouble param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMath:js_trunc", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeMath(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(579);
	if ((doubleCompare((frame[0].d), (jdouble(0)), 1)) >= 0) goto label_1;
	}
	{
	jdouble temp0 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (frame[0].d));
	sp[0].d = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_DLOAD(0);
	POP_N(1); // Pop method args
	sp->d = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, sp[0].d);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jint SM_rhino_NativeMath_js_imul_Array1_java_lang_Object_R_int(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMath:js_imul", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeMath(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(584);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(585);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(588);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toInt32_Array1_java_lang_Object_int_R_int(ctx, (frame[0].o), (jint(0)));
	frame[1].i = temp0;
	LINE_NUMBER(589);
	jint temp1 = (jint)SM_rhino_ScriptRuntime_toInt32_Array1_java_lang_Object_int_R_int(ctx, (frame[0].o), (jint(1)));
	frame[2].i = temp1;
	LINE_NUMBER(590);
	popStackFrame(ctx);
	return ((frame[1].i) * (frame[2].i));
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeMath_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMath:findPrototypeId", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(601);
	frame[2].i = (jint(0));
	LINE_NUMBER(602);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(605);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	switch(temp0) {
		case 1: goto label_3;
		case 2: goto label_4;
		case 3: goto label_5;
		case 4: goto label_6;
		case 5: goto label_7;
		case 6: goto label_8;
		case 7: goto label_9;
		case 8: goto label_10;
		default: goto label_11;
	}
	}
label_3:;
	{
	LINE_NUMBER(607);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (69)) goto label_11;
	}
	{
	LINE_NUMBER(608);
	frame[2].i = (37);
	LINE_NUMBER(609);
	goto label_14;
	}
label_4:;
	{
	LINE_NUMBER(613);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (80)) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	if (temp0 != (73)) goto label_11;
	}
	{
	LINE_NUMBER(614);
	frame[2].i = (38);
	LINE_NUMBER(615);
	goto label_14;
	}
label_5:;
	{
	LINE_NUMBER(619);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	switch(temp0) {
		case 76: goto label_17;
		case 97: goto label_18;
		case 99: goto label_19;
		case 101: goto label_20;
		case 108: goto label_21;
		case 109: goto label_22;
		case 112: goto label_23;
		case 115: goto label_24;
		case 116: goto label_25;
		default: goto label_26;
	}
	}
label_17:;
	{
	LINE_NUMBER(621);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	if (temp0 != (50)) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	if (temp0 != (78)) goto label_11;
	}
	{
	LINE_NUMBER(622);
	frame[2].i = (40);
	LINE_NUMBER(623);
	goto label_14;
	}
label_18:;
	{
	LINE_NUMBER(627);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	if (temp0 != (115)) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	if (temp0 != (98)) goto label_11;
	}
	{
	LINE_NUMBER(628);
	frame[2].i = (jint(2));
	LINE_NUMBER(629);
	goto label_14;
	}
label_19:;
	{
	LINE_NUMBER(633);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	if (temp0 != (115)) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	if (temp0 != (111)) goto label_11;
	}
	{
	LINE_NUMBER(634);
	frame[2].i = (8);
	LINE_NUMBER(635);
	goto label_14;
	}
label_20:;
	{
	LINE_NUMBER(639);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	if (temp0 != (112)) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	if (temp0 != (120)) goto label_11;
	}
	{
	LINE_NUMBER(640);
	frame[2].i = (9);
	LINE_NUMBER(641);
	goto label_14;
	}
label_21:;
	{
	LINE_NUMBER(645);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	if (temp0 != (103)) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	if (temp0 != (111)) goto label_11;
	}
	{
	LINE_NUMBER(646);
	frame[2].i = (11);
	LINE_NUMBER(647);
	goto label_14;
	}
label_22:;
	{
	LINE_NUMBER(651);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	frame[4].i = temp0;
	LINE_NUMBER(652);
	if ((frame[4].i) != (110)) goto label_38;
	}
	{
	LINE_NUMBER(653);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	if (temp0 != (105)) goto label_11;
	}
	{
	LINE_NUMBER(654);
	frame[2].i = (13);
	LINE_NUMBER(655);
	goto label_14;
	}
label_38:;
	{
	LINE_NUMBER(657);
	if ((frame[4].i) != (120)) goto label_11;
	}
	{
	LINE_NUMBER(658);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	if (temp0 != (97)) goto label_11;
	}
	{
	LINE_NUMBER(659);
	frame[2].i = (12);
	LINE_NUMBER(660);
	goto label_14;
	}
label_23:;
	{
	LINE_NUMBER(665);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	if (temp0 != (119)) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	if (temp0 != (111)) goto label_11;
	}
	{
	LINE_NUMBER(666);
	frame[2].i = (14);
	LINE_NUMBER(667);
	goto label_14;
	}
label_24:;
	{
	LINE_NUMBER(671);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	if (temp0 != (110)) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	if (temp0 != (105)) goto label_11;
	}
	{
	LINE_NUMBER(672);
	frame[2].i = (17);
	LINE_NUMBER(673);
	goto label_14;
	}
label_25:;
	{
	LINE_NUMBER(677);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	if (temp0 != (110)) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	if (temp0 != (97)) goto label_11;
	}
	{
	LINE_NUMBER(678);
	frame[2].i = (19);
	LINE_NUMBER(679);
	goto label_14;
	}
label_26:;
	LINE_NUMBER(683);
	goto label_11;
label_6:;
	{
	LINE_NUMBER(685);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	switch(temp0) {
		case 78: goto label_51;
		case 79: goto label_52;
		case 80: goto label_52;
		case 81: goto label_52;
		case 82: goto label_52;
		case 83: goto label_52;
		case 84: goto label_52;
		case 85: goto label_52;
		case 86: goto label_52;
		case 87: goto label_52;
		case 88: goto label_52;
		case 89: goto label_52;
		case 90: goto label_52;
		case 91: goto label_52;
		case 92: goto label_52;
		case 93: goto label_52;
		case 94: goto label_52;
		case 95: goto label_52;
		case 96: goto label_52;
		case 97: goto label_53;
		case 98: goto label_54;
		case 99: goto label_55;
		case 100: goto label_52;
		case 101: goto label_56;
		case 102: goto label_52;
		case 103: goto label_52;
		case 104: goto label_52;
		case 105: goto label_57;
		case 106: goto label_52;
		case 107: goto label_52;
		case 108: goto label_52;
		case 109: goto label_58;
		case 110: goto label_52;
		case 111: goto label_59;
		case 112: goto label_52;
		case 113: goto label_60;
		case 114: goto label_52;
		case 115: goto label_61;
		case 116: goto label_62;
		default: goto label_52;
	}
	}
label_51:;
	{
	LINE_NUMBER(687);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"LN10"_j)));
	LINE_NUMBER(688);
	frame[2].i = (39);
	LINE_NUMBER(689);
	goto label_11;
	}
label_53:;
	{
	LINE_NUMBER(691);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"tanh"_j)));
	LINE_NUMBER(692);
	frame[2].i = (27);
	LINE_NUMBER(693);
	goto label_11;
	}
label_54:;
	{
	LINE_NUMBER(695);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"cbrt"_j)));
	LINE_NUMBER(696);
	frame[2].i = (20);
	LINE_NUMBER(697);
	goto label_11;
	}
label_55:;
	{
	LINE_NUMBER(699);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"acos"_j)));
	LINE_NUMBER(700);
	frame[2].i = (jint(3));
	LINE_NUMBER(701);
	goto label_11;
	}
label_56:;
	{
	LINE_NUMBER(703);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"ceil"_j)));
	LINE_NUMBER(704);
	frame[2].i = (7);
	LINE_NUMBER(705);
	goto label_11;
	}
label_57:;
	{
	LINE_NUMBER(707);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(3)));
	frame[4].i = temp0;
	LINE_NUMBER(708);
	if ((frame[4].i) != (104)) goto label_74;
	}
	{
	LINE_NUMBER(709);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (115)) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	if (temp0 != (110)) goto label_11;
	}
	{
	LINE_NUMBER(710);
	frame[2].i = (26);
	LINE_NUMBER(711);
	goto label_14;
	}
label_74:;
	{
	LINE_NUMBER(713);
	if ((frame[4].i) != (110)) goto label_11;
	}
	{
	LINE_NUMBER(714);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (115)) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	if (temp0 != (103)) goto label_11;
	}
	{
	LINE_NUMBER(715);
	frame[2].i = (33);
	LINE_NUMBER(716);
	goto label_14;
	}
label_58:;
	{
	LINE_NUMBER(721);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"imul"_j)));
	LINE_NUMBER(722);
	frame[2].i = (28);
	LINE_NUMBER(723);
	goto label_11;
	}
label_59:;
	{
	LINE_NUMBER(725);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(726);
	if ((frame[4].i) != (99)) goto label_84;
	}
	{
	LINE_NUMBER(727);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	if (temp0 != (115)) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(3)));
	if (temp0 != (104)) goto label_11;
	}
	{
	LINE_NUMBER(728);
	frame[2].i = (21);
	LINE_NUMBER(729);
	goto label_14;
	}
label_84:;
	{
	LINE_NUMBER(731);
	if ((frame[4].i) != (108)) goto label_11;
	}
	{
	LINE_NUMBER(732);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	if (temp0 != (103)) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(3)));
	if (temp0 != (50)) goto label_11;
	}
	{
	LINE_NUMBER(733);
	frame[2].i = (34);
	LINE_NUMBER(734);
	goto label_14;
	}
label_60:;
	{
	LINE_NUMBER(739);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"sqrt"_j)));
	LINE_NUMBER(740);
	frame[2].i = (18);
	LINE_NUMBER(741);
	goto label_11;
	}
label_61:;
	{
	LINE_NUMBER(743);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"asin"_j)));
	LINE_NUMBER(744);
	frame[2].i = (jint(4));
	LINE_NUMBER(745);
	goto label_11;
	}
label_62:;
	{
	LINE_NUMBER(747);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"atan"_j)));
	LINE_NUMBER(748);
	frame[2].i = (jint(5));
	LINE_NUMBER(749);
	goto label_11;
	}
label_52:;
	LINE_NUMBER(751);
	goto label_11;
label_7:;
	{
	LINE_NUMBER(753);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	switch(temp0) {
		case 76: goto label_97;
		case 83: goto label_98;
		case 97: goto label_99;
		case 99: goto label_100;
		case 101: goto label_101;
		case 102: goto label_102;
		case 104: goto label_103;
		case 108: goto label_104;
		case 114: goto label_105;
		case 116: goto label_106;
		default: goto label_107;
	}
	}
label_97:;
	{
	LINE_NUMBER(755);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"LOG2E"_j)));
	LINE_NUMBER(756);
	frame[2].i = (41);
	LINE_NUMBER(757);
	goto label_11;
	}
label_98:;
	{
	LINE_NUMBER(759);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"SQRT2"_j)));
	LINE_NUMBER(760);
	frame[2].i = (44);
	LINE_NUMBER(761);
	goto label_11;
	}
label_99:;
	{
	LINE_NUMBER(763);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	frame[4].i = temp0;
	LINE_NUMBER(764);
	if ((frame[4].i) != (99)) goto label_113;
	}
	{
	LINE_NUMBER(765);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"acosh"_j)));
	LINE_NUMBER(766);
	frame[2].i = (30);
	goto label_11;
	}
label_113:;
	{
	LINE_NUMBER(767);
	if ((frame[4].i) != (115)) goto label_116;
	}
	{
	LINE_NUMBER(768);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"asinh"_j)));
	LINE_NUMBER(769);
	frame[2].i = (31);
	goto label_11;
	}
label_116:;
	{
	LINE_NUMBER(770);
	if ((frame[4].i) != (116)) goto label_11;
	}
	{
	LINE_NUMBER(771);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(4)));
	frame[4].i = temp0;
	LINE_NUMBER(772);
	if ((frame[4].i) != (50)) goto label_121;
	}
	{
	LINE_NUMBER(773);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	if (temp0 != (97)) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(3)));
	if (temp0 != (110)) goto label_11;
	}
	{
	LINE_NUMBER(774);
	frame[2].i = (6);
	LINE_NUMBER(775);
	goto label_14;
	}
label_121:;
	{
	LINE_NUMBER(777);
	if ((frame[4].i) != (104)) goto label_11;
	}
	{
	LINE_NUMBER(778);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	if (temp0 != (97)) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(3)));
	if (temp0 != (110)) goto label_11;
	}
	{
	LINE_NUMBER(779);
	frame[2].i = (32);
	LINE_NUMBER(780);
	goto label_14;
	}
label_100:;
	{
	LINE_NUMBER(786);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"clz32"_j)));
	LINE_NUMBER(787);
	frame[2].i = (36);
	LINE_NUMBER(788);
	goto label_11;
	}
label_101:;
	{
	LINE_NUMBER(790);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"expm1"_j)));
	LINE_NUMBER(791);
	frame[2].i = (22);
	LINE_NUMBER(792);
	goto label_11;
	}
label_102:;
	{
	LINE_NUMBER(794);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"floor"_j)));
	LINE_NUMBER(795);
	frame[2].i = (10);
	LINE_NUMBER(796);
	goto label_11;
	}
label_103:;
	{
	LINE_NUMBER(798);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"hypot"_j)));
	LINE_NUMBER(799);
	frame[2].i = (23);
	LINE_NUMBER(800);
	goto label_11;
	}
label_104:;
	{
	LINE_NUMBER(802);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(4)));
	frame[4].i = temp0;
	LINE_NUMBER(803);
	if ((frame[4].i) != (48)) goto label_137;
	}
	{
	LINE_NUMBER(804);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"log10"_j)));
	LINE_NUMBER(805);
	frame[2].i = (25);
	goto label_11;
	}
label_137:;
	{
	LINE_NUMBER(806);
	if ((frame[4].i) != (112)) goto label_11;
	}
	{
	LINE_NUMBER(807);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"log1p"_j)));
	LINE_NUMBER(808);
	frame[2].i = (24);
	goto label_11;
	}
label_105:;
	{
	LINE_NUMBER(812);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"round"_j)));
	LINE_NUMBER(813);
	frame[2].i = (16);
	LINE_NUMBER(814);
	goto label_11;
	}
label_106:;
	{
	LINE_NUMBER(816);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"trunc"_j)));
	LINE_NUMBER(817);
	frame[2].i = (29);
	LINE_NUMBER(818);
	goto label_11;
	}
label_107:;
	LINE_NUMBER(820);
	goto label_11;
label_8:;
	{
	LINE_NUMBER(822);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(823);
	if ((frame[4].i) != (76)) goto label_147;
	}
	{
	LINE_NUMBER(824);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"LOG10E"_j)));
	LINE_NUMBER(825);
	frame[2].i = (42);
	goto label_11;
	}
label_147:;
	{
	LINE_NUMBER(826);
	if ((frame[4].i) != (102)) goto label_150;
	}
	{
	LINE_NUMBER(827);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"fround"_j)));
	LINE_NUMBER(828);
	frame[2].i = (35);
	goto label_11;
	}
label_150:;
	{
	LINE_NUMBER(829);
	if ((frame[4].i) != (114)) goto label_11;
	}
	{
	LINE_NUMBER(830);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"random"_j)));
	LINE_NUMBER(831);
	frame[2].i = (15);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(835);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"SQRT1_2"_j)));
	LINE_NUMBER(836);
	frame[2].i = (43);
	LINE_NUMBER(837);
	goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(839);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toSource"_j)));
	LINE_NUMBER(840);
	frame[2].i = (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(843);
	if ((frame[3].o) == nullptr) goto label_14;
	}
	{
	if ((frame[3].o) == (frame[1].o)) goto label_14;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 != 0) goto label_14;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_14:;
	{
	LINE_NUMBER(846);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void clinit_rhino_NativeMath(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_IdScriptableObject(ctx);
	SF_rhino_NativeMath_LOG2E = jdouble(1.4426950408889634);
	SF_rhino_NativeMath_Id_toSource = jint(1);
	SF_rhino_NativeMath_Id_abs = jint(2);
	SF_rhino_NativeMath_Id_acos = jint(3);
	SF_rhino_NativeMath_Id_asin = jint(4);
	SF_rhino_NativeMath_Id_atan = jint(5);
	SF_rhino_NativeMath_Id_atan2 = jint(6);
	SF_rhino_NativeMath_Id_ceil = jint(7);
	SF_rhino_NativeMath_Id_cos = jint(8);
	SF_rhino_NativeMath_Id_exp = jint(9);
	SF_rhino_NativeMath_Id_floor = jint(10);
	SF_rhino_NativeMath_Id_log = jint(11);
	SF_rhino_NativeMath_Id_max = jint(12);
	SF_rhino_NativeMath_Id_min = jint(13);
	SF_rhino_NativeMath_Id_pow = jint(14);
	SF_rhino_NativeMath_Id_random = jint(15);
	SF_rhino_NativeMath_Id_round = jint(16);
	SF_rhino_NativeMath_Id_sin = jint(17);
	SF_rhino_NativeMath_Id_sqrt = jint(18);
	SF_rhino_NativeMath_Id_tan = jint(19);
	SF_rhino_NativeMath_Id_cbrt = jint(20);
	SF_rhino_NativeMath_Id_cosh = jint(21);
	SF_rhino_NativeMath_Id_expm1 = jint(22);
	SF_rhino_NativeMath_Id_hypot = jint(23);
	SF_rhino_NativeMath_Id_log1p = jint(24);
	SF_rhino_NativeMath_Id_log10 = jint(25);
	SF_rhino_NativeMath_Id_sinh = jint(26);
	SF_rhino_NativeMath_Id_tanh = jint(27);
	SF_rhino_NativeMath_Id_imul = jint(28);
	SF_rhino_NativeMath_Id_trunc = jint(29);
	SF_rhino_NativeMath_Id_acosh = jint(30);
	SF_rhino_NativeMath_Id_asinh = jint(31);
	SF_rhino_NativeMath_Id_atanh = jint(32);
	SF_rhino_NativeMath_Id_sign = jint(33);
	SF_rhino_NativeMath_Id_log2 = jint(34);
	SF_rhino_NativeMath_Id_fround = jint(35);
	SF_rhino_NativeMath_Id_clz32 = jint(36);
	SF_rhino_NativeMath_LAST_METHOD_ID = jint(36);
	SF_rhino_NativeMath_Id_E = jint(37);
	SF_rhino_NativeMath_Id_PI = jint(38);
	SF_rhino_NativeMath_Id_LN10 = jint(39);
	SF_rhino_NativeMath_Id_LN2 = jint(40);
	SF_rhino_NativeMath_Id_LOG2E = jint(41);
	SF_rhino_NativeMath_Id_LOG10E = jint(42);
	SF_rhino_NativeMath_Id_SQRT1_2 = jint(43);
	SF_rhino_NativeMath_Id_SQRT2 = jint(44);
	SF_rhino_NativeMath_MAX_ID = jint(44);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMath:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeMath(ctx);
	{
	LINE_NUMBER(16);
	clinit_rhino_NativeMath(ctx);
	SF_rhino_NativeMath_MATH_TAG = (((jobject) createStringLiteral(ctx, u8"Math"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeMath[] {
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
	(void *) M_rhino_NativeMath_getClassName_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_get_int_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean,
	(void *) M_rhino_ScriptableObject_has_int_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_put_int_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_delete_java_lang_String,
	(void *) M_rhino_ScriptableObject_delete_int,
	(void *) M_rhino_ScriptableObject_getPrototype_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setPrototype_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getParentScope_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setParentScope_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_getDefaultValue_java_lang_Class_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_hasInstance_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_rhino_Symbol_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_delete_rhino_Symbol,
	(void *) M_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putConst_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineConst_java_lang_String_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_isConst_java_lang_String_R_boolean,
	(void *) M_rhino_ScriptableObject_createSlotMap_int_R_rhino_SlotMapContainer,
	(void *) M_rhino_ScriptableObject_getTypeOf_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_getAttributes_java_lang_String_R_int,
	(void *) M_rhino_ScriptableObject_getAttributes_int_R_int,
	(void *) M_rhino_IdScriptableObject_getAttributes_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_setAttributes_java_lang_String_int,
	(void *) M_rhino_ScriptableObject_setAttributes_int_int,
	(void *) M_rhino_ScriptableObject_setAttributes_rhino_Symbol_int,
	(void *) M_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean,
	(void *) M_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean_boolean,
	(void *) M_rhino_ScriptableObject_getGetterOrSetter_java_lang_String_int_boolean_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_isGetterOrSetter_java_lang_String_int_boolean_R_boolean,
	(void *) M_rhino_ScriptableObject_addLazilyInitializedValue_java_lang_String_int_rhino_LazilyLoadedCtor_int,
	(void *) M_rhino_ScriptableObject_setExternalArrayData_rhino_ExternalArrayData,
	(void *) M_rhino_ScriptableObject_getExternalArrayData_R_rhino_ExternalArrayData,
	(void *) M_rhino_ScriptableObject_getExternalArrayLength_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_avoidObjectDetection_R_boolean,
	(void *) M_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_defineProperty_rhino_Symbol_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Class_int,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int,
	(void *) M_rhino_ScriptableObject_defineOwnProperties_rhino_Context_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean,
	(void *) M_rhino_ScriptableObject_checkPropertyDefinition_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_sameValue_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_rhino_ScriptableObject_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int,
	(void *) M_rhino_ScriptableObject_isDataDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_isGenericDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_defineFunctionProperties_Array1_java_lang_String_java_lang_Class_int,
	(void *) M_rhino_ScriptableObject_isExtensible_R_boolean,
	(void *) M_rhino_ScriptableObject_preventExtensions,
	(void *) M_rhino_ScriptableObject_sealObject,
	(void *) M_rhino_ScriptableObject_isSealed_R_boolean,
	(void *) M_rhino_ScriptableObject_checkNotSealed_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_getAssociatedValue_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putImpl_java_lang_Object_int_rhino_Scriptable_java_lang_Object_R_boolean,
	(void *) M_rhino_ScriptableObject_putConstImpl_java_lang_String_int_rhino_Scriptable_java_lang_Object_int_R_boolean,
	(void *) M_rhino_ScriptableObject_findAttributeSlot_java_lang_String_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ScriptableObject_findAttributeSlot_rhino_Symbol_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_IdScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ScriptableObject_size_R_int,
	(void *) M_rhino_ScriptableObject_isEmpty_R_boolean,
	(void *) M_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeMath_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultHas_java_lang_String_R_boolean,
	(void *) M_rhino_IdScriptableObject_defaultGet_java_lang_String_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultPut_java_lang_String_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_getMaxInstanceId_R_int,
	(void *) M_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_getInstanceIdName_int_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_setInstanceIdAttributes_int_int,
	(void *) M_rhino_IdScriptableObject_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_hasPrototypeMap_R_boolean,
	(void *) M_rhino_IdScriptableObject_activatePrototypeMap_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeConstructor_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_java_lang_String_java_lang_Object_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int,
	(void *) M_rhino_NativeMath_initPrototypeId_int,
	(void *) M_rhino_NativeMath_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
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
	{ "getClassName", "()Ljava/lang/String;" },
	{ "get", "(Ljava/lang/String;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "get", "(ILrhino/Scriptable;)Ljava/lang/Object;" },
	{ "has", "(Ljava/lang/String;Lrhino/Scriptable;)Z" },
	{ "has", "(ILrhino/Scriptable;)Z" },
	{ "put", "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "put", "(ILrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "delete", "(Ljava/lang/String;)V" },
	{ "delete", "(I)V" },
	{ "getPrototype", "()Lrhino/Scriptable;" },
	{ "setPrototype", "(Lrhino/Scriptable;)V" },
	{ "getParentScope", "()Lrhino/Scriptable;" },
	{ "setParentScope", "(Lrhino/Scriptable;)V" },
	{ "getIds", "()[Ljava/lang/Object;" },
	{ "getDefaultValue", "(Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "hasInstance", "(Lrhino/Scriptable;)Z" },
	{ "get", "(Lrhino/Symbol;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "has", "(Lrhino/Symbol;Lrhino/Scriptable;)Z" },
	{ "put", "(Lrhino/Symbol;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "delete", "(Lrhino/Symbol;)V" },
	{ "getAllIds", "()[Ljava/lang/Object;" },
	{ "putConst", "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "defineConst", "(Ljava/lang/String;Lrhino/Scriptable;)V" },
	{ "isConst", "(Ljava/lang/String;)Z" },
	{ "createSlotMap", "(I)Lrhino/SlotMapContainer;" },
	{ "getTypeOf", "()Ljava/lang/String;" },
	{ "getAttributes", "(Ljava/lang/String;)I" },
	{ "getAttributes", "(I)I" },
	{ "getAttributes", "(Lrhino/Symbol;)I" },
	{ "setAttributes", "(Ljava/lang/String;I)V" },
	{ "setAttributes", "(II)V" },
	{ "setAttributes", "(Lrhino/Symbol;I)V" },
	{ "setGetterOrSetter", "(Ljava/lang/String;ILrhino/Callable;Z)V" },
	{ "setGetterOrSetter", "(Ljava/lang/String;ILrhino/Callable;ZZ)V" },
	{ "getGetterOrSetter", "(Ljava/lang/String;IZ)Ljava/lang/Object;" },
	{ "isGetterOrSetter", "(Ljava/lang/String;IZ)Z" },
	{ "addLazilyInitializedValue", "(Ljava/lang/String;ILrhino/LazilyLoadedCtor;I)V" },
	{ "setExternalArrayData", "(Lrhino/ExternalArrayData;)V" },
	{ "getExternalArrayData", "()Lrhino/ExternalArrayData;" },
	{ "getExternalArrayLength", "()Ljava/lang/Object;" },
	{ "avoidObjectDetection", "()Z" },
	{ "equivalentValues", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Object;I)V" },
	{ "defineProperty", "(Lrhino/Symbol;Ljava/lang/Object;I)V" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Class;I)V" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;I)V" },
	{ "defineOwnProperties", "(Lrhino/Context;Lrhino/ScriptableObject;)V" },
	{ "defineOwnProperty", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject;)V" },
	{ "defineOwnProperty", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject;Z)V" },
	{ "checkPropertyDefinition", "(Lrhino/ScriptableObject;)V" },
	{ "checkPropertyChange", "(Ljava/lang/Object;Lrhino/ScriptableObject;Lrhino/ScriptableObject;)V" },
	{ "sameValue", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "applyDescriptorToAttributeBitset", "(ILrhino/ScriptableObject;)I" },
	{ "isDataDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "isAccessorDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "isGenericDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "defineFunctionProperties", "([Ljava/lang/String;Ljava/lang/Class;I)V" },
	{ "isExtensible", "()Z" },
	{ "preventExtensions", "()V" },
	{ "sealObject", "()V" },
	{ "isSealed", "()Z" },
	{ "checkNotSealed", "(Ljava/lang/Object;I)V" },
	{ "getAssociatedValue", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "associateValue", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putImpl", "(Ljava/lang/Object;ILrhino/Scriptable;Ljava/lang/Object;)Z" },
	{ "putConstImpl", "(Ljava/lang/String;ILrhino/Scriptable;Ljava/lang/Object;I)Z" },
	{ "findAttributeSlot", "(Ljava/lang/String;ILrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "findAttributeSlot", "(Lrhino/Symbol;Lrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "getIds", "(ZZ)[Ljava/lang/Object;" },
	{ "getOwnPropertyDescriptor", "(Lrhino/Context;Ljava/lang/Object;)Lrhino/ScriptableObject;" },
	{ "getSlot", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "size", "()I" },
	{ "isEmpty", "()Z" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "execIdCall", "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "defaultHas", "(Ljava/lang/String;)Z" },
	{ "defaultGet", "(Ljava/lang/String;)Ljava/lang/Object;" },
	{ "defaultPut", "(Ljava/lang/String;Ljava/lang/Object;)V" },
	{ "getMaxInstanceId", "()I" },
	{ "findInstanceIdInfo", "(Ljava/lang/String;)I" },
	{ "findInstanceIdInfo", "(Lrhino/Symbol;)I" },
	{ "getInstanceIdName", "(I)Ljava/lang/String;" },
	{ "getInstanceIdValue", "(I)Ljava/lang/Object;" },
	{ "setInstanceIdValue", "(ILjava/lang/Object;)V" },
	{ "setInstanceIdAttributes", "(II)V" },
	{ "exportAsJSClass", "(ILrhino/Scriptable;Z)Lrhino/IdFunctionObject;" },
	{ "hasPrototypeMap", "()Z" },
	{ "activatePrototypeMap", "(I)V" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILjava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILjava/lang/String;Ljava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILrhino/Symbol;Ljava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeConstructor", "(Lrhino/IdFunctionObject;)V" },
	{ "initPrototypeValue", "(ILjava/lang/String;Ljava/lang/Object;I)V" },
	{ "initPrototypeValue", "(ILrhino/Symbol;Ljava/lang/Object;I)V" },
	{ "initPrototypeId", "(I)V" },
	{ "findPrototypeId", "(Ljava/lang/String;)I" },
	{ "findPrototypeId", "(Lrhino/Symbol;)I" },
	{ "fillConstructorProperties", "(Lrhino/IdFunctionObject;)V" },
	{ "addIdFunctionProperty", "(Lrhino/Scriptable;Ljava/lang/Object;ILjava/lang/String;I)V" },
	{ "newIdFunction", "(Ljava/lang/Object;ILjava/lang/String;ILrhino/Scriptable;)Lrhino/IdFunctionObject;" },
	{ "getBuiltInDescriptor", "(Ljava/lang/String;)Lrhino/ScriptableObject;" },
	{ "getBuiltInDescriptor", "(Lrhino/Symbol;)Lrhino/ScriptableObject;" },
};

static FieldMetadata fields[] {
	{ "MATH_TAG", &class_java_lang_Object, (intptr_t) &SF_rhino_NativeMath_MATH_TAG, "Ljava/lang/Object;", 26 },
	{ "LOG2E", &class_double, (intptr_t) &SF_rhino_NativeMath_LOG2E, "D", 26 },
	{ "Id_toSource", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_toSource, "I", 26 },
	{ "Id_abs", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_abs, "I", 26 },
	{ "Id_acos", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_acos, "I", 26 },
	{ "Id_asin", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_asin, "I", 26 },
	{ "Id_atan", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_atan, "I", 26 },
	{ "Id_atan2", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_atan2, "I", 26 },
	{ "Id_ceil", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_ceil, "I", 26 },
	{ "Id_cos", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_cos, "I", 26 },
	{ "Id_exp", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_exp, "I", 26 },
	{ "Id_floor", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_floor, "I", 26 },
	{ "Id_log", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_log, "I", 26 },
	{ "Id_max", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_max, "I", 26 },
	{ "Id_min", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_min, "I", 26 },
	{ "Id_pow", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_pow, "I", 26 },
	{ "Id_random", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_random, "I", 26 },
	{ "Id_round", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_round, "I", 26 },
	{ "Id_sin", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_sin, "I", 26 },
	{ "Id_sqrt", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_sqrt, "I", 26 },
	{ "Id_tan", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_tan, "I", 26 },
	{ "Id_cbrt", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_cbrt, "I", 26 },
	{ "Id_cosh", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_cosh, "I", 26 },
	{ "Id_expm1", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_expm1, "I", 26 },
	{ "Id_hypot", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_hypot, "I", 26 },
	{ "Id_log1p", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_log1p, "I", 26 },
	{ "Id_log10", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_log10, "I", 26 },
	{ "Id_sinh", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_sinh, "I", 26 },
	{ "Id_tanh", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_tanh, "I", 26 },
	{ "Id_imul", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_imul, "I", 26 },
	{ "Id_trunc", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_trunc, "I", 26 },
	{ "Id_acosh", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_acosh, "I", 26 },
	{ "Id_asinh", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_asinh, "I", 26 },
	{ "Id_atanh", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_atanh, "I", 26 },
	{ "Id_sign", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_sign, "I", 26 },
	{ "Id_log2", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_log2, "I", 26 },
	{ "Id_fround", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_fround, "I", 26 },
	{ "Id_clz32", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_clz32, "I", 26 },
	{ "LAST_METHOD_ID", &class_int, (intptr_t) &SF_rhino_NativeMath_LAST_METHOD_ID, "I", 26 },
	{ "Id_E", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_E, "I", 26 },
	{ "Id_PI", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_PI, "I", 26 },
	{ "Id_LN10", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_LN10, "I", 26 },
	{ "Id_LN2", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_LN2, "I", 26 },
	{ "Id_LOG2E", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_LOG2E, "I", 26 },
	{ "Id_LOG10E", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_LOG10E, "I", 26 },
	{ "Id_SQRT1_2", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_SQRT1_2, "I", 26 },
	{ "Id_SQRT2", &class_int, (intptr_t) &SF_rhino_NativeMath_Id_SQRT2, "I", 26 },
	{ "MAX_ID", &class_int, (intptr_t) &SF_rhino_NativeMath_MAX_ID, "I", 26 },
};

static MethodMetadata methods[] {
	{ "init", (intptr_t) SM_rhino_NativeMath_init_rhino_Scriptable_boolean, 0, "(Lrhino/Scriptable;Z)V", 8 },
	{ "<init>", (intptr_t) init_rhino_NativeMath, 0, "()V", 2 },
	{ "getClassName", (intptr_t) M_rhino_NativeMath_getClassName_R_java_lang_String, VTABLE_rhino_NativeMath_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "initPrototypeId", (intptr_t) M_rhino_NativeMath_initPrototypeId_int, VTABLE_rhino_NativeMath_initPrototypeId_int, "(I)V", 4 },
	{ "execIdCall", (intptr_t) M_rhino_NativeMath_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeMath_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "js_pow", (intptr_t) SM_rhino_NativeMath_js_pow_double_double_R_double, 0, "(DD)D", 10 },
	{ "js_hypot", (intptr_t) SM_rhino_NativeMath_js_hypot_Array1_java_lang_Object_R_double, 0, "([Ljava/lang/Object;)D", 10 },
	{ "js_trunc", (intptr_t) SM_rhino_NativeMath_js_trunc_double_R_double, 0, "(D)D", 10 },
	{ "js_imul", (intptr_t) SM_rhino_NativeMath_js_imul_Array1_java_lang_Object_R_int, 0, "([Ljava/lang/Object;)I", 10 },
	{ "findPrototypeId", (intptr_t) M_rhino_NativeMath_findPrototypeId_java_lang_String_R_int, VTABLE_rhino_NativeMath_findPrototypeId_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "<clinit>", (intptr_t) clinit_rhino_NativeMath, 0, "()V", 8 },
};

Class class_rhino_NativeMath{
		.nativeName = (intptr_t) "rhino/NativeMath",
		.parentClass = (intptr_t) &class_rhino_IdScriptableObject,
		.size = sizeof(rhino_NativeMath),
		.classVtable = (intptr_t) vtable_rhino_NativeMath,
		.staticInitializer = (intptr_t) clinit_rhino_NativeMath,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeMath,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 48,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 113,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeMath = registerClass(&class_rhino_NativeMath);

}
