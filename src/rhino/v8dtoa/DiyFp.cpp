#include "rhino/v8dtoa/DiyFp.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/AssertionError.h"
#include "rhino/v8dtoa/DiyFp.h"
#include "java/lang/Class.h"

extern "C" {

jint SF_rhino_v8dtoa_DiyFp_kSignificandSize;
jlong SF_rhino_v8dtoa_DiyFp_kUint64MSB;
jbool SF_rhino_v8dtoa_DiyFp_$assertionsDisabled;

void mark_rhino_v8dtoa_DiyFp(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_v8dtoa_DiyFp *) object;
}

void init_rhino_v8dtoa_DiyFp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DiyFp:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DiyFp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(47);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(48);
	((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_f = (jlong(0));
	LINE_NUMBER(49);
	((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_e = (jint(0));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_v8dtoa_DiyFp_long_int(jcontext ctx, jobject self, jlong param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DiyFp:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DiyFp(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].i = param1;
	{
	LINE_NUMBER(52);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(53);
	((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_f = (frame[1].l);
	LINE_NUMBER(54);
	((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_e = (frame[3].i);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_v8dtoa_DiyFp_uint64_gte_long_long_R_boolean(jcontext ctx, jlong param0, jlong param1) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DiyFp:uint64_gte", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DiyFp(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(59);
	if ((longCompare((frame[0].l), (frame[2].l))) == 0) goto label_1;
	}
	{
	if ((longCompare((frame[0].l), (frame[2].l))) <= 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	if ((longCompare((frame[0].l), (jlong(0)))) >= 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 2;
	jint temp0 = sp[0].i ^ sp[1].i;
	sp[0].i = temp0;
	sp += 1;
	if ((longCompare((frame[2].l), (jlong(0)))) >= 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	INST_IXOR();
	if ((--sp)->i == 0) goto label_8;
label_1:;
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_rhino_v8dtoa_DiyFp_subtract_rhino_v8dtoa_DiyFp(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DiyFp:subtract", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(67);
	if ((clinit_rhino_v8dtoa_DiyFp(ctx), (jint)SF_rhino_v8dtoa_DiyFp_$assertionsDisabled) != 0) goto label_1;
	}
	{
	if (((jint)((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_e) == ((jint)((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[1].o)))->F_e)) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(68);
	if ((clinit_rhino_v8dtoa_DiyFp(ctx), (jint)SF_rhino_v8dtoa_DiyFp_$assertionsDisabled) != 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_rhino_v8dtoa_DiyFp_uint64_gte_long_long_R_boolean(ctx, ((jlong)((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_f), ((jlong)((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[1].o)))->F_f));
	if (temp0 != 0) goto label_2;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	((rhino_v8dtoa_DiyFp *) NULL_CHECK(sp[0].o))->F_f = (((jlong)((rhino_v8dtoa_DiyFp *) NULL_CHECK(sp[0].o))->F_f) - ((jlong)((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[1].o)))->F_f));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_v8dtoa_DiyFp_minus_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp_R_rhino_v8dtoa_DiyFp(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DiyFp:minus", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DiyFp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(76);
	clinit_rhino_v8dtoa_DiyFp(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_v8dtoa_DiyFp);
	init_rhino_v8dtoa_DiyFp_long_int(ctx, sp[0].o, ((jlong)((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_f), ((jint)((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_e));
	frame[2].o = sp[0].o;
	LINE_NUMBER(77);
	((func_rhino_v8dtoa_DiyFp_subtract_rhino_v8dtoa_DiyFp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_subtract_rhino_v8dtoa_DiyFp])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_rhino_v8dtoa_DiyFp_multiply_rhino_v8dtoa_DiyFp(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[30];
	auto stack = &frame[24];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DiyFp:multiply", 30 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	frame[2].l = (jlong(4294967295ll));
	LINE_NUMBER(89);
	frame[4].l = (bit_cast<jlong>(bit_cast<uint64_t>(((jlong)((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_f)) >> (32)));
	LINE_NUMBER(90);
	frame[6].l = (((jlong)((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_f) & (jlong(4294967295ll)));
	LINE_NUMBER(91);
	frame[8].l = (bit_cast<jlong>(bit_cast<uint64_t>(((jlong)((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[1].o)))->F_f)) >> (32)));
	LINE_NUMBER(92);
	frame[10].l = (((jlong)((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[1].o)))->F_f) & (jlong(4294967295ll)));
	LINE_NUMBER(93);
	frame[12].l = ((frame[4].l) * (frame[8].l));
	LINE_NUMBER(94);
	frame[14].l = ((frame[6].l) * (frame[8].l));
	LINE_NUMBER(95);
	frame[16].l = ((frame[4].l) * (frame[10].l));
	LINE_NUMBER(96);
	frame[18].l = ((frame[6].l) * (frame[10].l));
	LINE_NUMBER(97);
	frame[20].l = (((bit_cast<jlong>(bit_cast<uint64_t>((frame[18].l)) >> (32))) + ((frame[16].l) & (jlong(4294967295ll)))) + ((frame[14].l) & (jlong(4294967295ll))));
	LINE_NUMBER(100);
	frame[20].l = ((frame[20].l) + (jlong(2147483648ll)));
	LINE_NUMBER(101);
	frame[22].l = ((((frame[12].l) + (bit_cast<jlong>(bit_cast<uint64_t>((frame[16].l)) >> (32)))) + (bit_cast<jlong>(bit_cast<uint64_t>((frame[14].l)) >> (32)))) + (bit_cast<jlong>(bit_cast<uint64_t>((frame[20].l)) >> (32))));
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	((rhino_v8dtoa_DiyFp *) NULL_CHECK(sp[0].o))->F_e = (((jint)((rhino_v8dtoa_DiyFp *) NULL_CHECK(sp[0].o))->F_e) + (((jint)((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[1].o)))->F_e) + (64)));
	LINE_NUMBER(103);
	((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_f = (frame[22].l);
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_v8dtoa_DiyFp_times_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp_R_rhino_v8dtoa_DiyFp(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DiyFp:times", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DiyFp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(108);
	clinit_rhino_v8dtoa_DiyFp(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_v8dtoa_DiyFp);
	init_rhino_v8dtoa_DiyFp_long_int(ctx, sp[0].o, ((jlong)((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_f), ((jint)((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_e));
	frame[2].o = sp[0].o;
	LINE_NUMBER(109);
	((func_rhino_v8dtoa_DiyFp_multiply_rhino_v8dtoa_DiyFp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_multiply_rhino_v8dtoa_DiyFp])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_rhino_v8dtoa_DiyFp_normalize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DiyFp:normalize", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(114);
	if ((clinit_rhino_v8dtoa_DiyFp(ctx), (jint)SF_rhino_v8dtoa_DiyFp_$assertionsDisabled) != 0) goto label_1;
	}
	{
	if ((longCompare(((jlong)((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_f), (jlong(0)))) != 0) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(115);
	frame[1].l = ((jlong)((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_f);
	LINE_NUMBER(116);
	frame[3].i = ((jint)((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_e);
	LINE_NUMBER(120);
	frame[4].l = (jlong(-18014398509481984ll));
	}
label_4:;
	{
	LINE_NUMBER(121);
	if ((longCompare(((frame[1].l) & (jlong(-18014398509481984ll))), (jlong(0)))) != 0) goto label_5;
	}
	{
	LINE_NUMBER(122);
	frame[1].l = ((frame[1].l) << (10));
	LINE_NUMBER(123);
	INST_IINC(3, -10);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(125);
	if ((longCompare(((frame[1].l) & (bit_cast<jlong>(0x8000000000000000ll))), (jlong(0)))) != 0) goto label_8;
	}
	{
	LINE_NUMBER(126);
	frame[1].l = ((frame[1].l) << (jint(1)));
	LINE_NUMBER(127);
	INST_IINC(3, -1);
	goto label_5;
	}
label_8:;
	{
	LINE_NUMBER(129);
	((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_f = (frame[1].l);
	LINE_NUMBER(130);
	((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_e = (frame[3].i);
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_v8dtoa_DiyFp_normalize_rhino_v8dtoa_DiyFp_R_rhino_v8dtoa_DiyFp(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DiyFp:normalize", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DiyFp(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(134);
	clinit_rhino_v8dtoa_DiyFp(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_v8dtoa_DiyFp);
	init_rhino_v8dtoa_DiyFp_long_int(ctx, sp[0].o, ((jlong)((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_f), ((jint)((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_e));
	frame[1].o = sp[0].o;
	LINE_NUMBER(135);
	((func_rhino_v8dtoa_DiyFp_normalize) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_normalize])(ctx, (frame[1].o));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jlong M_rhino_v8dtoa_DiyFp_f_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DiyFp:f", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return ((jlong)((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_f);
	}

	popStackFrame(ctx);
}

jint M_rhino_v8dtoa_DiyFp_e_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DiyFp:e", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return ((jint)((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_e);
	}

	popStackFrame(ctx);
}

void M_rhino_v8dtoa_DiyFp_setF_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DiyFp:setF", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(148);
	((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_f = (frame[1].l);
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_v8dtoa_DiyFp_setE_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DiyFp:setE", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(152);
	((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_e = (frame[1].i);
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_v8dtoa_DiyFp_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DiyFp:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(157);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[DiyFp f:"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jlong)((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_f));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", e:"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((rhino_v8dtoa_DiyFp *) NULL_CHECK((frame[0].o)))->F_e));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_rhino_v8dtoa_DiyFp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_v8dtoa_DiyFp_kSignificandSize = jint(64);
	SF_rhino_v8dtoa_DiyFp_kUint64MSB = bit_cast<jlong>(0x8000000000000000ll);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DiyFp:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DiyFp(ctx);
	{
	LINE_NUMBER(38);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_rhino_v8dtoa_DiyFp)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_rhino_v8dtoa_DiyFp)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	clinit_rhino_v8dtoa_DiyFp(ctx);
	SF_rhino_v8dtoa_DiyFp_$assertionsDisabled = (--sp)->i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_v8dtoa_DiyFp[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_v8dtoa_DiyFp_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_v8dtoa_DiyFp_subtract_rhino_v8dtoa_DiyFp,
	(void *) M_rhino_v8dtoa_DiyFp_multiply_rhino_v8dtoa_DiyFp,
	(void *) M_rhino_v8dtoa_DiyFp_normalize,
	(void *) M_rhino_v8dtoa_DiyFp_f_R_long,
	(void *) M_rhino_v8dtoa_DiyFp_e_R_int,
	(void *) M_rhino_v8dtoa_DiyFp_setF_long,
	(void *) M_rhino_v8dtoa_DiyFp_setE_int,
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
	{ "subtract", "(Lrhino/v8dtoa/DiyFp;)V" },
	{ "multiply", "(Lrhino/v8dtoa/DiyFp;)V" },
	{ "normalize", "()V" },
	{ "f", "()J" },
	{ "e", "()I" },
	{ "setF", "(J)V" },
	{ "setE", "(I)V" },
};

static FieldMetadata fields[] {
	{ "f", &class_long, offsetof(rhino_v8dtoa_DiyFp, F_f), "J", 2 },
	{ "e", &class_int, offsetof(rhino_v8dtoa_DiyFp, F_e), "I", 2 },
	{ "kSignificandSize", &class_int, (intptr_t) &SF_rhino_v8dtoa_DiyFp_kSignificandSize, "I", 24 },
	{ "kUint64MSB", &class_long, (intptr_t) &SF_rhino_v8dtoa_DiyFp_kUint64MSB, "J", 24 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_rhino_v8dtoa_DiyFp_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_v8dtoa_DiyFp, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_rhino_v8dtoa_DiyFp_long_int, 0, "(JI)V", 0 },
	{ "uint64_gte", (intptr_t) SM_rhino_v8dtoa_DiyFp_uint64_gte_long_long_R_boolean, 0, "(JJ)Z", 10 },
	{ "subtract", (intptr_t) M_rhino_v8dtoa_DiyFp_subtract_rhino_v8dtoa_DiyFp, VTABLE_rhino_v8dtoa_DiyFp_subtract_rhino_v8dtoa_DiyFp, "(Lrhino/v8dtoa/DiyFp;)V", 0 },
	{ "minus", (intptr_t) SM_rhino_v8dtoa_DiyFp_minus_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp_R_rhino_v8dtoa_DiyFp, 0, "(Lrhino/v8dtoa/DiyFp;Lrhino/v8dtoa/DiyFp;)Lrhino/v8dtoa/DiyFp;", 8 },
	{ "multiply", (intptr_t) M_rhino_v8dtoa_DiyFp_multiply_rhino_v8dtoa_DiyFp, VTABLE_rhino_v8dtoa_DiyFp_multiply_rhino_v8dtoa_DiyFp, "(Lrhino/v8dtoa/DiyFp;)V", 0 },
	{ "times", (intptr_t) SM_rhino_v8dtoa_DiyFp_times_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp_R_rhino_v8dtoa_DiyFp, 0, "(Lrhino/v8dtoa/DiyFp;Lrhino/v8dtoa/DiyFp;)Lrhino/v8dtoa/DiyFp;", 8 },
	{ "normalize", (intptr_t) M_rhino_v8dtoa_DiyFp_normalize, VTABLE_rhino_v8dtoa_DiyFp_normalize, "()V", 0 },
	{ "normalize", (intptr_t) SM_rhino_v8dtoa_DiyFp_normalize_rhino_v8dtoa_DiyFp_R_rhino_v8dtoa_DiyFp, 0, "(Lrhino/v8dtoa/DiyFp;)Lrhino/v8dtoa/DiyFp;", 8 },
	{ "f", (intptr_t) M_rhino_v8dtoa_DiyFp_f_R_long, VTABLE_rhino_v8dtoa_DiyFp_f_R_long, "()J", 0 },
	{ "e", (intptr_t) M_rhino_v8dtoa_DiyFp_e_R_int, VTABLE_rhino_v8dtoa_DiyFp_e_R_int, "()I", 0 },
	{ "setF", (intptr_t) M_rhino_v8dtoa_DiyFp_setF_long, VTABLE_rhino_v8dtoa_DiyFp_setF_long, "(J)V", 0 },
	{ "setE", (intptr_t) M_rhino_v8dtoa_DiyFp_setE_int, VTABLE_rhino_v8dtoa_DiyFp_setE_int, "(I)V", 0 },
	{ "toString", (intptr_t) M_rhino_v8dtoa_DiyFp_toString_R_java_lang_String, VTABLE_rhino_v8dtoa_DiyFp_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "<clinit>", (intptr_t) clinit_rhino_v8dtoa_DiyFp, 0, "()V", 8 },
};

Class class_rhino_v8dtoa_DiyFp{
		.nativeName = (intptr_t) "rhino/v8dtoa/DiyFp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_v8dtoa_DiyFp),
		.classVtable = (intptr_t) vtable_rhino_v8dtoa_DiyFp,
		.staticInitializer = (intptr_t) clinit_rhino_v8dtoa_DiyFp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_v8dtoa_DiyFp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_v8dtoa_DiyFp = registerClass(&class_rhino_v8dtoa_DiyFp);

}
