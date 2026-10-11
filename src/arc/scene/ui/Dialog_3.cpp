#include "arc/scene/ui/Dialog_3.h"
#include "java/lang/Math.h"
#include "arc/scene/Scene.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog_3.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/Dialog.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/scene/event/InputListener.h"
#include "arc/scene/event/InputEvent.h"
#include "arc/input/KeyCode.h"

extern "C" {


void mark_arc_scene_ui_Dialog$3(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_ui_Dialog$3 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_scene_ui_Dialog$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_InputListener(ctx);
}

void init_arc_scene_ui_Dialog$3_arc_scene_ui_Dialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog$3:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Dialog$3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(92);
	((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_InputListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog$3_updateEdge_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog$3:updateEdge", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[3].f = ((jfloat(((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_resizeBorder))) / (jfloat(2)));
	LINE_NUMBER(97);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Dialog_getWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_getWidth_R_float])(ctx, sp[0].o);
	frame[4].f = temp0;
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_Dialog_getHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_getHeight_R_float])(ctx, sp[0].o);
	frame[5].f = temp1;
	LINE_NUMBER(98);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)((func_arc_scene_ui_Dialog_getMarginTop_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_getMarginTop_R_float])(ctx, sp[0].o);
	frame[6].f = temp2;
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)((func_arc_scene_ui_Dialog_getMarginRight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_getMarginRight_R_float])(ctx, sp[0].o);
	frame[7].f = temp3;
	LINE_NUMBER(99);
	frame[8].f = ((frame[4].f) - (frame[7].f));
	LINE_NUMBER(100);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_edge = (jint(0));
	LINE_NUMBER(101);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_isResizable) == 0) goto label_8;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_Dialog_getMarginLeft_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_getMarginLeft_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (temp1 - (frame[3].f)), -1)) < 0) goto label_8;
	}
	{
	if ((floatCompare((frame[1].f), ((frame[8].f) + (frame[3].f)), 1)) > 0) goto label_8;
	}
	{
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_Dialog_getMarginBottom_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_getMarginBottom_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (temp1 - (frame[3].f)), -1)) < 0) goto label_8;
	}
	{
	LINE_NUMBER(102);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_Dialog_getMarginLeft_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_getMarginLeft_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (temp1 + (frame[3].f)), 1)) >= 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_edge = (((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_edge) | (8));
	}
label_10:;
	{
	LINE_NUMBER(103);
	if ((floatCompare((frame[1].f), ((frame[8].f) - (frame[3].f)), -1)) <= 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_edge = (((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_edge) | (16));
	}
label_11:;
	{
	LINE_NUMBER(104);
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_Dialog_getMarginBottom_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_getMarginBottom_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (temp1 + (frame[3].f)), 1)) >= 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_edge = (((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_edge) | (jint(4)));
	}
label_12:;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_edge) == 0) goto label_13;
	}
	{
	frame[3].f = ((frame[3].f) + (jfloat(25.0f)));
	}
label_13:;
	{
	LINE_NUMBER(106);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_Dialog_getMarginLeft_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_getMarginLeft_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (temp1 + (frame[3].f)), 1)) >= 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_edge = (((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_edge) | (8));
	}
label_14:;
	{
	LINE_NUMBER(107);
	if ((floatCompare((frame[1].f), ((frame[8].f) - (frame[3].f)), -1)) <= 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_edge = (((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_edge) | (16));
	}
label_15:;
	{
	LINE_NUMBER(108);
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_Dialog_getMarginBottom_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_getMarginBottom_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (temp1 + (frame[3].f)), 1)) >= 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_edge = (((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_edge) | (jint(4)));
	}
label_8:;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_isMovable) == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_edge) != 0) goto label_16;
	}
	{
	if ((floatCompare((frame[2].f), (frame[5].f), 1)) > 0) goto label_16;
	}
	{
	if ((floatCompare((frame[2].f), ((frame[5].f) - (frame[6].f)), -1)) < 0) goto label_16;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_Dialog_getMarginLeft_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_getMarginLeft_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, temp1, -1)) < 0) goto label_16;
	}
	{
	if ((floatCompare((frame[1].f), (frame[8].f), 1)) > 0) goto label_16;
	}
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_edge = (32);
	}
label_16:;
	LINE_NUMBER(112);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Dialog$3_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog$3:touchDown", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(116);
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseLeft;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(117);
	M_arc_scene_ui_Dialog$3_updateEdge_float_float(ctx, (frame[0].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(118);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp += 1;
	if (((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_edge) == 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 2;
	((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_dragging = sp[1].i;
	LINE_NUMBER(119);
	((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_startX = (frame[2].f);
	LINE_NUMBER(120);
	((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_startY = (frame[3].f);
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[2].f;
	sp[1].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_Dialog_getWidth_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_Dialog_getWidth_R_float])(ctx, sp[1].o);
	((arc_scene_ui_Dialog$3 *) NULL_CHECK(sp[0].o))->F_lastX = (temp0 - temp1);
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	jfloat temp2 = frame[3].f;
	sp[1].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)((func_arc_scene_ui_Dialog_getHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_Dialog_getHeight_R_float])(ctx, sp[1].o);
	((arc_scene_ui_Dialog$3 *) NULL_CHECK(sp[0].o))->F_lastY = (temp2 - temp3);
	}
label_1:;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_edge) != 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_isModal) == 0) goto label_11;
	}
label_10:;
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog$3_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog$3:touchUp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_dragging = (jint(0));
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog$3_touchDragged_arc_scene_event_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog$3:touchDragged", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_dragging) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Dialog_getWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_getWidth_R_float])(ctx, sp[0].o);
	frame[5].f = temp0;
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_Dialog_getHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_getHeight_R_float])(ctx, sp[0].o);
	frame[6].f = temp1;
	LINE_NUMBER(136);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[7].f = ((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[8].f = ((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(138);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)((func_arc_scene_ui_Dialog_getMinWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_getMinWidth_R_float])(ctx, sp[0].o);
	frame[9].f = temp2;
	LINE_NUMBER(139);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)((func_arc_scene_ui_Dialog_getMinHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_getMinHeight_R_float])(ctx, sp[0].o);
	frame[10].f = temp3;
	LINE_NUMBER(140);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_getScene_R_arc_scene_Scene])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(141);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_keepWithinStage) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_parent;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[11].o)))->F_root;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 1;
	frame[12].i = sp[0].i;
	LINE_NUMBER(143);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_edge) & (32)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(144);
	frame[13].f = ((frame[2].f) - ((jfloat)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_startX));
	frame[14].f = ((frame[3].f) - ((jfloat)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_startY));
	LINE_NUMBER(145);
	frame[7].f = ((frame[7].f) + (frame[13].f));
	LINE_NUMBER(146);
	frame[8].f = ((frame[8].f) + (frame[14].f));
	}
label_12:;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_edge) & (8)) == 0) goto label_17;
	}
	{
	LINE_NUMBER(149);
	frame[13].f = ((frame[2].f) - ((jfloat)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_startX));
	LINE_NUMBER(150);
	if ((floatCompare(((frame[5].f) - (frame[13].f)), (frame[9].f), 1)) >= 0) goto label_20;
	}
	{
	frame[13].f = (-((frame[9].f) - (frame[5].f)));
	}
label_20:;
	{
	LINE_NUMBER(151);
	if ((frame[12].i) == 0) goto label_21;
	}
	{
	if ((floatCompare(((frame[7].f) + (frame[13].f)), (jfloat(0)), 1)) >= 0) goto label_21;
	}
	{
	frame[13].f = (-(frame[7].f));
	}
label_21:;
	{
	LINE_NUMBER(152);
	frame[5].f = ((frame[5].f) - (frame[13].f));
	LINE_NUMBER(153);
	frame[7].f = ((frame[7].f) + (frame[13].f));
	}
label_17:;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_edge) & (jint(4))) == 0) goto label_23;
	}
	{
	LINE_NUMBER(156);
	frame[13].f = ((frame[3].f) - ((jfloat)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_startY));
	LINE_NUMBER(157);
	if ((floatCompare(((frame[6].f) - (frame[13].f)), (frame[10].f), 1)) >= 0) goto label_26;
	}
	{
	frame[13].f = (-((frame[10].f) - (frame[6].f)));
	}
label_26:;
	{
	LINE_NUMBER(158);
	if ((frame[12].i) == 0) goto label_27;
	}
	{
	if ((floatCompare(((frame[8].f) + (frame[13].f)), (jfloat(0)), 1)) >= 0) goto label_27;
	}
	{
	frame[13].f = (-(frame[8].f));
	}
label_27:;
	{
	LINE_NUMBER(159);
	frame[6].f = ((frame[6].f) - (frame[13].f));
	LINE_NUMBER(160);
	frame[8].f = ((frame[8].f) + (frame[13].f));
	}
label_23:;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_edge) & (16)) == 0) goto label_29;
	}
	{
	LINE_NUMBER(163);
	frame[13].f = (((frame[2].f) - ((jfloat)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_lastX)) - (frame[5].f));
	LINE_NUMBER(164);
	if ((floatCompare(((frame[5].f) + (frame[13].f)), (frame[9].f), 1)) >= 0) goto label_32;
	}
	{
	frame[13].f = ((frame[9].f) - (frame[5].f));
	}
label_32:;
	{
	LINE_NUMBER(165);
	if ((frame[12].i) == 0) goto label_33;
	}
	{
	jfloat temp0 = ((frame[7].f) + (frame[5].f)) + (frame[13].f);
	jfloat temp1 = (jfloat)((func_arc_scene_Scene_getWidth_R_float) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_scene_Scene_getWidth_R_float])(ctx, (frame[11].o));
	if ((floatCompare(temp0, temp1, -1)) <= 0) goto label_33;
	}
	{
	LINE_NUMBER(166);
	jfloat temp0 = (jfloat)((func_arc_scene_Scene_getWidth_R_float) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_scene_Scene_getWidth_R_float])(ctx, (frame[11].o));
	frame[13].f = ((temp0 - (frame[7].f)) - (frame[5].f));
	}
label_33:;
	{
	LINE_NUMBER(167);
	frame[5].f = ((frame[5].f) + (frame[13].f));
	}
label_29:;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_edge) & (jint(2))) == 0) goto label_35;
	}
	{
	LINE_NUMBER(170);
	frame[13].f = (((frame[3].f) - ((jfloat)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_lastY)) - (frame[6].f));
	LINE_NUMBER(171);
	if ((floatCompare(((frame[6].f) + (frame[13].f)), (frame[10].f), 1)) >= 0) goto label_38;
	}
	{
	frame[13].f = ((frame[10].f) - (frame[6].f));
	}
label_38:;
	{
	LINE_NUMBER(172);
	if ((frame[12].i) == 0) goto label_39;
	}
	{
	jfloat temp0 = ((frame[8].f) + (frame[6].f)) + (frame[13].f);
	jfloat temp1 = (jfloat)((func_arc_scene_Scene_getHeight_R_float) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_scene_Scene_getHeight_R_float])(ctx, (frame[11].o));
	if ((floatCompare(temp0, temp1, -1)) <= 0) goto label_39;
	}
	{
	LINE_NUMBER(173);
	jfloat temp0 = (jfloat)((func_arc_scene_Scene_getHeight_R_float) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_scene_Scene_getHeight_R_float])(ctx, (frame[11].o));
	frame[13].f = ((temp0 - (frame[8].f)) - (frame[6].f));
	}
label_39:;
	{
	LINE_NUMBER(174);
	frame[6].f = ((frame[6].f) + (frame[13].f));
	}
label_35:;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[7].f));
	jfloat temp1 = jfloat(temp0);
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[8].f));
	jfloat temp3 = jfloat(temp2);
	jint temp4 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[5].f));
	jfloat temp5 = jfloat(temp4);
	jint temp6 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[6].f));
	((func_arc_scene_ui_Dialog_setBounds_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_setBounds_float_float_float_float])(ctx, sp[0].o, temp1, temp3, temp5, (jfloat(temp6)));
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Dialog$3_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog$3:mouseMoved", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(181);
	M_arc_scene_ui_Dialog$3_updateEdge_float_float(ctx, (frame[0].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(182);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_isModal);
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Dialog$3_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog$3:scrolled", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_isModal);
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Dialog$3_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog$3:keyDown", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_isModal);
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Dialog$3_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog$3:keyUp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_isModal);
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Dialog$3_keyTyped_arc_scene_event_InputEvent_char_R_boolean(jcontext ctx, jobject self, jobject param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog$3:keyTyped", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_isModal);
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_Dialog$3[] {
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
	(void *) M_arc_scene_ui_Dialog$3_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_ui_Dialog$3_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_ui_Dialog$3_touchDragged_arc_scene_event_InputEvent_float_float_int,
	(void *) M_arc_scene_ui_Dialog$3_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_ui_Dialog$3_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean,
	(void *) M_arc_scene_ui_Dialog$3_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_ui_Dialog$3_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_ui_Dialog$3_keyTyped_arc_scene_event_InputEvent_char_R_boolean,
	(void *) M_arc_scene_ui_Dialog$3_updateEdge_float_float,
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
	{ "updateEdge", "(FF)V" },
};

static FieldMetadata fields[] {
	{ "startX", &class_float, offsetof(arc_scene_ui_Dialog$3, F_startX), "F", 0 },
	{ "startY", &class_float, offsetof(arc_scene_ui_Dialog$3, F_startY), "F", 0 },
	{ "lastX", &class_float, offsetof(arc_scene_ui_Dialog$3, F_lastX), "F", 0 },
	{ "lastY", &class_float, offsetof(arc_scene_ui_Dialog$3, F_lastY), "F", 0 },
	{ "this$0", &class_arc_scene_ui_Dialog, offsetof(arc_scene_ui_Dialog$3, F_this$0), "Larc/scene/ui/Dialog;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_Dialog$3_arc_scene_ui_Dialog, 0, "(Larc/scene/ui/Dialog;)V", 0 },
	{ "updateEdge", (intptr_t) M_arc_scene_ui_Dialog$3_updateEdge_float_float, VTABLE_arc_scene_ui_Dialog$3_updateEdge_float_float, "(FF)V", 2 },
	{ "touchDown", (intptr_t) M_arc_scene_ui_Dialog$3_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_arc_scene_ui_Dialog$3_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z", 1 },
	{ "touchUp", (intptr_t) M_arc_scene_ui_Dialog$3_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_arc_scene_ui_Dialog$3_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
	{ "touchDragged", (intptr_t) M_arc_scene_ui_Dialog$3_touchDragged_arc_scene_event_InputEvent_float_float_int, VTABLE_arc_scene_ui_Dialog$3_touchDragged_arc_scene_event_InputEvent_float_float_int, "(Larc/scene/event/InputEvent;FFI)V", 1 },
	{ "mouseMoved", (intptr_t) M_arc_scene_ui_Dialog$3_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean, VTABLE_arc_scene_ui_Dialog$3_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean, "(Larc/scene/event/InputEvent;FF)Z", 1 },
	{ "scrolled", (intptr_t) M_arc_scene_ui_Dialog$3_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean, VTABLE_arc_scene_ui_Dialog$3_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean, "(Larc/scene/event/InputEvent;FFFF)Z", 1 },
	{ "keyDown", (intptr_t) M_arc_scene_ui_Dialog$3_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean, VTABLE_arc_scene_ui_Dialog$3_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;Larc/input/KeyCode;)Z", 1 },
	{ "keyUp", (intptr_t) M_arc_scene_ui_Dialog$3_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean, VTABLE_arc_scene_ui_Dialog$3_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;Larc/input/KeyCode;)Z", 1 },
	{ "keyTyped", (intptr_t) M_arc_scene_ui_Dialog$3_keyTyped_arc_scene_event_InputEvent_char_R_boolean, VTABLE_arc_scene_ui_Dialog$3_keyTyped_arc_scene_event_InputEvent_char_R_boolean, "(Larc/scene/event/InputEvent;C)Z", 1 },
};

Class class_arc_scene_ui_Dialog$3{
		.nativeName = (intptr_t) "arc/scene/ui/Dialog$3",
		.parentClass = (intptr_t) &class_arc_scene_event_InputListener,
		.size = sizeof(arc_scene_ui_Dialog$3),
		.classVtable = (intptr_t) vtable_arc_scene_ui_Dialog$3,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_Dialog$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_Dialog$3,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_scene_ui_Dialog$3 = registerClass(&class_arc_scene_ui_Dialog$3);

}

