#include "arc/struct/PQueue.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/struct/PQueue.h"
#include "java/lang/Comparable.h"
#include "arc/util/ArcRuntimeException.h"
#include "java/util/Comparator.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/System.h"

extern "C" {

jfloat SF_arc_struct_PQueue_CAPACITY_RATIO_LOW;
jfloat SF_arc_struct_PQueue_CAPACITY_RATIO_HI;

void mark_arc_struct_PQueue(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_PQueue *) object;
	if (self->F_queue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_queue)->clazz)->markFunction)((jobject) self->F_queue, mark, depth + 1);
	if (self->F_comparator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_comparator)->clazz)->markFunction)((jobject) self->F_comparator, mark, depth + 1);
}

void clinit_arc_struct_PQueue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_struct_PQueue_CAPACITY_RATIO_LOW = jfloat(1.5f);
	SF_arc_struct_PQueue_CAPACITY_RATIO_HI = jfloat(2.0f);
}

void init_arc_struct_PQueue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/PQueue:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_PQueue(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(29);
	init_arc_struct_PQueue_int_java_util_Comparator(ctx, (frame[0].o), (12), (jobject(nullptr)));
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_PQueue_int_java_util_Comparator(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/PQueue:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_PQueue(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(37);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(20);
	((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	((arc_struct_PQueue *) NULL_CHECK(sp[0].o))->F_queue = (jref) sp[1].o;
	LINE_NUMBER(39);
	((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_comparator = (jref) (frame[2].o);
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_PQueue_empty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/PQueue:empty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	if (((jint)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

jbool M_arc_struct_PQueue_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/PQueue:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Element cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(55);
	frame[2].i = ((jint)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(56);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	M_arc_struct_PQueue_growToSize_int(ctx, (frame[0].o), ((frame[2].i) + (jint(1))));
	}
label_3:;
	{
	LINE_NUMBER(57);
	((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_size = ((frame[2].i) + (jint(1)));
	LINE_NUMBER(58);
	if ((frame[2].i) != 0) goto label_5;
	}
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(61);
	M_arc_struct_PQueue_siftUp_int_java_lang_Object(ctx, (frame[0].o), (frame[2].i), (frame[1].o));
	}
label_7:;
	{
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_PQueue_peek_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/PQueue:peek", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	if (((jint)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_arc_struct_PQueue_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/PQueue:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(80);
	if ((frame[1].i) < ((jint)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jint M_arc_struct_PQueue_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/PQueue:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return ((jint)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_size);
	}

	popStackFrame(ctx);
}

void M_arc_struct_PQueue_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/PQueue:clear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	if ((frame[1].i) >= ((jint)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (jobject(nullptr));
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(91);
	((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_PQueue_poll_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/PQueue:poll", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	if (((jint)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_PQueue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1));
	((arc_struct_PQueue *) NULL_CHECK(sp[0].o))->F_size = temp0;
	frame[1].i = temp0;
	LINE_NUMBER(101);
	sp[0].o = (jobject)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(102);
	sp[0].o = (jobject)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(103);
	sp[0].o = (jobject)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (jobject(nullptr));
	LINE_NUMBER(104);
	if ((frame[1].i) == 0) goto label_6;
	}
	{
	M_arc_struct_PQueue_siftDown_int_java_lang_Object(ctx, (frame[0].o), (jint(0)), (frame[3].o));
	}
label_6:;
	{
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_arc_struct_PQueue_siftUp_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/PQueue:siftUp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
label_0:;
	{
	LINE_NUMBER(115);
	if ((frame[1].i) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(116);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) - (jint(1)))) >> (jint(1))));
	LINE_NUMBER(117);
	sp[0].o = (jobject)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(118);
	jint temp0 = (jint)M_arc_struct_PQueue_compare_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[4].o));
	if (temp0 < 0) goto label_5;
	}
	goto label_1;
label_5:;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[4].o);
	LINE_NUMBER(120);
	frame[1].i = (frame[3].i);
	LINE_NUMBER(121);
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[2].o);
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_PQueue_siftDown_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/PQueue:siftDown", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(132);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>(((jint)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_size)) >> (jint(1))));
	}
label_1:;
	{
	LINE_NUMBER(133);
	if ((frame[1].i) >= (frame[3].i)) goto label_2;
	}
	{
	LINE_NUMBER(134);
	frame[4].i = (((frame[1].i) << (jint(1))) + (jint(1)));
	LINE_NUMBER(135);
	sp[0].o = (jobject)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(136);
	frame[6].i = ((frame[4].i) + (jint(1)));
	LINE_NUMBER(137);
	if ((frame[6].i) >= ((jint)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)M_arc_struct_PQueue_compare_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[6].i))));
	if (temp0 <= 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = frame[6].i;
	frame[4].i = temp0;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}
label_7:;
	{
	LINE_NUMBER(138);
	jint temp0 = (jint)M_arc_struct_PQueue_compare_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[5].o));
	if (temp0 > 0) goto label_8;
	}
	goto label_2;
label_8:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[5].o);
	LINE_NUMBER(140);
	frame[1].i = (frame[4].i);
	LINE_NUMBER(141);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[2].o);
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_PQueue_compare_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/PQueue:compare", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_comparator;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (checkCast(ctx, &class_java_lang_Comparable, (frame[1].o)))))(ctx, (checkCast(ctx, &class_java_lang_Comparable, (frame[1].o))), (frame[2].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_comparator;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_struct_PQueue_growToSize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/PQueue:growToSize", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(154);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(155);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Capacity upper limit exceeded."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(158);
	if ((frame[2].i) >= (64)) goto label_4;
	}
	{
	jfloat temp0 = (jfloat(((frame[2].i) + (jint(1))))) * (jfloat(2));
	sp[0].f = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	jfloat temp0 = (jfloat((frame[2].i))) * (jfloat(1.5f));
	sp[0].f = temp0;
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	frame[3].i = (jint(sp[0].f));
	LINE_NUMBER(159);
	if ((frame[3].i) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(160);
	frame[3].i = (jint(2147483647));
	}
label_7:;
	{
	LINE_NUMBER(161);
	if ((frame[3].i) >= (frame[1].i)) goto label_9;
	}
	INST_ILOAD(1);
	INST_ISTORE(3);
label_9:;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(163);
	sp[0].o = (jobject)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[4].o), (jint(0)), ((jint)((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(164);
	((arc_struct_PQueue *) NULL_CHECK((frame[0].o)))->F_queue = (jref) (frame[4].o);
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_PQueue[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_PQueue_empty_R_boolean,
	(void *) M_arc_struct_PQueue_add_java_lang_Object_R_boolean,
	(void *) M_arc_struct_PQueue_peek_R_java_lang_Object,
	(void *) M_arc_struct_PQueue_get_int_R_java_lang_Object,
	(void *) M_arc_struct_PQueue_size_R_int,
	(void *) M_arc_struct_PQueue_clear,
	(void *) M_arc_struct_PQueue_poll_R_java_lang_Object,
	(void *) M_arc_struct_PQueue_siftUp_int_java_lang_Object,
	(void *) M_arc_struct_PQueue_siftDown_int_java_lang_Object,
	(void *) M_arc_struct_PQueue_compare_java_lang_Object_java_lang_Object_R_int,
	(void *) M_arc_struct_PQueue_growToSize_int,
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
	{ "empty", "()Z" },
	{ "add", "(Ljava/lang/Object;)Z" },
	{ "peek", "()Ljava/lang/Object;" },
	{ "get", "(I)Ljava/lang/Object;" },
	{ "size", "()I" },
	{ "clear", "()V" },
	{ "poll", "()Ljava/lang/Object;" },
	{ "siftUp", "(ILjava/lang/Object;)V" },
	{ "siftDown", "(ILjava/lang/Object;)V" },
	{ "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I" },
	{ "growToSize", "(I)V" },
};

static FieldMetadata fields[] {
	{ "CAPACITY_RATIO_LOW", &class_float, (intptr_t) &SF_arc_struct_PQueue_CAPACITY_RATIO_LOW, "F", 26 },
	{ "CAPACITY_RATIO_HI", &class_float, (intptr_t) &SF_arc_struct_PQueue_CAPACITY_RATIO_HI, "F", 26 },
	{ "queue", getArrayClass(&class_java_lang_Object, 1), offsetof(arc_struct_PQueue, F_queue), "[Ljava/lang/Object;", 1 },
	{ "size", &class_int, offsetof(arc_struct_PQueue, F_size), "I", 1 },
	{ "comparator", &class_java_util_Comparator, offsetof(arc_struct_PQueue, F_comparator), "Ljava/util/Comparator;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_PQueue, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_PQueue_int_java_util_Comparator, 0, "(ILjava/util/Comparator;)V", 1 },
	{ "empty", (intptr_t) M_arc_struct_PQueue_empty_R_boolean, VTABLE_arc_struct_PQueue_empty_R_boolean, "()Z", 1 },
	{ "add", (intptr_t) M_arc_struct_PQueue_add_java_lang_Object_R_boolean, VTABLE_arc_struct_PQueue_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "peek", (intptr_t) M_arc_struct_PQueue_peek_R_java_lang_Object, VTABLE_arc_struct_PQueue_peek_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_arc_struct_PQueue_get_int_R_java_lang_Object, VTABLE_arc_struct_PQueue_get_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "size", (intptr_t) M_arc_struct_PQueue_size_R_int, VTABLE_arc_struct_PQueue_size_R_int, "()I", 1 },
	{ "clear", (intptr_t) M_arc_struct_PQueue_clear, VTABLE_arc_struct_PQueue_clear, "()V", 1 },
	{ "poll", (intptr_t) M_arc_struct_PQueue_poll_R_java_lang_Object, VTABLE_arc_struct_PQueue_poll_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "siftUp", (intptr_t) M_arc_struct_PQueue_siftUp_int_java_lang_Object, VTABLE_arc_struct_PQueue_siftUp_int_java_lang_Object, "(ILjava/lang/Object;)V", 2 },
	{ "siftDown", (intptr_t) M_arc_struct_PQueue_siftDown_int_java_lang_Object, VTABLE_arc_struct_PQueue_siftDown_int_java_lang_Object, "(ILjava/lang/Object;)V", 2 },
	{ "compare", (intptr_t) M_arc_struct_PQueue_compare_java_lang_Object_java_lang_Object_R_int, VTABLE_arc_struct_PQueue_compare_java_lang_Object_java_lang_Object_R_int, "(Ljava/lang/Object;Ljava/lang/Object;)I", 2 },
	{ "growToSize", (intptr_t) M_arc_struct_PQueue_growToSize_int, VTABLE_arc_struct_PQueue_growToSize_int, "(I)V", 2 },
};

Class class_arc_struct_PQueue{
		.nativeName = (intptr_t) "arc/struct/PQueue",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_PQueue),
		.classVtable = (intptr_t) vtable_arc_struct_PQueue,
		.staticInitializer = (intptr_t) clinit_arc_struct_PQueue,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_PQueue,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_PQueue = registerClass(&class_arc_struct_PQueue);

}
