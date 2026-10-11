#include "arc/struct/DelayedRemovalSeq.h"
#include "arc/struct/DelayedRemovalSeq.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Comparator.h"
#include "arc/struct/Seq.h"
#include "java/lang/IllegalStateException.h"
#include "arc/struct/IntSeq.h"
#include "java/lang/Class.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_arc_struct_DelayedRemovalSeq(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_struct_Seq(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_struct_DelayedRemovalSeq *) object;
	if (self->F_remove)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_remove)->clazz)->markFunction)((jobject) self->F_remove, mark, depth + 1);
}

void clinit_arc_struct_DelayedRemovalSeq(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_struct_Seq(ctx);
}

void init_arc_struct_DelayedRemovalSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_DelayedRemovalSeq(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(22);
	init_arc_struct_Seq(ctx, (frame[0].o));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_int(ctx, sp[1].o, (jint(0)));
	((arc_struct_DelayedRemovalSeq *) NULL_CHECK(sp[0].o))->F_remove = (jref) sp[1].o;
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_DelayedRemovalSeq_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_DelayedRemovalSeq(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	init_arc_struct_Seq_arc_struct_Seq(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_int(ctx, sp[1].o, (jint(0)));
	((arc_struct_DelayedRemovalSeq *) NULL_CHECK(sp[0].o))->F_remove = (jref) sp[1].o;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_DelayedRemovalSeq_boolean_int_java_lang_Class(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_DelayedRemovalSeq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(30);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].o));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_int(ctx, sp[1].o, (jint(0)));
	((arc_struct_DelayedRemovalSeq *) NULL_CHECK(sp[0].o))->F_remove = (jref) sp[1].o;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_DelayedRemovalSeq_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_DelayedRemovalSeq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(34);
	init_arc_struct_Seq_boolean_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_int(ctx, sp[1].o, (jint(0)));
	((arc_struct_DelayedRemovalSeq *) NULL_CHECK(sp[0].o))->F_remove = (jref) sp[1].o;
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_DelayedRemovalSeq_boolean_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_DelayedRemovalSeq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(38);
	init_arc_struct_Seq_boolean_Array1_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_int(ctx, sp[1].o, (jint(0)));
	((arc_struct_DelayedRemovalSeq *) NULL_CHECK(sp[0].o))->F_remove = (jref) sp[1].o;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_DelayedRemovalSeq_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_DelayedRemovalSeq(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(42);
	init_arc_struct_Seq_java_lang_Class(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_int(ctx, sp[1].o, (jint(0)));
	((arc_struct_DelayedRemovalSeq *) NULL_CHECK(sp[0].o))->F_remove = (jref) sp[1].o;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_DelayedRemovalSeq_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_DelayedRemovalSeq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(46);
	init_arc_struct_Seq_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_int(ctx, sp[1].o, (jint(0)));
	((arc_struct_DelayedRemovalSeq *) NULL_CHECK(sp[0].o))->F_remove = (jref) sp[1].o;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_DelayedRemovalSeq_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_DelayedRemovalSeq(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(50);
	init_arc_struct_Seq_Array1_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_int(ctx, sp[1].o, (jint(0)));
	((arc_struct_DelayedRemovalSeq *) NULL_CHECK(sp[0].o))->F_remove = (jref) sp[1].o;
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_struct_DelayedRemovalSeq_with_Array1_java_lang_Object_R_arc_struct_DelayedRemovalSeq(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:with", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_DelayedRemovalSeq(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(55);
	clinit_arc_struct_DelayedRemovalSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_DelayedRemovalSeq);
	init_arc_struct_DelayedRemovalSeq_Array1_java_lang_Object(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_struct_DelayedRemovalSeq_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:begin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	((arc_struct_DelayedRemovalSeq *) NULL_CHECK(sp[0].o))->F_iterating = (((jint)((arc_struct_DelayedRemovalSeq *) NULL_CHECK(sp[0].o))->F_iterating) + (jint(1)));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_DelayedRemovalSeq_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:end", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	if (((jint)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_iterating) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"begin must be called before end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	((arc_struct_DelayedRemovalSeq *) NULL_CHECK(sp[0].o))->F_iterating = (((jint)((arc_struct_DelayedRemovalSeq *) NULL_CHECK(sp[0].o))->F_iterating) - (jint(1)));
	LINE_NUMBER(65);
	if (((jint)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_iterating) != 0) goto label_3;
	}
	{
	LINE_NUMBER(66);
	if (((jint)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_clear) <= 0) goto label_5;
	}
	{
	if (((jint)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_clear) != ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_5;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_remove;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(68);
	sp[0].o = (jobject)((func_arc_struct_DelayedRemovalSeq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_DelayedRemovalSeq_clear_R_arc_struct_Seq])(ctx, (frame[0].o));
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(70);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_remove;
	frame[2].i = ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_10:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_11;
	}
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_remove;
	jint temp0 = (jint)((func_arc_struct_IntSeq_pop_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_pop_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(72);
	if ((frame[3].i) < ((jint)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_clear)) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_DelayedRemovalSeq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_DelayedRemovalSeq_remove_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[3].i));
	}
label_14:;
	{
	LINE_NUMBER(70);
	INST_IINC(1, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(74);
	frame[1].i = (((jint)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_clear) - (jint(1)));
	}
label_15:;
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_8;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((func_arc_struct_DelayedRemovalSeq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_DelayedRemovalSeq_remove_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(74);
	INST_IINC(1, -1);
	goto label_15;
	}
label_8:;
	{
	LINE_NUMBER(77);
	((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_clear = (jint(0));
	}
label_3:;
	LINE_NUMBER(79);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_DelayedRemovalSeq_removeIntern_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:removeIntern", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(82);
	if ((frame[1].i) >= ((jint)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_clear)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(83);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_remove;
	frame[3].i = ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_3:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_remove;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[0].o, (frame[2].i));
	frame[4].i = temp0;
	LINE_NUMBER(85);
	if ((frame[1].i) != (frame[4].i)) goto label_7;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(86);
	if ((frame[1].i) >= (frame[4].i)) goto label_8;
	}
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_remove;
	((func_arc_struct_IntSeq_insert_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_insert_int_int])(ctx, sp[0].o, (frame[2].i), (frame[1].i));
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(83);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_remove;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_DelayedRemovalSeq_remove_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:remove", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(95);
	if (((jint)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(96);
	jint temp0 = (jint)((func_arc_struct_DelayedRemovalSeq_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_DelayedRemovalSeq_indexOf_java_lang_Object_boolean_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(97);
	if ((frame[3].i) != (jint(-1))) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(98);
	M_arc_struct_DelayedRemovalSeq_removeIntern_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(101);
	jint temp0 = (jint)M_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_DelayedRemovalSeq_remove_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(105);
	if (((jint)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(106);
	M_arc_struct_DelayedRemovalSeq_removeIntern_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(107);
	sp[0].o = (jobject)((func_arc_struct_DelayedRemovalSeq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_DelayedRemovalSeq_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)M_arc_struct_Seq_remove_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_struct_DelayedRemovalSeq_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:removeRange", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(113);
	if (((jint)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(114);
	frame[3].i = (frame[2].i);
	}
label_3:;
	{
	if ((frame[3].i) < (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(115);
	M_arc_struct_DelayedRemovalSeq_removeIntern_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(114);
	INST_IINC(3, -1);
	goto label_3;
	}
label_4:;
	goto label_7;
label_1:;
	{
	LINE_NUMBER(117);
	M_arc_struct_Seq_removeRange_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	}
label_7:;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_struct_DelayedRemovalSeq_clear_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(121);
	if (((jint)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(122);
	((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_clear = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)M_arc_struct_Seq_clear_R_arc_struct_Seq(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_struct_DelayedRemovalSeq_set_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(129);
	if (((jint)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid between begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(130);
	M_arc_struct_Seq_set_int_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_DelayedRemovalSeq_insert_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(134);
	if (((jint)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid between begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(135);
	M_arc_struct_Seq_insert_int_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_DelayedRemovalSeq_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:swap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(139);
	if (((jint)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid between begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(140);
	M_arc_struct_Seq_swap_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_DelayedRemovalSeq_pop_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:pop", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(144);
	if (((jint)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid between begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)M_arc_struct_Seq_pop_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_DelayedRemovalSeq_sort_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(149);
	if (((jint)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid between begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)M_arc_struct_Seq_sort_R_arc_struct_Seq(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_DelayedRemovalSeq_sort_java_util_Comparator_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:sort", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(154);
	if (((jint)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid between begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)M_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_DelayedRemovalSeq_reverse_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:reverse", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(159);
	if (((jint)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid between begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)M_arc_struct_Seq_reverse_R_arc_struct_Seq(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_DelayedRemovalSeq_shuffle_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:shuffle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(164);
	if (((jint)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid between begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)M_arc_struct_Seq_shuffle_R_arc_struct_Seq(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_struct_DelayedRemovalSeq_truncate_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:truncate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(169);
	if (((jint)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid between begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(170);
	M_arc_struct_Seq_truncate_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_DelayedRemovalSeq_setSize_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/DelayedRemovalSeq:setSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(174);
	if (((jint)((arc_struct_DelayedRemovalSeq *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid between begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)M_arc_struct_Seq_setSize_int_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_DelayedRemovalSeq[] {
	(void *) M_arc_struct_Seq_hashCode_R_int,
	(void *) M_arc_struct_Seq_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_Seq_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_Seq_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_Seq_each_arc_func_Cons,
	(void *) M_arc_struct_Seq_asMap_arc_func_Func_arc_func_Func_R_arc_struct_ObjectMap,
	(void *) M_arc_struct_Seq_groupBy_arc_func_Func_R_arc_struct_ObjectMap,
	(void *) M_arc_struct_Seq_groupByCount_arc_func_Func_R_arc_struct_ObjectIntMap,
	(void *) M_arc_struct_Seq_asMap_arc_func_Func_R_arc_struct_ObjectMap,
	(void *) M_arc_struct_Seq_asSet_R_arc_struct_ObjectSet,
	(void *) M_arc_struct_Seq_copy_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_list_R_java_util_ArrayList,
	(void *) M_arc_struct_Seq_sumf_arc_func_Floatf_R_float,
	(void *) M_arc_struct_Seq_sum_arc_func_Intf_R_int,
	(void *) M_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons,
	(void *) M_arc_struct_Seq_replace_arc_func_Func,
	(void *) M_arc_struct_Seq_flatten_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_flatMap_arc_func_Func_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_mapInt_arc_func_Intf_R_arc_struct_IntSeq,
	(void *) M_arc_struct_Seq_mapInt_arc_func_Intf_arc_func_Boolf_R_arc_struct_IntSeq,
	(void *) M_arc_struct_Seq_mapFloat_arc_func_Floatf_R_arc_struct_FloatSeq,
	(void *) M_arc_struct_Seq_reduce_java_lang_Object_arc_func_Func2_R_java_lang_Object,
	(void *) M_arc_struct_Seq_allMatch_arc_func_Boolf_R_boolean,
	(void *) M_arc_struct_Seq_contains_arc_func_Boolf_R_boolean,
	(void *) M_arc_struct_Seq_min_java_util_Comparator_R_java_lang_Object,
	(void *) M_arc_struct_Seq_max_java_util_Comparator_R_java_lang_Object,
	(void *) M_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object,
	(void *) M_arc_struct_Seq_min_arc_func_Boolf_java_util_Comparator_R_java_lang_Object,
	(void *) M_arc_struct_Seq_min_arc_func_Floatf_R_java_lang_Object,
	(void *) M_arc_struct_Seq_max_arc_func_Floatf_R_java_lang_Object,
	(void *) M_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object,
	(void *) M_arc_struct_Seq_with_arc_func_Cons_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_addUnique_java_lang_Object_R_boolean,
	(void *) M_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_add_java_lang_Object_java_lang_Object_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_add_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_add_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_add_Array1_java_lang_Object_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_addAll_arc_struct_Seq_int_int_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_addAll_Array1_java_lang_Object_int_int_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_addAll_java_lang_Iterable_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_set_arc_struct_Seq,
	(void *) M_arc_struct_Seq_set_Array1_java_lang_Object,
	(void *) M_arc_struct_Seq_getFrac_float_R_java_lang_Object,
	(void *) M_arc_struct_Seq_get_int_R_java_lang_Object,
	(void *) M_arc_struct_DelayedRemovalSeq_set_int_java_lang_Object,
	(void *) M_arc_struct_DelayedRemovalSeq_insert_int_java_lang_Object,
	(void *) M_arc_struct_DelayedRemovalSeq_swap_int_int,
	(void *) M_arc_struct_Seq_replace_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_arc_struct_Seq_containsAll_arc_struct_Seq_R_boolean,
	(void *) M_arc_struct_Seq_containsAll_arc_struct_Seq_boolean_R_boolean,
	(void *) M_arc_struct_Seq_contains_java_lang_Object_R_boolean,
	(void *) M_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean,
	(void *) M_arc_struct_Seq_indexOf_java_lang_Object_R_int,
	(void *) M_arc_struct_Seq_indexOf_java_lang_Object_boolean_R_int,
	(void *) M_arc_struct_Seq_indexOf_arc_func_Boolf_R_int,
	(void *) M_arc_struct_Seq_lastIndexOf_java_lang_Object_boolean_R_int,
	(void *) M_arc_struct_Seq_remove_java_lang_Object_R_boolean,
	(void *) M_arc_struct_Seq_remove_arc_func_Boolf_R_boolean,
	(void *) M_arc_struct_DelayedRemovalSeq_remove_java_lang_Object_boolean_R_boolean,
	(void *) M_arc_struct_DelayedRemovalSeq_remove_int_R_java_lang_Object,
	(void *) M_arc_struct_DelayedRemovalSeq_removeRange_int_int,
	(void *) M_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_removeAll_arc_struct_Seq_R_boolean,
	(void *) M_arc_struct_Seq_removeAll_arc_struct_Seq_boolean_R_boolean,
	(void *) M_arc_struct_Seq_pop_arc_func_Prov_R_java_lang_Object,
	(void *) M_arc_struct_DelayedRemovalSeq_pop_R_java_lang_Object,
	(void *) M_arc_struct_Seq_peek_R_java_lang_Object,
	(void *) M_arc_struct_Seq_first_R_java_lang_Object,
	(void *) M_arc_struct_Seq_firstOpt_R_java_lang_Object,
	(void *) M_arc_struct_Seq_isEmpty_R_boolean,
	(void *) M_arc_struct_Seq_any_R_boolean,
	(void *) M_arc_struct_DelayedRemovalSeq_clear_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_shrink_R_Array1_java_lang_Object,
	(void *) M_arc_struct_Seq_ensureCapacity_int_R_Array1_java_lang_Object,
	(void *) M_arc_struct_DelayedRemovalSeq_setSize_int_R_Array1_java_lang_Object,
	(void *) M_arc_struct_Seq_resize_int_R_Array1_java_lang_Object,
	(void *) M_arc_struct_DelayedRemovalSeq_sort_R_arc_struct_Seq,
	(void *) M_arc_struct_DelayedRemovalSeq_sort_java_util_Comparator_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_sortComparing_arc_func_Func_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_distinct_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_as_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_retainAll_arc_func_Boolf_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_count_arc_func_Boolf_R_int,
	(void *) M_arc_struct_Seq_selectRanked_java_util_Comparator_int_R_java_lang_Object,
	(void *) M_arc_struct_Seq_selectRankedIndex_java_util_Comparator_int_R_int,
	(void *) M_arc_struct_DelayedRemovalSeq_reverse_R_arc_struct_Seq,
	(void *) M_arc_struct_DelayedRemovalSeq_shuffle_R_arc_struct_Seq,
	(void *) M_arc_struct_DelayedRemovalSeq_truncate_int,
	(void *) M_arc_struct_Seq_random_arc_math_Rand_R_java_lang_Object,
	(void *) M_arc_struct_Seq_random_R_java_lang_Object,
	(void *) M_arc_struct_Seq_random_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_Seq_toArray_R_Array1_java_lang_Object,
	(void *) M_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object,
	(void *) M_arc_struct_Seq_toString_java_lang_String_arc_func_Func_R_java_lang_String,
	(void *) M_arc_struct_Seq_toString_java_lang_String_R_java_lang_String,
	(void *) M_arc_struct_Seq_lambda$selectFrom$0_arc_func_Boolf_java_lang_Object,
	(void *) M_arc_struct_DelayedRemovalSeq_begin,
	(void *) M_arc_struct_DelayedRemovalSeq_end,
	(void *) M_arc_struct_DelayedRemovalSeq_removeIntern_int,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "each", "(Larc/func/Cons;)V" },
	{ "asMap", "(Larc/func/Func;Larc/func/Func;)Larc/struct/ObjectMap;" },
	{ "groupBy", "(Larc/func/Func;)Larc/struct/ObjectMap;" },
	{ "groupByCount", "(Larc/func/Func;)Larc/struct/ObjectIntMap;" },
	{ "asMap", "(Larc/func/Func;)Larc/struct/ObjectMap;" },
	{ "asSet", "()Larc/struct/ObjectSet;" },
	{ "copy", "()Larc/struct/Seq;" },
	{ "list", "()Ljava/util/ArrayList;" },
	{ "sumf", "(Larc/func/Floatf;)F" },
	{ "sum", "(Larc/func/Intf;)I" },
	{ "each", "(Larc/func/Boolf;Larc/func/Cons;)V" },
	{ "replace", "(Larc/func/Func;)V" },
	{ "flatten", "()Larc/struct/Seq;" },
	{ "flatMap", "(Larc/func/Func;)Larc/struct/Seq;" },
	{ "map", "(Larc/func/Func;)Larc/struct/Seq;" },
	{ "mapInt", "(Larc/func/Intf;)Larc/struct/IntSeq;" },
	{ "mapInt", "(Larc/func/Intf;Larc/func/Boolf;)Larc/struct/IntSeq;" },
	{ "mapFloat", "(Larc/func/Floatf;)Larc/struct/FloatSeq;" },
	{ "reduce", "(Ljava/lang/Object;Larc/func/Func2;)Ljava/lang/Object;" },
	{ "allMatch", "(Larc/func/Boolf;)Z" },
	{ "contains", "(Larc/func/Boolf;)Z" },
	{ "min", "(Ljava/util/Comparator;)Ljava/lang/Object;" },
	{ "max", "(Ljava/util/Comparator;)Ljava/lang/Object;" },
	{ "min", "(Larc/func/Boolf;Larc/func/Floatf;)Ljava/lang/Object;" },
	{ "min", "(Larc/func/Boolf;Ljava/util/Comparator;)Ljava/lang/Object;" },
	{ "min", "(Larc/func/Floatf;)Ljava/lang/Object;" },
	{ "max", "(Larc/func/Floatf;)Ljava/lang/Object;" },
	{ "find", "(Larc/func/Boolf;)Ljava/lang/Object;" },
	{ "with", "(Larc/func/Cons;)Larc/struct/Seq;" },
	{ "addUnique", "(Ljava/lang/Object;)Z" },
	{ "add", "(Ljava/lang/Object;)Larc/struct/Seq;" },
	{ "add", "(Ljava/lang/Object;Ljava/lang/Object;)Larc/struct/Seq;" },
	{ "add", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Larc/struct/Seq;" },
	{ "add", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Larc/struct/Seq;" },
	{ "add", "(Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "add", "([Ljava/lang/Object;)Larc/struct/Seq;" },
	{ "addAll", "(Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "addAll", "(Larc/struct/Seq;II)Larc/struct/Seq;" },
	{ "addAll", "([Ljava/lang/Object;)Larc/struct/Seq;" },
	{ "addAll", "([Ljava/lang/Object;II)Larc/struct/Seq;" },
	{ "addAll", "(Ljava/lang/Iterable;)Larc/struct/Seq;" },
	{ "set", "(Larc/struct/Seq;)V" },
	{ "set", "([Ljava/lang/Object;)V" },
	{ "getFrac", "(F)Ljava/lang/Object;" },
	{ "get", "(I)Ljava/lang/Object;" },
	{ "set", "(ILjava/lang/Object;)V" },
	{ "insert", "(ILjava/lang/Object;)V" },
	{ "swap", "(II)V" },
	{ "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "containsAll", "(Larc/struct/Seq;)Z" },
	{ "containsAll", "(Larc/struct/Seq;Z)Z" },
	{ "contains", "(Ljava/lang/Object;)Z" },
	{ "contains", "(Ljava/lang/Object;Z)Z" },
	{ "indexOf", "(Ljava/lang/Object;)I" },
	{ "indexOf", "(Ljava/lang/Object;Z)I" },
	{ "indexOf", "(Larc/func/Boolf;)I" },
	{ "lastIndexOf", "(Ljava/lang/Object;Z)I" },
	{ "remove", "(Ljava/lang/Object;)Z" },
	{ "remove", "(Larc/func/Boolf;)Z" },
	{ "remove", "(Ljava/lang/Object;Z)Z" },
	{ "remove", "(I)Ljava/lang/Object;" },
	{ "removeRange", "(II)V" },
	{ "removeAll", "(Larc/func/Boolf;)Larc/struct/Seq;" },
	{ "removeAll", "(Larc/struct/Seq;)Z" },
	{ "removeAll", "(Larc/struct/Seq;Z)Z" },
	{ "pop", "(Larc/func/Prov;)Ljava/lang/Object;" },
	{ "pop", "()Ljava/lang/Object;" },
	{ "peek", "()Ljava/lang/Object;" },
	{ "first", "()Ljava/lang/Object;" },
	{ "firstOpt", "()Ljava/lang/Object;" },
	{ "isEmpty", "()Z" },
	{ "any", "()Z" },
	{ "clear", "()Larc/struct/Seq;" },
	{ "shrink", "()[Ljava/lang/Object;" },
	{ "ensureCapacity", "(I)[Ljava/lang/Object;" },
	{ "setSize", "(I)[Ljava/lang/Object;" },
	{ "resize", "(I)[Ljava/lang/Object;" },
	{ "sort", "()Larc/struct/Seq;" },
	{ "sort", "(Ljava/util/Comparator;)Larc/struct/Seq;" },
	{ "sort", "(Larc/func/Floatf;)Larc/struct/Seq;" },
	{ "sortComparing", "(Larc/func/Func;)Larc/struct/Seq;" },
	{ "selectFrom", "(Larc/struct/Seq;Larc/func/Boolf;)Larc/struct/Seq;" },
	{ "distinct", "()Larc/struct/Seq;" },
	{ "as", "()Larc/struct/Seq;" },
	{ "select", "(Larc/func/Boolf;)Larc/struct/Seq;" },
	{ "retainAll", "(Larc/func/Boolf;)Larc/struct/Seq;" },
	{ "count", "(Larc/func/Boolf;)I" },
	{ "selectRanked", "(Ljava/util/Comparator;I)Ljava/lang/Object;" },
	{ "selectRankedIndex", "(Ljava/util/Comparator;I)I" },
	{ "reverse", "()Larc/struct/Seq;" },
	{ "shuffle", "()Larc/struct/Seq;" },
	{ "truncate", "(I)V" },
	{ "random", "(Larc/math/Rand;)Ljava/lang/Object;" },
	{ "random", "()Ljava/lang/Object;" },
	{ "random", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "toArray", "()[Ljava/lang/Object;" },
	{ "toArray", "(Ljava/lang/Class;)[Ljava/lang/Object;" },
	{ "toString", "(Ljava/lang/String;Larc/func/Func;)Ljava/lang/String;" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "lambda$selectFrom$0", "(Larc/func/Boolf;Ljava/lang/Object;)V" },
	{ "begin", "()V" },
	{ "end", "()V" },
	{ "removeIntern", "(I)V" },
};

static FieldMetadata fields[] {
	{ "iterating", &class_int, offsetof(arc_struct_DelayedRemovalSeq, F_iterating), "I", 2 },
	{ "remove", &class_arc_struct_IntSeq, offsetof(arc_struct_DelayedRemovalSeq, F_remove), "Larc/struct/IntSeq;", 18 },
	{ "clear", &class_int, offsetof(arc_struct_DelayedRemovalSeq, F_clear), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_DelayedRemovalSeq, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_DelayedRemovalSeq_arc_struct_Seq, 0, "(Larc/struct/Seq;)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_DelayedRemovalSeq_boolean_int_java_lang_Class, 0, "(ZILjava/lang/Class;)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_DelayedRemovalSeq_boolean_int, 0, "(ZI)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_DelayedRemovalSeq_boolean_Array1_java_lang_Object_int_int, 0, "(Z[Ljava/lang/Object;II)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_DelayedRemovalSeq_java_lang_Class, 0, "(Ljava/lang/Class;)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_DelayedRemovalSeq_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_DelayedRemovalSeq_Array1_java_lang_Object, 0, "([Ljava/lang/Object;)V", 1 },
	{ "with", (intptr_t) SM_arc_struct_DelayedRemovalSeq_with_Array1_java_lang_Object_R_arc_struct_DelayedRemovalSeq, 0, "([Ljava/lang/Object;)Larc/struct/DelayedRemovalSeq;", 137 },
	{ "begin", (intptr_t) M_arc_struct_DelayedRemovalSeq_begin, VTABLE_arc_struct_DelayedRemovalSeq_begin, "()V", 1 },
	{ "end", (intptr_t) M_arc_struct_DelayedRemovalSeq_end, VTABLE_arc_struct_DelayedRemovalSeq_end, "()V", 1 },
	{ "removeIntern", (intptr_t) M_arc_struct_DelayedRemovalSeq_removeIntern_int, VTABLE_arc_struct_DelayedRemovalSeq_removeIntern_int, "(I)V", 2 },
	{ "remove", (intptr_t) M_arc_struct_DelayedRemovalSeq_remove_java_lang_Object_boolean_R_boolean, VTABLE_arc_struct_DelayedRemovalSeq_remove_java_lang_Object_boolean_R_boolean, "(Ljava/lang/Object;Z)Z", 1 },
	{ "remove", (intptr_t) M_arc_struct_DelayedRemovalSeq_remove_int_R_java_lang_Object, VTABLE_arc_struct_DelayedRemovalSeq_remove_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "removeRange", (intptr_t) M_arc_struct_DelayedRemovalSeq_removeRange_int_int, VTABLE_arc_struct_DelayedRemovalSeq_removeRange_int_int, "(II)V", 1 },
	{ "clear", (intptr_t) M_arc_struct_DelayedRemovalSeq_clear_R_arc_struct_Seq, VTABLE_arc_struct_DelayedRemovalSeq_clear_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "set", (intptr_t) M_arc_struct_DelayedRemovalSeq_set_int_java_lang_Object, VTABLE_arc_struct_DelayedRemovalSeq_set_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "insert", (intptr_t) M_arc_struct_DelayedRemovalSeq_insert_int_java_lang_Object, VTABLE_arc_struct_DelayedRemovalSeq_insert_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "swap", (intptr_t) M_arc_struct_DelayedRemovalSeq_swap_int_int, VTABLE_arc_struct_DelayedRemovalSeq_swap_int_int, "(II)V", 1 },
	{ "pop", (intptr_t) M_arc_struct_DelayedRemovalSeq_pop_R_java_lang_Object, VTABLE_arc_struct_DelayedRemovalSeq_pop_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "sort", (intptr_t) M_arc_struct_DelayedRemovalSeq_sort_R_arc_struct_Seq, VTABLE_arc_struct_DelayedRemovalSeq_sort_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "sort", (intptr_t) M_arc_struct_DelayedRemovalSeq_sort_java_util_Comparator_R_arc_struct_Seq, VTABLE_arc_struct_DelayedRemovalSeq_sort_java_util_Comparator_R_arc_struct_Seq, "(Ljava/util/Comparator;)Larc/struct/Seq;", 1 },
	{ "reverse", (intptr_t) M_arc_struct_DelayedRemovalSeq_reverse_R_arc_struct_Seq, VTABLE_arc_struct_DelayedRemovalSeq_reverse_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "shuffle", (intptr_t) M_arc_struct_DelayedRemovalSeq_shuffle_R_arc_struct_Seq, VTABLE_arc_struct_DelayedRemovalSeq_shuffle_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "truncate", (intptr_t) M_arc_struct_DelayedRemovalSeq_truncate_int, VTABLE_arc_struct_DelayedRemovalSeq_truncate_int, "(I)V", 1 },
	{ "setSize", (intptr_t) M_arc_struct_DelayedRemovalSeq_setSize_int_R_Array1_java_lang_Object, VTABLE_arc_struct_DelayedRemovalSeq_setSize_int_R_Array1_java_lang_Object, "(I)[Ljava/lang/Object;", 1 },
};

Class class_arc_struct_DelayedRemovalSeq{
		.nativeName = (intptr_t) "arc/struct/DelayedRemovalSeq",
		.parentClass = (intptr_t) &class_arc_struct_Seq,
		.size = sizeof(arc_struct_DelayedRemovalSeq),
		.classVtable = (intptr_t) vtable_arc_struct_DelayedRemovalSeq,
		.staticInitializer = (intptr_t) clinit_arc_struct_DelayedRemovalSeq,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_DelayedRemovalSeq,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 26,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 117,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_DelayedRemovalSeq = registerClass(&class_arc_struct_DelayedRemovalSeq);

}
