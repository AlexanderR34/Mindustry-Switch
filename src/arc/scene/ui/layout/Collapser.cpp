#include "arc/scene/ui/layout/Collapser.h"
#include "java/lang/reflect/Field.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/func/Boolp.h"
#include "arc/scene/Action.h"
#include "arc/util/Nullable.h"
#include "arc/scene/ui/layout/Collapser_CollapseAction.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "java/lang/String.h"
#include "arc/scene/event/Touchable.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "java/lang/reflect/Method.h"
#include "arc/struct/SnapshotSeq.h"
#include "arc/scene/ui/layout/Collapser.h"

extern "C" {


void mark_arc_scene_ui_layout_Collapser(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_layout_WidgetGroup(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_layout_Collapser *) object;
	if (self->F_table)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_table)->clazz)->markFunction)((jobject) self->F_table, mark, depth + 1);
	if (self->F_collapsedFunc)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_collapsedFunc)->clazz)->markFunction)((jobject) self->F_collapsedFunc, mark, depth + 1);
	if (self->F_collapseAction)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_collapseAction)->clazz)->markFunction)((jobject) self->F_collapseAction, mark, depth + 1);
}

void clinit_arc_scene_ui_layout_Collapser(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_layout_WidgetGroup(ctx);
}

void init_arc_scene_ui_layout_Collapser_arc_func_Cons_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Collapser:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Collapser(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	init_arc_scene_ui_layout_Collapser_arc_scene_ui_layout_Table_boolean(ctx, sp[0].o, sp[1].o, (frame[2].i));
	LINE_NUMBER(20);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_layout_Collapser_arc_scene_ui_layout_Table_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Collapser:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Collapser(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(23);
	init_arc_scene_ui_layout_WidgetGroup(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Collapser$CollapseAction(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Collapser$CollapseAction);
	init_arc_scene_ui_layout_Collapser$CollapseAction_arc_scene_ui_layout_Collapser(ctx, sp[1].o, (frame[0].o));
	((arc_scene_ui_layout_Collapser *) NULL_CHECK(sp[0].o))->F_collapseAction = (jref) sp[1].o;
	LINE_NUMBER(16);
	((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_seconds = (jfloat(0.4f));
	LINE_NUMBER(24);
	((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_table = (jref) (frame[1].o);
	LINE_NUMBER(25);
	((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_collapsed = (frame[2].i);
	LINE_NUMBER(26);
	((func_arc_scene_ui_layout_Collapser_setTransform_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_setTransform_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(28);
	M_arc_scene_ui_layout_Collapser_updateTouchable(ctx, (frame[0].o));
	LINE_NUMBER(29);
	((func_arc_scene_ui_layout_Collapser_addChild_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_addChild_arc_scene_Element])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Collapser_setDuration_float_R_arc_scene_ui_layout_Collapser(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Collapser:setDuration", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(33);
	((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_seconds = (frame[1].f);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Collapser_setCollapsed_arc_func_Boolp_R_arc_scene_ui_layout_Collapser(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Collapser:setCollapsed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_collapsedFunc = (jref) (frame[1].o);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Collapser_setCollapsed_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Collapser(jcontext ctx, jobject self, jbool param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Collapser:setCollapsed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(43);
	((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_collapsedFunc = (jref) (frame[2].o);
	LINE_NUMBER(44);
	((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_autoAnimate = (frame[1].i);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Collapser_toggle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Collapser:toggle", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_scene_ui_layout_Collapser_isCollapsed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_isCollapsed_R_boolean])(ctx, (frame[0].o));
	sp += 1;
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((func_arc_scene_ui_layout_Collapser_setCollapsed_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Collapser_setCollapsed_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Collapser_toggle_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Collapser:toggle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_scene_ui_layout_Collapser_isCollapsed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_isCollapsed_R_boolean])(ctx, (frame[0].o));
	sp += 1;
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((func_arc_scene_ui_layout_Collapser_setCollapsed_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Collapser_setCollapsed_boolean_boolean])(ctx, sp[0].o, sp[1].i, (frame[1].i));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Collapser_setCollapsed_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Collapser:setCollapsed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(57);
	((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_collapsed = (frame[1].i);
	LINE_NUMBER(58);
	M_arc_scene_ui_layout_Collapser_updateTouchable(ctx, (frame[0].o));
	LINE_NUMBER(60);
	sp[0].o = (jobject)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_table;
	if (sp[0].o != nullptr) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(62);
	((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_actionRunning = (jint(1));
	LINE_NUMBER(64);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_collapseAction;
	((func_arc_scene_ui_layout_Collapser_addAction_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Collapser_addAction_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(67);
	if ((frame[1].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(68);
	((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_currentHeight = (jfloat(0));
	LINE_NUMBER(69);
	((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_collapsed = (jint(1));
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_table;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Table_getPrefHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getPrefHeight_R_float])(ctx, sp[1].o);
	((arc_scene_ui_layout_Collapser *) NULL_CHECK(sp[0].o))->F_currentHeight = temp0;
	LINE_NUMBER(72);
	((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_collapsed = (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(75);
	((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_actionRunning = (jint(0));
	LINE_NUMBER(76);
	((func_arc_scene_ui_layout_Collapser_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_invalidateHierarchy])(ctx, (frame[0].o));
	}
label_7:;
	LINE_NUMBER(78);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Collapser_setCollapsed_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Collapser:setCollapsed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(81);
	((func_arc_scene_ui_layout_Collapser_setCollapsed_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_setCollapsed_boolean_boolean])(ctx, (frame[0].o), (frame[1].i), (jint(1)));
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_layout_Collapser_isCollapsed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Collapser:isCollapsed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_collapsed);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Collapser_updateTouchable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Collapser:updateTouchable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	if (((jint)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_collapsed) == 0) goto label_1;
	}
	clinit_arc_scene_event_Touchable(ctx);
	(sp++)->o = SF_arc_scene_event_Touchable_disabled;
	goto label_2;
label_1:;
	clinit_arc_scene_event_Touchable(ctx);
	(sp++)->o = SF_arc_scene_event_Touchable_enabled;
label_2:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(90);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_touchable = (jref) (frame[1].o);
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Collapser_setEnforceMinSize_boolean_R_arc_scene_ui_layout_Collapser(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Collapser:setEnforceMinSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(94);
	((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_enforceMinSize = (frame[1].i);
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Collapser_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Collapser:draw", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	if ((floatCompare(((jfloat)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_currentHeight), (jfloat(1)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(101);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_arc_scene_ui_layout_Collapser_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_getWidth_R_float])(ctx, (frame[0].o));
	jint temp3 = (jint)((func_arc_scene_ui_layout_Collapser_clipBegin_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Collapser_clipBegin_float_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_currentHeight));
	if (temp3 == 0) goto label_1;
	}
	{
	LINE_NUMBER(103);
	M_arc_scene_ui_layout_WidgetGroup_draw(ctx, (frame[0].o));
	LINE_NUMBER(104);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(105);
	((func_arc_scene_ui_layout_Collapser_clipEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_clipEnd])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(108);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Collapser_act_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Collapser:act", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(112);
	M_arc_scene_Group_act_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(114);
	sp[0].o = (jobject)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_collapsedFunc;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_collapsedFunc;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, sp[0].o))(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(116);
	if ((frame[2].i) == ((jint)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_collapsed)) goto label_2;
	}
	{
	LINE_NUMBER(117);
	((func_arc_scene_ui_layout_Collapser_setCollapsed_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_setCollapsed_boolean_boolean])(ctx, (frame[0].o), (frame[2].i), ((jint)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_autoAnimate));
	}
label_2:;
	LINE_NUMBER(120);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Collapser_layout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Collapser:layout", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_table;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_table;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	jfloat temp2 = (jfloat)((func_arc_scene_ui_layout_Collapser_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)((func_arc_scene_ui_layout_Collapser_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_getHeight_R_float])(ctx, (frame[0].o));
	((func_arc_scene_ui_layout_Table_setBounds_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setBounds_float_float_float_float])(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	LINE_NUMBER(128);
	if (((jint)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_actionRunning) != 0) goto label_3;
	}
	{
	LINE_NUMBER(129);
	if (((jint)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_collapsed) == 0) goto label_5;
	}
	{
	LINE_NUMBER(130);
	((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_currentHeight = (jfloat(0));
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(132);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_table;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Table_getPrefHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getPrefHeight_R_float])(ctx, sp[1].o);
	((arc_scene_ui_layout_Collapser *) NULL_CHECK(sp[0].o))->F_currentHeight = temp0;
	}
label_3:;
	LINE_NUMBER(134);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Collapser_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Collapser:getPrefWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_table;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_table;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Table_getPrefWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getPrefWidth_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Collapser_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Collapser:getPrefHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_table;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(145);
	if (((jint)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_actionRunning) != 0) goto label_2;
	}
	{
	LINE_NUMBER(146);
	if (((jint)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_collapsed) == 0) goto label_4;
	}
	{
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return (jfloat(0));
	}
label_4:;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_table;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Table_getPrefHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getPrefHeight_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_currentHeight);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Collapser_setTable_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Collapser:setTable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(156);
	((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_table = (jref) (frame[1].o);
	LINE_NUMBER(157);
	((func_arc_scene_ui_layout_Collapser_clearChildren) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_clearChildren])(ctx, (frame[0].o));
	LINE_NUMBER(158);
	((func_arc_scene_ui_layout_Collapser_addChild_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_addChild_arc_scene_Element])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Collapser_getMinWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Collapser:getMinWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(163);
	if (((jint)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_enforceMinSize) == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)M_arc_scene_ui_layout_WidgetGroup_getMinWidth_R_float(ctx, (frame[0].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_FCONST(0);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Collapser_getMinHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Collapser:getMinHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(168);
	if (((jint)((arc_scene_ui_layout_Collapser *) NULL_CHECK((frame[0].o)))->F_enforceMinSize) == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)M_arc_scene_ui_layout_WidgetGroup_getMinHeight_R_float(ctx, (frame[0].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_FCONST(0);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Collapser_childrenChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Collapser:childrenChanged", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(173);
	M_arc_scene_ui_layout_WidgetGroup_childrenChanged(ctx, (frame[0].o));
	LINE_NUMBER(174);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Collapser_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[0].o));
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= (jint(1))) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Only one actor can be added to CollapsibleWidget"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	LINE_NUMBER(175);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_scene_ui_layout_Collapser;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field collapsedFunc
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_scene_ui_layout_Collapser[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_Group_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_ui_layout_Collapser_draw,
	(void *) M_arc_scene_ui_layout_Collapser_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_Group_hit_float_float_boolean_R_arc_scene_Element,
	(void *) M_arc_scene_Element_remove_R_boolean,
	(void *) M_arc_scene_Element_dragged_arc_func_Floatc2,
	(void *) M_arc_scene_Element_scrolled_arc_func_Floatc,
	(void *) M_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getCaptureListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addAction_arc_scene_Action,
	(void *) M_arc_scene_Element_actions_Array1_arc_scene_Action,
	(void *) M_arc_scene_Element_removeAction_arc_scene_Action,
	(void *) M_arc_scene_Element_getActions_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_hasActions_R_boolean,
	(void *) M_arc_scene_Element_clearActions,
	(void *) M_arc_scene_Element_clearListeners,
	(void *) M_arc_scene_Group_clear,
	(void *) M_arc_scene_Element_getScene_R_arc_scene_Scene,
	(void *) M_arc_scene_Group_setScene_arc_scene_Scene,
	(void *) M_arc_scene_Element_isDescendantOf_arc_func_Boolf_R_boolean,
	(void *) M_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_isAscendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_hasParent_R_boolean,
	(void *) M_arc_scene_Element_isTouchable_R_boolean,
	(void *) M_arc_scene_Element_getX_int_R_float,
	(void *) M_arc_scene_Element_getY_int_R_float,
	(void *) M_arc_scene_Element_setPosition_float_float,
	(void *) M_arc_scene_Element_setPosition_float_float_int,
	(void *) M_arc_scene_Element_moveBy_float_float,
	(void *) M_arc_scene_Element_getWidth_R_float,
	(void *) M_arc_scene_Element_setWidth_float,
	(void *) M_arc_scene_Element_getHeight_R_float,
	(void *) M_arc_scene_Element_setHeight_float,
	(void *) M_arc_scene_Element_getTop_R_float,
	(void *) M_arc_scene_Element_getRight_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_sizeChanged,
	(void *) M_arc_scene_Element_rotationChanged,
	(void *) M_arc_scene_Element_setSize_float,
	(void *) M_arc_scene_Element_setSize_float_float,
	(void *) M_arc_scene_Element_sizeBy_float,
	(void *) M_arc_scene_Element_sizeBy_float_float,
	(void *) M_arc_scene_Element_setBounds_float_float_float_float,
	(void *) M_arc_scene_Element_setOrigin_float_float,
	(void *) M_arc_scene_Element_setOrigin_int,
	(void *) M_arc_scene_Element_setScale_float,
	(void *) M_arc_scene_Element_setScale_float_float,
	(void *) M_arc_scene_Element_scaleBy_float,
	(void *) M_arc_scene_Element_scaleBy_float_float,
	(void *) M_arc_scene_Element_getRotation_R_float,
	(void *) M_arc_scene_Element_setRotation_float,
	(void *) M_arc_scene_Element_setRotationOrigin_float_int,
	(void *) M_arc_scene_Element_rotateBy_float,
	(void *) M_arc_scene_Element_setColor_float_float_float_float,
	(void *) M_arc_scene_Element_setColor_arc_graphics_Color,
	(void *) M_arc_scene_Element_toFront,
	(void *) M_arc_scene_Element_toBack,
	(void *) M_arc_scene_Element_getZIndex_R_int,
	(void *) M_arc_scene_Element_setZIndex_int,
	(void *) M_arc_scene_Element_clipBegin_R_boolean,
	(void *) M_arc_scene_Element_clipBegin_float_float_float_float_R_boolean,
	(void *) M_arc_scene_Element_clipEnd,
	(void *) M_arc_scene_Element_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_ui_layout_Collapser_getMinWidth_R_float,
	(void *) M_arc_scene_ui_layout_Collapser_getMinHeight_R_float,
	(void *) M_arc_scene_ui_layout_Collapser_getPrefWidth_R_float,
	(void *) M_arc_scene_ui_layout_Collapser_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_boolean,
	(void *) M_arc_scene_ui_layout_WidgetGroup_validate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_needsLayout_R_boolean,
	(void *) M_arc_scene_ui_layout_WidgetGroup_invalidate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_invalidateHierarchy,
	(void *) M_arc_scene_ui_layout_WidgetGroup_pack,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setFillParent_boolean,
	(void *) M_arc_scene_ui_layout_Collapser_layout,
	(void *) M_arc_scene_Element_keepInStage,
	(void *) M_arc_scene_Element_setTranslation_float_float,
	(void *) M_arc_scene_Element_keyDown_arc_input_KeyCode_java_lang_Runnable,
	(void *) M_arc_scene_Element_keyDown_arc_func_Cons,
	(void *) M_arc_scene_Element_fireClick,
	(void *) M_arc_scene_Element_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_tapped_java_lang_Runnable_R_arc_scene_event_InputListener,
	(void *) M_arc_scene_Element_hovered_java_lang_Runnable,
	(void *) M_arc_scene_Element_exited_java_lang_Runnable,
	(void *) M_arc_scene_Element_released_java_lang_Runnable,
	(void *) M_arc_scene_Element_change,
	(void *) M_arc_scene_Element_changed_java_lang_Runnable,
	(void *) M_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element,
	(void *) M_arc_scene_Element_visible_arc_func_Boolp_R_arc_scene_Element,
	(void *) M_arc_scene_Element_touchable_arc_func_Prov,
	(void *) M_arc_scene_Group_setCullingArea_arc_math_geom_Rect,
	(void *) M_arc_scene_Group_drawChildren,
	(void *) M_arc_scene_Group_computeTransform_R_arc_math_Mat,
	(void *) M_arc_scene_Group_applyTransform_arc_math_Mat,
	(void *) M_arc_scene_Group_resetTransform,
	(void *) M_arc_scene_Group_getCullingArea_R_arc_math_geom_Rect,
	(void *) M_arc_scene_ui_layout_Collapser_childrenChanged,
	(void *) M_arc_scene_Group_forEach_arc_func_Cons,
	(void *) M_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element,
	(void *) M_arc_scene_Group_fill_arc_func_Cons,
	(void *) M_arc_scene_Group_fill_arc_scene_style_Drawable_arc_func_Cons,
	(void *) M_arc_scene_Group_addChild_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildAt_int_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildBefore_arc_scene_Element_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildAfter_arc_scene_Element_arc_scene_Element,
	(void *) M_arc_scene_Group_removeChild_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Group_removeChild_arc_scene_Element_boolean_R_boolean,
	(void *) M_arc_scene_Group_clearChildren,
	(void *) M_arc_scene_Group_find_java_lang_String_R_arc_scene_Element,
	(void *) M_arc_scene_Group_findVisible_java_lang_String_R_arc_scene_Element,
	(void *) M_arc_scene_Group_find_arc_func_Boolf_R_arc_scene_Element,
	(void *) M_arc_scene_Group_swapActor_int_int_R_boolean,
	(void *) M_arc_scene_Group_swapActor_arc_scene_Element_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq,
	(void *) M_arc_scene_Group_hasChildren_R_boolean,
	(void *) M_arc_scene_Group_isTransform_R_boolean,
	(void *) M_arc_scene_Group_setTransform_boolean,
	(void *) M_arc_scene_Group_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Group_toString_java_lang_StringBuilder_int,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_arc_scene_Group_boolean,
	(void *) M_arc_scene_ui_layout_Collapser_setDuration_float_R_arc_scene_ui_layout_Collapser,
	(void *) M_arc_scene_ui_layout_Collapser_setCollapsed_arc_func_Boolp_R_arc_scene_ui_layout_Collapser,
	(void *) M_arc_scene_ui_layout_Collapser_setCollapsed_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Collapser,
	(void *) M_arc_scene_ui_layout_Collapser_toggle,
	(void *) M_arc_scene_ui_layout_Collapser_toggle_boolean,
	(void *) M_arc_scene_ui_layout_Collapser_setCollapsed_boolean_boolean,
	(void *) M_arc_scene_ui_layout_Collapser_setCollapsed_boolean,
	(void *) M_arc_scene_ui_layout_Collapser_isCollapsed_R_boolean,
	(void *) M_arc_scene_ui_layout_Collapser_updateTouchable,
	(void *) M_arc_scene_ui_layout_Collapser_setEnforceMinSize_boolean_R_arc_scene_ui_layout_Collapser,
	(void *) M_arc_scene_ui_layout_Collapser_setTable_arc_scene_ui_layout_Table,
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
	{ "draw", "()V" },
	{ "act", "(F)V" },
	{ "updateVisibility", "()V" },
	{ "hasMouse", "()Z" },
	{ "hasKeyboard", "()Z" },
	{ "hasScroll", "()Z" },
	{ "requestKeyboard", "()V" },
	{ "requestScroll", "()V" },
	{ "fire", "(Larc/scene/event/SceneEvent;)Z" },
	{ "notify", "(Larc/scene/event/SceneEvent;Z)Z" },
	{ "hit", "(FFZ)Larc/scene/Element;" },
	{ "remove", "()Z" },
	{ "dragged", "(Larc/func/Floatc2;)V" },
	{ "scrolled", "(Larc/func/Floatc;)V" },
	{ "addListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getListeners", "()Larc/struct/Seq;" },
	{ "addCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getCaptureListeners", "()Larc/struct/Seq;" },
	{ "addAction", "(Larc/scene/Action;)V" },
	{ "actions", "([Larc/scene/Action;)V" },
	{ "removeAction", "(Larc/scene/Action;)V" },
	{ "getActions", "()Larc/struct/Seq;" },
	{ "hasActions", "()Z" },
	{ "clearActions", "()V" },
	{ "clearListeners", "()V" },
	{ "clear", "()V" },
	{ "getScene", "()Larc/scene/Scene;" },
	{ "setScene", "(Larc/scene/Scene;)V" },
	{ "isDescendantOf", "(Larc/func/Boolf;)Z" },
	{ "isDescendantOf", "(Larc/scene/Element;)Z" },
	{ "isAscendantOf", "(Larc/scene/Element;)Z" },
	{ "hasParent", "()Z" },
	{ "isTouchable", "()Z" },
	{ "getX", "(I)F" },
	{ "getY", "(I)F" },
	{ "setPosition", "(FF)V" },
	{ "setPosition", "(FFI)V" },
	{ "moveBy", "(FF)V" },
	{ "getWidth", "()F" },
	{ "setWidth", "(F)V" },
	{ "getHeight", "()F" },
	{ "setHeight", "(F)V" },
	{ "getTop", "()F" },
	{ "getRight", "()F" },
	{ "sizeChanged", "()V" },
	{ "rotationChanged", "()V" },
	{ "setSize", "(F)V" },
	{ "setSize", "(FF)V" },
	{ "sizeBy", "(F)V" },
	{ "sizeBy", "(FF)V" },
	{ "setBounds", "(FFFF)V" },
	{ "setOrigin", "(FF)V" },
	{ "setOrigin", "(I)V" },
	{ "setScale", "(F)V" },
	{ "setScale", "(FF)V" },
	{ "scaleBy", "(F)V" },
	{ "scaleBy", "(FF)V" },
	{ "getRotation", "()F" },
	{ "setRotation", "(F)V" },
	{ "setRotationOrigin", "(FI)V" },
	{ "rotateBy", "(F)V" },
	{ "setColor", "(FFFF)V" },
	{ "setColor", "(Larc/graphics/Color;)V" },
	{ "toFront", "()V" },
	{ "toBack", "()V" },
	{ "getZIndex", "()I" },
	{ "setZIndex", "(I)V" },
	{ "clipBegin", "()Z" },
	{ "clipBegin", "(FFFF)Z" },
	{ "clipEnd", "()V" },
	{ "screenToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "stageToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToStageCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToParentCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToAscendantCoordinates", "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "parentToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "getMinWidth", "()F" },
	{ "getMinHeight", "()F" },
	{ "getPrefWidth", "()F" },
	{ "getPrefHeight", "()F" },
	{ "getMaxWidth", "()F" },
	{ "getMaxHeight", "()F" },
	{ "setLayoutEnabled", "(Z)V" },
	{ "validate", "()V" },
	{ "needsLayout", "()Z" },
	{ "invalidate", "()V" },
	{ "invalidateHierarchy", "()V" },
	{ "pack", "()V" },
	{ "setFillParent", "(Z)V" },
	{ "layout", "()V" },
	{ "keepInStage", "()V" },
	{ "setTranslation", "(FF)V" },
	{ "keyDown", "(Larc/input/KeyCode;Ljava/lang/Runnable;)V" },
	{ "keyDown", "(Larc/func/Cons;)V" },
	{ "fireClick", "()V" },
	{ "clicked", "(Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/input/KeyCode;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Larc/func/Cons;)Larc/scene/event/ClickListener;" },
	{ "tapped", "(Ljava/lang/Runnable;)Larc/scene/event/InputListener;" },
	{ "hovered", "(Ljava/lang/Runnable;)V" },
	{ "exited", "(Ljava/lang/Runnable;)V" },
	{ "released", "(Ljava/lang/Runnable;)V" },
	{ "change", "()V" },
	{ "changed", "(Ljava/lang/Runnable;)V" },
	{ "update", "(Ljava/lang/Runnable;)Larc/scene/Element;" },
	{ "visible", "(Larc/func/Boolp;)Larc/scene/Element;" },
	{ "touchable", "(Larc/func/Prov;)V" },
	{ "setCullingArea", "(Larc/math/geom/Rect;)V" },
	{ "drawChildren", "()V" },
	{ "computeTransform", "()Larc/math/Mat;" },
	{ "applyTransform", "(Larc/math/Mat;)V" },
	{ "resetTransform", "()V" },
	{ "getCullingArea", "()Larc/math/geom/Rect;" },
	{ "childrenChanged", "()V" },
	{ "forEach", "(Larc/func/Cons;)V" },
	{ "fill", "(Larc/scene/ui/layout/Table$DrawRect;)Larc/scene/Element;" },
	{ "fill", "(Larc/func/Cons;)V" },
	{ "fill", "(Larc/scene/style/Drawable;Larc/func/Cons;)V" },
	{ "addChild", "(Larc/scene/Element;)V" },
	{ "addChildAt", "(ILarc/scene/Element;)V" },
	{ "addChildBefore", "(Larc/scene/Element;Larc/scene/Element;)V" },
	{ "addChildAfter", "(Larc/scene/Element;Larc/scene/Element;)V" },
	{ "removeChild", "(Larc/scene/Element;)Z" },
	{ "removeChild", "(Larc/scene/Element;Z)Z" },
	{ "clearChildren", "()V" },
	{ "find", "(Ljava/lang/String;)Larc/scene/Element;" },
	{ "findVisible", "(Ljava/lang/String;)Larc/scene/Element;" },
	{ "find", "(Larc/func/Boolf;)Larc/scene/Element;" },
	{ "swapActor", "(II)Z" },
	{ "swapActor", "(Larc/scene/Element;Larc/scene/Element;)Z" },
	{ "getChildren", "()Larc/struct/SnapshotSeq;" },
	{ "hasChildren", "()Z" },
	{ "isTransform", "()Z" },
	{ "setTransform", "(Z)V" },
	{ "localToDescendantCoordinates", "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "toString", "(Ljava/lang/StringBuilder;I)V" },
	{ "setLayoutEnabled", "(Larc/scene/Group;Z)V" },
	{ "setDuration", "(F)Larc/scene/ui/layout/Collapser;" },
	{ "setCollapsed", "(Larc/func/Boolp;)Larc/scene/ui/layout/Collapser;" },
	{ "setCollapsed", "(ZLarc/func/Boolp;)Larc/scene/ui/layout/Collapser;" },
	{ "toggle", "()V" },
	{ "toggle", "(Z)V" },
	{ "setCollapsed", "(ZZ)V" },
	{ "setCollapsed", "(Z)V" },
	{ "isCollapsed", "()Z" },
	{ "updateTouchable", "()V" },
	{ "setEnforceMinSize", "(Z)Larc/scene/ui/layout/Collapser;" },
	{ "setTable", "(Larc/scene/ui/layout/Table;)V" },
};

static jclass innerClasses[] {
	&class_arc_scene_ui_layout_Collapser$CollapseAction,
};

static FieldMetadata fields[] {
	{ "table", &class_arc_scene_ui_layout_Table, offsetof(arc_scene_ui_layout_Collapser, F_table), "Larc/scene/ui/layout/Table;", 0 },
	{ "collapsedFunc", &class_arc_func_Boolp, offsetof(arc_scene_ui_layout_Collapser, F_collapsedFunc), "Larc/func/Boolp;", 0 },
	{ "collapseAction", &class_arc_scene_ui_layout_Collapser$CollapseAction, offsetof(arc_scene_ui_layout_Collapser, F_collapseAction), "Larc/scene/ui/layout/Collapser$CollapseAction;", 2 },
	{ "collapsed", &class_boolean, offsetof(arc_scene_ui_layout_Collapser, F_collapsed), "Z", 0 },
	{ "autoAnimate", &class_boolean, offsetof(arc_scene_ui_layout_Collapser, F_autoAnimate), "Z", 0 },
	{ "enforceMinSize", &class_boolean, offsetof(arc_scene_ui_layout_Collapser, F_enforceMinSize), "Z", 0 },
	{ "actionRunning", &class_boolean, offsetof(arc_scene_ui_layout_Collapser, F_actionRunning), "Z", 0 },
	{ "currentHeight", &class_float, offsetof(arc_scene_ui_layout_Collapser, F_currentHeight), "F", 0 },
	{ "seconds", &class_float, offsetof(arc_scene_ui_layout_Collapser, F_seconds), "F", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_layout_Collapser_arc_func_Cons_boolean, 0, "(Larc/func/Cons;Z)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_layout_Collapser_arc_scene_ui_layout_Table_boolean, 0, "(Larc/scene/ui/layout/Table;Z)V", 1 },
	{ "setDuration", (intptr_t) M_arc_scene_ui_layout_Collapser_setDuration_float_R_arc_scene_ui_layout_Collapser, VTABLE_arc_scene_ui_layout_Collapser_setDuration_float_R_arc_scene_ui_layout_Collapser, "(F)Larc/scene/ui/layout/Collapser;", 1 },
	{ "setCollapsed", (intptr_t) M_arc_scene_ui_layout_Collapser_setCollapsed_arc_func_Boolp_R_arc_scene_ui_layout_Collapser, VTABLE_arc_scene_ui_layout_Collapser_setCollapsed_arc_func_Boolp_R_arc_scene_ui_layout_Collapser, "(Larc/func/Boolp;)Larc/scene/ui/layout/Collapser;", 1 },
	{ "setCollapsed", (intptr_t) M_arc_scene_ui_layout_Collapser_setCollapsed_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Collapser, VTABLE_arc_scene_ui_layout_Collapser_setCollapsed_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Collapser, "(ZLarc/func/Boolp;)Larc/scene/ui/layout/Collapser;", 1 },
	{ "toggle", (intptr_t) M_arc_scene_ui_layout_Collapser_toggle, VTABLE_arc_scene_ui_layout_Collapser_toggle, "()V", 1 },
	{ "toggle", (intptr_t) M_arc_scene_ui_layout_Collapser_toggle_boolean, VTABLE_arc_scene_ui_layout_Collapser_toggle_boolean, "(Z)V", 1 },
	{ "setCollapsed", (intptr_t) M_arc_scene_ui_layout_Collapser_setCollapsed_boolean_boolean, VTABLE_arc_scene_ui_layout_Collapser_setCollapsed_boolean_boolean, "(ZZ)V", 1 },
	{ "setCollapsed", (intptr_t) M_arc_scene_ui_layout_Collapser_setCollapsed_boolean, VTABLE_arc_scene_ui_layout_Collapser_setCollapsed_boolean, "(Z)V", 1 },
	{ "isCollapsed", (intptr_t) M_arc_scene_ui_layout_Collapser_isCollapsed_R_boolean, VTABLE_arc_scene_ui_layout_Collapser_isCollapsed_R_boolean, "()Z", 1 },
	{ "updateTouchable", (intptr_t) M_arc_scene_ui_layout_Collapser_updateTouchable, VTABLE_arc_scene_ui_layout_Collapser_updateTouchable, "()V", 2 },
	{ "setEnforceMinSize", (intptr_t) M_arc_scene_ui_layout_Collapser_setEnforceMinSize_boolean_R_arc_scene_ui_layout_Collapser, VTABLE_arc_scene_ui_layout_Collapser_setEnforceMinSize_boolean_R_arc_scene_ui_layout_Collapser, "(Z)Larc/scene/ui/layout/Collapser;", 1 },
	{ "draw", (intptr_t) M_arc_scene_ui_layout_Collapser_draw, VTABLE_arc_scene_ui_layout_Collapser_draw, "()V", 1 },
	{ "act", (intptr_t) M_arc_scene_ui_layout_Collapser_act_float, VTABLE_arc_scene_ui_layout_Collapser_act_float, "(F)V", 1 },
	{ "layout", (intptr_t) M_arc_scene_ui_layout_Collapser_layout, VTABLE_arc_scene_ui_layout_Collapser_layout, "()V", 1 },
	{ "getPrefWidth", (intptr_t) M_arc_scene_ui_layout_Collapser_getPrefWidth_R_float, VTABLE_arc_scene_ui_layout_Collapser_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_arc_scene_ui_layout_Collapser_getPrefHeight_R_float, VTABLE_arc_scene_ui_layout_Collapser_getPrefHeight_R_float, "()F", 1 },
	{ "setTable", (intptr_t) M_arc_scene_ui_layout_Collapser_setTable_arc_scene_ui_layout_Table, VTABLE_arc_scene_ui_layout_Collapser_setTable_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "getMinWidth", (intptr_t) M_arc_scene_ui_layout_Collapser_getMinWidth_R_float, VTABLE_arc_scene_ui_layout_Collapser_getMinWidth_R_float, "()F", 1 },
	{ "getMinHeight", (intptr_t) M_arc_scene_ui_layout_Collapser_getMinHeight_R_float, VTABLE_arc_scene_ui_layout_Collapser_getMinHeight_R_float, "()F", 1 },
	{ "childrenChanged", (intptr_t) M_arc_scene_ui_layout_Collapser_childrenChanged, VTABLE_arc_scene_ui_layout_Collapser_childrenChanged, "()V", 4 },
};

Class class_arc_scene_ui_layout_Collapser{
		.nativeName = (intptr_t) "arc/scene/ui/layout/Collapser",
		.parentClass = (intptr_t) &class_arc_scene_ui_layout_WidgetGroup,
		.size = sizeof(arc_scene_ui_layout_Collapser),
		.classVtable = (intptr_t) vtable_arc_scene_ui_layout_Collapser,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_layout_Collapser,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_scene_ui_layout_Collapser,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 162,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_layout_Collapser = registerClass(&class_arc_scene_ui_layout_Collapser);

}
