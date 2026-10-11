#include "arc/scene/ui/TreeElement_2.h"
#include "arc/Core.h"
#include "arc/Input.h"
#include "arc/scene/event/ClickListener.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/TreeElement_TreeElementNode.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/TreeElement.h"
#include "arc/scene/style/Drawable.h"
#include "arc/struct/OrderedSet.h"
#include "arc/scene/event/InputListener.h"
#include "arc/scene/utils/Selection.h"
#include "arc/scene/ui/TreeElement_2.h"
#include "arc/scene/event/InputEvent.h"

extern "C" {


void mark_arc_scene_ui_TreeElement$2(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_event_ClickListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_TreeElement$2 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_scene_ui_TreeElement$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_ClickListener(ctx);
}

void init_arc_scene_ui_TreeElement$2_arc_scene_ui_TreeElement(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$2:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TreeElement$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(97);
	((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_ClickListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement$2_clicked_arc_scene_event_InputEvent_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$2:clicked", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_scene_ui_TreeElement_getNodeAt_float_R_arc_scene_ui_TreeElement$TreeElementNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TreeElement_getNodeAt_float_R_arc_scene_ui_TreeElement$TreeElementNode])(ctx, sp[0].o, (frame[3].f));
	frame[4].o = sp[0].o;
	LINE_NUMBER(101);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(102);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_TreeElement$2_getTouchDownY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$2_getTouchDownY_R_float])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_arc_scene_ui_TreeElement_getNodeAt_float_R_arc_scene_ui_TreeElement$TreeElementNode) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TreeElement_getNodeAt_float_R_arc_scene_ui_TreeElement$TreeElementNode])(ctx, sp[1].o, temp0);
	if (sp[0].o == sp[1].o) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_selection;
	jint temp0 = (jint)((func_arc_scene_utils_Selection_getMultiple_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_utils_Selection_getMultiple_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_selection;
	jint temp0 = (jint)((func_arc_scene_utils_Selection_hasItems_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_utils_Selection_hasItems_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_shift_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_shift_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_rangeStart;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_rangeStart = (jref) (frame[4].o);
	}
label_6:;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_rangeStart;
	frame[5].o = sp[0].o;
	LINE_NUMBER(107);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_ctrl_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_ctrl_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_selection;
	((func_arc_scene_utils_Selection_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_utils_Selection_clear])(ctx, sp[0].o);
	}
label_8:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[5].o)))->F_element;
	frame[6].f = ((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[4].o)))->F_element;
	frame[7].f = ((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(109);
	if ((floatCompare((frame[6].f), (frame[7].f), -1)) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK(sp[1].o))->F_rootNodes;
	((func_arc_scene_ui_TreeElement_selectNodes_arc_struct_Seq_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TreeElement_selectNodes_arc_struct_Seq_float_float])(ctx, sp[0].o, sp[1].o, (frame[7].f), (frame[6].f));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK(sp[1].o))->F_rootNodes;
	((func_arc_scene_ui_TreeElement_selectNodes_arc_struct_Seq_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TreeElement_selectNodes_arc_struct_Seq_float_float])(ctx, sp[0].o, sp[1].o, (frame[6].f), (frame[7].f));
	LINE_NUMBER(113);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_selection;
	sp[0].o = (jobject)((func_arc_scene_utils_Selection_items_R_arc_struct_OrderedSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_utils_Selection_items_R_arc_struct_OrderedSet])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_OrderedSet_orderedItems_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_orderedItems_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_reverse_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_reverse_R_arc_struct_Seq])(ctx, sp[0].o);
	}
label_13:;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_selection;
	jint temp0 = (jint)((func_arc_scene_utils_Selection_fireChangeEvent_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_utils_Selection_fireChangeEvent_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(117);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_rangeStart = (jref) (frame[5].o);
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(120);
	jint temp0 = (jint)((func_arc_scene_ui_TreeElement$TreeElementNode_hasChildren_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_hasChildren_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_selection;
	jint temp0 = (jint)((func_arc_scene_utils_Selection_getMultiple_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_utils_Selection_getMultiple_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_18;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_ctrl_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_ctrl_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[4].o)))->F_element;
	frame[5].f = ((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x);
	LINE_NUMBER(123);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[4].o)))->F_icon;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	jfloat temp0 = frame[5].f;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_iconSpacingRight;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[4].o)))->F_icon;
	jfloat temp2 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	frame[5].f = (temp0 - (temp1 + temp2));
	}
label_20:;
	{
	LINE_NUMBER(124);
	if ((floatCompare((frame[2].f), (frame[5].f), 1)) >= 0) goto label_17;
	}
	{
	LINE_NUMBER(125);
	sp[0].o = frame[4].o;
	sp += 1;
	if (((jint)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[4].o)))->F_expanded) != 0) goto label_22;
	}
	INST_ICONST(1);
	goto label_23;
label_22:;
	INST_ICONST(0);
label_23:;
	{
	sp -= 2;
	((func_arc_scene_ui_TreeElement$TreeElementNode_setExpanded_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_setExpanded_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}
label_17:;
	{
	LINE_NUMBER(129);
	jint temp0 = (jint)((func_arc_scene_ui_TreeElement$TreeElementNode_isSelectable_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_isSelectable_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_25;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_25:;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_selection;
	((func_arc_scene_utils_Selection_choose_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_utils_Selection_choose_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(131);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_selection;
	jint temp0 = (jint)((func_arc_scene_utils_Selection_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_utils_Selection_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_rangeStart = (jref) (frame[4].o);
	}
label_27:;
	LINE_NUMBER(132);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_TreeElement$2_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$2:mouseMoved", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_arc_scene_ui_TreeElement_getNodeAt_float_R_arc_scene_ui_TreeElement$TreeElementNode) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TreeElement_getNodeAt_float_R_arc_scene_ui_TreeElement$TreeElementNode])(ctx, sp[1].o, (frame[3].f));
	((func_arc_scene_ui_TreeElement_setOverNode_arc_scene_ui_TreeElement$TreeElementNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TreeElement_setOverNode_arc_scene_ui_TreeElement$TreeElementNode])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement$2_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$2:exit", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(142);
	M_arc_scene_event_ClickListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].o));
	LINE_NUMBER(143);
	if ((frame[5].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TreeElement_setOverNode_arc_scene_ui_TreeElement$TreeElementNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TreeElement_setOverNode_arc_scene_ui_TreeElement$TreeElementNode])(ctx, sp[0].o, (jobject(nullptr)));
	}
label_3:;
	LINE_NUMBER(144);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_TreeElement$2[] {
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
	(void *) M_arc_scene_ui_TreeElement$2_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean,
	(void *) M_arc_scene_event_ClickListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_ui_TreeElement$2_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean,
	(void *) M_arc_scene_event_ClickListener_cancel,
	(void *) M_arc_scene_ui_TreeElement$2_clicked_arc_scene_event_InputEvent_float_float,
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
	{ "this$0", &class_arc_scene_ui_TreeElement, offsetof(arc_scene_ui_TreeElement$2, F_this$0), "Larc/scene/ui/TreeElement;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_TreeElement$2_arc_scene_ui_TreeElement, 0, "(Larc/scene/ui/TreeElement;)V", 0 },
	{ "clicked", (intptr_t) M_arc_scene_ui_TreeElement$2_clicked_arc_scene_event_InputEvent_float_float, VTABLE_arc_scene_ui_TreeElement$2_clicked_arc_scene_event_InputEvent_float_float, "(Larc/scene/event/InputEvent;FF)V", 1 },
	{ "mouseMoved", (intptr_t) M_arc_scene_ui_TreeElement$2_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean, VTABLE_arc_scene_ui_TreeElement$2_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean, "(Larc/scene/event/InputEvent;FF)Z", 1 },
	{ "exit", (intptr_t) M_arc_scene_ui_TreeElement$2_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, VTABLE_arc_scene_ui_TreeElement$2_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V", 1 },
};

Class class_arc_scene_ui_TreeElement$2{
		.nativeName = (intptr_t) "arc/scene/ui/TreeElement$2",
		.parentClass = (intptr_t) &class_arc_scene_event_ClickListener,
		.size = sizeof(arc_scene_ui_TreeElement$2),
		.classVtable = (intptr_t) vtable_arc_scene_ui_TreeElement$2,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_TreeElement$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_TreeElement$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 42,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_scene_ui_TreeElement$2 = registerClass(&class_arc_scene_ui_TreeElement$2);

}

