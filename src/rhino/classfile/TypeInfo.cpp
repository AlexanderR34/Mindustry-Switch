#include "rhino/classfile/TypeInfo.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/io/PrintStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/ClassNotFoundException.h"
#include "rhino/classfile/ClassFileWriter.h"
#include "rhino/classfile/TypeInfo.h"
#include "rhino/classfile/ConstantPool.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"

extern "C" {

jint SF_rhino_classfile_TypeInfo_TOP;
jint SF_rhino_classfile_TypeInfo_INTEGER;
jint SF_rhino_classfile_TypeInfo_FLOAT;
jint SF_rhino_classfile_TypeInfo_DOUBLE;
jint SF_rhino_classfile_TypeInfo_LONG;
jint SF_rhino_classfile_TypeInfo_NULL;
jint SF_rhino_classfile_TypeInfo_UNINITIALIZED_THIS;
jint SF_rhino_classfile_TypeInfo_OBJECT_TAG;
jint SF_rhino_classfile_TypeInfo_UNINITIALIZED_VAR_TAG;

void mark_rhino_classfile_TypeInfo(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_classfile_TypeInfo *) object;
}

void clinit_rhino_classfile_TypeInfo(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_classfile_TypeInfo_TOP = jint(0);
	SF_rhino_classfile_TypeInfo_INTEGER = jint(1);
	SF_rhino_classfile_TypeInfo_FLOAT = jint(2);
	SF_rhino_classfile_TypeInfo_DOUBLE = jint(3);
	SF_rhino_classfile_TypeInfo_LONG = jint(4);
	SF_rhino_classfile_TypeInfo_NULL = jint(5);
	SF_rhino_classfile_TypeInfo_UNINITIALIZED_THIS = jint(6);
	SF_rhino_classfile_TypeInfo_OBJECT_TAG = jint(7);
	SF_rhino_classfile_TypeInfo_UNINITIALIZED_VAR_TAG = jint(8);
}

void init_rhino_classfile_TypeInfo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/TypeInfo:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_TypeInfo(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_rhino_classfile_TypeInfo_OBJECT_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/TypeInfo:OBJECT", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_TypeInfo(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return ((((frame[0].i) & (jint(65535))) << (8)) | (7));
	}

	popStackFrame(ctx);
}

jint SM_rhino_classfile_TypeInfo_OBJECT_java_lang_String_rhino_classfile_ConstantPool_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/TypeInfo:OBJECT", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_TypeInfo(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(29);
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short])(ctx, (frame[1].o), (frame[0].o));
	jint temp1 = (jint)SM_rhino_classfile_TypeInfo_OBJECT_int_R_int(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jint SM_rhino_classfile_TypeInfo_UNINITIALIZED_VARIABLE_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/TypeInfo:UNINITIALIZED_VARIABLE", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_TypeInfo(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return ((((frame[0].i) & (jint(65535))) << (8)) | (8));
	}

	popStackFrame(ctx);
}

jint SM_rhino_classfile_TypeInfo_getTag_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/TypeInfo:getTag", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_TypeInfo(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return ((frame[0].i) & (255));
	}

	popStackFrame(ctx);
}

jint SM_rhino_classfile_TypeInfo_getPayload_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/TypeInfo:getPayload", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_TypeInfo(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return (bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (8)));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_classfile_TypeInfo_getPayloadAsType_int_rhino_classfile_ConstantPool_R_java_lang_String(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/TypeInfo:getPayloadAsType", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_TypeInfo(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(51);
	jint temp0 = (jint)SM_rhino_classfile_TypeInfo_getTag_int_R_int(ctx, (frame[0].i));
	if (temp0 != (7)) goto label_1;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)SM_rhino_classfile_TypeInfo_getPayload_int_R_int(ctx, (frame[0].i));
	sp[0].o = (jobject)((func_rhino_classfile_ConstantPool_getConstantData_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_getConstantData_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}
label_1:;
	{
	LINE_NUMBER(54);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"expecting object type"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint SM_rhino_classfile_TypeInfo_fromType_java_lang_String_rhino_classfile_ConstantPool_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/TypeInfo:fromType", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_TypeInfo(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(61);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(62);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(0)));
	switch(temp0) {
		case 66: goto label_3;
		case 67: goto label_3;
		case 68: goto label_4;
		case 69: goto label_5;
		case 70: goto label_6;
		case 71: goto label_5;
		case 72: goto label_5;
		case 73: goto label_3;
		case 74: goto label_7;
		case 75: goto label_5;
		case 76: goto label_5;
		case 77: goto label_5;
		case 78: goto label_5;
		case 79: goto label_5;
		case 80: goto label_5;
		case 81: goto label_5;
		case 82: goto label_5;
		case 83: goto label_3;
		case 84: goto label_5;
		case 85: goto label_5;
		case 86: goto label_5;
		case 87: goto label_5;
		case 88: goto label_5;
		case 89: goto label_5;
		case 90: goto label_3;
		default: goto label_5;
	}
	}
label_3:;
	{
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return (jint(3));
	}
label_6:;
	{
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return (jint(2));
	}
label_7:;
	{
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return (jint(4));
	}
label_5:;
	{
	LINE_NUMBER(76);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bad type"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(79);
	jint temp0 = (jint)SM_rhino_classfile_TypeInfo_OBJECT_java_lang_String_rhino_classfile_ConstantPool_R_int(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_classfile_TypeInfo_isTwoWords_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/TypeInfo:isTwoWords", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_TypeInfo(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(83);
	if ((frame[0].i) == (jint(3))) goto label_1;
	}
	{
	if ((frame[0].i) != (jint(4))) goto label_2;
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

jint SM_rhino_classfile_TypeInfo_merge_int_int_rhino_classfile_ConstantPool_R_int(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[20];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/TypeInfo:merge", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_TypeInfo(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(105);
	jint temp0 = (jint)SM_rhino_classfile_TypeInfo_getTag_int_R_int(ctx, (frame[0].i));
	frame[3].i = temp0;
	LINE_NUMBER(106);
	jint temp1 = (jint)SM_rhino_classfile_TypeInfo_getTag_int_R_int(ctx, (frame[1].i));
	frame[4].i = temp1;
	LINE_NUMBER(107);
	if ((frame[3].i) != (7)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(108);
	if ((frame[4].i) != (7)) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(110);
	if ((frame[0].i) == (frame[1].i)) goto label_9;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_10;
	{
	if ((frame[1].i) != (jint(5))) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return (frame[0].i);
	}
label_10:;
	{
	LINE_NUMBER(112);
	if ((frame[3].i) == 0) goto label_11;
	}
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_12;
label_11:;
	{
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(115);
	if ((frame[0].i) != (jint(5))) goto label_13;
	}
	INST_ILOAD(6);
	if ((--sp)->i == 0) goto label_13;
	{
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return (frame[1].i);
	}
label_13:;
	{
	LINE_NUMBER(117);
	if ((frame[5].i) == 0) goto label_15;
	}
	INST_ILOAD(6);
	if ((--sp)->i == 0) goto label_15;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)SM_rhino_classfile_TypeInfo_getPayloadAsType_int_rhino_classfile_ConstantPool_R_java_lang_String(ctx, (frame[0].i), (frame[2].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(119);
	sp[0].o = (jobject)SM_rhino_classfile_TypeInfo_getPayloadAsType_int_rhino_classfile_ConstantPool_R_java_lang_String(ctx, (frame[1].i), (frame[2].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(123);
	sp[0].o = (jobject)((func_rhino_classfile_ConstantPool_getConstantData_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_classfile_ConstantPool_getConstantData_int_R_java_lang_Object])(ctx, (frame[2].o), (jint(2)));
	frame[9].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(124);
	sp[0].o = frame[2].o;
	jint temp0 = jint(4);
	LINE_NUMBER(125);
	sp[0].o = (jobject)((func_rhino_classfile_ConstantPool_getConstantData_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_getConstantData_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	frame[10].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(131);
	jint temp1 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[7].o), (frame[9].o));
	if (temp1 == 0) goto label_22;
	}
	{
	LINE_NUMBER(132);
	frame[7].o = (frame[10].o);
	}
label_22:;
	{
	LINE_NUMBER(134);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[8].o), (frame[9].o));
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(135);
	frame[8].o = (frame[10].o);
	}
label_24:;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)SM_rhino_classfile_TypeInfo_getClassFromInternalName_java_lang_String_R_java_lang_Class(ctx, (frame[7].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(139);
	sp[0].o = (jobject)SM_rhino_classfile_TypeInfo_getClassFromInternalName_java_lang_String_R_java_lang_Class(ctx, (frame[8].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(141);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (frame[11].o), (frame[12].o));
	if (temp0 == 0) goto label_28;
	}
	{
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return (frame[0].i);
	}
label_28:;
	{
	LINE_NUMBER(143);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (frame[12].o), (frame[11].o));
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return (frame[1].i);
	}
label_30:;
	{
	LINE_NUMBER(145);
	jint temp0 = (jint)((func_java_lang_Class_isInterface_R_boolean) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_Class_isInterface_R_boolean])(ctx, (frame[12].o));
	if (temp0 != 0) goto label_32;
	}
	{
	sp[0].o = frame[11].o;
	LINE_NUMBER(146);
	jint temp0 = (jint)((func_java_lang_Class_isInterface_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isInterface_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_34;
	}
label_32:;
	{
	LINE_NUMBER(151);
	jint temp0 = (jint)SM_rhino_classfile_TypeInfo_OBJECT_java_lang_String_rhino_classfile_ConstantPool_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"java/lang/Object"_j))), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}
label_34:;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[12].o));
	frame[13].o = sp[0].o;
	}
label_35:;
	{
	LINE_NUMBER(154);
	if ((frame[13].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(155);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (frame[13].o), (frame[11].o));
	if (temp0 == 0) goto label_37;
	}
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[13].o));
	frame[14].o = sp[0].o;
	LINE_NUMBER(157);
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_getSlashedForm_java_lang_String_R_java_lang_String(ctx, (frame[14].o));
	frame[14].o = sp[0].o;
	LINE_NUMBER(158);
	jint temp0 = (jint)SM_rhino_classfile_TypeInfo_OBJECT_java_lang_String_rhino_classfile_ConstantPool_R_int(ctx, (frame[14].o), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}
label_37:;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[13].o));
	frame[13].o = sp[0].o;
	goto label_35;
	}
label_15:;
	{
	LINE_NUMBER(164);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"bad merge attempt between "_j))));
	jint temp0 = frame[0].i;
	sp[2].o = frame[2].o;
	LINE_NUMBER(165);
	sp[2].o = (jobject)SM_rhino_classfile_TypeInfo_toString_int_rhino_classfile_ConstantPool_R_java_lang_String(ctx, temp0, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" and "_j))));
	jint temp1 = frame[1].i;
	sp[2].o = frame[2].o;
	LINE_NUMBER(166);
	sp[2].o = (jobject)SM_rhino_classfile_TypeInfo_toString_int_rhino_classfile_ConstantPool_R_java_lang_String(ctx, temp1, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_classfile_TypeInfo_toString_int_rhino_classfile_ConstantPool_R_java_lang_String(jcontext ctx, jint param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/TypeInfo:toString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_TypeInfo(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(170);
	jint temp0 = (jint)SM_rhino_classfile_TypeInfo_getTag_int_R_int(ctx, (frame[0].i));
	frame[2].i = temp0;
	LINE_NUMBER(171);
	switch((frame[2].i)) {
		case 0: goto label_2;
		case 1: goto label_3;
		case 2: goto label_4;
		case 3: goto label_5;
		case 4: goto label_6;
		case 5: goto label_7;
		case 6: goto label_8;
		default: goto label_9;
	}
	}
label_2:;
	{
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"top"_j)));
	}
label_3:;
	{
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"int"_j)));
	}
label_4:;
	{
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"float"_j)));
	}
label_5:;
	{
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"double"_j)));
	}
label_6:;
	{
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"long"_j)));
	}
label_7:;
	{
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"null"_j)));
	}
label_8:;
	{
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"uninitialized_this"_j)));
	}
label_9:;
	{
	LINE_NUMBER(187);
	if ((frame[2].i) != (7)) goto label_10;
	}
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)SM_rhino_classfile_TypeInfo_getPayloadAsType_int_rhino_classfile_ConstantPool_R_java_lang_String(ctx, (frame[0].i), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(189);
	if ((frame[2].i) != (8)) goto label_12;
	}
	{
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"uninitialized"_j)));
	}
label_12:;
	{
	LINE_NUMBER(192);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bad type"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_classfile_TypeInfo_getClassFromInternalName_java_lang_String_R_java_lang_Class(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/TypeInfo:getClassFromInternalName", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_TypeInfo(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ClassNotFoundException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, (frame[0].o), (47), (46));
	sp[0].o = (jobject)SM_java_lang_Class_forName_java_lang_String_R_java_lang_Class(ctx, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(207);
	frame[1].o = sp[0].o;
	LINE_NUMBER(208);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_classfile_TypeInfo_toString_Array1_int_int_rhino_classfile_ConstantPool_R_java_lang_String(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/TypeInfo:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_TypeInfo(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(213);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(214);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"["_j))));
	LINE_NUMBER(215);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(216);
	if ((frame[4].i) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	}
label_6:;
	{
	LINE_NUMBER(219);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_rhino_classfile_TypeInfo_toString_int_rhino_classfile_ConstantPool_R_java_lang_String(ctx, ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[4].i))), (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(215);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"]"_j))));
	LINE_NUMBER(222);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_rhino_classfile_TypeInfo_print_Array1_int_Array1_int_rhino_classfile_ConstantPool(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/TypeInfo:print", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_TypeInfo(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(226);
	SM_rhino_classfile_TypeInfo_print_Array1_int_int_Array1_int_int_rhino_classfile_ConstantPool(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length), (frame[2].o));
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_classfile_TypeInfo_print_Array1_int_int_Array1_int_int_rhino_classfile_ConstantPool(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jobject param4) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/TypeInfo:print", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_TypeInfo(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(231);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	((func_java_io_PrintStream_print_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_print_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"locals: "_j))));
	LINE_NUMBER(232);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	sp[1].o = (jobject)SM_rhino_classfile_TypeInfo_toString_Array1_int_int_rhino_classfile_ConstantPool_R_java_lang_String(ctx, (frame[0].o), (frame[1].i), (frame[4].o));
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(233);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	((func_java_io_PrintStream_print_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_print_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"stack: "_j))));
	LINE_NUMBER(234);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	sp[1].o = (jobject)SM_rhino_classfile_TypeInfo_toString_Array1_int_int_rhino_classfile_ConstantPool_R_java_lang_String(ctx, (frame[2].o), (frame[3].i), (frame[4].o));
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(235);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	((func_java_io_PrintStream_println) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println])(ctx, sp[0].o);
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_classfile_TypeInfo[] {
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

static FieldMetadata fields[] {
	{ "TOP", &class_int, (intptr_t) &SF_rhino_classfile_TypeInfo_TOP, "I", 24 },
	{ "INTEGER", &class_int, (intptr_t) &SF_rhino_classfile_TypeInfo_INTEGER, "I", 24 },
	{ "FLOAT", &class_int, (intptr_t) &SF_rhino_classfile_TypeInfo_FLOAT, "I", 24 },
	{ "DOUBLE", &class_int, (intptr_t) &SF_rhino_classfile_TypeInfo_DOUBLE, "I", 24 },
	{ "LONG", &class_int, (intptr_t) &SF_rhino_classfile_TypeInfo_LONG, "I", 24 },
	{ "NULL", &class_int, (intptr_t) &SF_rhino_classfile_TypeInfo_NULL, "I", 24 },
	{ "UNINITIALIZED_THIS", &class_int, (intptr_t) &SF_rhino_classfile_TypeInfo_UNINITIALIZED_THIS, "I", 24 },
	{ "OBJECT_TAG", &class_int, (intptr_t) &SF_rhino_classfile_TypeInfo_OBJECT_TAG, "I", 24 },
	{ "UNINITIALIZED_VAR_TAG", &class_int, (intptr_t) &SF_rhino_classfile_TypeInfo_UNINITIALIZED_VAR_TAG, "I", 24 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_classfile_TypeInfo, 0, "()V", 2 },
	{ "OBJECT", (intptr_t) SM_rhino_classfile_TypeInfo_OBJECT_int_R_int, 0, "(I)I", 8 },
	{ "OBJECT", (intptr_t) SM_rhino_classfile_TypeInfo_OBJECT_java_lang_String_rhino_classfile_ConstantPool_R_int, 0, "(Ljava/lang/String;Lrhino/classfile/ConstantPool;)I", 8 },
	{ "UNINITIALIZED_VARIABLE", (intptr_t) SM_rhino_classfile_TypeInfo_UNINITIALIZED_VARIABLE_int_R_int, 0, "(I)I", 8 },
	{ "getTag", (intptr_t) SM_rhino_classfile_TypeInfo_getTag_int_R_int, 0, "(I)I", 8 },
	{ "getPayload", (intptr_t) SM_rhino_classfile_TypeInfo_getPayload_int_R_int, 0, "(I)I", 8 },
	{ "getPayloadAsType", (intptr_t) SM_rhino_classfile_TypeInfo_getPayloadAsType_int_rhino_classfile_ConstantPool_R_java_lang_String, 0, "(ILrhino/classfile/ConstantPool;)Ljava/lang/String;", 8 },
	{ "fromType", (intptr_t) SM_rhino_classfile_TypeInfo_fromType_java_lang_String_rhino_classfile_ConstantPool_R_int, 0, "(Ljava/lang/String;Lrhino/classfile/ConstantPool;)I", 8 },
	{ "isTwoWords", (intptr_t) SM_rhino_classfile_TypeInfo_isTwoWords_int_R_boolean, 0, "(I)Z", 8 },
	{ "merge", (intptr_t) SM_rhino_classfile_TypeInfo_merge_int_int_rhino_classfile_ConstantPool_R_int, 0, "(IILrhino/classfile/ConstantPool;)I", 8 },
	{ "toString", (intptr_t) SM_rhino_classfile_TypeInfo_toString_int_rhino_classfile_ConstantPool_R_java_lang_String, 0, "(ILrhino/classfile/ConstantPool;)Ljava/lang/String;", 8 },
	{ "getClassFromInternalName", (intptr_t) SM_rhino_classfile_TypeInfo_getClassFromInternalName_java_lang_String_R_java_lang_Class, 0, "(Ljava/lang/String;)Ljava/lang/Class;", 10 },
	{ "toString", (intptr_t) SM_rhino_classfile_TypeInfo_toString_Array1_int_int_rhino_classfile_ConstantPool_R_java_lang_String, 0, "([IILrhino/classfile/ConstantPool;)Ljava/lang/String;", 10 },
	{ "print", (intptr_t) SM_rhino_classfile_TypeInfo_print_Array1_int_Array1_int_rhino_classfile_ConstantPool, 0, "([I[ILrhino/classfile/ConstantPool;)V", 8 },
	{ "print", (intptr_t) SM_rhino_classfile_TypeInfo_print_Array1_int_int_Array1_int_int_rhino_classfile_ConstantPool, 0, "([II[IILrhino/classfile/ConstantPool;)V", 8 },
};

Class class_rhino_classfile_TypeInfo{
		.nativeName = (intptr_t) "rhino/classfile/TypeInfo",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_classfile_TypeInfo),
		.classVtable = (intptr_t) vtable_rhino_classfile_TypeInfo,
		.staticInitializer = (intptr_t) clinit_rhino_classfile_TypeInfo,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_classfile_TypeInfo,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_classfile_TypeInfo = registerClass(&class_rhino_classfile_TypeInfo);

}
