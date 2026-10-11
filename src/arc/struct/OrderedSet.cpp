#include "arc/struct/OrderedSet.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "arc/struct/OrderedSet_OrderedSetIterator.h"
#include "java/lang/String.h"
#include "java/util/Iterator.h"
#include "arc/struct/Seq.h"
#include "arc/struct/ObjectSet_ObjectSetIterator.h"
#include "arc/struct/ObjectSet.h"
#include "arc/struct/OrderedSet.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_arc_struct_OrderedSet(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_struct_ObjectSet(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_struct_OrderedSet *) object;
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
	if (self->F_iterator1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator1)->clazz)->markFunction)((jobject) self->F_iterator1, mark, depth + 1);
	if (self->F_iterator2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator2)->clazz)->markFunction)((jobject) self->F_iterator2, mark, depth + 1);
}

void clinit_arc_struct_OrderedSet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_struct_ObjectSet(ctx);
}

void init_arc_struct_OrderedSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_OrderedSet(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_arc_struct_ObjectSet(ctx, (frame[0].o));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_struct_OrderedSet *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_OrderedSet_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_OrderedSet(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(25);
	init_arc_struct_ObjectSet_int_float(ctx, (frame[0].o), (frame[1].i), (frame[2].f));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (frame[1].i));
	((arc_struct_OrderedSet *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_OrderedSet_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_OrderedSet(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(30);
	init_arc_struct_ObjectSet_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (frame[1].i));
	((arc_struct_OrderedSet *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_OrderedSet_arc_struct_OrderedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_OrderedSet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	init_arc_struct_ObjectSet_arc_struct_ObjectSet(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	sp[2].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[1].o)))->F_items;
	init_arc_struct_Seq_arc_struct_Seq(ctx, sp[1].o, sp[2].o);
	((arc_struct_OrderedSet *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_OrderedSet_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	jint temp0 = (jint)M_arc_struct_ObjectSet_add_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_OrderedSet_add_java_lang_Object_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(50);
	jint temp0 = (jint)M_arc_struct_ObjectSet_add_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	frame[3].i = temp0;
	LINE_NUMBER(52);
	if ((frame[3].i) == (frame[2].i)) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, sp[1].o, (frame[3].i));
	((func_arc_struct_Seq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_insert_int_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	((func_arc_struct_Seq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_insert_int_java_lang_Object])(ctx, sp[0].o, (frame[2].i), (frame[1].o));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_arc_struct_OrderedSet_addAll_arc_struct_OrderedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:addAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	((func_arc_struct_OrderedSet_ensureCapacity_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_OrderedSet_ensureCapacity_int])(ctx, (frame[0].o), ((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(61);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[1].o)))->F_items;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(62);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[1].o)))->F_items;
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(63);
	jint temp0 = (jint)((func_arc_struct_OrderedSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_OrderedSet_add_java_lang_Object_R_boolean])(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))));
	LINE_NUMBER(62);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_OrderedSet_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:ensureCapacity", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(67);
	M_arc_struct_ObjectSet_ensureCapacity_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(68);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_arc_struct_Seq_ensureCapacity_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_ensureCapacity_int_R_Array1_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_OrderedSet_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(72);
	jint temp0 = (jint)M_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_OrderedSet_removeIndex_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:removeIndex", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(79);
	jint temp0 = (jint)M_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_OrderedSet_alter_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:alter", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(93);
	jint temp0 = (jint)((func_arc_struct_OrderedSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_OrderedSet_contains_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(94);
	jint temp0 = (jint)M_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(95);
	jint temp0 = (jint)M_arc_struct_ObjectSet_add_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(96);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[1].o, (frame[1].o), (jint(0)));
	((func_arc_struct_Seq_set_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_set_int_java_lang_Object])(ctx, sp[0].o, temp1, (frame[2].o));
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_OrderedSet_alterIndex_int_java_lang_Object_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:alterIndex", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(109);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) >= ((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_struct_OrderedSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_OrderedSet_contains_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[1].i));
	jint temp0 = (jint)M_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(111);
	jint temp1 = (jint)M_arc_struct_ObjectSet_add_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(112);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	((func_arc_struct_Seq_set_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_set_int_java_lang_Object])(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_arc_struct_OrderedSet_clear_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:clear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(118);
	M_arc_struct_ObjectSet_clear_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_OrderedSet_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(123);
	M_arc_struct_ObjectSet_clear(ctx, (frame[0].o));
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_OrderedSet_orderedItems_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:orderedItems", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_OrderedSet_first_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:first", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_OrderedSet_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:hashCode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(135);
	frame[1].i = ((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(136);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(137);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(138);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(139);
	if ((frame[5].o) == nullptr) goto label_8;
	}
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[5].o));
	frame[1].i = (temp0 + temp1);
	}
label_8:;
	{
	LINE_NUMBER(137);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_OrderedSet_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:equals", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(145);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_ObjectSet)) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(146);
	frame[2].o = (checkCast(ctx, &class_arc_struct_ObjectSet, (frame[1].o)));
	LINE_NUMBER(147);
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[2].o)))->F_size) == ((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(149);
	frame[4].i = (jint(0));
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	frame[5].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(150);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) == nullptr) goto label_9;
	}
	{
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 != 0) goto label_9;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(149);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_OrderedSet_iterator_R_arc_struct_OrderedSet$OrderedSetIterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:iterator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(156);
	sp[0].o = frame[0].o;
	clinit_arc_struct_OrderedSet$OrderedSetIterator(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_OrderedSet$OrderedSetIterator);
	init_arc_struct_OrderedSet$OrderedSetIterator_arc_struct_OrderedSet(ctx, sp[1].o, (frame[0].o));
	((arc_struct_OrderedSet *) NULL_CHECK(sp[0].o))->F_iterator1 = (jref) sp[1].o;
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	clinit_arc_struct_OrderedSet$OrderedSetIterator(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_OrderedSet$OrderedSetIterator);
	init_arc_struct_OrderedSet$OrderedSetIterator_arc_struct_OrderedSet(ctx, sp[1].o, (frame[0].o));
	((arc_struct_OrderedSet *) NULL_CHECK(sp[0].o))->F_iterator2 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	if (((jint)((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_4;
	}
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((func_arc_struct_OrderedSet$OrderedSetIterator_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet$OrderedSetIterator_reset])(ctx, sp[0].o);
	LINE_NUMBER(161);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(162);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(163);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((func_arc_struct_OrderedSet$OrderedSetIterator_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet$OrderedSetIterator_reset])(ctx, sp[0].o);
	LINE_NUMBER(166);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(167);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(168);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_iterator2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_OrderedSet_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(172);
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"{}"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(174);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[2].o = sp[0].o;
	LINE_NUMBER(175);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (123));
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	LINE_NUMBER(177);
	frame[3].i = (jint(1));
	}
label_6:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(179);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	LINE_NUMBER(177);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (125));
	LINE_NUMBER(182);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_OrderedSet_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_arc_struct_Seq_toString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_toString_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_struct_OrderedSet_with_Array1_java_lang_Object_R_arc_struct_OrderedSet(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:with", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_OrderedSet(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(230);
	clinit_arc_struct_OrderedSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_OrderedSet);
	init_arc_struct_OrderedSet(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(231);
	jint temp0 = (jint)((func_arc_struct_OrderedSet_addAll_Array1_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_OrderedSet_addAll_Array1_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_OrderedSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((func_arc_struct_OrderedSet_iterator_R_arc_struct_OrderedSet$OrderedSetIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_OrderedSet_iterator_R_arc_struct_OrderedSet$OrderedSetIterator])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_OrderedSet_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((func_arc_struct_OrderedSet_iterator_R_arc_struct_OrderedSet$OrderedSetIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_OrderedSet_iterator_R_arc_struct_OrderedSet$OrderedSetIterator])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_OrderedSet[] {
	(void *) M_arc_struct_OrderedSet_hashCode_R_int,
	(void *) M_arc_struct_OrderedSet_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_OrderedSet_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_OrderedSet_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_ObjectSet_each_arc_func_Cons,
	(void *) M_arc_struct_ObjectSet_copy_R_arc_struct_ObjectSet,
	(void *) M_arc_struct_ObjectSet_select_arc_func_Boolf_R_arc_struct_ObjectSet,
	(void *) M_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq,
	(void *) M_arc_struct_ObjectSet_find_arc_func_Boolf_R_java_lang_Object,
	(void *) M_arc_struct_ObjectSet_place_java_lang_Object_R_int,
	(void *) M_arc_struct_ObjectSet_locateKey_java_lang_Object_R_int,
	(void *) M_arc_struct_ObjectSet_any_R_boolean,
	(void *) M_arc_struct_OrderedSet_add_java_lang_Object_R_boolean,
	(void *) M_arc_struct_ObjectSet_addAll_arc_struct_Seq,
	(void *) M_arc_struct_ObjectSet_addAll_arc_struct_Seq_int_int,
	(void *) M_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_R_boolean,
	(void *) M_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean,
	(void *) M_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet,
	(void *) M_arc_struct_ObjectSet_addResize_java_lang_Object,
	(void *) M_arc_struct_ObjectSet_removeAll_Array1_java_lang_Object_int_int,
	(void *) M_arc_struct_ObjectSet_removeAll_Array1_java_lang_Object,
	(void *) M_arc_struct_ObjectSet_removeAll_arc_struct_Seq,
	(void *) M_arc_struct_OrderedSet_remove_java_lang_Object_R_boolean,
	(void *) M_arc_struct_ObjectSet_notEmpty_R_boolean,
	(void *) M_arc_struct_ObjectSet_isEmpty_R_boolean,
	(void *) M_arc_struct_ObjectSet_shrink_int,
	(void *) M_arc_struct_OrderedSet_clear_int,
	(void *) M_arc_struct_OrderedSet_clear,
	(void *) M_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean,
	(void *) M_arc_struct_ObjectSet_get_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_OrderedSet_first_R_java_lang_Object,
	(void *) M_arc_struct_OrderedSet_ensureCapacity_int,
	(void *) M_arc_struct_ObjectSet_resize_int,
	(void *) M_arc_struct_OrderedSet_toString_java_lang_String_R_java_lang_String,
	(void *) M_arc_struct_OrderedSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator,
	(void *) M_arc_struct_OrderedSet_add_java_lang_Object_int_R_boolean,
	(void *) M_arc_struct_OrderedSet_addAll_arc_struct_OrderedSet,
	(void *) M_arc_struct_OrderedSet_removeIndex_int_R_java_lang_Object,
	(void *) M_arc_struct_OrderedSet_alter_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_arc_struct_OrderedSet_alterIndex_int_java_lang_Object_R_boolean,
	(void *) M_arc_struct_OrderedSet_orderedItems_R_arc_struct_Seq,
	(void *) M_arc_struct_OrderedSet_iterator_R_arc_struct_OrderedSet$OrderedSetIterator,
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
	{ "copy", "()Larc/struct/ObjectSet;" },
	{ "select", "(Larc/func/Boolf;)Larc/struct/ObjectSet;" },
	{ "toSeq", "()Larc/struct/Seq;" },
	{ "find", "(Larc/func/Boolf;)Ljava/lang/Object;" },
	{ "place", "(Ljava/lang/Object;)I" },
	{ "locateKey", "(Ljava/lang/Object;)I" },
	{ "any", "()Z" },
	{ "add", "(Ljava/lang/Object;)Z" },
	{ "addAll", "(Larc/struct/Seq;)V" },
	{ "addAll", "(Larc/struct/Seq;II)V" },
	{ "addAll", "([Ljava/lang/Object;)Z" },
	{ "addAll", "([Ljava/lang/Object;II)Z" },
	{ "addAll", "(Larc/struct/ObjectSet;)V" },
	{ "addResize", "(Ljava/lang/Object;)V" },
	{ "removeAll", "([Ljava/lang/Object;II)V" },
	{ "removeAll", "([Ljava/lang/Object;)V" },
	{ "removeAll", "(Larc/struct/Seq;)V" },
	{ "remove", "(Ljava/lang/Object;)Z" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "shrink", "(I)V" },
	{ "clear", "(I)V" },
	{ "clear", "()V" },
	{ "contains", "(Ljava/lang/Object;)Z" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "first", "()Ljava/lang/Object;" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "iterator", "()Larc/struct/ObjectSet$ObjectSetIterator;" },
	{ "add", "(Ljava/lang/Object;I)Z" },
	{ "addAll", "(Larc/struct/OrderedSet;)V" },
	{ "removeIndex", "(I)Ljava/lang/Object;" },
	{ "alter", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "alterIndex", "(ILjava/lang/Object;)Z" },
	{ "orderedItems", "()Larc/struct/Seq;" },
	{ "iterator", "()Larc/struct/OrderedSet$OrderedSetIterator;" },
};

static jclass innerClasses[] {
	&class_arc_struct_OrderedSet$OrderedSetIterator,
};

static FieldMetadata fields[] {
	{ "items", &class_arc_struct_Seq, offsetof(arc_struct_OrderedSet, F_items), "Larc/struct/Seq;", 16 },
	{ "iterator1", &class_arc_struct_OrderedSet$OrderedSetIterator, offsetof(arc_struct_OrderedSet, F_iterator1), "Larc/struct/OrderedSet$OrderedSetIterator;", 128 },
	{ "iterator2", &class_arc_struct_OrderedSet$OrderedSetIterator, offsetof(arc_struct_OrderedSet, F_iterator2), "Larc/struct/OrderedSet$OrderedSetIterator;", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_OrderedSet, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_OrderedSet_int_float, 0, "(IF)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_OrderedSet_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_OrderedSet_arc_struct_OrderedSet, 0, "(Larc/struct/OrderedSet;)V", 1 },
	{ "add", (intptr_t) M_arc_struct_OrderedSet_add_java_lang_Object_R_boolean, VTABLE_arc_struct_OrderedSet_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "add", (intptr_t) M_arc_struct_OrderedSet_add_java_lang_Object_int_R_boolean, VTABLE_arc_struct_OrderedSet_add_java_lang_Object_int_R_boolean, "(Ljava/lang/Object;I)Z", 1 },
	{ "addAll", (intptr_t) M_arc_struct_OrderedSet_addAll_arc_struct_OrderedSet, VTABLE_arc_struct_OrderedSet_addAll_arc_struct_OrderedSet, "(Larc/struct/OrderedSet;)V", 1 },
	{ "ensureCapacity", (intptr_t) M_arc_struct_OrderedSet_ensureCapacity_int, VTABLE_arc_struct_OrderedSet_ensureCapacity_int, "(I)V", 1 },
	{ "remove", (intptr_t) M_arc_struct_OrderedSet_remove_java_lang_Object_R_boolean, VTABLE_arc_struct_OrderedSet_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "removeIndex", (intptr_t) M_arc_struct_OrderedSet_removeIndex_int_R_java_lang_Object, VTABLE_arc_struct_OrderedSet_removeIndex_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "alter", (intptr_t) M_arc_struct_OrderedSet_alter_java_lang_Object_java_lang_Object_R_boolean, VTABLE_arc_struct_OrderedSet_alter_java_lang_Object_java_lang_Object_R_boolean, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 1 },
	{ "alterIndex", (intptr_t) M_arc_struct_OrderedSet_alterIndex_int_java_lang_Object_R_boolean, VTABLE_arc_struct_OrderedSet_alterIndex_int_java_lang_Object_R_boolean, "(ILjava/lang/Object;)Z", 1 },
	{ "clear", (intptr_t) M_arc_struct_OrderedSet_clear_int, VTABLE_arc_struct_OrderedSet_clear_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_arc_struct_OrderedSet_clear, VTABLE_arc_struct_OrderedSet_clear, "()V", 1 },
	{ "orderedItems", (intptr_t) M_arc_struct_OrderedSet_orderedItems_R_arc_struct_Seq, VTABLE_arc_struct_OrderedSet_orderedItems_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "first", (intptr_t) M_arc_struct_OrderedSet_first_R_java_lang_Object, VTABLE_arc_struct_OrderedSet_first_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "hashCode", (intptr_t) M_arc_struct_OrderedSet_hashCode_R_int, VTABLE_arc_struct_OrderedSet_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_arc_struct_OrderedSet_equals_java_lang_Object_R_boolean, VTABLE_arc_struct_OrderedSet_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "iterator", (intptr_t) M_arc_struct_OrderedSet_iterator_R_arc_struct_OrderedSet$OrderedSetIterator, VTABLE_arc_struct_OrderedSet_iterator_R_arc_struct_OrderedSet$OrderedSetIterator, "()Larc/struct/OrderedSet$OrderedSetIterator;", 1 },
	{ "toString", (intptr_t) M_arc_struct_OrderedSet_toString_R_java_lang_String, VTABLE_arc_struct_OrderedSet_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_arc_struct_OrderedSet_toString_java_lang_String_R_java_lang_String, VTABLE_arc_struct_OrderedSet_toString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "with", (intptr_t) SM_arc_struct_OrderedSet_with_Array1_java_lang_Object_R_arc_struct_OrderedSet, 0, "([Ljava/lang/Object;)Larc/struct/OrderedSet;", 137 },
	{ "iterator", (intptr_t) M_arc_struct_OrderedSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator, VTABLE_arc_struct_OrderedSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator, "()Larc/struct/ObjectSet$ObjectSetIterator;", 4161 },
	{ "iterator", (intptr_t) M_arc_struct_OrderedSet_iterator_R_java_util_Iterator, VTABLE_arc_struct_OrderedSet_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 4161 },
};

Class class_arc_struct_OrderedSet{
		.nativeName = (intptr_t) "arc/struct/OrderedSet",
		.parentClass = (intptr_t) &class_arc_struct_ObjectSet,
		.size = sizeof(arc_struct_OrderedSet),
		.classVtable = (intptr_t) vtable_arc_struct_OrderedSet,
		.staticInitializer = (intptr_t) clinit_arc_struct_OrderedSet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_OrderedSet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 52,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_OrderedSet = registerClass(&class_arc_struct_OrderedSet);

}
