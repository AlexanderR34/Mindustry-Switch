#include "arc/input/GestureDetector_VelocityTracker.h"
#include "arc/input/GestureDetector.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "arc/input/GestureDetector_VelocityTracker.h"

extern "C" {


void mark_arc_input_GestureDetector$VelocityTracker(jobject object, jint mark, jint depth) {
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
	auto self = (arc_input_GestureDetector$VelocityTracker *) object;
	if (self->F_meanX)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_meanX)->clazz)->markFunction)((jobject) self->F_meanX, mark, depth + 1);
	if (self->F_meanY)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_meanY)->clazz)->markFunction)((jobject) self->F_meanY, mark, depth + 1);
	if (self->F_meanTime)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_meanTime)->clazz)->markFunction)((jobject) self->F_meanTime, mark, depth + 1);
}

void clinit_arc_input_GestureDetector$VelocityTracker(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_input_GestureDetector$VelocityTracker(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector$VelocityTracker:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_GestureDetector$VelocityTracker(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(363);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(364);
	((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_sampleSize = (10);
	LINE_NUMBER(369);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, ((jint)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_sampleSize));
	((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK(sp[0].o))->F_meanX = (jref) sp[1].o;
	LINE_NUMBER(370);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, ((jint)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_sampleSize));
	((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK(sp[0].o))->F_meanY = (jref) sp[1].o;
	LINE_NUMBER(371);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_long, ((jint)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_sampleSize));
	((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK(sp[0].o))->F_meanTime = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_input_GestureDetector$VelocityTracker_start_float_float_long(jcontext ctx, jobject self, jfloat param0, jfloat param1, jlong param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector$VelocityTracker:start", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].l = param2;
	{
	LINE_NUMBER(374);
	((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_lastX = (frame[1].f);
	LINE_NUMBER(375);
	((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_lastY = (frame[2].f);
	LINE_NUMBER(376);
	((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_deltaX = (jfloat(0));
	LINE_NUMBER(377);
	((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_deltaY = (jfloat(0));
	LINE_NUMBER(378);
	((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_numSamples = (jint(0));
	LINE_NUMBER(379);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	if ((frame[5].i) >= ((jint)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_sampleSize)) goto label_7;
	}
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_meanX;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[5].i)) = (jfloat(0));
	LINE_NUMBER(381);
	sp[0].o = (jobject)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_meanY;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[5].i)) = (jfloat(0));
	LINE_NUMBER(382);
	sp[0].o = (jobject)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_meanTime;
	ARRAY_ACCESS(jlong, sp[0].o, (frame[5].i)) = (jlong(0));
	LINE_NUMBER(379);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(384);
	((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_lastTime = (frame[3].l);
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_input_GestureDetector$VelocityTracker_update_float_float_long(jcontext ctx, jobject self, jfloat param0, jfloat param1, jlong param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector$VelocityTracker:update", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].l = param2;
	{
	LINE_NUMBER(388);
	((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_deltaX = ((frame[1].f) - ((jfloat)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_lastX));
	LINE_NUMBER(389);
	((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_deltaY = ((frame[2].f) - ((jfloat)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_lastY));
	LINE_NUMBER(390);
	((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_lastX = (frame[1].f);
	LINE_NUMBER(391);
	((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_lastY = (frame[2].f);
	LINE_NUMBER(392);
	frame[5].l = ((frame[3].l) - ((jlong)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_lastTime));
	LINE_NUMBER(393);
	((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_lastTime = (frame[3].l);
	LINE_NUMBER(394);
	frame[7].i = (((jint)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_numSamples) % ((jint)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_sampleSize));
	LINE_NUMBER(395);
	sp[0].o = (jobject)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_meanX;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[7].i)) = ((jfloat)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_deltaX);
	LINE_NUMBER(396);
	sp[0].o = (jobject)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_meanY;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[7].i)) = ((jfloat)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_deltaY);
	LINE_NUMBER(397);
	sp[0].o = (jobject)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_meanTime;
	ARRAY_ACCESS(jlong, sp[0].o, (frame[7].i)) = (frame[5].l);
	LINE_NUMBER(398);
	sp[0].o = frame[0].o;
	((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK(sp[0].o))->F_numSamples = (((jint)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK(sp[0].o))->F_numSamples) + (jint(1)));
	LINE_NUMBER(399);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_input_GestureDetector$VelocityTracker_getVelocityX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector$VelocityTracker:getVelocityX", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(402);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_meanX;
	jfloat temp0 = (jfloat)M_arc_input_GestureDetector$VelocityTracker_getAverage_Array1_float_int_R_float(ctx, sp[0].o, sp[1].o, ((jint)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_numSamples));
	frame[1].f = temp0;
	LINE_NUMBER(403);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_meanTime;
	jlong temp1 = (jlong)M_arc_input_GestureDetector$VelocityTracker_getAverage_Array1_long_int_R_long(ctx, sp[0].o, sp[1].o, ((jint)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_numSamples));
	frame[2].f = ((jfloat(temp1)) / (jfloat(1,000000e+09f)));
	LINE_NUMBER(404);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_3;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_3:;
	{
	LINE_NUMBER(405);
	popStackFrame(ctx);
	return ((frame[1].f) / (frame[2].f));
	}

	popStackFrame(ctx);
}

jfloat M_arc_input_GestureDetector$VelocityTracker_getVelocityY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector$VelocityTracker:getVelocityY", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(409);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_meanY;
	jfloat temp0 = (jfloat)M_arc_input_GestureDetector$VelocityTracker_getAverage_Array1_float_int_R_float(ctx, sp[0].o, sp[1].o, ((jint)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_numSamples));
	frame[1].f = temp0;
	LINE_NUMBER(410);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_meanTime;
	jlong temp1 = (jlong)M_arc_input_GestureDetector$VelocityTracker_getAverage_Array1_long_int_R_long(ctx, sp[0].o, sp[1].o, ((jint)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_numSamples));
	frame[2].f = ((jfloat(temp1)) / (jfloat(1,000000e+09f)));
	LINE_NUMBER(411);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_3;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_3:;
	{
	LINE_NUMBER(412);
	popStackFrame(ctx);
	return ((frame[1].f) / (frame[2].f));
	}

	popStackFrame(ctx);
}

jfloat M_arc_input_GestureDetector$VelocityTracker_getAverage_Array1_float_int_R_float(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector$VelocityTracker:getAverage", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(416);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_sampleSize), (frame[2].i));
	frame[2].i = temp0;
	LINE_NUMBER(417);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(418);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(419);
	frame[3].f = ((frame[3].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[4].i))));
	LINE_NUMBER(418);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(421);
	popStackFrame(ctx);
	return ((frame[3].f) / (jfloat((frame[2].i))));
	}

	popStackFrame(ctx);
}

jlong M_arc_input_GestureDetector$VelocityTracker_getAverage_Array1_long_int_R_long(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector$VelocityTracker:getAverage", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(425);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_sampleSize), (frame[2].i));
	frame[2].i = temp0;
	LINE_NUMBER(426);
	frame[3].l = (jlong(0));
	LINE_NUMBER(427);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(428);
	frame[3].l = ((frame[3].l) + ((jlong)ARRAY_ACCESS(jlong, (frame[1].o), (frame[5].i))));
	LINE_NUMBER(427);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(430);
	if ((frame[2].i) != 0) goto label_7;
	}
	INST_LCONST(0);
	popStackFrame(ctx);
	INST_LRETURN();
label_7:;
	{
	LINE_NUMBER(431);
	popStackFrame(ctx);
	return ((frame[3].l) / (jlong((frame[2].i))));
	}

	popStackFrame(ctx);
}

jfloat M_arc_input_GestureDetector$VelocityTracker_getSum_Array1_float_int_R_float(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector$VelocityTracker:getSum", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(435);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK((frame[0].o)))->F_sampleSize), (frame[2].i));
	frame[2].i = temp0;
	LINE_NUMBER(436);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(437);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(438);
	frame[3].f = ((frame[3].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[4].i))));
	LINE_NUMBER(437);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(440);
	if ((frame[2].i) != 0) goto label_7;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_7:;
	{
	LINE_NUMBER(441);
	popStackFrame(ctx);
	return (frame[3].f);
	}

	popStackFrame(ctx);
}

void *vtable_arc_input_GestureDetector$VelocityTracker[] {
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
	(void *) M_arc_input_GestureDetector$VelocityTracker_start_float_float_long,
	(void *) M_arc_input_GestureDetector$VelocityTracker_update_float_float_long,
	(void *) M_arc_input_GestureDetector$VelocityTracker_getVelocityX_R_float,
	(void *) M_arc_input_GestureDetector$VelocityTracker_getVelocityY_R_float,
	(void *) M_arc_input_GestureDetector$VelocityTracker_getAverage_Array1_float_int_R_float,
	(void *) M_arc_input_GestureDetector$VelocityTracker_getAverage_Array1_long_int_R_long,
	(void *) M_arc_input_GestureDetector$VelocityTracker_getSum_Array1_float_int_R_float,
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
	{ "start", "(FFJ)V" },
	{ "update", "(FFJ)V" },
	{ "getVelocityX", "()F" },
	{ "getVelocityY", "()F" },
	{ "getAverage", "([FI)F" },
	{ "getAverage", "([JI)J" },
	{ "getSum", "([FI)F" },
};

static FieldMetadata fields[] {
	{ "sampleSize", &class_int, offsetof(arc_input_GestureDetector$VelocityTracker, F_sampleSize), "I", 0 },
	{ "lastX", &class_float, offsetof(arc_input_GestureDetector$VelocityTracker, F_lastX), "F", 0 },
	{ "lastY", &class_float, offsetof(arc_input_GestureDetector$VelocityTracker, F_lastY), "F", 0 },
	{ "deltaX", &class_float, offsetof(arc_input_GestureDetector$VelocityTracker, F_deltaX), "F", 0 },
	{ "deltaY", &class_float, offsetof(arc_input_GestureDetector$VelocityTracker, F_deltaY), "F", 0 },
	{ "lastTime", &class_long, offsetof(arc_input_GestureDetector$VelocityTracker, F_lastTime), "J", 0 },
	{ "numSamples", &class_int, offsetof(arc_input_GestureDetector$VelocityTracker, F_numSamples), "I", 0 },
	{ "meanX", getArrayClass(&class_float, 1), offsetof(arc_input_GestureDetector$VelocityTracker, F_meanX), "[F", 0 },
	{ "meanY", getArrayClass(&class_float, 1), offsetof(arc_input_GestureDetector$VelocityTracker, F_meanY), "[F", 0 },
	{ "meanTime", getArrayClass(&class_long, 1), offsetof(arc_input_GestureDetector$VelocityTracker, F_meanTime), "[J", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_input_GestureDetector$VelocityTracker, 0, "()V", 0 },
	{ "start", (intptr_t) M_arc_input_GestureDetector$VelocityTracker_start_float_float_long, VTABLE_arc_input_GestureDetector$VelocityTracker_start_float_float_long, "(FFJ)V", 1 },
	{ "update", (intptr_t) M_arc_input_GestureDetector$VelocityTracker_update_float_float_long, VTABLE_arc_input_GestureDetector$VelocityTracker_update_float_float_long, "(FFJ)V", 1 },
	{ "getVelocityX", (intptr_t) M_arc_input_GestureDetector$VelocityTracker_getVelocityX_R_float, VTABLE_arc_input_GestureDetector$VelocityTracker_getVelocityX_R_float, "()F", 1 },
	{ "getVelocityY", (intptr_t) M_arc_input_GestureDetector$VelocityTracker_getVelocityY_R_float, VTABLE_arc_input_GestureDetector$VelocityTracker_getVelocityY_R_float, "()F", 1 },
	{ "getAverage", (intptr_t) M_arc_input_GestureDetector$VelocityTracker_getAverage_Array1_float_int_R_float, VTABLE_arc_input_GestureDetector$VelocityTracker_getAverage_Array1_float_int_R_float, "([FI)F", 2 },
	{ "getAverage", (intptr_t) M_arc_input_GestureDetector$VelocityTracker_getAverage_Array1_long_int_R_long, VTABLE_arc_input_GestureDetector$VelocityTracker_getAverage_Array1_long_int_R_long, "([JI)J", 2 },
	{ "getSum", (intptr_t) M_arc_input_GestureDetector$VelocityTracker_getSum_Array1_float_int_R_float, VTABLE_arc_input_GestureDetector$VelocityTracker_getSum_Array1_float_int_R_float, "([FI)F", 2 },
};

Class class_arc_input_GestureDetector$VelocityTracker{
		.nativeName = (intptr_t) "arc/input/GestureDetector$VelocityTracker",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_input_GestureDetector$VelocityTracker),
		.classVtable = (intptr_t) vtable_arc_input_GestureDetector$VelocityTracker,
		.staticInitializer = (intptr_t) clinit_arc_input_GestureDetector$VelocityTracker,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_input_GestureDetector$VelocityTracker,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_input_GestureDetector,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_input_GestureDetector$VelocityTracker = registerClass(&class_arc_input_GestureDetector$VelocityTracker);

}

