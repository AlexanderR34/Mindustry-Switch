#include "mindustry/ui/fragments/BlockConfigFragment.h"
#include "mindustry/game/EventType_ResetEvent.h"
#include "mindustry/world/Block.h"
#include "mindustry/ui/fragments/BlockConfigFragment_invoke_arc_func_Cons_1.h"
#include "arc/Events.h"
#include "arc/scene/Action.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/actions/VisibleAction.h"
#include "arc/Core.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/math/Interp.h"
#include "mindustry/ui/fragments/BlockConfigFragment_invoke_java_lang_Runnable_1.h"
#include "mindustry/ui/fragments/BlockConfigFragment.h"
#include "arc/math/Interp_PowOut.h"
#include "mindustry/gen/Building.h"
#include "arc/scene/actions/Actions.h"
#include "arc/scene/Scene.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/scene/actions/ScaleToAction.h"
#include "mindustry/gen/Player.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_ui_fragments_BlockConfigFragment(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_fragments_BlockConfigFragment *) object;
	if (self->F_table)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_table)->clazz)->markFunction)((jobject) self->F_table, mark, depth + 1);
	if (self->F_selected)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selected)->clazz)->markFunction)((jobject) self->F_selected, mark, depth + 1);
}

void clinit_mindustry_ui_fragments_BlockConfigFragment(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_fragments_BlockConfigFragment(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockConfigFragment:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_BlockConfigFragment(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK(sp[0].o))->F_table = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_BlockConfigFragment_build_arc_scene_Group(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockConfigFragment:build", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible = (jint(0));
	LINE_NUMBER(21);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_Group_addChild_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_addChild_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(23);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ResetEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_BlockConfigFragment_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_ui_fragments_BlockConfigFragment_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_BlockConfigFragment_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_BlockConfigFragment_forceHide(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockConfigFragment:forceHide", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible = (jint(0));
	LINE_NUMBER(28);
	((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_selected = (jref) (jobject(nullptr));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_BlockConfigFragment_isShown_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockConfigFragment:isShown", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	if (((jint)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_selected;
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

jobject M_mindustry_ui_fragments_BlockConfigFragment_getSelected_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockConfigFragment:getSelected", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_selected;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_BlockConfigFragment_showConfig_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockConfigFragment:showConfig", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_selected;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_selected;
	((func_mindustry_gen_Building_onConfigureClosed) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_onConfigureClosed])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(41);
	jint temp0 = (jint)((func_mindustry_gen_Building_configTapped_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_configTapped_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(42);
	((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_selected = (jref) (frame[1].o);
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible = (jint(1));
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(47);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_mindustry_gen_Building_buildConfiguration_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_buildConfiguration_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(48);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_pack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pack])(ctx, sp[0].o);
	LINE_NUMBER(49);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_setTransform_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setTransform_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(3)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_scaleTo_float_float_R_arc_scene_actions_ScaleToAction(ctx, (jfloat(0)), (jfloat(1)));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_visible_boolean_R_arc_scene_actions_VisibleAction(ctx, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	jfloat temp3 = jfloat(1);
	jfloat temp4 = jfloat(1);
	jfloat temp5 = jfloat(0.07f);
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_pow3Out;
	LINE_NUMBER(51);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_scaleTo_float_float_float_arc_math_Interp_R_arc_scene_actions_ScaleToAction(ctx, temp3, temp4, temp5, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	LINE_NUMBER(50);
	((func_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_BlockConfigFragment_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_ui_fragments_BlockConfigFragment_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_BlockConfigFragment_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_BlockConfigFragment_hasConfigMouse_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockConfigFragment:hasConfigMouse", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getHoverElement_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getHoverElement_R_arc_scene_Element])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(71);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	jint temp0 = (jint)((func_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
label_3:;
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_BlockConfigFragment_hideConfig(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockConfigFragment:hideConfig", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_selected;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_selected;
	((func_mindustry_gen_Building_onConfigureClosed) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_onConfigureClosed])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(76);
	((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_selected = (jref) (jobject(nullptr));
	LINE_NUMBER(77);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(2)));
	jint temp0 = jint(0);
	jfloat temp1 = jfloat(0);
	jfloat temp2 = jfloat(1);
	jfloat temp3 = jfloat(0.06f);
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_pow3Out;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_scaleTo_float_float_float_arc_math_Interp_R_arc_scene_actions_ScaleToAction(ctx, temp1, temp2, temp3, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp4 = jint(1);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_visible_boolean_R_arc_scene_actions_VisibleAction(ctx, (jint(0)));
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	((func_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_BlockConfigFragment_lambda$showConfig$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockConfigFragment:lambda$showConfig$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_selected;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_selected;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(55);
	((func_mindustry_ui_fragments_BlockConfigFragment_hideConfig) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_hideConfig])(ctx, (frame[0].o));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_setOrigin_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setOrigin_int])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_selected;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_mindustry_gen_Building_isValid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_isValid_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(61);
	((func_mindustry_ui_fragments_BlockConfigFragment_hideConfig) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_hideConfig])(ctx, (frame[0].o));
	goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[1].o = (jobject)((mindustry_ui_fragments_BlockConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_mindustry_gen_Building_updateTableAlign_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_updateTableAlign_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	LINE_NUMBER(65);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_BlockConfigFragment_lambda$build$0_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockConfigFragment:lambda$build$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	((func_mindustry_ui_fragments_BlockConfigFragment_forceHide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_forceHide])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_fragments_BlockConfigFragment[] {
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
	(void *) M_mindustry_ui_fragments_BlockConfigFragment_build_arc_scene_Group,
	(void *) M_mindustry_ui_fragments_BlockConfigFragment_forceHide,
	(void *) M_mindustry_ui_fragments_BlockConfigFragment_isShown_R_boolean,
	(void *) M_mindustry_ui_fragments_BlockConfigFragment_getSelected_R_mindustry_gen_Building,
	(void *) M_mindustry_ui_fragments_BlockConfigFragment_showConfig_mindustry_gen_Building,
	(void *) M_mindustry_ui_fragments_BlockConfigFragment_hasConfigMouse_R_boolean,
	(void *) M_mindustry_ui_fragments_BlockConfigFragment_hideConfig,
	(void *) M_mindustry_ui_fragments_BlockConfigFragment_lambda$showConfig$0,
	(void *) M_mindustry_ui_fragments_BlockConfigFragment_lambda$build$0_mindustry_game_EventType$ResetEvent,
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
	{ "forceHide", "()V" },
	{ "isShown", "()Z" },
	{ "getSelected", "()Lmindustry/gen/Building;" },
	{ "showConfig", "(Lmindustry/gen/Building;)V" },
	{ "hasConfigMouse", "()Z" },
	{ "hideConfig", "()V" },
	{ "lambda$showConfig$0", "()V" },
	{ "lambda$build$0", "(Lmindustry/game/EventType$ResetEvent;)V" },
};

static FieldMetadata fields[] {
	{ "table", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_fragments_BlockConfigFragment, F_table), "Larc/scene/ui/layout/Table;", 0 },
	{ "selected", &class_mindustry_gen_Building, offsetof(mindustry_ui_fragments_BlockConfigFragment, F_selected), "Lmindustry/gen/Building;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_BlockConfigFragment, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_ui_fragments_BlockConfigFragment_build_arc_scene_Group, VTABLE_mindustry_ui_fragments_BlockConfigFragment_build_arc_scene_Group, "(Larc/scene/Group;)V", 1 },
	{ "forceHide", (intptr_t) M_mindustry_ui_fragments_BlockConfigFragment_forceHide, VTABLE_mindustry_ui_fragments_BlockConfigFragment_forceHide, "()V", 1 },
	{ "isShown", (intptr_t) M_mindustry_ui_fragments_BlockConfigFragment_isShown_R_boolean, VTABLE_mindustry_ui_fragments_BlockConfigFragment_isShown_R_boolean, "()Z", 1 },
	{ "getSelected", (intptr_t) M_mindustry_ui_fragments_BlockConfigFragment_getSelected_R_mindustry_gen_Building, VTABLE_mindustry_ui_fragments_BlockConfigFragment_getSelected_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "showConfig", (intptr_t) M_mindustry_ui_fragments_BlockConfigFragment_showConfig_mindustry_gen_Building, VTABLE_mindustry_ui_fragments_BlockConfigFragment_showConfig_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "hasConfigMouse", (intptr_t) M_mindustry_ui_fragments_BlockConfigFragment_hasConfigMouse_R_boolean, VTABLE_mindustry_ui_fragments_BlockConfigFragment_hasConfigMouse_R_boolean, "()Z", 1 },
	{ "hideConfig", (intptr_t) M_mindustry_ui_fragments_BlockConfigFragment_hideConfig, VTABLE_mindustry_ui_fragments_BlockConfigFragment_hideConfig, "()V", 1 },
	{ "lambda$showConfig$0", (intptr_t) M_mindustry_ui_fragments_BlockConfigFragment_lambda$showConfig$0, VTABLE_mindustry_ui_fragments_BlockConfigFragment_lambda$showConfig$0, "()V", 4098 },
	{ "lambda$build$0", (intptr_t) M_mindustry_ui_fragments_BlockConfigFragment_lambda$build$0_mindustry_game_EventType$ResetEvent, VTABLE_mindustry_ui_fragments_BlockConfigFragment_lambda$build$0_mindustry_game_EventType$ResetEvent, "(Lmindustry/game/EventType$ResetEvent;)V", 4098 },
};

Class class_mindustry_ui_fragments_BlockConfigFragment{
		.nativeName = (intptr_t) "mindustry/ui/fragments/BlockConfigFragment",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_fragments_BlockConfigFragment),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_BlockConfigFragment,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_BlockConfigFragment,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_BlockConfigFragment,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_BlockConfigFragment = registerClass(&class_mindustry_ui_fragments_BlockConfigFragment);

}
