#include "arc/struct/IntQueue.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "arc/struct/IntQueue.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_struct_IntQueue(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_IntQueue *) object;
	if (self->F_values)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values)->clazz)->markFunction)((jobject) self->F_values, mark, depth + 1);
}

void clinit_arc_struct_IntQueue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_struct_IntQueue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntQueue:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_IntQueue(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_arc_struct_IntQueue_int(ctx, (frame[0].o), (16));
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_IntQueue_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntQueue:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_IntQueue(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(25);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(12);
	((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_head = (jint(0));
	LINE_NUMBER(17);
	((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_tail = (jint(0));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntQueue_addLast_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntQueue:addLast", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(36);
	if (((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(37);
	((func_arc_struct_IntQueue_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntQueue_resize_int])(ctx, (frame[0].o), ((((jarray) nullCheck(ctx, (frame[2].o)))->length) << (jint(1))));
	LINE_NUMBER(38);
	sp[0].o = (jobject)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(41);
	sp[0].o = frame[2].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((arc_struct_IntQueue *) NULL_CHECK(sp[1].o))->F_tail;
	((arc_struct_IntQueue *) NULL_CHECK(sp[1].o))->F_tail = (temp0 + (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (frame[1].i);
	LINE_NUMBER(42);
	if (((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_tail) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(43);
	((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_tail = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntQueue_addFirst_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntQueue:addFirst", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(56);
	if (((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(57);
	((func_arc_struct_IntQueue_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntQueue_resize_int])(ctx, (frame[0].o), ((((jarray) nullCheck(ctx, (frame[2].o)))->length) << (jint(1))));
	LINE_NUMBER(58);
	sp[0].o = (jobject)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(61);
	frame[3].i = ((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_head);
	LINE_NUMBER(62);
	INST_IINC(3, -1);
	LINE_NUMBER(63);
	if ((frame[3].i) != (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(64);
	frame[3].i = ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (jint(1)));
	}
label_7:;
	{
	LINE_NUMBER(66);
	ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i)) = (frame[1].i);
	LINE_NUMBER(68);
	((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_head = (frame[3].i);
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_IntQueue_shrink_R_Array1_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntQueue:shrink", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_values;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == ((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	((func_arc_struct_IntQueue_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntQueue_resize_int])(ctx, (frame[0].o), ((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_size));
	}
label_1:;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntQueue_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntQueue:ensureCapacity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(87);
	frame[2].i = (((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i));
	LINE_NUMBER(88);
	sp[0].o = (jobject)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_values;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(89);
	((func_arc_struct_IntQueue_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntQueue_resize_int])(ctx, (frame[0].o), (frame[2].i));
	}
label_2:;
	LINE_NUMBER(91);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_IntQueue_resize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntQueue:resize", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(96);
	frame[3].i = ((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_head);
	LINE_NUMBER(97);
	frame[4].i = ((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(99);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(100);
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(102);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (frame[3].i), (frame[5].o), (jint(0)), ((frame[4].i) - (frame[3].i)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(103);
	if (((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(105);
	frame[6].i = ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i));
	LINE_NUMBER(106);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (frame[3].i), (frame[5].o), (jint(0)), (frame[6].i));
	LINE_NUMBER(107);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (jint(0)), (frame[5].o), (frame[6].i), (frame[4].i));
	}
label_7:;
	{
	LINE_NUMBER(109);
	((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_values = (jref) (frame[5].o);
	LINE_NUMBER(110);
	((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_head = (jint(0));
	LINE_NUMBER(111);
	((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_tail = ((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntQueue_removeFirst_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntQueue:removeFirst", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(120);
	if (((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(122);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Queue is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[1].o = sp[0].o;
	LINE_NUMBER(127);
	frame[2].i = ((jint)ARRAY_ACCESS(jint, (frame[1].o), ((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_head)));
	LINE_NUMBER(128);
	ARRAY_ACCESS(jint, (frame[1].o), ((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_head)) = (jint(0));
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_head = (((jint)((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_head) + (jint(1)));
	LINE_NUMBER(130);
	if (((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_head) != (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_7;
	}
	{
	LINE_NUMBER(131);
	((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_head = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntQueue_removeLast_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntQueue:removeLast", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(145);
	if (((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(146);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Queue is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[1].o = sp[0].o;
	LINE_NUMBER(150);
	frame[2].i = ((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(151);
	INST_IINC(2, -1);
	LINE_NUMBER(152);
	if ((frame[2].i) != (jint(-1))) goto label_6;
	}
	{
	LINE_NUMBER(153);
	frame[2].i = ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)));
	}
label_6:;
	{
	LINE_NUMBER(155);
	frame[3].i = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(156);
	ARRAY_ACCESS(jint, (frame[1].o), (frame[2].i)) = (jint(0));
	LINE_NUMBER(157);
	((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_tail = (frame[2].i);
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntQueue_indexOf_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntQueue:indexOf", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(168);
	if (((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(170);
	frame[3].i = ((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_head);
	frame[4].i = ((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(171);
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(172);
	frame[5].i = (frame[3].i);
	}
label_7:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_8;
	}
	{
	LINE_NUMBER(173);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[5].i))) != (frame[1].i)) goto label_10;
	}
	{
	popStackFrame(ctx);
	return ((frame[5].i) - (frame[3].i));
	}
label_10:;
	{
	LINE_NUMBER(172);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	goto label_11;
label_5:;
	{
	LINE_NUMBER(175);
	frame[5].i = (frame[3].i);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_13:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_14;
	}
	{
	LINE_NUMBER(176);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[5].i))) != (frame[1].i)) goto label_16;
	}
	{
	popStackFrame(ctx);
	return ((frame[5].i) - (frame[3].i));
	}
label_16:;
	{
	LINE_NUMBER(175);
	INST_IINC(5, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(177);
	frame[5].i = (jint(0));
	}
label_17:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_11;
	}
	{
	LINE_NUMBER(178);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[5].i))) != (frame[1].i)) goto label_19;
	}
	{
	popStackFrame(ctx);
	return (((frame[5].i) + (((jarray) nullCheck(ctx, (frame[2].o)))->length)) - (frame[3].i));
	}
label_19:;
	{
	LINE_NUMBER(177);
	INST_IINC(5, 1);
	goto label_17;
	}
label_11:;
	{
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_IntQueue_removeValue_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntQueue:removeValue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(188);
	jint temp0 = (jint)((func_arc_struct_IntQueue_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntQueue_indexOf_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(189);
	if ((frame[2].i) != (jint(-1))) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(190);
	jint temp0 = (jint)((func_arc_struct_IntQueue_removeIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntQueue_removeIndex_int_R_int])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntQueue_removeIndex_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntQueue:removeIndex", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(196);
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
	LINE_NUMBER(197);
	if ((frame[1].i) < ((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(200);
	frame[3].i = ((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_head);
	frame[4].i = ((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(201);
	frame[1].i = ((frame[1].i) + (frame[3].i));
	LINE_NUMBER(203);
	if ((frame[3].i) >= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(204);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(205);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((frame[1].i) + (jint(1))), (frame[2].o), (frame[1].i), ((frame[4].i) - (frame[1].i)));
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_tail = (((jint)((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_tail) - (jint(1)));
	goto label_11;
	}
label_7:;
	{
	LINE_NUMBER(207);
	if ((frame[1].i) < (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_12;
	}
	{
	LINE_NUMBER(208);
	frame[1].i = ((frame[1].i) - (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	LINE_NUMBER(209);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(210);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((frame[1].i) + (jint(1))), (frame[2].o), (frame[1].i), ((frame[4].i) - (frame[1].i)));
	LINE_NUMBER(211);
	sp[0].o = frame[0].o;
	((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_tail = (((jint)((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_tail) - (jint(1)));
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(213);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(214);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (frame[3].i), (frame[2].o), ((frame[3].i) + (jint(1))), ((frame[1].i) - (frame[3].i)));
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_head = (((jint)((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_head) + (jint(1)));
	LINE_NUMBER(216);
	if (((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_head) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_11;
	}
	{
	LINE_NUMBER(217);
	((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_head = (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(220);
	sp[0].o = frame[0].o;
	((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_IntQueue_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntQueue:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(226);
	if (((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

jint M_arc_struct_IntQueue_first_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntQueue:first", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(236);
	if (((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(238);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Queue is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_head)));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntQueue_last_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntQueue:last", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	if (((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(252);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Queue is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[1].o = sp[0].o;
	LINE_NUMBER(255);
	frame[2].i = ((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(256);
	INST_IINC(2, -1);
	LINE_NUMBER(257);
	if ((frame[2].i) != (jint(-1))) goto label_6;
	}
	{
	LINE_NUMBER(258);
	frame[2].i = ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)));
	}
label_6:;
	{
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[2].i)));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntQueue_get_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntQueue:get", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(269);
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
	LINE_NUMBER(270);
	if ((frame[1].i) < ((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(273);
	frame[3].i = (((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_head) + (frame[1].i));
	LINE_NUMBER(274);
	if ((frame[3].i) < (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(275);
	frame[3].i = ((frame[3].i) - (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	}
label_5:;
	{
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i)));
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntQueue_set_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntQueue:set", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(281);
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
	LINE_NUMBER(282);
	if ((frame[1].i) < ((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[3].o = sp[0].o;
	LINE_NUMBER(285);
	frame[4].i = (((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_head) + (frame[1].i));
	LINE_NUMBER(286);
	if ((frame[4].i) < (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(287);
	frame[4].i = ((frame[4].i) - (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	}
label_5:;
	{
	LINE_NUMBER(289);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i)) = (frame[2].i);
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntQueue_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntQueue:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(294);
	if (((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(295);
	((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_head = (jint(0));
	LINE_NUMBER(296);
	((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_tail = (jint(0));
	LINE_NUMBER(297);
	((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_IntQueue_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntQueue:toString", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(301);
	if (((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"[]"_j)));
	}
label_1:;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[1].o = sp[0].o;
	LINE_NUMBER(305);
	frame[2].i = ((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_head);
	LINE_NUMBER(306);
	frame[3].i = ((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(308);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (64));
	frame[4].o = sp[0].o;
	LINE_NUMBER(309);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[4].o), (91));
	LINE_NUMBER(310);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[4].o), ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[2].i))));
	LINE_NUMBER(311);
	frame[5].i = (((frame[2].i) + (jint(1))) % (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	}
label_9:;
	{
	if ((frame[5].i) == (frame[3].i)) goto label_10;
	}
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[5].i))));
	LINE_NUMBER(311);
	frame[5].i = (((frame[5].i) + (jint(1))) % (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[4].o), (93));
	LINE_NUMBER(315);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_IntQueue[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_IntQueue_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_IntQueue_addLast_int,
	(void *) M_arc_struct_IntQueue_addFirst_int,
	(void *) M_arc_struct_IntQueue_shrink_R_Array1_int,
	(void *) M_arc_struct_IntQueue_ensureCapacity_int,
	(void *) M_arc_struct_IntQueue_resize_int,
	(void *) M_arc_struct_IntQueue_removeFirst_R_int,
	(void *) M_arc_struct_IntQueue_removeLast_R_int,
	(void *) M_arc_struct_IntQueue_indexOf_int_R_int,
	(void *) M_arc_struct_IntQueue_removeValue_int_R_boolean,
	(void *) M_arc_struct_IntQueue_removeIndex_int_R_int,
	(void *) M_arc_struct_IntQueue_isEmpty_R_boolean,
	(void *) M_arc_struct_IntQueue_first_R_int,
	(void *) M_arc_struct_IntQueue_last_R_int,
	(void *) M_arc_struct_IntQueue_get_int_R_int,
	(void *) M_arc_struct_IntQueue_set_int_int,
	(void *) M_arc_struct_IntQueue_clear,
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
	{ "addLast", "(I)V" },
	{ "addFirst", "(I)V" },
	{ "shrink", "()[I" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "removeFirst", "()I" },
	{ "removeLast", "()I" },
	{ "indexOf", "(I)I" },
	{ "removeValue", "(I)Z" },
	{ "removeIndex", "(I)I" },
	{ "isEmpty", "()Z" },
	{ "first", "()I" },
	{ "last", "()I" },
	{ "get", "(I)I" },
	{ "set", "(II)V" },
	{ "clear", "()V" },
};

static FieldMetadata fields[] {
	{ "size", &class_int, offsetof(arc_struct_IntQueue, F_size), "I", 1 },
	{ "values", getArrayClass(&class_int, 1), offsetof(arc_struct_IntQueue, F_values), "[I", 1 },
	{ "head", &class_int, offsetof(arc_struct_IntQueue, F_head), "I", 4 },
	{ "tail", &class_int, offsetof(arc_struct_IntQueue, F_tail), "I", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_IntQueue, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_IntQueue_int, 0, "(I)V", 1 },
	{ "addLast", (intptr_t) M_arc_struct_IntQueue_addLast_int, VTABLE_arc_struct_IntQueue_addLast_int, "(I)V", 1 },
	{ "addFirst", (intptr_t) M_arc_struct_IntQueue_addFirst_int, VTABLE_arc_struct_IntQueue_addFirst_int, "(I)V", 1 },
	{ "shrink", (intptr_t) M_arc_struct_IntQueue_shrink_R_Array1_int, VTABLE_arc_struct_IntQueue_shrink_R_Array1_int, "()[I", 1 },
	{ "ensureCapacity", (intptr_t) M_arc_struct_IntQueue_ensureCapacity_int, VTABLE_arc_struct_IntQueue_ensureCapacity_int, "(I)V", 1 },
	{ "resize", (intptr_t) M_arc_struct_IntQueue_resize_int, VTABLE_arc_struct_IntQueue_resize_int, "(I)V", 4 },
	{ "removeFirst", (intptr_t) M_arc_struct_IntQueue_removeFirst_R_int, VTABLE_arc_struct_IntQueue_removeFirst_R_int, "()I", 1 },
	{ "removeLast", (intptr_t) M_arc_struct_IntQueue_removeLast_R_int, VTABLE_arc_struct_IntQueue_removeLast_R_int, "()I", 1 },
	{ "indexOf", (intptr_t) M_arc_struct_IntQueue_indexOf_int_R_int, VTABLE_arc_struct_IntQueue_indexOf_int_R_int, "(I)I", 1 },
	{ "removeValue", (intptr_t) M_arc_struct_IntQueue_removeValue_int_R_boolean, VTABLE_arc_struct_IntQueue_removeValue_int_R_boolean, "(I)Z", 1 },
	{ "removeIndex", (intptr_t) M_arc_struct_IntQueue_removeIndex_int_R_int, VTABLE_arc_struct_IntQueue_removeIndex_int_R_int, "(I)I", 1 },
	{ "isEmpty", (intptr_t) M_arc_struct_IntQueue_isEmpty_R_boolean, VTABLE_arc_struct_IntQueue_isEmpty_R_boolean, "()Z", 1 },
	{ "first", (intptr_t) M_arc_struct_IntQueue_first_R_int, VTABLE_arc_struct_IntQueue_first_R_int, "()I", 1 },
	{ "last", (intptr_t) M_arc_struct_IntQueue_last_R_int, VTABLE_arc_struct_IntQueue_last_R_int, "()I", 1 },
	{ "get", (intptr_t) M_arc_struct_IntQueue_get_int_R_int, VTABLE_arc_struct_IntQueue_get_int_R_int, "(I)I", 1 },
	{ "set", (intptr_t) M_arc_struct_IntQueue_set_int_int, VTABLE_arc_struct_IntQueue_set_int_int, "(II)V", 1 },
	{ "clear", (intptr_t) M_arc_struct_IntQueue_clear, VTABLE_arc_struct_IntQueue_clear, "()V", 1 },
	{ "toString", (intptr_t) M_arc_struct_IntQueue_toString_R_java_lang_String, VTABLE_arc_struct_IntQueue_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_arc_struct_IntQueue{
		.nativeName = (intptr_t) "arc/struct/IntQueue",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_IntQueue),
		.classVtable = (intptr_t) vtable_arc_struct_IntQueue,
		.staticInitializer = (intptr_t) clinit_arc_struct_IntQueue,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_IntQueue,
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
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_IntQueue = registerClass(&class_arc_struct_IntQueue);

}
