#include "arc/scene/event/InputListener.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "arc/scene/event/InputEvent_InputEventType.h"
#include "arc/scene/Element.h"
#include "arc/scene/event/SceneEvent.h"
#include "arc/scene/event/EventListener.h"
#include "java/lang/Enum.h"
#include "arc/scene/event/InputListener.h"
#include "arc/scene/event/InputEvent.h"
#include "arc/scene/event/InputListener_1.h"
#include "arc/input/KeyCode.h"

extern "C" {

jobject SF_arc_scene_event_InputListener_tmpCoords;

void mark_arc_scene_event_InputListener(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_scene_event_InputListener_tmpCoords)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_event_InputListener_tmpCoords)->clazz)->markFunction)((jobject) SF_arc_scene_event_InputListener_tmpCoords, mark, depth + 1);
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
	auto self = (arc_scene_event_InputListener *) object;
}

void init_arc_scene_event_InputListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/InputListener:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_InputListener(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_InputListener_handle_arc_scene_event_SceneEvent_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/InputListener:handle", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(16);
	if ((isInstance(ctx, (frame[1].o), &class_arc_scene_event_InputEvent)) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(17);
	frame[2].o = (checkCast(ctx, &class_arc_scene_event_InputEvent, (frame[1].o)));
	LINE_NUMBER(19);
	clinit_arc_scene_event_InputListener$1(ctx);
	sp[0].o = (jobject)SF_arc_scene_event_InputListener$1_$SwitchMap$arc$scene$event$InputEvent$InputEventType;
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
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_keyCode;
	jint temp0 = (jint)((func_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return temp0;
	}
label_4:;
	{
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_keyCode;
	jint temp0 = (jint)((func_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return temp0;
	}
label_5:;
	{
	LINE_NUMBER(22);
	jint temp0 = (jint)((func_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean])(ctx, (frame[0].o), (frame[2].o), ((jint)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_character));
	popStackFrame(ctx);
	return temp0;
	}
label_6:;
	{
	LINE_NUMBER(25);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[2].o)))->F_listenerActor;
	clinit_arc_scene_event_InputListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_InputListener_tmpCoords;
	sp[0].o = (jobject)((func_arc_scene_event_InputEvent_toCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_InputEvent_toCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(27);
	clinit_arc_scene_event_InputListener$1(ctx);
	sp[0].o = (jobject)SF_arc_scene_event_InputListener$1_$SwitchMap$arc$scene$event$InputEvent$InputEventType;
	sp[1].o = (jobject)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_type;
	jint temp0 = (jint)((func_arc_scene_event_InputEvent$InputEventType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_event_InputEvent$InputEventType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 4: goto label_8;
		case 5: goto label_9;
		case 6: goto label_10;
		case 7: goto label_11;
		case 8: goto label_12;
		case 9: goto label_13;
		case 10: goto label_14;
		default: goto label_15;
	}
	}
label_8:;
	{
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	clinit_arc_scene_event_InputListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_InputListener_tmpCoords;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_scene_event_InputListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_InputListener_tmpCoords;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y;
	jint temp2 = (jint)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_pointer;
	sp[2].o = (jobject)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_keyCode;
	jint temp3 = (jint)((func_arc_scene_event_InputListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_InputListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, sp[2].o);
	popStackFrame(ctx);
	return temp3;
	}
label_9:;
	{
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	clinit_arc_scene_event_InputListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_InputListener_tmpCoords;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_scene_event_InputListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_InputListener_tmpCoords;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y;
	jint temp2 = (jint)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_pointer;
	sp[2].o = (jobject)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_keyCode;
	((func_arc_scene_event_InputListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_InputListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, sp[2].o);
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	clinit_arc_scene_event_InputListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_InputListener_tmpCoords;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_scene_event_InputListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_InputListener_tmpCoords;
	((func_arc_scene_event_InputListener_touchDragged_arc_scene_event_InputEvent_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_InputListener_touchDragged_arc_scene_event_InputEvent_float_float_int])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y), ((jint)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_pointer));
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	clinit_arc_scene_event_InputListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_InputListener_tmpCoords;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_scene_event_InputListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_InputListener_tmpCoords;
	jint temp1 = (jint)((func_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y));
	popStackFrame(ctx);
	return temp1;
	}
label_12:;
	{
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	clinit_arc_scene_event_InputListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_InputListener_tmpCoords;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_scene_event_InputListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_InputListener_tmpCoords;
	jint temp1 = (jint)((func_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y), ((jfloat)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_scrollAmountX), ((jfloat)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_scrollAmountY));
	popStackFrame(ctx);
	return temp1;
	}
label_13:;
	{
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	clinit_arc_scene_event_InputListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_InputListener_tmpCoords;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_scene_event_InputListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_InputListener_tmpCoords;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y;
	jint temp2 = (jint)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_pointer;
	sp[2].o = (jobject)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_relatedActor;
	((func_arc_scene_event_InputListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_InputListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, sp[2].o);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	clinit_arc_scene_event_InputListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_InputListener_tmpCoords;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_scene_event_InputListener(ctx);
	sp[2].o = (jobject)SF_arc_scene_event_InputListener_tmpCoords;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y;
	jint temp2 = (jint)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_pointer;
	sp[2].o = (jobject)((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_relatedActor;
	((func_arc_scene_event_InputListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_InputListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, sp[2].o);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_InputListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/InputListener:touchDown", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_scene_event_InputListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/InputListener:touchUp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	LINE_NUMBER(66);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_event_InputListener_touchDragged_arc_scene_event_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/InputListener:touchDragged", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	LINE_NUMBER(74);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/InputListener:mouseMoved", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_scene_event_InputListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/InputListener:enter", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	LINE_NUMBER(92);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_event_InputListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/InputListener:exit", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	LINE_NUMBER(101);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/InputListener:scrolled", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/InputListener:keyDown", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/InputListener:keyUp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean(jcontext ctx, jobject self, jobject param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/InputListener:keyTyped", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void clinit_arc_scene_event_InputListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/InputListener:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_InputListener(ctx);
	{
	LINE_NUMBER(12);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_scene_event_InputListener(ctx);
	SF_arc_scene_event_InputListener_tmpCoords = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_event_InputListener[] {
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
	(void *) M_arc_scene_event_InputListener_handle_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_event_InputListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_InputListener_touchDragged_arc_scene_event_InputEvent_float_float_int,
	(void *) M_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean,
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
	{ "touchDown", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z" },
	{ "touchUp", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V" },
	{ "touchDragged", "(Larc/scene/event/InputEvent;FFI)V" },
	{ "mouseMoved", "(Larc/scene/event/InputEvent;FF)Z" },
	{ "enter", "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V" },
	{ "exit", "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V" },
	{ "scrolled", "(Larc/scene/event/InputEvent;FFFF)Z" },
	{ "keyDown", "(Larc/scene/event/InputEvent;Larc/input/KeyCode;)Z" },
	{ "keyUp", "(Larc/scene/event/InputEvent;Larc/input/KeyCode;)Z" },
	{ "keyTyped", "(Larc/scene/event/InputEvent;C)Z" },
};

static jclass interfaces[] { &class_arc_scene_event_EventListener, };

static FieldMetadata fields[] {
	{ "tmpCoords", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_scene_event_InputListener_tmpCoords, "Larc/math/geom/Vec2;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_event_InputListener, 0, "()V", 1 },
	{ "handle", (intptr_t) M_arc_scene_event_InputListener_handle_arc_scene_event_SceneEvent_R_boolean, VTABLE_arc_scene_event_InputListener_handle_arc_scene_event_SceneEvent_R_boolean, "(Larc/scene/event/SceneEvent;)Z", 1 },
	{ "touchDown", (intptr_t) M_arc_scene_event_InputListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_arc_scene_event_InputListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z", 1 },
	{ "touchUp", (intptr_t) M_arc_scene_event_InputListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_arc_scene_event_InputListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
	{ "touchDragged", (intptr_t) M_arc_scene_event_InputListener_touchDragged_arc_scene_event_InputEvent_float_float_int, VTABLE_arc_scene_event_InputListener_touchDragged_arc_scene_event_InputEvent_float_float_int, "(Larc/scene/event/InputEvent;FFI)V", 1 },
	{ "mouseMoved", (intptr_t) M_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean, VTABLE_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean, "(Larc/scene/event/InputEvent;FF)Z", 1 },
	{ "enter", (intptr_t) M_arc_scene_event_InputListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, VTABLE_arc_scene_event_InputListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V", 1 },
	{ "exit", (intptr_t) M_arc_scene_event_InputListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, VTABLE_arc_scene_event_InputListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V", 1 },
	{ "scrolled", (intptr_t) M_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean, VTABLE_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean, "(Larc/scene/event/InputEvent;FFFF)Z", 1 },
	{ "keyDown", (intptr_t) M_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean, VTABLE_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;Larc/input/KeyCode;)Z", 1 },
	{ "keyUp", (intptr_t) M_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean, VTABLE_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;Larc/input/KeyCode;)Z", 1 },
	{ "keyTyped", (intptr_t) M_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean, VTABLE_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean, "(Larc/scene/event/InputEvent;C)Z", 1 },
	{ "<clinit>", (intptr_t) clinit_arc_scene_event_InputListener, 0, "()V", 8 },
};

Class class_arc_scene_event_InputListener{
		.nativeName = (intptr_t) "arc/scene/event/InputListener",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_event_InputListener),
		.classVtable = (intptr_t) vtable_arc_scene_event_InputListener,
		.staticInitializer = (intptr_t) clinit_arc_scene_event_InputListener,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_event_InputListener,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_event_InputListener = registerClass(&class_arc_scene_event_InputListener);

}
