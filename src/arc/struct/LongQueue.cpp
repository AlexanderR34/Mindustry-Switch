#include "arc/struct/LongQueue.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "arc/struct/LongQueue.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_struct_LongQueue(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_LongQueue *) object;
	if (self->F_values)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values)->clazz)->markFunction)((jobject) self->F_values, mark, depth + 1);
}

void clinit_arc_struct_LongQueue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_struct_LongQueue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongQueue:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_LongQueue(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_arc_struct_LongQueue_int(ctx, (frame[0].o), (16));
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_LongQueue_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongQueue:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_LongQueue(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(25);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(12);
	((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_head = (jint(0));
	LINE_NUMBER(17);
	((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_tail = (jint(0));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_long, (frame[1].i));
	((arc_struct_LongQueue *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_LongQueue_Array1_long(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongQueue:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_LongQueue(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (((jarray) nullCheck(ctx, (frame[1].o)))->length), (16));
	init_arc_struct_LongQueue_int(ctx, sp[0].o, temp0);
	LINE_NUMBER(31);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(32);
	((func_arc_struct_LongQueue_addLast_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_LongQueue_addLast_long])(ctx, (frame[0].o), ((jlong)ARRAY_ACCESS(jlong, (frame[1].o), (frame[2].i))));
	LINE_NUMBER(31);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(34);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_LongQueue_addLast_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongQueue:addLast", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[3].o = sp[0].o;
	LINE_NUMBER(43);
	if (((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(44);
	((func_arc_struct_LongQueue_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_LongQueue_resize_int])(ctx, (frame[0].o), ((((jarray) nullCheck(ctx, (frame[3].o)))->length) << (jint(1))));
	LINE_NUMBER(45);
	sp[0].o = (jobject)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(48);
	sp[0].o = frame[3].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((arc_struct_LongQueue *) NULL_CHECK(sp[1].o))->F_tail;
	((arc_struct_LongQueue *) NULL_CHECK(sp[1].o))->F_tail = (temp0 + (jint(1)));
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = (frame[1].l);
	LINE_NUMBER(49);
	if (((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_tail) != (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(50);
	((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_tail = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	((arc_struct_LongQueue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_LongQueue *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_LongQueue_addFirst_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongQueue:addFirst", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[3].o = sp[0].o;
	LINE_NUMBER(63);
	if (((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(64);
	((func_arc_struct_LongQueue_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_LongQueue_resize_int])(ctx, (frame[0].o), ((((jarray) nullCheck(ctx, (frame[3].o)))->length) << (jint(1))));
	LINE_NUMBER(65);
	sp[0].o = (jobject)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(68);
	frame[4].i = ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_head);
	LINE_NUMBER(69);
	INST_IINC(4, -1);
	LINE_NUMBER(70);
	if ((frame[4].i) != (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(71);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_7:;
	{
	LINE_NUMBER(73);
	ARRAY_ACCESS(jlong, (frame[3].o), (frame[4].i)) = (frame[1].l);
	LINE_NUMBER(75);
	((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_head = (frame[4].i);
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	((arc_struct_LongQueue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_LongQueue *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_LongQueue_shrink_R_Array1_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongQueue:shrink", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_values;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	((func_arc_struct_LongQueue_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_LongQueue_resize_int])(ctx, (frame[0].o), ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size));
	}
label_1:;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_struct_LongQueue_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongQueue:ensureCapacity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(94);
	frame[2].i = (((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i));
	LINE_NUMBER(95);
	sp[0].o = (jobject)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_values;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(96);
	((func_arc_struct_LongQueue_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_LongQueue_resize_int])(ctx, (frame[0].o), (frame[2].i));
	}
label_2:;
	LINE_NUMBER(98);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_LongQueue_resize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongQueue:resize", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(103);
	frame[3].i = ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_head);
	LINE_NUMBER(104);
	frame[4].i = ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(106);
	sp[0].o = (jobject) createArray(ctx, &class_long, (frame[1].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(107);
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(109);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (frame[3].i), (frame[5].o), (jint(0)), ((frame[4].i) - (frame[3].i)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(110);
	if (((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(112);
	frame[6].i = ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i));
	LINE_NUMBER(113);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (frame[3].i), (frame[5].o), (jint(0)), (frame[6].i));
	LINE_NUMBER(114);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (jint(0)), (frame[5].o), (frame[6].i), (frame[4].i));
	}
label_7:;
	{
	LINE_NUMBER(116);
	((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_values = (jref) (frame[5].o);
	LINE_NUMBER(117);
	((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_head = (jint(0));
	LINE_NUMBER(118);
	((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_tail = ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_arc_struct_LongQueue_removeFirst_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongQueue:removeFirst", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(127);
	if (((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(129);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Queue is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[1].o = sp[0].o;
	LINE_NUMBER(134);
	frame[2].l = ((jlong)ARRAY_ACCESS(jlong, (frame[1].o), ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_head)));
	LINE_NUMBER(135);
	ARRAY_ACCESS(jlong, (frame[1].o), ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_head)) = (jlong(0));
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	((arc_struct_LongQueue *) NULL_CHECK(sp[0].o))->F_head = (((jint)((arc_struct_LongQueue *) NULL_CHECK(sp[0].o))->F_head) + (jint(1)));
	LINE_NUMBER(137);
	if (((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_head) != (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_7;
	}
	{
	LINE_NUMBER(138);
	((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_head = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	((arc_struct_LongQueue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_LongQueue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return (frame[2].l);
	}

	popStackFrame(ctx);
}

jlong M_arc_struct_LongQueue_removeLast_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongQueue:removeLast", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(152);
	if (((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(153);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Queue is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[1].o = sp[0].o;
	LINE_NUMBER(157);
	frame[2].i = ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(158);
	INST_IINC(2, -1);
	LINE_NUMBER(159);
	if ((frame[2].i) != (jint(-1))) goto label_6;
	}
	{
	LINE_NUMBER(160);
	frame[2].i = ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)));
	}
label_6:;
	{
	LINE_NUMBER(162);
	frame[3].l = ((jlong)ARRAY_ACCESS(jlong, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(163);
	ARRAY_ACCESS(jlong, (frame[1].o), (frame[2].i)) = (jlong(0));
	LINE_NUMBER(164);
	((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_tail = (frame[2].i);
	LINE_NUMBER(165);
	sp[0].o = frame[0].o;
	((arc_struct_LongQueue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_LongQueue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return (frame[3].l);
	}

	popStackFrame(ctx);
}

jint M_arc_struct_LongQueue_indexOf_long_boolean_R_int(jcontext ctx, jobject self, jlong param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongQueue:indexOf", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].i = param1;
	{
	LINE_NUMBER(176);
	if (((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[4].o = sp[0].o;
	LINE_NUMBER(178);
	frame[5].i = ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_head);
	frame[6].i = ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(179);
	if ((frame[5].i) >= (frame[6].i)) goto label_5;
	}
	{
	LINE_NUMBER(180);
	frame[7].i = (frame[5].i);
	}
label_7:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_8;
	}
	{
	LINE_NUMBER(181);
	if ((longCompare(((jlong)ARRAY_ACCESS(jlong, (frame[4].o), (frame[7].i))), (frame[1].l))) != 0) goto label_10;
	}
	{
	popStackFrame(ctx);
	return ((frame[7].i) - (frame[5].i));
	}
label_10:;
	{
	LINE_NUMBER(180);
	INST_IINC(7, 1);
	goto label_7;
	}
label_8:;
	goto label_11;
label_5:;
	{
	LINE_NUMBER(183);
	frame[7].i = (frame[5].i);
	frame[8].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	}
label_13:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_14;
	}
	{
	LINE_NUMBER(184);
	if ((longCompare(((jlong)ARRAY_ACCESS(jlong, (frame[4].o), (frame[7].i))), (frame[1].l))) != 0) goto label_16;
	}
	{
	popStackFrame(ctx);
	return ((frame[7].i) - (frame[5].i));
	}
label_16:;
	{
	LINE_NUMBER(183);
	INST_IINC(7, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(185);
	frame[7].i = (jint(0));
	}
label_17:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_11;
	}
	{
	LINE_NUMBER(186);
	if ((longCompare(((jlong)ARRAY_ACCESS(jlong, (frame[4].o), (frame[7].i))), (frame[1].l))) != 0) goto label_19;
	}
	{
	popStackFrame(ctx);
	return (((frame[7].i) + (((jarray) nullCheck(ctx, (frame[4].o)))->length)) - (frame[5].i));
	}
label_19:;
	{
	LINE_NUMBER(185);
	INST_IINC(7, 1);
	goto label_17;
	}
label_11:;
	{
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_LongQueue_removeValue_long_boolean_R_boolean(jcontext ctx, jobject self, jlong param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongQueue:removeValue", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].i = param1;
	{
	LINE_NUMBER(197);
	jint temp0 = (jint)((func_arc_struct_LongQueue_indexOf_long_boolean_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_LongQueue_indexOf_long_boolean_R_int])(ctx, (frame[0].o), (frame[1].l), (frame[3].i));
	frame[4].i = temp0;
	LINE_NUMBER(198);
	if ((frame[4].i) != (jint(-1))) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(199);
	jlong temp0 = (jlong)((func_arc_struct_LongQueue_removeIndex_int_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_LongQueue_removeIndex_int_R_long])(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jlong M_arc_struct_LongQueue_removeIndex_int_R_long(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongQueue:removeIndex", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(205);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be < 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(206);
	if ((frame[1].i) < ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(209);
	frame[3].i = ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_head);
	frame[4].i = ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(210);
	frame[1].i = ((frame[1].i) + (frame[3].i));
	LINE_NUMBER(212);
	if ((frame[3].i) >= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(213);
	frame[5].l = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(214);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((frame[1].i) + (jint(1))), (frame[2].o), (frame[1].i), ((frame[4].i) - (frame[1].i)));
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	((arc_struct_LongQueue *) NULL_CHECK(sp[0].o))->F_tail = (((jint)((arc_struct_LongQueue *) NULL_CHECK(sp[0].o))->F_tail) - (jint(1)));
	goto label_11;
	}
label_7:;
	{
	LINE_NUMBER(216);
	if ((frame[1].i) < (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_12;
	}
	{
	LINE_NUMBER(217);
	frame[1].i = ((frame[1].i) - (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	LINE_NUMBER(218);
	frame[5].l = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(219);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((frame[1].i) + (jint(1))), (frame[2].o), (frame[1].i), ((frame[4].i) - (frame[1].i)));
	LINE_NUMBER(220);
	sp[0].o = frame[0].o;
	((arc_struct_LongQueue *) NULL_CHECK(sp[0].o))->F_tail = (((jint)((arc_struct_LongQueue *) NULL_CHECK(sp[0].o))->F_tail) - (jint(1)));
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(222);
	frame[5].l = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(223);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (frame[3].i), (frame[2].o), ((frame[3].i) + (jint(1))), ((frame[1].i) - (frame[3].i)));
	LINE_NUMBER(224);
	sp[0].o = frame[0].o;
	((arc_struct_LongQueue *) NULL_CHECK(sp[0].o))->F_head = (((jint)((arc_struct_LongQueue *) NULL_CHECK(sp[0].o))->F_head) + (jint(1)));
	LINE_NUMBER(225);
	if (((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_head) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_11;
	}
	{
	LINE_NUMBER(226);
	((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_head = (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	((arc_struct_LongQueue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_LongQueue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return (frame[5].l);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_LongQueue_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongQueue:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(235);
	if (((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

jlong M_arc_struct_LongQueue_first_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongQueue:first", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(245);
	if (((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(247);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Queue is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return ((jlong)ARRAY_ACCESS(jlong, sp[0].o, ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_head)));
	}

	popStackFrame(ctx);
}

jlong M_arc_struct_LongQueue_last_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongQueue:last", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(259);
	if (((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(261);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Queue is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[1].o = sp[0].o;
	LINE_NUMBER(264);
	frame[2].i = ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(265);
	INST_IINC(2, -1);
	LINE_NUMBER(266);
	if ((frame[2].i) != (jint(-1))) goto label_6;
	}
	{
	LINE_NUMBER(267);
	frame[2].i = ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)));
	}
label_6:;
	{
	LINE_NUMBER(269);
	popStackFrame(ctx);
	return ((jlong)ARRAY_ACCESS(jlong, (frame[1].o), (frame[2].i)));
	}

	popStackFrame(ctx);
}

jlong M_arc_struct_LongQueue_get_int_R_long(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongQueue:get", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(278);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be < 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(279);
	if ((frame[1].i) < ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(282);
	frame[3].i = (((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_head) + (frame[1].i));
	LINE_NUMBER(283);
	if ((frame[3].i) < (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(284);
	frame[3].i = ((frame[3].i) - (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	}
label_5:;
	{
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[3].i)));
	}

	popStackFrame(ctx);
}

void M_arc_struct_LongQueue_set_int_long(jcontext ctx, jobject self, jint param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongQueue:set", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(290);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be < 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(291);
	if ((frame[1].i) < ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[4].o = sp[0].o;
	LINE_NUMBER(294);
	frame[5].i = (((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_head) + (frame[1].i));
	LINE_NUMBER(295);
	if ((frame[5].i) < (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(296);
	frame[5].i = ((frame[5].i) - (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	}
label_5:;
	{
	LINE_NUMBER(298);
	ARRAY_ACCESS(jlong, (frame[4].o), (frame[5].i)) = (frame[2].l);
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_LongQueue_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongQueue:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(303);
	if (((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(304);
	((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_head = (jint(0));
	LINE_NUMBER(305);
	((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_tail = (jint(0));
	LINE_NUMBER(306);
	((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_LongQueue_toArray_R_Array1_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongQueue:toArray", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject) createArray(ctx, &class_long, ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(311);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(312);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jlong temp1 = (jlong)((func_arc_struct_LongQueue_get_int_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_LongQueue_get_int_R_long])(ctx, (frame[0].o), (frame[2].i));
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = temp1;
	LINE_NUMBER(311);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(314);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_LongQueue_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongQueue:toString", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(318);
	if (((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(319);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"[]"_j)));
	}
label_1:;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[1].o = sp[0].o;
	LINE_NUMBER(322);
	frame[2].i = ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_head);
	LINE_NUMBER(323);
	frame[3].i = ((jint)((arc_struct_LongQueue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(325);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (64));
	frame[4].o = sp[0].o;
	LINE_NUMBER(326);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[4].o), (91));
	LINE_NUMBER(327);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, (frame[4].o), ((jlong)ARRAY_ACCESS(jlong, (frame[1].o), (frame[2].i))));
	LINE_NUMBER(328);
	frame[5].i = (((frame[2].i) + (jint(1))) % (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	}
label_9:;
	{
	if ((frame[5].i) == (frame[3].i)) goto label_10;
	}
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jlong)ARRAY_ACCESS(jlong, (frame[1].o), (frame[5].i))));
	LINE_NUMBER(328);
	frame[5].i = (((frame[5].i) + (jint(1))) % (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[4].o), (93));
	LINE_NUMBER(332);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_LongQueue[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_LongQueue_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_LongQueue_addLast_long,
	(void *) M_arc_struct_LongQueue_addFirst_long,
	(void *) M_arc_struct_LongQueue_shrink_R_Array1_long,
	(void *) M_arc_struct_LongQueue_ensureCapacity_int,
	(void *) M_arc_struct_LongQueue_resize_int,
	(void *) M_arc_struct_LongQueue_removeFirst_R_long,
	(void *) M_arc_struct_LongQueue_removeLast_R_long,
	(void *) M_arc_struct_LongQueue_indexOf_long_boolean_R_int,
	(void *) M_arc_struct_LongQueue_removeValue_long_boolean_R_boolean,
	(void *) M_arc_struct_LongQueue_removeIndex_int_R_long,
	(void *) M_arc_struct_LongQueue_isEmpty_R_boolean,
	(void *) M_arc_struct_LongQueue_first_R_long,
	(void *) M_arc_struct_LongQueue_last_R_long,
	(void *) M_arc_struct_LongQueue_get_int_R_long,
	(void *) M_arc_struct_LongQueue_set_int_long,
	(void *) M_arc_struct_LongQueue_clear,
	(void *) M_arc_struct_LongQueue_toArray_R_Array1_long,
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
	{ "addLast", "(J)V" },
	{ "addFirst", "(J)V" },
	{ "shrink", "()[J" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "removeFirst", "()J" },
	{ "removeLast", "()J" },
	{ "indexOf", "(JZ)I" },
	{ "removeValue", "(JZ)Z" },
	{ "removeIndex", "(I)J" },
	{ "isEmpty", "()Z" },
	{ "first", "()J" },
	{ "last", "()J" },
	{ "get", "(I)J" },
	{ "set", "(IJ)V" },
	{ "clear", "()V" },
	{ "toArray", "()[J" },
};

static FieldMetadata fields[] {
	{ "size", &class_int, offsetof(arc_struct_LongQueue, F_size), "I", 1 },
	{ "values", getArrayClass(&class_long, 1), offsetof(arc_struct_LongQueue, F_values), "[J", 1 },
	{ "head", &class_int, offsetof(arc_struct_LongQueue, F_head), "I", 4 },
	{ "tail", &class_int, offsetof(arc_struct_LongQueue, F_tail), "I", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_LongQueue, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_LongQueue_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_LongQueue_Array1_long, 0, "([J)V", 1 },
	{ "addLast", (intptr_t) M_arc_struct_LongQueue_addLast_long, VTABLE_arc_struct_LongQueue_addLast_long, "(J)V", 1 },
	{ "addFirst", (intptr_t) M_arc_struct_LongQueue_addFirst_long, VTABLE_arc_struct_LongQueue_addFirst_long, "(J)V", 1 },
	{ "shrink", (intptr_t) M_arc_struct_LongQueue_shrink_R_Array1_long, VTABLE_arc_struct_LongQueue_shrink_R_Array1_long, "()[J", 1 },
	{ "ensureCapacity", (intptr_t) M_arc_struct_LongQueue_ensureCapacity_int, VTABLE_arc_struct_LongQueue_ensureCapacity_int, "(I)V", 1 },
	{ "resize", (intptr_t) M_arc_struct_LongQueue_resize_int, VTABLE_arc_struct_LongQueue_resize_int, "(I)V", 4 },
	{ "removeFirst", (intptr_t) M_arc_struct_LongQueue_removeFirst_R_long, VTABLE_arc_struct_LongQueue_removeFirst_R_long, "()J", 1 },
	{ "removeLast", (intptr_t) M_arc_struct_LongQueue_removeLast_R_long, VTABLE_arc_struct_LongQueue_removeLast_R_long, "()J", 1 },
	{ "indexOf", (intptr_t) M_arc_struct_LongQueue_indexOf_long_boolean_R_int, VTABLE_arc_struct_LongQueue_indexOf_long_boolean_R_int, "(JZ)I", 1 },
	{ "removeValue", (intptr_t) M_arc_struct_LongQueue_removeValue_long_boolean_R_boolean, VTABLE_arc_struct_LongQueue_removeValue_long_boolean_R_boolean, "(JZ)Z", 1 },
	{ "removeIndex", (intptr_t) M_arc_struct_LongQueue_removeIndex_int_R_long, VTABLE_arc_struct_LongQueue_removeIndex_int_R_long, "(I)J", 1 },
	{ "isEmpty", (intptr_t) M_arc_struct_LongQueue_isEmpty_R_boolean, VTABLE_arc_struct_LongQueue_isEmpty_R_boolean, "()Z", 1 },
	{ "first", (intptr_t) M_arc_struct_LongQueue_first_R_long, VTABLE_arc_struct_LongQueue_first_R_long, "()J", 1 },
	{ "last", (intptr_t) M_arc_struct_LongQueue_last_R_long, VTABLE_arc_struct_LongQueue_last_R_long, "()J", 1 },
	{ "get", (intptr_t) M_arc_struct_LongQueue_get_int_R_long, VTABLE_arc_struct_LongQueue_get_int_R_long, "(I)J", 1 },
	{ "set", (intptr_t) M_arc_struct_LongQueue_set_int_long, VTABLE_arc_struct_LongQueue_set_int_long, "(IJ)V", 1 },
	{ "clear", (intptr_t) M_arc_struct_LongQueue_clear, VTABLE_arc_struct_LongQueue_clear, "()V", 1 },
	{ "toArray", (intptr_t) M_arc_struct_LongQueue_toArray_R_Array1_long, VTABLE_arc_struct_LongQueue_toArray_R_Array1_long, "()[J", 1 },
	{ "toString", (intptr_t) M_arc_struct_LongQueue_toString_R_java_lang_String, VTABLE_arc_struct_LongQueue_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_arc_struct_LongQueue{
		.nativeName = (intptr_t) "arc/struct/LongQueue",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_LongQueue),
		.classVtable = (intptr_t) vtable_arc_struct_LongQueue,
		.staticInitializer = (intptr_t) clinit_arc_struct_LongQueue,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_LongQueue,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_LongQueue = registerClass(&class_arc_struct_LongQueue);

}
