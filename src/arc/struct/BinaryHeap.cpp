#include "arc/struct/BinaryHeap.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/Float.h"
#include "arc/struct/BinaryHeap.h"
#include "arc/struct/BinaryHeap_Node.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_struct_BinaryHeap(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_BinaryHeap *) object;
	if (self->F_nodes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nodes)->clazz)->markFunction)((jobject) self->F_nodes, mark, depth + 1);
}

void clinit_arc_struct_BinaryHeap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_struct_BinaryHeap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BinaryHeap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_BinaryHeap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_arc_struct_BinaryHeap_int_boolean(ctx, (frame[0].o), (16), (jint(0)));
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_BinaryHeap_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BinaryHeap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_BinaryHeap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(14);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_isMaxHeap = (frame[2].i);
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_struct_BinaryHeap$Node, (frame[1].i));
	((arc_struct_BinaryHeap *) NULL_CHECK(sp[0].o))->F_nodes = (jref) sp[1].o;
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_BinaryHeap_add_arc_struct_BinaryHeap$Node_R_arc_struct_BinaryHeap$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BinaryHeap:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(21);
	jint temp0 = (jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_size;
	sp[0].o = (jobject)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_nodes;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)createArray(ctx, &class_arc_struct_BinaryHeap$Node, (((jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_size) << (jint(1))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(23);
	sp[0].o = (jobject)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_nodes;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[2].o), (jint(0)), ((jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(24);
	((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_nodes = (jref) (frame[2].o);
	}
label_1:;
	{
	LINE_NUMBER(27);
	((arc_struct_BinaryHeap$Node *) NULL_CHECK((frame[1].o)))->F_index = ((jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(28);
	sp[0].o = (jobject)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_nodes;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].o);
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((arc_struct_BinaryHeap *) NULL_CHECK(sp[1].o))->F_size;
	((arc_struct_BinaryHeap *) NULL_CHECK(sp[1].o))->F_size = (temp0 + (jint(1)));
	M_arc_struct_BinaryHeap_up_int(ctx, sp[0].o, temp0);
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_BinaryHeap_add_arc_struct_BinaryHeap$Node_float_R_arc_struct_BinaryHeap$Node(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BinaryHeap:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(34);
	((arc_struct_BinaryHeap$Node *) NULL_CHECK((frame[1].o)))->F_value = (frame[2].f);
	LINE_NUMBER(35);
	sp[0].o = (jobject)((func_arc_struct_BinaryHeap_add_arc_struct_BinaryHeap$Node_R_arc_struct_BinaryHeap$Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_BinaryHeap_add_arc_struct_BinaryHeap$Node_R_arc_struct_BinaryHeap$Node])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_BinaryHeap_contains_arc_struct_BinaryHeap$Node_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BinaryHeap:contains", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(44);
	if ((frame[2].i) != 0) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_nodes;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(46);
	if ((frame[6].o) != (frame[1].o)) goto label_6;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(45);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	goto label_7;
label_2:;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_nodes;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_8:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_7;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(49);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (frame[1].o));
	if (temp0 == 0) goto label_10;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(48);
	INST_IINC(5, 1);
	goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_BinaryHeap_peek_R_arc_struct_BinaryHeap$Node(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BinaryHeap:peek", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(55);
	if (((jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"The heap is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_nodes;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_BinaryHeap_pop_R_arc_struct_BinaryHeap$Node(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BinaryHeap:pop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)M_arc_struct_BinaryHeap_remove_int_R_arc_struct_BinaryHeap$Node(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_BinaryHeap_remove_arc_struct_BinaryHeap$Node_R_arc_struct_BinaryHeap$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BinaryHeap:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)M_arc_struct_BinaryHeap_remove_int_R_arc_struct_BinaryHeap$Node(ctx, (frame[0].o), ((jint)((arc_struct_BinaryHeap$Node *) NULL_CHECK((frame[1].o)))->F_index));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_BinaryHeap_remove_int_R_arc_struct_BinaryHeap$Node(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BinaryHeap:remove", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_nodes;
	frame[2].o = sp[0].o;
	LINE_NUMBER(69);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(70);
	sp[0].o = frame[2].o;
	jint temp0 = frame[1].i;
	sp[1].o = frame[2].o;
	sp[2].o = frame[0].o;
	jint temp1 = ((jint)((arc_struct_BinaryHeap *) NULL_CHECK(sp[2].o))->F_size) - (jint(1));
	((arc_struct_BinaryHeap *) NULL_CHECK(sp[2].o))->F_size = temp1;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(71);
	ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_size)) = (jobject(nullptr));
	LINE_NUMBER(72);
	if (((jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_5;
	}
	{
	if ((frame[1].i) >= ((jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_5;
	}
	{
	M_arc_struct_BinaryHeap_down_int(ctx, (frame[0].o), (frame[1].i));
	}
label_5:;
	{
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_BinaryHeap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BinaryHeap:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	if (((jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_struct_BinaryHeap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BinaryHeap:clear", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_nodes;
	frame[1].o = sp[0].o;
	LINE_NUMBER(83);
	frame[2].i = (jint(0));
	frame[3].i = ((jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(84);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(83);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(85);
	((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_BinaryHeap_setValue_arc_struct_BinaryHeap$Node_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BinaryHeap:setValue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(89);
	frame[3].f = ((jfloat)((arc_struct_BinaryHeap$Node *) NULL_CHECK((frame[1].o)))->F_value);
	LINE_NUMBER(90);
	((arc_struct_BinaryHeap$Node *) NULL_CHECK((frame[1].o)))->F_value = (frame[2].f);
	LINE_NUMBER(91);
	if ((floatCompare((frame[2].f), (frame[3].f), 1)) >= 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	if ((sp[0].i ^ ((jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_isMaxHeap)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(92);
	M_arc_struct_BinaryHeap_up_int(ctx, (frame[0].o), ((jint)((arc_struct_BinaryHeap$Node *) NULL_CHECK((frame[1].o)))->F_index));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(94);
	M_arc_struct_BinaryHeap_down_int(ctx, (frame[0].o), ((jint)((arc_struct_BinaryHeap$Node *) NULL_CHECK((frame[1].o)))->F_index));
	}
label_7:;
	LINE_NUMBER(95);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_BinaryHeap_up_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BinaryHeap:up", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_nodes;
	frame[2].o = sp[0].o;
	LINE_NUMBER(99);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(100);
	frame[4].f = ((jfloat)((arc_struct_BinaryHeap$Node *) NULL_CHECK((frame[3].o)))->F_value);
	}
label_3:;
	{
	LINE_NUMBER(101);
	if ((frame[1].i) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(102);
	frame[5].i = (((frame[1].i) - (jint(1))) >> (jint(1)));
	LINE_NUMBER(103);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i)));
	LINE_NUMBER(104);
	if ((floatCompare((frame[4].f), ((jfloat)((arc_struct_BinaryHeap$Node *) NULL_CHECK((frame[6].o)))->F_value), 1)) >= 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 1;
	if ((sp[0].i ^ ((jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_isMaxHeap)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(105);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)) = (frame[6].o);
	LINE_NUMBER(106);
	((arc_struct_BinaryHeap$Node *) NULL_CHECK((frame[6].o)))->F_index = (frame[1].i);
	LINE_NUMBER(107);
	frame[1].i = (frame[5].i);
	LINE_NUMBER(110);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(111);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)) = (frame[3].o);
	LINE_NUMBER(112);
	((arc_struct_BinaryHeap$Node *) NULL_CHECK((frame[3].o)))->F_index = (frame[1].i);
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_BinaryHeap_down_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BinaryHeap:down", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_nodes;
	frame[2].o = sp[0].o;
	LINE_NUMBER(117);
	frame[3].i = ((jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(119);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(120);
	frame[5].f = ((jfloat)((arc_struct_BinaryHeap$Node *) NULL_CHECK((frame[4].o)))->F_value);
	}
label_4:;
	{
	LINE_NUMBER(123);
	frame[6].i = ((jint(1)) + ((frame[1].i) << (jint(1))));
	LINE_NUMBER(124);
	if ((frame[6].i) < (frame[3].i)) goto label_6;
	}
	goto label_7;
label_6:;
	{
	LINE_NUMBER(125);
	frame[7].i = ((frame[6].i) + (jint(1)));
	LINE_NUMBER(128);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[6].i)));
	LINE_NUMBER(129);
	frame[9].f = ((jfloat)((arc_struct_BinaryHeap$Node *) NULL_CHECK((frame[8].o)))->F_value);
	LINE_NUMBER(134);
	if ((frame[7].i) < (frame[3].i)) goto label_11;
	}
	{
	LINE_NUMBER(135);
	frame[10].o = (jobject(nullptr));
	LINE_NUMBER(136);
	if (((jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_isMaxHeap) == 0) goto label_14;
	}
	(sp++)->f = jfloat(1,401298e-45f);
	goto label_15;
label_14:;
	(sp++)->f = jfloat(3,402823e+38f);
label_15:;
	INST_FSTORE(11);
	goto label_17;
label_11:;
	{
	LINE_NUMBER(138);
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[7].i)));
	LINE_NUMBER(139);
	frame[11].f = ((jfloat)((arc_struct_BinaryHeap$Node *) NULL_CHECK((frame[10].o)))->F_value);
	}
label_17:;
	{
	LINE_NUMBER(143);
	if ((floatCompare((frame[9].f), (frame[11].f), 1)) >= 0) goto label_19;
	}
	INST_ICONST(1);
	goto label_20;
label_19:;
	INST_ICONST(0);
label_20:;
	{
	sp -= 1;
	if ((sp[0].i ^ ((jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_isMaxHeap)) == 0) goto label_21;
	}
	{
	LINE_NUMBER(144);
	if ((floatCompare((frame[9].f), (frame[5].f), -1)) == 0) goto label_7;
	}
	{
	if ((floatCompare((frame[9].f), (frame[5].f), -1)) <= 0) goto label_23;
	}
	INST_ICONST(1);
	goto label_24;
label_23:;
	INST_ICONST(0);
label_24:;
	{
	sp -= 1;
	if ((sp[0].i ^ ((jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_isMaxHeap)) == 0) goto label_25;
	}
	goto label_7;
label_25:;
	{
	LINE_NUMBER(145);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)) = (frame[8].o);
	LINE_NUMBER(146);
	((arc_struct_BinaryHeap$Node *) NULL_CHECK((frame[8].o)))->F_index = (frame[1].i);
	LINE_NUMBER(147);
	frame[1].i = (frame[6].i);
	goto label_28;
	}
label_21:;
	{
	LINE_NUMBER(149);
	if ((floatCompare((frame[11].f), (frame[5].f), -1)) == 0) goto label_7;
	}
	{
	if ((floatCompare((frame[11].f), (frame[5].f), -1)) <= 0) goto label_29;
	}
	INST_ICONST(1);
	goto label_30;
label_29:;
	INST_ICONST(0);
label_30:;
	{
	sp -= 1;
	if ((sp[0].i ^ ((jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_isMaxHeap)) == 0) goto label_31;
	}
	goto label_7;
label_31:;
	{
	LINE_NUMBER(150);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)) = (frame[10].o);
	LINE_NUMBER(151);
	((arc_struct_BinaryHeap$Node *) NULL_CHECK((frame[10].o)))->F_index = (frame[1].i);
	LINE_NUMBER(152);
	frame[1].i = (frame[7].i);
	}
label_28:;
	LINE_NUMBER(154);
	goto label_4;
label_7:;
	{
	LINE_NUMBER(156);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)) = (frame[4].o);
	LINE_NUMBER(157);
	((arc_struct_BinaryHeap$Node *) NULL_CHECK((frame[4].o)))->F_index = (frame[1].i);
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_BinaryHeap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BinaryHeap:equals", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(162);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_BinaryHeap)) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(163);
	frame[2].o = (checkCast(ctx, &class_arc_struct_BinaryHeap, (frame[1].o)));
	LINE_NUMBER(164);
	if (((jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[2].o)))->F_size) == ((jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(165);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((arc_struct_BinaryHeap *) NULL_CHECK((frame[2].o)))->F_nodes;
	jfloat temp0 = (jfloat)((arc_struct_BinaryHeap$Node *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_value;
	sp[0].o = (jobject)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_nodes;
	if ((floatCompare(temp0, ((jfloat)((arc_struct_BinaryHeap$Node *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_value), -1)) == 0) goto label_8;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(165);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_BinaryHeap_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BinaryHeap:hashCode", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	frame[1].i = (jint(1));
	LINE_NUMBER(172);
	frame[2].i = (jint(0));
	frame[3].i = ((jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(173);
	jint temp0 = (frame[1].i) * (31);
	sp[0].o = (jobject)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_nodes;
	jint temp1 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((arc_struct_BinaryHeap$Node *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_value));
	frame[1].i = (temp0 + temp1);
	LINE_NUMBER(172);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_BinaryHeap_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BinaryHeap:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(178);
	if (((jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[]"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_nodes;
	frame[1].o = sp[0].o;
	LINE_NUMBER(180);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[2].o = sp[0].o;
	LINE_NUMBER(181);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (91));
	LINE_NUMBER(182);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jfloat)((arc_struct_BinaryHeap$Node *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))))))->F_value));
	LINE_NUMBER(183);
	frame[3].i = (jint(1));
	}
label_6:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_BinaryHeap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(185);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jfloat)((arc_struct_BinaryHeap$Node *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)))))->F_value));
	LINE_NUMBER(183);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (93));
	LINE_NUMBER(188);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_BinaryHeap[] {
	(void *) M_arc_struct_BinaryHeap_hashCode_R_int,
	(void *) M_arc_struct_BinaryHeap_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_BinaryHeap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_BinaryHeap_add_arc_struct_BinaryHeap$Node_R_arc_struct_BinaryHeap$Node,
	(void *) M_arc_struct_BinaryHeap_add_arc_struct_BinaryHeap$Node_float_R_arc_struct_BinaryHeap$Node,
	(void *) M_arc_struct_BinaryHeap_contains_arc_struct_BinaryHeap$Node_boolean_R_boolean,
	(void *) M_arc_struct_BinaryHeap_peek_R_arc_struct_BinaryHeap$Node,
	(void *) M_arc_struct_BinaryHeap_pop_R_arc_struct_BinaryHeap$Node,
	(void *) M_arc_struct_BinaryHeap_remove_arc_struct_BinaryHeap$Node_R_arc_struct_BinaryHeap$Node,
	(void *) M_arc_struct_BinaryHeap_remove_int_R_arc_struct_BinaryHeap$Node,
	(void *) M_arc_struct_BinaryHeap_isEmpty_R_boolean,
	(void *) M_arc_struct_BinaryHeap_clear,
	(void *) M_arc_struct_BinaryHeap_setValue_arc_struct_BinaryHeap$Node_float,
	(void *) M_arc_struct_BinaryHeap_up_int,
	(void *) M_arc_struct_BinaryHeap_down_int,
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
	{ "add", "(Larc/struct/BinaryHeap$Node;)Larc/struct/BinaryHeap$Node;" },
	{ "add", "(Larc/struct/BinaryHeap$Node;F)Larc/struct/BinaryHeap$Node;" },
	{ "contains", "(Larc/struct/BinaryHeap$Node;Z)Z" },
	{ "peek", "()Larc/struct/BinaryHeap$Node;" },
	{ "pop", "()Larc/struct/BinaryHeap$Node;" },
	{ "remove", "(Larc/struct/BinaryHeap$Node;)Larc/struct/BinaryHeap$Node;" },
	{ "remove", "(I)Larc/struct/BinaryHeap$Node;" },
	{ "isEmpty", "()Z" },
	{ "clear", "()V" },
	{ "setValue", "(Larc/struct/BinaryHeap$Node;F)V" },
	{ "up", "(I)V" },
	{ "down", "(I)V" },
};

static jclass innerClasses[] {
	&class_arc_struct_BinaryHeap$Node,
};

static FieldMetadata fields[] {
	{ "isMaxHeap", &class_boolean, offsetof(arc_struct_BinaryHeap, F_isMaxHeap), "Z", 18 },
	{ "size", &class_int, offsetof(arc_struct_BinaryHeap, F_size), "I", 1 },
	{ "nodes", getArrayClass(&class_arc_struct_BinaryHeap$Node, 1), offsetof(arc_struct_BinaryHeap, F_nodes), "[Larc/struct/BinaryHeap$Node;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_BinaryHeap, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_BinaryHeap_int_boolean, 0, "(IZ)V", 1 },
	{ "add", (intptr_t) M_arc_struct_BinaryHeap_add_arc_struct_BinaryHeap$Node_R_arc_struct_BinaryHeap$Node, VTABLE_arc_struct_BinaryHeap_add_arc_struct_BinaryHeap$Node_R_arc_struct_BinaryHeap$Node, "(Larc/struct/BinaryHeap$Node;)Larc/struct/BinaryHeap$Node;", 1 },
	{ "add", (intptr_t) M_arc_struct_BinaryHeap_add_arc_struct_BinaryHeap$Node_float_R_arc_struct_BinaryHeap$Node, VTABLE_arc_struct_BinaryHeap_add_arc_struct_BinaryHeap$Node_float_R_arc_struct_BinaryHeap$Node, "(Larc/struct/BinaryHeap$Node;F)Larc/struct/BinaryHeap$Node;", 1 },
	{ "contains", (intptr_t) M_arc_struct_BinaryHeap_contains_arc_struct_BinaryHeap$Node_boolean_R_boolean, VTABLE_arc_struct_BinaryHeap_contains_arc_struct_BinaryHeap$Node_boolean_R_boolean, "(Larc/struct/BinaryHeap$Node;Z)Z", 1 },
	{ "peek", (intptr_t) M_arc_struct_BinaryHeap_peek_R_arc_struct_BinaryHeap$Node, VTABLE_arc_struct_BinaryHeap_peek_R_arc_struct_BinaryHeap$Node, "()Larc/struct/BinaryHeap$Node;", 1 },
	{ "pop", (intptr_t) M_arc_struct_BinaryHeap_pop_R_arc_struct_BinaryHeap$Node, VTABLE_arc_struct_BinaryHeap_pop_R_arc_struct_BinaryHeap$Node, "()Larc/struct/BinaryHeap$Node;", 1 },
	{ "remove", (intptr_t) M_arc_struct_BinaryHeap_remove_arc_struct_BinaryHeap$Node_R_arc_struct_BinaryHeap$Node, VTABLE_arc_struct_BinaryHeap_remove_arc_struct_BinaryHeap$Node_R_arc_struct_BinaryHeap$Node, "(Larc/struct/BinaryHeap$Node;)Larc/struct/BinaryHeap$Node;", 1 },
	{ "remove", (intptr_t) M_arc_struct_BinaryHeap_remove_int_R_arc_struct_BinaryHeap$Node, VTABLE_arc_struct_BinaryHeap_remove_int_R_arc_struct_BinaryHeap$Node, "(I)Larc/struct/BinaryHeap$Node;", 2 },
	{ "isEmpty", (intptr_t) M_arc_struct_BinaryHeap_isEmpty_R_boolean, VTABLE_arc_struct_BinaryHeap_isEmpty_R_boolean, "()Z", 1 },
	{ "clear", (intptr_t) M_arc_struct_BinaryHeap_clear, VTABLE_arc_struct_BinaryHeap_clear, "()V", 1 },
	{ "setValue", (intptr_t) M_arc_struct_BinaryHeap_setValue_arc_struct_BinaryHeap$Node_float, VTABLE_arc_struct_BinaryHeap_setValue_arc_struct_BinaryHeap$Node_float, "(Larc/struct/BinaryHeap$Node;F)V", 1 },
	{ "up", (intptr_t) M_arc_struct_BinaryHeap_up_int, VTABLE_arc_struct_BinaryHeap_up_int, "(I)V", 2 },
	{ "down", (intptr_t) M_arc_struct_BinaryHeap_down_int, VTABLE_arc_struct_BinaryHeap_down_int, "(I)V", 2 },
	{ "equals", (intptr_t) M_arc_struct_BinaryHeap_equals_java_lang_Object_R_boolean, VTABLE_arc_struct_BinaryHeap_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_arc_struct_BinaryHeap_hashCode_R_int, VTABLE_arc_struct_BinaryHeap_hashCode_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_arc_struct_BinaryHeap_toString_R_java_lang_String, VTABLE_arc_struct_BinaryHeap_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_arc_struct_BinaryHeap{
		.nativeName = (intptr_t) "arc/struct/BinaryHeap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_BinaryHeap),
		.classVtable = (intptr_t) vtable_arc_struct_BinaryHeap,
		.staticInitializer = (intptr_t) clinit_arc_struct_BinaryHeap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_BinaryHeap,
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
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_BinaryHeap = registerClass(&class_arc_struct_BinaryHeap);

}
