#include "arc/scene/event/ElementGestureListener.h"
#include "arc/math/geom/Vec2.h"
#include "arc/scene/event/ElementGestureListener_1.h"
#include "arc/scene/event/InputEvent_InputEventType.h"
#include "arc/scene/event/ElementGestureListener_2.h"
#include "java/lang/Enum.h"
#include "arc/scene/event/ElementGestureListener.h"
#include "arc/input/KeyCode.h"
#include "arc/input/GestureDetector.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/scene/event/SceneEvent.h"
#include "arc/scene/event/EventListener.h"
#include "arc/input/GestureDetector_GestureListener.h"
#include "arc/scene/event/InputEvent.h"

extern "C" {

jobject SF_arc_scene_event_ElementGestureListener_tmpCoords;
jobject SF_arc_scene_event_ElementGestureListener_tmpCoords2;

void mark_arc_scene_event_ElementGestureListener(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_scene_event_ElementGestureListener_tmpCoords)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_event_ElementGestureListener_tmpCoords)->clazz)->markFunction)((jobject) SF_arc_scene_event_ElementGestureListener_tmpCoords, mark, depth + 1);
		if (SF_arc_scene_event_ElementGestureListener_tmpCoords2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_event_ElementGestureListener_tmpCoords2)->clazz)->markFunction)((jobject) SF_arc_scene_event_ElementGestureListener_tmpCoords2, mark, depth + 1);
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
	auto self = (arc_scene_event_ElementGestureListener *) object;
	if (self->F_detector)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_detector)->clazz)->markFunction)((jobject) self->F_detector, mark, depth + 1);
	if (self->F_event)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_event)->clazz)->markFunction)((jobject) self->F_event, mark, depth + 1);
	if (self->F_actor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_actor)->clazz)->markFunction)((jobject) self->F_actor, mark, depth + 1);
	if (self->F_touchDownTarget)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_touchDownTarget)->clazz)->markFunction)((jobject) self->F_touchDownTarget, mark, depth + 1);
}

void init_arc_scene_event_ElementGestureListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ElementGestureListener:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_ElementGestureListener(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_arc_scene_event_ElementGestureListener_float_float_float_float(ctx, (frame[0].o), (jfloat(20.0f)), (jfloat(0.4f)), (jfloat(1.1f)), (jfloat(0.15f)));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_event_ElementGestureListener_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ElementGestureListener:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_ElementGestureListener(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(28);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_arc_input_GestureDetector(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_input_GestureDetector);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jfloat temp3 = frame[4].f;
	clinit_arc_scene_event_ElementGestureListener$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_event_ElementGestureListener$1);
	init_arc_scene_event_ElementGestureListener$1_arc_scene_event_ElementGestureListener(ctx, sp[2].o, (frame[0].o));
	init_arc_input_GestureDetector_float_float_float_float_arc_input_GestureDetector$GestureListener(ctx, sp[1].o, temp0, temp1, temp2, temp3, sp[2].o);
	((arc_scene_event_ElementGestureListener *) NULL_CHECK(sp[0].o))->F_detector = (jref) sp[1].o;
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_ElementGestureListener_handle_arc_scene_event_SceneEvent_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ElementGestureListener:handle", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(89);
	if ((isInstance(ctx, (frame[1].o), &class_arc_scene_event_InputEvent)) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(90);
	frame[2].o = (checkCast(ctx, &class_arc_scene_event_InputEvent, (frame[1].o)));
	LINE_NUMBER(92);
	clinit_arc_scene_event_ElementGestureListener$2(ctx);
	sp[0].o = (jobject)SF_arc_scene_event_ElementGestureListener$2_$SwitchMap$arc$scene$event$InputEvent$InputEventType;
	sp[1].o = (jobject)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_type;
	jint temp0 = (jint)((func_arc_scene_event_InputEvent$InputEventType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_event_InputEvent$InputEventType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_3;
		case 2: goto label_4;
		case 3: goto label_5;
		default: goto label_6;
	}
	}
label_3:;
	{
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[2].o)))->F_listenerActor;
	((arc_scene_event_ElementGestureListener *) NULL_CHECK(sp[0].o))->F_actor = (jref) sp[1].o;
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[2].o)))->F_targetActor;
	((arc_scene_event_ElementGestureListener *) NULL_CHECK(sp[0].o))->F_touchDownTarget = (jref) sp[1].o;
	LINE_NUMBER(96);
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener *) NULL_CHECK((frame[0].o)))->F_detector;
	jfloat temp0 = (jfloat)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_stageX;
	jfloat temp1 = (jfloat)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_stageY;
	jint temp2 = (jint)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_pointer;
	sp[1].o = (jobject)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_keyCode;
	jint temp3 = (jint)((func_arc_input_GestureDetector_touchDown_float_float_int_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_GestureDetector_touchDown_float_float_int_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(97);
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener *) NULL_CHECK((frame[0].o)))->F_actor;
	clinit_arc_scene_event_ElementGestureListener(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_ElementGestureListener_tmpCoords;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, ((jfloat)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_stageX), ((jfloat)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_stageY));
	sp[0].o = (jobject)((func_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	clinit_arc_scene_event_ElementGestureListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_ElementGestureListener_tmpCoords;
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_scene_event_ElementGestureListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_ElementGestureListener_tmpCoords;
	jfloat temp5 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y;
	jint temp6 = (jint)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_pointer;
	sp[2].o = (jobject)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_keyCode;
	((func_arc_scene_event_ElementGestureListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_ElementGestureListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode])(ctx, sp[0].o, sp[1].o, temp4, temp5, temp6, sp[2].o);
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(101);
	jint temp0 = (jint)((func_arc_scene_event_InputEvent_isTouchFocusCancel_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_event_InputEvent_isTouchFocusCancel_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_12;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_12:;
	{
	LINE_NUMBER(102);
	((arc_scene_event_ElementGestureListener *) NULL_CHECK((frame[0].o)))->F_event = (jref) (frame[2].o);
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[2].o)))->F_listenerActor;
	((arc_scene_event_ElementGestureListener *) NULL_CHECK(sp[0].o))->F_actor = (jref) sp[1].o;
	LINE_NUMBER(104);
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener *) NULL_CHECK((frame[0].o)))->F_detector;
	jfloat temp0 = (jfloat)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_stageX;
	jfloat temp1 = (jfloat)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_stageY;
	jint temp2 = (jint)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_pointer;
	sp[1].o = (jobject)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_keyCode;
	jint temp3 = (jint)((func_arc_input_GestureDetector_touchUp_float_float_int_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_GestureDetector_touchUp_float_float_int_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(105);
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener *) NULL_CHECK((frame[0].o)))->F_actor;
	clinit_arc_scene_event_ElementGestureListener(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_ElementGestureListener_tmpCoords;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, ((jfloat)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_stageX), ((jfloat)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_stageY));
	sp[0].o = (jobject)((func_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	clinit_arc_scene_event_ElementGestureListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_ElementGestureListener_tmpCoords;
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_scene_event_ElementGestureListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_ElementGestureListener_tmpCoords;
	jfloat temp5 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y;
	jint temp6 = (jint)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_pointer;
	sp[2].o = (jobject)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_keyCode;
	((func_arc_scene_event_ElementGestureListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_ElementGestureListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode])(ctx, sp[0].o, sp[1].o, temp4, temp5, temp6, sp[2].o);
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(109);
	((arc_scene_event_ElementGestureListener *) NULL_CHECK((frame[0].o)))->F_event = (jref) (frame[2].o);
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[2].o)))->F_listenerActor;
	((arc_scene_event_ElementGestureListener *) NULL_CHECK(sp[0].o))->F_actor = (jref) sp[1].o;
	LINE_NUMBER(111);
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener *) NULL_CHECK((frame[0].o)))->F_detector;
	jint temp0 = (jint)((func_arc_input_GestureDetector_touchDragged_float_float_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_GestureDetector_touchDragged_float_float_int_R_boolean])(ctx, sp[0].o, ((jfloat)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_stageX), ((jfloat)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_stageY), ((jint)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_pointer));
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_scene_event_ElementGestureListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ElementGestureListener:touchDown", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_event_ElementGestureListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ElementGestureListener:touchUp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	LINE_NUMBER(121);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_event_ElementGestureListener_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ElementGestureListener:tap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	LINE_NUMBER(124);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_event_ElementGestureListener_longPress_arc_scene_Element_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ElementGestureListener:longPress", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_scene_event_ElementGestureListener_fling_arc_scene_event_InputEvent_float_float_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ElementGestureListener:fling", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	LINE_NUMBER(135);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_event_ElementGestureListener_pan_arc_scene_event_InputEvent_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ElementGestureListener:pan", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	LINE_NUMBER(139);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_event_ElementGestureListener_zoom_arc_scene_event_InputEvent_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ElementGestureListener:zoom", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	LINE_NUMBER(142);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_event_ElementGestureListener_pinch_arc_scene_event_InputEvent_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ElementGestureListener:pinch", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	LINE_NUMBER(145);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_event_ElementGestureListener_getGestureDetector_R_arc_input_GestureDetector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ElementGestureListener:getGestureDetector", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener *) NULL_CHECK((frame[0].o)))->F_detector;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_event_ElementGestureListener_getTouchDownTarget_R_arc_scene_Element(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ElementGestureListener:getTouchDownTarget", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener *) NULL_CHECK((frame[0].o)))->F_touchDownTarget;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_scene_event_ElementGestureListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ElementGestureListener:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_ElementGestureListener(ctx);
	{
	LINE_NUMBER(16);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_scene_event_ElementGestureListener(ctx);
	SF_arc_scene_event_ElementGestureListener_tmpCoords = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_scene_event_ElementGestureListener(ctx);
	SF_arc_scene_event_ElementGestureListener_tmpCoords2 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_event_ElementGestureListener[] {
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
	(void *) M_arc_scene_event_ElementGestureListener_handle_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_event_ElementGestureListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_ElementGestureListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_ElementGestureListener_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_ElementGestureListener_longPress_arc_scene_Element_float_float_R_boolean,
	(void *) M_arc_scene_event_ElementGestureListener_fling_arc_scene_event_InputEvent_float_float_arc_input_KeyCode,
	(void *) M_arc_scene_event_ElementGestureListener_pan_arc_scene_event_InputEvent_float_float_float_float,
	(void *) M_arc_scene_event_ElementGestureListener_zoom_arc_scene_event_InputEvent_float_float,
	(void *) M_arc_scene_event_ElementGestureListener_pinch_arc_scene_event_InputEvent_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2,
	(void *) M_arc_scene_event_ElementGestureListener_getGestureDetector_R_arc_input_GestureDetector,
	(void *) M_arc_scene_event_ElementGestureListener_getTouchDownTarget_R_arc_scene_Element,
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
	{ "handle", "(Larc/scene/event/SceneEvent;)Z" },
	{ "touchDown", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V" },
	{ "touchUp", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V" },
	{ "tap", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V" },
	{ "longPress", "(Larc/scene/Element;FF)Z" },
	{ "fling", "(Larc/scene/event/InputEvent;FFLarc/input/KeyCode;)V" },
	{ "pan", "(Larc/scene/event/InputEvent;FFFF)V" },
	{ "zoom", "(Larc/scene/event/InputEvent;FF)V" },
	{ "pinch", "(Larc/scene/event/InputEvent;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)V" },
	{ "getGestureDetector", "()Larc/input/GestureDetector;" },
	{ "getTouchDownTarget", "()Larc/scene/Element;" },
};

static jclass interfaces[] { &class_arc_scene_event_EventListener, };

static FieldMetadata fields[] {
	{ "tmpCoords", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_scene_event_ElementGestureListener_tmpCoords, "Larc/math/geom/Vec2;", 24 },
	{ "tmpCoords2", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_scene_event_ElementGestureListener_tmpCoords2, "Larc/math/geom/Vec2;", 24 },
	{ "detector", &class_arc_input_GestureDetector, offsetof(arc_scene_event_ElementGestureListener, F_detector), "Larc/input/GestureDetector;", 18 },
	{ "event", &class_arc_scene_event_InputEvent, offsetof(arc_scene_event_ElementGestureListener, F_event), "Larc/scene/event/InputEvent;", 0 },
	{ "actor", &class_arc_scene_Element, offsetof(arc_scene_event_ElementGestureListener, F_actor), "Larc/scene/Element;", 0 },
	{ "touchDownTarget", &class_arc_scene_Element, offsetof(arc_scene_event_ElementGestureListener, F_touchDownTarget), "Larc/scene/Element;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_event_ElementGestureListener, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_event_ElementGestureListener_float_float_float_float, 0, "(FFFF)V", 1 },
	{ "handle", (intptr_t) M_arc_scene_event_ElementGestureListener_handle_arc_scene_event_SceneEvent_R_boolean, VTABLE_arc_scene_event_ElementGestureListener_handle_arc_scene_event_SceneEvent_R_boolean, "(Larc/scene/event/SceneEvent;)Z", 1 },
	{ "touchDown", (intptr_t) M_arc_scene_event_ElementGestureListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_arc_scene_event_ElementGestureListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
	{ "touchUp", (intptr_t) M_arc_scene_event_ElementGestureListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_arc_scene_event_ElementGestureListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
	{ "tap", (intptr_t) M_arc_scene_event_ElementGestureListener_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_arc_scene_event_ElementGestureListener_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
	{ "longPress", (intptr_t) M_arc_scene_event_ElementGestureListener_longPress_arc_scene_Element_float_float_R_boolean, VTABLE_arc_scene_event_ElementGestureListener_longPress_arc_scene_Element_float_float_R_boolean, "(Larc/scene/Element;FF)Z", 1 },
	{ "fling", (intptr_t) M_arc_scene_event_ElementGestureListener_fling_arc_scene_event_InputEvent_float_float_arc_input_KeyCode, VTABLE_arc_scene_event_ElementGestureListener_fling_arc_scene_event_InputEvent_float_float_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFLarc/input/KeyCode;)V", 1 },
	{ "pan", (intptr_t) M_arc_scene_event_ElementGestureListener_pan_arc_scene_event_InputEvent_float_float_float_float, VTABLE_arc_scene_event_ElementGestureListener_pan_arc_scene_event_InputEvent_float_float_float_float, "(Larc/scene/event/InputEvent;FFFF)V", 1 },
	{ "zoom", (intptr_t) M_arc_scene_event_ElementGestureListener_zoom_arc_scene_event_InputEvent_float_float, VTABLE_arc_scene_event_ElementGestureListener_zoom_arc_scene_event_InputEvent_float_float, "(Larc/scene/event/InputEvent;FF)V", 1 },
	{ "pinch", (intptr_t) M_arc_scene_event_ElementGestureListener_pinch_arc_scene_event_InputEvent_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2, VTABLE_arc_scene_event_ElementGestureListener_pinch_arc_scene_event_InputEvent_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2, "(Larc/scene/event/InputEvent;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)V", 1 },
	{ "getGestureDetector", (intptr_t) M_arc_scene_event_ElementGestureListener_getGestureDetector_R_arc_input_GestureDetector, VTABLE_arc_scene_event_ElementGestureListener_getGestureDetector_R_arc_input_GestureDetector, "()Larc/input/GestureDetector;", 1 },
	{ "getTouchDownTarget", (intptr_t) M_arc_scene_event_ElementGestureListener_getTouchDownTarget_R_arc_scene_Element, VTABLE_arc_scene_event_ElementGestureListener_getTouchDownTarget_R_arc_scene_Element, "()Larc/scene/Element;", 1 },
	{ "<clinit>", (intptr_t) clinit_arc_scene_event_ElementGestureListener, 0, "()V", 8 },
};

Class class_arc_scene_event_ElementGestureListener{
		.nativeName = (intptr_t) "arc/scene/event/ElementGestureListener",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_event_ElementGestureListener),
		.classVtable = (intptr_t) vtable_arc_scene_event_ElementGestureListener,
		.staticInitializer = (intptr_t) clinit_arc_scene_event_ElementGestureListener,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_event_ElementGestureListener,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_event_ElementGestureListener = registerClass(&class_arc_scene_event_ElementGestureListener);

}
