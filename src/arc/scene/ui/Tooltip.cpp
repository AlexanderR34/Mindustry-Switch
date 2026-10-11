#include "arc/scene/ui/Tooltip.h"
#include "arc/math/geom/Vec2.h"
#include "arc/scene/ui/Tooltip.h"
#include "arc/Core.h"
#include "arc/Input.h"
#include "arc/scene/ui/Tooltip_Tooltips.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/graphics/Color.h"
#include "arc/Application.h"
#include "java/lang/Runnable.h"
#include "arc/input/KeyCode.h"
#include "arc/func/Cons.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/scene/ui/Tooltip_1.h"
#include "arc/scene/event/Touchable.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/event/InputListener.h"
#include "arc/scene/event/InputEvent.h"

extern "C" {

jobject SF_arc_scene_ui_Tooltip_tmp;

void mark_arc_scene_ui_Tooltip(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_scene_ui_Tooltip_tmp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_ui_Tooltip_tmp)->clazz)->markFunction)((jobject) SF_arc_scene_ui_Tooltip_tmp, mark, depth + 1);
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
	auto self = (arc_scene_ui_Tooltip *) object;
	if (self->F_manager)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_manager)->clazz)->markFunction)((jobject) self->F_manager, mark, depth + 1);
	if (self->F_container)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_container)->clazz)->markFunction)((jobject) self->F_container, mark, depth + 1);
	if (self->F_targetActor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_targetActor)->clazz)->markFunction)((jobject) self->F_targetActor, mark, depth + 1);
	if (self->F_show)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_show)->clazz)->markFunction)((jobject) self->F_show, mark, depth + 1);
}

void init_arc_scene_ui_Tooltip_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Tooltip(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_arc_scene_ui_Tooltip$Tooltips_getInstance_R_arc_scene_ui_Tooltip$Tooltips(ctx);
	init_arc_scene_ui_Tooltip_arc_func_Cons_arc_scene_ui_Tooltip$Tooltips(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_Tooltip_arc_func_Cons_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Tooltip(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_arc_scene_ui_Tooltip$Tooltips_getInstance_R_arc_scene_ui_Tooltip$Tooltips(ctx);
	init_arc_scene_ui_Tooltip_arc_func_Cons_arc_scene_ui_Tooltip$Tooltips(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(37);
	((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_show = (jref) (frame[2].o);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_Tooltip_arc_func_Cons_arc_scene_ui_Tooltip$Tooltips(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Tooltip(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(40);
	init_arc_scene_event_InputListener(ctx, (frame[0].o));
	LINE_NUMBER(26);
	((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_instant = (jint(1));
	LINE_NUMBER(41);
	((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_manager = (jref) (frame[2].o);
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Tooltip$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Tooltip$1);
	init_arc_scene_ui_Tooltip$1_arc_scene_ui_Tooltip(ctx, sp[1].o, (frame[0].o));
	((arc_scene_ui_Tooltip *) NULL_CHECK(sp[0].o))->F_container = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(52);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_color;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (jfloat(0.2f));
	LINE_NUMBER(53);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	((func_arc_scene_ui_layout_Table_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setScale_float])(ctx, sp[0].o, (jfloat(0.05f)));
	LINE_NUMBER(54);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_Tooltip_getManager_R_arc_scene_ui_Tooltip$Tooltips(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip:getManager", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_manager;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_Tooltip_getContainer_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip:getContainer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Tooltip_setInstant_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip:setInstant", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(67);
	((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_instant = (frame[1].i);
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Tooltip_setAlways_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip:setAlways", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(72);
	((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_always = (frame[1].i);
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Tooltip_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip:touchDown", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(77);
	if (((jint)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_allowMobile) == 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isMobile_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isMobile_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_listenerActor;
	((func_arc_scene_ui_Tooltip_show_arc_scene_Element_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Tooltip_show_arc_scene_Element_float_float])(ctx, sp[0].o, sp[1].o, (frame[2].f), (frame[3].f));
	}
label_1:;
	{
	LINE_NUMBER(81);
	if (((jint)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_instant) == 0) goto label_3;
	}
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	((func_arc_scene_ui_layout_Table_toFront) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_toFront])(ctx, sp[0].o);
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_manager;
	((func_arc_scene_ui_Tooltip$Tooltips_touchDown_arc_scene_ui_Tooltip) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Tooltip$Tooltips_touchDown_arc_scene_ui_Tooltip])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Tooltip_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip:touchUp", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(92);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isMobile_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isMobile_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_allowMobile) == 0) goto label_1;
	}
	{
	LINE_NUMBER(93);
	((func_arc_scene_ui_Tooltip_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Tooltip_hide])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(95);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Tooltip_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip:mouseMoved", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_hasParent_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_hasParent_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_listenerActor;
	((func_arc_scene_ui_Tooltip_setContainerPosition_arc_scene_Element_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Tooltip_setContainerPosition_arc_scene_Element_float_float])(ctx, sp[0].o, sp[1].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Tooltip_setContainerPosition_arc_scene_Element_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip:setContainerPosition", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(105);
	((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_targetActor = (jref) (frame[1].o);
	LINE_NUMBER(106);
	sp[0].o = (jobject)((func_arc_scene_Element_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Element_getScene_R_arc_scene_Scene])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(107);
	if ((frame[4].o) != nullptr) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	((func_arc_scene_ui_layout_Table_pack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pack])(ctx, sp[0].o);
	LINE_NUMBER(110);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_manager;
	frame[5].f = ((jfloat)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK(sp[0].o))->F_offsetX);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_manager;
	frame[6].f = ((jfloat)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK(sp[0].o))->F_offsetY);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_manager;
	frame[7].f = ((jfloat)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK(sp[0].o))->F_edgeDistance);
	LINE_NUMBER(111);
	sp[0].o = frame[1].o;
	clinit_arc_scene_ui_Tooltip(ctx);
	sp[1].o = (jobject)SF_arc_scene_ui_Tooltip_tmp;
	jfloat temp0 = (frame[2].f) + (frame[5].f);
	jfloat temp1 = (frame[3].f) - (frame[6].f);
	sp[2].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	jfloat temp2 = (jfloat)((func_arc_scene_ui_layout_Table_getHeight_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getHeight_R_float])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp0, (temp1 - temp2));
	sp[0].o = (jobject)((func_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(112);
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[8].o)))->F_y), (frame[7].f), 1)) >= 0) goto label_9;
	}
	{
	sp[0].o = frame[1].o;
	clinit_arc_scene_ui_Tooltip(ctx);
	sp[1].o = (jobject)SF_arc_scene_ui_Tooltip_tmp;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, ((frame[2].f) + (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	sp[0].o = (jobject)((func_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(113);
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[8].o)))->F_x), (frame[7].f), 1)) >= 0) goto label_10;
	}
	{
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[8].o)))->F_x = (frame[7].f);
	}
label_10:;
	{
	LINE_NUMBER(114);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[8].o)))->F_x;
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_layout_Table_getWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getWidth_R_float])(ctx, sp[0].o);
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((func_arc_scene_Scene_getWidth_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Scene_getWidth_R_float])(ctx, (frame[4].o));
	if ((floatCompare(temp2, (temp3 - (frame[7].f)), -1)) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(115);
	sp[0].o = frame[8].o;
	jfloat temp0 = (jfloat)((func_arc_scene_Scene_getWidth_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Scene_getWidth_R_float])(ctx, (frame[4].o));
	jfloat temp1 = temp0 - (frame[7].f);
	sp[1].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	jfloat temp2 = (jfloat)((func_arc_scene_ui_layout_Table_getWidth_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getWidth_R_float])(ctx, sp[1].o);
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (temp1 - temp2);
	}
label_11:;
	{
	LINE_NUMBER(116);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[8].o)))->F_y;
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_layout_Table_getHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getHeight_R_float])(ctx, sp[0].o);
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((func_arc_scene_Scene_getHeight_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Scene_getHeight_R_float])(ctx, (frame[4].o));
	if ((floatCompare(temp2, (temp3 - (frame[7].f)), -1)) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = frame[8].o;
	jfloat temp0 = (jfloat)((func_arc_scene_Scene_getHeight_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Scene_getHeight_R_float])(ctx, (frame[4].o));
	jfloat temp1 = temp0 - (frame[7].f);
	sp[1].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	jfloat temp2 = (jfloat)((func_arc_scene_ui_layout_Table_getHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getHeight_R_float])(ctx, sp[1].o);
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (temp1 - temp2);
	}
label_13:;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	((func_arc_scene_ui_layout_Table_setPosition_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setPosition_float_float])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[8].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[8].o)))->F_y));
	LINE_NUMBER(120);
	sp[0].o = frame[1].o;
	clinit_arc_scene_ui_Tooltip(ctx);
	sp[1].o = (jobject)SF_arc_scene_ui_Tooltip_tmp;
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getWidth_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Element_getWidth_R_float])(ctx, (frame[1].o));
	jfloat temp1 = temp0 / (jfloat(2));
	jfloat temp2 = (jfloat)((func_arc_scene_Element_getHeight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Element_getHeight_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp1, (temp2 / (jfloat(2))));
	sp[0].o = (jobject)((func_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(121);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	jfloat temp3 = (jfloat)((arc_scene_Element *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp3, ((jfloat)((arc_scene_Element *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(122);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	((func_arc_scene_ui_layout_Table_setOrigin_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setOrigin_float_float])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[8].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[8].o)))->F_y));
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Tooltip_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip:enter", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(127);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isMobile_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isMobile_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(128);
	if ((frame[4].i) != (jint(-1))) goto label_2;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_isTouched_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_isTouched_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	if (((jint)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_allowMobile) != 0) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_listenerActor;
	frame[6].o = sp[0].o;
	LINE_NUMBER(130);
	if ((frame[5].o) == nullptr) goto label_5;
	}
	{
	jint temp0 = (jint)((func_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean])(ctx, (frame[5].o), (frame[6].o));
	if (temp0 == 0) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(132);
	((func_arc_scene_ui_Tooltip_show_arc_scene_Element_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Tooltip_show_arc_scene_Element_float_float])(ctx, (frame[0].o), (frame[6].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Tooltip_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip:exit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(138);
	if (((jint)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_allowMobile) == 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isMobile_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isMobile_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(139);
	if ((frame[5].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_listenerActor;
	jint temp0 = (jint)((func_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(140);
	((func_arc_scene_ui_Tooltip_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Tooltip_hide])(ctx, (frame[0].o));
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Tooltip_show_arc_scene_Element_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip:show", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(144);
	((func_arc_scene_ui_Tooltip_setContainerPosition_arc_scene_Element_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Tooltip_setContainerPosition_arc_scene_Element_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(145);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_manager;
	((func_arc_scene_ui_Tooltip$Tooltips_enter_arc_scene_ui_Tooltip) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Tooltip$Tooltips_enter_arc_scene_ui_Tooltip])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(146);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	((func_arc_scene_ui_layout_Table_pack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pack])(ctx, sp[0].o);
	LINE_NUMBER(148);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_show;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_show;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	}
label_4:;
	LINE_NUMBER(149);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_Tooltip_hide(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip:hide", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_manager;
	((func_arc_scene_ui_Tooltip$Tooltips_hide_arc_scene_ui_Tooltip) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Tooltip$Tooltips_hide_arc_scene_ui_Tooltip])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_arc_scene_ui_Tooltip(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_InputListener(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Tooltip(ctx);
	{
	LINE_NUMBER(22);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_scene_ui_Tooltip(ctx);
	SF_arc_scene_ui_Tooltip_tmp = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_Tooltip[] {
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
	(void *) M_arc_scene_ui_Tooltip_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_ui_Tooltip_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_InputListener_touchDragged_arc_scene_event_InputEvent_float_float_int,
	(void *) M_arc_scene_ui_Tooltip_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean,
	(void *) M_arc_scene_ui_Tooltip_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_ui_Tooltip_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean,
	(void *) M_arc_scene_ui_Tooltip_getManager_R_arc_scene_ui_Tooltip$Tooltips,
	(void *) M_arc_scene_ui_Tooltip_getContainer_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_Tooltip_setInstant_boolean,
	(void *) M_arc_scene_ui_Tooltip_setAlways_boolean,
	(void *) M_arc_scene_ui_Tooltip_setContainerPosition_arc_scene_Element_float_float,
	(void *) M_arc_scene_ui_Tooltip_show_arc_scene_Element_float_float,
	(void *) M_arc_scene_ui_Tooltip_hide,
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
	{ "getManager", "()Larc/scene/ui/Tooltip$Tooltips;" },
	{ "getContainer", "()Larc/scene/ui/layout/Table;" },
	{ "setInstant", "(Z)V" },
	{ "setAlways", "(Z)V" },
	{ "setContainerPosition", "(Larc/scene/Element;FF)V" },
	{ "show", "(Larc/scene/Element;FF)V" },
	{ "hide", "()V" },
};

static jclass innerClasses[] {
	&class_arc_scene_ui_Tooltip$Tooltips,
};

static FieldMetadata fields[] {
	{ "tmp", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_scene_ui_Tooltip_tmp, "Larc/math/geom/Vec2;", 8 },
	{ "manager", &class_arc_scene_ui_Tooltip$Tooltips, offsetof(arc_scene_ui_Tooltip, F_manager), "Larc/scene/ui/Tooltip$Tooltips;", 17 },
	{ "container", &class_arc_scene_ui_layout_Table, offsetof(arc_scene_ui_Tooltip, F_container), "Larc/scene/ui/layout/Table;", 17 },
	{ "allowMobile", &class_boolean, offsetof(arc_scene_ui_Tooltip, F_allowMobile), "Z", 1 },
	{ "instant", &class_boolean, offsetof(arc_scene_ui_Tooltip, F_instant), "Z", 1 },
	{ "always", &class_boolean, offsetof(arc_scene_ui_Tooltip, F_always), "Z", 1 },
	{ "targetActor", &class_arc_scene_Element, offsetof(arc_scene_ui_Tooltip, F_targetActor), "Larc/scene/Element;", 4 },
	{ "show", &class_java_lang_Runnable, offsetof(arc_scene_ui_Tooltip, F_show), "Ljava/lang/Runnable;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_Tooltip_arc_func_Cons, 0, "(Larc/func/Cons;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_Tooltip_arc_func_Cons_java_lang_Runnable, 0, "(Larc/func/Cons;Ljava/lang/Runnable;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_Tooltip_arc_func_Cons_arc_scene_ui_Tooltip$Tooltips, 0, "(Larc/func/Cons;Larc/scene/ui/Tooltip$Tooltips;)V", 1 },
	{ "getManager", (intptr_t) M_arc_scene_ui_Tooltip_getManager_R_arc_scene_ui_Tooltip$Tooltips, VTABLE_arc_scene_ui_Tooltip_getManager_R_arc_scene_ui_Tooltip$Tooltips, "()Larc/scene/ui/Tooltip$Tooltips;", 1 },
	{ "getContainer", (intptr_t) M_arc_scene_ui_Tooltip_getContainer_R_arc_scene_ui_layout_Table, VTABLE_arc_scene_ui_Tooltip_getContainer_R_arc_scene_ui_layout_Table, "()Larc/scene/ui/layout/Table;", 1 },
	{ "setInstant", (intptr_t) M_arc_scene_ui_Tooltip_setInstant_boolean, VTABLE_arc_scene_ui_Tooltip_setInstant_boolean, "(Z)V", 1 },
	{ "setAlways", (intptr_t) M_arc_scene_ui_Tooltip_setAlways_boolean, VTABLE_arc_scene_ui_Tooltip_setAlways_boolean, "(Z)V", 1 },
	{ "touchDown", (intptr_t) M_arc_scene_ui_Tooltip_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_arc_scene_ui_Tooltip_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z", 1 },
	{ "touchUp", (intptr_t) M_arc_scene_ui_Tooltip_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_arc_scene_ui_Tooltip_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
	{ "mouseMoved", (intptr_t) M_arc_scene_ui_Tooltip_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean, VTABLE_arc_scene_ui_Tooltip_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean, "(Larc/scene/event/InputEvent;FF)Z", 1 },
	{ "setContainerPosition", (intptr_t) M_arc_scene_ui_Tooltip_setContainerPosition_arc_scene_Element_float_float, VTABLE_arc_scene_ui_Tooltip_setContainerPosition_arc_scene_Element_float_float, "(Larc/scene/Element;FF)V", 4 },
	{ "enter", (intptr_t) M_arc_scene_ui_Tooltip_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, VTABLE_arc_scene_ui_Tooltip_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V", 1 },
	{ "exit", (intptr_t) M_arc_scene_ui_Tooltip_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, VTABLE_arc_scene_ui_Tooltip_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V", 1 },
	{ "show", (intptr_t) M_arc_scene_ui_Tooltip_show_arc_scene_Element_float_float, VTABLE_arc_scene_ui_Tooltip_show_arc_scene_Element_float_float, "(Larc/scene/Element;FF)V", 1 },
	{ "hide", (intptr_t) M_arc_scene_ui_Tooltip_hide, VTABLE_arc_scene_ui_Tooltip_hide, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_arc_scene_ui_Tooltip, 0, "()V", 8 },
};

Class class_arc_scene_ui_Tooltip{
		.nativeName = (intptr_t) "arc/scene/ui/Tooltip",
		.parentClass = (intptr_t) &class_arc_scene_event_InputListener,
		.size = sizeof(arc_scene_ui_Tooltip),
		.classVtable = (intptr_t) vtable_arc_scene_ui_Tooltip,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_Tooltip,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_Tooltip,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_Tooltip = registerClass(&class_arc_scene_ui_Tooltip);

}
