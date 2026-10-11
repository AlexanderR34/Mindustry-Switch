#include "arc/struct/IntSeq.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "java/lang/StringBuilder.h"
#include "arc/math/Rand.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/struct/IntSeq.h"
#include "arc/func/Intc.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_struct_IntSeq(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_IntSeq *) object;
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
}

void clinit_arc_struct_IntSeq(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject SM_arc_struct_IntSeq_range_int_int_R_arc_struct_IntSeq(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:range", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_IntSeq(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(19);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(20);
	frame[3].i = (frame[0].i);
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(21);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, (frame[2].o), (frame[3].i));
	LINE_NUMBER(20);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void init_arc_struct_IntSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_IntSeq(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(28);
	init_arc_struct_IntSeq_boolean_int(ctx, (frame[0].o), (jint(1)), (16));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_IntSeq_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_IntSeq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(33);
	init_arc_struct_IntSeq_boolean_int(ctx, (frame[0].o), (jint(1)), (frame[1].i));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_IntSeq_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_IntSeq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(41);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(42);
	((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_ordered = (frame[1].i);
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[2].i));
	((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_IntSeq_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_IntSeq(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(52);
	((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_ordered = ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[1].o)))->F_ordered);
	LINE_NUMBER(53);
	((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size));
	((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(55);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[1].o)))->F_items;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_IntSeq_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_IntSeq(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	init_arc_struct_IntSeq_boolean_Array1_int_int_int(ctx, (frame[0].o), (jint(1)), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_IntSeq_boolean_Array1_int_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_IntSeq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(73);
	init_arc_struct_IntSeq_boolean_int(ctx, (frame[0].o), (frame[1].i), (frame[4].i));
	LINE_NUMBER(74);
	((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size = (frame[4].i);
	LINE_NUMBER(75);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (frame[4].i));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_struct_IntSeq_with_Array1_int_R_arc_struct_IntSeq(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:with", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_IntSeq(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(80);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_Array1_int(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntSeq_mode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:mode", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	frame[1].i = (jint(1));
	LINE_NUMBER(86);
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_2;
	}
	INST_ICONST(0);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)));
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(88);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)))) goto label_6;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i)));
	LINE_NUMBER(90);
	frame[2].i = (jint(0));
	LINE_NUMBER(91);
	frame[6].i = (jint(1));
	}
label_10:;
	{
	if ((frame[6].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_11;
	}
	{
	LINE_NUMBER(92);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 != ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[6].i)))) goto label_13;
	}
	INST_IINC(2, 1);
label_13:;
	{
	LINE_NUMBER(91);
	INST_IINC(6, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(94);
	if ((frame[2].i) <= (frame[1].i)) goto label_14;
	}
	{
	LINE_NUMBER(95);
	frame[3].i = (frame[4].i);
	LINE_NUMBER(96);
	frame[1].i = (frame[2].i);
	}
label_14:;
	{
	LINE_NUMBER(88);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntSeq_each_arc_func_Intc(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:each", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(103);
	frame[2].i = ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(104);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(105);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(106);
	((func_arc_func_Intc_get_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc, INDEX_arc_func_Intc_get_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i))));
	LINE_NUMBER(105);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(108);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_struct_IntSeq_count_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:count", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(111);
	frame[2].i = (jint(0));
	LINE_NUMBER(112);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))) != (frame[1].i)) goto label_5;
	}
	LINE_NUMBER(114);
	INST_IINC(2, 1);
label_5:;
	{
	LINE_NUMBER(112);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntSeq_sum_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:sum", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(121);
	frame[1].i = (jint(0));
	LINE_NUMBER(122);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(123);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].i = (temp0 + ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))));
	LINE_NUMBER(122);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntSeq_chunked_int_arc_func_Cons(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:chunked", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(129);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((frame[3].i) + (frame[1].i)), ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_int_int_int_R_Array1_int(ctx, sp[0].o, temp0, temp1);
	frame[4].o = sp[0].o;
	LINE_NUMBER(131);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[4].o));
	LINE_NUMBER(129);
	frame[3].i = ((frame[3].i) + (frame[1].i));
	goto label_1;
	}
label_2:;
	LINE_NUMBER(133);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_struct_IntSeq_addUnique_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:addUnique", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(140);
	jint temp0 = (jint)((func_arc_struct_IntSeq_contains_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntSeq_contains_int_R_boolean])(ctx, (frame[0].o), (frame[1].i));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(141);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntSeq_add_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(149);
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_IntSeq_resize_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_resize_int_R_Array1_int])(ctx, sp[0].o, temp0);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(150);
	sp[0].o = frame[2].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((arc_struct_IntSeq *) NULL_CHECK(sp[1].o))->F_size;
	((arc_struct_IntSeq *) NULL_CHECK(sp[1].o))->F_size = (temp0 + (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (frame[1].i);
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntSeq_add_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(155);
	if ((((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1))) < (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_IntSeq_resize_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_resize_int_R_Array1_int])(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(156);
	ARRAY_ACCESS(jint, (frame[3].o), ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].i);
	LINE_NUMBER(157);
	ARRAY_ACCESS(jint, (frame[3].o), (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].i);
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) + (jint(2)));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntSeq_add_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(163);
	if ((((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2))) < (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_IntSeq_resize_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_resize_int_R_Array1_int])(ctx, sp[0].o, temp0);
	frame[4].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(164);
	ARRAY_ACCESS(jint, (frame[4].o), ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].i);
	LINE_NUMBER(165);
	ARRAY_ACCESS(jint, (frame[4].o), (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].i);
	LINE_NUMBER(166);
	ARRAY_ACCESS(jint, (frame[4].o), (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2)))) = (frame[3].i);
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) + (jint(3)));
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntSeq_add_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(172);
	if ((((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(3))) < (((jarray) nullCheck(ctx, (frame[5].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.8f))))));
	sp[0].o = (jobject)((func_arc_struct_IntSeq_resize_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_resize_int_R_Array1_int])(ctx, sp[0].o, temp0);
	frame[5].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(173);
	ARRAY_ACCESS(jint, (frame[5].o), ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].i);
	LINE_NUMBER(174);
	ARRAY_ACCESS(jint, (frame[5].o), (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].i);
	LINE_NUMBER(175);
	ARRAY_ACCESS(jint, (frame[5].o), (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2)))) = (frame[3].i);
	LINE_NUMBER(176);
	ARRAY_ACCESS(jint, (frame[5].o), (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(3)))) = (frame[4].i);
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) + (jint(4)));
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntSeq_addAll_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(181);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[1].o)))->F_items;
	((func_arc_struct_IntSeq_addAll_Array1_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_addAll_Array1_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntSeq_addAll_arc_struct_IntSeq_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:addAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(185);
	if (((frame[2].i) + (frame[3].i)) <= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[1].o)))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(186);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"offset + length must be <= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" + "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" <= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[1].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[1].o)))->F_items;
	((func_arc_struct_IntSeq_addAll_Array1_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_addAll_Array1_int_int_int])(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i));
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntSeq_addAll_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(191);
	((func_arc_struct_IntSeq_addAll_Array1_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntSeq_addAll_Array1_int_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntSeq_addAll_Array1_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:addAll", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(196);
	frame[5].i = (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) + (frame[3].i));
	LINE_NUMBER(197);
	if ((frame[5].i) <= (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat((frame[5].i))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_IntSeq_resize_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_resize_int_R_Array1_int])(ctx, sp[0].o, temp0);
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(198);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[1].o), (frame[2].i), (frame[4].o), ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size), (frame[3].i));
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) + (frame[3].i));
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntSeq_get_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(203);
	if ((frame[1].i) < ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntSeq_set_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(208);
	if ((frame[1].i) < ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntSeq_incr_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:incr", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(213);
	if ((frame[1].i) < ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (frame[2].i));
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntSeq_mul_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:mul", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(218);
	if ((frame[1].i) < ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) * (frame[2].i));
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntSeq_insert_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:insert", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(223);
	if ((frame[1].i) <= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be > size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" > "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(225);
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_IntSeq_resize_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_resize_int_R_Array1_int])(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(226);
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_4;
	}
	{
	LINE_NUMBER(227);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), (frame[1].i), (frame[3].o), ((frame[1].i) + (jint(1))), (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(229);
	ARRAY_ACCESS(jint, (frame[3].o), ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size)) = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[1].i)));
	}
label_6:;
	{
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(231);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntSeq_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:swap", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(235);
	if ((frame[1].i) < ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"first can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(236);
	if ((frame[2].i) < ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"second can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(238);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[1].i)));
	LINE_NUMBER(239);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[1].i)) = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[2].i)));
	LINE_NUMBER(240);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[2].i)) = (frame[4].i);
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_IntSeq_contains_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:contains", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(244);
	frame[2].i = (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(245);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(246);
	if ((frame[2].i) < 0) goto label_3;
	}
	{
	LINE_NUMBER(247);
	sp[0].o = frame[3].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, -1);
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) != (frame[1].i)) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntSeq_indexOf_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:indexOf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(253);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(254);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i))) != (frame[1].i)) goto label_6;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(253);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntSeq_lastIndexOf_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:lastIndexOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(260);
	frame[3].i = (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	}
label_2:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(261);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i))) != (frame[1].i)) goto label_5;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(260);
	INST_IINC(3, -1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_IntSeq_removeValue_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:removeValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(267);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(268);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i))) != (frame[1].i)) goto label_6;
	}
	{
	LINE_NUMBER(269);
	jint temp0 = (jint)((func_arc_struct_IntSeq_removeIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntSeq_removeIndex_int_R_int])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(267);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(273);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntSeq_removeIndex_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:removeIndex", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(278);
	if ((frame[1].i) < ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(280);
	frame[3].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(281);
	sp[0].o = frame[0].o;
	((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(282);
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_5;
	}
	{
	LINE_NUMBER(283);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((frame[1].i) + (jint(1))), (frame[2].o), (frame[1].i), (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(285);
	ARRAY_ACCESS(jint, (frame[2].o), (frame[1].i)) = ((jint)ARRAY_ACCESS(jint, (frame[2].o), ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size)));
	}
label_7:;
	{
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntSeq_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:removeRange", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(291);
	if ((frame[2].i) < ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"end can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(292);
	if ((frame[1].i) <= (frame[2].i)) goto label_2;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"start can't be > end: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" > "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(294);
	frame[4].i = (((frame[2].i) - (frame[1].i)) + (jint(1)));
	LINE_NUMBER(295);
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_5;
	}
	{
	LINE_NUMBER(296);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), ((frame[1].i) + (frame[4].i)), (frame[3].o), (frame[1].i), (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) - ((frame[1].i) + (frame[4].i))));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(298);
	frame[5].i = (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(299);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(300);
	ARRAY_ACCESS(jint, (frame[3].o), ((frame[1].i) + (frame[6].i))) = ((jint)ARRAY_ACCESS(jint, (frame[3].o), ((frame[5].i) - (frame[6].i))));
	LINE_NUMBER(299);
	INST_IINC(6, 1);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(302);
	sp[0].o = frame[0].o;
	((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) - (frame[4].i));
	LINE_NUMBER(303);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_IntSeq_removeAll_arc_struct_IntSeq_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:removeAll", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(310);
	frame[2].i = ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(311);
	frame[3].i = (frame[2].i);
	LINE_NUMBER(312);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(313);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_6;
	}
	{
	LINE_NUMBER(314);
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, (frame[1].o), (frame[5].i));
	frame[7].i = temp0;
	LINE_NUMBER(315);
	frame[8].i = (jint(0));
	}
label_9:;
	{
	if ((frame[8].i) >= (frame[2].i)) goto label_10;
	}
	{
	LINE_NUMBER(316);
	if ((frame[7].i) != ((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[8].i)))) goto label_12;
	}
	{
	LINE_NUMBER(317);
	jint temp0 = (jint)((func_arc_struct_IntSeq_removeIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntSeq_removeIndex_int_R_int])(ctx, (frame[0].o), (frame[8].i));
	LINE_NUMBER(318);
	INST_IINC(2, -1);
	LINE_NUMBER(319);
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(315);
	INST_IINC(8, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(313);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(323);
	if ((frame[2].i) == (frame[3].i)) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_arc_struct_IntSeq_pop_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:pop", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1));
	((arc_struct_IntSeq *) NULL_CHECK(sp[1].o))->F_size = temp0;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntSeq_peek_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:peek", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(333);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)))));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntSeq_first_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:first", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(338);
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Array is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(339);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_IntSeq_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(344);
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

void M_arc_struct_IntSeq_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(348);
	((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(349);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_IntSeq_shrink_R_Array1_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:shrink", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(357);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_IntSeq_resize_int_R_Array1_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntSeq_resize_int_R_Array1_int])(ctx, (frame[0].o), ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size));
	}
label_1:;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_IntSeq_ensureCapacity_int_R_Array1_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:ensureCapacity", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(367);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(368);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"additionalCapacity must be >= 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(369);
	frame[2].i = (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i));
	LINE_NUMBER(370);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[2].i));
	sp[0].o = (jobject)((func_arc_struct_IntSeq_resize_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_resize_int_R_Array1_int])(ctx, sp[0].o, temp0);
	}
label_4:;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_IntSeq_setSize_int_R_Array1_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:setSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(379);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"newSize must be >= 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(380);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[1].i));
	sp[0].o = (jobject)((func_arc_struct_IntSeq_resize_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_resize_int_R_Array1_int])(ctx, sp[0].o, temp0);
	}
label_2:;
	{
	LINE_NUMBER(381);
	((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	LINE_NUMBER(382);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_IntSeq_resize_int_R_Array1_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:resize", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(386);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(387);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(388);
	sp[0].o = frame[3].o;
	jint temp0 = jint(0);
	sp[1].o = frame[2].o;
	jint temp1 = jint(0);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, temp2);
	LINE_NUMBER(389);
	((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items = (jref) (frame[2].o);
	LINE_NUMBER(390);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntSeq_sort(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(394);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_util_Arrays_sort_Array1_int_int_int(ctx, sp[0].o, (jint(0)), ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(395);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntSeq_reverse(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:reverse", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(399);
	frame[2].i = (jint(0));
	frame[3].i = (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	frame[4].i = (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)));
	}
label_4:;
	{
	if ((frame[2].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(400);
	frame[5].i = ((frame[3].i) - (frame[2].i));
	LINE_NUMBER(401);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(402);
	ARRAY_ACCESS(jint, (frame[1].o), (frame[2].i)) = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[5].i)));
	LINE_NUMBER(403);
	ARRAY_ACCESS(jint, (frame[1].o), (frame[5].i)) = (frame[6].i);
	LINE_NUMBER(399);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(405);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_IntSeq_shuffle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:shuffle", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(408);
	sp[0].o = frame[0].o;
	clinit_arc_math_Mathf(ctx);
	sp[1].o = (jobject)SF_arc_math_Mathf_rand;
	((func_arc_struct_IntSeq_shuffle_arc_math_Rand) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_shuffle_arc_math_Rand])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(409);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntSeq_shuffle_arc_math_Rand(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:shuffle", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(413);
	frame[3].i = (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	}
label_2:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(414);
	jint temp0 = (jint)((func_arc_math_Rand_nextInt_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_Rand_nextInt_int_R_int])(ctx, (frame[1].o), ((frame[3].i) + (jint(1))));
	frame[4].i = temp0;
	LINE_NUMBER(415);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(416);
	ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i)) = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(417);
	ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)) = (frame[5].i);
	LINE_NUMBER(413);
	INST_IINC(3, -1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(419);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_IntSeq_truncate_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:truncate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(426);
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) <= (frame[1].i)) goto label_1;
	}
	{
	((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	}
label_1:;
	LINE_NUMBER(427);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_struct_IntSeq_random_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:random", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(431);
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(432);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)SM_arc_math_Mathf_random_int_int_R_int(ctx, (jint(0)), (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1))));
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_IntSeq_toArray_R_Array1_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:toArray", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(436);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(437);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[1].o), (jint(0)), ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(438);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntSeq_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:hashCode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(442);
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_ordered) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)M_java_lang_Object_hashCode_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(443);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(444);
	frame[2].i = (jint(1));
	LINE_NUMBER(445);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(446);
	frame[2].i = (((frame[2].i) * (31)) + ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[3].i))));
	LINE_NUMBER(445);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(447);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_IntSeq_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:equals", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(451);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(452);
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_ordered) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(453);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_IntSeq)) != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(454);
	frame[2].o = (checkCast(ctx, &class_arc_struct_IntSeq, (frame[1].o)));
	LINE_NUMBER(455);
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[2].o)))->F_ordered) != 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(456);
	frame[3].i = ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(457);
	if ((frame[3].i) == ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[2].o)))->F_size)) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(459);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[2].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(460);
	frame[6].i = (jint(0));
	}
label_10:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_11;
	}
	{
	LINE_NUMBER(461);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[6].i));
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[2].o)))->F_items;
	if (temp0 == ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[6].i)))) goto label_13;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(460);
	INST_IINC(6, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(462);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_IntSeq_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(466);
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[]"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(467);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(468);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[2].o = sp[0].o;
	LINE_NUMBER(469);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (91));
	LINE_NUMBER(470);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(0)))));
	LINE_NUMBER(471);
	frame[3].i = (jint(1));
	}
label_6:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(472);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(473);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[3].i))));
	LINE_NUMBER(471);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(475);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (93));
	LINE_NUMBER(476);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_IntSeq_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSeq:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(480);
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(482);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[3].o = sp[0].o;
	LINE_NUMBER(483);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(0)))));
	LINE_NUMBER(484);
	frame[4].i = (jint(1));
	}
label_5:;
	{
	if ((frame[4].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(485);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(486);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i))));
	LINE_NUMBER(484);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(488);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_IntSeq[] {
	(void *) M_arc_struct_IntSeq_hashCode_R_int,
	(void *) M_arc_struct_IntSeq_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_IntSeq_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_IntSeq_mode_R_int,
	(void *) M_arc_struct_IntSeq_each_arc_func_Intc,
	(void *) M_arc_struct_IntSeq_count_int_R_int,
	(void *) M_arc_struct_IntSeq_sum_R_int,
	(void *) M_arc_struct_IntSeq_chunked_int_arc_func_Cons,
	(void *) M_arc_struct_IntSeq_addUnique_int_R_boolean,
	(void *) M_arc_struct_IntSeq_add_int,
	(void *) M_arc_struct_IntSeq_add_int_int,
	(void *) M_arc_struct_IntSeq_add_int_int_int,
	(void *) M_arc_struct_IntSeq_add_int_int_int_int,
	(void *) M_arc_struct_IntSeq_addAll_arc_struct_IntSeq,
	(void *) M_arc_struct_IntSeq_addAll_arc_struct_IntSeq_int_int,
	(void *) M_arc_struct_IntSeq_addAll_Array1_int,
	(void *) M_arc_struct_IntSeq_addAll_Array1_int_int_int,
	(void *) M_arc_struct_IntSeq_get_int_R_int,
	(void *) M_arc_struct_IntSeq_set_int_int,
	(void *) M_arc_struct_IntSeq_incr_int_int,
	(void *) M_arc_struct_IntSeq_mul_int_int,
	(void *) M_arc_struct_IntSeq_insert_int_int,
	(void *) M_arc_struct_IntSeq_swap_int_int,
	(void *) M_arc_struct_IntSeq_contains_int_R_boolean,
	(void *) M_arc_struct_IntSeq_indexOf_int_R_int,
	(void *) M_arc_struct_IntSeq_lastIndexOf_int_R_int,
	(void *) M_arc_struct_IntSeq_removeValue_int_R_boolean,
	(void *) M_arc_struct_IntSeq_removeIndex_int_R_int,
	(void *) M_arc_struct_IntSeq_removeRange_int_int,
	(void *) M_arc_struct_IntSeq_removeAll_arc_struct_IntSeq_R_boolean,
	(void *) M_arc_struct_IntSeq_pop_R_int,
	(void *) M_arc_struct_IntSeq_peek_R_int,
	(void *) M_arc_struct_IntSeq_first_R_int,
	(void *) M_arc_struct_IntSeq_isEmpty_R_boolean,
	(void *) M_arc_struct_IntSeq_clear,
	(void *) M_arc_struct_IntSeq_shrink_R_Array1_int,
	(void *) M_arc_struct_IntSeq_ensureCapacity_int_R_Array1_int,
	(void *) M_arc_struct_IntSeq_setSize_int_R_Array1_int,
	(void *) M_arc_struct_IntSeq_resize_int_R_Array1_int,
	(void *) M_arc_struct_IntSeq_sort,
	(void *) M_arc_struct_IntSeq_reverse,
	(void *) M_arc_struct_IntSeq_shuffle,
	(void *) M_arc_struct_IntSeq_shuffle_arc_math_Rand,
	(void *) M_arc_struct_IntSeq_truncate_int,
	(void *) M_arc_struct_IntSeq_random_R_int,
	(void *) M_arc_struct_IntSeq_toArray_R_Array1_int,
	(void *) M_arc_struct_IntSeq_toString_java_lang_String_R_java_lang_String,
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
	{ "mode", "()I" },
	{ "each", "(Larc/func/Intc;)V" },
	{ "count", "(I)I" },
	{ "sum", "()I" },
	{ "chunked", "(ILarc/func/Cons;)V" },
	{ "addUnique", "(I)Z" },
	{ "add", "(I)V" },
	{ "add", "(II)V" },
	{ "add", "(III)V" },
	{ "add", "(IIII)V" },
	{ "addAll", "(Larc/struct/IntSeq;)V" },
	{ "addAll", "(Larc/struct/IntSeq;II)V" },
	{ "addAll", "([I)V" },
	{ "addAll", "([III)V" },
	{ "get", "(I)I" },
	{ "set", "(II)V" },
	{ "incr", "(II)V" },
	{ "mul", "(II)V" },
	{ "insert", "(II)V" },
	{ "swap", "(II)V" },
	{ "contains", "(I)Z" },
	{ "indexOf", "(I)I" },
	{ "lastIndexOf", "(I)I" },
	{ "removeValue", "(I)Z" },
	{ "removeIndex", "(I)I" },
	{ "removeRange", "(II)V" },
	{ "removeAll", "(Larc/struct/IntSeq;)Z" },
	{ "pop", "()I" },
	{ "peek", "()I" },
	{ "first", "()I" },
	{ "isEmpty", "()Z" },
	{ "clear", "()V" },
	{ "shrink", "()[I" },
	{ "ensureCapacity", "(I)[I" },
	{ "setSize", "(I)[I" },
	{ "resize", "(I)[I" },
	{ "sort", "()V" },
	{ "reverse", "()V" },
	{ "shuffle", "()V" },
	{ "shuffle", "(Larc/math/Rand;)V" },
	{ "truncate", "(I)V" },
	{ "random", "()I" },
	{ "toArray", "()[I" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "items", getArrayClass(&class_int, 1), offsetof(arc_struct_IntSeq, F_items), "[I", 1 },
	{ "size", &class_int, offsetof(arc_struct_IntSeq, F_size), "I", 1 },
	{ "ordered", &class_boolean, offsetof(arc_struct_IntSeq, F_ordered), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "range", (intptr_t) SM_arc_struct_IntSeq_range_int_int_R_arc_struct_IntSeq, 0, "(II)Larc/struct/IntSeq;", 9 },
	{ "<init>", (intptr_t) init_arc_struct_IntSeq, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_IntSeq_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_IntSeq_boolean_int, 0, "(ZI)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_IntSeq_arc_struct_IntSeq, 0, "(Larc/struct/IntSeq;)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_IntSeq_Array1_int, 0, "([I)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_IntSeq_boolean_Array1_int_int_int, 0, "(Z[III)V", 1 },
	{ "with", (intptr_t) SM_arc_struct_IntSeq_with_Array1_int_R_arc_struct_IntSeq, 0, "([I)Larc/struct/IntSeq;", 137 },
	{ "mode", (intptr_t) M_arc_struct_IntSeq_mode_R_int, VTABLE_arc_struct_IntSeq_mode_R_int, "()I", 1 },
	{ "each", (intptr_t) M_arc_struct_IntSeq_each_arc_func_Intc, VTABLE_arc_struct_IntSeq_each_arc_func_Intc, "(Larc/func/Intc;)V", 1 },
	{ "count", (intptr_t) M_arc_struct_IntSeq_count_int_R_int, VTABLE_arc_struct_IntSeq_count_int_R_int, "(I)I", 1 },
	{ "sum", (intptr_t) M_arc_struct_IntSeq_sum_R_int, VTABLE_arc_struct_IntSeq_sum_R_int, "()I", 1 },
	{ "chunked", (intptr_t) M_arc_struct_IntSeq_chunked_int_arc_func_Cons, VTABLE_arc_struct_IntSeq_chunked_int_arc_func_Cons, "(ILarc/func/Cons;)V", 1 },
	{ "addUnique", (intptr_t) M_arc_struct_IntSeq_addUnique_int_R_boolean, VTABLE_arc_struct_IntSeq_addUnique_int_R_boolean, "(I)Z", 1 },
	{ "add", (intptr_t) M_arc_struct_IntSeq_add_int, VTABLE_arc_struct_IntSeq_add_int, "(I)V", 1 },
	{ "add", (intptr_t) M_arc_struct_IntSeq_add_int_int, VTABLE_arc_struct_IntSeq_add_int_int, "(II)V", 1 },
	{ "add", (intptr_t) M_arc_struct_IntSeq_add_int_int_int, VTABLE_arc_struct_IntSeq_add_int_int_int, "(III)V", 1 },
	{ "add", (intptr_t) M_arc_struct_IntSeq_add_int_int_int_int, VTABLE_arc_struct_IntSeq_add_int_int_int_int, "(IIII)V", 1 },
	{ "addAll", (intptr_t) M_arc_struct_IntSeq_addAll_arc_struct_IntSeq, VTABLE_arc_struct_IntSeq_addAll_arc_struct_IntSeq, "(Larc/struct/IntSeq;)V", 1 },
	{ "addAll", (intptr_t) M_arc_struct_IntSeq_addAll_arc_struct_IntSeq_int_int, VTABLE_arc_struct_IntSeq_addAll_arc_struct_IntSeq_int_int, "(Larc/struct/IntSeq;II)V", 1 },
	{ "addAll", (intptr_t) M_arc_struct_IntSeq_addAll_Array1_int, VTABLE_arc_struct_IntSeq_addAll_Array1_int, "([I)V", 129 },
	{ "addAll", (intptr_t) M_arc_struct_IntSeq_addAll_Array1_int_int_int, VTABLE_arc_struct_IntSeq_addAll_Array1_int_int_int, "([III)V", 1 },
	{ "get", (intptr_t) M_arc_struct_IntSeq_get_int_R_int, VTABLE_arc_struct_IntSeq_get_int_R_int, "(I)I", 1 },
	{ "set", (intptr_t) M_arc_struct_IntSeq_set_int_int, VTABLE_arc_struct_IntSeq_set_int_int, "(II)V", 1 },
	{ "incr", (intptr_t) M_arc_struct_IntSeq_incr_int_int, VTABLE_arc_struct_IntSeq_incr_int_int, "(II)V", 1 },
	{ "mul", (intptr_t) M_arc_struct_IntSeq_mul_int_int, VTABLE_arc_struct_IntSeq_mul_int_int, "(II)V", 1 },
	{ "insert", (intptr_t) M_arc_struct_IntSeq_insert_int_int, VTABLE_arc_struct_IntSeq_insert_int_int, "(II)V", 1 },
	{ "swap", (intptr_t) M_arc_struct_IntSeq_swap_int_int, VTABLE_arc_struct_IntSeq_swap_int_int, "(II)V", 1 },
	{ "contains", (intptr_t) M_arc_struct_IntSeq_contains_int_R_boolean, VTABLE_arc_struct_IntSeq_contains_int_R_boolean, "(I)Z", 1 },
	{ "indexOf", (intptr_t) M_arc_struct_IntSeq_indexOf_int_R_int, VTABLE_arc_struct_IntSeq_indexOf_int_R_int, "(I)I", 1 },
	{ "lastIndexOf", (intptr_t) M_arc_struct_IntSeq_lastIndexOf_int_R_int, VTABLE_arc_struct_IntSeq_lastIndexOf_int_R_int, "(I)I", 1 },
	{ "removeValue", (intptr_t) M_arc_struct_IntSeq_removeValue_int_R_boolean, VTABLE_arc_struct_IntSeq_removeValue_int_R_boolean, "(I)Z", 1 },
	{ "removeIndex", (intptr_t) M_arc_struct_IntSeq_removeIndex_int_R_int, VTABLE_arc_struct_IntSeq_removeIndex_int_R_int, "(I)I", 1 },
	{ "removeRange", (intptr_t) M_arc_struct_IntSeq_removeRange_int_int, VTABLE_arc_struct_IntSeq_removeRange_int_int, "(II)V", 1 },
	{ "removeAll", (intptr_t) M_arc_struct_IntSeq_removeAll_arc_struct_IntSeq_R_boolean, VTABLE_arc_struct_IntSeq_removeAll_arc_struct_IntSeq_R_boolean, "(Larc/struct/IntSeq;)Z", 1 },
	{ "pop", (intptr_t) M_arc_struct_IntSeq_pop_R_int, VTABLE_arc_struct_IntSeq_pop_R_int, "()I", 1 },
	{ "peek", (intptr_t) M_arc_struct_IntSeq_peek_R_int, VTABLE_arc_struct_IntSeq_peek_R_int, "()I", 1 },
	{ "first", (intptr_t) M_arc_struct_IntSeq_first_R_int, VTABLE_arc_struct_IntSeq_first_R_int, "()I", 1 },
	{ "isEmpty", (intptr_t) M_arc_struct_IntSeq_isEmpty_R_boolean, VTABLE_arc_struct_IntSeq_isEmpty_R_boolean, "()Z", 1 },
	{ "clear", (intptr_t) M_arc_struct_IntSeq_clear, VTABLE_arc_struct_IntSeq_clear, "()V", 1 },
	{ "shrink", (intptr_t) M_arc_struct_IntSeq_shrink_R_Array1_int, VTABLE_arc_struct_IntSeq_shrink_R_Array1_int, "()[I", 1 },
	{ "ensureCapacity", (intptr_t) M_arc_struct_IntSeq_ensureCapacity_int_R_Array1_int, VTABLE_arc_struct_IntSeq_ensureCapacity_int_R_Array1_int, "(I)[I", 1 },
	{ "setSize", (intptr_t) M_arc_struct_IntSeq_setSize_int_R_Array1_int, VTABLE_arc_struct_IntSeq_setSize_int_R_Array1_int, "(I)[I", 1 },
	{ "resize", (intptr_t) M_arc_struct_IntSeq_resize_int_R_Array1_int, VTABLE_arc_struct_IntSeq_resize_int_R_Array1_int, "(I)[I", 4 },
	{ "sort", (intptr_t) M_arc_struct_IntSeq_sort, VTABLE_arc_struct_IntSeq_sort, "()V", 1 },
	{ "reverse", (intptr_t) M_arc_struct_IntSeq_reverse, VTABLE_arc_struct_IntSeq_reverse, "()V", 1 },
	{ "shuffle", (intptr_t) M_arc_struct_IntSeq_shuffle, VTABLE_arc_struct_IntSeq_shuffle, "()V", 1 },
	{ "shuffle", (intptr_t) M_arc_struct_IntSeq_shuffle_arc_math_Rand, VTABLE_arc_struct_IntSeq_shuffle_arc_math_Rand, "(Larc/math/Rand;)V", 1 },
	{ "truncate", (intptr_t) M_arc_struct_IntSeq_truncate_int, VTABLE_arc_struct_IntSeq_truncate_int, "(I)V", 1 },
	{ "random", (intptr_t) M_arc_struct_IntSeq_random_R_int, VTABLE_arc_struct_IntSeq_random_R_int, "()I", 1 },
	{ "toArray", (intptr_t) M_arc_struct_IntSeq_toArray_R_Array1_int, VTABLE_arc_struct_IntSeq_toArray_R_Array1_int, "()[I", 1 },
	{ "hashCode", (intptr_t) M_arc_struct_IntSeq_hashCode_R_int, VTABLE_arc_struct_IntSeq_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_arc_struct_IntSeq_equals_java_lang_Object_R_boolean, VTABLE_arc_struct_IntSeq_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_arc_struct_IntSeq_toString_R_java_lang_String, VTABLE_arc_struct_IntSeq_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_arc_struct_IntSeq_toString_java_lang_String_R_java_lang_String, VTABLE_arc_struct_IntSeq_toString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
};

Class class_arc_struct_IntSeq{
		.nativeName = (intptr_t) "arc/struct/IntSeq",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_IntSeq),
		.classVtable = (intptr_t) vtable_arc_struct_IntSeq,
		.staticInitializer = (intptr_t) clinit_arc_struct_IntSeq,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_IntSeq,
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
		.methodCount = 55,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 55,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_IntSeq = registerClass(&class_arc_struct_IntSeq);

}
