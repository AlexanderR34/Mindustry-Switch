#include "arc/scene/ui/ScrollPane_1.h"
#include "java/lang/Math.h"
#include "arc/math/geom/Vec2.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/ScrollPane.h"
#include "arc/scene/event/SceneEvent.h"
#include "arc/math/geom/Rect.h"
#include "arc/scene/event/InputListener.h"
#include "arc/scene/ui/ScrollPane_1.h"
#include "arc/scene/event/InputEvent.h"
#include "arc/input/KeyCode.h"

extern "C" {


void mark_arc_scene_ui_ScrollPane$1(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (arc_scene_ui_ScrollPane$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_scene_ui_ScrollPane$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_InputListener(ctx);
}

void init_arc_scene_ui_ScrollPane$1_arc_scene_ui_ScrollPane(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ScrollPane$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(77);
	((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_InputListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane$1_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane$1:enter", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_ScrollPane_requestScroll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_requestScroll])(ctx, sp[0].o);
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ScrollPane$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane$1:touchDown", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_draggingPointer) == (jint(-1))) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(88);
	if ((frame[4].i) != 0) goto label_2;
	}
	{
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseLeft;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_ScrollPane_requestScroll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_requestScroll])(ctx, sp[0].o);
	LINE_NUMBER(91);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_flickScroll) != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_ScrollPane_resetFade) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_resetFade])(ctx, sp[0].o);
	}
label_4:;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_fadeAlpha), (jfloat(0)), -1)) != 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_scrollX) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_hScrollBounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_contains_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_contains_float_float_R_boolean])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(96);
	((func_arc_scene_event_InputEvent_stop) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_event_InputEvent_stop])(ctx, (frame[1].o));
	LINE_NUMBER(97);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_ScrollPane_resetFade) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_resetFade])(ctx, sp[0].o);
	LINE_NUMBER(98);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_hKnobBounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_contains_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_contains_float_float_R_boolean])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_lastPoint;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_hKnobBounds;
	((arc_scene_ui_ScrollPane$1 *) NULL_CHECK(sp[0].o))->F_handlePosition = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(101);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_touchScrollH = (jint(1));
	LINE_NUMBER(102);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_draggingPointer = (frame[4].i);
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_amountX;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_areaWidth;
	jfloat temp2 = frame[2].f;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_hKnobBounds;
	jobject temp3 = sp[1].o;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp += 3;
	if ((floatCompare(temp2, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(temp3))->F_x), 1)) >= 0) goto label_16;
	}
	INST_ICONST(-1);
	goto label_17;
label_16:;
	INST_ICONST(1);
label_17:;
	{
	sp -= 4;
	((func_arc_scene_ui_ScrollPane_setScrollX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_setScrollX_float])(ctx, sp[0].o, (sp[1].f + (sp[2].f * (jfloat(sp[3].i)))));
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_scrollY) == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_vScrollBounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_contains_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_contains_float_float_R_boolean])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(109);
	((func_arc_scene_event_InputEvent_stop) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_event_InputEvent_stop])(ctx, (frame[1].o));
	LINE_NUMBER(110);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_ScrollPane_resetFade) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_resetFade])(ctx, sp[0].o);
	LINE_NUMBER(111);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_vKnobBounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_contains_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_contains_float_float_R_boolean])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	if (temp0 == 0) goto label_23;
	}
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_lastPoint;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_vKnobBounds;
	((arc_scene_ui_ScrollPane$1 *) NULL_CHECK(sp[0].o))->F_handlePosition = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(114);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_touchScrollV = (jint(1));
	LINE_NUMBER(115);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_draggingPointer = (frame[4].i);
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return (jint(1));
	}
label_23:;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_amountY;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_areaHeight;
	jfloat temp2 = frame[3].f;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_vKnobBounds;
	jobject temp3 = sp[1].o;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp += 3;
	if ((floatCompare(temp2, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(temp3))->F_y), 1)) >= 0) goto label_29;
	}
	INST_ICONST(1);
	goto label_30;
label_29:;
	INST_ICONST(-1);
label_30:;
	{
	sp -= 4;
	((func_arc_scene_ui_ScrollPane_setScrollY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_setScrollY_float])(ctx, sp[0].o, (sp[1].f + (sp[2].f * (jfloat(sp[3].i)))));
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return (jint(1));
	}
label_19:;
	{
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane$1:touchUp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(126);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 == ((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_draggingPointer)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_ScrollPane_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_cancel])(ctx, sp[0].o);
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane$1_touchDragged_arc_scene_event_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane$1:touchDragged", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(132);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 == ((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_draggingPointer)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_touchScrollH) == 0) goto label_2;
	}
	{
	LINE_NUMBER(134);
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_lastPoint;
	frame[5].f = (temp0 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(135);
	frame[6].f = (((jfloat)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_handlePosition) + (frame[5].f));
	LINE_NUMBER(136);
	((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_handlePosition = (frame[6].f);
	LINE_NUMBER(137);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_hScrollBounds;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x), (frame[6].f));
	frame[6].f = temp1;
	LINE_NUMBER(138);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_hScrollBounds;
	jfloat temp2 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_hScrollBounds;
	jfloat temp3 = temp2 + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_hKnobBounds;
	jfloat temp4 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp3 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width)), (frame[6].f));
	frame[6].f = temp4;
	LINE_NUMBER(139);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_hScrollBounds;
	jfloat temp5 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_hKnobBounds;
	frame[7].f = (temp5 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width));
	LINE_NUMBER(140);
	if ((floatCompare((frame[7].f), (jfloat(0)), -1)) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = frame[6].f;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_hScrollBounds;
	((func_arc_scene_ui_ScrollPane_setScrollPercentX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_setScrollPercentX_float])(ctx, sp[0].o, ((temp0 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_x)) / (frame[7].f)));
	}
label_10:;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_lastPoint;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(142);
	goto label_12;
	}
label_2:;
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_touchScrollV) == 0) goto label_12;
	}
	{
	LINE_NUMBER(143);
	jfloat temp0 = frame[3].f;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_lastPoint;
	frame[5].f = (temp0 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(144);
	frame[6].f = (((jfloat)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_handlePosition) + (frame[5].f));
	LINE_NUMBER(145);
	((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_handlePosition = (frame[6].f);
	LINE_NUMBER(146);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_vScrollBounds;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y), (frame[6].f));
	frame[6].f = temp1;
	LINE_NUMBER(147);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_vScrollBounds;
	jfloat temp2 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_vScrollBounds;
	jfloat temp3 = temp2 + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_vKnobBounds;
	jfloat temp4 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp3 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height)), (frame[6].f));
	frame[6].f = temp4;
	LINE_NUMBER(148);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_vScrollBounds;
	jfloat temp5 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_vKnobBounds;
	frame[7].f = (temp5 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height));
	LINE_NUMBER(149);
	if ((floatCompare((frame[7].f), (jfloat(0)), -1)) == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = jfloat(1);
	jfloat temp1 = frame[6].f;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_vScrollBounds;
	((func_arc_scene_ui_ScrollPane_setScrollPercentY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_setScrollPercentY_float])(ctx, sp[0].o, (temp0 - ((temp1 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y)) / (frame[7].f))));
	}
label_20:;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_lastPoint;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	}
label_12:;
	LINE_NUMBER(152);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ScrollPane$1_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane$1:mouseMoved", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_flickScroll) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_ScrollPane_resetFade) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_resetFade])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_ScrollPane_requestScroll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_requestScroll])(ctx, sp[0].o);
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_ScrollPane$1[] {
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
	(void *) M_arc_scene_ui_ScrollPane$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_ui_ScrollPane$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_ui_ScrollPane$1_touchDragged_arc_scene_event_InputEvent_float_float_int,
	(void *) M_arc_scene_ui_ScrollPane$1_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean,
	(void *) M_arc_scene_ui_ScrollPane$1_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
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

static FieldMetadata fields[] {
	{ "handlePosition", &class_float, offsetof(arc_scene_ui_ScrollPane$1, F_handlePosition), "F", 2 },
	{ "this$0", &class_arc_scene_ui_ScrollPane, offsetof(arc_scene_ui_ScrollPane$1, F_this$0), "Larc/scene/ui/ScrollPane;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_ScrollPane$1_arc_scene_ui_ScrollPane, 0, "(Larc/scene/ui/ScrollPane;)V", 0 },
	{ "enter", (intptr_t) M_arc_scene_ui_ScrollPane$1_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, VTABLE_arc_scene_ui_ScrollPane$1_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V", 1 },
	{ "touchDown", (intptr_t) M_arc_scene_ui_ScrollPane$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_arc_scene_ui_ScrollPane$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z", 1 },
	{ "touchUp", (intptr_t) M_arc_scene_ui_ScrollPane$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_arc_scene_ui_ScrollPane$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
	{ "touchDragged", (intptr_t) M_arc_scene_ui_ScrollPane$1_touchDragged_arc_scene_event_InputEvent_float_float_int, VTABLE_arc_scene_ui_ScrollPane$1_touchDragged_arc_scene_event_InputEvent_float_float_int, "(Larc/scene/event/InputEvent;FFI)V", 1 },
	{ "mouseMoved", (intptr_t) M_arc_scene_ui_ScrollPane$1_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean, VTABLE_arc_scene_ui_ScrollPane$1_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean, "(Larc/scene/event/InputEvent;FF)Z", 1 },
};

Class class_arc_scene_ui_ScrollPane$1{
		.nativeName = (intptr_t) "arc/scene/ui/ScrollPane$1",
		.parentClass = (intptr_t) &class_arc_scene_event_InputListener,
		.size = sizeof(arc_scene_ui_ScrollPane$1),
		.classVtable = (intptr_t) vtable_arc_scene_ui_ScrollPane$1,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_ScrollPane$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_ScrollPane$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_scene_ui_ScrollPane$1 = registerClass(&class_arc_scene_ui_ScrollPane$1);

}

