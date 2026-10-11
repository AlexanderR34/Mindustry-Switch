#include "java/security/MessageDigest.h"
#include "java/security/Provider.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Cloneable.h"
#include "java/security/NoSuchAlgorithmException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/CloneNotSupportedException.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/security/MessageDigest_1.h"
#include "java/security/MessageDigest.h"
#include "java/security/provider/MD5.h"
#include "java/lang/NullPointerException.h"
#include "java/security/MessageDigestSpi.h"
#include "java/util/Objects.h"
#include "java/security/MessageDigest_Delegate.h"

extern "C" {


void mark_java_security_MessageDigest(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_security_MessageDigestSpi(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_security_MessageDigest *) object;
	if (self->F_algorithm)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_algorithm)->clazz)->markFunction)((jobject) self->F_algorithm, mark, depth + 1);
	if (self->F_provider)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_provider)->clazz)->markFunction)((jobject) self->F_provider, mark, depth + 1);
}

void clinit_java_security_MessageDigest(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_security_MessageDigestSpi(ctx);
}

void init_java_security_MessageDigest_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_MessageDigest(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(11);
	init_java_security_MessageDigestSpi(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((java_security_MessageDigest *) NULL_CHECK((frame[0].o)))->F_algorithm = (jref) (frame[1].o);
	LINE_NUMBER(13);
	((java_security_MessageDigest *) NULL_CHECK((frame[0].o)))->F_provider = (jref) (jobject(nullptr));
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_security_MessageDigest_java_lang_String_java_security_Provider(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_MessageDigest(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(16);
	init_java_security_MessageDigestSpi(ctx, (frame[0].o));
	LINE_NUMBER(17);
	((java_security_MessageDigest *) NULL_CHECK((frame[0].o)))->F_algorithm = (jref) (frame[1].o);
	LINE_NUMBER(18);
	((java_security_MessageDigest *) NULL_CHECK((frame[0].o)))->F_provider = (jref) (frame[2].o);
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_security_MessageDigest_getInstance_java_lang_String_R_java_security_MessageDigest(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest:getInstance", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_MessageDigest(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"null algorithm name"_j))));
	LINE_NUMBER(23);
	frame[1].o = (frame[0].o);
	frame[2].i = (jint(-1));
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, (frame[1].o));
	switch(temp0) {
		case 76158: goto label_2;
		default: goto label_3;
	}
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"MD5"_j))));
	if (temp0 == 0) goto label_3;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_3:;
	INST_ILOAD(2);
	switch((--sp)->i) {
		case 0: goto label_4;
		default: goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(24);
	clinit_java_security_provider_MD5(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_security_provider_MD5);
	init_java_security_provider_MD5(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_security_MessageDigest$Delegate_of_java_security_MessageDigestSpi_java_lang_String_java_security_Provider_R_java_security_MessageDigest$Delegate(ctx, sp[0].o, (frame[0].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(25);
	clinit_java_security_NoSuchAlgorithmException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_security_NoSuchAlgorithmException);
	init_java_security_NoSuchAlgorithmException_java_lang_String(ctx, sp[0].o, (frame[0].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_security_MessageDigest_getInstance_java_lang_String_java_lang_String_R_java_security_MessageDigest(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest:getInstance", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_MessageDigest(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)SM_java_security_MessageDigest_getInstance_java_lang_String_R_java_security_MessageDigest(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_security_MessageDigest_getInstance_java_lang_String_java_security_Provider_R_java_security_MessageDigest(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest:getInstance", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_MessageDigest(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)SM_java_security_MessageDigest_getInstance_java_lang_String_R_java_security_MessageDigest(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_security_MessageDigest_getProvider_R_java_security_Provider(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest:getProvider", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((java_security_MessageDigest *) NULL_CHECK((frame[0].o)))->F_provider;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_security_MessageDigest_update_byte(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(42);
	((func_java_security_MessageDigest_engineUpdate_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_MessageDigest_engineUpdate_byte])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_security_MessageDigest_update_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest:update", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(46);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(47);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No input buffer given"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(48);
	if (((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[2].i)) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(49);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Input buffer too short"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(51);
	((func_java_security_MessageDigest_engineUpdate_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_MessageDigest_engineUpdate_Array1_byte_int_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_security_MessageDigest_update_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	((func_java_security_MessageDigest_engineUpdate_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_MessageDigest_engineUpdate_Array1_byte_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_security_MessageDigest_update_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(61);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(63);
	((func_java_security_MessageDigest_engineUpdate_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_MessageDigest_engineUpdate_java_nio_ByteBuffer])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_security_MessageDigest_digest_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest:digest", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((func_java_security_MessageDigest_engineDigest_R_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_MessageDigest_engineDigest_R_Array1_byte])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_security_MessageDigest_digest_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest:digest", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(72);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(73);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No output buffer given"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(74);
	if (((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[2].i)) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(75);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Output buffer too small for specified offset and length"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(77);
	jint temp0 = (jint)((func_java_security_MessageDigest_engineDigest_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_MessageDigest_engineDigest_Array1_byte_int_int_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_security_MessageDigest_digest_Array1_byte_R_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest:digest", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(82);
	((func_java_security_MessageDigest_update_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_MessageDigest_update_Array1_byte])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(83);
	sp[0].o = (jobject)((func_java_security_MessageDigest_digest_R_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_MessageDigest_digest_R_Array1_byte])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_security_MessageDigest_getProviderName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest:getProviderName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((java_security_MessageDigest *) NULL_CHECK((frame[0].o)))->F_provider;
	if (sp[0].o != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"(no provider)"_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((java_security_MessageDigest *) NULL_CHECK((frame[0].o)))->F_provider;
	sp[0].o = (jobject)((func_java_security_Provider_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_security_Provider_getName_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_security_MessageDigest_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(91);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((java_security_MessageDigest *) NULL_CHECK((frame[0].o)))->F_algorithm;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" Message Digest from "_j))));
	sp[1].o = (jobject)M_java_security_MessageDigest_getProviderName_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_java_security_MessageDigest_isEqual_Array1_byte_Array1_byte_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest:isEqual", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_MessageDigest(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(95);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(97);
	if ((frame[0].o) == nullptr) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_3;
	{
	LINE_NUMBER(98);
	frame[2].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	LINE_NUMBER(99);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(100);
	if ((frame[3].i) != 0) goto label_7;
	}
	{
	LINE_NUMBER(101);
	if ((frame[2].i) != 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(103);
	frame[4].i = (jint(0));
	LINE_NUMBER(104);
	frame[4].i = ((frame[4].i) | ((frame[2].i) - (frame[3].i)));
	LINE_NUMBER(106);
	frame[5].i = (jint(0));
	}
label_13:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_14;
	}
	{
	LINE_NUMBER(107);
	frame[6].i = ((bit_cast<jint>(bit_cast<uint32_t>(((frame[5].i) - (frame[3].i))) >> (31))) * (frame[5].i));
	LINE_NUMBER(108);
	frame[4].i = ((frame[4].i) | (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[5].i))) ^ ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[6].i)))));
	LINE_NUMBER(106);
	INST_IINC(5, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(111);
	if ((frame[4].i) != 0) goto label_18;
	}
	INST_ICONST(1);
	goto label_19;
label_18:;
	INST_ICONST(0);
label_19:;
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_security_MessageDigest_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(119);
	((func_java_security_MessageDigest_engineReset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_MessageDigest_engineReset])(ctx, (frame[0].o));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_security_MessageDigest_getAlgorithm_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest:getAlgorithm", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((java_security_MessageDigest *) NULL_CHECK((frame[0].o)))->F_algorithm;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_security_MessageDigest_getDigestLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest:getDigestLength", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(127);
	jint temp0 = (jint)((func_java_security_MessageDigest_engineGetDigestLength_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_MessageDigest_engineGetDigestLength_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(128);
	if ((frame[1].i) != 0) goto label_6;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_CloneNotSupportedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((func_java_security_MessageDigest_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_MessageDigest_clone_R_java_lang_Object])(ctx, (frame[0].o));
	frame[2].o = (checkCast(ctx, &class_java_security_MessageDigest, sp[0].o));
	LINE_NUMBER(131);
	sp[0].o = (jobject)((func_java_security_MessageDigest_digest_R_Array1_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_security_MessageDigest_digest_R_Array1_byte])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(132);
	jint temp0 = ((jarray) nullCheck(ctx, (frame[3].o)))->length;
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(133);
	frame[2].o = sp[0].o;
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return (frame[1].i);
	}
label_6:;
	{
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_java_security_MessageDigest_clone_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest:clone", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(142);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Cloneable)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)M_java_security_MessageDigestSpi_clone_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(145);
	clinit_java_lang_CloneNotSupportedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_CloneNotSupportedException);
	init_java_lang_CloneNotSupportedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void init_java_security_MessageDigest_java_lang_String_java_security_Provider_java_security_MessageDigest$1(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_MessageDigest(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(7);
	init_java_security_MessageDigest_java_lang_String_java_security_Provider(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_security_MessageDigest_access$200_java_security_MessageDigest_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest:access$200", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_MessageDigest(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(7);
	sp[0].o = (jobject)((java_security_MessageDigest *) NULL_CHECK((frame[0].o)))->F_algorithm;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_security_MessageDigest_access$300_java_security_MessageDigest_R_java_security_Provider(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest:access$300", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_MessageDigest(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(7);
	sp[0].o = (jobject)((java_security_MessageDigest *) NULL_CHECK((frame[0].o)))->F_provider;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_security_MessageDigest[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_security_MessageDigest_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_security_MessageDigest_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_security_MessageDigestSpi_engineGetDigestLength_R_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_security_MessageDigestSpi_engineUpdate_java_nio_ByteBuffer,
	(void *) nullptr,
	(void *) M_java_security_MessageDigestSpi_engineDigest_Array1_byte_int_int_R_int,
	(void *) nullptr,
	(void *) M_java_security_MessageDigest_getProvider_R_java_security_Provider,
	(void *) M_java_security_MessageDigest_update_byte,
	(void *) M_java_security_MessageDigest_update_Array1_byte_int_int,
	(void *) M_java_security_MessageDigest_update_Array1_byte,
	(void *) M_java_security_MessageDigest_update_java_nio_ByteBuffer,
	(void *) M_java_security_MessageDigest_digest_R_Array1_byte,
	(void *) M_java_security_MessageDigest_digest_Array1_byte_int_int_R_int,
	(void *) M_java_security_MessageDigest_digest_Array1_byte_R_Array1_byte,
	(void *) M_java_security_MessageDigest_getProviderName_R_java_lang_String,
	(void *) M_java_security_MessageDigest_reset,
	(void *) M_java_security_MessageDigest_getAlgorithm_R_java_lang_String,
	(void *) M_java_security_MessageDigest_getDigestLength_R_int,
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
	{ "getProvider", "()Ljava/security/Provider;" },
	{ "update", "(B)V" },
	{ "update", "([BII)V" },
	{ "update", "([B)V" },
	{ "update", "(Ljava/nio/ByteBuffer;)V" },
	{ "digest", "()[B" },
	{ "digest", "([BII)I" },
	{ "digest", "([B)[B" },
	{ "getProviderName", "()Ljava/lang/String;" },
	{ "reset", "()V" },
	{ "getAlgorithm", "()Ljava/lang/String;" },
	{ "getDigestLength", "()I" },
};

static jclass innerClasses[] {
	&class_java_security_MessageDigest$Delegate,
};

static FieldMetadata fields[] {
	{ "algorithm", &class_java_lang_String, offsetof(java_security_MessageDigest, F_algorithm), "Ljava/lang/String;", 18 },
	{ "provider", &class_java_security_Provider, offsetof(java_security_MessageDigest, F_provider), "Ljava/security/Provider;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_security_MessageDigest_java_lang_String, 0, "(Ljava/lang/String;)V", 4 },
	{ "<init>", (intptr_t) init_java_security_MessageDigest_java_lang_String_java_security_Provider, 0, "(Ljava/lang/String;Ljava/security/Provider;)V", 2 },
	{ "getInstance", (intptr_t) SM_java_security_MessageDigest_getInstance_java_lang_String_R_java_security_MessageDigest, 0, "(Ljava/lang/String;)Ljava/security/MessageDigest;", 9 },
	{ "getInstance", (intptr_t) SM_java_security_MessageDigest_getInstance_java_lang_String_java_lang_String_R_java_security_MessageDigest, 0, "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/MessageDigest;", 9 },
	{ "getInstance", (intptr_t) SM_java_security_MessageDigest_getInstance_java_lang_String_java_security_Provider_R_java_security_MessageDigest, 0, "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/MessageDigest;", 9 },
	{ "getProvider", (intptr_t) M_java_security_MessageDigest_getProvider_R_java_security_Provider, VTABLE_java_security_MessageDigest_getProvider_R_java_security_Provider, "()Ljava/security/Provider;", 17 },
	{ "update", (intptr_t) M_java_security_MessageDigest_update_byte, VTABLE_java_security_MessageDigest_update_byte, "(B)V", 1 },
	{ "update", (intptr_t) M_java_security_MessageDigest_update_Array1_byte_int_int, VTABLE_java_security_MessageDigest_update_Array1_byte_int_int, "([BII)V", 1 },
	{ "update", (intptr_t) M_java_security_MessageDigest_update_Array1_byte, VTABLE_java_security_MessageDigest_update_Array1_byte, "([B)V", 1 },
	{ "update", (intptr_t) M_java_security_MessageDigest_update_java_nio_ByteBuffer, VTABLE_java_security_MessageDigest_update_java_nio_ByteBuffer, "(Ljava/nio/ByteBuffer;)V", 17 },
	{ "digest", (intptr_t) M_java_security_MessageDigest_digest_R_Array1_byte, VTABLE_java_security_MessageDigest_digest_R_Array1_byte, "()[B", 1 },
	{ "digest", (intptr_t) M_java_security_MessageDigest_digest_Array1_byte_int_int_R_int, VTABLE_java_security_MessageDigest_digest_Array1_byte_int_int_R_int, "([BII)I", 1 },
	{ "digest", (intptr_t) M_java_security_MessageDigest_digest_Array1_byte_R_Array1_byte, VTABLE_java_security_MessageDigest_digest_Array1_byte_R_Array1_byte, "([B)[B", 1 },
	{ "getProviderName", (intptr_t) M_java_security_MessageDigest_getProviderName_R_java_lang_String, VTABLE_java_security_MessageDigest_getProviderName_R_java_lang_String, "()Ljava/lang/String;", 2 },
	{ "toString", (intptr_t) M_java_security_MessageDigest_toString_R_java_lang_String, VTABLE_java_security_MessageDigest_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "isEqual", (intptr_t) SM_java_security_MessageDigest_isEqual_Array1_byte_Array1_byte_R_boolean, 0, "([B[B)Z", 9 },
	{ "reset", (intptr_t) M_java_security_MessageDigest_reset, VTABLE_java_security_MessageDigest_reset, "()V", 1 },
	{ "getAlgorithm", (intptr_t) M_java_security_MessageDigest_getAlgorithm_R_java_lang_String, VTABLE_java_security_MessageDigest_getAlgorithm_R_java_lang_String, "()Ljava/lang/String;", 17 },
	{ "getDigestLength", (intptr_t) M_java_security_MessageDigest_getDigestLength_R_int, VTABLE_java_security_MessageDigest_getDigestLength_R_int, "()I", 17 },
	{ "clone", (intptr_t) M_java_security_MessageDigest_clone_R_java_lang_Object, VTABLE_java_security_MessageDigest_clone_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "<init>", (intptr_t) init_java_security_MessageDigest_java_lang_String_java_security_Provider_java_security_MessageDigest$1, 0, "(Ljava/lang/String;Ljava/security/Provider;Ljava/security/MessageDigest$1;)V", 4096 },
	{ "access$200", (intptr_t) SM_java_security_MessageDigest_access$200_java_security_MessageDigest_R_java_lang_String, 0, "(Ljava/security/MessageDigest;)Ljava/lang/String;", 4104 },
	{ "access$300", (intptr_t) SM_java_security_MessageDigest_access$300_java_security_MessageDigest_R_java_security_Provider, 0, "(Ljava/security/MessageDigest;)Ljava/security/Provider;", 4104 },
};

Class class_java_security_MessageDigest{
		.nativeName = (intptr_t) "java/security/MessageDigest",
		.parentClass = (intptr_t) &class_java_security_MessageDigestSpi,
		.size = sizeof(java_security_MessageDigest),
		.classVtable = (intptr_t) vtable_java_security_MessageDigest,
		.staticInitializer = (intptr_t) clinit_java_security_MessageDigest,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_security_MessageDigest,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 23,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 30,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_security_MessageDigest = registerClass(&class_java_security_MessageDigest);

}
