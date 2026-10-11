#include "arc/struct/SnapshotSeq.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/util/Comparator.h"
#include "arc/struct/Seq.h"
#include "java/lang/Class.h"
#include "arc/struct/SnapshotSeq.h"
#include "java/lang/Iterable.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_struct_SnapshotSeq(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_SnapshotSeq *) object;
	if (self->F_snapshot)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_snapshot)->clazz)->markFunction)((jobject) self->F_snapshot, mark, depth + 1);
	if (self->F_recycled)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_recycled)->clazz)->markFunction)((jobject) self->F_recycled, mark, depth + 1);
}

void clinit_arc_struct_SnapshotSeq(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_struct_Seq(ctx);
}

void init_arc_struct_SnapshotSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_SnapshotSeq(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(31);
	init_arc_struct_Seq(ctx, (frame[0].o));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_SnapshotSeq_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_SnapshotSeq(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	init_arc_struct_Seq_arc_struct_Seq(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_SnapshotSeq_boolean_int_java_lang_Class(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_SnapshotSeq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(39);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].o));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_SnapshotSeq_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_SnapshotSeq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(43);
	init_arc_struct_Seq_boolean_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_SnapshotSeq_boolean_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_SnapshotSeq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(47);
	init_arc_struct_Seq_boolean_Array1_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_SnapshotSeq_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_SnapshotSeq(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	init_arc_struct_Seq_java_lang_Class(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_SnapshotSeq_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_SnapshotSeq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(55);
	init_arc_struct_Seq_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_SnapshotSeq_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_SnapshotSeq(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(59);
	init_arc_struct_Seq_Array1_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_struct_SnapshotSeq_with_Array1_java_lang_Object_R_arc_struct_SnapshotSeq(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:with", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_SnapshotSeq(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(64);
	clinit_arc_struct_SnapshotSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_SnapshotSeq);
	init_arc_struct_SnapshotSeq_Array1_java_lang_Object(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:begin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	M_arc_struct_SnapshotSeq_modified(ctx, (frame[0].o));
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	((arc_struct_SnapshotSeq *) NULL_CHECK(sp[0].o))->F_snapshot = (jref) sp[1].o;
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	((arc_struct_SnapshotSeq *) NULL_CHECK(sp[0].o))->F_snapshots = (((jint)((arc_struct_SnapshotSeq *) NULL_CHECK(sp[0].o))->F_snapshots) + (jint(1)));
	LINE_NUMBER(72);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_struct_SnapshotSeq_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:end", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), (((jint)((arc_struct_SnapshotSeq *) NULL_CHECK((frame[0].o)))->F_snapshots) - (jint(1))));
	((arc_struct_SnapshotSeq *) NULL_CHECK(sp[0].o))->F_snapshots = temp0;
	LINE_NUMBER(78);
	sp[0].o = (jobject)((arc_struct_SnapshotSeq *) NULL_CHECK((frame[0].o)))->F_snapshot;
	if (sp[0].o != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((arc_struct_SnapshotSeq *) NULL_CHECK((frame[0].o)))->F_snapshot;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	if (((jint)((arc_struct_SnapshotSeq *) NULL_CHECK((frame[0].o)))->F_snapshots) != 0) goto label_3;
	}
	{
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_SnapshotSeq *) NULL_CHECK((frame[0].o)))->F_snapshot;
	((arc_struct_SnapshotSeq *) NULL_CHECK(sp[0].o))->F_recycled = (jref) sp[1].o;
	LINE_NUMBER(82);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((arc_struct_SnapshotSeq *) NULL_CHECK((frame[0].o)))->F_recycled;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_7:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((arc_struct_SnapshotSeq *) NULL_CHECK((frame[0].o)))->F_recycled;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (jobject(nullptr));
	LINE_NUMBER(82);
	INST_IINC(1, 1);
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(85);
	((arc_struct_SnapshotSeq *) NULL_CHECK((frame[0].o)))->F_snapshot = (jref) (jobject(nullptr));
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_SnapshotSeq_modified(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:modified", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((arc_struct_SnapshotSeq *) NULL_CHECK((frame[0].o)))->F_snapshot;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_struct_SnapshotSeq *) NULL_CHECK((frame[0].o)))->F_snapshot;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o == sp[1].o) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((arc_struct_SnapshotSeq *) NULL_CHECK((frame[0].o)))->F_recycled;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_struct_SnapshotSeq *) NULL_CHECK((frame[0].o)))->F_recycled;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) < ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_struct_SnapshotSeq *) NULL_CHECK((frame[0].o)))->F_recycled;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_SnapshotSeq *) NULL_CHECK((frame[0].o)))->F_recycled;
	((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(94);
	((arc_struct_SnapshotSeq *) NULL_CHECK((frame[0].o)))->F_recycled = (jref) (jobject(nullptr));
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_resize_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_resize_int_R_Array1_java_lang_Object])(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	}
label_7:;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_SnapshotSeq_set_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(100);
	M_arc_struct_SnapshotSeq_modified(ctx, (frame[0].o));
	LINE_NUMBER(101);
	M_arc_struct_Seq_set_int_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_SnapshotSeq_insert_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(105);
	M_arc_struct_SnapshotSeq_modified(ctx, (frame[0].o));
	LINE_NUMBER(106);
	M_arc_struct_Seq_insert_int_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_SnapshotSeq_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:swap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(110);
	M_arc_struct_SnapshotSeq_modified(ctx, (frame[0].o));
	LINE_NUMBER(111);
	M_arc_struct_Seq_swap_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_SnapshotSeq_remove_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(115);
	M_arc_struct_SnapshotSeq_modified(ctx, (frame[0].o));
	LINE_NUMBER(116);
	jint temp0 = (jint)M_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_SnapshotSeq_remove_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(120);
	M_arc_struct_SnapshotSeq_modified(ctx, (frame[0].o));
	LINE_NUMBER(121);
	sp[0].o = (jobject)M_arc_struct_Seq_remove_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_struct_SnapshotSeq_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:removeRange", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(125);
	M_arc_struct_SnapshotSeq_modified(ctx, (frame[0].o));
	LINE_NUMBER(126);
	M_arc_struct_Seq_removeRange_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_SnapshotSeq_removeAll_arc_struct_Seq_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:removeAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(130);
	M_arc_struct_SnapshotSeq_modified(ctx, (frame[0].o));
	LINE_NUMBER(131);
	jint temp0 = (jint)M_arc_struct_Seq_removeAll_arc_struct_Seq_boolean_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_SnapshotSeq_pop_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:pop", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(135);
	M_arc_struct_SnapshotSeq_modified(ctx, (frame[0].o));
	LINE_NUMBER(136);
	sp[0].o = (jobject)M_arc_struct_Seq_pop_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_SnapshotSeq_clear_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(140);
	M_arc_struct_SnapshotSeq_modified(ctx, (frame[0].o));
	LINE_NUMBER(141);
	sp[0].o = (jobject)M_arc_struct_Seq_clear_R_arc_struct_Seq(ctx, (frame[0].o));
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_SnapshotSeq_sort_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:sort", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(146);
	M_arc_struct_SnapshotSeq_modified(ctx, (frame[0].o));
	LINE_NUMBER(147);
	sp[0].o = (jobject)M_arc_struct_Seq_sort_R_arc_struct_Seq(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_SnapshotSeq_sort_java_util_Comparator_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(151);
	M_arc_struct_SnapshotSeq_modified(ctx, (frame[0].o));
	LINE_NUMBER(152);
	sp[0].o = (jobject)M_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_SnapshotSeq_reverse_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:reverse", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	M_arc_struct_SnapshotSeq_modified(ctx, (frame[0].o));
	LINE_NUMBER(157);
	sp[0].o = (jobject)M_arc_struct_Seq_reverse_R_arc_struct_Seq(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_SnapshotSeq_shuffle_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:shuffle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(161);
	M_arc_struct_SnapshotSeq_modified(ctx, (frame[0].o));
	LINE_NUMBER(162);
	sp[0].o = (jobject)M_arc_struct_Seq_shuffle_R_arc_struct_Seq(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_struct_SnapshotSeq_truncate_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:truncate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(166);
	M_arc_struct_SnapshotSeq_modified(ctx, (frame[0].o));
	LINE_NUMBER(167);
	M_arc_struct_Seq_truncate_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_SnapshotSeq_setSize_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/SnapshotSeq:setSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(171);
	M_arc_struct_SnapshotSeq_modified(ctx, (frame[0].o));
	LINE_NUMBER(172);
	sp[0].o = (jobject)M_arc_struct_Seq_setSize_int_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_SnapshotSeq[] {
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
	(void *) M_arc_struct_SnapshotSeq_set_int_java_lang_Object,
	(void *) M_arc_struct_SnapshotSeq_insert_int_java_lang_Object,
	(void *) M_arc_struct_SnapshotSeq_swap_int_int,
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
	(void *) M_arc_struct_SnapshotSeq_remove_java_lang_Object_boolean_R_boolean,
	(void *) M_arc_struct_SnapshotSeq_remove_int_R_java_lang_Object,
	(void *) M_arc_struct_SnapshotSeq_removeRange_int_int,
	(void *) M_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_removeAll_arc_struct_Seq_R_boolean,
	(void *) M_arc_struct_SnapshotSeq_removeAll_arc_struct_Seq_boolean_R_boolean,
	(void *) M_arc_struct_Seq_pop_arc_func_Prov_R_java_lang_Object,
	(void *) M_arc_struct_SnapshotSeq_pop_R_java_lang_Object,
	(void *) M_arc_struct_Seq_peek_R_java_lang_Object,
	(void *) M_arc_struct_Seq_first_R_java_lang_Object,
	(void *) M_arc_struct_Seq_firstOpt_R_java_lang_Object,
	(void *) M_arc_struct_Seq_isEmpty_R_boolean,
	(void *) M_arc_struct_Seq_any_R_boolean,
	(void *) M_arc_struct_SnapshotSeq_clear_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_shrink_R_Array1_java_lang_Object,
	(void *) M_arc_struct_Seq_ensureCapacity_int_R_Array1_java_lang_Object,
	(void *) M_arc_struct_SnapshotSeq_setSize_int_R_Array1_java_lang_Object,
	(void *) M_arc_struct_Seq_resize_int_R_Array1_java_lang_Object,
	(void *) M_arc_struct_SnapshotSeq_sort_R_arc_struct_Seq,
	(void *) M_arc_struct_SnapshotSeq_sort_java_util_Comparator_R_arc_struct_Seq,
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
	(void *) M_arc_struct_SnapshotSeq_reverse_R_arc_struct_Seq,
	(void *) M_arc_struct_SnapshotSeq_shuffle_R_arc_struct_Seq,
	(void *) M_arc_struct_SnapshotSeq_truncate_int,
	(void *) M_arc_struct_Seq_random_arc_math_Rand_R_java_lang_Object,
	(void *) M_arc_struct_Seq_random_R_java_lang_Object,
	(void *) M_arc_struct_Seq_random_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_Seq_toArray_R_Array1_java_lang_Object,
	(void *) M_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object,
	(void *) M_arc_struct_Seq_toString_java_lang_String_arc_func_Func_R_java_lang_String,
	(void *) M_arc_struct_Seq_toString_java_lang_String_R_java_lang_String,
	(void *) M_arc_struct_Seq_lambda$selectFrom$0_arc_func_Boolf_java_lang_Object,
	(void *) M_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object,
	(void *) M_arc_struct_SnapshotSeq_end,
	(void *) M_arc_struct_SnapshotSeq_modified,
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
	{ "begin", "()[Ljava/lang/Object;" },
	{ "end", "()V" },
	{ "modified", "()V" },
};

static FieldMetadata fields[] {
	{ "snapshot", getArrayClass(&class_java_lang_Object, 1), offsetof(arc_struct_SnapshotSeq, F_snapshot), "[Ljava/lang/Object;", 2 },
	{ "recycled", getArrayClass(&class_java_lang_Object, 1), offsetof(arc_struct_SnapshotSeq, F_recycled), "[Ljava/lang/Object;", 2 },
	{ "snapshots", &class_int, offsetof(arc_struct_SnapshotSeq, F_snapshots), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_SnapshotSeq, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_SnapshotSeq_arc_struct_Seq, 0, "(Larc/struct/Seq;)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_SnapshotSeq_boolean_int_java_lang_Class, 0, "(ZILjava/lang/Class;)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_SnapshotSeq_boolean_int, 0, "(ZI)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_SnapshotSeq_boolean_Array1_java_lang_Object_int_int, 0, "(Z[Ljava/lang/Object;II)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_SnapshotSeq_java_lang_Class, 0, "(Ljava/lang/Class;)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_SnapshotSeq_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_SnapshotSeq_Array1_java_lang_Object, 0, "([Ljava/lang/Object;)V", 1 },
	{ "with", (intptr_t) SM_arc_struct_SnapshotSeq_with_Array1_java_lang_Object_R_arc_struct_SnapshotSeq, 0, "([Ljava/lang/Object;)Larc/struct/SnapshotSeq;", 137 },
	{ "begin", (intptr_t) M_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object, VTABLE_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "end", (intptr_t) M_arc_struct_SnapshotSeq_end, VTABLE_arc_struct_SnapshotSeq_end, "()V", 1 },
	{ "modified", (intptr_t) M_arc_struct_SnapshotSeq_modified, VTABLE_arc_struct_SnapshotSeq_modified, "()V", 2 },
	{ "set", (intptr_t) M_arc_struct_SnapshotSeq_set_int_java_lang_Object, VTABLE_arc_struct_SnapshotSeq_set_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "insert", (intptr_t) M_arc_struct_SnapshotSeq_insert_int_java_lang_Object, VTABLE_arc_struct_SnapshotSeq_insert_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "swap", (intptr_t) M_arc_struct_SnapshotSeq_swap_int_int, VTABLE_arc_struct_SnapshotSeq_swap_int_int, "(II)V", 1 },
	{ "remove", (intptr_t) M_arc_struct_SnapshotSeq_remove_java_lang_Object_boolean_R_boolean, VTABLE_arc_struct_SnapshotSeq_remove_java_lang_Object_boolean_R_boolean, "(Ljava/lang/Object;Z)Z", 1 },
	{ "remove", (intptr_t) M_arc_struct_SnapshotSeq_remove_int_R_java_lang_Object, VTABLE_arc_struct_SnapshotSeq_remove_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "removeRange", (intptr_t) M_arc_struct_SnapshotSeq_removeRange_int_int, VTABLE_arc_struct_SnapshotSeq_removeRange_int_int, "(II)V", 1 },
	{ "removeAll", (intptr_t) M_arc_struct_SnapshotSeq_removeAll_arc_struct_Seq_boolean_R_boolean, VTABLE_arc_struct_SnapshotSeq_removeAll_arc_struct_Seq_boolean_R_boolean, "(Larc/struct/Seq;Z)Z", 1 },
	{ "pop", (intptr_t) M_arc_struct_SnapshotSeq_pop_R_java_lang_Object, VTABLE_arc_struct_SnapshotSeq_pop_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "clear", (intptr_t) M_arc_struct_SnapshotSeq_clear_R_arc_struct_Seq, VTABLE_arc_struct_SnapshotSeq_clear_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "sort", (intptr_t) M_arc_struct_SnapshotSeq_sort_R_arc_struct_Seq, VTABLE_arc_struct_SnapshotSeq_sort_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "sort", (intptr_t) M_arc_struct_SnapshotSeq_sort_java_util_Comparator_R_arc_struct_Seq, VTABLE_arc_struct_SnapshotSeq_sort_java_util_Comparator_R_arc_struct_Seq, "(Ljava/util/Comparator;)Larc/struct/Seq;", 1 },
	{ "reverse", (intptr_t) M_arc_struct_SnapshotSeq_reverse_R_arc_struct_Seq, VTABLE_arc_struct_SnapshotSeq_reverse_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "shuffle", (intptr_t) M_arc_struct_SnapshotSeq_shuffle_R_arc_struct_Seq, VTABLE_arc_struct_SnapshotSeq_shuffle_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "truncate", (intptr_t) M_arc_struct_SnapshotSeq_truncate_int, VTABLE_arc_struct_SnapshotSeq_truncate_int, "(I)V", 1 },
	{ "setSize", (intptr_t) M_arc_struct_SnapshotSeq_setSize_int_R_Array1_java_lang_Object, VTABLE_arc_struct_SnapshotSeq_setSize_int_R_Array1_java_lang_Object, "(I)[Ljava/lang/Object;", 1 },
};

Class class_arc_struct_SnapshotSeq{
		.nativeName = (intptr_t) "arc/struct/SnapshotSeq",
		.parentClass = (intptr_t) &class_arc_struct_Seq,
		.size = sizeof(arc_struct_SnapshotSeq),
		.classVtable = (intptr_t) vtable_arc_struct_SnapshotSeq,
		.staticInitializer = (intptr_t) clinit_arc_struct_SnapshotSeq,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_SnapshotSeq,
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
		.methodCount = 27,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 117,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_SnapshotSeq = registerClass(&class_arc_struct_SnapshotSeq);

}
