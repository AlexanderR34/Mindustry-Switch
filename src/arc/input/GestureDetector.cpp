#include "arc/input/GestureDetector.h"
#include "arc/input/GestureDetector_1.h"
#include "java/lang/Math.h"
#include "arc/math/geom/Vec2.h"
#include "arc/Core.h"
#include "arc/input/InputProcessor.h"
#include "arc/Input.h"
#include "arc/util/Timer_Task.h"
#include "arc/util/Time.h"
#include "arc/input/GestureDetector_VelocityTracker.h"
#include "arc/input/KeyCode.h"
#include "arc/input/GestureDetector.h"
#include "java/lang/Object.h"
#include "arc/util/Timer.h"
#include "arc/input/GestureDetector_GestureListener.h"

extern "C" {


void mark_arc_input_GestureDetector(jobject object, jint mark, jint depth) {
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
	auto self = (arc_input_GestureDetector *) object;
	if (self->F_listener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listener)->clazz)->markFunction)((jobject) self->F_listener, mark, depth + 1);
	if (self->F_tracker)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tracker)->clazz)->markFunction)((jobject) self->F_tracker, mark, depth + 1);
	if (self->F_pointer2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pointer2)->clazz)->markFunction)((jobject) self->F_pointer2, mark, depth + 1);
	if (self->F_initialPointer1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_initialPointer1)->clazz)->markFunction)((jobject) self->F_initialPointer1, mark, depth + 1);
	if (self->F_initialPointer2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_initialPointer2)->clazz)->markFunction)((jobject) self->F_initialPointer2, mark, depth + 1);
	if (self->F_pointer1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pointer1)->clazz)->markFunction)((jobject) self->F_pointer1, mark, depth + 1);
	if (self->F_longPressTask)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_longPressTask)->clazz)->markFunction)((jobject) self->F_longPressTask, mark, depth + 1);
	if (self->F_lastTapButton)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastTapButton)->clazz)->markFunction)((jobject) self->F_lastTapButton, mark, depth + 1);
}

void clinit_arc_input_GestureDetector(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_input_GestureDetector_arc_input_GestureDetector$GestureListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_GestureDetector(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(48);
	init_arc_input_GestureDetector_float_float_float_float_arc_input_GestureDetector$GestureListener(ctx, (frame[0].o), (jfloat(20.0f)), (jfloat(0.4f)), (jfloat(1.1f)), (jfloat(0.15f)), (frame[1].o));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_input_GestureDetector_float_float_float_float_arc_input_GestureDetector$GestureListener(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_GestureDetector(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(61);
	init_arc_input_GestureDetector_float_float_float_float_float_arc_input_GestureDetector$GestureListener(ctx, (frame[0].o), (frame[1].f), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_input_GestureDetector_float_float_float_float_float_arc_input_GestureDetector$GestureListener(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_GestureDetector(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(74);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_arc_input_GestureDetector$VelocityTracker(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_input_GestureDetector$VelocityTracker);
	init_arc_input_GestureDetector$VelocityTracker(ctx, sp[1].o);
	((arc_input_GestureDetector *) NULL_CHECK(sp[0].o))->F_tracker = (jref) sp[1].o;
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((arc_input_GestureDetector *) NULL_CHECK(sp[0].o))->F_pointer2 = (jref) sp[1].o;
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((arc_input_GestureDetector *) NULL_CHECK(sp[0].o))->F_initialPointer1 = (jref) sp[1].o;
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((arc_input_GestureDetector *) NULL_CHECK(sp[0].o))->F_initialPointer2 = (jref) sp[1].o;
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((arc_input_GestureDetector *) NULL_CHECK(sp[0].o))->F_pointer1 = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_input_GestureDetector$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_input_GestureDetector$1);
	init_arc_input_GestureDetector$1_arc_input_GestureDetector(ctx, sp[1].o, (frame[0].o));
	((arc_input_GestureDetector *) NULL_CHECK(sp[0].o))->F_longPressTask = (jref) sp[1].o;
	LINE_NUMBER(75);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleWidth = (frame[1].f);
	LINE_NUMBER(76);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleHeight = (frame[2].f);
	LINE_NUMBER(77);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapCountInterval = (jlong(((frame[3].f) * (jfloat(1,000000e+09f)))));
	LINE_NUMBER(78);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressSeconds = (frame[4].f);
	LINE_NUMBER(79);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_maxFlingDelay = (jlong(((frame[5].f) * (jfloat(1,000000e+09f)))));
	LINE_NUMBER(80);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_listener = (jref) (frame[6].o);
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_input_GestureDetector_getListener_R_arc_input_GestureDetector$GestureListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector:getListener", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_listener;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_input_GestureDetector_touchDown_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector:touchDown", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(89);
	jint temp0 = (jint)((func_arc_input_GestureDetector_touchDown_float_float_int_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_input_GestureDetector_touchDown_float_float_int_arc_input_KeyCode_R_boolean])(ctx, (frame[0].o), (jfloat((frame[1].i))), (jfloat((frame[2].i))), (frame[3].i), (frame[4].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_input_GestureDetector_touchDown_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector:touchDown", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(93);
	if ((frame[3].i) <= (jint(1))) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(95);
	if ((frame[3].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jlong temp0 = (jlong)((func_arc_Input_getCurrentEventTime_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_getCurrentEventTime_R_long])(ctx, sp[1].o);
	((arc_input_GestureDetector *) NULL_CHECK(sp[0].o))->F_gestureStartTime = temp0;
	LINE_NUMBER(98);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tracker;
	((func_arc_input_GestureDetector$VelocityTracker_start_float_float_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_GestureDetector$VelocityTracker_start_float_float_long])(ctx, sp[0].o, (frame[1].f), (frame[2].f), ((jlong)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_gestureStartTime));
	LINE_NUMBER(99);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp1 = (jint)((func_arc_Input_isTouched_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_isTouched_int_R_boolean])(ctx, sp[0].o, (jint(1)));
	if (temp1 == 0) goto label_7;
	}
	{
	LINE_NUMBER(101);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_inTapRectangle = (jint(0));
	LINE_NUMBER(102);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pinching = (jint(1));
	LINE_NUMBER(103);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_initialPointer1;
	sp[1].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(104);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_initialPointer2;
	sp[1].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(105);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressTask;
	((func_arc_util_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer$Task_cancel])(ctx, sp[0].o);
	goto label_13;
	}
label_7:;
	{
	LINE_NUMBER(108);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_inTapRectangle = (jint(1));
	LINE_NUMBER(109);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pinching = (jint(0));
	LINE_NUMBER(110);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressFired = (jint(0));
	LINE_NUMBER(111);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleCenterX = (frame[1].f);
	LINE_NUMBER(112);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleCenterY = (frame[2].f);
	LINE_NUMBER(113);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressTask;
	jint temp0 = (jint)((func_arc_util_Timer$Task_isScheduled_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer$Task_isScheduled_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressTask;
	sp[0].o = (jobject)SM_arc_util_Timer_schedule_arc_util_Timer$Task_float_R_arc_util_Timer$Task(ctx, sp[0].o, ((jfloat)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressSeconds));
	goto label_13;
	}
label_2:;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(118);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_inTapRectangle = (jint(0));
	LINE_NUMBER(119);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pinching = (jint(1));
	LINE_NUMBER(120);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_initialPointer1;
	sp[1].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(121);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_initialPointer2;
	sp[1].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(122);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressTask;
	((func_arc_util_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer$Task_cancel])(ctx, sp[0].o);
	}
label_13:;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_listener;
	jint temp0 = (jint)((func_arc_input_GestureDetector$GestureListener_touchDown_float_float_int_arc_input_KeyCode_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_GestureDetector$GestureListener, INDEX_arc_input_GestureDetector$GestureListener_touchDown_float_float_int_arc_input_KeyCode_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].i), (frame[4].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_input_GestureDetector_touchDragged_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector:touchDragged", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(129);
	jint temp0 = (jint)((func_arc_input_GestureDetector_touchDragged_float_float_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_input_GestureDetector_touchDragged_float_float_int_R_boolean])(ctx, (frame[0].o), (jfloat((frame[1].i))), (jfloat((frame[2].i))), (frame[3].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_input_GestureDetector_touchDragged_float_float_int_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector:touchDragged", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(133);
	if ((frame[3].i) <= (jint(1))) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(134);
	if (((jint)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressFired) == 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(136);
	if ((frame[3].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	}
label_5:;
	{
	LINE_NUMBER(142);
	if (((jint)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pinching) == 0) goto label_6;
	}
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_listener;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_listener;
	sp[1].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_initialPointer1;
	sp[2].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_initialPointer2;
	sp[3].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer1;
	sp[4].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer2;
	jint temp0 = (jint)((func_arc_input_GestureDetector$GestureListener_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_GestureDetector$GestureListener, INDEX_arc_input_GestureDetector$GestureListener_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[4].i = temp0;
	LINE_NUMBER(145);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_listener;
	sp[1].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_initialPointer1;
	sp[2].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_initialPointer2;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer1;
	sp[2].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer2;
	jfloat temp2 = (jfloat)((func_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float])(ctx, sp[1].o, sp[2].o);
	jint temp3 = (jint)((func_arc_input_GestureDetector$GestureListener_zoom_float_float_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_GestureDetector$GestureListener, INDEX_arc_input_GestureDetector$GestureListener_zoom_float_float_R_boolean, sp[0].o))(ctx, sp[0].o, temp1, temp2);
	if (temp3 != 0) goto label_11;
	}
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_12;
label_11:;
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tracker;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jlong temp2 = (jlong)((func_arc_Input_getCurrentEventTime_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_getCurrentEventTime_R_long])(ctx, sp[1].o);
	((func_arc_input_GestureDetector$VelocityTracker_update_float_float_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_GestureDetector$VelocityTracker_update_float_float_long])(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(154);
	if (((jint)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_inTapRectangle) == 0) goto label_15;
	}
	{
	jint temp0 = (jint)M_arc_input_GestureDetector_isWithinTapRectangle_float_float_float_float_R_boolean(ctx, (frame[0].o), (frame[1].f), (frame[2].f), ((jfloat)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleCenterX), ((jfloat)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleCenterY));
	if (temp0 != 0) goto label_15;
	}
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressTask;
	((func_arc_util_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(156);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_inTapRectangle = (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(160);
	if (((jint)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_inTapRectangle) != 0) goto label_18;
	}
	{
	LINE_NUMBER(161);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_panning = (jint(1));
	LINE_NUMBER(162);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_listener;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	sp[1].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tracker;
	jfloat temp2 = (jfloat)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK(sp[1].o))->F_deltaX;
	sp[1].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tracker;
	jint temp3 = (jint)((func_arc_input_GestureDetector$GestureListener_pan_float_float_float_float_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_GestureDetector$GestureListener, INDEX_arc_input_GestureDetector$GestureListener_pan_float_float_float_float_R_boolean, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK(sp[1].o))->F_deltaY));
	popStackFrame(ctx);
	return temp3;
	}
label_18:;
	{
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_GestureDetector_touchUp_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector:touchUp", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(170);
	jint temp0 = (jint)((func_arc_input_GestureDetector_touchUp_float_float_int_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_input_GestureDetector_touchUp_float_float_int_arc_input_KeyCode_R_boolean])(ctx, (frame[0].o), (jfloat((frame[1].i))), (jfloat((frame[2].i))), (frame[3].i), (frame[4].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_input_GestureDetector_touchUp_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector:touchUp", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(174);
	if ((frame[3].i) <= (jint(1))) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(177);
	if (((jint)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_inTapRectangle) == 0) goto label_2;
	}
	{
	jint temp0 = (jint)M_arc_input_GestureDetector_isWithinTapRectangle_float_float_float_float_R_boolean(ctx, (frame[0].o), (frame[1].f), (frame[2].f), ((jfloat)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleCenterX), ((jfloat)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleCenterY));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(178);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_inTapRectangle = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(180);
	frame[5].i = ((jint)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_panning);
	LINE_NUMBER(181);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_panning = (jint(0));
	LINE_NUMBER(183);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressTask;
	((func_arc_util_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(184);
	if (((jint)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressFired) == 0) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(186);
	if (((jint)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_inTapRectangle) == 0) goto label_8;
	}
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_lastTapButton;
	if (sp[0].o != (frame[4].o)) goto label_10;
	}
	{
	if (((jint)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_lastTapPointer) != (frame[3].i)) goto label_10;
	}
	{
	jlong temp0 = (jlong)SM_arc_util_Time_nanos_R_long(ctx);
	if ((longCompare((temp0 - ((jlong)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_lastTapTime)), ((jlong)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapCountInterval))) > 0) goto label_10;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = (jfloat)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_lastTapX;
	jfloat temp3 = (jfloat)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_lastTapY;
	LINE_NUMBER(189);
	jint temp4 = (jint)M_arc_input_GestureDetector_isWithinTapRectangle_float_float_float_float_R_boolean(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	if (temp4 != 0) goto label_12;
	}
label_10:;
	{
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapCount = (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	((arc_input_GestureDetector *) NULL_CHECK(sp[0].o))->F_tapCount = (((jint)((arc_input_GestureDetector *) NULL_CHECK(sp[0].o))->F_tapCount) + (jint(1)));
	LINE_NUMBER(191);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_nanos_R_long(ctx);
	((arc_input_GestureDetector *) NULL_CHECK(sp[0].o))->F_lastTapTime = temp0;
	LINE_NUMBER(192);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_lastTapX = (frame[1].f);
	LINE_NUMBER(193);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_lastTapY = (frame[2].f);
	LINE_NUMBER(194);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_lastTapButton = (jref) (frame[4].o);
	LINE_NUMBER(195);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_lastTapPointer = (frame[3].i);
	LINE_NUMBER(196);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_gestureStartTime = (jlong(0));
	LINE_NUMBER(197);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_listener;
	jint temp1 = (jint)((func_arc_input_GestureDetector$GestureListener_tap_float_float_int_arc_input_KeyCode_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_GestureDetector$GestureListener, INDEX_arc_input_GestureDetector$GestureListener_tap_float_float_int_arc_input_KeyCode_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), ((jint)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapCount), (frame[4].o));
	popStackFrame(ctx);
	return temp1;
	}
label_8:;
	{
	LINE_NUMBER(200);
	if (((jint)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pinching) == 0) goto label_20;
	}
	{
	LINE_NUMBER(202);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pinching = (jint(0));
	LINE_NUMBER(203);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_listener;
	((func_arc_input_GestureDetector$GestureListener_pinchStop) resolveInterfaceMethod(ctx, &class_arc_input_GestureDetector$GestureListener, INDEX_arc_input_GestureDetector$GestureListener_pinchStop, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(204);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_panning = (jint(1));
	LINE_NUMBER(206);
	if ((frame[3].i) != 0) goto label_25;
	}
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tracker;
	sp[1].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer2;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jlong temp2 = (jlong)((func_arc_Input_getCurrentEventTime_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_getCurrentEventTime_R_long])(ctx, sp[1].o);
	((func_arc_input_GestureDetector$VelocityTracker_start_float_float_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_GestureDetector$VelocityTracker_start_float_float_long])(ctx, sp[0].o, temp0, temp1, temp2);
	goto label_27;
	}
label_25:;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tracker;
	sp[1].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer1;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer1;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jlong temp2 = (jlong)((func_arc_Input_getCurrentEventTime_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_getCurrentEventTime_R_long])(ctx, sp[1].o);
	((func_arc_input_GestureDetector$VelocityTracker_start_float_float_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_GestureDetector$VelocityTracker_start_float_float_long])(ctx, sp[0].o, temp0, temp1, temp2);
	}
label_27:;
	{
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return (jint(0));
	}
label_20:;
	{
	LINE_NUMBER(217);
	frame[6].i = (jint(0));
	LINE_NUMBER(218);
	if ((frame[5].i) == 0) goto label_29;
	}
	{
	if (((jint)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_panning) != 0) goto label_29;
	}
	{
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_listener;
	jint temp0 = (jint)((func_arc_input_GestureDetector$GestureListener_panStop_float_float_int_arc_input_KeyCode_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_GestureDetector$GestureListener, INDEX_arc_input_GestureDetector$GestureListener_panStop_float_float_int_arc_input_KeyCode_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].i), (frame[4].o));
	frame[6].i = temp0;
	}
label_29:;
	{
	LINE_NUMBER(221);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_gestureStartTime = (jlong(0));
	LINE_NUMBER(222);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jlong temp0 = (jlong)((func_arc_Input_getCurrentEventTime_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_getCurrentEventTime_R_long])(ctx, sp[0].o);
	frame[7].l = temp0;
	LINE_NUMBER(223);
	jlong temp1 = frame[7].l;
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tracker;
	if ((longCompare((temp1 - ((jlong)((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK(sp[0].o))->F_lastTime)), ((jlong)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_maxFlingDelay))) >= 0) goto label_32;
	}
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tracker;
	((func_arc_input_GestureDetector$VelocityTracker_update_float_float_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_GestureDetector$VelocityTracker_update_float_float_long])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[7].l));
	LINE_NUMBER(225);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_listener;
	sp[1].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tracker;
	jfloat temp0 = (jfloat)((func_arc_input_GestureDetector$VelocityTracker_getVelocityX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_input_GestureDetector$VelocityTracker_getVelocityX_R_float])(ctx, sp[1].o);
	sp[1].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tracker;
	jfloat temp1 = (jfloat)((func_arc_input_GestureDetector$VelocityTracker_getVelocityY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_input_GestureDetector$VelocityTracker_getVelocityY_R_float])(ctx, sp[1].o);
	jint temp2 = (jint)((func_arc_input_GestureDetector$GestureListener_fling_float_float_arc_input_KeyCode_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_GestureDetector$GestureListener, INDEX_arc_input_GestureDetector$GestureListener_fling_float_float_arc_input_KeyCode_R_boolean, sp[0].o))(ctx, sp[0].o, temp0, temp1, (frame[4].o));
	if (temp2 != 0) goto label_35;
	}
	INST_ILOAD(6);
	if ((--sp)->i == 0) goto label_36;
label_35:;
	INST_ICONST(1);
	goto label_37;
label_36:;
	INST_ICONST(0);
label_37:;
	INST_ISTORE(6);
label_32:;
	{
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

void M_arc_input_GestureDetector_cancel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector:cancel", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressTask;
	((func_arc_util_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(233);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressFired = (jint(1));
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_input_GestureDetector_isLongPressed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector:isLongPressed", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(238);
	jint temp0 = (jint)((func_arc_input_GestureDetector_isLongPressed_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_input_GestureDetector_isLongPressed_float_R_boolean])(ctx, (frame[0].o), ((jfloat)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressSeconds));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_input_GestureDetector_isLongPressed_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector:isLongPressed", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(245);
	if ((longCompare(((jlong)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_gestureStartTime), (jlong(0)))) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(246);
	jlong temp0 = (jlong)SM_arc_util_Time_nanos_R_long(ctx);
	if ((longCompare((temp0 - ((jlong)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_gestureStartTime)), (jlong(((frame[1].f) * (jfloat(1,000000e+09f))))))) <= 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_input_GestureDetector_isPanning_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector:isPanning", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return ((jint)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_panning);
	}

	popStackFrame(ctx);
}

void M_arc_input_GestureDetector_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector:reset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(254);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_gestureStartTime = (jlong(0));
	LINE_NUMBER(255);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_panning = (jint(0));
	LINE_NUMBER(256);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_inTapRectangle = (jint(0));
	LINE_NUMBER(257);
	sp[0].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tracker;
	((arc_input_GestureDetector$VelocityTracker *) NULL_CHECK(sp[0].o))->F_lastTime = (jlong(0));
	LINE_NUMBER(258);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_input_GestureDetector_isWithinTapRectangle_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector:isWithinTapRectangle", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(261);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[1].f) - (frame[3].f)));
	if ((floatCompare(temp0, ((jfloat)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleWidth), 1)) >= 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[2].f) - (frame[4].f)));
	if ((floatCompare(temp0, ((jfloat)((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleHeight), 1)) >= 0) goto label_1;
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

void M_arc_input_GestureDetector_invalidateTapSquare(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector:invalidateTapSquare", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(266);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_inTapRectangle = (jint(0));
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_input_GestureDetector_setTapSquareSize_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector:setTapSquareSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(270);
	((func_arc_input_GestureDetector_setTapRectangleSize_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_input_GestureDetector_setTapRectangleSize_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[1].f));
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_input_GestureDetector_setTapRectangleSize_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector:setTapRectangleSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(274);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleWidth = (frame[1].f);
	LINE_NUMBER(275);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleHeight = (frame[2].f);
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_input_GestureDetector_setTapCountInterval_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector:setTapCountInterval", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(280);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapCountInterval = (jlong(((frame[1].f) * (jfloat(1,000000e+09f)))));
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_input_GestureDetector_setLongPressSeconds_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector:setLongPressSeconds", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(284);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressSeconds = (frame[1].f);
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_input_GestureDetector_setMaxFlingDelay_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector:setMaxFlingDelay", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(288);
	((arc_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_maxFlingDelay = (frame[1].l);
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_input_GestureDetector[] {
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
	(void *) M_arc_input_InputProcessor_keyDown_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_InputProcessor_keyUp_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_InputProcessor_keyTyped_char_R_boolean,
	(void *) M_arc_input_GestureDetector_touchDown_int_int_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_GestureDetector_touchUp_int_int_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_GestureDetector_touchDragged_int_int_int_R_boolean,
	(void *) M_arc_input_InputProcessor_mouseMoved_int_int_R_boolean,
	(void *) M_arc_input_InputProcessor_scrolled_float_float_R_boolean,
	(void *) M_arc_input_GestureDetector_getListener_R_arc_input_GestureDetector$GestureListener,
	(void *) M_arc_input_GestureDetector_touchDown_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_GestureDetector_touchDragged_float_float_int_R_boolean,
	(void *) M_arc_input_GestureDetector_touchUp_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_GestureDetector_cancel,
	(void *) M_arc_input_GestureDetector_isLongPressed_R_boolean,
	(void *) M_arc_input_GestureDetector_isLongPressed_float_R_boolean,
	(void *) M_arc_input_GestureDetector_isPanning_R_boolean,
	(void *) M_arc_input_GestureDetector_reset,
	(void *) M_arc_input_GestureDetector_isWithinTapRectangle_float_float_float_float_R_boolean,
	(void *) M_arc_input_GestureDetector_invalidateTapSquare,
	(void *) M_arc_input_GestureDetector_setTapSquareSize_float,
	(void *) M_arc_input_GestureDetector_setTapRectangleSize_float_float,
	(void *) M_arc_input_GestureDetector_setTapCountInterval_float,
	(void *) M_arc_input_GestureDetector_setLongPressSeconds_float,
	(void *) M_arc_input_GestureDetector_setMaxFlingDelay_long,
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
	{ "keyDown", "(Larc/input/KeyCode;)Z" },
	{ "keyUp", "(Larc/input/KeyCode;)Z" },
	{ "keyTyped", "(C)Z" },
	{ "touchDown", "(IIILarc/input/KeyCode;)Z" },
	{ "touchUp", "(IIILarc/input/KeyCode;)Z" },
	{ "touchDragged", "(III)Z" },
	{ "mouseMoved", "(II)Z" },
	{ "scrolled", "(FF)Z" },
	{ "getListener", "()Larc/input/GestureDetector$GestureListener;" },
	{ "touchDown", "(FFILarc/input/KeyCode;)Z" },
	{ "touchDragged", "(FFI)Z" },
	{ "touchUp", "(FFILarc/input/KeyCode;)Z" },
	{ "cancel", "()V" },
	{ "isLongPressed", "()Z" },
	{ "isLongPressed", "(F)Z" },
	{ "isPanning", "()Z" },
	{ "reset", "()V" },
	{ "isWithinTapRectangle", "(FFFF)Z" },
	{ "invalidateTapSquare", "()V" },
	{ "setTapSquareSize", "(F)V" },
	{ "setTapRectangleSize", "(FF)V" },
	{ "setTapCountInterval", "(F)V" },
	{ "setLongPressSeconds", "(F)V" },
	{ "setMaxFlingDelay", "(J)V" },
};

static jclass interfaces[] { &class_arc_input_InputProcessor, };

static jclass innerClasses[] {
	&class_arc_input_GestureDetector$GestureListener,
	&class_arc_input_GestureDetector$VelocityTracker,
};

static FieldMetadata fields[] {
	{ "listener", &class_arc_input_GestureDetector$GestureListener, offsetof(arc_input_GestureDetector, F_listener), "Larc/input/GestureDetector$GestureListener;", 16 },
	{ "tracker", &class_arc_input_GestureDetector$VelocityTracker, offsetof(arc_input_GestureDetector, F_tracker), "Larc/input/GestureDetector$VelocityTracker;", 18 },
	{ "pointer2", &class_arc_math_geom_Vec2, offsetof(arc_input_GestureDetector, F_pointer2), "Larc/math/geom/Vec2;", 18 },
	{ "initialPointer1", &class_arc_math_geom_Vec2, offsetof(arc_input_GestureDetector, F_initialPointer1), "Larc/math/geom/Vec2;", 18 },
	{ "initialPointer2", &class_arc_math_geom_Vec2, offsetof(arc_input_GestureDetector, F_initialPointer2), "Larc/math/geom/Vec2;", 18 },
	{ "longPressFired", &class_boolean, offsetof(arc_input_GestureDetector, F_longPressFired), "Z", 0 },
	{ "pointer1", &class_arc_math_geom_Vec2, offsetof(arc_input_GestureDetector, F_pointer1), "Larc/math/geom/Vec2;", 0 },
	{ "longPressTask", &class_arc_util_Timer$Task, offsetof(arc_input_GestureDetector, F_longPressTask), "Larc/util/Timer$Task;", 18 },
	{ "tapRectangleWidth", &class_float, offsetof(arc_input_GestureDetector, F_tapRectangleWidth), "F", 2 },
	{ "tapRectangleHeight", &class_float, offsetof(arc_input_GestureDetector, F_tapRectangleHeight), "F", 2 },
	{ "tapCountInterval", &class_long, offsetof(arc_input_GestureDetector, F_tapCountInterval), "J", 2 },
	{ "longPressSeconds", &class_float, offsetof(arc_input_GestureDetector, F_longPressSeconds), "F", 2 },
	{ "maxFlingDelay", &class_long, offsetof(arc_input_GestureDetector, F_maxFlingDelay), "J", 2 },
	{ "inTapRectangle", &class_boolean, offsetof(arc_input_GestureDetector, F_inTapRectangle), "Z", 2 },
	{ "tapCount", &class_int, offsetof(arc_input_GestureDetector, F_tapCount), "I", 2 },
	{ "lastTapTime", &class_long, offsetof(arc_input_GestureDetector, F_lastTapTime), "J", 2 },
	{ "lastTapX", &class_float, offsetof(arc_input_GestureDetector, F_lastTapX), "F", 2 },
	{ "lastTapY", &class_float, offsetof(arc_input_GestureDetector, F_lastTapY), "F", 2 },
	{ "lastTapPointer", &class_int, offsetof(arc_input_GestureDetector, F_lastTapPointer), "I", 2 },
	{ "lastTapButton", &class_arc_input_KeyCode, offsetof(arc_input_GestureDetector, F_lastTapButton), "Larc/input/KeyCode;", 2 },
	{ "pinching", &class_boolean, offsetof(arc_input_GestureDetector, F_pinching), "Z", 2 },
	{ "panning", &class_boolean, offsetof(arc_input_GestureDetector, F_panning), "Z", 2 },
	{ "tapRectangleCenterX", &class_float, offsetof(arc_input_GestureDetector, F_tapRectangleCenterX), "F", 2 },
	{ "tapRectangleCenterY", &class_float, offsetof(arc_input_GestureDetector, F_tapRectangleCenterY), "F", 2 },
	{ "gestureStartTime", &class_long, offsetof(arc_input_GestureDetector, F_gestureStartTime), "J", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_input_GestureDetector_arc_input_GestureDetector$GestureListener, 0, "(Larc/input/GestureDetector$GestureListener;)V", 1 },
	{ "<init>", (intptr_t) init_arc_input_GestureDetector_float_float_float_float_arc_input_GestureDetector$GestureListener, 0, "(FFFFLarc/input/GestureDetector$GestureListener;)V", 1 },
	{ "<init>", (intptr_t) init_arc_input_GestureDetector_float_float_float_float_float_arc_input_GestureDetector$GestureListener, 0, "(FFFFFLarc/input/GestureDetector$GestureListener;)V", 1 },
	{ "getListener", (intptr_t) M_arc_input_GestureDetector_getListener_R_arc_input_GestureDetector$GestureListener, VTABLE_arc_input_GestureDetector_getListener_R_arc_input_GestureDetector$GestureListener, "()Larc/input/GestureDetector$GestureListener;", 1 },
	{ "touchDown", (intptr_t) M_arc_input_GestureDetector_touchDown_int_int_int_arc_input_KeyCode_R_boolean, VTABLE_arc_input_GestureDetector_touchDown_int_int_int_arc_input_KeyCode_R_boolean, "(IIILarc/input/KeyCode;)Z", 1 },
	{ "touchDown", (intptr_t) M_arc_input_GestureDetector_touchDown_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_arc_input_GestureDetector_touchDown_float_float_int_arc_input_KeyCode_R_boolean, "(FFILarc/input/KeyCode;)Z", 1 },
	{ "touchDragged", (intptr_t) M_arc_input_GestureDetector_touchDragged_int_int_int_R_boolean, VTABLE_arc_input_GestureDetector_touchDragged_int_int_int_R_boolean, "(III)Z", 1 },
	{ "touchDragged", (intptr_t) M_arc_input_GestureDetector_touchDragged_float_float_int_R_boolean, VTABLE_arc_input_GestureDetector_touchDragged_float_float_int_R_boolean, "(FFI)Z", 1 },
	{ "touchUp", (intptr_t) M_arc_input_GestureDetector_touchUp_int_int_int_arc_input_KeyCode_R_boolean, VTABLE_arc_input_GestureDetector_touchUp_int_int_int_arc_input_KeyCode_R_boolean, "(IIILarc/input/KeyCode;)Z", 1 },
	{ "touchUp", (intptr_t) M_arc_input_GestureDetector_touchUp_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_arc_input_GestureDetector_touchUp_float_float_int_arc_input_KeyCode_R_boolean, "(FFILarc/input/KeyCode;)Z", 1 },
	{ "cancel", (intptr_t) M_arc_input_GestureDetector_cancel, VTABLE_arc_input_GestureDetector_cancel, "()V", 1 },
	{ "isLongPressed", (intptr_t) M_arc_input_GestureDetector_isLongPressed_R_boolean, VTABLE_arc_input_GestureDetector_isLongPressed_R_boolean, "()Z", 1 },
	{ "isLongPressed", (intptr_t) M_arc_input_GestureDetector_isLongPressed_float_R_boolean, VTABLE_arc_input_GestureDetector_isLongPressed_float_R_boolean, "(F)Z", 1 },
	{ "isPanning", (intptr_t) M_arc_input_GestureDetector_isPanning_R_boolean, VTABLE_arc_input_GestureDetector_isPanning_R_boolean, "()Z", 1 },
	{ "reset", (intptr_t) M_arc_input_GestureDetector_reset, VTABLE_arc_input_GestureDetector_reset, "()V", 1 },
	{ "isWithinTapRectangle", (intptr_t) M_arc_input_GestureDetector_isWithinTapRectangle_float_float_float_float_R_boolean, VTABLE_arc_input_GestureDetector_isWithinTapRectangle_float_float_float_float_R_boolean, "(FFFF)Z", 2 },
	{ "invalidateTapSquare", (intptr_t) M_arc_input_GestureDetector_invalidateTapSquare, VTABLE_arc_input_GestureDetector_invalidateTapSquare, "()V", 1 },
	{ "setTapSquareSize", (intptr_t) M_arc_input_GestureDetector_setTapSquareSize_float, VTABLE_arc_input_GestureDetector_setTapSquareSize_float, "(F)V", 1 },
	{ "setTapRectangleSize", (intptr_t) M_arc_input_GestureDetector_setTapRectangleSize_float_float, VTABLE_arc_input_GestureDetector_setTapRectangleSize_float_float, "(FF)V", 1 },
	{ "setTapCountInterval", (intptr_t) M_arc_input_GestureDetector_setTapCountInterval_float, VTABLE_arc_input_GestureDetector_setTapCountInterval_float, "(F)V", 1 },
	{ "setLongPressSeconds", (intptr_t) M_arc_input_GestureDetector_setLongPressSeconds_float, VTABLE_arc_input_GestureDetector_setLongPressSeconds_float, "(F)V", 1 },
	{ "setMaxFlingDelay", (intptr_t) M_arc_input_GestureDetector_setMaxFlingDelay_long, VTABLE_arc_input_GestureDetector_setMaxFlingDelay_long, "(J)V", 1 },
};

Class class_arc_input_GestureDetector{
		.nativeName = (intptr_t) "arc/input/GestureDetector",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_input_GestureDetector),
		.classVtable = (intptr_t) vtable_arc_input_GestureDetector,
		.staticInitializer = (intptr_t) clinit_arc_input_GestureDetector,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_input_GestureDetector,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 25,
		.nativeFields = (intptr_t) fields,
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 35,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_input_GestureDetector = registerClass(&class_arc_input_GestureDetector);

}
