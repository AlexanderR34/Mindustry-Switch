#include "arc/scene/event/ElementGestureListener_1.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "arc/scene/event/ElementGestureListener_1.h"
#include "arc/scene/Element.h"
#include "arc/scene/event/ElementGestureListener.h"
#include "arc/input/GestureDetector_GestureListener.h"
#include "arc/scene/event/InputEvent.h"
#include "arc/input/KeyCode.h"

extern "C" {


void mark_arc_scene_event_ElementGestureListener$1(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_event_ElementGestureListener$1 *) object;
	if (self->F_initialPointer1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_initialPointer1)->clazz)->markFunction)((jobject) self->F_initialPointer1, mark, depth + 1);
	if (self->F_initialPointer2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_initialPointer2)->clazz)->markFunction)((jobject) self->F_initialPointer2, mark, depth + 1);
	if (self->F_pointer1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pointer1)->clazz)->markFunction)((jobject) self->F_pointer1, mark, depth + 1);
	if (self->F_pointer2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pointer2)->clazz)->markFunction)((jobject) self->F_pointer2, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_scene_event_ElementGestureListener$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_scene_event_ElementGestureListener$1_arc_scene_event_ElementGestureListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ElementGestureListener$1:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_ElementGestureListener$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK(sp[0].o))->F_initialPointer1 = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK(sp[0].o))->F_initialPointer2 = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK(sp[0].o))->F_pointer1 = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK(sp[0].o))->F_pointer2 = (jref) sp[1].o;
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_ElementGestureListener$1_tap_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ElementGestureListener$1:tap", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener *) NULL_CHECK(sp[0].o))->F_actor;
	clinit_arc_scene_event_ElementGestureListener(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_ElementGestureListener_tmpCoords;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((func_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(36);
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_event_ElementGestureListener *) NULL_CHECK(sp[1].o))->F_event;
	clinit_arc_scene_event_ElementGestureListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_ElementGestureListener_tmpCoords;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_scene_event_ElementGestureListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_ElementGestureListener_tmpCoords;
	((func_arc_scene_event_ElementGestureListener_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_ElementGestureListener_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y), (frame[3].i), (frame[4].o));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_ElementGestureListener$1_longPress_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ElementGestureListener$1:longPress", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener *) NULL_CHECK(sp[0].o))->F_actor;
	clinit_arc_scene_event_ElementGestureListener(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_ElementGestureListener_tmpCoords;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((func_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(43);
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_event_ElementGestureListener *) NULL_CHECK(sp[1].o))->F_actor;
	clinit_arc_scene_event_ElementGestureListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_ElementGestureListener_tmpCoords;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_scene_event_ElementGestureListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_ElementGestureListener_tmpCoords;
	jint temp1 = (jint)((func_arc_scene_event_ElementGestureListener_longPress_arc_scene_Element_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_ElementGestureListener_longPress_arc_scene_Element_float_float_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_ElementGestureListener$1_fling_float_float_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ElementGestureListener$1:fling", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_arc_scene_event_ElementGestureListener(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_ElementGestureListener_tmpCoords;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[1].f), (frame[2].f));
	M_arc_scene_event_ElementGestureListener$1_stageToLocalAmount_arc_math_geom_Vec2(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(49);
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_event_ElementGestureListener *) NULL_CHECK(sp[1].o))->F_event;
	clinit_arc_scene_event_ElementGestureListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_ElementGestureListener_tmpCoords;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_scene_event_ElementGestureListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_ElementGestureListener_tmpCoords;
	((func_arc_scene_event_ElementGestureListener_fling_arc_scene_event_InputEvent_float_float_arc_input_KeyCode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_ElementGestureListener_fling_arc_scene_event_InputEvent_float_float_arc_input_KeyCode])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y), (frame[3].o));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_ElementGestureListener$1_pan_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ElementGestureListener$1:pan", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_arc_scene_event_ElementGestureListener(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_ElementGestureListener_tmpCoords;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[3].f), (frame[4].f));
	M_arc_scene_event_ElementGestureListener$1_stageToLocalAmount_arc_math_geom_Vec2(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(56);
	clinit_arc_scene_event_ElementGestureListener(ctx);
	sp[0].o = (jobject)SF_arc_scene_event_ElementGestureListener_tmpCoords;
	frame[3].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	LINE_NUMBER(57);
	clinit_arc_scene_event_ElementGestureListener(ctx);
	sp[0].o = (jobject)SF_arc_scene_event_ElementGestureListener_tmpCoords;
	frame[4].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(58);
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener *) NULL_CHECK(sp[0].o))->F_actor;
	clinit_arc_scene_event_ElementGestureListener(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_ElementGestureListener_tmpCoords;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((func_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(59);
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_event_ElementGestureListener *) NULL_CHECK(sp[1].o))->F_event;
	clinit_arc_scene_event_ElementGestureListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_ElementGestureListener_tmpCoords;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_scene_event_ElementGestureListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_ElementGestureListener_tmpCoords;
	((func_arc_scene_event_ElementGestureListener_pan_arc_scene_event_InputEvent_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_ElementGestureListener_pan_arc_scene_event_InputEvent_float_float_float_float])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y), (frame[3].f), (frame[4].f));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_ElementGestureListener$1_zoom_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ElementGestureListener$1:zoom", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_event_ElementGestureListener *) NULL_CHECK(sp[1].o))->F_event;
	((func_arc_scene_event_ElementGestureListener_zoom_arc_scene_event_InputEvent_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_ElementGestureListener_zoom_arc_scene_event_InputEvent_float_float])(ctx, sp[0].o, sp[1].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_ElementGestureListener$1_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ElementGestureListener$1:pinch", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener *) NULL_CHECK(sp[0].o))->F_actor;
	sp[1].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_initialPointer1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(73);
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener *) NULL_CHECK(sp[0].o))->F_actor;
	sp[1].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_initialPointer2;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(74);
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener *) NULL_CHECK(sp[0].o))->F_actor;
	sp[1].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_pointer1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(75);
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener *) NULL_CHECK(sp[0].o))->F_actor;
	sp[1].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_pointer2;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(76);
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_event_ElementGestureListener *) NULL_CHECK(sp[1].o))->F_event;
	sp[2].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_initialPointer1;
	sp[3].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_initialPointer2;
	sp[4].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_pointer1;
	sp[5].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_pointer2;
	((func_arc_scene_event_ElementGestureListener_pinch_arc_scene_event_InputEvent_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_ElementGestureListener_pinch_arc_scene_event_InputEvent_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_arc_scene_event_ElementGestureListener$1_stageToLocalAmount_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ElementGestureListener$1:stageToLocalAmount", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_event_ElementGestureListener *) NULL_CHECK(sp[0].o))->F_actor;
	sp[0].o = (jobject)((func_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(82);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_scene_event_ElementGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_event_ElementGestureListener *) NULL_CHECK(sp[1].o))->F_actor;
	clinit_arc_scene_event_ElementGestureListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_ElementGestureListener_tmpCoords2;
	sp[2].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[2].o, (jfloat(0)), (jfloat(0)));
	sp[1].o = (jobject)((func_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_event_ElementGestureListener$1[] {
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
	(void *) M_arc_input_GestureDetector$GestureListener_touchDown_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_ElementGestureListener$1_tap_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_ElementGestureListener$1_longPress_float_float_R_boolean,
	(void *) M_arc_scene_event_ElementGestureListener$1_fling_float_float_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_ElementGestureListener$1_pan_float_float_float_float_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_panStop_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_ElementGestureListener$1_zoom_float_float_R_boolean,
	(void *) M_arc_scene_event_ElementGestureListener$1_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_pinchStop,
	(void *) M_arc_scene_event_ElementGestureListener$1_stageToLocalAmount_arc_math_geom_Vec2,
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
	{ "touchDown", "(FFILarc/input/KeyCode;)Z" },
	{ "tap", "(FFILarc/input/KeyCode;)Z" },
	{ "longPress", "(FF)Z" },
	{ "fling", "(FFLarc/input/KeyCode;)Z" },
	{ "pan", "(FFFF)Z" },
	{ "panStop", "(FFILarc/input/KeyCode;)Z" },
	{ "zoom", "(FF)Z" },
	{ "pinch", "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Z" },
	{ "pinchStop", "()V" },
	{ "stageToLocalAmount", "(Larc/math/geom/Vec2;)V" },
};

static jclass interfaces[] { &class_arc_input_GestureDetector$GestureListener, };

static FieldMetadata fields[] {
	{ "initialPointer1", &class_arc_math_geom_Vec2, offsetof(arc_scene_event_ElementGestureListener$1, F_initialPointer1), "Larc/math/geom/Vec2;", 18 },
	{ "initialPointer2", &class_arc_math_geom_Vec2, offsetof(arc_scene_event_ElementGestureListener$1, F_initialPointer2), "Larc/math/geom/Vec2;", 18 },
	{ "pointer1", &class_arc_math_geom_Vec2, offsetof(arc_scene_event_ElementGestureListener$1, F_pointer1), "Larc/math/geom/Vec2;", 18 },
	{ "pointer2", &class_arc_math_geom_Vec2, offsetof(arc_scene_event_ElementGestureListener$1, F_pointer2), "Larc/math/geom/Vec2;", 18 },
	{ "this$0", &class_arc_scene_event_ElementGestureListener, offsetof(arc_scene_event_ElementGestureListener$1, F_this$0), "Larc/scene/event/ElementGestureListener;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_event_ElementGestureListener$1_arc_scene_event_ElementGestureListener, 0, "(Larc/scene/event/ElementGestureListener;)V", 0 },
	{ "tap", (intptr_t) M_arc_scene_event_ElementGestureListener$1_tap_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_arc_scene_event_ElementGestureListener$1_tap_float_float_int_arc_input_KeyCode_R_boolean, "(FFILarc/input/KeyCode;)Z", 1 },
	{ "longPress", (intptr_t) M_arc_scene_event_ElementGestureListener$1_longPress_float_float_R_boolean, VTABLE_arc_scene_event_ElementGestureListener$1_longPress_float_float_R_boolean, "(FF)Z", 1 },
	{ "fling", (intptr_t) M_arc_scene_event_ElementGestureListener$1_fling_float_float_arc_input_KeyCode_R_boolean, VTABLE_arc_scene_event_ElementGestureListener$1_fling_float_float_arc_input_KeyCode_R_boolean, "(FFLarc/input/KeyCode;)Z", 1 },
	{ "pan", (intptr_t) M_arc_scene_event_ElementGestureListener$1_pan_float_float_float_float_R_boolean, VTABLE_arc_scene_event_ElementGestureListener$1_pan_float_float_float_float_R_boolean, "(FFFF)Z", 1 },
	{ "zoom", (intptr_t) M_arc_scene_event_ElementGestureListener$1_zoom_float_float_R_boolean, VTABLE_arc_scene_event_ElementGestureListener$1_zoom_float_float_R_boolean, "(FF)Z", 1 },
	{ "pinch", (intptr_t) M_arc_scene_event_ElementGestureListener$1_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean, VTABLE_arc_scene_event_ElementGestureListener$1_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Z", 1 },
	{ "stageToLocalAmount", (intptr_t) M_arc_scene_event_ElementGestureListener$1_stageToLocalAmount_arc_math_geom_Vec2, VTABLE_arc_scene_event_ElementGestureListener$1_stageToLocalAmount_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 2 },
};

Class class_arc_scene_event_ElementGestureListener$1{
		.nativeName = (intptr_t) "arc/scene/event/ElementGestureListener$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_event_ElementGestureListener$1),
		.classVtable = (intptr_t) vtable_arc_scene_event_ElementGestureListener$1,
		.staticInitializer = (intptr_t) clinit_arc_scene_event_ElementGestureListener$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_event_ElementGestureListener$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_scene_event_ElementGestureListener$1 = registerClass(&class_arc_scene_event_ElementGestureListener$1);

}

