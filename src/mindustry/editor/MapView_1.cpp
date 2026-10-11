#include "mindustry/editor/MapView_1.h"
#include "java/lang/Math.h"
#include "arc/func/Intc2.h"
#include "mindustry/editor/MapView.h"
#include "mindustry/editor/EditorTool.h"
#include "mindustry/editor/MapEditorDialog.h"
#include "mindustry/editor/MapView_1_invoke_arc_func_Intc2_1.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/editor/MapView_1.h"
#include "mindustry/core/UI.h"
#include "arc/input/KeyCode.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/event/InputListener.h"
#include "mindustry/Vars.h"
#include "arc/scene/event/InputEvent.h"
#include "mindustry/editor/MapEditor.h"
#include "arc/math/geom/Bresenham2.h"

extern "C" {


void mark_mindustry_editor_MapView$1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_MapView$1 *) object;
	if (self->F_val$firstTouch)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$firstTouch)->clazz)->markFunction)((jobject) self->F_val$firstTouch, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_editor_MapView$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_InputListener(ctx);
}

void init_mindustry_editor_MapView$1_mindustry_editor_MapView_arc_math_geom_Point2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView$1:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapView$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(49);
	((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_val$firstTouch = (jref) (frame[2].o);
	((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_InputListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapView$1_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView$1:mouseMoved", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_mousex = (frame[2].f);
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_mousey = (frame[3].f);
	LINE_NUMBER(55);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_editor_MapView_requestScroll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapView_requestScroll])(ctx, sp[0].o);
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapView$1_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView$1:enter", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_editor_MapView_requestScroll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapView_requestScroll])(ctx, sp[0].o);
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapView$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView$1:touchDown", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(67);
	if ((frame[4].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(71);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_3;
	}
	{
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseLeft;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseMiddle;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseRight;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(75);
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseRight;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK(sp[1].o))->F_tool;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_lastTool = (jref) sp[1].o;
	LINE_NUMBER(77);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_eraser;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_tool = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(80);
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseMiddle;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK(sp[1].o))->F_tool;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_lastTool = (jref) sp[1].o;
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_zoom;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_tool = (jref) sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_mousex = (frame[2].f);
	LINE_NUMBER(86);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_mousey = (frame[3].f);
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_editor_MapView_project_float_float_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapView_project_float_float_R_arc_math_geom_Point2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	frame[6].o = sp[0].o;
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_lastx = ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_x);
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_lasty = ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_y);
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_startx = ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_x);
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_starty = ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_y);
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_tool;
	((func_mindustry_editor_EditorTool_touched_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorTool_touched_int_int])(ctx, sp[0].o, ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_x), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_y));
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_val$firstTouch;
	sp[0].o = (jobject)((func_arc_math_geom_Point2_set_arc_math_geom_Point2_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Point2_set_arc_math_geom_Point2_R_arc_math_geom_Point2])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_tool;
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK(sp[0].o))->F_edit) == 0) goto label_20;
	}
	{
	LINE_NUMBER(97);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_editor;
	((func_mindustry_editor_MapEditorDialog_resetSaved) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_resetSaved])(ctx, sp[0].o);
	}
label_20:;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_drawing = (jint(1));
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapView$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView$1:touchUp", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(106);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_1;
	}
	{
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseLeft;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseMiddle;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseRight;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	LINE_NUMBER(107);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_drawing = (jint(0));
	LINE_NUMBER(112);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_editor_MapView_project_float_float_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapView_project_float_float_R_arc_math_geom_Point2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	frame[6].o = sp[0].o;
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_tool;
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_line;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(115);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_editor;
	((func_mindustry_editor_MapEditorDialog_resetSaved) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_resetSaved])(ctx, sp[0].o);
	LINE_NUMBER(116);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_tool;
	sp[1].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((mindustry_editor_MapView *) NULL_CHECK(sp[1].o))->F_startx;
	sp[1].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_editor_EditorTool_touchedLine_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorTool_touchedLine_int_int_int_int])(ctx, sp[0].o, temp0, ((jint)((mindustry_editor_MapView *) NULL_CHECK(sp[1].o))->F_starty), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_x), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_y));
	}
label_5:;
	{
	LINE_NUMBER(119);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	((func_mindustry_editor_MapEditor_flushOp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_flushOp])(ctx, sp[0].o);
	LINE_NUMBER(121);
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseMiddle;
	if (sp[0].o == sp[1].o) goto label_9;
	}
	{
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseRight;
	if (sp[0].o != sp[1].o) goto label_10;
	}
label_9:;
	{
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_lastTool;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK(sp[1].o))->F_lastTool;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_tool = (jref) sp[1].o;
	LINE_NUMBER(123);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_lastTool = (jref) (jobject(nullptr));
	}
label_10:;
	LINE_NUMBER(126);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapView$1_touchDragged_arc_scene_event_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView$1:touchDragged", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_mousex = (frame[2].f);
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_mousey = (frame[3].f);
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_editor_MapView_project_float_float_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapView_project_float_float_R_arc_math_geom_Point2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	frame[5].o = sp[0].o;
	LINE_NUMBER(135);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_drawing) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_tool;
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK(sp[0].o))->F_draggable) == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_x;
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 != ((jint)((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_lastx)) goto label_5;
	}
	{
	jint temp0 = (jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_y;
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 == ((jint)((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_lasty)) goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(136);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_editor;
	((func_mindustry_editor_MapEditorDialog_resetSaved) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_resetSaved])(ctx, sp[0].o);
	LINE_NUMBER(137);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_lastx;
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_lasty;
	jint temp2 = (jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_x;
	jint temp3 = (jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_y;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapView$1_invoke_arc_func_Intc2_1(ctx);
		auto proxy = (mindustry_editor_MapView$1_invoke_arc_func_Intc2_1 *) gcAlloc(ctx, &class_mindustry_editor_MapView$1_invoke_arc_func_Intc2_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_math_geom_Bresenham2_line_int_int_int_int_arc_func_Intc2(ctx, temp0, temp1, temp2, temp3, sp[0].o);
	}
label_4:;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_tool;
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_line;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_tool;
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK(sp[0].o))->F_mode) != (jint(1))) goto label_7;
	}
	{
	LINE_NUMBER(141);
	jint temp0 = (jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_x;
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_val$firstTouch;
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (temp0 - ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x)));
	jint temp2 = (jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_y;
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_val$firstTouch;
	jint temp3 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (temp2 - ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y)));
	if (temp1 <= temp3) goto label_9;
	}
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_lastx = ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_x);
	LINE_NUMBER(143);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_val$firstTouch;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_lasty = ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_y);
	goto label_12;
	}
label_9:;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_val$firstTouch;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_lastx = ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(146);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_lasty = ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_y);
	goto label_12;
	}
label_7:;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_lastx = ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_x);
	LINE_NUMBER(150);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_lasty = ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_y);
	}
label_12:;
	LINE_NUMBER(152);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapView$1_lambda$touchDragged$0_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView$1:lambda$touchDragged$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((mindustry_editor_MapView$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_tool;
	((func_mindustry_editor_EditorTool_touched_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorTool_touched_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_MapView$1[] {
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
	(void *) M_mindustry_editor_MapView$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_mindustry_editor_MapView$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_mindustry_editor_MapView$1_touchDragged_arc_scene_event_InputEvent_float_float_int,
	(void *) M_mindustry_editor_MapView$1_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean,
	(void *) M_mindustry_editor_MapView$1_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean,
	(void *) M_mindustry_editor_MapView$1_lambda$touchDragged$0_int_int,
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
	{ "lambda$touchDragged$0", "(II)V" },
};

static FieldMetadata fields[] {
	{ "val$firstTouch", &class_arc_math_geom_Point2, offsetof(mindustry_editor_MapView$1, F_val$firstTouch), "Larc/math/geom/Point2;", 4112 },
	{ "this$0", &class_mindustry_editor_MapView, offsetof(mindustry_editor_MapView$1, F_this$0), "Lmindustry/editor/MapView;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_MapView$1_mindustry_editor_MapView_arc_math_geom_Point2, 0, "(Lmindustry/editor/MapView;Larc/math/geom/Point2;)V", 0 },
	{ "mouseMoved", (intptr_t) M_mindustry_editor_MapView$1_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean, VTABLE_mindustry_editor_MapView$1_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean, "(Larc/scene/event/InputEvent;FF)Z", 1 },
	{ "enter", (intptr_t) M_mindustry_editor_MapView$1_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, VTABLE_mindustry_editor_MapView$1_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V", 1 },
	{ "touchDown", (intptr_t) M_mindustry_editor_MapView$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_mindustry_editor_MapView$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z", 1 },
	{ "touchUp", (intptr_t) M_mindustry_editor_MapView$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_mindustry_editor_MapView$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
	{ "touchDragged", (intptr_t) M_mindustry_editor_MapView$1_touchDragged_arc_scene_event_InputEvent_float_float_int, VTABLE_mindustry_editor_MapView$1_touchDragged_arc_scene_event_InputEvent_float_float_int, "(Larc/scene/event/InputEvent;FFI)V", 1 },
	{ "lambda$touchDragged$0", (intptr_t) M_mindustry_editor_MapView$1_lambda$touchDragged$0_int_int, VTABLE_mindustry_editor_MapView$1_lambda$touchDragged$0_int_int, "(II)V", 4098 },
};

Class class_mindustry_editor_MapView$1{
		.nativeName = (intptr_t) "mindustry/editor/MapView$1",
		.parentClass = (intptr_t) &class_arc_scene_event_InputListener,
		.size = sizeof(mindustry_editor_MapView$1),
		.classVtable = (intptr_t) vtable_mindustry_editor_MapView$1,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_MapView$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_MapView$1,
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
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_editor_MapView$1 = registerClass(&class_mindustry_editor_MapView$1);

}

