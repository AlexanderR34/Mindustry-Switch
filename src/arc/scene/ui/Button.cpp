#include "arc/scene/ui/Button.h"
#include "arc/math/geom/Vec2.h"
#include "arc/func/Prov.h"
#include "arc/Input.h"
#include "arc/scene/event/HandCursorListener.h"
#include "arc/func/Boolp.h"
#include "arc/func/Cons.h"
#include "arc/scene/ui/Button.h"
#include "arc/scene/ui/Button_invoke_arc_func_Cons_0.h"
#include "java/lang/String.h"
#include "arc/scene/event/Touchable.h"
#include "arc/scene/event/SceneEvent.h"
#include "arc/util/pooling/Pools.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/struct/Seq.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "java/lang/Math.h"
#include "arc/scene/ui/Button_1.h"
#include "arc/Core.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/scene/event/ClickListener.h"
#include "arc/scene/event/ChangeListener_ChangeEvent.h"
#include "arc/scene/ui/Button_invoke_arc_func_Prov_0.h"
#include "arc/scene/Scene.h"
#include "arc/Graphics.h"
#include "arc/scene/utils/Disableable.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/ButtonGroup.h"
#include "arc/scene/event/EventListener.h"
#include "java/lang/Class.h"
#include "arc/struct/SnapshotSeq.h"

extern "C" {


void mark_arc_scene_ui_Button(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_layout_Table(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_Button *) object;
	if (self->F_buttonGroup)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buttonGroup)->clazz)->markFunction)((jobject) self->F_buttonGroup, mark, depth + 1);
	if (self->F_disabledProvider)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_disabledProvider)->clazz)->markFunction)((jobject) self->F_disabledProvider, mark, depth + 1);
	if (self->F_style)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_style)->clazz)->markFunction)((jobject) self->F_style, mark, depth + 1);
	if (self->F_clickListener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_clickListener)->clazz)->markFunction)((jobject) self->F_clickListener, mark, depth + 1);
}

void clinit_arc_scene_ui_Button(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_layout_Table(ctx);
}

void init_arc_scene_ui_Button_arc_scene_ui_Button$ButtonStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Button(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	init_arc_scene_ui_layout_Table(ctx, (frame[0].o));
	LINE_NUMBER(39);
	M_arc_scene_ui_Button_initialize(ctx, (frame[0].o));
	LINE_NUMBER(40);
	((func_arc_scene_ui_Button_setStyle_arc_scene_ui_Button$ButtonStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_setStyle_arc_scene_ui_Button$ButtonStyle])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Button_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_getPrefWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_scene_ui_Button_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_getPrefHeight_R_float])(ctx, (frame[0].o));
	((func_arc_scene_ui_Button_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_setSize_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_Button(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Button(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(45);
	init_arc_scene_ui_layout_Table(ctx, (frame[0].o));
	LINE_NUMBER(46);
	M_arc_scene_ui_Button_initialize(ctx, (frame[0].o));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((func_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_arc_scene_ui_Button$ButtonStyle)));
	((arc_scene_ui_Button *) NULL_CHECK(sp[0].o))->F_style = (jref) (checkCast(ctx, &class_arc_scene_ui_Button$ButtonStyle, sp[1].o));
	LINE_NUMBER(50);
	jint temp0 = (jint)((func_arc_scene_ui_Button_isPressed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_isPressed_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_arc_scene_ui_Button_isDisabled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_isDisabled_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_down;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_up;
	sp += 1;
	goto label_7;
	}
label_6:;
	{
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_down;
	sp += 1;
	}
label_7:;
	INST_ASTORE(1);
	goto label_9;
label_4:;
	{
	LINE_NUMBER(53);
	jint temp0 = (jint)((func_arc_scene_ui_Button_isDisabled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_isDisabled_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_disabled;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_disabled;
	frame[1].o = sp[0].o;
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(55);
	if (((jint)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_isChecked) == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_checked;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(56);
	jint temp0 = (jint)((func_arc_scene_ui_Button_isOver_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_isOver_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_checkedOver;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_checkedOver;
	sp += 1;
	goto label_16;
	}
label_15:;
	{
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_checked;
	sp += 1;
	}
label_16:;
	INST_ASTORE(1);
	goto label_9;
label_13:;
	{
	LINE_NUMBER(57);
	jint temp0 = (jint)((func_arc_scene_ui_Button_isOver_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_isOver_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_over;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_over;
	frame[1].o = sp[0].o;
	goto label_9;
	}
label_18:;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_up;
	frame[1].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(62);
	((func_arc_scene_ui_Button_setBackground_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_setBackground_arc_scene_style_Drawable])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_Button_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Button(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Button$ButtonStyle(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Button$ButtonStyle);
	init_arc_scene_ui_Button$ButtonStyle_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable(ctx, sp[1].o, (frame[1].o), (jobject(nullptr)), (jobject(nullptr)));
	init_arc_scene_ui_Button_arc_scene_ui_Button$ButtonStyle(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_Button_arc_scene_style_Drawable_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Button(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Button$ButtonStyle(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Button$ButtonStyle);
	init_arc_scene_ui_Button$ButtonStyle_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable(ctx, sp[1].o, (frame[1].o), (frame[2].o), (jobject(nullptr)));
	init_arc_scene_ui_Button_arc_scene_ui_Button$ButtonStyle(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_Button_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Button(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Button$ButtonStyle(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Button$ButtonStyle);
	init_arc_scene_ui_Button$ButtonStyle_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable(ctx, sp[1].o, (frame[1].o), (frame[2].o), (frame[3].o));
	init_arc_scene_ui_Button_arc_scene_ui_Button$ButtonStyle(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Button_act_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:act", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(79);
	M_arc_scene_Group_act_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(81);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_disabledProvider;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_disabledProvider;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, sp[1].o))(ctx, sp[1].o);
	((func_arc_scene_ui_Button_setDisabled_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_setDisabled_boolean])(ctx, sp[0].o, temp0);
	}
label_2:;
	LINE_NUMBER(84);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_Button_initialize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:initialize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_arc_scene_ui_Button$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_Button$1);
	init_arc_scene_ui_Button$1_arc_scene_ui_Button(ctx, sp[2].o, (frame[0].o));
	((arc_scene_ui_Button *) NULL_CHECK(sp[1].o))->F_clickListener = (jref) sp[2].o;
	jint temp0 = (jint)((func_arc_scene_ui_Button_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[2].o);
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	clinit_arc_scene_event_HandCursorListener(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_event_HandCursorListener);
	init_arc_scene_event_HandCursorListener(ctx, sp[1].o);
	jint temp1 = (jint)((func_arc_scene_ui_Button_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Button_setChecked_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:setChecked", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(100);
	if (((jint)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_isChecked) != (frame[1].i)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_buttonGroup;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_buttonGroup;
	jint temp0 = (jint)((func_arc_scene_ui_ButtonGroup_canCheck_arc_scene_ui_Button_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ButtonGroup_canCheck_arc_scene_ui_Button_boolean_R_boolean])(ctx, sp[0].o, (frame[0].o), (frame[1].i));
	if (temp0 != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(102);
	((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_isChecked = (frame[1].i);
	LINE_NUMBER(104);
	if ((frame[2].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(105);
	sp[0].o = ((jobject) &class_arc_scene_event_ChangeListener$ChangeEvent);
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_Button_invoke_arc_func_Prov_0(ctx);
		auto proxy = (arc_scene_ui_Button_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_arc_scene_ui_Button_invoke_arc_func_Prov_0);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_arc_scene_event_ChangeListener$ChangeEvent, sp[0].o));
	LINE_NUMBER(106);
	jint temp0 = (jint)((func_arc_scene_ui_Button_fire_arc_scene_event_SceneEvent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_fire_arc_scene_event_SceneEvent_R_boolean])(ctx, (frame[0].o), (frame[3].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) != 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	sp -= 2;
	((arc_scene_ui_Button *) NULL_CHECK(sp[0].o))->F_isChecked = sp[1].i;
label_7:;
	{
	LINE_NUMBER(107);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[3].o));
	}
label_4:;
	LINE_NUMBER(109);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_Button_toggle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:toggle", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_isChecked) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((func_arc_scene_ui_Button_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_setChecked_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Button_isChecked_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:isChecked", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_isChecked);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Button_setChecked_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:setChecked", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(124);
	((func_arc_scene_ui_Button_setChecked_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_setChecked_boolean_boolean])(ctx, (frame[0].o), (frame[1].i), ((jint)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents));
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Button_isPressed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:isPressed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_clickListener;
	jint temp0 = (jint)((func_arc_scene_event_ClickListener_isVisualPressed_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_ClickListener_isVisualPressed_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Button_isOver_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:isOver", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_clickListener;
	jint temp0 = (jint)((func_arc_scene_event_ClickListener_isOver_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_ClickListener_isOver_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_Button_getClickListener_R_arc_scene_event_ClickListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:getClickListener", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_clickListener;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Button_isDisabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:isDisabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_isDisabled);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Button_setDisabled_arc_func_Boolp(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:setDisabled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(145);
	((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_disabledProvider = (jref) (frame[1].o);
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Button_setDisabled_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:setDisabled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(151);
	((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_isDisabled = (frame[1].i);
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Button_childrenPressed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:childrenPressed", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	frame[1].o = sp[0].o;
	LINE_NUMBER(156);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_Button_invoke_arc_func_Cons_0(ctx);
		auto proxy = (arc_scene_ui_Button_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_arc_scene_ui_Button_invoke_arc_func_Cons_0);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_Button_forEach_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_forEach_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (jint(0))));
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Button_setProgrammaticChangeEvents_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:setProgrammaticChangeEvents", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(173);
	((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents = (frame[1].i);
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_Button_getStyle_R_arc_scene_ui_Button$ButtonStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Button_setStyle_arc_scene_ui_Button$ButtonStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:setStyle", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(185);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"style cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(186);
	((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style = (jref) (frame[1].o);
	LINE_NUMBER(189);
	jint temp0 = (jint)((func_arc_scene_ui_Button_isPressed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_isPressed_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_arc_scene_ui_Button_isDisabled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_isDisabled_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[1].o)))->F_down;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[1].o)))->F_up;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[-1].o))->F_down;
label_6:;
	INST_ASTORE(2);
	goto label_8;
label_3:;
	{
	LINE_NUMBER(192);
	jint temp0 = (jint)((func_arc_scene_ui_Button_isDisabled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_isDisabled_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[1].o)))->F_disabled;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[1].o)))->F_disabled;
	frame[2].o = sp[0].o;
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(194);
	if (((jint)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_isChecked) == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[1].o)))->F_checked;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(195);
	jint temp0 = (jint)((func_arc_scene_ui_Button_isOver_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_isOver_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[1].o)))->F_checkedOver;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[1].o)))->F_checkedOver;
	sp += 1;
	goto label_15;
	}
label_14:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[-1].o))->F_checked;
label_15:;
	INST_ASTORE(2);
	goto label_8;
label_12:;
	{
	LINE_NUMBER(196);
	jint temp0 = (jint)((func_arc_scene_ui_Button_isOver_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_isOver_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[1].o)))->F_over;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[1].o)))->F_over;
	frame[2].o = sp[0].o;
	goto label_8;
	}
label_17:;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[1].o)))->F_up;
	frame[2].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(201);
	((func_arc_scene_ui_Button_setBackground_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_setBackground_arc_scene_style_Drawable])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_Button_getButtonGroup_R_arc_scene_ui_ButtonGroup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:getButtonGroup", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_buttonGroup;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Button_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:draw", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(211);
	((func_arc_scene_ui_Button_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_validate])(ctx, (frame[0].o));
	LINE_NUMBER(213);
	jint temp0 = (jint)((func_arc_scene_ui_Button_isDisabled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_isDisabled_R_boolean])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(214);
	jint temp1 = (jint)((func_arc_scene_ui_Button_isPressed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_isPressed_R_boolean])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(215);
	jint temp2 = (jint)((func_arc_scene_ui_Button_isChecked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_isChecked_R_boolean])(ctx, (frame[0].o));
	frame[3].i = temp2;
	LINE_NUMBER(216);
	jint temp3 = (jint)((func_arc_scene_ui_Button_isOver_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_isOver_R_boolean])(ctx, (frame[0].o));
	frame[4].i = temp3;
	LINE_NUMBER(218);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(219);
	if ((frame[1].i) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_disabled;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_disabled;
	frame[5].o = sp[0].o;
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(221);
	if ((frame[2].i) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_down;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_down;
	frame[5].o = sp[0].o;
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(223);
	if ((frame[3].i) == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_checked;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_checkedOver;
	if (sp[0].o == nullptr) goto label_14;
	}
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_14;
	{
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_checkedOver;
	sp += 1;
	goto label_15;
	}
label_14:;
	{
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_checked;
	sp += 1;
	}
label_15:;
	INST_ASTORE(5);
	goto label_9;
label_12:;
	{
	LINE_NUMBER(225);
	if ((frame[4].i) == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_over;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_over;
	frame[5].o = sp[0].o;
	goto label_9;
	}
label_16:;
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_up;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_up;
	frame[5].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(230);
	((func_arc_scene_ui_Button_setBackground_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_setBackground_arc_scene_style_Drawable])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(233);
	if ((frame[2].i) == 0) goto label_20;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_20;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	frame[6].f = ((jfloat)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_pressedOffsetX);
	LINE_NUMBER(235);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	frame[7].f = ((jfloat)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_pressedOffsetY);
	goto label_24;
	}
label_20:;
	{
	LINE_NUMBER(236);
	if ((frame[3].i) == 0) goto label_25;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_25;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	frame[6].f = ((jfloat)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_checkedOffsetX);
	LINE_NUMBER(238);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	frame[7].f = ((jfloat)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_checkedOffsetY);
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	frame[6].f = ((jfloat)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_unpressedOffsetX);
	LINE_NUMBER(241);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	frame[7].f = ((jfloat)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_unpressedOffsetY);
	}
label_24:;
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[0].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(245);
	frame[9].i = (jint(0));
	}
label_31:;
	{
	if ((frame[9].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[8].o)))->F_size)) goto label_32;
	}
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[8].o), (frame[9].i));
	((func_arc_scene_Element_moveBy_float_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_Element, sp[0].o)))->vtable)[VTABLE_arc_scene_Element_moveBy_float_float])(ctx, (checkCast(ctx, &class_arc_scene_Element, sp[0].o)), (frame[6].f), (frame[7].f));
	LINE_NUMBER(245);
	INST_IINC(9, 1);
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(247);
	M_arc_scene_ui_layout_Table_draw(ctx, (frame[0].o));
	LINE_NUMBER(248);
	frame[9].i = (jint(0));
	}
label_36:;
	{
	if ((frame[9].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[8].o)))->F_size)) goto label_37;
	}
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[8].o), (frame[9].i));
	((func_arc_scene_Element_moveBy_float_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_Element, sp[0].o)))->vtable)[VTABLE_arc_scene_Element_moveBy_float_float])(ctx, (checkCast(ctx, &class_arc_scene_Element, sp[0].o)), (-(frame[6].f)), (-(frame[7].f)));
	LINE_NUMBER(248);
	INST_IINC(9, 1);
	goto label_36;
	}
label_37:;
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_getScene_R_arc_scene_Scene])(ctx, (frame[0].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(252);
	if ((frame[9].o) == nullptr) goto label_41;
	}
	{
	jint temp0 = (jint)((func_arc_scene_Scene_getActionsRequestRendering_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_Scene_getActionsRequestRendering_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_41;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_clickListener;
	jint temp1 = (jint)((func_arc_scene_event_ClickListener_isPressed_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_ClickListener_isPressed_R_boolean])(ctx, sp[0].o);
	if (temp0 == temp1) goto label_41;
	}
	{
	LINE_NUMBER(253);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	((func_arc_Graphics_requestRendering) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_requestRendering])(ctx, sp[0].o);
	}
label_41:;
	LINE_NUMBER(254);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_Button_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:getPrefWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(258);
	jfloat temp0 = (jfloat)M_arc_scene_ui_layout_Table_getPrefWidth_R_float(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(259);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_up;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_up;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[1].f = temp2;
	}
label_2:;
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_down;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_down;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[1].f = temp2;
	}
label_3:;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_checked;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_checked;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[1].f = temp2;
	}
label_4:;
	{
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_Button_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:getPrefHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(267);
	jfloat temp0 = (jfloat)M_arc_scene_ui_layout_Table_getPrefHeight_R_float(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(268);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_up;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_up;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[1].f = temp2;
	}
label_2:;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_down;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_down;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[1].f = temp2;
	}
label_3:;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_checked;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_checked;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[1].f = temp2;
	}
label_4:;
	{
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_Button_getMinWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:getMinWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(276);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Button_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_getPrefWidth_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_Button_getMinHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:getMinHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(281);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Button_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_getPrefHeight_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_arc_scene_ui_Button_lambda$childrenPressed$0_arc_math_geom_Vec2_Array1_boolean_arc_scene_Element(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button:lambda$childrenPressed$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Button(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(159);
	sp[0].o = frame[2].o;
	sp[1].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_mouseX_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Input_mouseX_R_int])(ctx, sp[2].o);
	jfloat temp1 = jfloat(temp0);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_input;
	jint temp2 = (jint)((func_arc_Input_mouseY_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Input_mouseY_R_int])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp1, (jfloat(temp2)));
	sp[0].o = (jobject)((func_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(160);
	if ((isInstance(ctx, (frame[2].o), &class_arc_scene_ui_Button)) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_Button_getClickListener_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_Button, (frame[2].o))))->vtable)[VTABLE_arc_scene_ui_Button_getClickListener_R_arc_scene_event_ClickListener])(ctx, (checkCast(ctx, &class_arc_scene_ui_Button, (frame[2].o))));
	jint temp0 = (jint)((func_arc_scene_event_ClickListener_isOver_arc_scene_Element_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_ClickListener_isOver_arc_scene_Element_float_float_R_boolean])(ctx, sp[0].o, (frame[2].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(161);
	ARRAY_ACCESS(jbyte, (frame[1].o), (jint(0))) = (jint(1));
	}
label_2:;
	LINE_NUMBER(163);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_Button[] {
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
	(void *) M_arc_scene_ui_Button_draw,
	(void *) M_arc_scene_ui_Button_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_hit_float_float_boolean_R_arc_scene_Element,
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
	(void *) M_arc_scene_ui_Button_getMinWidth_R_float,
	(void *) M_arc_scene_ui_Button_getMinHeight_R_float,
	(void *) M_arc_scene_ui_Button_getPrefWidth_R_float,
	(void *) M_arc_scene_ui_Button_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_boolean,
	(void *) M_arc_scene_ui_layout_WidgetGroup_validate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_needsLayout_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_invalidate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_invalidateHierarchy,
	(void *) M_arc_scene_ui_layout_WidgetGroup_pack,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setFillParent_boolean,
	(void *) M_arc_scene_ui_layout_Table_layout,
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
	(void *) M_arc_scene_ui_layout_WidgetGroup_childrenChanged,
	(void *) M_arc_scene_Group_forEach_arc_func_Cons,
	(void *) M_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element,
	(void *) M_arc_scene_Group_fill_arc_func_Cons,
	(void *) M_arc_scene_Group_fill_arc_scene_style_Drawable_arc_func_Cons,
	(void *) M_arc_scene_Group_addChild_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildAt_int_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildBefore_arc_scene_Element_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildAfter_arc_scene_Element_arc_scene_Element,
	(void *) M_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_boolean_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_clearChildren,
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
	(void *) M_arc_scene_ui_layout_Table_obtainCell_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_fill_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_drawBackground_float_float,
	(void *) M_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_getBackground_R_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_layout_Table_setBackground_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_layout_Table_getClip_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_setClip_boolean,
	(void *) M_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_Array1_arc_scene_Element,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_func_Cons_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_wrapTable_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_int_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacer_arc_func_Floatp_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacerX_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacerY_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_imageDraw_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_float_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_area_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonRow_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_float_boolean_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_reset,
	(void *) M_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_endRow,
	(void *) M_arc_scene_ui_layout_Table_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq,
	(void *) M_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_margin_float_float_float_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_align_int_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_center_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_getMarginTop_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginLeft_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginBottom_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginRight_R_float,
	(void *) M_arc_scene_ui_layout_Table_getAlign_R_int,
	(void *) M_arc_scene_ui_layout_Table_getRow_float_R_int,
	(void *) M_arc_scene_ui_layout_Table_setRound_boolean,
	(void *) M_arc_scene_ui_layout_Table_getRows_R_int,
	(void *) M_arc_scene_ui_layout_Table_getColumns_R_int,
	(void *) M_arc_scene_ui_layout_Table_getRowHeight_int_R_float,
	(void *) M_arc_scene_ui_layout_Table_getColumnWidth_int_R_float,
	(void *) M_arc_scene_ui_layout_Table_ensureSize_Array1_float_int_R_Array1_float,
	(void *) M_arc_scene_ui_layout_Table_computeSize,
	(void *) M_arc_scene_ui_layout_Table_layout_float_float_float_float,
	(void *) M_arc_scene_ui_Button_isDisabled_R_boolean,
	(void *) M_arc_scene_ui_Button_setDisabled_boolean,
	(void *) M_arc_scene_ui_Button_initialize,
	(void *) M_arc_scene_ui_Button_setChecked_boolean_boolean,
	(void *) M_arc_scene_ui_Button_toggle,
	(void *) M_arc_scene_ui_Button_isChecked_R_boolean,
	(void *) M_arc_scene_ui_Button_setChecked_boolean,
	(void *) M_arc_scene_ui_Button_isPressed_R_boolean,
	(void *) M_arc_scene_ui_Button_isOver_R_boolean,
	(void *) M_arc_scene_ui_Button_getClickListener_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_ui_Button_setDisabled_arc_func_Boolp,
	(void *) M_arc_scene_ui_Button_childrenPressed_R_boolean,
	(void *) M_arc_scene_ui_Button_setProgrammaticChangeEvents_boolean,
	(void *) M_arc_scene_ui_Button_getStyle_R_arc_scene_ui_Button$ButtonStyle,
	(void *) M_arc_scene_ui_Button_setStyle_arc_scene_ui_Button$ButtonStyle,
	(void *) M_arc_scene_ui_Button_getButtonGroup_R_arc_scene_ui_ButtonGroup,
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
	{ "obtainCell", "()Larc/scene/ui/layout/Cell;" },
	{ "fill", "()Larc/scene/ui/layout/Table;" },
	{ "drawBackground", "(FF)V" },
	{ "background", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Table;" },
	{ "getBackground", "()Larc/scene/style/Drawable;" },
	{ "setBackground", "(Larc/scene/style/Drawable;)V" },
	{ "getClip", "()Z" },
	{ "setClip", "(Z)V" },
	{ "add", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "add", "([Larc/scene/Element;)V" },
	{ "collapser", "(Larc/func/Cons;Larc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/scene/ui/layout/Table;Larc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/func/Cons;ZLarc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/scene/ui/layout/Table;ZLarc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "table", "()Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "wrapTable", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;ILarc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "label", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "labelWrap", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "labelWrap", "(Ljava/lang/String;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/ui/ScrollPane$ScrollPaneStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/ui/ScrollPane$ScrollPaneStyle;Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/scene/ui/Label$LabelStyle;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/graphics/Color;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/scene/ui/Label$LabelStyle;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/graphics/Color;)Larc/scene/ui/layout/Cell;" },
	{ "add", "()Larc/scene/ui/layout/Cell;" },
	{ "stack", "([Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "spacer", "(Larc/func/Floatp;Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "spacerX", "(Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "spacerY", "(Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "imageDraw", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "image", "()Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/scene/style/Drawable;Larc/graphics/Color;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/graphics/g2d/TextureRegion;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;Larc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;ZLarc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;FZLarc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/func/Cons;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/func/Cons;Larc/scene/ui/Button$ButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/ui/TextButton$TextButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Larc/scene/ui/ImageButton$ImageButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Larc/scene/ui/ImageButton$ImageButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "area", "(Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "area", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldFilter;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "rect", "(Larc/scene/ui/layout/Table$DrawRect;)Larc/scene/ui/layout/Cell;" },
	{ "buttonRow", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFFLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFFZLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "reset", "()V" },
	{ "row", "()Larc/scene/ui/layout/Table;" },
	{ "endRow", "()V" },
	{ "getCell", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "getCells", "()Larc/struct/Seq;" },
	{ "defaults", "()Larc/scene/ui/layout/Cell;" },
	{ "margin", "(F)Larc/scene/ui/layout/Table;" },
	{ "margin", "(FFFF)Larc/scene/ui/layout/Table;" },
	{ "marginTop", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginLeft", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginBottom", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginRight", "(F)Larc/scene/ui/layout/Table;" },
	{ "align", "(I)Larc/scene/ui/layout/Table;" },
	{ "center", "()Larc/scene/ui/layout/Table;" },
	{ "top", "()Larc/scene/ui/layout/Table;" },
	{ "left", "()Larc/scene/ui/layout/Table;" },
	{ "bottom", "()Larc/scene/ui/layout/Table;" },
	{ "right", "()Larc/scene/ui/layout/Table;" },
	{ "getMarginTop", "()F" },
	{ "getMarginLeft", "()F" },
	{ "getMarginBottom", "()F" },
	{ "getMarginRight", "()F" },
	{ "getAlign", "()I" },
	{ "getRow", "(F)I" },
	{ "setRound", "(Z)V" },
	{ "getRows", "()I" },
	{ "getColumns", "()I" },
	{ "getRowHeight", "(I)F" },
	{ "getColumnWidth", "(I)F" },
	{ "ensureSize", "([FI)[F" },
	{ "computeSize", "()V" },
	{ "layout", "(FFFF)V" },
	{ "isDisabled", "()Z" },
	{ "setDisabled", "(Z)V" },
	{ "initialize", "()V" },
	{ "setChecked", "(ZZ)V" },
	{ "toggle", "()V" },
	{ "isChecked", "()Z" },
	{ "setChecked", "(Z)V" },
	{ "isPressed", "()Z" },
	{ "isOver", "()Z" },
	{ "getClickListener", "()Larc/scene/event/ClickListener;" },
	{ "setDisabled", "(Larc/func/Boolp;)V" },
	{ "childrenPressed", "()Z" },
	{ "setProgrammaticChangeEvents", "(Z)V" },
	{ "getStyle", "()Larc/scene/ui/Button$ButtonStyle;" },
	{ "setStyle", "(Larc/scene/ui/Button$ButtonStyle;)V" },
	{ "getButtonGroup", "()Larc/scene/ui/ButtonGroup;" },
};

static jclass interfaces[] { &class_arc_scene_utils_Disableable, };

static jclass innerClasses[] {
	&class_arc_scene_ui_Button$ButtonStyle,
};

static FieldMetadata fields[] {
	{ "isChecked", &class_boolean, offsetof(arc_scene_ui_Button, F_isChecked), "Z", 0 },
	{ "isDisabled", &class_boolean, offsetof(arc_scene_ui_Button, F_isDisabled), "Z", 0 },
	{ "buttonGroup", &class_arc_scene_ui_ButtonGroup, offsetof(arc_scene_ui_Button, F_buttonGroup), "Larc/scene/ui/ButtonGroup;", 0 },
	{ "disabledProvider", &class_arc_func_Boolp, offsetof(arc_scene_ui_Button, F_disabledProvider), "Larc/func/Boolp;", 0 },
	{ "style", &class_arc_scene_ui_Button$ButtonStyle, offsetof(arc_scene_ui_Button, F_style), "Larc/scene/ui/Button$ButtonStyle;", 2 },
	{ "clickListener", &class_arc_scene_event_ClickListener, offsetof(arc_scene_ui_Button, F_clickListener), "Larc/scene/event/ClickListener;", 2 },
	{ "programmaticChangeEvents", &class_boolean, offsetof(arc_scene_ui_Button, F_programmaticChangeEvents), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_Button_arc_scene_ui_Button$ButtonStyle, 0, "(Larc/scene/ui/Button$ButtonStyle;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_Button, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_Button_arc_scene_style_Drawable, 0, "(Larc/scene/style/Drawable;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_Button_arc_scene_style_Drawable_arc_scene_style_Drawable, 0, "(Larc/scene/style/Drawable;Larc/scene/style/Drawable;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_Button_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable, 0, "(Larc/scene/style/Drawable;Larc/scene/style/Drawable;Larc/scene/style/Drawable;)V", 1 },
	{ "act", (intptr_t) M_arc_scene_ui_Button_act_float, VTABLE_arc_scene_ui_Button_act_float, "(F)V", 1 },
	{ "initialize", (intptr_t) M_arc_scene_ui_Button_initialize, VTABLE_arc_scene_ui_Button_initialize, "()V", 2 },
	{ "setChecked", (intptr_t) M_arc_scene_ui_Button_setChecked_boolean_boolean, VTABLE_arc_scene_ui_Button_setChecked_boolean_boolean, "(ZZ)V", 0 },
	{ "toggle", (intptr_t) M_arc_scene_ui_Button_toggle, VTABLE_arc_scene_ui_Button_toggle, "()V", 1 },
	{ "isChecked", (intptr_t) M_arc_scene_ui_Button_isChecked_R_boolean, VTABLE_arc_scene_ui_Button_isChecked_R_boolean, "()Z", 1 },
	{ "setChecked", (intptr_t) M_arc_scene_ui_Button_setChecked_boolean, VTABLE_arc_scene_ui_Button_setChecked_boolean, "(Z)V", 1 },
	{ "isPressed", (intptr_t) M_arc_scene_ui_Button_isPressed_R_boolean, VTABLE_arc_scene_ui_Button_isPressed_R_boolean, "()Z", 1 },
	{ "isOver", (intptr_t) M_arc_scene_ui_Button_isOver_R_boolean, VTABLE_arc_scene_ui_Button_isOver_R_boolean, "()Z", 1 },
	{ "getClickListener", (intptr_t) M_arc_scene_ui_Button_getClickListener_R_arc_scene_event_ClickListener, VTABLE_arc_scene_ui_Button_getClickListener_R_arc_scene_event_ClickListener, "()Larc/scene/event/ClickListener;", 1 },
	{ "isDisabled", (intptr_t) M_arc_scene_ui_Button_isDisabled_R_boolean, VTABLE_arc_scene_ui_Button_isDisabled_R_boolean, "()Z", 1 },
	{ "setDisabled", (intptr_t) M_arc_scene_ui_Button_setDisabled_arc_func_Boolp, VTABLE_arc_scene_ui_Button_setDisabled_arc_func_Boolp, "(Larc/func/Boolp;)V", 1 },
	{ "setDisabled", (intptr_t) M_arc_scene_ui_Button_setDisabled_boolean, VTABLE_arc_scene_ui_Button_setDisabled_boolean, "(Z)V", 1 },
	{ "childrenPressed", (intptr_t) M_arc_scene_ui_Button_childrenPressed_R_boolean, VTABLE_arc_scene_ui_Button_childrenPressed_R_boolean, "()Z", 1 },
	{ "setProgrammaticChangeEvents", (intptr_t) M_arc_scene_ui_Button_setProgrammaticChangeEvents_boolean, VTABLE_arc_scene_ui_Button_setProgrammaticChangeEvents_boolean, "(Z)V", 1 },
	{ "getStyle", (intptr_t) M_arc_scene_ui_Button_getStyle_R_arc_scene_ui_Button$ButtonStyle, VTABLE_arc_scene_ui_Button_getStyle_R_arc_scene_ui_Button$ButtonStyle, "()Larc/scene/ui/Button$ButtonStyle;", 1 },
	{ "setStyle", (intptr_t) M_arc_scene_ui_Button_setStyle_arc_scene_ui_Button$ButtonStyle, VTABLE_arc_scene_ui_Button_setStyle_arc_scene_ui_Button$ButtonStyle, "(Larc/scene/ui/Button$ButtonStyle;)V", 1 },
	{ "getButtonGroup", (intptr_t) M_arc_scene_ui_Button_getButtonGroup_R_arc_scene_ui_ButtonGroup, VTABLE_arc_scene_ui_Button_getButtonGroup_R_arc_scene_ui_ButtonGroup, "()Larc/scene/ui/ButtonGroup;", 1 },
	{ "draw", (intptr_t) M_arc_scene_ui_Button_draw, VTABLE_arc_scene_ui_Button_draw, "()V", 1 },
	{ "getPrefWidth", (intptr_t) M_arc_scene_ui_Button_getPrefWidth_R_float, VTABLE_arc_scene_ui_Button_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_arc_scene_ui_Button_getPrefHeight_R_float, VTABLE_arc_scene_ui_Button_getPrefHeight_R_float, "()F", 1 },
	{ "getMinWidth", (intptr_t) M_arc_scene_ui_Button_getMinWidth_R_float, VTABLE_arc_scene_ui_Button_getMinWidth_R_float, "()F", 1 },
	{ "getMinHeight", (intptr_t) M_arc_scene_ui_Button_getMinHeight_R_float, VTABLE_arc_scene_ui_Button_getMinHeight_R_float, "()F", 1 },
	{ "lambda$childrenPressed$0", (intptr_t) SM_arc_scene_ui_Button_lambda$childrenPressed$0_arc_math_geom_Vec2_Array1_boolean_arc_scene_Element, 0, "(Larc/math/geom/Vec2;[ZLarc/scene/Element;)V", 4106 },
};

Class class_arc_scene_ui_Button{
		.nativeName = (intptr_t) "arc/scene/ui/Button",
		.parentClass = (intptr_t) &class_arc_scene_ui_layout_Table,
		.size = sizeof(arc_scene_ui_Button),
		.classVtable = (intptr_t) vtable_arc_scene_ui_Button,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_Button,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_Button,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 28,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 271,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_Button = registerClass(&class_arc_scene_ui_Button);

}
