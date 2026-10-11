#include "java/security/provider/ByteArrayAccess.h"
#include "java/lang/Object.h"
#include "java/lang/ArrayIndexOutOfBoundsException.h"
#include "java/security/provider/ByteArrayAccess.h"

extern "C" {


void mark_java_security_provider_ByteArrayAccess(jobject object, jint mark, jint depth) {
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
	auto self = (java_security_provider_ByteArrayAccess *) object;
}

void clinit_java_security_provider_ByteArrayAccess(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_security_provider_ByteArrayAccess(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/ByteArrayAccess:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_provider_ByteArrayAccess(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(4);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(5);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_security_provider_ByteArrayAccess_b2iLittle_Array1_byte_int_Array1_int_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/ByteArrayAccess:b2iLittle", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_provider_ByteArrayAccess(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(8);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if (((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (frame[1].i)) < (frame[4].i)) goto label_1;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_1;
	{
	if (((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i)) < ((frame[4].i) / (jint(4)))) goto label_1;
	}
	{
	LINE_NUMBER(9);
	frame[4].i = ((frame[4].i) + (frame[1].i));
	}
label_3:;
	{
	if ((frame[1].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(10);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i))) & (255)) | ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(1))))) & (255)) << (8))) | ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(2))))) & (255)) << (16))) | (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(3))))) << (24)));
	LINE_NUMBER(9);
	INST_IINC(1, 4);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(13);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(15);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_security_provider_ByteArrayAccess_b2iLittle64_Array1_byte_int_Array1_int(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/ByteArrayAccess:b2iLittle64", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_provider_ByteArrayAccess(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(18);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if (((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (frame[1].i)) < (64)) goto label_1;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) < (16)) goto label_1;
	}
	{
	LINE_NUMBER(19);
	SM_java_security_provider_ByteArrayAccess_b2iLittle_Array1_byte_int_Array1_int_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (jint(0)), (64));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(21);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	LINE_NUMBER(23);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_security_provider_ByteArrayAccess_i2bLittle_Array1_int_int_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/ByteArrayAccess:i2bLittle", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_provider_ByteArrayAccess(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(26);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if (((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (frame[1].i)) < ((frame[4].i) / (jint(4)))) goto label_1;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_1;
	{
	if (((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i)) < (frame[4].i)) goto label_1;
	}
	{
	LINE_NUMBER(28);
	frame[4].i = ((frame[4].i) + (frame[3].i));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0));
	LINE_NUMBER(30);
	sp[0].o = frame[2].o;
	jint temp1 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (jbyte((frame[5].i)));
	LINE_NUMBER(31);
	sp[0].o = frame[2].o;
	jint temp2 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp2) = (jbyte(((frame[5].i) >> (8))));
	LINE_NUMBER(32);
	sp[0].o = frame[2].o;
	jint temp3 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp3) = (jbyte(((frame[5].i) >> (16))));
	LINE_NUMBER(28);
	sp[0].o = frame[2].o;
	jint temp4 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp4) = (jbyte(((frame[5].i) >> (24))));
	goto label_3;
	}
label_4:;
	LINE_NUMBER(34);
	goto label_10;
label_1:;
	{
	LINE_NUMBER(35);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	LINE_NUMBER(37);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_security_provider_ByteArrayAccess_i2bLittle4_int_Array1_byte_int(jcontext ctx, jint param0, jobject param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/ByteArrayAccess:i2bLittle4", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_provider_ByteArrayAccess(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(40);
	if ((frame[2].i) < 0) goto label_1;
	}
	{
	if (((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[2].i)) < (jint(4))) goto label_1;
	}
	{
	LINE_NUMBER(41);
	ARRAY_ACCESS(jbyte, (frame[1].o), (frame[2].i)) = (jbyte((frame[0].i)));
	LINE_NUMBER(42);
	ARRAY_ACCESS(jbyte, (frame[1].o), ((frame[2].i) + (jint(1)))) = (jbyte(((frame[0].i) >> (8))));
	LINE_NUMBER(43);
	ARRAY_ACCESS(jbyte, (frame[1].o), ((frame[2].i) + (jint(2)))) = (jbyte(((frame[0].i) >> (16))));
	LINE_NUMBER(44);
	ARRAY_ACCESS(jbyte, (frame[1].o), ((frame[2].i) + (jint(3)))) = (jbyte(((frame[0].i) >> (24))));
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(46);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_security_provider_ByteArrayAccess_b2iBig_Array1_byte_int_Array1_int_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/ByteArrayAccess:b2iBig", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_provider_ByteArrayAccess(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(51);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if (((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (frame[1].i)) < (frame[4].i)) goto label_1;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_1;
	{
	if (((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i)) < ((frame[4].i) / (jint(4)))) goto label_1;
	}
	{
	LINE_NUMBER(52);
	frame[4].i = ((frame[4].i) + (frame[1].i));
	}
label_3:;
	{
	if ((frame[1].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(53);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(3))))) & (255)) | ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(2))))) & (255)) << (8))) | ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(1))))) & (255)) << (16))) | (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i))) << (24)));
	LINE_NUMBER(52);
	INST_IINC(1, 4);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(56);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(58);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_security_provider_ByteArrayAccess_b2iBig64_Array1_byte_int_Array1_int(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/ByteArrayAccess:b2iBig64", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_provider_ByteArrayAccess(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(61);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if (((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (frame[1].i)) < (64)) goto label_1;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) < (16)) goto label_1;
	}
	{
	LINE_NUMBER(62);
	SM_java_security_provider_ByteArrayAccess_b2iBig_Array1_byte_int_Array1_int_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (jint(0)), (64));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(64);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	LINE_NUMBER(66);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_security_provider_ByteArrayAccess_i2bBig_Array1_int_int_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/ByteArrayAccess:i2bBig", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_provider_ByteArrayAccess(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(69);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if (((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (frame[1].i)) < ((frame[4].i) / (jint(4)))) goto label_1;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_1;
	{
	if (((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i)) < (frame[4].i)) goto label_1;
	}
	{
	LINE_NUMBER(71);
	frame[4].i = ((frame[4].i) + (frame[3].i));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0));
	LINE_NUMBER(73);
	sp[0].o = frame[2].o;
	jint temp1 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (jbyte(((frame[5].i) >> (24))));
	LINE_NUMBER(74);
	sp[0].o = frame[2].o;
	jint temp2 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp2) = (jbyte(((frame[5].i) >> (16))));
	LINE_NUMBER(75);
	sp[0].o = frame[2].o;
	jint temp3 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp3) = (jbyte(((frame[5].i) >> (8))));
	LINE_NUMBER(71);
	sp[0].o = frame[2].o;
	jint temp4 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp4) = (jbyte((frame[5].i)));
	goto label_3;
	}
label_4:;
	LINE_NUMBER(77);
	goto label_10;
label_1:;
	{
	LINE_NUMBER(78);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	LINE_NUMBER(80);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_security_provider_ByteArrayAccess_i2bBig4_int_Array1_byte_int(jcontext ctx, jint param0, jobject param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/ByteArrayAccess:i2bBig4", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_provider_ByteArrayAccess(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(83);
	if ((frame[2].i) < 0) goto label_1;
	}
	{
	if (((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[2].i)) < (jint(4))) goto label_1;
	}
	{
	LINE_NUMBER(84);
	ARRAY_ACCESS(jbyte, (frame[1].o), (frame[2].i)) = (jbyte(((frame[0].i) >> (24))));
	LINE_NUMBER(85);
	ARRAY_ACCESS(jbyte, (frame[1].o), ((frame[2].i) + (jint(1)))) = (jbyte(((frame[0].i) >> (16))));
	LINE_NUMBER(86);
	ARRAY_ACCESS(jbyte, (frame[1].o), ((frame[2].i) + (jint(2)))) = (jbyte(((frame[0].i) >> (8))));
	LINE_NUMBER(87);
	ARRAY_ACCESS(jbyte, (frame[1].o), ((frame[2].i) + (jint(3)))) = (jbyte((frame[0].i)));
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(89);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	LINE_NUMBER(91);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_security_provider_ByteArrayAccess_b2lBig_Array1_byte_int_Array1_long_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4) {
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/ByteArrayAccess:b2lBig", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_provider_ByteArrayAccess(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(94);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if (((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (frame[1].i)) < (frame[4].i)) goto label_1;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_1;
	{
	if (((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i)) < ((frame[4].i) / (8))) goto label_1;
	}
	{
	LINE_NUMBER(95);
	frame[4].i = ((frame[4].i) + (frame[1].i));
	}
label_3:;
	{
	if ((frame[1].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(96);
	frame[5].i = ((((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(3))))) & (255)) | ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(2))))) & (255)) << (8))) | ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(1))))) & (255)) << (16))) | (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i))) << (24)));
	LINE_NUMBER(97);
	INST_IINC(1, 4);
	LINE_NUMBER(98);
	frame[6].i = ((((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(3))))) & (255)) | ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(2))))) & (255)) << (8))) | ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(1))))) & (255)) << (16))) | (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i))) << (24)));
	LINE_NUMBER(99);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = (((jlong((frame[5].i))) << (32)) | ((jlong((frame[6].i))) & (jlong(4294967295ll))));
	LINE_NUMBER(95);
	INST_IINC(1, 4);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(102);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(104);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_security_provider_ByteArrayAccess_b2lBig128_Array1_byte_int_Array1_long(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/ByteArrayAccess:b2lBig128", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_provider_ByteArrayAccess(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(107);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if (((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (frame[1].i)) < (128)) goto label_1;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) < (16)) goto label_1;
	}
	{
	LINE_NUMBER(108);
	SM_java_security_provider_ByteArrayAccess_b2lBig_Array1_byte_int_Array1_long_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (jint(0)), (128));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(110);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	LINE_NUMBER(112);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_security_provider_ByteArrayAccess_l2bBig_Array1_long_int_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/ByteArrayAccess:l2bBig", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_provider_ByteArrayAccess(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(115);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if (((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (frame[1].i)) < ((frame[4].i) / (8))) goto label_1;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_1;
	{
	if (((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i)) < (frame[4].i)) goto label_1;
	}
	{
	LINE_NUMBER(117);
	frame[4].i = ((frame[4].i) + (frame[3].i));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	frame[5].l = ((jlong)ARRAY_ACCESS(jlong, sp[0].o, temp0));
	LINE_NUMBER(119);
	sp[0].o = frame[2].o;
	jint temp1 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (jbyte((jint(((frame[5].l) >> (56))))));
	LINE_NUMBER(120);
	sp[0].o = frame[2].o;
	jint temp2 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp2) = (jbyte((jint(((frame[5].l) >> (48))))));
	LINE_NUMBER(121);
	sp[0].o = frame[2].o;
	jint temp3 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp3) = (jbyte((jint(((frame[5].l) >> (40))))));
	LINE_NUMBER(122);
	sp[0].o = frame[2].o;
	jint temp4 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp4) = (jbyte((jint(((frame[5].l) >> (32))))));
	LINE_NUMBER(123);
	sp[0].o = frame[2].o;
	jint temp5 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp5) = (jbyte((jint(((frame[5].l) >> (24))))));
	LINE_NUMBER(124);
	sp[0].o = frame[2].o;
	jint temp6 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp6) = (jbyte((jint(((frame[5].l) >> (16))))));
	LINE_NUMBER(125);
	sp[0].o = frame[2].o;
	jint temp7 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp7) = (jbyte((jint(((frame[5].l) >> (8))))));
	LINE_NUMBER(117);
	sp[0].o = frame[2].o;
	jint temp8 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp8) = (jbyte((jint((frame[5].l)))));
	goto label_3;
	}
label_4:;
	LINE_NUMBER(127);
	goto label_14;
label_1:;
	{
	LINE_NUMBER(128);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_14:;
	LINE_NUMBER(130);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_security_provider_ByteArrayAccess_b2lLittle_Array1_byte_int_Array1_long_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4) {
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/ByteArrayAccess:b2lLittle", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_provider_ByteArrayAccess(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(133);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if (((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (frame[1].i)) < (frame[4].i)) goto label_1;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_1;
	{
	if (((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i)) < ((frame[4].i) / (8))) goto label_1;
	}
	{
	LINE_NUMBER(134);
	frame[4].i = ((frame[4].i) + (frame[1].i));
	}
label_3:;
	{
	if ((frame[1].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(135);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = (((((((((jlong(((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i))))) & (jlong(255ll))) | (((jlong(((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(1))))))) & (jlong(255ll))) << (8))) | (((jlong(((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(2))))))) & (jlong(255ll))) << (16))) | (((jlong(((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(3))))))) & (jlong(255ll))) << (24))) | (((jlong(((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(4))))))) & (jlong(255ll))) << (32))) | (((jlong(((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(5))))))) & (jlong(255ll))) << (40))) | (((jlong(((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (6)))))) & (jlong(255ll))) << (48))) | (((jlong(((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (7)))))) & (jlong(255ll))) << (56)));
	LINE_NUMBER(134);
	INST_IINC(1, 8);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(138);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(140);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_security_provider_ByteArrayAccess_l2bLittle_Array1_long_int_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/ByteArrayAccess:l2bLittle", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_provider_ByteArrayAccess(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(143);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if (((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (frame[1].i)) < ((frame[4].i) / (8))) goto label_1;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_1;
	{
	if (((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i)) < (frame[4].i)) goto label_1;
	}
	{
	LINE_NUMBER(145);
	frame[4].i = ((frame[4].i) + (frame[3].i));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	frame[5].l = ((jlong)ARRAY_ACCESS(jlong, sp[0].o, temp0));
	LINE_NUMBER(147);
	sp[0].o = frame[2].o;
	jint temp1 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (jbyte((jint((frame[5].l)))));
	LINE_NUMBER(148);
	sp[0].o = frame[2].o;
	jint temp2 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp2) = (jbyte((jint(((frame[5].l) >> (8))))));
	LINE_NUMBER(149);
	sp[0].o = frame[2].o;
	jint temp3 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp3) = (jbyte((jint(((frame[5].l) >> (16))))));
	LINE_NUMBER(150);
	sp[0].o = frame[2].o;
	jint temp4 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp4) = (jbyte((jint(((frame[5].l) >> (24))))));
	LINE_NUMBER(151);
	sp[0].o = frame[2].o;
	jint temp5 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp5) = (jbyte((jint(((frame[5].l) >> (32))))));
	LINE_NUMBER(152);
	sp[0].o = frame[2].o;
	jint temp6 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp6) = (jbyte((jint(((frame[5].l) >> (40))))));
	LINE_NUMBER(153);
	sp[0].o = frame[2].o;
	jint temp7 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp7) = (jbyte((jint(((frame[5].l) >> (48))))));
	LINE_NUMBER(145);
	sp[0].o = frame[2].o;
	jint temp8 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp8) = (jbyte((jint(((frame[5].l) >> (56))))));
	goto label_3;
	}
label_4:;
	LINE_NUMBER(155);
	goto label_14;
label_1:;
	{
	LINE_NUMBER(156);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_14:;
	LINE_NUMBER(158);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_security_provider_ByteArrayAccess[] {
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_security_provider_ByteArrayAccess, 0, "()V", 2 },
	{ "b2iLittle", (intptr_t) SM_java_security_provider_ByteArrayAccess_b2iLittle_Array1_byte_int_Array1_int_int_int, 0, "([BI[III)V", 8 },
	{ "b2iLittle64", (intptr_t) SM_java_security_provider_ByteArrayAccess_b2iLittle64_Array1_byte_int_Array1_int, 0, "([BI[I)V", 8 },
	{ "i2bLittle", (intptr_t) SM_java_security_provider_ByteArrayAccess_i2bLittle_Array1_int_int_Array1_byte_int_int, 0, "([II[BII)V", 8 },
	{ "i2bLittle4", (intptr_t) SM_java_security_provider_ByteArrayAccess_i2bLittle4_int_Array1_byte_int, 0, "(I[BI)V", 8 },
	{ "b2iBig", (intptr_t) SM_java_security_provider_ByteArrayAccess_b2iBig_Array1_byte_int_Array1_int_int_int, 0, "([BI[III)V", 8 },
	{ "b2iBig64", (intptr_t) SM_java_security_provider_ByteArrayAccess_b2iBig64_Array1_byte_int_Array1_int, 0, "([BI[I)V", 8 },
	{ "i2bBig", (intptr_t) SM_java_security_provider_ByteArrayAccess_i2bBig_Array1_int_int_Array1_byte_int_int, 0, "([II[BII)V", 8 },
	{ "i2bBig4", (intptr_t) SM_java_security_provider_ByteArrayAccess_i2bBig4_int_Array1_byte_int, 0, "(I[BI)V", 8 },
	{ "b2lBig", (intptr_t) SM_java_security_provider_ByteArrayAccess_b2lBig_Array1_byte_int_Array1_long_int_int, 0, "([BI[JII)V", 8 },
	{ "b2lBig128", (intptr_t) SM_java_security_provider_ByteArrayAccess_b2lBig128_Array1_byte_int_Array1_long, 0, "([BI[J)V", 8 },
	{ "l2bBig", (intptr_t) SM_java_security_provider_ByteArrayAccess_l2bBig_Array1_long_int_Array1_byte_int_int, 0, "([JI[BII)V", 8 },
	{ "b2lLittle", (intptr_t) SM_java_security_provider_ByteArrayAccess_b2lLittle_Array1_byte_int_Array1_long_int_int, 0, "([BI[JII)V", 8 },
	{ "l2bLittle", (intptr_t) SM_java_security_provider_ByteArrayAccess_l2bLittle_Array1_long_int_Array1_byte_int_int, 0, "([JI[BII)V", 8 },
};

Class class_java_security_provider_ByteArrayAccess{
		.nativeName = (intptr_t) "java/security/provider/ByteArrayAccess",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_security_provider_ByteArrayAccess),
		.classVtable = (intptr_t) vtable_java_security_provider_ByteArrayAccess,
		.staticInitializer = (intptr_t) clinit_java_security_provider_ByteArrayAccess,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_security_provider_ByteArrayAccess,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_security_provider_ByteArrayAccess = registerClass(&class_java_security_provider_ByteArrayAccess);

}
