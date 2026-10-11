#include "java/util/UUID.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/util/Random.h"
#include "java/lang/AssertionError.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/lang/Comparable.h"
#include "java/util/UUID.h"
#include "java/lang/Long.h"
#include "java/lang/Class.h"

extern "C" {

jlong SF_java_util_UUID_serialVersionUID;
jobject SF_java_util_UUID_random;
jbool SF_java_util_UUID_$assertionsDisabled;

void mark_java_util_UUID(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_UUID_random)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_UUID_random)->clazz)->markFunction)((jobject) SF_java_util_UUID_random, mark, depth + 1);
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
	auto self = (java_util_UUID *) object;
}

void init_java_util_UUID_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/UUID:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_UUID(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(100);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(101);
	frame[2].l = (jlong(0));
	LINE_NUMBER(102);
	frame[4].l = (jlong(0));
	LINE_NUMBER(103);
	if ((clinit_java_util_UUID(ctx), (jint)SF_java_util_UUID_$assertionsDisabled) != 0) goto label_4;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) == (16)) goto label_4;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"data must be 16 bytes in length"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(104);
	frame[6].i = (jint(0));
	}
label_5:;
	{
	if ((frame[6].i) >= (8)) goto label_6;
	}
	{
	LINE_NUMBER(105);
	frame[2].l = (((frame[2].l) << (8)) | (jlong((((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[6].i))) & (255)))));
	LINE_NUMBER(104);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(106);
	frame[6].i = (8);
	}
label_9:;
	{
	if ((frame[6].i) >= (16)) goto label_10;
	}
	{
	LINE_NUMBER(107);
	frame[4].l = (((frame[4].l) << (8)) | (jlong((((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[6].i))) & (255)))));
	LINE_NUMBER(106);
	INST_IINC(6, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(108);
	((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_mostSigBits = (frame[2].l);
	LINE_NUMBER(109);
	((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_leastSigBits = (frame[4].l);
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_UUID_long_long(jcontext ctx, jobject self, jlong param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/UUID:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_UUID(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	{
	LINE_NUMBER(124);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(125);
	((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_mostSigBits = (frame[1].l);
	LINE_NUMBER(126);
	((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_leastSigBits = (frame[3].l);
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_UUID_randomUUID_R_java_util_UUID(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/UUID:randomUUID", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_UUID(ctx);
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (16));
	frame[0].o = sp[0].o;
	LINE_NUMBER(139);
	clinit_java_util_UUID(ctx);
	sp[0].o = (jobject)SF_java_util_UUID_random;
	((func_java_util_Random_nextBytes_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextBytes_Array1_byte])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	jint temp0 = 6;
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) & (15))));
	LINE_NUMBER(141);
	sp[0].o = frame[0].o;
	jint temp3 = 6;
	ARRAY_ACCESS(jbyte, sp[0].o, temp3) = (jbyte((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp3)) | (64))));
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	jint temp6 = 8;
	ARRAY_ACCESS(jbyte, sp[0].o, temp6) = (jbyte((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp6)) & (63))));
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	jint temp9 = 8;
	ARRAY_ACCESS(jbyte, sp[0].o, temp9) = (jbyte((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp9)) | (128))));
	LINE_NUMBER(144);
	clinit_java_util_UUID(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_UUID);
	init_java_util_UUID_Array1_byte(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_UUID_nameUUIDFromBytes_Array1_byte_R_java_util_UUID(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/UUID:nameUUIDFromBytes", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_UUID(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(157);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_util_UUID_fromString_java_lang_String_R_java_util_UUID(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/UUID:fromString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_UUID(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(187);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jlong M_java_util_UUID_getLeastSignificantBits_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/UUID:getLeastSignificantBits", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return ((jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_leastSigBits);
	}

	popStackFrame(ctx);
}

jlong M_java_util_UUID_getMostSignificantBits_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/UUID:getMostSignificantBits", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return ((jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_mostSigBits);
	}

	popStackFrame(ctx);
}

jint M_java_util_UUID_version_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/UUID:version", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return (jint(((((jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_mostSigBits) >> (12)) & (jlong(15ll)))));
	}

	popStackFrame(ctx);
}

jint M_java_util_UUID_variant_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/UUID:variant", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return (jint(((bit_cast<jlong>(bit_cast<uint64_t>(((jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_leastSigBits)) >> (jint(((jlong(64ll)) - (bit_cast<jlong>(bit_cast<uint64_t>(((jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_leastSigBits)) >> (62)))))))) & (((jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_leastSigBits) >> (63)))));
	}

	popStackFrame(ctx);
}

jlong M_java_util_UUID_timestamp_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/UUID:timestamp", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(288);
	jint temp0 = (jint)((func_java_util_UUID_version_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_UUID_version_R_int])(ctx, (frame[0].o));
	if (temp0 == (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(289);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not a time-based UUID"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return ((((((jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_mostSigBits) & (jlong(4095ll))) << (48)) | (((((jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_mostSigBits) >> (16)) & (jlong(65535ll))) << (32))) | (bit_cast<jlong>(bit_cast<uint64_t>(((jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_mostSigBits)) >> (32))));
	}

	popStackFrame(ctx);
}

jint M_java_util_UUID_clockSequence_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/UUID:clockSequence", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(314);
	jint temp0 = (jint)((func_java_util_UUID_version_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_UUID_version_R_int])(ctx, (frame[0].o));
	if (temp0 == (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(315);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not a time-based UUID"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(318);
	popStackFrame(ctx);
	return (jint((bit_cast<jlong>(bit_cast<uint64_t>((((jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_leastSigBits) & (jlong(4611404543450677248ll)))) >> (48)))));
	}

	popStackFrame(ctx);
}

jlong M_java_util_UUID_node_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/UUID:node", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(338);
	jint temp0 = (jint)((func_java_util_UUID_version_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_UUID_version_R_int])(ctx, (frame[0].o));
	if (temp0 == (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(339);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not a time-based UUID"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return (((jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_leastSigBits) & (jlong(281474976710655ll)));
	}

	popStackFrame(ctx);
}

jobject M_java_util_UUID_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/UUID:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(372);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)SM_java_util_UUID_digits_long_int_R_java_lang_String(ctx, (((jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_mostSigBits) >> (32)), (8));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	jlong temp0 = ((jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_mostSigBits) >> (16);
	jint temp1 = jint(4);
	LINE_NUMBER(373);
	sp[1].o = (jobject)SM_java_util_UUID_digits_long_int_R_java_lang_String(ctx, temp0, temp1);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	jlong temp2 = (jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_mostSigBits;
	jint temp3 = jint(4);
	LINE_NUMBER(374);
	sp[1].o = (jobject)SM_java_util_UUID_digits_long_int_R_java_lang_String(ctx, temp2, temp3);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	jlong temp4 = ((jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_leastSigBits) >> (48);
	jint temp5 = jint(4);
	LINE_NUMBER(375);
	sp[1].o = (jobject)SM_java_util_UUID_digits_long_int_R_java_lang_String(ctx, temp4, temp5);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	jlong temp6 = (jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_leastSigBits;
	jint temp7 = 12;
	LINE_NUMBER(376);
	sp[1].o = (jobject)SM_java_util_UUID_digits_long_int_R_java_lang_String(ctx, temp6, temp7);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	LINE_NUMBER(372);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_UUID_digits_long_int_R_java_lang_String(jcontext ctx, jlong param0, jint param1) {
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/UUID:digits", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_UUID(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(381);
	frame[3].l = ((jlong(1)) << ((frame[2].i) * (jint(4))));
	LINE_NUMBER(382);
	sp[0].o = (jobject)SM_java_lang_Long_toHexString_long_R_java_lang_String(ctx, ((frame[3].l) | ((frame[0].l) & ((frame[3].l) - (jlong(1))))));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_UUID_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/UUID:hashCode", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(391);
	frame[1].l = (((jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_mostSigBits) ^ ((jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_leastSigBits));
	LINE_NUMBER(392);
	popStackFrame(ctx);
	return ((jint(((frame[1].l) >> (32)))) ^ (jint((frame[1].l))));
	}

	popStackFrame(ctx);
}

jbool M_java_util_UUID_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/UUID:equals", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(408);
	if ((jobject(nullptr)) == (frame[1].o)) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == (((jobject) &class_java_util_UUID))) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(409);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(410);
	frame[2].o = (checkCast(ctx, &class_java_util_UUID, (frame[1].o)));
	LINE_NUMBER(411);
	if ((longCompare(((jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_mostSigBits), ((jlong)((java_util_UUID *) NULL_CHECK((frame[2].o)))->F_mostSigBits))) != 0) goto label_4;
	}
	{
	if ((longCompare(((jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_leastSigBits), ((jlong)((java_util_UUID *) NULL_CHECK((frame[2].o)))->F_leastSigBits))) != 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_util_UUID_compareTo_java_util_UUID_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/UUID:compareTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(434);
	if ((longCompare(((jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_mostSigBits), ((jlong)((java_util_UUID *) NULL_CHECK((frame[1].o)))->F_mostSigBits))) >= 0) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	{
	LINE_NUMBER(435);
	if ((longCompare(((jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_mostSigBits), ((jlong)((java_util_UUID *) NULL_CHECK((frame[1].o)))->F_mostSigBits))) <= 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(436);
	if ((longCompare(((jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_leastSigBits), ((jlong)((java_util_UUID *) NULL_CHECK((frame[1].o)))->F_leastSigBits))) >= 0) goto label_4;
	}
	INST_ICONST(-1);
	goto label_2;
label_4:;
	{
	LINE_NUMBER(437);
	if ((longCompare(((jlong)((java_util_UUID *) NULL_CHECK((frame[0].o)))->F_leastSigBits), ((jlong)((java_util_UUID *) NULL_CHECK((frame[1].o)))->F_leastSigBits))) <= 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_2;
label_5:;
	LINE_NUMBER(438);
	INST_ICONST(0);
label_2:;
	LINE_NUMBER(434);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_util_UUID_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/UUID:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	jint temp0 = (jint)((func_java_util_UUID_compareTo_java_util_UUID_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_UUID_compareTo_java_util_UUID_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_UUID, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_java_util_UUID(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_UUID_serialVersionUID = jlong(-4856846361193249489ll);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/UUID:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_UUID(ctx);
	{
	LINE_NUMBER(68);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_util_UUID)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_java_util_UUID)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	clinit_java_util_UUID(ctx);
	SF_java_util_UUID_$assertionsDisabled = sp[0].i;
	LINE_NUMBER(93);
	clinit_java_util_Random(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Random);
	init_java_util_Random(ctx, sp[0].o);
	clinit_java_util_UUID(ctx);
	SF_java_util_UUID_random = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_UUID[] {
	(void *) M_java_util_UUID_hashCode_R_int,
	(void *) M_java_util_UUID_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_UUID_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_UUID_compareTo_java_lang_Object_R_int,
	(void *) M_java_util_UUID_getLeastSignificantBits_R_long,
	(void *) M_java_util_UUID_getMostSignificantBits_R_long,
	(void *) M_java_util_UUID_version_R_int,
	(void *) M_java_util_UUID_variant_R_int,
	(void *) M_java_util_UUID_timestamp_R_long,
	(void *) M_java_util_UUID_clockSequence_R_int,
	(void *) M_java_util_UUID_node_R_long,
	(void *) M_java_util_UUID_compareTo_java_util_UUID_R_int,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getLeastSignificantBits", "()J" },
	{ "getMostSignificantBits", "()J" },
	{ "version", "()I" },
	{ "variant", "()I" },
	{ "timestamp", "()J" },
	{ "clockSequence", "()I" },
	{ "node", "()J" },
	{ "compareTo", "(Ljava/util/UUID;)I" },
};

static jclass interfaces[] { &class_java_io_Serializable, &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_UUID_serialVersionUID, "J", 26 },
	{ "mostSigBits", &class_long, offsetof(java_util_UUID, F_mostSigBits), "J", 18 },
	{ "leastSigBits", &class_long, offsetof(java_util_UUID, F_leastSigBits), "J", 18 },
	{ "random", &class_java_util_Random, (intptr_t) &SF_java_util_UUID_random, "Ljava/util/Random;", 26 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_java_util_UUID_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_UUID_Array1_byte, 0, "([B)V", 2 },
	{ "<init>", (intptr_t) init_java_util_UUID_long_long, 0, "(JJ)V", 1 },
	{ "randomUUID", (intptr_t) SM_java_util_UUID_randomUUID_R_java_util_UUID, 0, "()Ljava/util/UUID;", 9 },
	{ "nameUUIDFromBytes", (intptr_t) SM_java_util_UUID_nameUUIDFromBytes_Array1_byte_R_java_util_UUID, 0, "([B)Ljava/util/UUID;", 9 },
	{ "fromString", (intptr_t) SM_java_util_UUID_fromString_java_lang_String_R_java_util_UUID, 0, "(Ljava/lang/String;)Ljava/util/UUID;", 9 },
	{ "getLeastSignificantBits", (intptr_t) M_java_util_UUID_getLeastSignificantBits_R_long, VTABLE_java_util_UUID_getLeastSignificantBits_R_long, "()J", 1 },
	{ "getMostSignificantBits", (intptr_t) M_java_util_UUID_getMostSignificantBits_R_long, VTABLE_java_util_UUID_getMostSignificantBits_R_long, "()J", 1 },
	{ "version", (intptr_t) M_java_util_UUID_version_R_int, VTABLE_java_util_UUID_version_R_int, "()I", 1 },
	{ "variant", (intptr_t) M_java_util_UUID_variant_R_int, VTABLE_java_util_UUID_variant_R_int, "()I", 1 },
	{ "timestamp", (intptr_t) M_java_util_UUID_timestamp_R_long, VTABLE_java_util_UUID_timestamp_R_long, "()J", 1 },
	{ "clockSequence", (intptr_t) M_java_util_UUID_clockSequence_R_int, VTABLE_java_util_UUID_clockSequence_R_int, "()I", 1 },
	{ "node", (intptr_t) M_java_util_UUID_node_R_long, VTABLE_java_util_UUID_node_R_long, "()J", 1 },
	{ "toString", (intptr_t) M_java_util_UUID_toString_R_java_lang_String, VTABLE_java_util_UUID_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "digits", (intptr_t) SM_java_util_UUID_digits_long_int_R_java_lang_String, 0, "(JI)Ljava/lang/String;", 10 },
	{ "hashCode", (intptr_t) M_java_util_UUID_hashCode_R_int, VTABLE_java_util_UUID_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_java_util_UUID_equals_java_lang_Object_R_boolean, VTABLE_java_util_UUID_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "compareTo", (intptr_t) M_java_util_UUID_compareTo_java_util_UUID_R_int, VTABLE_java_util_UUID_compareTo_java_util_UUID_R_int, "(Ljava/util/UUID;)I", 1 },
	{ "compareTo", (intptr_t) M_java_util_UUID_compareTo_java_lang_Object_R_int, VTABLE_java_util_UUID_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_java_util_UUID, 0, "()V", 8 },
};

Class class_java_util_UUID{
		.nativeName = (intptr_t) "java/util/UUID",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_UUID),
		.classVtable = (intptr_t) vtable_java_util_UUID,
		.staticInitializer = (intptr_t) clinit_java_util_UUID,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_UUID,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_UUID = registerClass(&class_java_util_UUID);

}
