#include "java/security/provider/MD5.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/security/provider/DigestBase.h"
#include "java/security/provider/MD5.h"
#include "java/security/provider/ByteArrayAccess.h"
#include "java/security/MessageDigestSpi.h"

extern "C" {


void mark_java_security_provider_MD5(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_security_provider_DigestBase(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_security_provider_MD5 *) object;
	if (self->F_state)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_state)->clazz)->markFunction)((jobject) self->F_state, mark, depth + 1);
	if (self->F_x)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_x)->clazz)->markFunction)((jobject) self->F_x, mark, depth + 1);
}

void clinit_java_security_provider_MD5(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_security_provider_DigestBase(ctx);
}

void init_java_security_provider_MD5(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/MD5:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_provider_MD5(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_security_provider_DigestBase_java_lang_String_int_int(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"MD5"_j))), (16), (64));
	LINE_NUMBER(6);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	((java_security_provider_MD5 *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(7);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (16));
	((java_security_provider_MD5 *) NULL_CHECK(sp[0].o))->F_x = (jref) sp[1].o;
	LINE_NUMBER(11);
	M_java_security_provider_MD5_resetHashes(ctx, (frame[0].o));
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_security_provider_MD5_clone_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/MD5:clone", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(15);
	sp[0].o = (jobject)M_java_security_provider_DigestBase_clone_R_java_lang_Object(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_java_security_provider_MD5, sp[0].o));
	LINE_NUMBER(16);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[1].o)))->F_state;
	sp[1].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[1].o);
	((java_security_provider_MD5 *) NULL_CHECK(sp[0].o))->F_state = (jref) (checkCast(ctx, getArrayClass(&class_int, 1), sp[1].o));
	LINE_NUMBER(17);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (16));
	((java_security_provider_MD5 *) NULL_CHECK(sp[0].o))->F_x = (jref) sp[1].o;
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_java_security_provider_MD5_implReset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/MD5:implReset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(22);
	M_java_security_provider_MD5_resetHashes(ctx, (frame[0].o));
	LINE_NUMBER(23);
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	SM_java_util_Arrays_fill_Array1_int_int(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_security_provider_MD5_resetHashes(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/MD5:resetHashes", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_state;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1732584193));
	LINE_NUMBER(28);
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_state;
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(-271733879));
	LINE_NUMBER(29);
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_state;
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(-1732584194));
	LINE_NUMBER(30);
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_state;
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(271733878));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_security_provider_MD5_implDigest_Array1_byte_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/MD5:implDigest", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(34);
	frame[3].l = (((jlong)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_bytesProcessed) << (jint(3)));
	LINE_NUMBER(35);
	frame[5].i = ((jint(((jlong)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_bytesProcessed))) & (63));
	LINE_NUMBER(36);
	if ((frame[5].i) >= (56)) goto label_3;
	}
	{
	jint temp0 = (56) - (frame[5].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	jint temp0 = (120) - (frame[5].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_java_security_provider_MD5(ctx);
	sp[1].o = (jobject)SF_java_security_provider_DigestBase_padding;
	((func_java_security_provider_MD5_engineUpdate_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_security_provider_MD5_engineUpdate_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[6].i));
	LINE_NUMBER(38);
	jint temp0 = jint((frame[3].l));
	sp[0].o = (jobject)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_buffer;
	SM_java_security_provider_ByteArrayAccess_i2bLittle4_int_Array1_byte_int(ctx, temp0, sp[0].o, (56));
	LINE_NUMBER(39);
	jint temp1 = jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[3].l)) >> (32))));
	sp[0].o = (jobject)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_buffer;
	SM_java_security_provider_ByteArrayAccess_i2bLittle4_int_Array1_byte_int(ctx, temp1, sp[0].o, (60));
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_java_security_provider_MD5_implCompress_Array1_byte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_security_provider_MD5_implCompress_Array1_byte_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	LINE_NUMBER(41);
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_state;
	SM_java_security_provider_ByteArrayAccess_i2bLittle_Array1_int_int_Array1_byte_int_int(ctx, sp[0].o, (jint(0)), (frame[1].o), (frame[2].i), (16));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_java_security_provider_MD5_FF_int_int_int_int_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/MD5:FF", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_provider_MD5(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(45);
	frame[0].i = ((frame[0].i) + (((((frame[1].i) & (frame[2].i)) | (((frame[1].i) ^ (jint(-1))) & (frame[3].i))) + (frame[4].i)) + (frame[6].i)));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return ((((frame[0].i) << (frame[5].i)) | (bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> ((32) - (frame[5].i))))) + (frame[1].i));
	}

	popStackFrame(ctx);
}

jint SM_java_security_provider_MD5_GG_int_int_int_int_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/MD5:GG", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_provider_MD5(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(50);
	frame[0].i = ((frame[0].i) + (((((frame[1].i) & (frame[3].i)) | ((frame[2].i) & ((frame[3].i) ^ (jint(-1))))) + (frame[4].i)) + (frame[6].i)));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return ((((frame[0].i) << (frame[5].i)) | (bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> ((32) - (frame[5].i))))) + (frame[1].i));
	}

	popStackFrame(ctx);
}

jint SM_java_security_provider_MD5_HH_int_int_int_int_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/MD5:HH", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_provider_MD5(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(55);
	frame[0].i = ((frame[0].i) + (((((frame[1].i) ^ (frame[2].i)) ^ (frame[3].i)) + (frame[4].i)) + (frame[6].i)));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return ((((frame[0].i) << (frame[5].i)) | (bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> ((32) - (frame[5].i))))) + (frame[1].i));
	}

	popStackFrame(ctx);
}

jint SM_java_security_provider_MD5_II_int_int_int_int_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/MD5:II", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_provider_MD5(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(60);
	frame[0].i = ((frame[0].i) + ((((frame[2].i) ^ ((frame[1].i) | ((frame[3].i) ^ (jint(-1))))) + (frame[4].i)) + (frame[6].i)));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return ((((frame[0].i) << (frame[5].i)) | (bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> ((32) - (frame[5].i))))) + (frame[1].i));
	}

	popStackFrame(ctx);
}

void M_java_security_provider_MD5_implCompress_Array1_byte_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/MD5:implCompress", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(65);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	SM_java_security_provider_ByteArrayAccess_b2iLittle64_Array1_byte_int_Array1_int(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(66);
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_state;
	frame[3].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0))));
	LINE_NUMBER(67);
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_state;
	frame[4].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1))));
	LINE_NUMBER(68);
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_state;
	frame[5].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(2))));
	LINE_NUMBER(69);
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_state;
	frame[6].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(3))));
	LINE_NUMBER(70);
	jint temp1 = frame[3].i;
	jint temp2 = frame[4].i;
	jint temp3 = frame[5].i;
	jint temp4 = frame[6].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp5 = (jint)SM_java_security_provider_MD5_FF_int_int_int_int_int_int_int_R_int(ctx, temp1, temp2, temp3, temp4, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))), (7), (jint(-680876936)));
	frame[3].i = temp5;
	LINE_NUMBER(71);
	jint temp6 = frame[6].i;
	jint temp7 = frame[3].i;
	jint temp8 = frame[4].i;
	jint temp9 = frame[5].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp10 = (jint)SM_java_security_provider_MD5_FF_int_int_int_int_int_int_int_R_int(ctx, temp6, temp7, temp8, temp9, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)))), (12), (jint(-389564586)));
	frame[6].i = temp10;
	LINE_NUMBER(72);
	jint temp11 = frame[5].i;
	jint temp12 = frame[6].i;
	jint temp13 = frame[3].i;
	jint temp14 = frame[4].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp15 = (jint)SM_java_security_provider_MD5_FF_int_int_int_int_int_int_int_R_int(ctx, temp11, temp12, temp13, temp14, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(2)))), (17), (jint(606105819)));
	frame[5].i = temp15;
	LINE_NUMBER(73);
	jint temp16 = frame[4].i;
	jint temp17 = frame[5].i;
	jint temp18 = frame[6].i;
	jint temp19 = frame[3].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp20 = (jint)SM_java_security_provider_MD5_FF_int_int_int_int_int_int_int_R_int(ctx, temp16, temp17, temp18, temp19, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(3)))), (22), (jint(-1044525330)));
	frame[4].i = temp20;
	LINE_NUMBER(74);
	jint temp21 = frame[3].i;
	jint temp22 = frame[4].i;
	jint temp23 = frame[5].i;
	jint temp24 = frame[6].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp25 = (jint)SM_java_security_provider_MD5_FF_int_int_int_int_int_int_int_R_int(ctx, temp21, temp22, temp23, temp24, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(4)))), (7), (jint(-176418897)));
	frame[3].i = temp25;
	LINE_NUMBER(75);
	jint temp26 = frame[6].i;
	jint temp27 = frame[3].i;
	jint temp28 = frame[4].i;
	jint temp29 = frame[5].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp30 = (jint)SM_java_security_provider_MD5_FF_int_int_int_int_int_int_int_R_int(ctx, temp26, temp27, temp28, temp29, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(5)))), (12), (jint(1200080426)));
	frame[6].i = temp30;
	LINE_NUMBER(76);
	jint temp31 = frame[5].i;
	jint temp32 = frame[6].i;
	jint temp33 = frame[3].i;
	jint temp34 = frame[4].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp35 = (jint)SM_java_security_provider_MD5_FF_int_int_int_int_int_int_int_R_int(ctx, temp31, temp32, temp33, temp34, ((jint)ARRAY_ACCESS(jint, sp[0].o, (6))), (17), (jint(-1473231341)));
	frame[5].i = temp35;
	LINE_NUMBER(77);
	jint temp36 = frame[4].i;
	jint temp37 = frame[5].i;
	jint temp38 = frame[6].i;
	jint temp39 = frame[3].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp40 = (jint)SM_java_security_provider_MD5_FF_int_int_int_int_int_int_int_R_int(ctx, temp36, temp37, temp38, temp39, ((jint)ARRAY_ACCESS(jint, sp[0].o, (7))), (22), (jint(-45705983)));
	frame[4].i = temp40;
	LINE_NUMBER(78);
	jint temp41 = frame[3].i;
	jint temp42 = frame[4].i;
	jint temp43 = frame[5].i;
	jint temp44 = frame[6].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp45 = (jint)SM_java_security_provider_MD5_FF_int_int_int_int_int_int_int_R_int(ctx, temp41, temp42, temp43, temp44, ((jint)ARRAY_ACCESS(jint, sp[0].o, (8))), (7), (jint(1770035416)));
	frame[3].i = temp45;
	LINE_NUMBER(79);
	jint temp46 = frame[6].i;
	jint temp47 = frame[3].i;
	jint temp48 = frame[4].i;
	jint temp49 = frame[5].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp50 = (jint)SM_java_security_provider_MD5_FF_int_int_int_int_int_int_int_R_int(ctx, temp46, temp47, temp48, temp49, ((jint)ARRAY_ACCESS(jint, sp[0].o, (9))), (12), (jint(-1958414417)));
	frame[6].i = temp50;
	LINE_NUMBER(80);
	jint temp51 = frame[5].i;
	jint temp52 = frame[6].i;
	jint temp53 = frame[3].i;
	jint temp54 = frame[4].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp55 = (jint)SM_java_security_provider_MD5_FF_int_int_int_int_int_int_int_R_int(ctx, temp51, temp52, temp53, temp54, ((jint)ARRAY_ACCESS(jint, sp[0].o, (10))), (17), (jint(-42063)));
	frame[5].i = temp55;
	LINE_NUMBER(81);
	jint temp56 = frame[4].i;
	jint temp57 = frame[5].i;
	jint temp58 = frame[6].i;
	jint temp59 = frame[3].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp60 = (jint)SM_java_security_provider_MD5_FF_int_int_int_int_int_int_int_R_int(ctx, temp56, temp57, temp58, temp59, ((jint)ARRAY_ACCESS(jint, sp[0].o, (11))), (22), (jint(-1990404162)));
	frame[4].i = temp60;
	LINE_NUMBER(82);
	jint temp61 = frame[3].i;
	jint temp62 = frame[4].i;
	jint temp63 = frame[5].i;
	jint temp64 = frame[6].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp65 = (jint)SM_java_security_provider_MD5_FF_int_int_int_int_int_int_int_R_int(ctx, temp61, temp62, temp63, temp64, ((jint)ARRAY_ACCESS(jint, sp[0].o, (12))), (7), (jint(1804603682)));
	frame[3].i = temp65;
	LINE_NUMBER(83);
	jint temp66 = frame[6].i;
	jint temp67 = frame[3].i;
	jint temp68 = frame[4].i;
	jint temp69 = frame[5].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp70 = (jint)SM_java_security_provider_MD5_FF_int_int_int_int_int_int_int_R_int(ctx, temp66, temp67, temp68, temp69, ((jint)ARRAY_ACCESS(jint, sp[0].o, (13))), (12), (jint(-40341101)));
	frame[6].i = temp70;
	LINE_NUMBER(84);
	jint temp71 = frame[5].i;
	jint temp72 = frame[6].i;
	jint temp73 = frame[3].i;
	jint temp74 = frame[4].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp75 = (jint)SM_java_security_provider_MD5_FF_int_int_int_int_int_int_int_R_int(ctx, temp71, temp72, temp73, temp74, ((jint)ARRAY_ACCESS(jint, sp[0].o, (14))), (17), (jint(-1502002290)));
	frame[5].i = temp75;
	LINE_NUMBER(85);
	jint temp76 = frame[4].i;
	jint temp77 = frame[5].i;
	jint temp78 = frame[6].i;
	jint temp79 = frame[3].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp80 = (jint)SM_java_security_provider_MD5_FF_int_int_int_int_int_int_int_R_int(ctx, temp76, temp77, temp78, temp79, ((jint)ARRAY_ACCESS(jint, sp[0].o, (15))), (22), (jint(1236535329)));
	frame[4].i = temp80;
	LINE_NUMBER(86);
	jint temp81 = frame[3].i;
	jint temp82 = frame[4].i;
	jint temp83 = frame[5].i;
	jint temp84 = frame[6].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp85 = (jint)SM_java_security_provider_MD5_GG_int_int_int_int_int_int_int_R_int(ctx, temp81, temp82, temp83, temp84, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)))), (jint(5)), (jint(-165796510)));
	frame[3].i = temp85;
	LINE_NUMBER(87);
	jint temp86 = frame[6].i;
	jint temp87 = frame[3].i;
	jint temp88 = frame[4].i;
	jint temp89 = frame[5].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp90 = (jint)SM_java_security_provider_MD5_GG_int_int_int_int_int_int_int_R_int(ctx, temp86, temp87, temp88, temp89, ((jint)ARRAY_ACCESS(jint, sp[0].o, (6))), (9), (jint(-1069501632)));
	frame[6].i = temp90;
	LINE_NUMBER(88);
	jint temp91 = frame[5].i;
	jint temp92 = frame[6].i;
	jint temp93 = frame[3].i;
	jint temp94 = frame[4].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp95 = (jint)SM_java_security_provider_MD5_GG_int_int_int_int_int_int_int_R_int(ctx, temp91, temp92, temp93, temp94, ((jint)ARRAY_ACCESS(jint, sp[0].o, (11))), (14), (jint(643717713)));
	frame[5].i = temp95;
	LINE_NUMBER(89);
	jint temp96 = frame[4].i;
	jint temp97 = frame[5].i;
	jint temp98 = frame[6].i;
	jint temp99 = frame[3].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp100 = (jint)SM_java_security_provider_MD5_GG_int_int_int_int_int_int_int_R_int(ctx, temp96, temp97, temp98, temp99, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))), (20), (jint(-373897302)));
	frame[4].i = temp100;
	LINE_NUMBER(90);
	jint temp101 = frame[3].i;
	jint temp102 = frame[4].i;
	jint temp103 = frame[5].i;
	jint temp104 = frame[6].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp105 = (jint)SM_java_security_provider_MD5_GG_int_int_int_int_int_int_int_R_int(ctx, temp101, temp102, temp103, temp104, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(5)))), (jint(5)), (jint(-701558691)));
	frame[3].i = temp105;
	LINE_NUMBER(91);
	jint temp106 = frame[6].i;
	jint temp107 = frame[3].i;
	jint temp108 = frame[4].i;
	jint temp109 = frame[5].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp110 = (jint)SM_java_security_provider_MD5_GG_int_int_int_int_int_int_int_R_int(ctx, temp106, temp107, temp108, temp109, ((jint)ARRAY_ACCESS(jint, sp[0].o, (10))), (9), (jint(38016083)));
	frame[6].i = temp110;
	LINE_NUMBER(92);
	jint temp111 = frame[5].i;
	jint temp112 = frame[6].i;
	jint temp113 = frame[3].i;
	jint temp114 = frame[4].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp115 = (jint)SM_java_security_provider_MD5_GG_int_int_int_int_int_int_int_R_int(ctx, temp111, temp112, temp113, temp114, ((jint)ARRAY_ACCESS(jint, sp[0].o, (15))), (14), (jint(-660478335)));
	frame[5].i = temp115;
	LINE_NUMBER(93);
	jint temp116 = frame[4].i;
	jint temp117 = frame[5].i;
	jint temp118 = frame[6].i;
	jint temp119 = frame[3].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp120 = (jint)SM_java_security_provider_MD5_GG_int_int_int_int_int_int_int_R_int(ctx, temp116, temp117, temp118, temp119, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(4)))), (20), (jint(-405537848)));
	frame[4].i = temp120;
	LINE_NUMBER(94);
	jint temp121 = frame[3].i;
	jint temp122 = frame[4].i;
	jint temp123 = frame[5].i;
	jint temp124 = frame[6].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp125 = (jint)SM_java_security_provider_MD5_GG_int_int_int_int_int_int_int_R_int(ctx, temp121, temp122, temp123, temp124, ((jint)ARRAY_ACCESS(jint, sp[0].o, (9))), (jint(5)), (jint(568446438)));
	frame[3].i = temp125;
	LINE_NUMBER(95);
	jint temp126 = frame[6].i;
	jint temp127 = frame[3].i;
	jint temp128 = frame[4].i;
	jint temp129 = frame[5].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp130 = (jint)SM_java_security_provider_MD5_GG_int_int_int_int_int_int_int_R_int(ctx, temp126, temp127, temp128, temp129, ((jint)ARRAY_ACCESS(jint, sp[0].o, (14))), (9), (jint(-1019803690)));
	frame[6].i = temp130;
	LINE_NUMBER(96);
	jint temp131 = frame[5].i;
	jint temp132 = frame[6].i;
	jint temp133 = frame[3].i;
	jint temp134 = frame[4].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp135 = (jint)SM_java_security_provider_MD5_GG_int_int_int_int_int_int_int_R_int(ctx, temp131, temp132, temp133, temp134, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(3)))), (14), (jint(-187363961)));
	frame[5].i = temp135;
	LINE_NUMBER(97);
	jint temp136 = frame[4].i;
	jint temp137 = frame[5].i;
	jint temp138 = frame[6].i;
	jint temp139 = frame[3].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp140 = (jint)SM_java_security_provider_MD5_GG_int_int_int_int_int_int_int_R_int(ctx, temp136, temp137, temp138, temp139, ((jint)ARRAY_ACCESS(jint, sp[0].o, (8))), (20), (jint(1163531501)));
	frame[4].i = temp140;
	LINE_NUMBER(98);
	jint temp141 = frame[3].i;
	jint temp142 = frame[4].i;
	jint temp143 = frame[5].i;
	jint temp144 = frame[6].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp145 = (jint)SM_java_security_provider_MD5_GG_int_int_int_int_int_int_int_R_int(ctx, temp141, temp142, temp143, temp144, ((jint)ARRAY_ACCESS(jint, sp[0].o, (13))), (jint(5)), (jint(-1444681467)));
	frame[3].i = temp145;
	LINE_NUMBER(99);
	jint temp146 = frame[6].i;
	jint temp147 = frame[3].i;
	jint temp148 = frame[4].i;
	jint temp149 = frame[5].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp150 = (jint)SM_java_security_provider_MD5_GG_int_int_int_int_int_int_int_R_int(ctx, temp146, temp147, temp148, temp149, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(2)))), (9), (jint(-51403784)));
	frame[6].i = temp150;
	LINE_NUMBER(100);
	jint temp151 = frame[5].i;
	jint temp152 = frame[6].i;
	jint temp153 = frame[3].i;
	jint temp154 = frame[4].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp155 = (jint)SM_java_security_provider_MD5_GG_int_int_int_int_int_int_int_R_int(ctx, temp151, temp152, temp153, temp154, ((jint)ARRAY_ACCESS(jint, sp[0].o, (7))), (14), (jint(1735328473)));
	frame[5].i = temp155;
	LINE_NUMBER(101);
	jint temp156 = frame[4].i;
	jint temp157 = frame[5].i;
	jint temp158 = frame[6].i;
	jint temp159 = frame[3].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp160 = (jint)SM_java_security_provider_MD5_GG_int_int_int_int_int_int_int_R_int(ctx, temp156, temp157, temp158, temp159, ((jint)ARRAY_ACCESS(jint, sp[0].o, (12))), (20), (jint(-1926607734)));
	frame[4].i = temp160;
	LINE_NUMBER(102);
	jint temp161 = frame[3].i;
	jint temp162 = frame[4].i;
	jint temp163 = frame[5].i;
	jint temp164 = frame[6].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp165 = (jint)SM_java_security_provider_MD5_HH_int_int_int_int_int_int_int_R_int(ctx, temp161, temp162, temp163, temp164, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(5)))), (jint(4)), (jint(-378558)));
	frame[3].i = temp165;
	LINE_NUMBER(103);
	jint temp166 = frame[6].i;
	jint temp167 = frame[3].i;
	jint temp168 = frame[4].i;
	jint temp169 = frame[5].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp170 = (jint)SM_java_security_provider_MD5_HH_int_int_int_int_int_int_int_R_int(ctx, temp166, temp167, temp168, temp169, ((jint)ARRAY_ACCESS(jint, sp[0].o, (8))), (11), (jint(-2022574463)));
	frame[6].i = temp170;
	LINE_NUMBER(104);
	jint temp171 = frame[5].i;
	jint temp172 = frame[6].i;
	jint temp173 = frame[3].i;
	jint temp174 = frame[4].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp175 = (jint)SM_java_security_provider_MD5_HH_int_int_int_int_int_int_int_R_int(ctx, temp171, temp172, temp173, temp174, ((jint)ARRAY_ACCESS(jint, sp[0].o, (11))), (16), (jint(1839030562)));
	frame[5].i = temp175;
	LINE_NUMBER(105);
	jint temp176 = frame[4].i;
	jint temp177 = frame[5].i;
	jint temp178 = frame[6].i;
	jint temp179 = frame[3].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp180 = (jint)SM_java_security_provider_MD5_HH_int_int_int_int_int_int_int_R_int(ctx, temp176, temp177, temp178, temp179, ((jint)ARRAY_ACCESS(jint, sp[0].o, (14))), (23), (jint(-35309556)));
	frame[4].i = temp180;
	LINE_NUMBER(106);
	jint temp181 = frame[3].i;
	jint temp182 = frame[4].i;
	jint temp183 = frame[5].i;
	jint temp184 = frame[6].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp185 = (jint)SM_java_security_provider_MD5_HH_int_int_int_int_int_int_int_R_int(ctx, temp181, temp182, temp183, temp184, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)))), (jint(4)), (jint(-1530992060)));
	frame[3].i = temp185;
	LINE_NUMBER(107);
	jint temp186 = frame[6].i;
	jint temp187 = frame[3].i;
	jint temp188 = frame[4].i;
	jint temp189 = frame[5].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp190 = (jint)SM_java_security_provider_MD5_HH_int_int_int_int_int_int_int_R_int(ctx, temp186, temp187, temp188, temp189, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(4)))), (11), (jint(1272893353)));
	frame[6].i = temp190;
	LINE_NUMBER(108);
	jint temp191 = frame[5].i;
	jint temp192 = frame[6].i;
	jint temp193 = frame[3].i;
	jint temp194 = frame[4].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp195 = (jint)SM_java_security_provider_MD5_HH_int_int_int_int_int_int_int_R_int(ctx, temp191, temp192, temp193, temp194, ((jint)ARRAY_ACCESS(jint, sp[0].o, (7))), (16), (jint(-155497632)));
	frame[5].i = temp195;
	LINE_NUMBER(109);
	jint temp196 = frame[4].i;
	jint temp197 = frame[5].i;
	jint temp198 = frame[6].i;
	jint temp199 = frame[3].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp200 = (jint)SM_java_security_provider_MD5_HH_int_int_int_int_int_int_int_R_int(ctx, temp196, temp197, temp198, temp199, ((jint)ARRAY_ACCESS(jint, sp[0].o, (10))), (23), (jint(-1094730640)));
	frame[4].i = temp200;
	LINE_NUMBER(110);
	jint temp201 = frame[3].i;
	jint temp202 = frame[4].i;
	jint temp203 = frame[5].i;
	jint temp204 = frame[6].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp205 = (jint)SM_java_security_provider_MD5_HH_int_int_int_int_int_int_int_R_int(ctx, temp201, temp202, temp203, temp204, ((jint)ARRAY_ACCESS(jint, sp[0].o, (13))), (jint(4)), (jint(681279174)));
	frame[3].i = temp205;
	LINE_NUMBER(111);
	jint temp206 = frame[6].i;
	jint temp207 = frame[3].i;
	jint temp208 = frame[4].i;
	jint temp209 = frame[5].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp210 = (jint)SM_java_security_provider_MD5_HH_int_int_int_int_int_int_int_R_int(ctx, temp206, temp207, temp208, temp209, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))), (11), (jint(-358537222)));
	frame[6].i = temp210;
	LINE_NUMBER(112);
	jint temp211 = frame[5].i;
	jint temp212 = frame[6].i;
	jint temp213 = frame[3].i;
	jint temp214 = frame[4].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp215 = (jint)SM_java_security_provider_MD5_HH_int_int_int_int_int_int_int_R_int(ctx, temp211, temp212, temp213, temp214, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(3)))), (16), (jint(-722521979)));
	frame[5].i = temp215;
	LINE_NUMBER(113);
	jint temp216 = frame[4].i;
	jint temp217 = frame[5].i;
	jint temp218 = frame[6].i;
	jint temp219 = frame[3].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp220 = (jint)SM_java_security_provider_MD5_HH_int_int_int_int_int_int_int_R_int(ctx, temp216, temp217, temp218, temp219, ((jint)ARRAY_ACCESS(jint, sp[0].o, (6))), (23), (jint(76029189)));
	frame[4].i = temp220;
	LINE_NUMBER(114);
	jint temp221 = frame[3].i;
	jint temp222 = frame[4].i;
	jint temp223 = frame[5].i;
	jint temp224 = frame[6].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp225 = (jint)SM_java_security_provider_MD5_HH_int_int_int_int_int_int_int_R_int(ctx, temp221, temp222, temp223, temp224, ((jint)ARRAY_ACCESS(jint, sp[0].o, (9))), (jint(4)), (jint(-640364487)));
	frame[3].i = temp225;
	LINE_NUMBER(115);
	jint temp226 = frame[6].i;
	jint temp227 = frame[3].i;
	jint temp228 = frame[4].i;
	jint temp229 = frame[5].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp230 = (jint)SM_java_security_provider_MD5_HH_int_int_int_int_int_int_int_R_int(ctx, temp226, temp227, temp228, temp229, ((jint)ARRAY_ACCESS(jint, sp[0].o, (12))), (11), (jint(-421815835)));
	frame[6].i = temp230;
	LINE_NUMBER(116);
	jint temp231 = frame[5].i;
	jint temp232 = frame[6].i;
	jint temp233 = frame[3].i;
	jint temp234 = frame[4].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp235 = (jint)SM_java_security_provider_MD5_HH_int_int_int_int_int_int_int_R_int(ctx, temp231, temp232, temp233, temp234, ((jint)ARRAY_ACCESS(jint, sp[0].o, (15))), (16), (jint(530742520)));
	frame[5].i = temp235;
	LINE_NUMBER(117);
	jint temp236 = frame[4].i;
	jint temp237 = frame[5].i;
	jint temp238 = frame[6].i;
	jint temp239 = frame[3].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp240 = (jint)SM_java_security_provider_MD5_HH_int_int_int_int_int_int_int_R_int(ctx, temp236, temp237, temp238, temp239, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(2)))), (23), (jint(-995338651)));
	frame[4].i = temp240;
	LINE_NUMBER(118);
	jint temp241 = frame[3].i;
	jint temp242 = frame[4].i;
	jint temp243 = frame[5].i;
	jint temp244 = frame[6].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp245 = (jint)SM_java_security_provider_MD5_II_int_int_int_int_int_int_int_R_int(ctx, temp241, temp242, temp243, temp244, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))), (6), (jint(-198630844)));
	frame[3].i = temp245;
	LINE_NUMBER(119);
	jint temp246 = frame[6].i;
	jint temp247 = frame[3].i;
	jint temp248 = frame[4].i;
	jint temp249 = frame[5].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp250 = (jint)SM_java_security_provider_MD5_II_int_int_int_int_int_int_int_R_int(ctx, temp246, temp247, temp248, temp249, ((jint)ARRAY_ACCESS(jint, sp[0].o, (7))), (10), (jint(1126891415)));
	frame[6].i = temp250;
	LINE_NUMBER(120);
	jint temp251 = frame[5].i;
	jint temp252 = frame[6].i;
	jint temp253 = frame[3].i;
	jint temp254 = frame[4].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp255 = (jint)SM_java_security_provider_MD5_II_int_int_int_int_int_int_int_R_int(ctx, temp251, temp252, temp253, temp254, ((jint)ARRAY_ACCESS(jint, sp[0].o, (14))), (15), (jint(-1416354905)));
	frame[5].i = temp255;
	LINE_NUMBER(121);
	jint temp256 = frame[4].i;
	jint temp257 = frame[5].i;
	jint temp258 = frame[6].i;
	jint temp259 = frame[3].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp260 = (jint)SM_java_security_provider_MD5_II_int_int_int_int_int_int_int_R_int(ctx, temp256, temp257, temp258, temp259, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(5)))), (21), (jint(-57434055)));
	frame[4].i = temp260;
	LINE_NUMBER(122);
	jint temp261 = frame[3].i;
	jint temp262 = frame[4].i;
	jint temp263 = frame[5].i;
	jint temp264 = frame[6].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp265 = (jint)SM_java_security_provider_MD5_II_int_int_int_int_int_int_int_R_int(ctx, temp261, temp262, temp263, temp264, ((jint)ARRAY_ACCESS(jint, sp[0].o, (12))), (6), (jint(1700485571)));
	frame[3].i = temp265;
	LINE_NUMBER(123);
	jint temp266 = frame[6].i;
	jint temp267 = frame[3].i;
	jint temp268 = frame[4].i;
	jint temp269 = frame[5].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp270 = (jint)SM_java_security_provider_MD5_II_int_int_int_int_int_int_int_R_int(ctx, temp266, temp267, temp268, temp269, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(3)))), (10), (jint(-1894986606)));
	frame[6].i = temp270;
	LINE_NUMBER(124);
	jint temp271 = frame[5].i;
	jint temp272 = frame[6].i;
	jint temp273 = frame[3].i;
	jint temp274 = frame[4].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp275 = (jint)SM_java_security_provider_MD5_II_int_int_int_int_int_int_int_R_int(ctx, temp271, temp272, temp273, temp274, ((jint)ARRAY_ACCESS(jint, sp[0].o, (10))), (15), (jint(-1051523)));
	frame[5].i = temp275;
	LINE_NUMBER(125);
	jint temp276 = frame[4].i;
	jint temp277 = frame[5].i;
	jint temp278 = frame[6].i;
	jint temp279 = frame[3].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp280 = (jint)SM_java_security_provider_MD5_II_int_int_int_int_int_int_int_R_int(ctx, temp276, temp277, temp278, temp279, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)))), (21), (jint(-2054922799)));
	frame[4].i = temp280;
	LINE_NUMBER(126);
	jint temp281 = frame[3].i;
	jint temp282 = frame[4].i;
	jint temp283 = frame[5].i;
	jint temp284 = frame[6].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp285 = (jint)SM_java_security_provider_MD5_II_int_int_int_int_int_int_int_R_int(ctx, temp281, temp282, temp283, temp284, ((jint)ARRAY_ACCESS(jint, sp[0].o, (8))), (6), (jint(1873313359)));
	frame[3].i = temp285;
	LINE_NUMBER(127);
	jint temp286 = frame[6].i;
	jint temp287 = frame[3].i;
	jint temp288 = frame[4].i;
	jint temp289 = frame[5].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp290 = (jint)SM_java_security_provider_MD5_II_int_int_int_int_int_int_int_R_int(ctx, temp286, temp287, temp288, temp289, ((jint)ARRAY_ACCESS(jint, sp[0].o, (15))), (10), (jint(-30611744)));
	frame[6].i = temp290;
	LINE_NUMBER(128);
	jint temp291 = frame[5].i;
	jint temp292 = frame[6].i;
	jint temp293 = frame[3].i;
	jint temp294 = frame[4].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp295 = (jint)SM_java_security_provider_MD5_II_int_int_int_int_int_int_int_R_int(ctx, temp291, temp292, temp293, temp294, ((jint)ARRAY_ACCESS(jint, sp[0].o, (6))), (15), (jint(-1560198380)));
	frame[5].i = temp295;
	LINE_NUMBER(129);
	jint temp296 = frame[4].i;
	jint temp297 = frame[5].i;
	jint temp298 = frame[6].i;
	jint temp299 = frame[3].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp300 = (jint)SM_java_security_provider_MD5_II_int_int_int_int_int_int_int_R_int(ctx, temp296, temp297, temp298, temp299, ((jint)ARRAY_ACCESS(jint, sp[0].o, (13))), (21), (jint(1309151649)));
	frame[4].i = temp300;
	LINE_NUMBER(130);
	jint temp301 = frame[3].i;
	jint temp302 = frame[4].i;
	jint temp303 = frame[5].i;
	jint temp304 = frame[6].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp305 = (jint)SM_java_security_provider_MD5_II_int_int_int_int_int_int_int_R_int(ctx, temp301, temp302, temp303, temp304, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(4)))), (6), (jint(-145523070)));
	frame[3].i = temp305;
	LINE_NUMBER(131);
	jint temp306 = frame[6].i;
	jint temp307 = frame[3].i;
	jint temp308 = frame[4].i;
	jint temp309 = frame[5].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp310 = (jint)SM_java_security_provider_MD5_II_int_int_int_int_int_int_int_R_int(ctx, temp306, temp307, temp308, temp309, ((jint)ARRAY_ACCESS(jint, sp[0].o, (11))), (10), (jint(-1120210379)));
	frame[6].i = temp310;
	LINE_NUMBER(132);
	jint temp311 = frame[5].i;
	jint temp312 = frame[6].i;
	jint temp313 = frame[3].i;
	jint temp314 = frame[4].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp315 = (jint)SM_java_security_provider_MD5_II_int_int_int_int_int_int_int_R_int(ctx, temp311, temp312, temp313, temp314, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(2)))), (15), (jint(718787259)));
	frame[5].i = temp315;
	LINE_NUMBER(133);
	jint temp316 = frame[4].i;
	jint temp317 = frame[5].i;
	jint temp318 = frame[6].i;
	jint temp319 = frame[3].i;
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp320 = (jint)SM_java_security_provider_MD5_II_int_int_int_int_int_int_int_R_int(ctx, temp316, temp317, temp318, temp319, ((jint)ARRAY_ACCESS(jint, sp[0].o, (9))), (21), (jint(-343485551)));
	frame[4].i = temp320;
	LINE_NUMBER(134);
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_state;
	frame[7].o = sp[0].o;
	LINE_NUMBER(135);
	sp[0].o = frame[7].o;
	jint temp321 = jint(0);
	ARRAY_ACCESS(jint, sp[0].o, temp321) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp321)) + (frame[3].i));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_state;
	frame[7].o = sp[0].o;
	LINE_NUMBER(137);
	sp[0].o = frame[7].o;
	jint temp324 = jint(1);
	ARRAY_ACCESS(jint, sp[0].o, temp324) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp324)) + (frame[4].i));
	LINE_NUMBER(138);
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_state;
	frame[7].o = sp[0].o;
	LINE_NUMBER(139);
	sp[0].o = frame[7].o;
	jint temp327 = jint(2);
	ARRAY_ACCESS(jint, sp[0].o, temp327) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp327)) + (frame[5].i));
	LINE_NUMBER(140);
	sp[0].o = (jobject)((java_security_provider_MD5 *) NULL_CHECK((frame[0].o)))->F_state;
	frame[7].o = sp[0].o;
	LINE_NUMBER(141);
	sp[0].o = frame[7].o;
	jint temp330 = jint(3);
	ARRAY_ACCESS(jint, sp[0].o, temp330) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp330)) + (frame[6].i));
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_security_provider_MD5[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_security_provider_MD5_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_security_provider_DigestBase_engineGetDigestLength_R_int,
	(void *) M_java_security_provider_DigestBase_engineUpdate_byte,
	(void *) M_java_security_provider_DigestBase_engineUpdate_Array1_byte_int_int,
	(void *) M_java_security_MessageDigestSpi_engineUpdate_java_nio_ByteBuffer,
	(void *) M_java_security_provider_DigestBase_engineDigest_R_Array1_byte,
	(void *) M_java_security_provider_DigestBase_engineDigest_Array1_byte_int_int_R_int,
	(void *) M_java_security_provider_DigestBase_engineReset,
	(void *) M_java_security_provider_DigestBase_implCompressMultiBlock_Array1_byte_int_int_R_int,
	(void *) M_java_security_provider_DigestBase_implCompressMultiBlock0_Array1_byte_int_int_R_int,
	(void *) M_java_security_provider_DigestBase_implCompressMultiBlockCheck_Array1_byte_int_int,
	(void *) M_java_security_provider_MD5_implCompress_Array1_byte_int,
	(void *) M_java_security_provider_MD5_implDigest_Array1_byte_int,
	(void *) M_java_security_provider_MD5_implReset,
	(void *) M_java_security_provider_MD5_resetHashes,
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
	{ "engineGetDigestLength", "()I" },
	{ "engineUpdate", "(B)V" },
	{ "engineUpdate", "([BII)V" },
	{ "engineUpdate", "(Ljava/nio/ByteBuffer;)V" },
	{ "engineDigest", "()[B" },
	{ "engineDigest", "([BII)I" },
	{ "engineReset", "()V" },
	{ "implCompressMultiBlock", "([BII)I" },
	{ "implCompressMultiBlock0", "([BII)I" },
	{ "implCompressMultiBlockCheck", "([BII)V" },
	{ "implCompress", "([BI)V" },
	{ "implDigest", "([BI)V" },
	{ "implReset", "()V" },
	{ "resetHashes", "()V" },
};

static FieldMetadata fields[] {
	{ "state", getArrayClass(&class_int, 1), offsetof(java_security_provider_MD5, F_state), "[I", 2 },
	{ "x", getArrayClass(&class_int, 1), offsetof(java_security_provider_MD5, F_x), "[I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_security_provider_MD5, 0, "()V", 1 },
	{ "clone", (intptr_t) M_java_security_provider_MD5_clone_R_java_lang_Object, VTABLE_java_security_provider_MD5_clone_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "implReset", (intptr_t) M_java_security_provider_MD5_implReset, VTABLE_java_security_provider_MD5_implReset, "()V", 0 },
	{ "resetHashes", (intptr_t) M_java_security_provider_MD5_resetHashes, VTABLE_java_security_provider_MD5_resetHashes, "()V", 2 },
	{ "implDigest", (intptr_t) M_java_security_provider_MD5_implDigest_Array1_byte_int, VTABLE_java_security_provider_MD5_implDigest_Array1_byte_int, "([BI)V", 0 },
	{ "FF", (intptr_t) SM_java_security_provider_MD5_FF_int_int_int_int_int_int_int_R_int, 0, "(IIIIIII)I", 10 },
	{ "GG", (intptr_t) SM_java_security_provider_MD5_GG_int_int_int_int_int_int_int_R_int, 0, "(IIIIIII)I", 10 },
	{ "HH", (intptr_t) SM_java_security_provider_MD5_HH_int_int_int_int_int_int_int_R_int, 0, "(IIIIIII)I", 10 },
	{ "II", (intptr_t) SM_java_security_provider_MD5_II_int_int_int_int_int_int_int_R_int, 0, "(IIIIIII)I", 10 },
	{ "implCompress", (intptr_t) M_java_security_provider_MD5_implCompress_Array1_byte_int, VTABLE_java_security_provider_MD5_implCompress_Array1_byte_int, "([BI)V", 0 },
};

Class class_java_security_provider_MD5{
		.nativeName = (intptr_t) "java/security/provider/MD5",
		.parentClass = (intptr_t) &class_java_security_provider_DigestBase,
		.size = sizeof(java_security_provider_MD5),
		.classVtable = (intptr_t) vtable_java_security_provider_MD5,
		.staticInitializer = (intptr_t) clinit_java_security_provider_MD5,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_security_provider_MD5,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_security_provider_MD5 = registerClass(&class_java_security_provider_MD5);

}
