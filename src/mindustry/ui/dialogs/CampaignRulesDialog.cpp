#include "mindustry/ui/dialogs/CampaignRulesDialog.h"
#include "arc/func/Boolp.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog_invoke_arc_func_Boolp_14.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog_invoke_arc_func_Boolp_15.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog_invoke_arc_func_Boolp_12.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog_invoke_arc_func_Boolp_13.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog_invoke_arc_func_Boolp_10.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog_invoke_arc_func_Boolp_11.h"
#include "java/lang/Runnable.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog_invoke_java_lang_Runnable_3.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog_invoke_java_lang_Runnable_4.h"
#include "arc/scene/ui/Button.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog_invoke_arc_func_Boolc_7.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog_invoke_java_lang_Runnable_5.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog_invoke_arc_func_Cons_4.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog_invoke_arc_func_Cons_5.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog_invoke_arc_func_Cons_3.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/TextButton.h"
#include "arc/func/Boolc.h"
#include "arc/func/Boolf.h"
#include "arc/scene/ui/CheckBox.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog_invoke_arc_func_Boolp_8.h"
#include "arc/Core.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog_invoke_arc_func_Boolp_9.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/ButtonGroup.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/game/Rules.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "arc/func/Cons.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog_invoke_arc_func_Boolf_1.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/gen/Tex.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/game/CampaignRules.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog_invoke_arc_func_Boolc_8.h"
#include "mindustry/ui/Styles.h"
#include "java/lang/Enum.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog_invoke_arc_func_Boolc_9.h"
#include "mindustry/game/Difficulty.h"
#include "arc/scene/Element.h"
#include "mindustry/type/Planet.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog_invoke_arc_func_Boolc_10.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog_invoke_arc_func_Boolc_11.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog_invoke_arc_func_Boolc_12.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog_invoke_arc_func_Boolc_13.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/gen/Call.h"

extern "C" {


void mark_mindustry_ui_dialogs_CampaignRulesDialog(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ui_dialogs_BaseDialog(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_CampaignRulesDialog *) object;
	if (self->F_planet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planet)->clazz)->markFunction)((jobject) self->F_planet, mark, depth + 1);
	if (self->F_current)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_current)->clazz)->markFunction)((jobject) self->F_current, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_CampaignRulesDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
}

void init_mindustry_ui_dialogs_CampaignRulesDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CampaignRulesDialog(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(18);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@campaign.difficulty"_j))));
	LINE_NUMBER(20);
	((func_mindustry_ui_dialogs_CampaignRulesDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CampaignRulesDialog_addCloseButton])(ctx, (frame[0].o));
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CampaignRulesDialog_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_ui_dialogs_CampaignRulesDialog_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignRulesDialog_invoke_java_lang_Runnable_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CampaignRulesDialog_hidden_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CampaignRulesDialog_hidden_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CampaignRulesDialog_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_ui_dialogs_CampaignRulesDialog_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignRulesDialog_invoke_java_lang_Runnable_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CampaignRulesDialog_onResize_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CampaignRulesDialog_onResize_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CampaignRulesDialog_rebuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:rebuild", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CampaignRulesDialog *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_campaignRules;
	frame[1].o = sp[0].o;
	LINE_NUMBER(40);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(42);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Cons_3);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(81);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CampaignRulesDialog_show_mindustry_type_Planet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:show", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	((mindustry_ui_dialogs_CampaignRulesDialog *) NULL_CHECK((frame[0].o)))->F_planet = (jref) (frame[1].o);
	LINE_NUMBER(87);
	((func_mindustry_ui_dialogs_CampaignRulesDialog_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CampaignRulesDialog_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(88);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_CampaignRulesDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CampaignRulesDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[0].o));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:check", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_8(ctx);
		auto proxy = (mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_8 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_8);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:check", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.info"_j.string, 1, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CampaignRulesDialog *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(98);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	jint temp1 = (jint)((func_arc_util_I18NBundle_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_has_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[5].o));
	if (temp1 == 0) goto label_3;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.info"_j.string, 1, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_arc_scene_ui_CheckBox_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_CheckBox, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_CheckBox_left_R_arc_scene_ui_layout_Table])(ctx, (checkCast(ctx, &class_arc_scene_ui_CheckBox, sp[0].o)));
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CampaignRulesDialog *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$check$1_arc_func_Boolp_arc_scene_ui_CheckBox(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:lambda$check$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CampaignRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(97);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	sp += 1;
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_CheckBox_setDisabled_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_CheckBox_setDisabled_boolean])(ctx, sp[0].o, sp[1].i);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$check$0_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:lambda$check$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CampaignRulesDialog(ctx);
	{
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$0_mindustry_game_CampaignRules_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:lambda$rebuild$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(44);
	((mindustry_ui_dialogs_CampaignRulesDialog *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[2].o);
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CampaignRulesDialog *) NULL_CHECK((frame[0].o)))->F_current;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(63);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expand_boolean_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expand_boolean_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(0)), (jint(0)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CampaignRulesDialog *) NULL_CHECK((frame[0].o)))->F_planet;
	if (((jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_allowSectorInvasion) == 0) goto label_5;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.invasions"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolc_7(ctx);
		auto proxy = (mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolc_7 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolc_7);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_9(ctx);
		auto proxy = (mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_9 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_9);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_5:;
	{
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.fog"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolc_8(ctx);
		auto proxy = (mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolc_8 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolc_8);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_10(ctx);
		auto proxy = (mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_10 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_10);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.hidespawns"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolc_9(ctx);
		auto proxy = (mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolc_9 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolc_9);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_11(ctx);
		auto proxy = (mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_11 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_11);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.randomwaveai"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolc_10(ctx);
		auto proxy = (mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolc_10 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolc_10);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_12(ctx);
		auto proxy = (mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_12 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_12);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.pauseDisabled"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolc_11(ctx);
		auto proxy = (mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolc_11 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolc_11);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_13(ctx);
		auto proxy = (mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_13 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_13);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CampaignRulesDialog *) NULL_CHECK((frame[0].o)))->F_planet;
	if (((jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_showRtsAIRule) == 0) goto label_11;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.rtsai.campaign"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolc_12(ctx);
		auto proxy = (mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolc_12 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolc_12);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_14(ctx);
		auto proxy = (mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_14 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_14);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_11:;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CampaignRulesDialog *) NULL_CHECK((frame[0].o)))->F_planet;
	if (((jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_clearSectorOnLose) != 0) goto label_13;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.clearsectoronloss"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolc_13(ctx);
		auto proxy = (mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolc_13 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolc_13);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_15(ctx);
		auto proxy = (mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_15 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolp_15);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_13:;
	LINE_NUMBER(81);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$17_mindustry_game_CampaignRules_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:lambda$rebuild$17", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CampaignRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_clearSectorOnLose);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$16_mindustry_game_CampaignRules_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:lambda$rebuild$16", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CampaignRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(79);
	((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_clearSectorOnLose = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$15_mindustry_game_CampaignRules_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:lambda$rebuild$15", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CampaignRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_rtsAI);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$14_mindustry_game_CampaignRules_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:lambda$rebuild$14", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CampaignRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(75);
	((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_rtsAI = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$13_mindustry_game_CampaignRules_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:lambda$rebuild$13", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CampaignRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_pauseDisabled);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$12_mindustry_game_CampaignRules_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:lambda$rebuild$12", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CampaignRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(72);
	((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_pauseDisabled = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$11_mindustry_game_CampaignRules_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:lambda$rebuild$11", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CampaignRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_randomWaveAI);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$10_mindustry_game_CampaignRules_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:lambda$rebuild$10", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CampaignRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(71);
	((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_randomWaveAI = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$9_mindustry_game_CampaignRules_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:lambda$rebuild$9", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CampaignRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_hideSpawns);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$8_mindustry_game_CampaignRules_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:lambda$rebuild$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CampaignRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(70);
	((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_hideSpawns = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$7_mindustry_game_CampaignRules_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:lambda$rebuild$7", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CampaignRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_fog);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$6_mindustry_game_CampaignRules_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:lambda$rebuild$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CampaignRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(69);
	((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_fog = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$5_mindustry_game_CampaignRules_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:lambda$rebuild$5", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CampaignRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_sectorInvasion);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$4_mindustry_game_CampaignRules_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:lambda$rebuild$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CampaignRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(66);
	((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_sectorInvasion = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$1_mindustry_game_CampaignRules_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:lambda$rebuild$1", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CampaignRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(10.0f)));
	LINE_NUMBER(48);
	clinit_arc_scene_ui_ButtonGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ButtonGroup);
	init_arc_scene_ui_ButtonGroup(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(49);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_flatTogglet;
	frame[3].o = sp[0].o;
	LINE_NUMBER(51);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(140.0f)), (jfloat(50.0f)));
	LINE_NUMBER(53);
	clinit_mindustry_game_Difficulty(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Difficulty_all;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_7:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_8;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(54);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_game_Difficulty_localized_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_game_Difficulty_localized_R_java_lang_String])(ctx, (frame[7].o));
	sp[2].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CampaignRulesDialog_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_ui_dialogs_CampaignRulesDialog_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignRulesDialog_invoke_java_lang_Runnable_5);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = frame[2].o;
	LINE_NUMBER(56);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignRulesDialog_invoke_arc_func_Boolf_1);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = frame[7].o;
	LINE_NUMBER(57);
	sp[1].o = (jobject)((func_mindustry_game_Difficulty_info_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Difficulty_info_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(59);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	{
	jint temp0 = (jint)((func_mindustry_game_Difficulty_ordinal_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_game_Difficulty_ordinal_R_int])(ctx, (frame[7].o));
	if ((temp0 % (jint(2))) != (jint(1))) goto label_13;
	}
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_13:;
	{
	LINE_NUMBER(53);
	INST_IINC(6, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(63);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$3_mindustry_game_CampaignRules_mindustry_game_Difficulty_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:lambda$rebuild$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CampaignRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_difficulty;
	if (sp[0].o != (frame[1].o)) goto label_1;
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

void SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$2_mindustry_game_CampaignRules_mindustry_game_Difficulty(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:lambda$rebuild$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CampaignRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(55);
	((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_difficulty = (jref) (frame[1].o);
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CampaignRulesDialog_lambda$new$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:lambda$new$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	((func_mindustry_ui_dialogs_CampaignRulesDialog_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CampaignRulesDialog_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CampaignRulesDialog_lambda$new$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CampaignRulesDialog:lambda$new$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CampaignRulesDialog *) NULL_CHECK((frame[0].o)))->F_planet;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CampaignRulesDialog *) NULL_CHECK((frame[0].o)))->F_planet;
	((func_mindustry_type_Planet_saveRules) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_saveRules])(ctx, sp[0].o);
	LINE_NUMBER(26);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_CampaignRulesDialog *) NULL_CHECK((frame[0].o)))->F_planet;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CampaignRulesDialog *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_campaignRules;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CampaignRulesDialog *) NULL_CHECK((frame[0].o)))->F_planet;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	((func_mindustry_game_CampaignRules_apply_mindustry_type_Planet_mindustry_game_Rules) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_CampaignRules_apply_mindustry_type_Planet_mindustry_game_Rules])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(28);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	SM_mindustry_gen_Call_setRules_mindustry_game_Rules(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_CampaignRulesDialog[] {
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
	(void *) M_mindustry_ui_dialogs_BaseDialog_addCloseButton,
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
	(void *) M_mindustry_ui_dialogs_BaseDialog_setTitleColor_arc_graphics_Color,
	(void *) M_mindustry_ui_dialogs_BaseDialog_makeButtonOverlay,
	(void *) M_mindustry_ui_dialogs_BaseDialog_onResize_java_lang_Runnable,
	(void *) M_mindustry_ui_dialogs_BaseDialog_addCloseListener,
	(void *) M_mindustry_ui_dialogs_BaseDialog_addCloseButton_float,
	(void *) M_mindustry_ui_dialogs_BaseDialog_lambda$onResize$0_java_lang_Runnable_mindustry_game_EventType$ResizeEvent,
	(void *) M_mindustry_ui_dialogs_CampaignRulesDialog_lambda$new$1,
	(void *) M_mindustry_ui_dialogs_CampaignRulesDialog_lambda$new$0,
	(void *) M_mindustry_ui_dialogs_CampaignRulesDialog_rebuild,
	(void *) M_mindustry_ui_dialogs_CampaignRulesDialog_show_mindustry_type_Planet,
	(void *) M_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp,
	(void *) M_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp,
	(void *) M_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$0_mindustry_game_CampaignRules_arc_scene_ui_layout_Table,
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
	{ "setTitleColor", "(Larc/graphics/Color;)V" },
	{ "makeButtonOverlay", "()V" },
	{ "onResize", "(Ljava/lang/Runnable;)V" },
	{ "addCloseListener", "()V" },
	{ "addCloseButton", "(F)V" },
	{ "lambda$onResize$0", "(Ljava/lang/Runnable;Lmindustry/game/EventType$ResizeEvent;)V" },
	{ "lambda$new$1", "()V" },
	{ "lambda$new$0", "()V" },
	{ "rebuild", "()V" },
	{ "show", "(Lmindustry/type/Planet;)V" },
	{ "check", "(Ljava/lang/String;Larc/func/Boolc;Larc/func/Boolp;)V" },
	{ "check", "(Ljava/lang/String;Larc/func/Boolc;Larc/func/Boolp;Larc/func/Boolp;)V" },
	{ "lambda$rebuild$0", "(Lmindustry/game/CampaignRules;Larc/scene/ui/layout/Table;)V" },
};

static FieldMetadata fields[] {
	{ "planet", &class_mindustry_type_Planet, offsetof(mindustry_ui_dialogs_CampaignRulesDialog, F_planet), "Lmindustry/type/Planet;", 0 },
	{ "current", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_dialogs_CampaignRulesDialog, F_current), "Larc/scene/ui/layout/Table;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_CampaignRulesDialog, 0, "()V", 1 },
	{ "rebuild", (intptr_t) M_mindustry_ui_dialogs_CampaignRulesDialog_rebuild, VTABLE_mindustry_ui_dialogs_CampaignRulesDialog_rebuild, "()V", 0 },
	{ "show", (intptr_t) M_mindustry_ui_dialogs_CampaignRulesDialog_show_mindustry_type_Planet, VTABLE_mindustry_ui_dialogs_CampaignRulesDialog_show_mindustry_type_Planet, "(Lmindustry/type/Planet;)V", 1 },
	{ "check", (intptr_t) M_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp, VTABLE_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp, "(Ljava/lang/String;Larc/func/Boolc;Larc/func/Boolp;)V", 0 },
	{ "check", (intptr_t) M_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp, VTABLE_mindustry_ui_dialogs_CampaignRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp, "(Ljava/lang/String;Larc/func/Boolc;Larc/func/Boolp;Larc/func/Boolp;)V", 0 },
	{ "lambda$check$1", (intptr_t) SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$check$1_arc_func_Boolp_arc_scene_ui_CheckBox, 0, "(Larc/func/Boolp;Larc/scene/ui/CheckBox;)V", 4106 },
	{ "lambda$check$0", (intptr_t) SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$check$0_R_boolean, 0, "()Z", 4106 },
	{ "lambda$rebuild$0", (intptr_t) M_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$0_mindustry_game_CampaignRules_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$0_mindustry_game_CampaignRules_arc_scene_ui_layout_Table, "(Lmindustry/game/CampaignRules;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$rebuild$17", (intptr_t) SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$17_mindustry_game_CampaignRules_R_boolean, 0, "(Lmindustry/game/CampaignRules;)Z", 4106 },
	{ "lambda$rebuild$16", (intptr_t) SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$16_mindustry_game_CampaignRules_boolean, 0, "(Lmindustry/game/CampaignRules;Z)V", 4106 },
	{ "lambda$rebuild$15", (intptr_t) SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$15_mindustry_game_CampaignRules_R_boolean, 0, "(Lmindustry/game/CampaignRules;)Z", 4106 },
	{ "lambda$rebuild$14", (intptr_t) SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$14_mindustry_game_CampaignRules_boolean, 0, "(Lmindustry/game/CampaignRules;Z)V", 4106 },
	{ "lambda$rebuild$13", (intptr_t) SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$13_mindustry_game_CampaignRules_R_boolean, 0, "(Lmindustry/game/CampaignRules;)Z", 4106 },
	{ "lambda$rebuild$12", (intptr_t) SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$12_mindustry_game_CampaignRules_boolean, 0, "(Lmindustry/game/CampaignRules;Z)V", 4106 },
	{ "lambda$rebuild$11", (intptr_t) SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$11_mindustry_game_CampaignRules_R_boolean, 0, "(Lmindustry/game/CampaignRules;)Z", 4106 },
	{ "lambda$rebuild$10", (intptr_t) SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$10_mindustry_game_CampaignRules_boolean, 0, "(Lmindustry/game/CampaignRules;Z)V", 4106 },
	{ "lambda$rebuild$9", (intptr_t) SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$9_mindustry_game_CampaignRules_R_boolean, 0, "(Lmindustry/game/CampaignRules;)Z", 4106 },
	{ "lambda$rebuild$8", (intptr_t) SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$8_mindustry_game_CampaignRules_boolean, 0, "(Lmindustry/game/CampaignRules;Z)V", 4106 },
	{ "lambda$rebuild$7", (intptr_t) SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$7_mindustry_game_CampaignRules_R_boolean, 0, "(Lmindustry/game/CampaignRules;)Z", 4106 },
	{ "lambda$rebuild$6", (intptr_t) SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$6_mindustry_game_CampaignRules_boolean, 0, "(Lmindustry/game/CampaignRules;Z)V", 4106 },
	{ "lambda$rebuild$5", (intptr_t) SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$5_mindustry_game_CampaignRules_R_boolean, 0, "(Lmindustry/game/CampaignRules;)Z", 4106 },
	{ "lambda$rebuild$4", (intptr_t) SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$4_mindustry_game_CampaignRules_boolean, 0, "(Lmindustry/game/CampaignRules;Z)V", 4106 },
	{ "lambda$rebuild$1", (intptr_t) SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$1_mindustry_game_CampaignRules_arc_scene_ui_layout_Table, 0, "(Lmindustry/game/CampaignRules;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$rebuild$3", (intptr_t) SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$3_mindustry_game_CampaignRules_mindustry_game_Difficulty_arc_scene_ui_TextButton_R_boolean, 0, "(Lmindustry/game/CampaignRules;Lmindustry/game/Difficulty;Larc/scene/ui/TextButton;)Z", 4106 },
	{ "lambda$rebuild$2", (intptr_t) SM_mindustry_ui_dialogs_CampaignRulesDialog_lambda$rebuild$2_mindustry_game_CampaignRules_mindustry_game_Difficulty, 0, "(Lmindustry/game/CampaignRules;Lmindustry/game/Difficulty;)V", 4106 },
	{ "lambda$new$1", (intptr_t) M_mindustry_ui_dialogs_CampaignRulesDialog_lambda$new$1, VTABLE_mindustry_ui_dialogs_CampaignRulesDialog_lambda$new$1, "()V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_ui_dialogs_CampaignRulesDialog_lambda$new$0, VTABLE_mindustry_ui_dialogs_CampaignRulesDialog_lambda$new$0, "()V", 4098 },
};

Class class_mindustry_ui_dialogs_CampaignRulesDialog{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/CampaignRulesDialog",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_BaseDialog,
		.size = sizeof(mindustry_ui_dialogs_CampaignRulesDialog),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_CampaignRulesDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_CampaignRulesDialog,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_CampaignRulesDialog,
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
		.methodCount = 27,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 302,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_CampaignRulesDialog = registerClass(&class_mindustry_ui_dialogs_CampaignRulesDialog);

}
