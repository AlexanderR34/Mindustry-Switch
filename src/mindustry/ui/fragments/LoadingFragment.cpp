#include "mindustry/ui/fragments/LoadingFragment.h"
#include "arc/func/Prov.h"
#include "mindustry/ui/fragments/LoadingFragment_invoke_arc_scene_ui_layout_Table_DrawRect_1.h"
#include "mindustry/ui/Bar.h"
#include "arc/scene/Action.h"
#include "arc/graphics/Color.h"
#include "mindustry/ui/fragments/LoadingFragment_invoke_arc_func_Prov_1.h"
#include "mindustry/ui/fragments/LoadingFragment.h"
#include "java/lang/Runnable.h"
#include "arc/input/KeyCode.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "arc/scene/event/Touchable.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/style/Drawable.h"
#include "java/lang/reflect/Method.h"
#include "arc/scene/ui/TextButton.h"
#include "arc/func/Floatp.h"
#include "arc/scene/ui/layout/Table_DrawRect.h"
#include "mindustry/ui/fragments/LoadingFragment_invoke_arc_func_Cons_2.h"
#include "mindustry/ui/fragments/LoadingFragment_invoke_arc_func_Cons_3.h"
#include "arc/scene/actions/VisibleAction.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/WarningBar.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ui/Styles.h"
#include "arc/util/Nullable.h"
#include "mindustry/ui/fragments/LoadingFragment_invoke_java_lang_Runnable_1.h"
#include "arc/scene/ui/Label.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/actions/Actions.h"
#include "arc/scene/style/Style.h"
#include "arc/scene/Scene.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/ui/fragments/LoadingFragment_invoke_arc_func_Floatp_3.h"
#include "mindustry/ui/fragments/LoadingFragment_invoke_arc_func_Floatp_2.h"
#include "arc/scene/actions/AlphaAction.h"
#include "arc/scene/ui/Label_LabelStyle.h"

extern "C" {


void mark_mindustry_ui_fragments_LoadingFragment(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (mindustry_ui_fragments_LoadingFragment *) object;
	if (self->F_table)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_table)->clazz)->markFunction)((jobject) self->F_table, mark, depth + 1);
	if (self->F_button)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_button)->clazz)->markFunction)((jobject) self->F_button, mark, depth + 1);
	if (self->F_bar)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bar)->clazz)->markFunction)((jobject) self->F_bar, mark, depth + 1);
	if (self->F_nameLabel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nameLabel)->clazz)->markFunction)((jobject) self->F_nameLabel, mark, depth + 1);
	if (self->F_cancelListener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cancelListener)->clazz)->markFunction)((jobject) self->F_cancelListener, mark, depth + 1);
}

void clinit_mindustry_ui_fragments_LoadingFragment(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_fragments_LoadingFragment(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/LoadingFragment:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_LoadingFragment(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(17);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_LoadingFragment_build_arc_scene_Group(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/LoadingFragment:build", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_LoadingFragment_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_ui_fragments_LoadingFragment_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_ui_fragments_LoadingFragment_invoke_arc_func_Cons_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Group_fill_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_LoadingFragment_toFront(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/LoadingFragment:toFront", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_toFront) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_toFront])(ctx, sp[0].o);
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_LoadingFragment_setProgress_arc_func_Floatp(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/LoadingFragment:setProgress", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_bar;
	((func_mindustry_ui_Bar_reset_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_Bar_reset_float])(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(66);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_bar;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible = (jint(1));
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_bar;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_LoadingFragment_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_ui_fragments_LoadingFragment_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_LoadingFragment_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[2].o = frame[1].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[3].o = (jobject)SF_mindustry_graphics_Pal_accent;
	((func_mindustry_ui_Bar_set_arc_func_Prov_arc_func_Floatp_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_Bar_set_arc_func_Prov_arc_func_Floatp_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_LoadingFragment_snapProgress(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/LoadingFragment:snapProgress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_bar;
	((func_mindustry_ui_Bar_snap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_Bar_snap])(ctx, sp[0].o);
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_LoadingFragment_setProgress_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/LoadingFragment:setProgress", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(75);
	((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_progValue = (frame[1].f);
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_bar;
	if (((jint)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible) != 0) goto label_2;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_LoadingFragment_invoke_arc_func_Floatp_2(ctx);
		auto proxy = (mindustry_ui_fragments_LoadingFragment_invoke_arc_func_Floatp_2 *) gcAlloc(ctx, &class_mindustry_ui_fragments_LoadingFragment_invoke_arc_func_Floatp_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_fragments_LoadingFragment_setProgress_arc_func_Floatp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_setProgress_arc_func_Floatp])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	LINE_NUMBER(79);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_LoadingFragment_showProgressBar(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/LoadingFragment:showProgressBar", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_bar;
	if (((jint)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible) != 0) goto label_1;
	}
	{
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_LoadingFragment_invoke_arc_func_Floatp_3(ctx);
		auto proxy = (mindustry_ui_fragments_LoadingFragment_invoke_arc_func_Floatp_3 *) gcAlloc(ctx, &class_mindustry_ui_fragments_LoadingFragment_invoke_arc_func_Floatp_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_fragments_LoadingFragment_setProgress_arc_func_Floatp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_setProgress_arc_func_Floatp])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(85);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_LoadingFragment_showingProgress_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/LoadingFragment:showingProgress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_bar;
	popStackFrame(ctx);
	return ((jint)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_LoadingFragment_setButton_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/LoadingFragment:setButton", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_button;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible = (jint(1));
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_button;
	((func_arc_scene_ui_TextButton_requestKeyboard) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_requestKeyboard])(ctx, sp[0].o);
	LINE_NUMBER(95);
	((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_cancelListener = (jref) (frame[1].o);
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_LoadingFragment_setText_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/LoadingFragment:setText", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_nameLabel;
	((func_arc_scene_ui_Label_setText_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setText_java_lang_CharSequence])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_LoadingFragment_setText_java_lang_String_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/LoadingFragment:setText", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_nameLabel;
	((func_arc_scene_ui_Label_setText_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setText_java_lang_CharSequence])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(104);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_nameLabel;
	((func_arc_scene_ui_Label_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setColor_arc_graphics_Color])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_LoadingFragment_show(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/LoadingFragment:show", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	((func_mindustry_ui_fragments_LoadingFragment_show_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_show_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@loading"_j))));
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_LoadingFragment_show_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/LoadingFragment:show", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_button;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible = (jint(0));
	LINE_NUMBER(113);
	((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_cancelListener = (jref) (jobject(nullptr));
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_bar;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible = (jint(0));
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_clearActions) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearActions])(ctx, sp[0].o);
	LINE_NUMBER(116);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_table;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(117);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_nameLabel;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_scene_ui_Label_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(118);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_nameLabel;
	((func_arc_scene_ui_Label_setText_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setText_java_lang_CharSequence])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible = (jint(1));
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_table;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_color;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (jfloat(1));
	LINE_NUMBER(121);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_toFront) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_toFront])(ctx, sp[0].o);
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_LoadingFragment_shown_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/LoadingFragment:shown", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_table;
	popStackFrame(ctx);
	return ((jint)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_LoadingFragment_hide(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/LoadingFragment:hide", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_clearActions) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearActions])(ctx, sp[0].o);
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_toFront) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_toFront])(ctx, sp[0].o);
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_button;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible = (jint(0));
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_table;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_table;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_fadeOut_float_R_arc_scene_actions_AlphaAction(ctx, (jfloat(0.5f)));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_visible_boolean_R_arc_scene_actions_VisibleAction(ctx, (jint(0)));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	((func_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(135);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_button;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(136);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, (jobject(nullptr)));
	}
label_6:;
	LINE_NUMBER(138);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_fragments_LoadingFragment_lambda$showProgressBar$0_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/LoadingFragment:lambda$showProgressBar$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_progValue);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_fragments_LoadingFragment_lambda$setProgress$1_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/LoadingFragment:lambda$setProgress$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_progValue);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_fragments_LoadingFragment_lambda$setProgress$0_arc_func_Floatp_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/LoadingFragment:lambda$setProgress$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_LoadingFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(67);
	jfloat temp0 = (jfloat)((func_arc_func_Floatp_get_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatp, INDEX_arc_func_Floatp_get_R_float, (frame[0].o)))(ctx, (frame[0].o));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001%"_j.string, 1, boxInteger(ctx, (jint((temp0 * (jfloat(100.0f)))))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_LoadingFragment_lambda$build$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/LoadingFragment:lambda$build$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_LoadingFragment_invoke_arc_scene_ui_layout_Table$DrawRect_1(ctx);
		auto proxy = (mindustry_ui_fragments_LoadingFragment_invoke_arc_scene_ui_layout_Table$DrawRect_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_LoadingFragment_invoke_arc_scene_ui_layout_Table$DrawRect_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(32);
	((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_visible = (jint(0));
	LINE_NUMBER(33);
	sp[0].o = frame[1].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(133.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(35);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_WarningBar(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_WarningBar);
	init_mindustry_ui_WarningBar(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(24.0f)));
	LINE_NUMBER(36);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@loading"_j))));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, (jfloat(10.0f)));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[1].o);
	((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK(sp[0].o))->F_nameLabel = (jref) (checkCast(ctx, &class_arc_scene_ui_Label, sp[1].o));
	LINE_NUMBER(38);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(39);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_WarningBar(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_WarningBar);
	init_mindustry_ui_WarningBar(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(24.0f)));
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_nameLabel;
	((func_arc_scene_ui_Label_setText_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setText_java_lang_CharSequence])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@loading"_j))));
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_ui_Bar(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	init_mindustry_ui_Bar(ctx, sp[2].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, (jfloat(3.0f)));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, (jfloat(6.0f)));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, (jfloat(500.0f)), (jfloat(40.0f)));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[1].o);
	((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK(sp[0].o))->F_bar = (jref) (checkCast(ctx, &class_mindustry_ui_Bar, sp[1].o));
	LINE_NUMBER(45);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@cancel"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_LoadingFragment_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_ui_fragments_LoadingFragment_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_LoadingFragment_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(20.0f);
	LINE_NUMBER(50);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, (jfloat(250.0f)), (jfloat(70.0f)));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[1].o);
	((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK(sp[0].o))->F_button = (jref) (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[1].o));
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_button;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_LoadingFragment_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_ui_fragments_LoadingFragment_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_ui_fragments_LoadingFragment_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_TextButton_keyDown_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_keyDown_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(56);
	((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_table = (jref) (frame[1].o);
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_LoadingFragment_lambda$build$3_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/LoadingFragment:lambda$build$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_cancelListener;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_back;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = frame[1].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_escape;
	if (sp[0].o != sp[1].o) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_cancelListener;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_LoadingFragment_lambda$build$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/LoadingFragment:lambda$build$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_cancelListener;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((mindustry_ui_fragments_LoadingFragment *) NULL_CHECK((frame[0].o)))->F_cancelListener;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_LoadingFragment_lambda$build$1_arc_scene_ui_layout_Table_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/LoadingFragment:lambda$build$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_LoadingFragment(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a));
	LINE_NUMBER(30);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_black8;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp3 = jfloat(temp2);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp4 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ui_fragments_LoadingFragment;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field cancelListener
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ui_fragments_LoadingFragment[] {
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
	(void *) M_mindustry_ui_fragments_LoadingFragment_build_arc_scene_Group,
	(void *) M_mindustry_ui_fragments_LoadingFragment_toFront,
	(void *) M_mindustry_ui_fragments_LoadingFragment_setProgress_arc_func_Floatp,
	(void *) M_mindustry_ui_fragments_LoadingFragment_snapProgress,
	(void *) M_mindustry_ui_fragments_LoadingFragment_setProgress_float,
	(void *) M_mindustry_ui_fragments_LoadingFragment_showProgressBar,
	(void *) M_mindustry_ui_fragments_LoadingFragment_showingProgress_R_boolean,
	(void *) M_mindustry_ui_fragments_LoadingFragment_setButton_java_lang_Runnable,
	(void *) M_mindustry_ui_fragments_LoadingFragment_setText_java_lang_String,
	(void *) M_mindustry_ui_fragments_LoadingFragment_setText_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_ui_fragments_LoadingFragment_show,
	(void *) M_mindustry_ui_fragments_LoadingFragment_show_java_lang_String,
	(void *) M_mindustry_ui_fragments_LoadingFragment_shown_R_boolean,
	(void *) M_mindustry_ui_fragments_LoadingFragment_hide,
	(void *) M_mindustry_ui_fragments_LoadingFragment_lambda$showProgressBar$0_R_float,
	(void *) M_mindustry_ui_fragments_LoadingFragment_lambda$setProgress$1_R_float,
	(void *) M_mindustry_ui_fragments_LoadingFragment_lambda$build$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_LoadingFragment_lambda$build$3_arc_input_KeyCode,
	(void *) M_mindustry_ui_fragments_LoadingFragment_lambda$build$2,
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
	{ "build", "(Larc/scene/Group;)V" },
	{ "toFront", "()V" },
	{ "setProgress", "(Larc/func/Floatp;)V" },
	{ "snapProgress", "()V" },
	{ "setProgress", "(F)V" },
	{ "showProgressBar", "()V" },
	{ "showingProgress", "()Z" },
	{ "setButton", "(Ljava/lang/Runnable;)V" },
	{ "setText", "(Ljava/lang/String;)V" },
	{ "setText", "(Ljava/lang/String;Larc/graphics/Color;)V" },
	{ "show", "()V" },
	{ "show", "(Ljava/lang/String;)V" },
	{ "shown", "()Z" },
	{ "hide", "()V" },
	{ "lambda$showProgressBar$0", "()F" },
	{ "lambda$setProgress$1", "()F" },
	{ "lambda$build$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$3", "(Larc/input/KeyCode;)V" },
	{ "lambda$build$2", "()V" },
};

static FieldMetadata fields[] {
	{ "table", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_fragments_LoadingFragment, F_table), "Larc/scene/ui/layout/Table;", 2 },
	{ "button", &class_arc_scene_ui_TextButton, offsetof(mindustry_ui_fragments_LoadingFragment, F_button), "Larc/scene/ui/TextButton;", 2 },
	{ "bar", &class_mindustry_ui_Bar, offsetof(mindustry_ui_fragments_LoadingFragment, F_bar), "Lmindustry/ui/Bar;", 2 },
	{ "nameLabel", &class_arc_scene_ui_Label, offsetof(mindustry_ui_fragments_LoadingFragment, F_nameLabel), "Larc/scene/ui/Label;", 2 },
	{ "cancelListener", &class_java_lang_Runnable, offsetof(mindustry_ui_fragments_LoadingFragment, F_cancelListener), "Ljava/lang/Runnable;", 2 },
	{ "progValue", &class_float, offsetof(mindustry_ui_fragments_LoadingFragment, F_progValue), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_LoadingFragment, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_ui_fragments_LoadingFragment_build_arc_scene_Group, VTABLE_mindustry_ui_fragments_LoadingFragment_build_arc_scene_Group, "(Larc/scene/Group;)V", 1 },
	{ "toFront", (intptr_t) M_mindustry_ui_fragments_LoadingFragment_toFront, VTABLE_mindustry_ui_fragments_LoadingFragment_toFront, "()V", 1 },
	{ "setProgress", (intptr_t) M_mindustry_ui_fragments_LoadingFragment_setProgress_arc_func_Floatp, VTABLE_mindustry_ui_fragments_LoadingFragment_setProgress_arc_func_Floatp, "(Larc/func/Floatp;)V", 1 },
	{ "snapProgress", (intptr_t) M_mindustry_ui_fragments_LoadingFragment_snapProgress, VTABLE_mindustry_ui_fragments_LoadingFragment_snapProgress, "()V", 1 },
	{ "setProgress", (intptr_t) M_mindustry_ui_fragments_LoadingFragment_setProgress_float, VTABLE_mindustry_ui_fragments_LoadingFragment_setProgress_float, "(F)V", 1 },
	{ "showProgressBar", (intptr_t) M_mindustry_ui_fragments_LoadingFragment_showProgressBar, VTABLE_mindustry_ui_fragments_LoadingFragment_showProgressBar, "()V", 1 },
	{ "showingProgress", (intptr_t) M_mindustry_ui_fragments_LoadingFragment_showingProgress_R_boolean, VTABLE_mindustry_ui_fragments_LoadingFragment_showingProgress_R_boolean, "()Z", 1 },
	{ "setButton", (intptr_t) M_mindustry_ui_fragments_LoadingFragment_setButton_java_lang_Runnable, VTABLE_mindustry_ui_fragments_LoadingFragment_setButton_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
	{ "setText", (intptr_t) M_mindustry_ui_fragments_LoadingFragment_setText_java_lang_String, VTABLE_mindustry_ui_fragments_LoadingFragment_setText_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "setText", (intptr_t) M_mindustry_ui_fragments_LoadingFragment_setText_java_lang_String_arc_graphics_Color, VTABLE_mindustry_ui_fragments_LoadingFragment_setText_java_lang_String_arc_graphics_Color, "(Ljava/lang/String;Larc/graphics/Color;)V", 1 },
	{ "show", (intptr_t) M_mindustry_ui_fragments_LoadingFragment_show, VTABLE_mindustry_ui_fragments_LoadingFragment_show, "()V", 1 },
	{ "show", (intptr_t) M_mindustry_ui_fragments_LoadingFragment_show_java_lang_String, VTABLE_mindustry_ui_fragments_LoadingFragment_show_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "shown", (intptr_t) M_mindustry_ui_fragments_LoadingFragment_shown_R_boolean, VTABLE_mindustry_ui_fragments_LoadingFragment_shown_R_boolean, "()Z", 1 },
	{ "hide", (intptr_t) M_mindustry_ui_fragments_LoadingFragment_hide, VTABLE_mindustry_ui_fragments_LoadingFragment_hide, "()V", 1 },
	{ "lambda$showProgressBar$0", (intptr_t) M_mindustry_ui_fragments_LoadingFragment_lambda$showProgressBar$0_R_float, VTABLE_mindustry_ui_fragments_LoadingFragment_lambda$showProgressBar$0_R_float, "()F", 4098 },
	{ "lambda$setProgress$1", (intptr_t) M_mindustry_ui_fragments_LoadingFragment_lambda$setProgress$1_R_float, VTABLE_mindustry_ui_fragments_LoadingFragment_lambda$setProgress$1_R_float, "()F", 4098 },
	{ "lambda$setProgress$0", (intptr_t) SM_mindustry_ui_fragments_LoadingFragment_lambda$setProgress$0_arc_func_Floatp_R_java_lang_String, 0, "(Larc/func/Floatp;)Ljava/lang/String;", 4106 },
	{ "lambda$build$0", (intptr_t) M_mindustry_ui_fragments_LoadingFragment_lambda$build$0_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_LoadingFragment_lambda$build$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$3", (intptr_t) M_mindustry_ui_fragments_LoadingFragment_lambda$build$3_arc_input_KeyCode, VTABLE_mindustry_ui_fragments_LoadingFragment_lambda$build$3_arc_input_KeyCode, "(Larc/input/KeyCode;)V", 4098 },
	{ "lambda$build$2", (intptr_t) M_mindustry_ui_fragments_LoadingFragment_lambda$build$2, VTABLE_mindustry_ui_fragments_LoadingFragment_lambda$build$2, "()V", 4098 },
	{ "lambda$build$1", (intptr_t) SM_mindustry_ui_fragments_LoadingFragment_lambda$build$1_arc_scene_ui_layout_Table_float_float_float_float, 0, "(Larc/scene/ui/layout/Table;FFFF)V", 4106 },
};

Class class_mindustry_ui_fragments_LoadingFragment{
		.nativeName = (intptr_t) "mindustry/ui/fragments/LoadingFragment",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_fragments_LoadingFragment),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_LoadingFragment,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_LoadingFragment,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_LoadingFragment,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 30,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_LoadingFragment = registerClass(&class_mindustry_ui_fragments_LoadingFragment);

}
