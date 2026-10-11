#include "mindustry/logic/LogicDialog.h"
#include "arc/func/Prov.h"
#include "arc/graphics/g2d/Font.h"
#include "mindustry/logic/LogicDialog_invoke_arc_func_Cons_20.h"
#include "arc/Input.h"
#include "mindustry/logic/LogicDialog_invoke_arc_func_Cons_24.h"
#include "mindustry/logic/LogicDialog_invoke_arc_func_Cons_23.h"
#include "mindustry/logic/LogicDialog_invoke_arc_func_Cons_22.h"
#include "mindustry/logic/LogicDialog_invoke_arc_func_Cons_21.h"
#include "arc/graphics/Color.h"
#include "mindustry/logic/LogicDialog_invoke_arc_func_Cons_28.h"
#include "mindustry/logic/LogicDialog_invoke_arc_func_Cons_27.h"
#include "mindustry/logic/LogicDialog_invoke_arc_func_Cons_26.h"
#include "java/lang/Runnable.h"
#include "arc/input/KeyCode.h"
#include "mindustry/logic/LogicDialog_invoke_arc_func_Cons_25.h"
#include "mindustry/logic/LogicDialog_invoke_arc_func_Cons_19.h"
#include "arc/scene/ui/Image.h"
#include "mindustry/logic/LogicDialog_invoke_arc_func_Cons_18.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/logic/LogicDialog_invoke_arc_func_Prov_1.h"
#include "mindustry/logic/LogicDialog_3.h"
#include "arc/func/Boolf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "mindustry/logic/LogicDialog_invoke_arc_func_Cons_31.h"
#include "mindustry/logic/LogicDialog_invoke_arc_func_Cons_30.h"
#include "arc/util/Time.h"
#include "mindustry/logic/LogicDialog_invoke_arc_func_Cons_33.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "mindustry/logic/LogicDialog_invoke_arc_func_Cons_32.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LogicDialog_invoke_arc_func_Cons_29.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/logic/LCategory.h"
#include "arc/scene/actions/ColorAction.h"
#include "mindustry/logic/LogicDialog_invoke_arc_func_Boolf_2.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_29.h"
#include "mindustry/logic/LogicDialog_invoke_arc_func_Boolf_3.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_28.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_27.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_26.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_25.h"
#include "mindustry/game/Rules.h"
#include "mindustry/logic/LExecutor_PrintI.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/core/GameState_State.h"
#include "arc/func/Cons.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/logic/LCanvas.h"
#include "mindustry/ui/Fonts.h"
#include "arc/scene/ui/ScrollPane.h"
#include "mindustry/logic/GlobalVarsDialog.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "mindustry/logic/LStatements_InvalidStatement.h"
#include "mindustry/Vars.h"
#include "arc/scene/ui/TextField.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_49.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_48.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_47.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_46.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_45.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_44.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_43.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_42.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_41.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_40.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/gen/LogicIO.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/TextButton.h"
#include "java/lang/Throwable.h"
#include "java/util/Locale.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_39.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_38.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_37.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_36.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_35.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_34.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_33.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_32.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_31.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_30.h"
#include "arc/scene/ui/Label.h"
#include "mindustry/logic/LogicDialog.h"
#include "mindustry/net/Net.h"
#include "mindustry/logic/LStatement.h"
#include "mindustry/editor/MapEditorDialog.h"
#include "arc/scene/Action.h"
#include "mindustry/logic/LExecutor.h"
#include "arc/Application.h"
#include "java/lang/String.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/logic/LCanvas_DragLayout.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "mindustry/logic/LogicDialog_2.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/logic/LogicDialog_1.h"
#include "mindustry/logic/LogicDialog_invoke_arc_func_Cons_17.h"
#include "java/lang/Enum.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicBuild.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/actions/Actions.h"
#include "arc/scene/style/Style.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/game/Team.h"
#include "java/util/Objects.h"
#include "arc/struct/SnapshotSeq.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_logic_LogicDialog(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LogicDialog *) object;
	if (self->F_canvas)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_canvas)->clazz)->markFunction)((jobject) self->F_canvas, mark, depth + 1);
	if (self->F_consumer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_consumer)->clazz)->markFunction)((jobject) self->F_consumer, mark, depth + 1);
	if (self->F_executor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_executor)->clazz)->markFunction)((jobject) self->F_executor, mark, depth + 1);
	if (self->F_globalsDialog)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_globalsDialog)->clazz)->markFunction)((jobject) self->F_globalsDialog, mark, depth + 1);
}

void clinit_mindustry_logic_LogicDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
}

void init_mindustry_logic_LogicDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicDialog(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(37);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"logic"_j))));
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_arc_func_Cons_17);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_logic_LogicDialog *) NULL_CHECK(sp[0].o))->F_consumer = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_GlobalVarsDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_logic_GlobalVarsDialog);
	init_mindustry_logic_GlobalVarsDialog(ctx, sp[1].o);
	((mindustry_logic_LogicDialog *) NULL_CHECK(sp[0].o))->F_globalsDialog = (jref) sp[1].o;
	LINE_NUMBER(39);
	((func_mindustry_logic_LogicDialog_clearChildren) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LogicDialog_clearChildren])(ctx, (frame[0].o));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LCanvas(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_logic_LCanvas);
	init_mindustry_logic_LCanvas(ctx, sp[1].o);
	((mindustry_logic_LogicDialog *) NULL_CHECK(sp[0].o))->F_canvas = (jref) sp[1].o;
	LINE_NUMBER(42);
	((mindustry_ui_dialogs_BaseDialog *) NULL_CHECK((frame[0].o)))->F_shouldPause = (jint(1));
	LINE_NUMBER(44);
	((func_mindustry_logic_LogicDialog_addCloseListener) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LogicDialog_addCloseListener])(ctx, (frame[0].o));
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_25(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_25 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_25);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_logic_LogicDialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LogicDialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_26(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_26 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_26);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_logic_LogicDialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LogicDialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_27(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_27 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_27);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_logic_LogicDialog_hidden_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LogicDialog_hidden_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_28(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_28 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_28);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_logic_LogicDialog_onResize_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LogicDialog_onResize_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_enter;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_29(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_29 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_29);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_logic_LogicDialog_keyDown_arc_input_KeyCode_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LogicDialog_keyDown_arc_input_KeyCode_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	sp[0].o = (jobject)((func_mindustry_logic_LogicDialog_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LogicDialog_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"canvas"_j))));
	LINE_NUMBER(70);
	sp[0].o = (jobject)((func_mindustry_logic_LogicDialog_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LogicDialog_row_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[0].o = (jobject)((func_mindustry_logic_LogicDialog_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LogicDialog_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"canvas"_j))));
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LogicDialog_typeColor_mindustry_logic_LVar_arc_graphics_Color_R_arc_graphics_Color(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:typeColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(76);
	sp[0].o = frame[1].o;
	LINE_NUMBER(77);
	sp += 1;
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_isobj) != 0) goto label_2;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_place;
	goto label_3;
label_2:;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	if (sp[0].o != nullptr) goto label_4;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_darkGray;
	goto label_3;
label_4:;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_String)) == 0) goto label_5;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_ammo;
	goto label_3;
label_5:;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_ctype_Content)) == 0) goto label_6;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_logicOperations;
	goto label_3;
label_6:;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_gen_Building)) == 0) goto label_7;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_logicBlocks;
	goto label_3;
label_7:;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_gen_Unit)) == 0) goto label_8;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_logicUnits;
	goto label_3;
label_8:;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_game_Team)) == 0) goto label_9;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_logicUnits;
	goto label_3;
label_9:;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Enum)) == 0) goto label_10;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_logicIo;
	goto label_3;
label_10:;
	LINE_NUMBER(85);
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
label_3:;
	{
	sp -= 2;
	LINE_NUMBER(76);
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LogicDialog_typeName_mindustry_logic_LVar_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:typeName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(91);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_isobj) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"number"_j));
	goto label_2;
label_1:;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	if (sp[0].o != nullptr) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
	goto label_2;
label_3:;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_String)) == 0) goto label_4;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"string"_j));
	goto label_2;
label_4:;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_ctype_Content)) == 0) goto label_5;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"content"_j));
	goto label_2;
label_5:;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_gen_Building)) == 0) goto label_6;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"building"_j));
	goto label_2;
label_6:;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_game_Team)) == 0) goto label_7;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"team"_j));
	goto label_2;
label_7:;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_gen_Unit)) == 0) goto label_8;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"unit"_j));
	goto label_2;
label_8:;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Enum)) == 0) goto label_9;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"enum"_j));
	goto label_2;
label_9:;
	LINE_NUMBER(99);
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"unknown"_j));
label_2:;
	LINE_NUMBER(90);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_setup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:setup", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, sp[0].o);
	LINE_NUMBER(104);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(160.0f)), (jfloat(64.0f)));
	LINE_NUMBER(105);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@back"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_left;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_30(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_30 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_30);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"back"_j))));
	LINE_NUMBER(107);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@edit"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_edit;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_31(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_31 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_31);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"edit"_j));
	LINE_NUMBER(158);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(160);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	}
label_6:;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@variables"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_menu;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_32(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_32 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_32);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"variables"_j));
	LINE_NUMBER(237);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_arc_func_Cons_18(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_arc_func_Cons_18 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_arc_func_Cons_18);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(245);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@add"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_add;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_33(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_33 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_33);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_arc_func_Boolf_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(247);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(249);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_34(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_34 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_34);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LogicDialog_shouldShowVariables_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:shouldShowVariables", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_executor;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_vars;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
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

void M_mindustry_logic_LogicDialog_showAddDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:showAddDialog", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(257);
	((func_mindustry_logic_LogicDialog_showAddDialog_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LogicDialog_showAddDialog_int])(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(258);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_showAddDialog_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:showAddDialog", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(261);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@add"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(262);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_arc_func_Cons_19(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_arc_func_Cons_19 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_arc_func_Cons_19);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(344);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxHeight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxHeight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((jfloat(temp0)) * (jfloat(0.8f))));
	LINE_NUMBER(345);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[2].o));
	LINE_NUMBER(346);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[2].o));
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_show_java_lang_String_mindustry_logic_LExecutor_boolean_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:show", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(350);
	((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_executor = (jref) (frame[2].o);
	LINE_NUMBER(351);
	((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_privileged = (frame[3].i);
	LINE_NUMBER(352);
	((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_forceRestart = (jint(0));
	LINE_NUMBER(353);
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_statements;
	((func_mindustry_logic_LCanvas$DragLayout_clearChildren) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$DragLayout_clearChildren])(ctx, sp[0].o);
	LINE_NUMBER(354);
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_pane;
	((func_arc_scene_ui_ScrollPane_setScrollYForce_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_setScrollYForce_float])(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(355);
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	((func_mindustry_logic_LCanvas_rebuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas_rebuild])(ctx, sp[0].o);
	LINE_NUMBER(356);
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_privileged = (frame[3].i);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	((func_mindustry_logic_LCanvas_load_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas_load_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(362);
	goto label_11;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(359);
	frame[5].o = sp[0].o;
	LINE_NUMBER(360);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[5].o));
	LINE_NUMBER(361);
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	((func_mindustry_logic_LCanvas_load_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas_load_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	}
label_11:;
	{
	LINE_NUMBER(363);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_arc_func_Cons_20(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_arc_func_Cons_20 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_arc_func_Cons_20);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_logic_LogicDialog *) NULL_CHECK(sp[0].o))->F_consumer = (jref) sp[1].o;
	LINE_NUMBER(369);
	sp[0].o = (jobject)((func_mindustry_logic_LogicDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LogicDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[0].o));
	LINE_NUMBER(370);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$show$0_java_lang_String_arc_func_Cons_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$show$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(364);
	if (((jint)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_forceRestart) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(365);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[3].o));
	}
label_2:;
	LINE_NUMBER(367);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$showAddDialog$0_int_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$showAddDialog$0", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(264);
	sp[0].o = (jobject)createArray(ctx, &class_arc_func_Prov, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[5].o = sp[0].o;
	LINE_NUMBER(265);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Runnable, (jint(1)));
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_35(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_35 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_35);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	frame[6].o = sp[0].o;
	LINE_NUMBER(267);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(269);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_arc_func_Cons_21(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_arc_func_Cons_21 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_arc_func_Cons_21);
		proxy->F_field5 = (jref) (frame[2].o);
		proxy->F_field4 = (frame[1].i);
		proxy->F_field3 = (jref) (frame[5].o);
		proxy->F_field2 = (jref) (frame[6].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(290);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(292);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_arc_func_Cons_22(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_arc_func_Cons_22 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_arc_func_Cons_22);
		proxy->F_field5 = (jref) (frame[2].o);
		proxy->F_field4 = (frame[1].i);
		proxy->F_field3 = (jref) (frame[5].o);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(343);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(344);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$showAddDialog$5_Array1_java_lang_Runnable_Array1_java_lang_String_Array1_arc_func_Prov_int_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$showAddDialog$5", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(293);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_36(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_36 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_36);
		proxy->F_field5 = (jref) (frame[5].o);
		proxy->F_field4 = (frame[4].i);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(342);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$showAddDialog$6_arc_scene_ui_layout_Table_Array1_java_lang_String_Array1_arc_func_Prov_int_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$showAddDialog$6", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(294);
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, (frame[1].o));
	LINE_NUMBER(296);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(298);
	ARRAY_ACCESS(jobject, (frame[3].o), (jint(0))) = (jobject(nullptr));
	LINE_NUMBER(300);
	clinit_mindustry_gen_LogicIO(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_LogicIO_allStatements;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_arc_func_Prov, sp[0].o));
	LINE_NUMBER(301);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_mindustry_logic_LStatement, sp[0].o));
	LINE_NUMBER(302);
	if ((isInstance(ctx, (frame[9].o), &class_mindustry_logic_LStatements$InvalidStatement)) != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_logic_LStatement_hidden_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_logic_LStatement_hidden_R_boolean])(ctx, (frame[9].o));
	if (temp0 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_logic_LStatement_privileged_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_logic_LStatement_privileged_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_8;
	}
	{
	if (((jint)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_privileged) == 0) goto label_4;
	}
label_8:;
	{
	jint temp0 = (jint)((func_mindustry_logic_LStatement_nonPrivileged_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_logic_LStatement_nonPrivileged_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_9;
	}
	{
	if (((jint)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_privileged) != 0) goto label_4;
	}
label_9:;
	{
	sp[0].o = frame[6].o;
	LINE_NUMBER(303);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_mindustry_logic_LStatement_localizedName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_logic_LStatement_localizedName_R_java_lang_String])(ctx, (frame[9].o));
	clinit_java_util_Locale(ctx);
	sp[1].o = (jobject)SF_java_util_Locale_ROOT;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (frame[6].o));
	if (temp0 != 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_mindustry_logic_LStatement_typeName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_logic_LStatement_typeName_R_java_lang_String])(ctx, (frame[9].o));
	clinit_java_util_Locale(ctx);
	sp[1].o = (jobject)SF_java_util_Locale_ROOT;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (frame[6].o));
	if (temp0 == 0) goto label_4;
	}
label_11:;
	{
	if (((jint)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_privileged) != 0) goto label_12;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_logicUnitControl) != 0) goto label_12;
	}
	{
	sp[0].o = frame[9].o;
	LINE_NUMBER(304);
	sp[0].o = (jobject)((func_mindustry_logic_LStatement_category_R_mindustry_logic_LCategory) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatement_category_R_mindustry_logic_LCategory])(ctx, sp[0].o);
	clinit_mindustry_logic_LCategory(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LCategory_unit;
	if (sp[0].o != sp[1].o) goto label_12;
	}
	goto label_4;
label_12:;
	{
	LINE_NUMBER(306);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))) != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(307);
	ARRAY_ACCESS(jobject, (frame[3].o), (jint(0))) = (frame[8].o);
	}
label_14:;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((func_mindustry_logic_LStatement_category_R_mindustry_logic_LCategory) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_logic_LStatement_category_R_mindustry_logic_LCategory])(ctx, (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(311);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LCategory *) NULL_CHECK((frame[10].o)))->F_name;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_find_java_lang_String_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_find_java_lang_String_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	frame[11].o = (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o));
	LINE_NUMBER(312);
	if ((frame[11].o) != nullptr) goto label_18;
	}
	{
	LINE_NUMBER(313);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_arc_func_Cons_23(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_arc_func_Cons_23 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_arc_func_Cons_23);
		proxy->F_field0 = (jref) (frame[10].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(319);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(321);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(323);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_arc_func_Cons_24(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_arc_func_Cons_24 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_arc_func_Cons_24);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_logic_LCategory *) NULL_CHECK((frame[10].o)))->F_name;
	LINE_NUMBER(325);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[11].o = (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o));
	LINE_NUMBER(326);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_18:;
	{
	LINE_NUMBER(329);
	clinit_arc_scene_ui_TextButton$TextButtonStyle(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_TextButton$TextButtonStyle);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_flatt;
	init_arc_scene_ui_TextButton$TextButtonStyle_arc_scene_ui_TextButton$TextButtonStyle(ctx, sp[0].o, sp[1].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(330);
	sp[0].o = frame[12].o;
	sp[1].o = (jobject)((mindustry_logic_LCategory *) NULL_CHECK((frame[10].o)))->F_color;
	((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK(sp[0].o))->F_fontColor = (jref) sp[1].o;
	LINE_NUMBER(331);
	sp[0].o = frame[12].o;
	clinit_mindustry_ui_Fonts(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Fonts_outline;
	((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK(sp[0].o))->F_font = (jref) sp[1].o;
	LINE_NUMBER(333);
	sp[0].o = frame[11].o;
	sp[1].o = (jobject)((func_mindustry_logic_LStatement_localizedName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_logic_LStatement_localizedName_R_java_lang_String])(ctx, (frame[9].o));
	sp[2].o = frame[12].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_37(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_37 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_37);
		proxy->F_field3 = (jref) (frame[5].o);
		proxy->F_field2 = (jref) (frame[8].o);
		proxy->F_field1 = (frame[4].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(130.0f);
	jfloat temp1 = jfloat(50.0f);
	LINE_NUMBER(336);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_arc_func_Cons_25(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_arc_func_Cons_25 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_arc_func_Cons_25);
		proxy->F_field0 = (jref) (frame[9].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(338);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[11].o));
	if ((((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) % (jint(3))) != 0) goto label_30;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[11].o));
	}
label_30:;
	LINE_NUMBER(339);
	goto label_4;
label_5:;
	LINE_NUMBER(340);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_logic_LogicDialog_lambda$showAddDialog$10_mindustry_logic_LStatement_arc_scene_ui_layout_Cell(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$showAddDialog$10", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(336);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_logic_LStatement_statementKey_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatement_statementKey_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"lst.\u0001"_j.string, 1, sp[1].o);
	SM_mindustry_logic_LCanvas_tooltip_arc_scene_ui_layout_Cell_java_lang_String(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$showAddDialog$9_int_arc_func_Prov_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$showAddDialog$9", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	sp += 1;
	if ((frame[1].i) != (jint(-1))) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_statements;
	sp[0].o = (jobject)((func_mindustry_logic_LCanvas$DragLayout_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$DragLayout_getChildren_R_arc_struct_SnapshotSeq])(ctx, sp[0].o);
	jint temp0 = (jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ILOAD(1);
label_2:;
	{
	sp -= 2;
	sp[2].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	((func_mindustry_logic_LCanvas_addAt_int_mindustry_logic_LStatement) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas_addAt_int_mindustry_logic_LStatement])(ctx, sp[0].o, sp[1].i, (checkCast(ctx, &class_mindustry_logic_LStatement, sp[2].o)));
	LINE_NUMBER(335);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[3].o));
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LogicDialog_lambda$showAddDialog$8_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$showAddDialog$8", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(324);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LogicDialog_lambda$showAddDialog$7_mindustry_logic_LCategory_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$showAddDialog$7", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((mindustry_logic_LCategory *) NULL_CHECK((frame[0].o)))->F_icon;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(315);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LCategory *) NULL_CHECK((frame[0].o)))->F_icon;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_darkishGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(15.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	}
label_1:;
	{
	LINE_NUMBER(317);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_logic_LCategory_localized_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LCategory_localized_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_darkishGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[1].o = (jobject)((func_mindustry_logic_LCategory_description_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LCategory_description_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(318);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_darkishGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(319);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$showAddDialog$2_Array1_java_lang_String_Array1_java_lang_Runnable_Array1_arc_func_Prov_int_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$showAddDialog$2", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(270);
	sp[0].o = frame[6].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_zoom;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(271);
	sp[0].o = frame[6].o;
	sp[1].o = jobject(nullptr);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_arc_func_Cons_26(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_arc_func_Cons_26 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_arc_func_Cons_26);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(274);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[7].o = (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o));
	LINE_NUMBER(275);
	((func_arc_scene_ui_TextField_setMessageText_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_TextField_setMessageText_java_lang_String])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"@players.search"_j))));
	LINE_NUMBER(278);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_5;
	}
	{
	LINE_NUMBER(281);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[1].o = frame[7].o;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_38(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_38 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_38);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(283);
	sp[0].o = frame[7].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_enter;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_39(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_39 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_39);
		proxy->F_field4 = (jref) (frame[5].o);
		proxy->F_field3 = (frame[4].i);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_arc_scene_ui_TextField_keyDown_arc_input_KeyCode_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_keyDown_arc_input_KeyCode_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_5:;
	LINE_NUMBER(290);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$showAddDialog$4_Array1_java_lang_String_Array1_arc_func_Prov_int_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$showAddDialog$4", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(284);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	if (temp0 != 0) goto label_1;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	sp += 1;
	if ((frame[3].i) != (jint(-1))) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_statements;
	sp[0].o = (jobject)((func_mindustry_logic_LCanvas$DragLayout_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$DragLayout_getChildren_R_arc_struct_SnapshotSeq])(ctx, sp[0].o);
	jint temp0 = (jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].i = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ILOAD(3);
label_4:;
	{
	sp -= 2;
	sp[2].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	((func_mindustry_logic_LCanvas_addAt_int_mindustry_logic_LStatement) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas_addAt_int_mindustry_logic_LStatement])(ctx, sp[0].o, sp[1].i, (checkCast(ctx, &class_mindustry_logic_LStatement, sp[2].o)));
	LINE_NUMBER(286);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[4].o));
	}
label_1:;
	LINE_NUMBER(288);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_logic_LogicDialog_lambda$showAddDialog$3_Array1_java_lang_String_Array1_java_lang_Runnable_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$showAddDialog$3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(272);
	ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))) = (frame[2].o);
	LINE_NUMBER(273);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	LINE_NUMBER(274);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LogicDialog_lambda$showAddDialog$1(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$showAddDialog$1", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_logic_LogicDialog(ctx);
	LINE_NUMBER(265);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LogicDialog_lambda$setup$23_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$23", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_statements;
	sp[0].o = (jobject)((func_mindustry_logic_LCanvas$DragLayout_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$DragLayout_getChildren_R_arc_struct_SnapshotSeq])(ctx, sp[0].o);
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) < (clinit_mindustry_logic_LExecutor(ctx), (jint)SF_mindustry_logic_LExecutor_maxInstructions)) goto label_1;
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

void M_mindustry_logic_LogicDialog_lambda$setup$22(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$22", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(246);
	((func_mindustry_logic_LogicDialog_showAddDialog) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LogicDialog_showAddDialog])(ctx, (frame[0].o));
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$setup$21_arc_scene_ui_TextButton(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$21", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(238);
	jint temp0 = (jint)((func_mindustry_logic_LogicDialog_shouldShowVariables_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LogicDialog_shouldShowVariables_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(239);
	((func_arc_scene_ui_TextButton_setText_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TextButton_setText_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@variables"_j))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(241);
	((func_arc_scene_ui_TextButton_setText_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TextButton_setText_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@logic.globals"_j))));
	}
label_3:;
	LINE_NUMBER(243);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$setup$11(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$11", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(164);
	jint temp0 = (jint)((func_mindustry_logic_LogicDialog_shouldShowVariables_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LogicDialog_shouldShowVariables_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_globalsDialog;
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVarsDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVarsDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(169);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@variables"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(170);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_40(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_40 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_40);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_BaseDialog_hidden_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hidden_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(176);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_41(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_41 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_41);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_BaseDialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(182);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_arc_func_Cons_27(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_arc_func_Cons_27 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_arc_func_Cons_27);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(233);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[1].o));
	LINE_NUMBER(234);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@logic.globals"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_list;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_42(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_42 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_42);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(210.0f)), (jfloat(64.0f)));
	LINE_NUMBER(236);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[1].o));
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$setup$20(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$20", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_globalsDialog;
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVarsDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVarsDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$setup$14_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$14", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(16.0f)));
	LINE_NUMBER(185);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_arc_func_Cons_28(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_arc_func_Cons_28 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_arc_func_Cons_28);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$setup$15_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$15", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(45.0f)));
	LINE_NUMBER(187);
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_vars;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(188);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[5].o)))->F_constant) == 0) goto label_7;
	}
	goto label_8;
label_7:;
	{
	LINE_NUMBER(190);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_gray;
	frame[6].o = sp[0].o;
	LINE_NUMBER(191);
	frame[7].f = (jfloat(8.0f));
	frame[8].f = (jfloat(0.5f));
	frame[9].f = (jfloat(4.0f));
	LINE_NUMBER(193);
	sp[0].o = frame[1].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	clinit_mindustry_gen_Tex(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	sp[3].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, (frame[6].o));
	sp[3].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[3].o, (frame[8].f));
	init_arc_scene_ui_Image_arc_scene_style_Drawable_arc_graphics_Color(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(194);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(2)));
	jint temp0 = jint(0);
	clinit_arc_scene_ui_Image(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	clinit_mindustry_gen_Tex(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	init_arc_scene_ui_Image_arc_scene_style_Drawable_arc_graphics_Color(ctx, sp[2].o, sp[3].o, (frame[6].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_logic_LogicDialog$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicDialog$1);
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[5].o)))->F_name;
	sp[4].o = (jobject)concatStringsRecipe(ctx, u8" \u0001 "_j.string, 1, sp[4].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[5].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	init_mindustry_logic_LogicDialog$1_mindustry_logic_LogicDialog_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp2 = frame[9].f;
	LINE_NUMBER(196);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2);
	LINE_NUMBER(198);
	sp[0].o = frame[1].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	clinit_mindustry_gen_Tex(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	clinit_mindustry_graphics_Pal(ctx);
	sp[3].o = (jobject)SF_mindustry_graphics_Pal_gray;
	sp[3].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[3].o);
	sp[3].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[3].o, (frame[8].f));
	init_arc_scene_ui_Image_arc_scene_style_Drawable_arc_graphics_Color(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(199);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_pane;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_arc_func_Cons_29(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_arc_func_Cons_29 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_arc_func_Cons_29);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp3 = frame[9].f;
	LINE_NUMBER(216);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp3);
	LINE_NUMBER(218);
	sp[0].o = frame[1].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	clinit_mindustry_gen_Tex(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	sp[3].o = frame[5].o;
	clinit_arc_graphics_Color(ctx);
	sp[4].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[4].o);
	sp[3].o = (jobject)SM_mindustry_logic_LogicDialog_typeColor_mindustry_logic_LVar_arc_graphics_Color_R_arc_graphics_Color(ctx, sp[3].o, sp[4].o);
	sp[3].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[3].o, (frame[8].f));
	init_arc_scene_ui_Image_arc_scene_style_Drawable_arc_graphics_Color(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_arc_func_Cons_30(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_arc_func_Cons_30 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_arc_func_Cons_30);
		proxy->F_field1 = (frame[8].f);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(220);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(2)));
	jint temp4 = jint(0);
	clinit_mindustry_logic_LogicDialog$2(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicDialog$2);
	sp[3].o = frame[0].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[4].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	sp[5].o = frame[5].o;
	clinit_arc_graphics_Color(ctx);
	sp[6].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[6].o);
	sp[5].o = (jobject)SM_mindustry_logic_LogicDialog_typeColor_mindustry_logic_LVar_arc_graphics_Color_R_arc_graphics_Color(ctx, sp[5].o, sp[6].o);
	init_mindustry_logic_LogicDialog$2_mindustry_logic_LogicDialog_arc_scene_style_Drawable_arc_graphics_Color_mindustry_logic_LVar(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (frame[5].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp5 = jint(1);
	clinit_mindustry_logic_LogicDialog$3(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicDialog$3);
	sp[3].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_logic_LogicDialog$3_mindustry_logic_LogicDialog_arc_func_Prov(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp6 = jfloat(120.0f);
	LINE_NUMBER(224);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp6);
	LINE_NUMBER(226);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(228);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (6));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_8:;
	{
	LINE_NUMBER(187);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(230);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LogicDialog_lambda$setup$19_mindustry_logic_LVar_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$19", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)SM_mindustry_logic_LogicDialog_typeName_mindustry_logic_LVar_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8" \u0001 "_j.string, 1, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LogicDialog_lambda$setup$18_mindustry_logic_LVar_float_arc_scene_ui_Image(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$18", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicDialog(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(218);
	sp[0].o = frame[2].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_color;
	sp[1].o = (jobject)SM_mindustry_logic_LogicDialog_typeColor_mindustry_logic_LVar_arc_graphics_Color_R_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[1].o, (frame[1].f));
	((func_arc_scene_ui_Image_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LogicDialog_lambda$setup$16_mindustry_logic_LVar_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$16", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(200);
	frame[2].f = (jfloat(15.0f));
	LINE_NUMBER(201);
	sp[0].o = (jobject) createArray(ctx, &class_float, (jint(1)));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(-1.0f));
	frame[3].o = sp[0].o;
	LINE_NUMBER(202);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(140.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[4].o = (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o));
	LINE_NUMBER(203);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_43(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_43 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_43);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (jref) (frame[0].o);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Label_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(215);
	((func_arc_scene_ui_Label_act_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_Label_act_float])(ctx, (frame[4].o), (jfloat(1)));
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LogicDialog_lambda$setup$17_Array1_float_float_mindustry_logic_LVar_arc_scene_ui_Label(jcontext ctx, jobject param0, jfloat param1, jobject param2, jobject param3) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$17", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicDialog(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(204);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))), (jfloat(0)), 1)) < 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jfloat temp3 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp3;
	if ((floatCompare(temp3, (frame[1].f), -1)) < 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(205);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[2].o)))->F_isobj) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[2].o)))->F_objval;
	sp[0].o = (jobject)SM_mindustry_logic_LExecutor$PrintI_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	jdouble temp0 = (jdouble)((mindustry_logic_LVar *) NULL_CHECK((frame[2].o)))->F_numval;
	jlong temp1 = (jlong)SM_java_lang_Math_round_double_R_long(ctx, ((jdouble)((mindustry_logic_LVar *) NULL_CHECK((frame[2].o)))->F_numval));
	jdouble temp2 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, (temp0 - (jdouble(temp1))));
	if ((doubleCompare(temp2, (jdouble(1,000000e-05)), 1)) >= 0) goto label_5;
	}
	{
	jlong temp0 = (jlong)SM_java_lang_Math_round_double_R_long(ctx, ((jdouble)((mindustry_logic_LVar *) NULL_CHECK((frame[2].o)))->F_numval));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxLong(ctx, temp0));
	sp += 1;
	goto label_4;
	}
label_5:;
	{
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxDouble(ctx, ((jdouble)((mindustry_logic_LVar *) NULL_CHECK((frame[2].o)))->F_numval)));
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(206);
	jint temp0 = (jint)((func_arc_scene_ui_Label_textEquals_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_Label_textEquals_java_lang_CharSequence_R_boolean])(ctx, (frame[3].o), (frame[4].o));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(207);
	((func_arc_scene_ui_Label_setText_java_lang_CharSequence) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_Label_setText_java_lang_CharSequence])(ctx, (frame[3].o), (frame[4].o));
	LINE_NUMBER(208);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))), (jfloat(0)), -1)) < 0) goto label_7;
	}
	{
	LINE_NUMBER(209);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_color_arc_graphics_Color_R_arc_scene_actions_ColorAction(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_color_arc_graphics_Color_float_R_arc_scene_actions_ColorAction(ctx, sp[2].o, (jfloat(0.2f)));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	((func_arc_scene_ui_Label_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(212);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0))) = (jfloat(0));
	}
label_2:;
	LINE_NUMBER(214);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$setup$13(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$13", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(177);
	if (((jint)((mindustry_ui_dialogs_BaseDialog *) NULL_CHECK((frame[0].o)))->F_wasPaused) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(178);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_playing;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(180);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$setup$12(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$12", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	if (((jint)((mindustry_ui_dialogs_BaseDialog *) NULL_CHECK((frame[0].o)))->F_wasPaused) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(172);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_paused;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(174);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$setup$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.export"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(109);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_arc_func_Cons_31(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_arc_func_Cons_31 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_arc_func_Cons_31);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(156);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[1].o));
	LINE_NUMBER(157);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[1].o));
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$setup$1_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o), (jfloat(10.0f)));
	LINE_NUMBER(111);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_arc_func_Cons_32(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_arc_func_Cons_32 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_arc_func_Cons_32);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$setup$2_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(112);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_flatt;
	frame[3].o = sp[0].o;
	LINE_NUMBER(113);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(280.0f)), (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(115);
	if (((jint)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_privileged) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_executor;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_build;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_editor;
	jint temp0 = (jint)((func_mindustry_editor_MapEditorDialog_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_isShown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(116);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.worldprocessors.editname"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_edit;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_44(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_44 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_44);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(125);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(128);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@clear"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_cancel;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_45(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_45 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_45);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(131);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(133);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@copy.clipboard"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_copy;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_46(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_46 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_46);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp1 = jfloat(12.0f);
	LINE_NUMBER(136);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(138);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@load.clipboard"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_download;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_47(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_47 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_47);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp2 = jfloat(12.0f);
	LINE_NUMBER(145);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_arc_func_Boolf_3);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(147);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@logic.restart"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_refresh;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_48(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_48 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_48);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp3 = jfloat(12.0f);
	LINE_NUMBER(151);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp3);
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$setup$10_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$10", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(148);
	((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_forceRestart = (jint(1));
	LINE_NUMBER(149);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(150);
	((func_mindustry_logic_LogicDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LogicDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_LogicDialog_lambda$setup$9_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$9", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(145);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[0].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[0].o))(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_1;
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

void M_mindustry_logic_LogicDialog_lambda$setup$8_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$8", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(139);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[1].o))(ctx, sp[1].o);
	((func_mindustry_logic_LCanvas_load_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas_load_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(144);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(142);
	frame[2].o = sp[0].o;
	LINE_NUMBER(143);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_Throwable])(ctx, sp[0].o, (frame[2].o));
	}
label_5:;
	LINE_NUMBER(145);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$setup$7_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(134);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(135);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	sp[1].o = (jobject)((func_mindustry_logic_LCanvas_save_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LCanvas_save_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_Application_setClipboardText_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_setClipboardText_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$setup$5_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$5", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(129);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@logic.clear.confirm"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_49(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_49 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_49);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(130);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$setup$6(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$6", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	((func_mindustry_logic_LCanvas_clearStatements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas_clearStatements])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$setup$3_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$3", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(117);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8""_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@editor.name"_j));
	jint temp0 = 32;
	sp[3].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[3].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[3].o))->F_build;
	sp[3].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[3].o))->F_tag;
	jobject temp1 = sp[3].o;
	sp[3].i = temp0;
	sp += 4;
	if (temp1 != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_build;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[0].o))->F_tag;
	sp += 1;
	}
label_2:;
	{
	sp -= 5;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicDialog_invoke_arc_func_Cons_33(ctx);
		auto proxy = (mindustry_logic_LogicDialog_invoke_arc_func_Cons_33 *) gcAlloc(ctx, &class_mindustry_logic_LogicDialog_invoke_arc_func_Cons_33);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].i, sp[4].o, sp[5].o);
	LINE_NUMBER(124);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$setup$4_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$setup$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(118);
	if (((jint)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_privileged) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_executor;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_build;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_build;
	((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_configure_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_configure_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(121);
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_build;
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[0].o))->F_tag = (jref) (frame[1].o);
	}
label_1:;
	LINE_NUMBER(123);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$new$4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$new$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_shift_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_shift_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(64);
	((func_mindustry_logic_LogicDialog_showAddDialog) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LogicDialog_showAddDialog])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(66);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$new$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$new$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	jint temp0 = (jint)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_wasRows;
	jint temp1 = (jint)SM_mindustry_logic_LCanvas_isCompact_R_boolean(ctx);
	if (temp0 != temp1) goto label_1;
	}
	{
	jint temp0 = (jint)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_wasPortrait;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
	if (temp0 == temp1) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(54);
	((func_mindustry_logic_LogicDialog_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LogicDialog_setup])(ctx, (frame[0].o));
	LINE_NUMBER(55);
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	((func_mindustry_logic_LCanvas_rebuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas_rebuild])(ctx, sp[0].o);
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[1].o);
	((mindustry_logic_LogicDialog *) NULL_CHECK(sp[0].o))->F_wasPortrait = temp0;
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_mindustry_logic_LCanvas_isCompact_R_boolean(ctx);
	((mindustry_logic_LogicDialog *) NULL_CHECK(sp[0].o))->F_wasRows = temp1;
	}
label_2:;
	LINE_NUMBER(59);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$new$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$new$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_consumer;
	sp[1].o = (jobject)((mindustry_logic_LogicDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	sp[1].o = (jobject)((func_mindustry_logic_LCanvas_save_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LCanvas_save_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicDialog_lambda$new$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$new$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_logic_LCanvas_isCompact_R_boolean(ctx);
	((mindustry_logic_LogicDialog *) NULL_CHECK(sp[0].o))->F_wasRows = temp0;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[1].o);
	((mindustry_logic_LogicDialog *) NULL_CHECK(sp[0].o))->F_wasPortrait = temp1;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LogicDialog_lambda$new$0_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicDialog:lambda$new$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicDialog(ctx);
	frame[0].o = param0;
	LINE_NUMBER(30);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_logic_LogicDialog;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field executor
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_logic_LogicDialog[] {
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
	(void *) M_mindustry_logic_LogicDialog_lambda$new$1,
	(void *) M_mindustry_ui_dialogs_BaseDialog_lambda$new$0,
	(void *) M_mindustry_logic_LogicDialog_setup,
	(void *) M_mindustry_logic_LogicDialog_shouldShowVariables_R_boolean,
	(void *) M_mindustry_logic_LogicDialog_showAddDialog,
	(void *) M_mindustry_logic_LogicDialog_showAddDialog_int,
	(void *) M_mindustry_logic_LogicDialog_show_java_lang_String_mindustry_logic_LExecutor_boolean_arc_func_Cons,
	(void *) M_mindustry_logic_LogicDialog_lambda$show$0_java_lang_String_arc_func_Cons_java_lang_String,
	(void *) M_mindustry_logic_LogicDialog_lambda$showAddDialog$0_int_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LogicDialog_lambda$showAddDialog$5_Array1_java_lang_Runnable_Array1_java_lang_String_Array1_arc_func_Prov_int_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LogicDialog_lambda$showAddDialog$6_arc_scene_ui_layout_Table_Array1_java_lang_String_Array1_arc_func_Prov_int_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_logic_LogicDialog_lambda$showAddDialog$9_int_arc_func_Prov_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_logic_LogicDialog_lambda$showAddDialog$2_Array1_java_lang_String_Array1_java_lang_Runnable_Array1_arc_func_Prov_int_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LogicDialog_lambda$showAddDialog$4_Array1_java_lang_String_Array1_arc_func_Prov_int_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_logic_LogicDialog_lambda$setup$23_arc_scene_ui_TextButton_R_boolean,
	(void *) M_mindustry_logic_LogicDialog_lambda$setup$22,
	(void *) M_mindustry_logic_LogicDialog_lambda$setup$21_arc_scene_ui_TextButton,
	(void *) M_mindustry_logic_LogicDialog_lambda$setup$11,
	(void *) M_mindustry_logic_LogicDialog_lambda$setup$20,
	(void *) M_mindustry_logic_LogicDialog_lambda$setup$14_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LogicDialog_lambda$setup$15_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LogicDialog_lambda$setup$13,
	(void *) M_mindustry_logic_LogicDialog_lambda$setup$12,
	(void *) M_mindustry_logic_LogicDialog_lambda$setup$0,
	(void *) M_mindustry_logic_LogicDialog_lambda$setup$1_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LogicDialog_lambda$setup$2_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LogicDialog_lambda$setup$10_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_logic_LogicDialog_lambda$setup$8_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_logic_LogicDialog_lambda$setup$7_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_logic_LogicDialog_lambda$setup$5_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_logic_LogicDialog_lambda$setup$6,
	(void *) M_mindustry_logic_LogicDialog_lambda$setup$3_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_logic_LogicDialog_lambda$setup$4_java_lang_String,
	(void *) M_mindustry_logic_LogicDialog_lambda$new$4,
	(void *) M_mindustry_logic_LogicDialog_lambda$new$3,
	(void *) M_mindustry_logic_LogicDialog_lambda$new$2,
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
	{ "setup", "()V" },
	{ "shouldShowVariables", "()Z" },
	{ "showAddDialog", "()V" },
	{ "showAddDialog", "(I)V" },
	{ "show", "(Ljava/lang/String;Lmindustry/logic/LExecutor;ZLarc/func/Cons;)V" },
	{ "lambda$show$0", "(Ljava/lang/String;Larc/func/Cons;Ljava/lang/String;)V" },
	{ "lambda$showAddDialog$0", "(ILmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showAddDialog$5", "([Ljava/lang/Runnable;[Ljava/lang/String;[Larc/func/Prov;ILmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showAddDialog$6", "(Larc/scene/ui/layout/Table;[Ljava/lang/String;[Larc/func/Prov;ILmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$showAddDialog$9", "(ILarc/func/Prov;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$showAddDialog$2", "([Ljava/lang/String;[Ljava/lang/Runnable;[Larc/func/Prov;ILmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showAddDialog$4", "([Ljava/lang/String;[Larc/func/Prov;ILmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$setup$23", "(Larc/scene/ui/TextButton;)Z" },
	{ "lambda$setup$22", "()V" },
	{ "lambda$setup$21", "(Larc/scene/ui/TextButton;)V" },
	{ "lambda$setup$11", "()V" },
	{ "lambda$setup$20", "()V" },
	{ "lambda$setup$14", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$15", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$13", "()V" },
	{ "lambda$setup$12", "()V" },
	{ "lambda$setup$0", "()V" },
	{ "lambda$setup$1", "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$2", "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$10", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$setup$8", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$setup$7", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$setup$5", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$setup$6", "()V" },
	{ "lambda$setup$3", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$setup$4", "(Ljava/lang/String;)V" },
	{ "lambda$new$4", "()V" },
	{ "lambda$new$3", "()V" },
	{ "lambda$new$2", "()V" },
};

static FieldMetadata fields[] {
	{ "canvas", &class_mindustry_logic_LCanvas, offsetof(mindustry_logic_LogicDialog, F_canvas), "Lmindustry/logic/LCanvas;", 1 },
	{ "consumer", &class_arc_func_Cons, offsetof(mindustry_logic_LogicDialog, F_consumer), "Larc/func/Cons;", 0 },
	{ "privileged", &class_boolean, offsetof(mindustry_logic_LogicDialog, F_privileged), "Z", 0 },
	{ "executor", &class_mindustry_logic_LExecutor, offsetof(mindustry_logic_LogicDialog, F_executor), "Lmindustry/logic/LExecutor;", 0 },
	{ "globalsDialog", &class_mindustry_logic_GlobalVarsDialog, offsetof(mindustry_logic_LogicDialog, F_globalsDialog), "Lmindustry/logic/GlobalVarsDialog;", 0 },
	{ "wasRows", &class_boolean, offsetof(mindustry_logic_LogicDialog, F_wasRows), "Z", 0 },
	{ "wasPortrait", &class_boolean, offsetof(mindustry_logic_LogicDialog, F_wasPortrait), "Z", 0 },
	{ "forceRestart", &class_boolean, offsetof(mindustry_logic_LogicDialog, F_forceRestart), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LogicDialog, 0, "()V", 1 },
	{ "typeColor", (intptr_t) SM_mindustry_logic_LogicDialog_typeColor_mindustry_logic_LVar_arc_graphics_Color_R_arc_graphics_Color, 0, "(Lmindustry/logic/LVar;Larc/graphics/Color;)Larc/graphics/Color;", 9 },
	{ "typeName", (intptr_t) SM_mindustry_logic_LogicDialog_typeName_mindustry_logic_LVar_R_java_lang_String, 0, "(Lmindustry/logic/LVar;)Ljava/lang/String;", 9 },
	{ "setup", (intptr_t) M_mindustry_logic_LogicDialog_setup, VTABLE_mindustry_logic_LogicDialog_setup, "()V", 2 },
	{ "shouldShowVariables", (intptr_t) M_mindustry_logic_LogicDialog_shouldShowVariables_R_boolean, VTABLE_mindustry_logic_LogicDialog_shouldShowVariables_R_boolean, "()Z", 1 },
	{ "showAddDialog", (intptr_t) M_mindustry_logic_LogicDialog_showAddDialog, VTABLE_mindustry_logic_LogicDialog_showAddDialog, "()V", 1 },
	{ "showAddDialog", (intptr_t) M_mindustry_logic_LogicDialog_showAddDialog_int, VTABLE_mindustry_logic_LogicDialog_showAddDialog_int, "(I)V", 1 },
	{ "show", (intptr_t) M_mindustry_logic_LogicDialog_show_java_lang_String_mindustry_logic_LExecutor_boolean_arc_func_Cons, VTABLE_mindustry_logic_LogicDialog_show_java_lang_String_mindustry_logic_LExecutor_boolean_arc_func_Cons, "(Ljava/lang/String;Lmindustry/logic/LExecutor;ZLarc/func/Cons;)V", 1 },
	{ "lambda$show$0", (intptr_t) M_mindustry_logic_LogicDialog_lambda$show$0_java_lang_String_arc_func_Cons_java_lang_String, VTABLE_mindustry_logic_LogicDialog_lambda$show$0_java_lang_String_arc_func_Cons_java_lang_String, "(Ljava/lang/String;Larc/func/Cons;Ljava/lang/String;)V", 4098 },
	{ "lambda$showAddDialog$0", (intptr_t) M_mindustry_logic_LogicDialog_lambda$showAddDialog$0_int_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LogicDialog_lambda$showAddDialog$0_int_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(ILmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showAddDialog$5", (intptr_t) M_mindustry_logic_LogicDialog_lambda$showAddDialog$5_Array1_java_lang_Runnable_Array1_java_lang_String_Array1_arc_func_Prov_int_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LogicDialog_lambda$showAddDialog$5_Array1_java_lang_Runnable_Array1_java_lang_String_Array1_arc_func_Prov_int_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "([Ljava/lang/Runnable;[Ljava/lang/String;[Larc/func/Prov;ILmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showAddDialog$6", (intptr_t) M_mindustry_logic_LogicDialog_lambda$showAddDialog$6_arc_scene_ui_layout_Table_Array1_java_lang_String_Array1_arc_func_Prov_int_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_logic_LogicDialog_lambda$showAddDialog$6_arc_scene_ui_layout_Table_Array1_java_lang_String_Array1_arc_func_Prov_int_mindustry_ui_dialogs_BaseDialog, "(Larc/scene/ui/layout/Table;[Ljava/lang/String;[Larc/func/Prov;ILmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$showAddDialog$10", (intptr_t) SM_mindustry_logic_LogicDialog_lambda$showAddDialog$10_mindustry_logic_LStatement_arc_scene_ui_layout_Cell, 0, "(Lmindustry/logic/LStatement;Larc/scene/ui/layout/Cell;)V", 4106 },
	{ "lambda$showAddDialog$9", (intptr_t) M_mindustry_logic_LogicDialog_lambda$showAddDialog$9_int_arc_func_Prov_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_logic_LogicDialog_lambda$showAddDialog$9_int_arc_func_Prov_mindustry_ui_dialogs_BaseDialog, "(ILarc/func/Prov;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$showAddDialog$8", (intptr_t) SM_mindustry_logic_LogicDialog_lambda$showAddDialog$8_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$showAddDialog$7", (intptr_t) SM_mindustry_logic_LogicDialog_lambda$showAddDialog$7_mindustry_logic_LCategory_arc_scene_ui_layout_Table, 0, "(Lmindustry/logic/LCategory;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$showAddDialog$2", (intptr_t) M_mindustry_logic_LogicDialog_lambda$showAddDialog$2_Array1_java_lang_String_Array1_java_lang_Runnable_Array1_arc_func_Prov_int_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LogicDialog_lambda$showAddDialog$2_Array1_java_lang_String_Array1_java_lang_Runnable_Array1_arc_func_Prov_int_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "([Ljava/lang/String;[Ljava/lang/Runnable;[Larc/func/Prov;ILmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showAddDialog$4", (intptr_t) M_mindustry_logic_LogicDialog_lambda$showAddDialog$4_Array1_java_lang_String_Array1_arc_func_Prov_int_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_logic_LogicDialog_lambda$showAddDialog$4_Array1_java_lang_String_Array1_arc_func_Prov_int_mindustry_ui_dialogs_BaseDialog, "([Ljava/lang/String;[Larc/func/Prov;ILmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$showAddDialog$3", (intptr_t) SM_mindustry_logic_LogicDialog_lambda$showAddDialog$3_Array1_java_lang_String_Array1_java_lang_Runnable_java_lang_String, 0, "([Ljava/lang/String;[Ljava/lang/Runnable;Ljava/lang/String;)V", 4106 },
	{ "lambda$showAddDialog$1", (intptr_t) SM_mindustry_logic_LogicDialog_lambda$showAddDialog$1, 0, "()V", 4106 },
	{ "lambda$setup$23", (intptr_t) M_mindustry_logic_LogicDialog_lambda$setup$23_arc_scene_ui_TextButton_R_boolean, VTABLE_mindustry_logic_LogicDialog_lambda$setup$23_arc_scene_ui_TextButton_R_boolean, "(Larc/scene/ui/TextButton;)Z", 4098 },
	{ "lambda$setup$22", (intptr_t) M_mindustry_logic_LogicDialog_lambda$setup$22, VTABLE_mindustry_logic_LogicDialog_lambda$setup$22, "()V", 4098 },
	{ "lambda$setup$21", (intptr_t) M_mindustry_logic_LogicDialog_lambda$setup$21_arc_scene_ui_TextButton, VTABLE_mindustry_logic_LogicDialog_lambda$setup$21_arc_scene_ui_TextButton, "(Larc/scene/ui/TextButton;)V", 4098 },
	{ "lambda$setup$11", (intptr_t) M_mindustry_logic_LogicDialog_lambda$setup$11, VTABLE_mindustry_logic_LogicDialog_lambda$setup$11, "()V", 4098 },
	{ "lambda$setup$20", (intptr_t) M_mindustry_logic_LogicDialog_lambda$setup$20, VTABLE_mindustry_logic_LogicDialog_lambda$setup$20, "()V", 4098 },
	{ "lambda$setup$14", (intptr_t) M_mindustry_logic_LogicDialog_lambda$setup$14_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LogicDialog_lambda$setup$14_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$15", (intptr_t) M_mindustry_logic_LogicDialog_lambda$setup$15_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LogicDialog_lambda$setup$15_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$19", (intptr_t) SM_mindustry_logic_LogicDialog_lambda$setup$19_mindustry_logic_LVar_R_java_lang_CharSequence, 0, "(Lmindustry/logic/LVar;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$setup$18", (intptr_t) SM_mindustry_logic_LogicDialog_lambda$setup$18_mindustry_logic_LVar_float_arc_scene_ui_Image, 0, "(Lmindustry/logic/LVar;FLarc/scene/ui/Image;)V", 4106 },
	{ "lambda$setup$16", (intptr_t) SM_mindustry_logic_LogicDialog_lambda$setup$16_mindustry_logic_LVar_arc_scene_ui_layout_Table, 0, "(Lmindustry/logic/LVar;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$setup$17", (intptr_t) SM_mindustry_logic_LogicDialog_lambda$setup$17_Array1_float_float_mindustry_logic_LVar_arc_scene_ui_Label, 0, "([FFLmindustry/logic/LVar;Larc/scene/ui/Label;)V", 4106 },
	{ "lambda$setup$13", (intptr_t) M_mindustry_logic_LogicDialog_lambda$setup$13, VTABLE_mindustry_logic_LogicDialog_lambda$setup$13, "()V", 4098 },
	{ "lambda$setup$12", (intptr_t) M_mindustry_logic_LogicDialog_lambda$setup$12, VTABLE_mindustry_logic_LogicDialog_lambda$setup$12, "()V", 4098 },
	{ "lambda$setup$0", (intptr_t) M_mindustry_logic_LogicDialog_lambda$setup$0, VTABLE_mindustry_logic_LogicDialog_lambda$setup$0, "()V", 4098 },
	{ "lambda$setup$1", (intptr_t) M_mindustry_logic_LogicDialog_lambda$setup$1_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LogicDialog_lambda$setup$1_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$2", (intptr_t) M_mindustry_logic_LogicDialog_lambda$setup$2_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LogicDialog_lambda$setup$2_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$10", (intptr_t) M_mindustry_logic_LogicDialog_lambda$setup$10_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_logic_LogicDialog_lambda$setup$10_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$setup$9", (intptr_t) SM_mindustry_logic_LogicDialog_lambda$setup$9_arc_scene_ui_TextButton_R_boolean, 0, "(Larc/scene/ui/TextButton;)Z", 4106 },
	{ "lambda$setup$8", (intptr_t) M_mindustry_logic_LogicDialog_lambda$setup$8_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_logic_LogicDialog_lambda$setup$8_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$setup$7", (intptr_t) M_mindustry_logic_LogicDialog_lambda$setup$7_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_logic_LogicDialog_lambda$setup$7_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$setup$5", (intptr_t) M_mindustry_logic_LogicDialog_lambda$setup$5_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_logic_LogicDialog_lambda$setup$5_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$setup$6", (intptr_t) M_mindustry_logic_LogicDialog_lambda$setup$6, VTABLE_mindustry_logic_LogicDialog_lambda$setup$6, "()V", 4098 },
	{ "lambda$setup$3", (intptr_t) M_mindustry_logic_LogicDialog_lambda$setup$3_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_logic_LogicDialog_lambda$setup$3_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$setup$4", (intptr_t) M_mindustry_logic_LogicDialog_lambda$setup$4_java_lang_String, VTABLE_mindustry_logic_LogicDialog_lambda$setup$4_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$new$4", (intptr_t) M_mindustry_logic_LogicDialog_lambda$new$4, VTABLE_mindustry_logic_LogicDialog_lambda$new$4, "()V", 4098 },
	{ "lambda$new$3", (intptr_t) M_mindustry_logic_LogicDialog_lambda$new$3, VTABLE_mindustry_logic_LogicDialog_lambda$new$3, "()V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_logic_LogicDialog_lambda$new$2, VTABLE_mindustry_logic_LogicDialog_lambda$new$2, "()V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_logic_LogicDialog_lambda$new$1, VTABLE_mindustry_logic_LogicDialog_lambda$new$1, "()V", 4098 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_logic_LogicDialog_lambda$new$0_java_lang_String, 0, "(Ljava/lang/String;)V", 4106 },
};

Class class_mindustry_logic_LogicDialog{
		.nativeName = (intptr_t) "mindustry/logic/LogicDialog",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_BaseDialog,
		.size = sizeof(mindustry_logic_LogicDialog),
		.classVtable = (intptr_t) vtable_mindustry_logic_LogicDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LogicDialog,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_logic_LogicDialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 49,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 331,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LogicDialog = registerClass(&class_mindustry_logic_LogicDialog);

}
