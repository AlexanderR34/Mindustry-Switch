#include "arc/scene/ui/Dialog.h"
#include "arc/func/Prov.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/input/KeyCode.h"
#include "arc/scene/actions/SequenceAction.h"
#include "arc/scene/event/Touchable.h"
#include "arc/util/pooling/Pools.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/math/Mathf.h"
#include "arc/scene/ui/Dialog_7.h"
#include "arc/Core.h"
#include "arc/scene/ui/Dialog_5.h"
#include "arc/scene/ui/Dialog_6.h"
#include "arc/scene/ui/Dialog_3.h"
#include "arc/scene/ui/Dialog_4.h"
#include "arc/math/Interp.h"
#include "arc/scene/ui/Dialog_1.h"
#include "arc/scene/ui/Dialog_2.h"
#include "arc/scene/event/FocusListener.h"
#include "arc/scene/ui/Label.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "arc/math/geom/Vec2.h"
#include "arc/scene/ui/Dialog_invoke_arc_func_Cons_1.h"
#include "arc/scene/ui/Dialog_invoke_arc_func_Cons_0.h"
#include "arc/scene/Action.h"
#include "arc/Application.h"
#include "arc/scene/ui/Dialog_DialogStyle.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "arc/scene/event/SceneEvent.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/Dialog_invoke_arc_func_Prov_0.h"
#include "java/lang/Math.h"
#include "arc/scene/ui/Dialog_invoke_arc_func_Prov_2.h"
#include "arc/scene/ui/Dialog_invoke_arc_func_Prov_1.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/scene/event/SceneResizeEvent.h"
#include "arc/scene/actions/RemoveListenerAction.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/actions/Actions.h"
#include "arc/scene/ui/Dialog_invoke_java_lang_Runnable_3.h"
#include "arc/scene/ui/Dialog_invoke_java_lang_Runnable_2.h"
#include "arc/scene/ui/Dialog_invoke_java_lang_Runnable_1.h"
#include "arc/scene/event/VisibilityEvent.h"
#include "arc/scene/Element.h"
#include "arc/scene/ui/Dialog_invoke_java_lang_Runnable_0.h"
#include "arc/scene/ui/ScrollPane.h"
#include "arc/scene/actions/AlphaAction.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "arc/scene/event/EventListener.h"
#include "java/lang/Class.h"
#include "arc/scene/event/InputListener.h"
#include "arc/struct/SnapshotSeq.h"
#include "arc/scene/actions/RemoveActorAction.h"

extern "C" {

jobject SF_arc_scene_ui_Dialog_defaultShowAction;
jobject SF_arc_scene_ui_Dialog_defaultHideAction;
jobject SF_arc_scene_ui_Dialog_tmpPosition;
jobject SF_arc_scene_ui_Dialog_tmpSize;
jint SF_arc_scene_ui_Dialog_MOVE;

void mark_arc_scene_ui_Dialog(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_scene_ui_Dialog_defaultShowAction)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_ui_Dialog_defaultShowAction)->clazz)->markFunction)((jobject) SF_arc_scene_ui_Dialog_defaultShowAction, mark, depth + 1);
		if (SF_arc_scene_ui_Dialog_defaultHideAction)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_ui_Dialog_defaultHideAction)->clazz)->markFunction)((jobject) SF_arc_scene_ui_Dialog_defaultHideAction, mark, depth + 1);
		if (SF_arc_scene_ui_Dialog_tmpPosition)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_ui_Dialog_tmpPosition)->clazz)->markFunction)((jobject) SF_arc_scene_ui_Dialog_tmpPosition, mark, depth + 1);
		if (SF_arc_scene_ui_Dialog_tmpSize)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_ui_Dialog_tmpSize)->clazz)->markFunction)((jobject) SF_arc_scene_ui_Dialog_tmpSize, mark, depth + 1);
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
	auto self = (arc_scene_ui_Dialog *) object;
	if (self->F_ignoreTouchDown)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ignoreTouchDown)->clazz)->markFunction)((jobject) self->F_ignoreTouchDown, mark, depth + 1);
	if (self->F_style)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_style)->clazz)->markFunction)((jobject) self->F_style, mark, depth + 1);
	if (self->F_previousKeyboardFocus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_previousKeyboardFocus)->clazz)->markFunction)((jobject) self->F_previousKeyboardFocus, mark, depth + 1);
	if (self->F_previousScrollFocus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_previousScrollFocus)->clazz)->markFunction)((jobject) self->F_previousScrollFocus, mark, depth + 1);
	if (self->F_focusListener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_focusListener)->clazz)->markFunction)((jobject) self->F_focusListener, mark, depth + 1);
	if (self->F_cont)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cont)->clazz)->markFunction)((jobject) self->F_cont, mark, depth + 1);
	if (self->F_buttons)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buttons)->clazz)->markFunction)((jobject) self->F_buttons, mark, depth + 1);
	if (self->F_title)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_title)->clazz)->markFunction)((jobject) self->F_title, mark, depth + 1);
	if (self->F_titleTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_titleTable)->clazz)->markFunction)((jobject) self->F_titleTable, mark, depth + 1);
}

void init_arc_scene_ui_Dialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Dialog(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(62);
	init_arc_scene_ui_Dialog_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_Dialog_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Dialog(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_scene;
	sp[2].o = (jobject)((func_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object])(ctx, sp[2].o, (((jobject) &class_arc_scene_ui_Dialog$DialogStyle)));
	init_arc_scene_ui_Dialog_java_lang_String_arc_scene_ui_Dialog$DialogStyle(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_arc_scene_ui_Dialog$DialogStyle, sp[2].o)));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_Dialog_java_lang_String_arc_scene_ui_Dialog$DialogStyle(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Dialog(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(69);
	init_arc_scene_ui_layout_Table(ctx, (frame[0].o));
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Dialog$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Dialog$1);
	init_arc_scene_ui_Dialog$1_arc_scene_ui_Dialog(ctx, sp[1].o, (frame[0].o));
	((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_ignoreTouchDown = (jref) sp[1].o;
	LINE_NUMBER(47);
	((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_isMovable = (jint(0));
	((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_isModal = (jint(1));
	((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_isResizable = (jint(0));
	((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_center = (jint(1));
	LINE_NUMBER(48);
	((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_resizeBorder = (8);
	LINE_NUMBER(49);
	((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_keepWithinStage = (jint(1));
	LINE_NUMBER(52);
	((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_lastWidth = (jfloat(-1.0f));
	((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_lastHeight = (jfloat(-1.0f));
	LINE_NUMBER(70);
	if ((frame[1].o) != nullptr) goto label_7;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"title cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(72);
	((func_arc_scene_ui_Dialog_setClip_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_setClip_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Label(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Label);
	sp[2].o = frame[1].o;
	clinit_arc_scene_ui_Label$LabelStyle(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_scene_ui_Label$LabelStyle);
	sp[4].o = (jobject)((arc_scene_ui_Dialog$DialogStyle *) NULL_CHECK((frame[2].o)))->F_titleFont;
	sp[5].o = (jobject)((arc_scene_ui_Dialog$DialogStyle *) NULL_CHECK((frame[2].o)))->F_titleFontColor;
	init_arc_scene_ui_Label$LabelStyle_arc_graphics_g2d_Font_arc_graphics_Color(ctx, sp[3].o, sp[4].o, sp[5].o);
	init_arc_scene_ui_Label_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle(ctx, sp[1].o, sp[2].o, sp[3].o);
	((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_title = (jref) sp[1].o;
	LINE_NUMBER(75);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_title;
	((func_arc_scene_ui_Label_setEllipsis_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setEllipsis_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_titleTable = (jref) sp[1].o;
	LINE_NUMBER(78);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_titleTable;
	sp[1].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_title;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_titleTable;
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(81);
	((func_arc_scene_ui_Dialog_setStyle_arc_scene_ui_Dialog$DialogStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_setStyle_arc_scene_ui_Dialog$DialogStyle])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(82);
	((func_arc_scene_ui_Dialog_setWidth_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_setWidth_float])(ctx, (frame[0].o), (jfloat(150.0f)));
	LINE_NUMBER(83);
	((func_arc_scene_ui_Dialog_setHeight_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_setHeight_float])(ctx, (frame[0].o), (jfloat(150.0f)));
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Dialog$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Dialog$2);
	init_arc_scene_ui_Dialog$2_arc_scene_ui_Dialog(ctx, sp[1].o, (frame[0].o));
	jint temp0 = (jint)((func_arc_scene_ui_Dialog_addCaptureListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_addCaptureListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Dialog$3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Dialog$3);
	init_arc_scene_ui_Dialog$3_arc_scene_ui_Dialog(ctx, sp[1].o, (frame[0].o));
	jint temp1 = (jint)((func_arc_scene_ui_Dialog_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(206);
	((func_arc_scene_ui_Dialog_setOrigin_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_setOrigin_int])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(208);
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	LINE_NUMBER(209);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[2].o);
	((arc_scene_ui_Dialog *) NULL_CHECK(sp[1].o))->F_cont = (jref) sp[2].o;
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expand_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expand_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(210);
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_row_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	LINE_NUMBER(211);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[2].o);
	((arc_scene_ui_Dialog *) NULL_CHECK(sp[1].o))->F_buttons = (jref) sp[2].o;
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(213);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	LINE_NUMBER(214);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Dialog$4(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Dialog$4);
	init_arc_scene_ui_Dialog$4_arc_scene_ui_Dialog(ctx, sp[1].o, (frame[0].o));
	((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_focusListener = (jref) sp[1].o;
	LINE_NUMBER(239);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_Dialog_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (arc_scene_ui_Dialog_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_arc_scene_ui_Dialog_invoke_java_lang_Runnable_0);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_Dialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_Dialog_getStyle_R_arc_scene_ui_Dialog$DialogStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_style;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_setStyle_arc_scene_ui_Dialog$DialogStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:setStyle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(251);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"style cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(252);
	((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_style = (jref) (frame[1].o);
	LINE_NUMBER(253);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_Dialog$DialogStyle *) NULL_CHECK((frame[1].o)))->F_background;
	((func_arc_scene_ui_Dialog_setBackground_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_setBackground_arc_scene_style_Drawable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(255);
	((func_arc_scene_ui_Dialog_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_keepWithinStage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:keepWithinStage", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(259);
	if (((jint)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_keepWithinStage) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(260);
	((func_arc_scene_ui_Dialog_keepInStage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_keepInStage])(ctx, (frame[0].o));
	LINE_NUMBER(261);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_act_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:act", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(265);
	M_arc_scene_Group_act_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(267);
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_getScene_R_arc_scene_Scene])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(268);
	((func_arc_scene_ui_Dialog_keepWithinStage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_keepWithinStage])(ctx, (frame[0].o));
	LINE_NUMBER(269);
	if (((jint)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_center) == 0) goto label_5;
	}
	{
	if (((jint)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_isMovable) != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_getActions_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_getActions_R_arc_struct_Seq])(ctx, (frame[0].o));
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_5;
	}
	{
	LINE_NUMBER(270);
	((func_arc_scene_ui_Dialog_centerWindow) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_centerWindow])(ctx, (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(274);
	if ((floatCompare(((jfloat)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_lastWidth), (jfloat(0)), -1)) < 0) goto label_7;
	}
	{
	if ((floatCompare(((jfloat)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_lastHeight), (jfloat(0)), -1)) < 0) goto label_7;
	}
	{
	LINE_NUMBER(275);
	jfloat temp0 = (jfloat)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_lastWidth;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_root;
	jfloat temp1 = (jfloat)((func_arc_scene_Group_getWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_getWidth_R_float])(ctx, sp[0].o);
	jint temp2 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, temp0, temp1);
	if (temp2 == 0) goto label_9;
	}
	{
	jfloat temp0 = (jfloat)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_lastHeight;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_root;
	jfloat temp1 = (jfloat)((func_arc_scene_Group_getHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_getHeight_R_float])(ctx, sp[0].o);
	jint temp2 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, temp0, temp1);
	if (temp2 != 0) goto label_7;
	}
label_9:;
	{
	LINE_NUMBER(276);
	sp[0].o = ((jobject) &class_arc_scene_event_SceneResizeEvent);
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_Dialog_invoke_arc_func_Prov_0(ctx);
		auto proxy = (arc_scene_ui_Dialog_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_arc_scene_ui_Dialog_invoke_arc_func_Prov_0);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_event_SceneResizeEvent, sp[0].o));
	LINE_NUMBER(277);
	jint temp0 = (jint)((func_arc_scene_ui_Dialog_fire_arc_scene_event_SceneEvent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_fire_arc_scene_event_SceneEvent_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(278);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[2].o));
	}
label_7:;
	{
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_root;
	jfloat temp0 = (jfloat)((func_arc_scene_Group_getWidth_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Group_getWidth_R_float])(ctx, sp[1].o);
	((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_lastWidth = temp0;
	LINE_NUMBER(283);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_root;
	jfloat temp1 = (jfloat)((func_arc_scene_Group_getHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Group_getHeight_R_float])(ctx, sp[1].o);
	((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_lastHeight = temp1;
	}
label_2:;
	LINE_NUMBER(285);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:draw", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_getScene_R_arc_scene_Scene])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(291);
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, (frame[1].o));
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(293);
	frame[2].i = (jint(-1));
	LINE_NUMBER(294);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_root;
	sp[0].o = (jobject)((func_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(295);
	frame[4].i = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size) - (jint(1)));
	}
label_6:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_7;
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[4].i));
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_Dialog)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(297);
	frame[2].i = (frame[4].i);
	LINE_NUMBER(298);
	goto label_7;
	}
label_9:;
	{
	LINE_NUMBER(295);
	INST_IINC(4, -1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(301);
	sp[0].o = frame[1].o;
	sp += 1;
	if ((frame[2].i) != (jint(-1))) goto label_12;
	}
	INST_ALOAD(0);
	goto label_13;
label_12:;
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[2].i));
	sp[0].o = checkCast(ctx, &class_arc_scene_Element, sp[0].o);
	sp += 1;
	}
label_13:;
	POP_N(2); // Pop method args
	sp->i = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	sp++;
	INST_POP();
label_2:;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Dialog$DialogStyle *) NULL_CHECK(sp[0].o))->F_stageBackground;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(305);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Dialog(ctx);
	sp[1].o = (jobject)SF_arc_scene_ui_Dialog_tmpPosition;
	sp[2].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_translation;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_translation;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y));
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Dialog(ctx);
	sp[1].o = (jobject)SF_arc_scene_ui_Dialog_tmpSize;
	jfloat temp1 = (jfloat)((func_arc_scene_Scene_getWidth_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Scene_getWidth_R_float])(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)((func_arc_scene_Scene_getHeight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Scene_getHeight_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp1, temp2);
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(307);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_arc_scene_ui_Dialog(ctx);
	sp[1].o = (jobject)SF_arc_scene_ui_Dialog_tmpPosition;
	jfloat temp4 = temp3 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp5 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_arc_scene_ui_Dialog(ctx);
	sp[1].o = (jobject)SF_arc_scene_ui_Dialog_tmpPosition;
	jfloat temp6 = temp5 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	jfloat temp7 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_arc_scene_ui_Dialog(ctx);
	sp[1].o = (jobject)SF_arc_scene_ui_Dialog_tmpSize;
	jfloat temp8 = temp7 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp9 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_arc_scene_ui_Dialog(ctx);
	sp[1].o = (jobject)SF_arc_scene_ui_Dialog_tmpSize;
	((func_arc_scene_ui_Dialog_drawStageBackground_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_drawStageBackground_float_float_float_float])(ctx, sp[0].o, temp4, temp6, temp8, (temp9 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)));
	}
label_14:;
	{
	LINE_NUMBER(310);
	M_arc_scene_ui_layout_Table_draw(ctx, (frame[0].o));
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_drawStageBackground_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:drawStageBackground", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	frame[5].o = sp[0].o;
	LINE_NUMBER(315);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[5].o)))->F_r), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[5].o)))->F_g), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[5].o)))->F_b), (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[5].o)))->F_a) * ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha)));
	LINE_NUMBER(316);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Dialog$DialogStyle *) NULL_CHECK(sp[0].o))->F_stageBackground;
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_Dialog_hit_float_float_boolean_R_arc_scene_Element(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:hit", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)M_arc_scene_ui_layout_Table_hit_float_float_boolean_R_arc_scene_Element(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(322);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	{
	if (((jint)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_isModal) == 0) goto label_2;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_3;
	{
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_touchable;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_3:;
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(323);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_centerWindow(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:centerWindow", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(328);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	jfloat temp0 = (jfloat)((func_arc_scene_Scene_getWidth_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Scene_getWidth_R_float])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	jfloat temp1 = temp0 - ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginLeft);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	jfloat temp2 = temp1 - ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginRight);
	jfloat temp3 = (jfloat)((func_arc_scene_ui_Dialog_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_getWidth_R_float])(ctx, (frame[0].o));
	jint temp4 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((temp2 - temp3) / (jfloat(2))));
	jfloat temp5 = jfloat(temp4);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	jfloat temp6 = (jfloat)((func_arc_scene_Scene_getHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Scene_getHeight_R_float])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	jfloat temp7 = temp6 - ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginTop);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	jfloat temp8 = temp7 - ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginBottom);
	jfloat temp9 = (jfloat)((func_arc_scene_ui_Dialog_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_getHeight_R_float])(ctx, (frame[0].o));
	jint temp10 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((temp8 - temp9) / (jfloat(2))));
	((func_arc_scene_ui_Dialog_setPosition_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_setPosition_float_float])(ctx, sp[0].o, temp5, (jfloat(temp10)));
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Dialog_isMovable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:isMovable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_isMovable);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_setMovable_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:setMovable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(336);
	((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_isMovable = (frame[1].i);
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Dialog_isModal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:isModal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(340);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_isModal);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_setModal_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:setModal", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(344);
	((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_isModal = (frame[1].i);
	LINE_NUMBER(345);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_setKeepWithinStage_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:setKeepWithinStage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(348);
	((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_keepWithinStage = (frame[1].i);
	LINE_NUMBER(349);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Dialog_isCentered_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:isCentered", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_center);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_setCentered_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:setCentered", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(356);
	((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_center = (frame[1].i);
	LINE_NUMBER(357);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Dialog_isResizable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:isResizable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_isResizable);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_setResizable_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:setResizable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(364);
	((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_isResizable = (frame[1].i);
	LINE_NUMBER(365);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_setResizeBorder_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:setResizeBorder", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(368);
	((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_resizeBorder = (frame[1].i);
	LINE_NUMBER(369);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Dialog_isDragging_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:isDragging", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(372);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_dragging);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_updateScrollFocus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:updateScrollFocus", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	frame[1].o = sp[0].o;
	LINE_NUMBER(378);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_Dialog_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (arc_scene_ui_Dialog_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_arc_scene_ui_Dialog_invoke_java_lang_Runnable_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(386);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_scene_ui_Dialog_setHideAction_arc_func_Prov(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:setHideAction", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Dialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(389);
	clinit_arc_scene_ui_Dialog(ctx);
	SF_arc_scene_ui_Dialog_defaultHideAction = (frame[0].o);
	LINE_NUMBER(390);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_scene_ui_Dialog_setShowAction_arc_func_Prov(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:setShowAction", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Dialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(393);
	clinit_arc_scene_ui_Dialog(ctx);
	SF_arc_scene_ui_Dialog_defaultShowAction = (frame[0].o);
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_setScene_arc_scene_Scene(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:setScene", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(398);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(399);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_focusListener;
	jint temp0 = (jint)((func_arc_scene_ui_Dialog_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(401);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_focusListener;
	jint temp0 = (jint)((func_arc_scene_ui_Dialog_removeListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_removeListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(402);
	M_arc_scene_Group_setScene_arc_scene_Scene(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_shown_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:shown", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(407);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Dialog$5(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Dialog$5);
	init_arc_scene_ui_Dialog$5_arc_scene_ui_Dialog_java_lang_Runnable(ctx, sp[1].o, (frame[0].o), (frame[1].o));
	jint temp0 = (jint)((func_arc_scene_ui_Dialog_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(414);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_hidden_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:hidden", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(418);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Dialog$6(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Dialog$6);
	init_arc_scene_ui_Dialog$6_arc_scene_ui_Dialog_java_lang_Runnable(ctx, sp[1].o, (frame[0].o), (frame[1].o));
	jint temp0 = (jint)((func_arc_scene_ui_Dialog_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_resizedShown_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:resizedShown", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(429);
	((func_arc_scene_ui_Dialog_resized_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_resized_java_lang_Runnable])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(430);
	((func_arc_scene_ui_Dialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_shown_java_lang_Runnable])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(431);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_resized_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:resized", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(435);
	((func_arc_scene_ui_Dialog_resized_boolean_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_resized_boolean_java_lang_Runnable])(ctx, (frame[0].o), (jint(0)), (frame[1].o));
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_resized_boolean_java_lang_Runnable(jcontext ctx, jobject self, jbool param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:resized", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(440);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(441);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[2].o)))(ctx, (frame[2].o));
	}
label_1:;
	{
	LINE_NUMBER(443);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Dialog$7(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Dialog$7);
	init_arc_scene_ui_Dialog$7_arc_scene_ui_Dialog_java_lang_Runnable(ctx, sp[1].o, (frame[0].o), (frame[2].o));
	jint temp0 = (jint)((func_arc_scene_ui_Dialog_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(451);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_addCloseButton(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:addCloseButton", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(455);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_closeOnBack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:closeOnBack", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(459);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_Dialog_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (arc_scene_ui_Dialog_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_arc_scene_ui_Dialog_invoke_java_lang_Runnable_2);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_Dialog_closeOnBack_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_closeOnBack_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(460);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_closeOnBack_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:closeOnBack", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(463);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_Dialog_invoke_arc_func_Cons_0(ctx);
		auto proxy = (arc_scene_ui_Dialog_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_arc_scene_ui_Dialog_invoke_arc_func_Cons_0);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_Dialog_keyDown_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_keyDown_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(469);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Dialog_isShown_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:isShown", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(472);
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_getScene_R_arc_scene_Scene])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_1;
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

jobject M_arc_scene_ui_Dialog_show_arc_scene_Scene_arc_scene_Action_R_arc_scene_ui_Dialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:show", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(477);
	((func_arc_scene_ui_Dialog_setOrigin_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_setOrigin_int])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(478);
	((func_arc_scene_ui_Dialog_setClip_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_setClip_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(479);
	((func_arc_scene_ui_Dialog_setTransform_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_setTransform_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(481);
	sp[0].o = frame[0].o;
	clinit_arc_scene_event_VisibilityEvent(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_event_VisibilityEvent);
	init_arc_scene_event_VisibilityEvent_boolean(ctx, sp[1].o, (jint(0)));
	jint temp0 = (jint)((func_arc_scene_ui_Dialog_fire_arc_scene_event_SceneEvent_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_fire_arc_scene_event_SceneEvent_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(483);
	((func_arc_scene_ui_Dialog_clearActions) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_clearActions])(ctx, (frame[0].o));
	LINE_NUMBER(484);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_ignoreTouchDown;
	jint temp1 = (jint)((func_arc_scene_ui_Dialog_removeCaptureListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_removeCaptureListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(486);
	((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_previousKeyboardFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(487);
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(488);
	if ((frame[3].o) == nullptr) goto label_9;
	}
	{
	jint temp0 = (jint)((func_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean])(ctx, (frame[3].o), (frame[0].o));
	if (temp0 != 0) goto label_9;
	}
	{
	((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_previousKeyboardFocus = (jref) (frame[3].o);
	}
label_9:;
	{
	LINE_NUMBER(490);
	((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_previousScrollFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(491);
	sp[0].o = (jobject)((func_arc_scene_Scene_getScrollFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Scene_getScrollFocus_R_arc_scene_Element])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(492);
	if ((frame[3].o) == nullptr) goto label_12;
	}
	{
	jint temp0 = (jint)((func_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean])(ctx, (frame[3].o), (frame[0].o));
	if (temp0 != 0) goto label_12;
	}
	{
	((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_previousScrollFocus = (jref) (frame[3].o);
	}
label_12:;
	{
	LINE_NUMBER(494);
	((func_arc_scene_ui_Dialog_pack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_pack])(ctx, (frame[0].o));
	LINE_NUMBER(495);
	((func_arc_scene_Scene_add_arc_scene_Element) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Scene_add_arc_scene_Element])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(496);
	jint temp0 = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(497);
	jint temp1 = (jint)((func_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(499);
	if ((frame[2].o) == nullptr) goto label_17;
	}
	{
	((func_arc_scene_ui_Dialog_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_addAction_arc_scene_Action])(ctx, (frame[0].o), (frame[2].o));
	}
label_17:;
	{
	LINE_NUMBER(500);
	((func_arc_scene_ui_Dialog_pack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_pack])(ctx, (frame[0].o));
	LINE_NUMBER(502);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_toggle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:toggle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(507);
	jint temp0 = (jint)((func_arc_scene_ui_Dialog_isShown_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_isShown_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(508);
	((func_arc_scene_ui_Dialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_hide])(ctx, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(510);
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(512);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:show", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(515);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_show_arc_scene_Scene_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_show_arc_scene_Scene_R_arc_scene_ui_Dialog])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_Dialog_show_arc_scene_Scene_R_arc_scene_ui_Dialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:show", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(520);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_scene_ui_Dialog(ctx);
	sp[2].o = (jobject)SF_arc_scene_ui_Dialog_defaultShowAction;
	sp[2].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[2].o))(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_show_arc_scene_Scene_arc_scene_Action_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_show_arc_scene_Scene_arc_scene_Action_R_arc_scene_ui_Dialog])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_arc_scene_Action, sp[2].o)));
	LINE_NUMBER(521);
	((func_arc_scene_ui_Dialog_centerWindow) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_centerWindow])(ctx, (frame[0].o));
	LINE_NUMBER(522);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_hide_arc_scene_Action(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:hide", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(527);
	sp[0].o = frame[0].o;
	clinit_arc_scene_event_VisibilityEvent(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_event_VisibilityEvent);
	init_arc_scene_event_VisibilityEvent_boolean(ctx, sp[1].o, (jint(1)));
	jint temp0 = (jint)((func_arc_scene_ui_Dialog_fire_arc_scene_event_SceneEvent_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_fire_arc_scene_event_SceneEvent_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(529);
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_getScene_R_arc_scene_Scene])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(530);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(531);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_focusListener;
	jint temp0 = (jint)((func_arc_scene_ui_Dialog_removeListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_removeListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(532);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_previousKeyboardFocus;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_previousKeyboardFocus;
	sp[0].o = (jobject)((func_arc_scene_Element_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_getScene_R_arc_scene_Scene])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_previousKeyboardFocus;
	if (((jint)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible) != 0) goto label_6;
	}
label_7:;
	{
	((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_previousKeyboardFocus = (jref) (jobject(nullptr));
	}
label_6:;
	{
	LINE_NUMBER(533);
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(534);
	if ((frame[3].o) == nullptr) goto label_9;
	}
	{
	jint temp0 = (jint)((func_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean])(ctx, (frame[3].o), (frame[0].o));
	if (temp0 == 0) goto label_10;
	}
label_9:;
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_previousKeyboardFocus;
	jint temp0 = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_previousScrollFocus;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_previousScrollFocus;
	sp[0].o = (jobject)((func_arc_scene_Element_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_getScene_R_arc_scene_Scene])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_previousScrollFocus;
	if (((jint)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible) != 0) goto label_11;
	}
label_12:;
	{
	((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_previousScrollFocus = (jref) (jobject(nullptr));
	}
label_11:;
	{
	LINE_NUMBER(537);
	sp[0].o = (jobject)((func_arc_scene_Scene_getScrollFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_Scene_getScrollFocus_R_arc_scene_Element])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(538);
	if ((frame[3].o) == nullptr) goto label_14;
	}
	{
	jint temp0 = (jint)((func_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean])(ctx, (frame[3].o), (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
label_14:;
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_previousScrollFocus;
	jint temp0 = (jint)((func_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(540);
	if ((frame[1].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(541);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_ignoreTouchDown;
	jint temp0 = (jint)((func_arc_scene_ui_Dialog_addCaptureListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_addCaptureListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(542);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_ignoreTouchDown;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_removeListener_arc_scene_event_EventListener_boolean_R_arc_scene_actions_RemoveListenerAction(ctx, sp[2].o, (jint(1)));
	sp[3].o = (jobject)SM_arc_scene_actions_Actions_remove_R_arc_scene_actions_RemoveActorAction(ctx);
	sp[1].o = (jobject)SM_arc_scene_actions_Actions_sequence_arc_scene_Action_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_SequenceAction(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_arc_scene_ui_Dialog_addAction_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_addAction_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	goto label_18;
	}
label_15:;
	{
	LINE_NUMBER(544);
	jint temp0 = (jint)((func_arc_scene_ui_Dialog_remove_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_remove_R_boolean])(ctx, (frame[0].o));
	}
label_18:;
	LINE_NUMBER(545);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_hide(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:hide", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(552);
	jint temp0 = (jint)((func_arc_scene_ui_Dialog_isShown_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_isShown_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(553);
	((func_arc_scene_ui_Dialog_setOrigin_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_setOrigin_int])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(554);
	((func_arc_scene_ui_Dialog_setClip_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_setClip_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(555);
	((func_arc_scene_ui_Dialog_setTransform_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Dialog_setTransform_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(557);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Dialog(ctx);
	sp[1].o = (jobject)SF_arc_scene_ui_Dialog_defaultHideAction;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	((func_arc_scene_ui_Dialog_hide_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_hide_arc_scene_Action])(ctx, sp[0].o, (checkCast(ctx, &class_arc_scene_Action, sp[1].o)));
	LINE_NUMBER(558);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_lambda$closeOnBack$1_java_lang_Runnable_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:lambda$closeOnBack$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(464);
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_escape;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_back;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(465);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_Dialog_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (arc_scene_ui_Dialog_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_arc_scene_ui_Dialog_invoke_java_lang_Runnable_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(466);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[1].o)))(ctx, (frame[1].o));
	}
label_2:;
	LINE_NUMBER(468);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_scene_ui_Dialog_lambda$closeOnBack$0(jcontext ctx) {
	FrameInfo frameInfo { "arc/scene/ui/Dialog:lambda$closeOnBack$0", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_arc_scene_ui_Dialog(ctx);
	LINE_NUMBER(459);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog_lambda$updateScrollFocus$0_Array1_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:lambda$updateScrollFocus$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(378);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_Dialog_invoke_arc_func_Cons_1(ctx);
		auto proxy = (arc_scene_ui_Dialog_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_arc_scene_ui_Dialog_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_Dialog_forEach_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_forEach_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_scene_ui_Dialog_lambda$updateScrollFocus$1_Array1_boolean_arc_scene_Element(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:lambda$updateScrollFocus$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Dialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(379);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0)))) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(381);
	if ((isInstance(ctx, (frame[1].o), &class_arc_scene_ui_ScrollPane)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(382);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(383);
	ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0))) = (jint(1));
	}
label_2:;
	LINE_NUMBER(385);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_arc_scene_ui_Dialog_lambda$static$1_R_arc_scene_Action(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:lambda$static$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Dialog(ctx);
	{
	LINE_NUMBER(32);
	jfloat temp0 = jfloat(0.4f);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_fade;
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_fadeOut_float_arc_math_Interp_R_arc_scene_actions_AlphaAction(ctx, temp0, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_ui_Dialog_lambda$static$0_R_arc_scene_Action(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:lambda$static$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Dialog(ctx);
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_alpha_float_R_arc_scene_actions_AlphaAction(ctx, (jfloat(0)));
	jfloat temp0 = jfloat(0.4f);
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_fade;
	sp[1].o = (jobject)SM_arc_scene_actions_Actions_fadeIn_float_arc_math_Interp_R_arc_scene_actions_AlphaAction(ctx, temp0, sp[1].o);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_sequence_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_SequenceAction(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_scene_ui_Dialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_layout_Table(ctx);
	SF_arc_scene_ui_Dialog_MOVE = jint(32);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Dialog(ctx);
	{
	LINE_NUMBER(31);
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_Dialog_invoke_arc_func_Prov_1(ctx);
		auto proxy = (arc_scene_ui_Dialog_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_arc_scene_ui_Dialog_invoke_arc_func_Prov_1);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_scene_ui_Dialog(ctx);
	SF_arc_scene_ui_Dialog_defaultShowAction = sp[0].o;
	LINE_NUMBER(32);
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_Dialog_invoke_arc_func_Prov_2(ctx);
		auto proxy = (arc_scene_ui_Dialog_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_arc_scene_ui_Dialog_invoke_arc_func_Prov_2);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_scene_ui_Dialog(ctx);
	SF_arc_scene_ui_Dialog_defaultHideAction = sp[0].o;
	LINE_NUMBER(41);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_scene_ui_Dialog(ctx);
	SF_arc_scene_ui_Dialog_tmpPosition = sp[0].o;
	LINE_NUMBER(42);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_scene_ui_Dialog(ctx);
	SF_arc_scene_ui_Dialog_tmpSize = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_Dialog[] {
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
	(void *) M_arc_scene_ui_Dialog_draw,
	(void *) M_arc_scene_ui_Dialog_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_ui_Dialog_hit_float_float_boolean_R_arc_scene_Element,
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
	(void *) M_arc_scene_ui_Dialog_setScene_arc_scene_Scene,
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
	(void *) M_arc_scene_ui_layout_Table_getMinWidth_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMinHeight_R_float,
	(void *) M_arc_scene_ui_layout_Table_getPrefWidth_R_float,
	(void *) M_arc_scene_ui_layout_Table_getPrefHeight_R_float,
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
	(void *) M_arc_scene_ui_Dialog_getStyle_R_arc_scene_ui_Dialog$DialogStyle,
	(void *) M_arc_scene_ui_Dialog_setStyle_arc_scene_ui_Dialog$DialogStyle,
	(void *) M_arc_scene_ui_Dialog_keepWithinStage,
	(void *) M_arc_scene_ui_Dialog_drawStageBackground_float_float_float_float,
	(void *) M_arc_scene_ui_Dialog_centerWindow,
	(void *) M_arc_scene_ui_Dialog_isMovable_R_boolean,
	(void *) M_arc_scene_ui_Dialog_setMovable_boolean,
	(void *) M_arc_scene_ui_Dialog_isModal_R_boolean,
	(void *) M_arc_scene_ui_Dialog_setModal_boolean,
	(void *) M_arc_scene_ui_Dialog_setKeepWithinStage_boolean,
	(void *) M_arc_scene_ui_Dialog_isCentered_R_boolean,
	(void *) M_arc_scene_ui_Dialog_setCentered_boolean,
	(void *) M_arc_scene_ui_Dialog_isResizable_R_boolean,
	(void *) M_arc_scene_ui_Dialog_setResizable_boolean,
	(void *) M_arc_scene_ui_Dialog_setResizeBorder_int,
	(void *) M_arc_scene_ui_Dialog_isDragging_R_boolean,
	(void *) M_arc_scene_ui_Dialog_updateScrollFocus,
	(void *) M_arc_scene_ui_Dialog_shown_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_hidden_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_resizedShown_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_resized_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_resized_boolean_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_addCloseButton,
	(void *) M_arc_scene_ui_Dialog_closeOnBack,
	(void *) M_arc_scene_ui_Dialog_closeOnBack_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_isShown_R_boolean,
	(void *) M_arc_scene_ui_Dialog_show_arc_scene_Scene_arc_scene_Action_R_arc_scene_ui_Dialog,
	(void *) M_arc_scene_ui_Dialog_toggle,
	(void *) M_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog,
	(void *) M_arc_scene_ui_Dialog_show_arc_scene_Scene_R_arc_scene_ui_Dialog,
	(void *) M_arc_scene_ui_Dialog_hide_arc_scene_Action,
	(void *) M_arc_scene_ui_Dialog_hide,
	(void *) M_arc_scene_ui_Dialog_lambda$closeOnBack$1_java_lang_Runnable_arc_input_KeyCode,
	(void *) M_arc_scene_ui_Dialog_lambda$updateScrollFocus$0_Array1_boolean,
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
	{ "getStyle", "()Larc/scene/ui/Dialog$DialogStyle;" },
	{ "setStyle", "(Larc/scene/ui/Dialog$DialogStyle;)V" },
	{ "keepWithinStage", "()V" },
	{ "drawStageBackground", "(FFFF)V" },
	{ "centerWindow", "()V" },
	{ "isMovable", "()Z" },
	{ "setMovable", "(Z)V" },
	{ "isModal", "()Z" },
	{ "setModal", "(Z)V" },
	{ "setKeepWithinStage", "(Z)V" },
	{ "isCentered", "()Z" },
	{ "setCentered", "(Z)V" },
	{ "isResizable", "()Z" },
	{ "setResizable", "(Z)V" },
	{ "setResizeBorder", "(I)V" },
	{ "isDragging", "()Z" },
	{ "updateScrollFocus", "()V" },
	{ "shown", "(Ljava/lang/Runnable;)V" },
	{ "hidden", "(Ljava/lang/Runnable;)V" },
	{ "resizedShown", "(Ljava/lang/Runnable;)V" },
	{ "resized", "(Ljava/lang/Runnable;)V" },
	{ "resized", "(ZLjava/lang/Runnable;)V" },
	{ "addCloseButton", "()V" },
	{ "closeOnBack", "()V" },
	{ "closeOnBack", "(Ljava/lang/Runnable;)V" },
	{ "isShown", "()Z" },
	{ "show", "(Larc/scene/Scene;Larc/scene/Action;)Larc/scene/ui/Dialog;" },
	{ "toggle", "()V" },
	{ "show", "()Larc/scene/ui/Dialog;" },
	{ "show", "(Larc/scene/Scene;)Larc/scene/ui/Dialog;" },
	{ "hide", "(Larc/scene/Action;)V" },
	{ "hide", "()V" },
	{ "lambda$closeOnBack$1", "(Ljava/lang/Runnable;Larc/input/KeyCode;)V" },
	{ "lambda$updateScrollFocus$0", "([Z)V" },
};

static jclass innerClasses[] {
	&class_arc_scene_ui_Dialog$DialogStyle,
};

static FieldMetadata fields[] {
	{ "defaultShowAction", &class_arc_func_Prov, (intptr_t) &SF_arc_scene_ui_Dialog_defaultShowAction, "Larc/func/Prov;", 10 },
	{ "defaultHideAction", &class_arc_func_Prov, (intptr_t) &SF_arc_scene_ui_Dialog_defaultHideAction, "Larc/func/Prov;", 10 },
	{ "ignoreTouchDown", &class_arc_scene_event_InputListener, offsetof(arc_scene_ui_Dialog, F_ignoreTouchDown), "Larc/scene/event/InputListener;", 4 },
	{ "tmpPosition", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_scene_ui_Dialog_tmpPosition, "Larc/math/geom/Vec2;", 26 },
	{ "tmpSize", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_scene_ui_Dialog_tmpSize, "Larc/math/geom/Vec2;", 26 },
	{ "MOVE", &class_int, (intptr_t) &SF_arc_scene_ui_Dialog_MOVE, "I", 26 },
	{ "edge", &class_int, offsetof(arc_scene_ui_Dialog, F_edge), "I", 4 },
	{ "dragging", &class_boolean, offsetof(arc_scene_ui_Dialog, F_dragging), "Z", 4 },
	{ "isMovable", &class_boolean, offsetof(arc_scene_ui_Dialog, F_isMovable), "Z", 0 },
	{ "isModal", &class_boolean, offsetof(arc_scene_ui_Dialog, F_isModal), "Z", 0 },
	{ "isResizable", &class_boolean, offsetof(arc_scene_ui_Dialog, F_isResizable), "Z", 0 },
	{ "center", &class_boolean, offsetof(arc_scene_ui_Dialog, F_center), "Z", 0 },
	{ "resizeBorder", &class_int, offsetof(arc_scene_ui_Dialog, F_resizeBorder), "I", 0 },
	{ "keepWithinStage", &class_boolean, offsetof(arc_scene_ui_Dialog, F_keepWithinStage), "Z", 0 },
	{ "style", &class_arc_scene_ui_Dialog$DialogStyle, offsetof(arc_scene_ui_Dialog, F_style), "Larc/scene/ui/Dialog$DialogStyle;", 2 },
	{ "lastWidth", &class_float, offsetof(arc_scene_ui_Dialog, F_lastWidth), "F", 2 },
	{ "lastHeight", &class_float, offsetof(arc_scene_ui_Dialog, F_lastHeight), "F", 2 },
	{ "previousKeyboardFocus", &class_arc_scene_Element, offsetof(arc_scene_ui_Dialog, F_previousKeyboardFocus), "Larc/scene/Element;", 0 },
	{ "previousScrollFocus", &class_arc_scene_Element, offsetof(arc_scene_ui_Dialog, F_previousScrollFocus), "Larc/scene/Element;", 0 },
	{ "focusListener", &class_arc_scene_event_FocusListener, offsetof(arc_scene_ui_Dialog, F_focusListener), "Larc/scene/event/FocusListener;", 0 },
	{ "cont", &class_arc_scene_ui_layout_Table, offsetof(arc_scene_ui_Dialog, F_cont), "Larc/scene/ui/layout/Table;", 17 },
	{ "buttons", &class_arc_scene_ui_layout_Table, offsetof(arc_scene_ui_Dialog, F_buttons), "Larc/scene/ui/layout/Table;", 17 },
	{ "title", &class_arc_scene_ui_Label, offsetof(arc_scene_ui_Dialog, F_title), "Larc/scene/ui/Label;", 17 },
	{ "titleTable", &class_arc_scene_ui_layout_Table, offsetof(arc_scene_ui_Dialog, F_titleTable), "Larc/scene/ui/layout/Table;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_Dialog, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_Dialog_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_Dialog_java_lang_String_arc_scene_ui_Dialog$DialogStyle, 0, "(Ljava/lang/String;Larc/scene/ui/Dialog$DialogStyle;)V", 1 },
	{ "getStyle", (intptr_t) M_arc_scene_ui_Dialog_getStyle_R_arc_scene_ui_Dialog$DialogStyle, VTABLE_arc_scene_ui_Dialog_getStyle_R_arc_scene_ui_Dialog$DialogStyle, "()Larc/scene/ui/Dialog$DialogStyle;", 1 },
	{ "setStyle", (intptr_t) M_arc_scene_ui_Dialog_setStyle_arc_scene_ui_Dialog$DialogStyle, VTABLE_arc_scene_ui_Dialog_setStyle_arc_scene_ui_Dialog$DialogStyle, "(Larc/scene/ui/Dialog$DialogStyle;)V", 1 },
	{ "keepWithinStage", (intptr_t) M_arc_scene_ui_Dialog_keepWithinStage, VTABLE_arc_scene_ui_Dialog_keepWithinStage, "()V", 0 },
	{ "act", (intptr_t) M_arc_scene_ui_Dialog_act_float, VTABLE_arc_scene_ui_Dialog_act_float, "(F)V", 1 },
	{ "draw", (intptr_t) M_arc_scene_ui_Dialog_draw, VTABLE_arc_scene_ui_Dialog_draw, "()V", 1 },
	{ "drawStageBackground", (intptr_t) M_arc_scene_ui_Dialog_drawStageBackground_float_float_float_float, VTABLE_arc_scene_ui_Dialog_drawStageBackground_float_float_float_float, "(FFFF)V", 4 },
	{ "hit", (intptr_t) M_arc_scene_ui_Dialog_hit_float_float_boolean_R_arc_scene_Element, VTABLE_arc_scene_ui_Dialog_hit_float_float_boolean_R_arc_scene_Element, "(FFZ)Larc/scene/Element;", 1 },
	{ "centerWindow", (intptr_t) M_arc_scene_ui_Dialog_centerWindow, VTABLE_arc_scene_ui_Dialog_centerWindow, "()V", 1 },
	{ "isMovable", (intptr_t) M_arc_scene_ui_Dialog_isMovable_R_boolean, VTABLE_arc_scene_ui_Dialog_isMovable_R_boolean, "()Z", 1 },
	{ "setMovable", (intptr_t) M_arc_scene_ui_Dialog_setMovable_boolean, VTABLE_arc_scene_ui_Dialog_setMovable_boolean, "(Z)V", 1 },
	{ "isModal", (intptr_t) M_arc_scene_ui_Dialog_isModal_R_boolean, VTABLE_arc_scene_ui_Dialog_isModal_R_boolean, "()Z", 1 },
	{ "setModal", (intptr_t) M_arc_scene_ui_Dialog_setModal_boolean, VTABLE_arc_scene_ui_Dialog_setModal_boolean, "(Z)V", 1 },
	{ "setKeepWithinStage", (intptr_t) M_arc_scene_ui_Dialog_setKeepWithinStage_boolean, VTABLE_arc_scene_ui_Dialog_setKeepWithinStage_boolean, "(Z)V", 1 },
	{ "isCentered", (intptr_t) M_arc_scene_ui_Dialog_isCentered_R_boolean, VTABLE_arc_scene_ui_Dialog_isCentered_R_boolean, "()Z", 1 },
	{ "setCentered", (intptr_t) M_arc_scene_ui_Dialog_setCentered_boolean, VTABLE_arc_scene_ui_Dialog_setCentered_boolean, "(Z)V", 1 },
	{ "isResizable", (intptr_t) M_arc_scene_ui_Dialog_isResizable_R_boolean, VTABLE_arc_scene_ui_Dialog_isResizable_R_boolean, "()Z", 1 },
	{ "setResizable", (intptr_t) M_arc_scene_ui_Dialog_setResizable_boolean, VTABLE_arc_scene_ui_Dialog_setResizable_boolean, "(Z)V", 1 },
	{ "setResizeBorder", (intptr_t) M_arc_scene_ui_Dialog_setResizeBorder_int, VTABLE_arc_scene_ui_Dialog_setResizeBorder_int, "(I)V", 1 },
	{ "isDragging", (intptr_t) M_arc_scene_ui_Dialog_isDragging_R_boolean, VTABLE_arc_scene_ui_Dialog_isDragging_R_boolean, "()Z", 1 },
	{ "updateScrollFocus", (intptr_t) M_arc_scene_ui_Dialog_updateScrollFocus, VTABLE_arc_scene_ui_Dialog_updateScrollFocus, "()V", 1 },
	{ "setHideAction", (intptr_t) SM_arc_scene_ui_Dialog_setHideAction_arc_func_Prov, 0, "(Larc/func/Prov;)V", 9 },
	{ "setShowAction", (intptr_t) SM_arc_scene_ui_Dialog_setShowAction_arc_func_Prov, 0, "(Larc/func/Prov;)V", 9 },
	{ "setScene", (intptr_t) M_arc_scene_ui_Dialog_setScene_arc_scene_Scene, VTABLE_arc_scene_ui_Dialog_setScene_arc_scene_Scene, "(Larc/scene/Scene;)V", 4 },
	{ "shown", (intptr_t) M_arc_scene_ui_Dialog_shown_java_lang_Runnable, VTABLE_arc_scene_ui_Dialog_shown_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
	{ "hidden", (intptr_t) M_arc_scene_ui_Dialog_hidden_java_lang_Runnable, VTABLE_arc_scene_ui_Dialog_hidden_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
	{ "resizedShown", (intptr_t) M_arc_scene_ui_Dialog_resizedShown_java_lang_Runnable, VTABLE_arc_scene_ui_Dialog_resizedShown_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
	{ "resized", (intptr_t) M_arc_scene_ui_Dialog_resized_java_lang_Runnable, VTABLE_arc_scene_ui_Dialog_resized_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
	{ "resized", (intptr_t) M_arc_scene_ui_Dialog_resized_boolean_java_lang_Runnable, VTABLE_arc_scene_ui_Dialog_resized_boolean_java_lang_Runnable, "(ZLjava/lang/Runnable;)V", 1 },
	{ "addCloseButton", (intptr_t) M_arc_scene_ui_Dialog_addCloseButton, VTABLE_arc_scene_ui_Dialog_addCloseButton, "()V", 1 },
	{ "closeOnBack", (intptr_t) M_arc_scene_ui_Dialog_closeOnBack, VTABLE_arc_scene_ui_Dialog_closeOnBack, "()V", 1 },
	{ "closeOnBack", (intptr_t) M_arc_scene_ui_Dialog_closeOnBack_java_lang_Runnable, VTABLE_arc_scene_ui_Dialog_closeOnBack_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
	{ "isShown", (intptr_t) M_arc_scene_ui_Dialog_isShown_R_boolean, VTABLE_arc_scene_ui_Dialog_isShown_R_boolean, "()Z", 1 },
	{ "show", (intptr_t) M_arc_scene_ui_Dialog_show_arc_scene_Scene_arc_scene_Action_R_arc_scene_ui_Dialog, VTABLE_arc_scene_ui_Dialog_show_arc_scene_Scene_arc_scene_Action_R_arc_scene_ui_Dialog, "(Larc/scene/Scene;Larc/scene/Action;)Larc/scene/ui/Dialog;", 1 },
	{ "toggle", (intptr_t) M_arc_scene_ui_Dialog_toggle, VTABLE_arc_scene_ui_Dialog_toggle, "()V", 1 },
	{ "show", (intptr_t) M_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog, VTABLE_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog, "()Larc/scene/ui/Dialog;", 1 },
	{ "show", (intptr_t) M_arc_scene_ui_Dialog_show_arc_scene_Scene_R_arc_scene_ui_Dialog, VTABLE_arc_scene_ui_Dialog_show_arc_scene_Scene_R_arc_scene_ui_Dialog, "(Larc/scene/Scene;)Larc/scene/ui/Dialog;", 1 },
	{ "hide", (intptr_t) M_arc_scene_ui_Dialog_hide_arc_scene_Action, VTABLE_arc_scene_ui_Dialog_hide_arc_scene_Action, "(Larc/scene/Action;)V", 1 },
	{ "hide", (intptr_t) M_arc_scene_ui_Dialog_hide, VTABLE_arc_scene_ui_Dialog_hide, "()V", 1 },
	{ "lambda$closeOnBack$1", (intptr_t) M_arc_scene_ui_Dialog_lambda$closeOnBack$1_java_lang_Runnable_arc_input_KeyCode, VTABLE_arc_scene_ui_Dialog_lambda$closeOnBack$1_java_lang_Runnable_arc_input_KeyCode, "(Ljava/lang/Runnable;Larc/input/KeyCode;)V", 4098 },
	{ "lambda$closeOnBack$0", (intptr_t) SM_arc_scene_ui_Dialog_lambda$closeOnBack$0, 0, "()V", 4106 },
	{ "lambda$updateScrollFocus$0", (intptr_t) M_arc_scene_ui_Dialog_lambda$updateScrollFocus$0_Array1_boolean, VTABLE_arc_scene_ui_Dialog_lambda$updateScrollFocus$0_Array1_boolean, "([Z)V", 4098 },
	{ "lambda$updateScrollFocus$1", (intptr_t) SM_arc_scene_ui_Dialog_lambda$updateScrollFocus$1_Array1_boolean_arc_scene_Element, 0, "([ZLarc/scene/Element;)V", 4106 },
	{ "lambda$static$1", (intptr_t) SM_arc_scene_ui_Dialog_lambda$static$1_R_arc_scene_Action, 0, "()Larc/scene/Action;", 4106 },
	{ "lambda$static$0", (intptr_t) SM_arc_scene_ui_Dialog_lambda$static$0_R_arc_scene_Action, 0, "()Larc/scene/Action;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_scene_ui_Dialog, 0, "()V", 8 },
};

Class class_arc_scene_ui_Dialog{
		.nativeName = (intptr_t) "arc/scene/ui/Dialog",
		.parentClass = (intptr_t) &class_arc_scene_ui_layout_Table,
		.size = sizeof(arc_scene_ui_Dialog),
		.classVtable = (intptr_t) vtable_arc_scene_ui_Dialog,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_Dialog,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_Dialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 24,
		.nativeFields = (intptr_t) fields,
		.methodCount = 48,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 289,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_Dialog = registerClass(&class_arc_scene_ui_Dialog);

}
