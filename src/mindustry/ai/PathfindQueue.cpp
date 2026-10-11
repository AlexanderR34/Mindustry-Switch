#include "mindustry/ai/PathfindQueue.h"
#include "java/lang/Object.h"
#include "mindustry/ai/PathfindQueue.h"
#include "java/lang/String.h"
#include "arc/util/ArcRuntimeException.h"
#include "java/lang/System.h"

extern "C" {

jdouble SF_mindustry_ai_PathfindQueue_CAPACITY_RATIO_LOW;
jdouble SF_mindustry_ai_PathfindQueue_CAPACITY_RATIO_HI;

void mark_mindustry_ai_PathfindQueue(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ai_PathfindQueue *) object;
	if (self->F_queue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_queue)->clazz)->markFunction)((jobject) self->F_queue, mark, depth + 1);
	if (self->F_weights)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_weights)->clazz)->markFunction)((jobject) self->F_weights, mark, depth + 1);
}

void clinit_mindustry_ai_PathfindQueue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_ai_PathfindQueue_CAPACITY_RATIO_LOW = jdouble(1.5);
	SF_mindustry_ai_PathfindQueue_CAPACITY_RATIO_HI = jdouble(2.0);
}

void init_mindustry_ai_PathfindQueue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/PathfindQueue:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_PathfindQueue(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_mindustry_ai_PathfindQueue_int(ctx, (frame[0].o), (12));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_ai_PathfindQueue_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/PathfindQueue:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_PathfindQueue(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(26);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(20);
	((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	((mindustry_ai_PathfindQueue *) NULL_CHECK(sp[0].o))->F_queue = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[1].i));
	((mindustry_ai_PathfindQueue *) NULL_CHECK(sp[0].o))->F_weights = (jref) sp[1].o;
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_PathfindQueue_empty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/PathfindQueue:empty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(32);
	if (((jint)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

jbool M_mindustry_ai_PathfindQueue_add_int_float_R_boolean(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/PathfindQueue:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(44);
	frame[3].i = ((jint)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(45);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	((func_mindustry_ai_PathfindQueue_growToSize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_PathfindQueue_growToSize_int])(ctx, (frame[0].o), ((frame[3].i) + (jint(1))));
	}
label_2:;
	{
	LINE_NUMBER(46);
	((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_size = ((frame[3].i) + (jint(1)));
	LINE_NUMBER(47);
	if ((frame[3].i) != 0) goto label_4;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (frame[1].i);
	LINE_NUMBER(49);
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_weights;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[2].f);
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(51);
	((func_mindustry_ai_PathfindQueue_siftUp_int_int_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_PathfindQueue_siftUp_int_int_float])(ctx, (frame[0].o), (frame[3].i), (frame[1].i), (frame[2].f));
	}
label_7:;
	{
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_mindustry_ai_PathfindQueue_peek_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/PathfindQueue:peek", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	if (((jint)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_PathfindQueue_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/PathfindQueue:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_ai_PathfindQueue_poll_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/PathfindQueue:poll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	if (((jint)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((mindustry_ai_PathfindQueue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1));
	((mindustry_ai_PathfindQueue *) NULL_CHECK(sp[0].o))->F_size = temp0;
	frame[1].i = temp0;
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	frame[2].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0))));
	LINE_NUMBER(77);
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	frame[3].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	LINE_NUMBER(78);
	if ((frame[1].i) == 0) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_weights;
	((func_mindustry_ai_PathfindQueue_siftDown_int_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_PathfindQueue_siftDown_int_int_float])(ctx, sp[0].o, temp0, temp1, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[1].i))));
	}
label_5:;
	{
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_PathfindQueue_siftUp_int_int_float(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/PathfindQueue:siftUp", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].f = param2;
label_0:;
	{
	LINE_NUMBER(89);
	if ((frame[1].i) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(90);
	frame[4].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) - (jint(1)))) >> (jint(1))));
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	frame[5].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)));
	LINE_NUMBER(92);
	jfloat temp0 = frame[3].f;
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_weights;
	if ((floatCompare(temp0, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i))), -1)) < 0) goto label_5;
	}
	goto label_1;
label_5:;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = (frame[5].i);
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_weights;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_weights;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[4].i)));
	LINE_NUMBER(95);
	frame[1].i = (frame[4].i);
	LINE_NUMBER(96);
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_weights;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[1].i)) = (frame[3].f);
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_PathfindQueue_siftDown_int_int_float(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/PathfindQueue:siftDown", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(108);
	frame[4].i = (bit_cast<jint>(bit_cast<uint32_t>(((jint)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_size)) >> (jint(1))));
	}
label_1:;
	{
	LINE_NUMBER(109);
	if ((frame[1].i) >= (frame[4].i)) goto label_2;
	}
	{
	LINE_NUMBER(110);
	frame[5].i = (((frame[1].i) << (jint(1))) + (jint(1)));
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	frame[6].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i)));
	LINE_NUMBER(112);
	frame[7].i = ((frame[5].i) + (jint(1)));
	LINE_NUMBER(113);
	if ((frame[7].i) >= ((jint)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_weights;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[5].i));
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_weights;
	if ((floatCompare(temp0, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[7].i))), -1)) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = frame[7].i;
	frame[5].i = temp0;
	frame[6].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0));
	}
label_7:;
	{
	LINE_NUMBER(116);
	jfloat temp0 = frame[3].f;
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_weights;
	if ((floatCompare(temp0, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[5].i))), 1)) > 0) goto label_9;
	}
	goto label_2;
label_9:;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = (frame[6].i);
	LINE_NUMBER(118);
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_weights;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_weights;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[5].i)));
	LINE_NUMBER(119);
	frame[1].i = (frame[5].i);
	LINE_NUMBER(120);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_weights;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[1].i)) = (frame[3].f);
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_PathfindQueue_growToSize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/PathfindQueue:growToSize", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(130);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(131);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Capacity upper limit exceeded."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(134);
	if ((frame[2].i) >= (64)) goto label_4;
	}
	{
	jdouble temp0 = (jdouble(((frame[2].i) + (jint(1))))) * (jdouble(2.0));
	sp[0].d = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	jdouble temp0 = (jdouble((frame[2].i))) * (jdouble(1.5));
	sp[0].d = temp0;
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	frame[3].i = (jint(sp[0].d));
	LINE_NUMBER(135);
	if ((frame[3].i) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(136);
	frame[3].i = (jint(2147483647));
	}
label_7:;
	{
	LINE_NUMBER(137);
	if ((frame[3].i) >= (frame[1].i)) goto label_9;
	}
	INST_ILOAD(1);
	INST_ISTORE(3);
label_9:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(140);
	sp[0].o = (jobject) createArray(ctx, &class_float, (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(141);
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[4].o), (jint(0)), ((jint)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(142);
	sp[0].o = (jobject)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_weights;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[5].o), (jint(0)), ((jint)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(143);
	((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_queue = (jref) (frame[4].o);
	LINE_NUMBER(144);
	((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[0].o)))->F_weights = (jref) (frame[5].o);
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ai_PathfindQueue[] {
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
	(void *) M_mindustry_ai_PathfindQueue_empty_R_boolean,
	(void *) M_mindustry_ai_PathfindQueue_add_int_float_R_boolean,
	(void *) M_mindustry_ai_PathfindQueue_peek_R_int,
	(void *) M_mindustry_ai_PathfindQueue_clear,
	(void *) M_mindustry_ai_PathfindQueue_poll_R_int,
	(void *) M_mindustry_ai_PathfindQueue_siftUp_int_int_float,
	(void *) M_mindustry_ai_PathfindQueue_siftDown_int_int_float,
	(void *) M_mindustry_ai_PathfindQueue_growToSize_int,
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
	{ "add", "(IF)Z" },
	{ "peek", "()I" },
	{ "clear", "()V" },
	{ "poll", "()I" },
	{ "siftUp", "(IIF)V" },
	{ "siftDown", "(IIF)V" },
	{ "growToSize", "(I)V" },
};

static FieldMetadata fields[] {
	{ "CAPACITY_RATIO_LOW", &class_double, (intptr_t) &SF_mindustry_ai_PathfindQueue_CAPACITY_RATIO_LOW, "D", 26 },
	{ "CAPACITY_RATIO_HI", &class_double, (intptr_t) &SF_mindustry_ai_PathfindQueue_CAPACITY_RATIO_HI, "D", 26 },
	{ "queue", getArrayClass(&class_int, 1), offsetof(mindustry_ai_PathfindQueue, F_queue), "[I", 1 },
	{ "weights", getArrayClass(&class_float, 1), offsetof(mindustry_ai_PathfindQueue, F_weights), "[F", 1 },
	{ "size", &class_int, offsetof(mindustry_ai_PathfindQueue, F_size), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_PathfindQueue, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_ai_PathfindQueue_int, 0, "(I)V", 1 },
	{ "empty", (intptr_t) M_mindustry_ai_PathfindQueue_empty_R_boolean, VTABLE_mindustry_ai_PathfindQueue_empty_R_boolean, "()Z", 1 },
	{ "add", (intptr_t) M_mindustry_ai_PathfindQueue_add_int_float_R_boolean, VTABLE_mindustry_ai_PathfindQueue_add_int_float_R_boolean, "(IF)Z", 1 },
	{ "peek", (intptr_t) M_mindustry_ai_PathfindQueue_peek_R_int, VTABLE_mindustry_ai_PathfindQueue_peek_R_int, "()I", 1 },
	{ "clear", (intptr_t) M_mindustry_ai_PathfindQueue_clear, VTABLE_mindustry_ai_PathfindQueue_clear, "()V", 1 },
	{ "poll", (intptr_t) M_mindustry_ai_PathfindQueue_poll_R_int, VTABLE_mindustry_ai_PathfindQueue_poll_R_int, "()I", 1 },
	{ "siftUp", (intptr_t) M_mindustry_ai_PathfindQueue_siftUp_int_int_float, VTABLE_mindustry_ai_PathfindQueue_siftUp_int_int_float, "(IIF)V", 2 },
	{ "siftDown", (intptr_t) M_mindustry_ai_PathfindQueue_siftDown_int_int_float, VTABLE_mindustry_ai_PathfindQueue_siftDown_int_int_float, "(IIF)V", 2 },
	{ "growToSize", (intptr_t) M_mindustry_ai_PathfindQueue_growToSize_int, VTABLE_mindustry_ai_PathfindQueue_growToSize_int, "(I)V", 2 },
};

Class class_mindustry_ai_PathfindQueue{
		.nativeName = (intptr_t) "mindustry/ai/PathfindQueue",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ai_PathfindQueue),
		.classVtable = (intptr_t) vtable_mindustry_ai_PathfindQueue,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_PathfindQueue,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ai_PathfindQueue,
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
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_PathfindQueue = registerClass(&class_mindustry_ai_PathfindQueue);

}
