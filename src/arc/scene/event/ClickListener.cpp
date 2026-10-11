#include "arc/scene/event/ClickListener.h"
#include "java/lang/Math.h"
#include "arc/math/geom/Vec2.h"
#include "arc/Core.h"
#include "arc/Input.h"
#include "arc/util/Time.h"
#include "arc/scene/event/ClickListener.h"
#include "arc/input/KeyCode.h"
#include "java/lang/Runnable.h"
#include "arc/scene/Scene.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/util/Tmp.h"
#include "arc/scene/event/ClickListener_invoke_java_lang_Runnable_0.h"
#include "arc/scene/event/InputListener.h"
#include "arc/scene/event/InputEvent.h"

extern "C" {

jfloat SF_arc_scene_event_ClickListener_visualPressedDuration;
jobject SF_arc_scene_event_ClickListener_clicked;

void mark_arc_scene_event_ClickListener(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_scene_event_ClickListener_clicked)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_event_ClickListener_clicked)->clazz)->markFunction)((jobject) SF_arc_scene_event_ClickListener_clicked, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_event_InputListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_event_ClickListener *) object;
	if (self->F_pressedButton)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pressedButton)->clazz)->markFunction)((jobject) self->F_pressedButton, mark, depth + 1);
	if (self->F_button)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_button)->clazz)->markFunction)((jobject) self->F_button, mark, depth + 1);
}

void init_arc_scene_event_ClickListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_ClickListener(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(33);
	init_arc_scene_event_InputListener(ctx, (frame[0].o));
	LINE_NUMBER(21);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapSquareSize = (jfloat(14.0f));
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownX = (jfloat(-1.0f));
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownY = (jfloat(-1.0f));
	LINE_NUMBER(22);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedPointer = (jint(-1));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseLeft;
	((arc_scene_event_ClickListener *) NULL_CHECK(sp[0].o))->F_button = (jref) sp[1].o;
	LINE_NUMBER(27);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapCountInterval = (jlong(400000000ll));
	LINE_NUMBER(30);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_stop = (jint(0));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_event_ClickListener_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_ClickListener(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	init_arc_scene_event_InputListener(ctx, (frame[0].o));
	LINE_NUMBER(21);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapSquareSize = (jfloat(14.0f));
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownX = (jfloat(-1.0f));
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownY = (jfloat(-1.0f));
	LINE_NUMBER(22);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedPointer = (jint(-1));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseLeft;
	((arc_scene_event_ClickListener *) NULL_CHECK(sp[0].o))->F_button = (jref) sp[1].o;
	LINE_NUMBER(27);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapCountInterval = (jlong(400000000ll));
	LINE_NUMBER(30);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_stop = (jint(0));
	LINE_NUMBER(36);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_button = (jref) (frame[1].o);
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_ClickListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:touchDown", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(41);
	if (((jint)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressed) == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(42);
	if ((frame[4].i) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_button;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_button;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(43);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressed = (jint(1));
	LINE_NUMBER(44);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedPointer = (frame[4].i);
	LINE_NUMBER(45);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedButton = (jref) (frame[5].o);
	LINE_NUMBER(46);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownX = (frame[2].f);
	LINE_NUMBER(47);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownY = (frame[3].f);
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((arc_scene_event_ClickListener *) NULL_CHECK(sp[0].o))->F_visualPressedTime = (temp0 + (jlong(((clinit_arc_scene_event_ClickListener(ctx), (jfloat)SF_arc_scene_event_ClickListener_visualPressedDuration) * (jfloat(1000.0f))))));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_arc_scene_event_ClickListener_touchDragged_arc_scene_event_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:touchDragged", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(54);
	if ((frame[4].i) != ((jint)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedPointer)) goto label_1;
	}
	{
	if (((jint)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_cancelled) == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_listenerActor;
	jint temp0 = (jint)((func_arc_scene_event_ClickListener_isOver_arc_scene_Element_float_float_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_event_ClickListener_isOver_arc_scene_Element_float_float_R_boolean])(ctx, sp[1].o, sp[2].o, (frame[2].f), (frame[3].f));
	((arc_scene_event_ClickListener *) NULL_CHECK(sp[0].o))->F_pressed = temp0;
	LINE_NUMBER(56);
	if (((jint)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressed) == 0) goto label_4;
	}
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_4;
	{
	sp[0].o = (jobject)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_button;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_button;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_4;
	}
	{
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressed = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(57);
	if (((jint)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressed) != 0) goto label_5;
	}
	{
	LINE_NUMBER(59);
	((func_arc_scene_event_ClickListener_invalidateTapSquare) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_event_ClickListener_invalidateTapSquare])(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(61);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_event_ClickListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:touchUp", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(65);
	if ((frame[4].i) != ((jint)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedPointer)) goto label_1;
	}
	{
	LINE_NUMBER(66);
	if (((jint)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_cancelled) != 0) goto label_3;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_listenerActor;
	jint temp0 = (jint)((func_arc_scene_event_ClickListener_isOver_arc_scene_Element_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_ClickListener_isOver_arc_scene_Element_float_float_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[2].f), (frame[3].f));
	frame[6].i = temp0;
	LINE_NUMBER(69);
	if ((frame[6].i) == 0) goto label_6;
	}
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_6;
	{
	sp[0].o = (jobject)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_button;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_button;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	INST_ICONST(0);
	INST_ISTORE(6);
label_6:;
	{
	LINE_NUMBER(70);
	if ((frame[6].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(71);
	jlong temp0 = (jlong)SM_arc_util_Time_nanos_R_long(ctx);
	frame[7].l = temp0;
	LINE_NUMBER(72);
	if ((longCompare(((frame[7].l) - ((jlong)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_lastTapTime)), ((jlong)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapCountInterval))) <= 0) goto label_9;
	}
	{
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapCount = (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	((arc_scene_event_ClickListener *) NULL_CHECK(sp[0].o))->F_tapCount = (((jint)((arc_scene_event_ClickListener *) NULL_CHECK(sp[0].o))->F_tapCount) + (jint(1)));
	LINE_NUMBER(74);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_lastTapTime = (frame[7].l);
	LINE_NUMBER(76);
	clinit_arc_scene_event_ClickListener(ctx);
	sp[0].o = (jobject)SF_arc_scene_event_ClickListener_clicked;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(77);
	((func_arc_scene_event_ClickListener_clicked_arc_scene_event_InputEvent_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_event_ClickListener_clicked_arc_scene_event_InputEvent_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f));
	}
label_3:;
	{
	LINE_NUMBER(80);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressed = (jint(0));
	LINE_NUMBER(81);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedPointer = (jint(-1));
	LINE_NUMBER(82);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedButton = (jref) (jobject(nullptr));
	LINE_NUMBER(83);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_cancelled = (jint(0));
	}
label_1:;
	LINE_NUMBER(85);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_event_ClickListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:enter", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(89);
	if ((frame[4].i) != (jint(-1))) goto label_1;
	}
	{
	if (((jint)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_cancelled) != 0) goto label_1;
	}
	{
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_over = (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(90);
	if (((jint)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_cancelled) != 0) goto label_2;
	}
	{
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_overAny = (jint(1));
	}
label_2:;
	LINE_NUMBER(91);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_event_ClickListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:exit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(95);
	if ((frame[4].i) != (jint(-1))) goto label_1;
	}
	{
	if (((jint)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_cancelled) != 0) goto label_1;
	}
	{
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_over = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(96);
	if (((jint)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_cancelled) != 0) goto label_2;
	}
	{
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_overAny = (jint(0));
	}
label_2:;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_event_ClickListener_cancel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:cancel", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	if (((jint)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedPointer) != (jint(-1))) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(102);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_cancelled = (jint(1));
	LINE_NUMBER(103);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressed = (jint(0));
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_event_ClickListener_clicked_arc_scene_event_InputEvent_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:clicked", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	LINE_NUMBER(107);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_event_ClickListener_isOver_arc_scene_Element_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:isOver", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(111);
	sp[0].o = frame[1].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[2].f), (frame[3].f));
	sp[0].o = (jobject)((func_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(112);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y), (jint(1)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(113);
	if ((frame[4].o) == nullptr) goto label_3;
	}
	{
	jint temp0 = (jint)((func_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean])(ctx, (frame[4].o), (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_event_ClickListener_inTapSquare_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:inTapSquare", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(117);
	if ((floatCompare(((jfloat)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownX), (jfloat(-1.0f)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownY), (jfloat(-1.0f)), -1)) == 0) goto label_2;
	}
label_1:;
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[1].f) - ((jfloat)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownX)));
	if ((floatCompare(temp0, ((jfloat)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapSquareSize), 1)) >= 0) goto label_2;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[2].f) - ((jfloat)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownY)));
	if ((floatCompare(temp0, ((jfloat)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapSquareSize), 1)) >= 0) goto label_2;
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

jbool M_arc_scene_event_ClickListener_inTapSquare_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:inTapSquare", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	if ((floatCompare(((jfloat)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownX), (jfloat(-1.0f)), -1)) == 0) goto label_1;
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

void M_arc_scene_event_ClickListener_invalidateTapSquare(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:invalidateTapSquare", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(127);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownX = (jfloat(-1.0f));
	LINE_NUMBER(128);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownY = (jfloat(-1.0f));
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_ClickListener_isPressed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:isPressed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return ((jint)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressed);
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_ClickListener_isVisualPressed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:isVisualPressed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(141);
	if (((jint)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressed) == 0) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(142);
	if ((longCompare(((jlong)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_visualPressedTime), (jlong(0)))) > 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(143);
	jlong temp0 = (jlong)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_visualPressedTime;
	jlong temp1 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	if ((longCompare(temp0, temp1)) <= 0) goto label_3;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(144);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_visualPressedTime = (jlong(0));
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_ClickListener_isOver_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:isOver", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(150);
	if (((jint)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_over) != 0) goto label_1;
	}
	{
	if (((jint)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressed) == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_event_ClickListener_getTapSquareSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:getTapSquareSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapSquareSize);
	}

	popStackFrame(ctx);
}

void M_arc_scene_event_ClickListener_setTapSquareSize_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:setTapSquareSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(158);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapSquareSize = (frame[1].f);
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_event_ClickListener_setTapCountInterval_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:setTapCountInterval", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(163);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapCountInterval = (jlong(((frame[1].f) * (jfloat(1,000000e+09f)))));
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_scene_event_ClickListener_getTapCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:getTapCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return ((jint)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapCount);
	}

	popStackFrame(ctx);
}

void M_arc_scene_event_ClickListener_setTapCount_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:setTapCount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(172);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapCount = (frame[1].i);
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_event_ClickListener_getTouchDownX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:getTouchDownX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownX);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_event_ClickListener_getTouchDownY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:getTouchDownY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownY);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_event_ClickListener_getPressedButton_R_arc_input_KeyCode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:getPressedButton", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedButton;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_arc_scene_event_ClickListener_getPressedPointer_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:getPressedPointer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return ((jint)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedPointer);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_event_ClickListener_getButton_R_arc_input_KeyCode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:getButton", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_button;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_event_ClickListener_setButton_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:setButton", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(199);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_button = (jref) (frame[1].o);
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_scene_event_ClickListener_lambda$static$0(jcontext ctx) {
	FrameInfo frameInfo { "arc/scene/event/ClickListener:lambda$static$0", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_arc_scene_event_ClickListener(ctx);
	LINE_NUMBER(19);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_arc_scene_event_ClickListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_InputListener(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ClickListener:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_ClickListener(ctx);
	{
	LINE_NUMBER(18);
	clinit_arc_scene_event_ClickListener(ctx);
	SF_arc_scene_event_ClickListener_visualPressedDuration = (jfloat(0.1f));
	LINE_NUMBER(19);
	{ /* InvokeDynamic */
		clinit_arc_scene_event_ClickListener_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (arc_scene_event_ClickListener_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_arc_scene_event_ClickListener_invoke_java_lang_Runnable_0);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_scene_event_ClickListener(ctx);
	SF_arc_scene_event_ClickListener_clicked = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_event_ClickListener[] {
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
	(void *) M_arc_scene_event_ClickListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_ClickListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_ClickListener_touchDragged_arc_scene_event_InputEvent_float_float_int,
	(void *) M_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean,
	(void *) M_arc_scene_event_ClickListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_ClickListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean,
	(void *) M_arc_scene_event_ClickListener_cancel,
	(void *) M_arc_scene_event_ClickListener_clicked_arc_scene_event_InputEvent_float_float,
	(void *) M_arc_scene_event_ClickListener_isOver_arc_scene_Element_float_float_R_boolean,
	(void *) M_arc_scene_event_ClickListener_inTapSquare_float_float_R_boolean,
	(void *) M_arc_scene_event_ClickListener_inTapSquare_R_boolean,
	(void *) M_arc_scene_event_ClickListener_invalidateTapSquare,
	(void *) M_arc_scene_event_ClickListener_isPressed_R_boolean,
	(void *) M_arc_scene_event_ClickListener_isVisualPressed_R_boolean,
	(void *) M_arc_scene_event_ClickListener_isOver_R_boolean,
	(void *) M_arc_scene_event_ClickListener_getTapSquareSize_R_float,
	(void *) M_arc_scene_event_ClickListener_setTapSquareSize_float,
	(void *) M_arc_scene_event_ClickListener_setTapCountInterval_float,
	(void *) M_arc_scene_event_ClickListener_getTapCount_R_int,
	(void *) M_arc_scene_event_ClickListener_setTapCount_int,
	(void *) M_arc_scene_event_ClickListener_getTouchDownX_R_float,
	(void *) M_arc_scene_event_ClickListener_getTouchDownY_R_float,
	(void *) M_arc_scene_event_ClickListener_getPressedButton_R_arc_input_KeyCode,
	(void *) M_arc_scene_event_ClickListener_getPressedPointer_R_int,
	(void *) M_arc_scene_event_ClickListener_getButton_R_arc_input_KeyCode,
	(void *) M_arc_scene_event_ClickListener_setButton_arc_input_KeyCode,
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
	{ "cancel", "()V" },
	{ "clicked", "(Larc/scene/event/InputEvent;FF)V" },
	{ "isOver", "(Larc/scene/Element;FF)Z" },
	{ "inTapSquare", "(FF)Z" },
	{ "inTapSquare", "()Z" },
	{ "invalidateTapSquare", "()V" },
	{ "isPressed", "()Z" },
	{ "isVisualPressed", "()Z" },
	{ "isOver", "()Z" },
	{ "getTapSquareSize", "()F" },
	{ "setTapSquareSize", "(F)V" },
	{ "setTapCountInterval", "(F)V" },
	{ "getTapCount", "()I" },
	{ "setTapCount", "(I)V" },
	{ "getTouchDownX", "()F" },
	{ "getTouchDownY", "()F" },
	{ "getPressedButton", "()Larc/input/KeyCode;" },
	{ "getPressedPointer", "()I" },
	{ "getButton", "()Larc/input/KeyCode;" },
	{ "setButton", "(Larc/input/KeyCode;)V" },
};

static FieldMetadata fields[] {
	{ "visualPressedDuration", &class_float, (intptr_t) &SF_arc_scene_event_ClickListener_visualPressedDuration, "F", 9 },
	{ "clicked", &class_java_lang_Runnable, (intptr_t) &SF_arc_scene_event_ClickListener_clicked, "Ljava/lang/Runnable;", 9 },
	{ "tapSquareSize", &class_float, offsetof(arc_scene_event_ClickListener, F_tapSquareSize), "F", 4 },
	{ "touchDownX", &class_float, offsetof(arc_scene_event_ClickListener, F_touchDownX), "F", 4 },
	{ "touchDownY", &class_float, offsetof(arc_scene_event_ClickListener, F_touchDownY), "F", 4 },
	{ "pressedPointer", &class_int, offsetof(arc_scene_event_ClickListener, F_pressedPointer), "I", 4 },
	{ "pressedButton", &class_arc_input_KeyCode, offsetof(arc_scene_event_ClickListener, F_pressedButton), "Larc/input/KeyCode;", 4 },
	{ "button", &class_arc_input_KeyCode, offsetof(arc_scene_event_ClickListener, F_button), "Larc/input/KeyCode;", 4 },
	{ "pressed", &class_boolean, offsetof(arc_scene_event_ClickListener, F_pressed), "Z", 4 },
	{ "over", &class_boolean, offsetof(arc_scene_event_ClickListener, F_over), "Z", 4 },
	{ "overAny", &class_boolean, offsetof(arc_scene_event_ClickListener, F_overAny), "Z", 4 },
	{ "cancelled", &class_boolean, offsetof(arc_scene_event_ClickListener, F_cancelled), "Z", 4 },
	{ "visualPressedTime", &class_long, offsetof(arc_scene_event_ClickListener, F_visualPressedTime), "J", 4 },
	{ "tapCountInterval", &class_long, offsetof(arc_scene_event_ClickListener, F_tapCountInterval), "J", 4 },
	{ "tapCount", &class_int, offsetof(arc_scene_event_ClickListener, F_tapCount), "I", 4 },
	{ "lastTapTime", &class_long, offsetof(arc_scene_event_ClickListener, F_lastTapTime), "J", 4 },
	{ "stop", &class_boolean, offsetof(arc_scene_event_ClickListener, F_stop), "Z", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_event_ClickListener, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_event_ClickListener_arc_input_KeyCode, 0, "(Larc/input/KeyCode;)V", 1 },
	{ "touchDown", (intptr_t) M_arc_scene_event_ClickListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_arc_scene_event_ClickListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z", 1 },
	{ "touchDragged", (intptr_t) M_arc_scene_event_ClickListener_touchDragged_arc_scene_event_InputEvent_float_float_int, VTABLE_arc_scene_event_ClickListener_touchDragged_arc_scene_event_InputEvent_float_float_int, "(Larc/scene/event/InputEvent;FFI)V", 1 },
	{ "touchUp", (intptr_t) M_arc_scene_event_ClickListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_arc_scene_event_ClickListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
	{ "enter", (intptr_t) M_arc_scene_event_ClickListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, VTABLE_arc_scene_event_ClickListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V", 1 },
	{ "exit", (intptr_t) M_arc_scene_event_ClickListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, VTABLE_arc_scene_event_ClickListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V", 1 },
	{ "cancel", (intptr_t) M_arc_scene_event_ClickListener_cancel, VTABLE_arc_scene_event_ClickListener_cancel, "()V", 1 },
	{ "clicked", (intptr_t) M_arc_scene_event_ClickListener_clicked_arc_scene_event_InputEvent_float_float, VTABLE_arc_scene_event_ClickListener_clicked_arc_scene_event_InputEvent_float_float, "(Larc/scene/event/InputEvent;FF)V", 1 },
	{ "isOver", (intptr_t) M_arc_scene_event_ClickListener_isOver_arc_scene_Element_float_float_R_boolean, VTABLE_arc_scene_event_ClickListener_isOver_arc_scene_Element_float_float_R_boolean, "(Larc/scene/Element;FF)Z", 1 },
	{ "inTapSquare", (intptr_t) M_arc_scene_event_ClickListener_inTapSquare_float_float_R_boolean, VTABLE_arc_scene_event_ClickListener_inTapSquare_float_float_R_boolean, "(FF)Z", 1 },
	{ "inTapSquare", (intptr_t) M_arc_scene_event_ClickListener_inTapSquare_R_boolean, VTABLE_arc_scene_event_ClickListener_inTapSquare_R_boolean, "()Z", 1 },
	{ "invalidateTapSquare", (intptr_t) M_arc_scene_event_ClickListener_invalidateTapSquare, VTABLE_arc_scene_event_ClickListener_invalidateTapSquare, "()V", 1 },
	{ "isPressed", (intptr_t) M_arc_scene_event_ClickListener_isPressed_R_boolean, VTABLE_arc_scene_event_ClickListener_isPressed_R_boolean, "()Z", 1 },
	{ "isVisualPressed", (intptr_t) M_arc_scene_event_ClickListener_isVisualPressed_R_boolean, VTABLE_arc_scene_event_ClickListener_isVisualPressed_R_boolean, "()Z", 1 },
	{ "isOver", (intptr_t) M_arc_scene_event_ClickListener_isOver_R_boolean, VTABLE_arc_scene_event_ClickListener_isOver_R_boolean, "()Z", 1 },
	{ "getTapSquareSize", (intptr_t) M_arc_scene_event_ClickListener_getTapSquareSize_R_float, VTABLE_arc_scene_event_ClickListener_getTapSquareSize_R_float, "()F", 1 },
	{ "setTapSquareSize", (intptr_t) M_arc_scene_event_ClickListener_setTapSquareSize_float, VTABLE_arc_scene_event_ClickListener_setTapSquareSize_float, "(F)V", 1 },
	{ "setTapCountInterval", (intptr_t) M_arc_scene_event_ClickListener_setTapCountInterval_float, VTABLE_arc_scene_event_ClickListener_setTapCountInterval_float, "(F)V", 1 },
	{ "getTapCount", (intptr_t) M_arc_scene_event_ClickListener_getTapCount_R_int, VTABLE_arc_scene_event_ClickListener_getTapCount_R_int, "()I", 1 },
	{ "setTapCount", (intptr_t) M_arc_scene_event_ClickListener_setTapCount_int, VTABLE_arc_scene_event_ClickListener_setTapCount_int, "(I)V", 1 },
	{ "getTouchDownX", (intptr_t) M_arc_scene_event_ClickListener_getTouchDownX_R_float, VTABLE_arc_scene_event_ClickListener_getTouchDownX_R_float, "()F", 1 },
	{ "getTouchDownY", (intptr_t) M_arc_scene_event_ClickListener_getTouchDownY_R_float, VTABLE_arc_scene_event_ClickListener_getTouchDownY_R_float, "()F", 1 },
	{ "getPressedButton", (intptr_t) M_arc_scene_event_ClickListener_getPressedButton_R_arc_input_KeyCode, VTABLE_arc_scene_event_ClickListener_getPressedButton_R_arc_input_KeyCode, "()Larc/input/KeyCode;", 1 },
	{ "getPressedPointer", (intptr_t) M_arc_scene_event_ClickListener_getPressedPointer_R_int, VTABLE_arc_scene_event_ClickListener_getPressedPointer_R_int, "()I", 1 },
	{ "getButton", (intptr_t) M_arc_scene_event_ClickListener_getButton_R_arc_input_KeyCode, VTABLE_arc_scene_event_ClickListener_getButton_R_arc_input_KeyCode, "()Larc/input/KeyCode;", 1 },
	{ "setButton", (intptr_t) M_arc_scene_event_ClickListener_setButton_arc_input_KeyCode, VTABLE_arc_scene_event_ClickListener_setButton_arc_input_KeyCode, "(Larc/input/KeyCode;)V", 1 },
	{ "lambda$static$0", (intptr_t) SM_arc_scene_event_ClickListener_lambda$static$0, 0, "()V", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_scene_event_ClickListener, 0, "()V", 8 },
};

Class class_arc_scene_event_ClickListener{
		.nativeName = (intptr_t) "arc/scene/event/ClickListener",
		.parentClass = (intptr_t) &class_arc_scene_event_InputListener,
		.size = sizeof(arc_scene_event_ClickListener),
		.classVtable = (intptr_t) vtable_arc_scene_event_ClickListener,
		.staticInitializer = (intptr_t) clinit_arc_scene_event_ClickListener,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_event_ClickListener,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 29,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 42,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_event_ClickListener = registerClass(&class_arc_scene_event_ClickListener);

}
