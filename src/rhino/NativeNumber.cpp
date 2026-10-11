#include "rhino/NativeNumber.h"
#include "java/lang/Math.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Number.h"
#include "java/lang/Boolean.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Context.h"
#include "rhino/EcmaError.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/Scriptable.h"
#include "rhino/NativeGlobal.h"
#include "rhino/IdFunctionObject.h"
#include "rhino/Undefined.h"
#include "rhino/NativeNumber.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/DToA.h"
#include "java/lang/Double.h"

extern "C" {

jdouble SF_rhino_NativeNumber_MAX_SAFE_INTEGER;
jobject SF_rhino_NativeNumber_NUMBER_TAG;
jint SF_rhino_NativeNumber_MAX_PRECISION;
jdouble SF_rhino_NativeNumber_MIN_SAFE_INTEGER;
jint SF_rhino_NativeNumber_ConstructorId_isFinite;
jint SF_rhino_NativeNumber_ConstructorId_isNaN;
jint SF_rhino_NativeNumber_ConstructorId_isInteger;
jint SF_rhino_NativeNumber_ConstructorId_isSafeInteger;
jint SF_rhino_NativeNumber_ConstructorId_parseFloat;
jint SF_rhino_NativeNumber_ConstructorId_parseInt;
jint SF_rhino_NativeNumber_Id_constructor;
jint SF_rhino_NativeNumber_Id_toString;
jint SF_rhino_NativeNumber_Id_toLocaleString;
jint SF_rhino_NativeNumber_Id_toSource;
jint SF_rhino_NativeNumber_Id_valueOf;
jint SF_rhino_NativeNumber_Id_toFixed;
jint SF_rhino_NativeNumber_Id_toExponential;
jint SF_rhino_NativeNumber_Id_toPrecision;
jint SF_rhino_NativeNumber_MAX_PROTOTYPE_ID;

void mark_rhino_NativeNumber(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_NativeNumber_NUMBER_TAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeNumber_NUMBER_TAG)->clazz)->markFunction)((jobject) SF_rhino_NativeNumber_NUMBER_TAG, mark, depth + 1);
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
	auto self = (rhino_NativeNumber *) object;
}

void SM_rhino_NativeNumber_init_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeNumber:init", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeNumber(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(21);
	clinit_rhino_NativeNumber(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeNumber);
	init_rhino_NativeNumber_double(ctx, sp[0].o, (jdouble(0)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(22);
	sp[0].o = (jobject)((func_rhino_NativeNumber_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeNumber_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject])(ctx, (frame[2].o), (8), (frame[0].o), (frame[1].i));
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeNumber_double(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeNumber:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeNumber(ctx);
	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(25);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(26);
	((rhino_NativeNumber *) NULL_CHECK((frame[0].o)))->F_doubleValue = (frame[1].d);
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeNumber_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeNumber:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Number"_j)));
	}

	popStackFrame(ctx);
}

void M_rhino_NativeNumber_fillConstructorProperties_rhino_IdFunctionObject(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeNumber:fillConstructorProperties", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	frame[2].i = (7);
	LINE_NUMBER(40);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"NaN"_j));
	clinit_rhino_ScriptRuntime(ctx);
	sp[2].o = (jobject)SF_rhino_ScriptRuntime_NaNobj;
	((func_rhino_IdFunctionObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (7));
	LINE_NUMBER(41);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"POSITIVE_INFINITY"_j));
	jdouble temp0 = jdouble(std::numeric_limits<double>::infinity());
	LINE_NUMBER(42);
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, temp0);
	jint temp1 = 7;
	LINE_NUMBER(41);
	((func_rhino_IdFunctionObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp1);
	LINE_NUMBER(44);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"NEGATIVE_INFINITY"_j));
	jdouble temp2 = jdouble(-std::numeric_limits<double>::infinity());
	LINE_NUMBER(45);
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, temp2);
	jint temp3 = 7;
	LINE_NUMBER(44);
	((func_rhino_IdFunctionObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp3);
	LINE_NUMBER(47);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"MAX_VALUE"_j));
	jdouble temp4 = jdouble(1,797693e+308);
	LINE_NUMBER(48);
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, temp4);
	jint temp5 = 7;
	LINE_NUMBER(47);
	((func_rhino_IdFunctionObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp5);
	LINE_NUMBER(50);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"MIN_VALUE"_j));
	jdouble temp6 = jdouble(4,900000e-324);
	LINE_NUMBER(51);
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, temp6);
	jint temp7 = 7;
	LINE_NUMBER(50);
	((func_rhino_IdFunctionObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp7);
	LINE_NUMBER(53);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"MAX_SAFE_INTEGER"_j));
	jdouble temp8 = jdouble(9,007199e+15);
	LINE_NUMBER(54);
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, temp8);
	jint temp9 = 7;
	LINE_NUMBER(53);
	((func_rhino_IdFunctionObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp9);
	LINE_NUMBER(56);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"MIN_SAFE_INTEGER"_j));
	jdouble temp10 = jdouble(-9,007199e+15);
	LINE_NUMBER(57);
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, temp10);
	jint temp11 = 7;
	LINE_NUMBER(56);
	((func_rhino_IdFunctionObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp11);
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeNumber(ctx);
	sp[2].o = (jobject)SF_rhino_NativeNumber_NUMBER_TAG;
	((func_rhino_NativeNumber_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeNumber_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(-1)), (((jobject) createStringLiteral(ctx, u8"isFinite"_j))), (jint(1)));
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeNumber(ctx);
	sp[2].o = (jobject)SF_rhino_NativeNumber_NUMBER_TAG;
	((func_rhino_NativeNumber_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeNumber_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-2), (((jobject) createStringLiteral(ctx, u8"isNaN"_j))), (jint(1)));
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeNumber(ctx);
	sp[2].o = (jobject)SF_rhino_NativeNumber_NUMBER_TAG;
	((func_rhino_NativeNumber_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeNumber_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-3), (((jobject) createStringLiteral(ctx, u8"isInteger"_j))), (jint(1)));
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeNumber(ctx);
	sp[2].o = (jobject)SF_rhino_NativeNumber_NUMBER_TAG;
	((func_rhino_NativeNumber_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeNumber_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-4), (((jobject) createStringLiteral(ctx, u8"isSafeInteger"_j))), (jint(1)));
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeNumber(ctx);
	sp[2].o = (jobject)SF_rhino_NativeNumber_NUMBER_TAG;
	((func_rhino_NativeNumber_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeNumber_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-5), (((jobject) createStringLiteral(ctx, u8"parseFloat"_j))), (jint(1)));
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeNumber(ctx);
	sp[2].o = (jobject)SF_rhino_NativeNumber_NUMBER_TAG;
	((func_rhino_NativeNumber_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeNumber_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-6), (((jobject) createStringLiteral(ctx, u8"parseInt"_j))), (jint(1)));
	LINE_NUMBER(67);
	M_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeNumber_initPrototypeId_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeNumber:initPrototypeId", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(74);
	switch((frame[1].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		case 5: goto label_5;
		case 6: goto label_6;
		case 7: goto label_7;
		case 8: goto label_8;
		default: goto label_9;
	}
	}
label_1:;
	{
	LINE_NUMBER(76);
	frame[3].i = (jint(1));
	LINE_NUMBER(77);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(78);
	goto label_12;
	}
label_2:;
	{
	LINE_NUMBER(80);
	frame[3].i = (jint(1));
	LINE_NUMBER(81);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toString"_j)));
	LINE_NUMBER(82);
	goto label_12;
	}
label_3:;
	{
	LINE_NUMBER(84);
	frame[3].i = (jint(1));
	LINE_NUMBER(85);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toLocaleString"_j)));
	LINE_NUMBER(86);
	goto label_12;
	}
label_4:;
	{
	LINE_NUMBER(88);
	frame[3].i = (jint(0));
	LINE_NUMBER(89);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toSource"_j)));
	LINE_NUMBER(90);
	goto label_12;
	}
label_5:;
	{
	LINE_NUMBER(92);
	frame[3].i = (jint(0));
	LINE_NUMBER(93);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"valueOf"_j)));
	LINE_NUMBER(94);
	goto label_12;
	}
label_6:;
	{
	LINE_NUMBER(96);
	frame[3].i = (jint(1));
	LINE_NUMBER(97);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toFixed"_j)));
	LINE_NUMBER(98);
	goto label_12;
	}
label_7:;
	{
	LINE_NUMBER(100);
	frame[3].i = (jint(1));
	LINE_NUMBER(101);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toExponential"_j)));
	LINE_NUMBER(102);
	goto label_12;
	}
label_8:;
	{
	LINE_NUMBER(104);
	frame[3].i = (jint(1));
	LINE_NUMBER(105);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toPrecision"_j)));
	LINE_NUMBER(106);
	goto label_12;
	}
label_9:;
	{
	LINE_NUMBER(108);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	clinit_rhino_NativeNumber(ctx);
	sp[1].o = (jobject)SF_rhino_NativeNumber_NUMBER_TAG;
	sp[0].o = (jobject)((func_rhino_NativeNumber_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeNumber_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeNumber_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeNumber:execIdCall", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(116);
	sp[0].o = frame[1].o;
	clinit_rhino_NativeNumber(ctx);
	sp[1].o = (jobject)SF_rhino_NativeNumber_NUMBER_TAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(119);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(120);
	if ((frame[6].i) != (jint(1))) goto label_4;
	}
	{
	LINE_NUMBER(121);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) < (jint(1))) goto label_6;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	LINE_NUMBER(122);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, sp[0].o);
	sp[0].d = temp0;
	sp += 1;
	goto label_8;
	}
label_6:;
	INST_DCONST(0);
label_8:;
	{
	sp -= 1;
	frame[7].d = sp[0].d;
	LINE_NUMBER(123);
	if ((frame[4].o) != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(125);
	clinit_rhino_NativeNumber(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeNumber);
	init_rhino_NativeNumber_double(ctx, sp[0].o, (frame[7].d));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[7].d));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(130);
	if ((frame[6].i) >= (jint(1))) goto label_12;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)M_rhino_NativeNumber_execConstructorCall_int_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[6].i), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(136);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_NativeNumber)) != 0) goto label_14;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)SM_rhino_IdScriptableObject_incompatibleCallError_rhino_IdFunctionObject_R_rhino_EcmaError(ctx, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(138);
	frame[7].d = ((jdouble)((rhino_NativeNumber *) NULL_CHECK((checkCast(ctx, &class_rhino_NativeNumber, (frame[4].o)))))->F_doubleValue);
	LINE_NUMBER(140);
	switch((frame[6].i)) {
		case 2: goto label_17;
		case 3: goto label_17;
		case 4: goto label_18;
		case 5: goto label_19;
		case 6: goto label_20;
		case 7: goto label_21;
		case 8: goto label_22;
		default: goto label_23;
	}
	}
label_17:;
	{
	LINE_NUMBER(145);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_25;
	}
label_24:;
	INST_BIPUSH(10);
	goto label_26;
label_25:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	LINE_NUMBER(146);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toInt32_java_lang_Object_R_int(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_26:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(147);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_numberToString_double_int_R_java_lang_String(ctx, (frame[7].d), (frame[9].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_18:;
	{
	LINE_NUMBER(151);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"(new Number("_j))));
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_double_R_java_lang_String(ctx, (frame[7].d));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"))"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[7].d));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_20:;
	{
	LINE_NUMBER(157);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[2].o)))->F_version) >= (200)) goto label_29;
	}
	INST_BIPUSH(-20);
	goto label_30;
label_29:;
	INST_ICONST(0);
label_30:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(158);
	sp[0].o = (jobject)SM_rhino_NativeNumber_num_to_double_Array1_java_lang_Object_int_int_int_int_R_java_lang_String(ctx, (frame[7].d), (frame[5].o), (jint(2)), (jint(2)), (frame[9].i), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(162);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[7].d));
	if (temp0 == 0) goto label_32;
	}
	{
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"NaN"_j)));
	}
label_32:;
	{
	LINE_NUMBER(165);
	jint temp0 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[7].d));
	if (temp0 == 0) goto label_34;
	}
	{
	LINE_NUMBER(166);
	if ((doubleCompare((frame[7].d), (jdouble(0)), -1)) < 0) goto label_36;
	}
	{
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Infinity"_j)));
	}
label_36:;
	{
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"-Infinity"_j)));
	}
label_34:;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)SM_rhino_NativeNumber_num_to_double_Array1_java_lang_Object_int_int_int_int_R_java_lang_String(ctx, (frame[7].d), (frame[5].o), (jint(1)), (jint(3)), (jint(0)), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(178);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) == 0) goto label_38;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_39;
	}
label_38:;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_numberToString_double_int_R_java_lang_String(ctx, (frame[7].d), (10));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_39:;
	{
	LINE_NUMBER(182);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[7].d));
	if (temp0 == 0) goto label_40;
	}
	{
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"NaN"_j)));
	}
label_40:;
	{
	LINE_NUMBER(185);
	jint temp0 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[7].d));
	if (temp0 == 0) goto label_42;
	}
	{
	LINE_NUMBER(186);
	if ((doubleCompare((frame[7].d), (jdouble(0)), -1)) < 0) goto label_44;
	}
	{
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Infinity"_j)));
	}
label_44:;
	{
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"-Infinity"_j)));
	}
label_42:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)SM_rhino_NativeNumber_num_to_double_Array1_java_lang_Object_int_int_int_int_R_java_lang_String(ctx, (frame[7].d), (frame[5].o), (jint(0)), (jint(4)), (jint(1)), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_23:;
	{
	LINE_NUMBER(196);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[6].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeNumber_execConstructorCall_int_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeNumber:execConstructorCall", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(201);
	switch((frame[1].i)) {
		case -6: goto label_1;
		case -5: goto label_2;
		case -4: goto label_3;
		case -3: goto label_4;
		case -2: goto label_5;
		case -1: goto label_6;
		default: goto label_7;
	}
	}
label_6:;
	{
	LINE_NUMBER(203);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) == 0) goto label_8;
	}
	{
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))))) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(206);
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))), &class_java_lang_Number)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)SM_rhino_NativeNumber_isFinite_java_lang_Object_R_java_lang_Object(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(213);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) == 0) goto label_12;
	}
	{
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))))) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(216);
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))), &class_java_lang_Number)) == 0) goto label_14;
	}
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)M_rhino_NativeNumber_isNaN_java_lang_Number_R_java_lang_Object(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Number, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(222);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) == 0) goto label_16;
	}
	{
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))))) goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(225);
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))), &class_java_lang_Number)) == 0) goto label_18;
	}
	{
	LINE_NUMBER(226);
	jint temp0 = (jint)M_rhino_NativeNumber_isInteger_java_lang_Number_R_boolean(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Number, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))))));
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_18:;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(231);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) == 0) goto label_20;
	}
	{
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))))) goto label_21;
	}
label_20:;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(234);
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))), &class_java_lang_Number)) == 0) goto label_22;
	}
	{
	LINE_NUMBER(235);
	jint temp0 = (jint)M_rhino_NativeNumber_isSafeInteger_java_lang_Number_R_boolean(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Number, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))))));
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)SM_rhino_NativeGlobal_js_parseFloat_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)SM_rhino_NativeGlobal_js_parseInt_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(246);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeNumber_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeNumber:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_numberToString_double_int_R_java_lang_String(ctx, ((jdouble)((rhino_NativeNumber *) NULL_CHECK((frame[0].o)))->F_doubleValue), (10));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeNumber_num_to_double_Array1_java_lang_Object_int_int_int_int_R_java_lang_String(jcontext ctx, jdouble param0, jobject param1, jint param2, jint param3, jint param4, jint param5) {
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeNumber:num_to", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeNumber(ctx);
	frame[0].d = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(260);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) != 0) goto label_1;
	}
	{
	LINE_NUMBER(261);
	frame[7].i = (jint(0));
	LINE_NUMBER(262);
	frame[4].i = (frame[3].i);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(266);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	frame[8].d = temp0;
	LINE_NUMBER(267);
	if ((doubleCompare((frame[8].d), (jdouble((frame[5].i))), 1)) < 0) goto label_6;
	}
	{
	if ((doubleCompare((frame[8].d), (jdouble(100.0)), -1)) <= 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(268);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.bad.precision"_j));
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)));
	LINE_NUMBER(269);
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	LINE_NUMBER(268);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage1_java_lang_String_java_lang_Object_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(270);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"RangeError"_j))), (frame[10].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(272);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toInt32_double_R_int(ctx, (frame[8].d));
	frame[7].i = temp0;
	}
label_4:;
	{
	LINE_NUMBER(274);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(275);
	SM_rhino_DToA_JS_dtostr_java_lang_StringBuilder_int_int_double(ctx, (frame[8].o), (frame[4].i), ((frame[7].i) + (frame[6].i)), (frame[0].d));
	LINE_NUMBER(276);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeNumber_isFinite_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeNumber:isFinite", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeNumber(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(280);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[0].o));
	frame[1].d = temp0;
	LINE_NUMBER(281);
	jint temp1 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[1].d));
	if (temp1 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[1].d));
	if (temp0 != 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_rhino_ScriptRuntime_wrapBoolean_boolean_R_java_lang_Boolean(ctx, sp[0].i);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_rhino_NativeNumber_isNaN_java_lang_Number_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeNumber:isNaN", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)M_rhino_NativeNumber_doubleVal_java_lang_Number_R_java_lang_Double(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(286);
	jint temp0 = (jint)M_rhino_NativeNumber_isDoubleNan_java_lang_Double_R_boolean(ctx, (frame[0].o), (frame[2].o));
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp0);
	jint temp1 = (jint)SM_rhino_ScriptRuntime_toBoolean_java_lang_Object_R_boolean(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeNumber_isDoubleNan_java_lang_Double_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeNumber:isDoubleNan", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(290);
	jint temp0 = (jint)((func_java_lang_Double_isNaN_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Double_isNaN_R_boolean])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeNumber_isInteger_java_lang_Number_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeNumber:isInteger", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)M_rhino_NativeNumber_doubleVal_java_lang_Number_R_java_lang_Double(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(295);
	jint temp0 = (jint)M_rhino_NativeNumber_isDoubleInteger_java_lang_Double_R_boolean(ctx, (frame[0].o), (frame[2].o));
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp0);
	jint temp1 = (jint)SM_rhino_ScriptRuntime_toBoolean_java_lang_Object_R_boolean(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeNumber_isDoubleInteger_java_lang_Double_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeNumber:isDoubleInteger", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(299);
	jint temp0 = (jint)((func_java_lang_Double_isInfinite_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Double_isInfinite_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_Double_isNaN_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Double_isNaN_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(300);
	jdouble temp0 = (jdouble)((func_java_lang_Double_doubleValue_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Double_doubleValue_R_double])(ctx, sp[0].o);
	jdouble temp1 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, temp0);
	jdouble temp2 = (jdouble)((func_java_lang_Double_doubleValue_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Double_doubleValue_R_double])(ctx, (frame[1].o));
	if ((doubleCompare(temp1, temp2, -1)) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	LINE_NUMBER(299);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_rhino_NativeNumber_isSafeInteger_java_lang_Number_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeNumber:isSafeInteger", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)M_rhino_NativeNumber_doubleVal_java_lang_Number_R_java_lang_Double(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(305);
	jint temp0 = (jint)M_rhino_NativeNumber_isDoubleSafeInteger_java_lang_Double_R_boolean(ctx, (frame[0].o), (frame[2].o));
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp0);
	jint temp1 = (jint)SM_rhino_ScriptRuntime_toBoolean_java_lang_Object_R_boolean(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeNumber_isDoubleSafeInteger_java_lang_Double_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeNumber:isDoubleSafeInteger", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(309);
	jint temp0 = (jint)M_rhino_NativeNumber_isDoubleInteger_java_lang_Double_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(310);
	jdouble temp0 = (jdouble)((func_java_lang_Double_doubleValue_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Double_doubleValue_R_double])(ctx, sp[0].o);
	if ((doubleCompare(temp0, (jdouble(9,007199e+15)), 1)) > 0) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(311);
	jdouble temp0 = (jdouble)((func_java_lang_Double_doubleValue_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Double_doubleValue_R_double])(ctx, sp[0].o);
	if ((doubleCompare(temp0, (jdouble(-9,007199e+15)), -1)) < 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_4;
label_1:;
	INST_ICONST(0);
label_4:;
	LINE_NUMBER(309);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_rhino_NativeNumber_doubleVal_java_lang_Number_R_java_lang_Double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeNumber:doubleVal", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(315);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Double)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(316);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_Double, (frame[1].o)));
	}
label_1:;
	{
	LINE_NUMBER(318);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (frame[1].o));
	frame[2].d = temp0;
	LINE_NUMBER(319);
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (frame[2].d));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeNumber_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeNumber:findPrototypeId", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(330);
	frame[2].i = (jint(0));
	LINE_NUMBER(331);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(334);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	switch(temp0) {
		case 7: goto label_3;
		case 8: goto label_4;
		case 9: goto label_5;
		case 10: goto label_5;
		case 11: goto label_6;
		case 12: goto label_5;
		case 13: goto label_7;
		case 14: goto label_8;
		default: goto label_5;
	}
	}
label_3:;
	{
	LINE_NUMBER(336);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(337);
	if ((frame[4].i) != (116)) goto label_10;
	}
	{
	LINE_NUMBER(338);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toFixed"_j)));
	LINE_NUMBER(339);
	frame[2].i = (6);
	goto label_5;
	}
label_10:;
	{
	LINE_NUMBER(340);
	if ((frame[4].i) != (118)) goto label_5;
	}
	{
	LINE_NUMBER(341);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"valueOf"_j)));
	LINE_NUMBER(342);
	frame[2].i = (jint(5));
	goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(346);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(3)));
	frame[4].i = temp0;
	LINE_NUMBER(347);
	if ((frame[4].i) != (111)) goto label_16;
	}
	{
	LINE_NUMBER(348);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toSource"_j)));
	LINE_NUMBER(349);
	frame[2].i = (jint(4));
	goto label_5;
	}
label_16:;
	{
	LINE_NUMBER(350);
	if ((frame[4].i) != (116)) goto label_5;
	}
	{
	LINE_NUMBER(351);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toString"_j)));
	LINE_NUMBER(352);
	frame[2].i = (jint(2));
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(356);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(357);
	if ((frame[4].i) != (99)) goto label_22;
	}
	{
	LINE_NUMBER(358);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(359);
	frame[2].i = (jint(1));
	goto label_5;
	}
label_22:;
	{
	LINE_NUMBER(360);
	if ((frame[4].i) != (116)) goto label_5;
	}
	{
	LINE_NUMBER(361);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toPrecision"_j)));
	LINE_NUMBER(362);
	frame[2].i = (8);
	goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(366);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toExponential"_j)));
	LINE_NUMBER(367);
	frame[2].i = (7);
	LINE_NUMBER(368);
	goto label_5;
	}
label_8:;
	{
	LINE_NUMBER(370);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toLocaleString"_j)));
	LINE_NUMBER(371);
	frame[2].i = (jint(3));
	}
label_5:;
	{
	LINE_NUMBER(374);
	if ((frame[3].o) == nullptr) goto label_30;
	}
	{
	if ((frame[3].o) == (frame[1].o)) goto label_30;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 != 0) goto label_30;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_30:;
	{
	LINE_NUMBER(377);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void clinit_rhino_NativeNumber(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_IdScriptableObject(ctx);
	SF_rhino_NativeNumber_MAX_SAFE_INTEGER = jdouble(9,007199e+15);
	SF_rhino_NativeNumber_MAX_PRECISION = jint(100);
	SF_rhino_NativeNumber_MIN_SAFE_INTEGER = jdouble(-9,007199e+15);
	SF_rhino_NativeNumber_ConstructorId_isFinite = jint(-1);
	SF_rhino_NativeNumber_ConstructorId_isNaN = jint(-2);
	SF_rhino_NativeNumber_ConstructorId_isInteger = jint(-3);
	SF_rhino_NativeNumber_ConstructorId_isSafeInteger = jint(-4);
	SF_rhino_NativeNumber_ConstructorId_parseFloat = jint(-5);
	SF_rhino_NativeNumber_ConstructorId_parseInt = jint(-6);
	SF_rhino_NativeNumber_Id_constructor = jint(1);
	SF_rhino_NativeNumber_Id_toString = jint(2);
	SF_rhino_NativeNumber_Id_toLocaleString = jint(3);
	SF_rhino_NativeNumber_Id_toSource = jint(4);
	SF_rhino_NativeNumber_Id_valueOf = jint(5);
	SF_rhino_NativeNumber_Id_toFixed = jint(6);
	SF_rhino_NativeNumber_Id_toExponential = jint(7);
	SF_rhino_NativeNumber_Id_toPrecision = jint(8);
	SF_rhino_NativeNumber_MAX_PROTOTYPE_ID = jint(8);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeNumber:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeNumber(ctx);
	{
	LINE_NUMBER(15);
	clinit_rhino_NativeNumber(ctx);
	SF_rhino_NativeNumber_NUMBER_TAG = (((jobject) createStringLiteral(ctx, u8"Number"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeNumber[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_NativeNumber_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_NativeNumber_getClassName_R_java_lang_String,
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
	(void *) M_rhino_NativeNumber_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
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
	(void *) M_rhino_NativeNumber_initPrototypeId_int,
	(void *) M_rhino_NativeNumber_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_NativeNumber_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
	(void *) M_rhino_NativeNumber_execConstructorCall_int_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeNumber_isNaN_java_lang_Number_R_java_lang_Object,
	(void *) M_rhino_NativeNumber_isDoubleNan_java_lang_Double_R_boolean,
	(void *) M_rhino_NativeNumber_isInteger_java_lang_Number_R_boolean,
	(void *) M_rhino_NativeNumber_isDoubleInteger_java_lang_Double_R_boolean,
	(void *) M_rhino_NativeNumber_isSafeInteger_java_lang_Number_R_boolean,
	(void *) M_rhino_NativeNumber_isDoubleSafeInteger_java_lang_Double_R_boolean,
	(void *) M_rhino_NativeNumber_doubleVal_java_lang_Number_R_java_lang_Double,
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
	{ "execConstructorCall", "(I[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "isNaN", "(Ljava/lang/Number;)Ljava/lang/Object;" },
	{ "isDoubleNan", "(Ljava/lang/Double;)Z" },
	{ "isInteger", "(Ljava/lang/Number;)Z" },
	{ "isDoubleInteger", "(Ljava/lang/Double;)Z" },
	{ "isSafeInteger", "(Ljava/lang/Number;)Z" },
	{ "isDoubleSafeInteger", "(Ljava/lang/Double;)Z" },
	{ "doubleVal", "(Ljava/lang/Number;)Ljava/lang/Double;" },
};

static FieldMetadata fields[] {
	{ "MAX_SAFE_INTEGER", &class_double, (intptr_t) &SF_rhino_NativeNumber_MAX_SAFE_INTEGER, "D", 25 },
	{ "NUMBER_TAG", &class_java_lang_Object, (intptr_t) &SF_rhino_NativeNumber_NUMBER_TAG, "Ljava/lang/Object;", 26 },
	{ "MAX_PRECISION", &class_int, (intptr_t) &SF_rhino_NativeNumber_MAX_PRECISION, "I", 26 },
	{ "MIN_SAFE_INTEGER", &class_double, (intptr_t) &SF_rhino_NativeNumber_MIN_SAFE_INTEGER, "D", 26 },
	{ "ConstructorId_isFinite", &class_int, (intptr_t) &SF_rhino_NativeNumber_ConstructorId_isFinite, "I", 26 },
	{ "ConstructorId_isNaN", &class_int, (intptr_t) &SF_rhino_NativeNumber_ConstructorId_isNaN, "I", 26 },
	{ "ConstructorId_isInteger", &class_int, (intptr_t) &SF_rhino_NativeNumber_ConstructorId_isInteger, "I", 26 },
	{ "ConstructorId_isSafeInteger", &class_int, (intptr_t) &SF_rhino_NativeNumber_ConstructorId_isSafeInteger, "I", 26 },
	{ "ConstructorId_parseFloat", &class_int, (intptr_t) &SF_rhino_NativeNumber_ConstructorId_parseFloat, "I", 26 },
	{ "ConstructorId_parseInt", &class_int, (intptr_t) &SF_rhino_NativeNumber_ConstructorId_parseInt, "I", 26 },
	{ "Id_constructor", &class_int, (intptr_t) &SF_rhino_NativeNumber_Id_constructor, "I", 26 },
	{ "Id_toString", &class_int, (intptr_t) &SF_rhino_NativeNumber_Id_toString, "I", 26 },
	{ "Id_toLocaleString", &class_int, (intptr_t) &SF_rhino_NativeNumber_Id_toLocaleString, "I", 26 },
	{ "Id_toSource", &class_int, (intptr_t) &SF_rhino_NativeNumber_Id_toSource, "I", 26 },
	{ "Id_valueOf", &class_int, (intptr_t) &SF_rhino_NativeNumber_Id_valueOf, "I", 26 },
	{ "Id_toFixed", &class_int, (intptr_t) &SF_rhino_NativeNumber_Id_toFixed, "I", 26 },
	{ "Id_toExponential", &class_int, (intptr_t) &SF_rhino_NativeNumber_Id_toExponential, "I", 26 },
	{ "Id_toPrecision", &class_int, (intptr_t) &SF_rhino_NativeNumber_Id_toPrecision, "I", 26 },
	{ "MAX_PROTOTYPE_ID", &class_int, (intptr_t) &SF_rhino_NativeNumber_MAX_PROTOTYPE_ID, "I", 26 },
	{ "doubleValue", &class_double, offsetof(rhino_NativeNumber, F_doubleValue), "D", 18 },
};

static MethodMetadata methods[] {
	{ "init", (intptr_t) SM_rhino_NativeNumber_init_rhino_Scriptable_boolean, 0, "(Lrhino/Scriptable;Z)V", 8 },
	{ "<init>", (intptr_t) init_rhino_NativeNumber_double, 0, "(D)V", 0 },
	{ "getClassName", (intptr_t) M_rhino_NativeNumber_getClassName_R_java_lang_String, VTABLE_rhino_NativeNumber_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "fillConstructorProperties", (intptr_t) M_rhino_NativeNumber_fillConstructorProperties_rhino_IdFunctionObject, VTABLE_rhino_NativeNumber_fillConstructorProperties_rhino_IdFunctionObject, "(Lrhino/IdFunctionObject;)V", 4 },
	{ "initPrototypeId", (intptr_t) M_rhino_NativeNumber_initPrototypeId_int, VTABLE_rhino_NativeNumber_initPrototypeId_int, "(I)V", 4 },
	{ "execIdCall", (intptr_t) M_rhino_NativeNumber_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeNumber_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "execConstructorCall", (intptr_t) M_rhino_NativeNumber_execConstructorCall_int_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeNumber_execConstructorCall_int_Array1_java_lang_Object_R_java_lang_Object, "(I[Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "toString", (intptr_t) M_rhino_NativeNumber_toString_R_java_lang_String, VTABLE_rhino_NativeNumber_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "num_to", (intptr_t) SM_rhino_NativeNumber_num_to_double_Array1_java_lang_Object_int_int_int_int_R_java_lang_String, 0, "(D[Ljava/lang/Object;IIII)Ljava/lang/String;", 10 },
	{ "isFinite", (intptr_t) SM_rhino_NativeNumber_isFinite_java_lang_Object_R_java_lang_Object, 0, "(Ljava/lang/Object;)Ljava/lang/Object;", 8 },
	{ "isNaN", (intptr_t) M_rhino_NativeNumber_isNaN_java_lang_Number_R_java_lang_Object, VTABLE_rhino_NativeNumber_isNaN_java_lang_Number_R_java_lang_Object, "(Ljava/lang/Number;)Ljava/lang/Object;", 2 },
	{ "isDoubleNan", (intptr_t) M_rhino_NativeNumber_isDoubleNan_java_lang_Double_R_boolean, VTABLE_rhino_NativeNumber_isDoubleNan_java_lang_Double_R_boolean, "(Ljava/lang/Double;)Z", 2 },
	{ "isInteger", (intptr_t) M_rhino_NativeNumber_isInteger_java_lang_Number_R_boolean, VTABLE_rhino_NativeNumber_isInteger_java_lang_Number_R_boolean, "(Ljava/lang/Number;)Z", 2 },
	{ "isDoubleInteger", (intptr_t) M_rhino_NativeNumber_isDoubleInteger_java_lang_Double_R_boolean, VTABLE_rhino_NativeNumber_isDoubleInteger_java_lang_Double_R_boolean, "(Ljava/lang/Double;)Z", 2 },
	{ "isSafeInteger", (intptr_t) M_rhino_NativeNumber_isSafeInteger_java_lang_Number_R_boolean, VTABLE_rhino_NativeNumber_isSafeInteger_java_lang_Number_R_boolean, "(Ljava/lang/Number;)Z", 2 },
	{ "isDoubleSafeInteger", (intptr_t) M_rhino_NativeNumber_isDoubleSafeInteger_java_lang_Double_R_boolean, VTABLE_rhino_NativeNumber_isDoubleSafeInteger_java_lang_Double_R_boolean, "(Ljava/lang/Double;)Z", 2 },
	{ "doubleVal", (intptr_t) M_rhino_NativeNumber_doubleVal_java_lang_Number_R_java_lang_Double, VTABLE_rhino_NativeNumber_doubleVal_java_lang_Number_R_java_lang_Double, "(Ljava/lang/Number;)Ljava/lang/Double;", 2 },
	{ "findPrototypeId", (intptr_t) M_rhino_NativeNumber_findPrototypeId_java_lang_String_R_int, VTABLE_rhino_NativeNumber_findPrototypeId_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "<clinit>", (intptr_t) clinit_rhino_NativeNumber, 0, "()V", 8 },
};

Class class_rhino_NativeNumber{
		.nativeName = (intptr_t) "rhino/NativeNumber",
		.parentClass = (intptr_t) &class_rhino_IdScriptableObject,
		.size = sizeof(rhino_NativeNumber),
		.classVtable = (intptr_t) vtable_rhino_NativeNumber,
		.staticInitializer = (intptr_t) clinit_rhino_NativeNumber,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeNumber,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 20,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 121,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeNumber = registerClass(&class_rhino_NativeNumber);

}
