#include "mindustry/editor/WaveInfoDialog.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_52.h"
#include "java/lang/Integer.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_53.h"
#include "arc/func/Prov.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_50.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_51.h"
#include "mindustry/editor/WaveInfoDialog.h"
#include "arc/graphics/Color.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_54.h"
#include "java/lang/Runnable.h"
#include "arc/input/KeyCode.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_55.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Boolc_2.h"
#include "arc/scene/ui/Image.h"
#include "mindustry/maps/Maps.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Boolc_3.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/func/Boolc.h"
#include "arc/func/Boolf.h"
#include "arc/scene/ui/CheckBox.h"
#include "arc/math/Mathf.h"
#include "arc/func/Floatf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "arc/util/Nullable.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_30.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_31.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/editor/MapObjectivesDialog.h"
#include "mindustry/game/Rules.h"
#include "arc/scene/ui/TextField_TextFieldFilter.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_38.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_39.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_36.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_76.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_37.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_77.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_34.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_74.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_35.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_75.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_32.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_72.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_33.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_73.h"
#include "arc/func/Cons.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_70.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_71.h"
#include "mindustry/content/StatusEffects.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_29.h"
#include "mindustry/game/Waves.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Boolf_1.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Prov_2.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Prov_3.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "mindustry/editor/WaveInfoDialog_Sort.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_41.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_42.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_40.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_69.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_67.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_49.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_68.h"
#include "mindustry/io/JsonIO.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_65.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_47.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_66.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_48.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_63.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_45.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_64.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_46.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_61.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_43.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_62.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_44.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_60.h"
#include "mindustry/editor/WaveGraph.h"
#include "mindustry/Vars.h"
#include "arc/scene/ui/TextField.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_58.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_59.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_56.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_57.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_54.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_55.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_52.h"
#include "mindustry/editor/WaveInfoDialog_1.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_53.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_50.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_51.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/scene/ui/Button.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/TextButton.h"
#include "arc/scene/ui/ImageButton.h"
#include "java/lang/Throwable.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_49.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_47.h"
#include "arc/util/Structs.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_48.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_45.h"
#include "mindustry/editor/WaveInfoDialog_invoke_java_lang_Runnable_28.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_46.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_43.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_44.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_41.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_42.h"
#include "arc/scene/ui/Label.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_40.h"
#include "mindustry/ai/WaveSpawner.h"
#include "mindustry/editor/WaveInfoDialog_invoke_arc_func_Cons_39.h"
#include "arc/Application.h"
#include "java/lang/String.h"
#include "java/util/Comparator.h"
#include "arc/scene/style/Drawable.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/util/Scaling.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "mindustry/game/SpawnGroup.h"
#include "arc/util/Strings.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "arc/struct/SnapshotSeq.h"
#include "mindustry/game/Team.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_editor_WaveInfoDialog(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_WaveInfoDialog *) object;
	if (self->F_groups)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_groups)->clazz)->markFunction)((jobject) self->F_groups, mark, depth + 1);
	if (self->F_expandedGroup)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_expandedGroup)->clazz)->markFunction)((jobject) self->F_expandedGroup, mark, depth + 1);
	if (self->F_table)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_table)->clazz)->markFunction)((jobject) self->F_table, mark, depth + 1);
	if (self->F_filterType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_filterType)->clazz)->markFunction)((jobject) self->F_filterType, mark, depth + 1);
	if (self->F_sort)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sort)->clazz)->markFunction)((jobject) self->F_sort, mark, depth + 1);
	if (self->F_graph)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_graph)->clazz)->markFunction)((jobject) self->F_graph, mark, depth + 1);
}

void clinit_mindustry_editor_WaveInfoDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
}

void init_mindustry_editor_WaveInfoDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(42);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@waves.title"_j))));
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_editor_WaveInfoDialog *) NULL_CHECK(sp[0].o))->F_groups = (jref) sp[1].o;
	LINE_NUMBER(34);
	((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_search = (jint(-1));
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_WaveInfoDialog$Sort_begin;
	((mindustry_editor_WaveInfoDialog *) NULL_CHECK(sp[0].o))->F_sort = (jref) sp[1].o;
	LINE_NUMBER(37);
	((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_reverseSort = (jint(0));
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_WaveGraph(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_WaveGraph);
	init_mindustry_editor_WaveGraph(ctx, sp[1].o);
	((mindustry_editor_WaveInfoDialog *) NULL_CHECK(sp[0].o))->F_graph = (jref) sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_28(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_28 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_28);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_WaveInfoDialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_29(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_29 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_29);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_WaveInfoDialog_hidden_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_hidden_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(50);
	((func_mindustry_editor_WaveInfoDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_addCloseButton])(ctx, (frame[0].o));
	LINE_NUMBER(52);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@edit.menu"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_edit;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_30(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_30 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_30);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(250.0f);
	jfloat temp1 = jfloat(64.0f);
	LINE_NUMBER(91);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(93);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"waves.random"_j))));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_refresh;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_31(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_31 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_31);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp2 = jfloat(200.0f);
	LINE_NUMBER(97);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2);
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_setup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:setup", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_spawns;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_waves;
	sp[0].o = (jobject)((func_mindustry_game_Waves_get_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Waves_get_R_arc_struct_Seq])(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_spawns;
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	sp[1].o = (jobject)SM_mindustry_io_JsonIO_copy_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	((mindustry_editor_WaveInfoDialog *) NULL_CHECK(sp[0].o))->F_groups = (jref) (checkCast(ctx, &class_arc_struct_Seq, sp[1].o));
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_groups;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_editor_WaveInfoDialog *) NULL_CHECK(sp[0].o))->F_groups = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(105);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(2)));
	jint temp0 = jint(0);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	clinit_mindustry_gen_Tex(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Tex_clear;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_39(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_39 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_39);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	init_arc_scene_ui_layout_Table_arc_scene_style_Drawable_arc_func_Cons(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_editor_WaveInfoDialog$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog$1);
	init_mindustry_editor_WaveInfoDialog$1_mindustry_editor_WaveInfoDialog_java_lang_CharSequence(ctx, sp[2].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@waves.none"_j))));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp2 = jfloat(390.0f);
	LINE_NUMBER(150);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(152);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[1].o = frame[0].o;
	clinit_mindustry_editor_WaveGraph(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_editor_WaveGraph);
	init_mindustry_editor_WaveGraph(ctx, sp[2].o);
	((mindustry_editor_WaveInfoDialog *) NULL_CHECK(sp[1].o))->F_graph = (jref) sp[2].o;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(154);
	((func_mindustry_editor_WaveInfoDialog_buildGroups) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_buildGroups])(ctx, (frame[0].o));
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_buildGroups(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:buildGroups", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(159);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_table;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_table;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_groups;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[1].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_sort;
	sp[1].o = (jobject)((mindustry_editor_WaveInfoDialog$Sort *) NULL_CHECK(sp[1].o))->F_sort;
	sp[1].o = (jobject)SM_arc_util_Structs_comparingFloat_arc_func_Floatf_R_java_util_Comparator(ctx, sp[1].o);
	sp[2].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_sort;
	sp[2].o = (jobject)((mindustry_editor_WaveInfoDialog$Sort *) NULL_CHECK(sp[2].o))->F_secondary;
	sp[2].o = (jobject)SM_arc_util_Structs_comparingFloat_arc_func_Floatf_R_java_util_Comparator(ctx, sp[2].o);
	sp[1].o = (jobject)SM_arc_util_Structs_comps_java_util_Comparator_java_util_Comparator_R_java_util_Comparator(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(164);
	if (((jint)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_reverseSort) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[0].o = (jobject)((func_arc_struct_Seq_reverse_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_reverse_R_arc_struct_Seq])(ctx, sp[0].o);
	}
label_7:;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_game_SpawnGroup, sp[0].o));
	LINE_NUMBER(167);
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[2].o)))->F_effect;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_none;
	if (sp[0].o != sp[1].o) goto label_11;
	}
	{
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[2].o)))->F_effect = (jref) (jobject(nullptr));
	}
label_11:;
	{
	LINE_NUMBER(168);
	if (((jint)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_search) < 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_mindustry_game_SpawnGroup_getSpawned_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_SpawnGroup_getSpawned_int_R_int])(ctx, (frame[2].o), ((jint)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_search));
	if (temp0 <= 0) goto label_8;
	}
label_12:;
	{
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_filterType;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[2].o)))->F_type;
	sp[1].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_filterType;
	if (sp[0].o == sp[1].o) goto label_13;
	}
	goto label_8;
label_13:;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_table;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_40(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_40 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_40);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(340.0f);
	LINE_NUMBER(351);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(353);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_table;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(354);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(356);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_table;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_groups;
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(357);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_table;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@none.found"_j))));
	goto label_17;
	}
label_4:;
	{
	LINE_NUMBER(360);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_table;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.default"_j))));
	}
label_17:;
	{
	LINE_NUMBER(363);
	((func_mindustry_editor_WaveInfoDialog_updateWaves) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_updateWaves])(ctx, (frame[0].o));
	LINE_NUMBER(364);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_showUnits_arc_func_Cons_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:showUnits", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(367);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((frame[2].i) == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@waves.filter"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_2:;
	{
	sp -= 3;
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, sp[2].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(368);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[3].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_41(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_41 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_41);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (frame[2].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(395);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(396);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[3].o));
	LINE_NUMBER(397);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[3].o));
	LINE_NUMBER(398);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_showEffects_mindustry_game_SpawnGroup(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:showEffects", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(401);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(402);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_42(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_42 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_42);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(427);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(428);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[2].o));
	LINE_NUMBER(429);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[2].o));
	LINE_NUMBER(430);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_updateWaves(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:updateWaves", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(452);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_graph;
	sp[1].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_groups;
	((mindustry_editor_WaveGraph *) NULL_CHECK(sp[0].o))->F_groups = (jref) sp[1].o;
	LINE_NUMBER(453);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_graph;
	((func_mindustry_editor_WaveGraph_rebuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_WaveGraph_rebuild])(ctx, sp[0].o);
	LINE_NUMBER(454);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$showEffects$0_mindustry_game_SpawnGroup_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$showEffects$0", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(404);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_43(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_43 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_43);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_32(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_32 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_32);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(412);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(413);
	frame[4].i = (jint(1));
	LINE_NUMBER(414);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_statusEffects_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_statusEffects_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_type_StatusEffect, sp[0].o));
	LINE_NUMBER(415);
	jint temp0 = (jint)((func_mindustry_type_StatusEffect_isHidden_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_type_StatusEffect_isHidden_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_5;
	}
	{
	if (((jint)((mindustry_type_StatusEffect *) NULL_CHECK((frame[6].o)))->F_reactive) == 0) goto label_8;
	}
	goto label_5;
label_8:;
	{
	LINE_NUMBER(416);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_44(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_44 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_44);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_33(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_33 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_33);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[6].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(424);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(425);
	INST_IINC(4, 1);
	if (((frame[4].i) % (jint(3))) != 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	}
label_11:;
	LINE_NUMBER(426);
	goto label_5;
label_6:;
	LINE_NUMBER(427);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$showEffects$4_mindustry_game_SpawnGroup_mindustry_type_StatusEffect_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$showEffects$4", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(421);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[1].o)))->F_effect = (jref) (frame[2].o);
	LINE_NUMBER(422);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[3].o));
	LINE_NUMBER(423);
	((func_mindustry_editor_WaveInfoDialog_buildGroups) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_buildGroups])(ctx, (frame[0].o));
	LINE_NUMBER(424);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_WaveInfoDialog_lambda$showEffects$3_mindustry_type_StatusEffect_arc_scene_ui_Button(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$showEffects$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(417);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Button_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(418);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(419);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(420);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$showEffects$2_mindustry_game_SpawnGroup_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$showEffects$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(409);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[1].o)))->F_effect = (jref) (jobject(nullptr));
	LINE_NUMBER(410);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(411);
	((func_mindustry_editor_WaveInfoDialog_buildGroups) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_buildGroups])(ctx, (frame[0].o));
	LINE_NUMBER(412);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_WaveInfoDialog_lambda$showEffects$1_arc_scene_ui_Button(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$showEffects$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_left_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	LINE_NUMBER(406);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_none;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(407);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@settings.resetKey"_j))));
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$showUnits$0_boolean_arc_func_Cons_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jbool param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$showUnits$0", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(369);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(370);
	if ((frame[1].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(371);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_45(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_45 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_45);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_34(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_34 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_34);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(379);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	}
label_2:;
	{
	LINE_NUMBER(381);
	if ((frame[1].i) == 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(382);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_units_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_units_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_type_UnitType, sp[0].o));
	LINE_NUMBER(383);
	jint temp0 = (jint)((func_mindustry_type_UnitType_isHidden_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_type_UnitType_isHidden_R_boolean])(ctx, (frame[7].o));
	if (temp0 == 0) goto label_11;
	}
	goto label_8;
label_11:;
	{
	LINE_NUMBER(384);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_46(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_46 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_46);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_35(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_35 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_35);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[7].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(392);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(393);
	INST_IINC(5, 1);
	if (((frame[5].i) % (jint(3))) != 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	}
label_14:;
	LINE_NUMBER(394);
	goto label_8;
label_9:;
	LINE_NUMBER(395);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$showUnits$4_arc_func_Cons_mindustry_type_UnitType_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$showUnits$4", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(389);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(390);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[3].o));
	LINE_NUMBER(391);
	((func_mindustry_editor_WaveInfoDialog_buildGroups) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_buildGroups])(ctx, (frame[0].o));
	LINE_NUMBER(392);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_WaveInfoDialog_lambda$showUnits$3_mindustry_type_UnitType_arc_scene_ui_Button(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$showUnits$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(385);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Button_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(386);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(387);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(388);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$showUnits$2_arc_func_Cons_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$showUnits$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(376);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(377);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(378);
	((func_mindustry_editor_WaveInfoDialog_buildGroups) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_buildGroups])(ctx, (frame[0].o));
	LINE_NUMBER(379);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_WaveInfoDialog_lambda$showUnits$1_arc_scene_ui_Button(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$showUnits$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_left_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	LINE_NUMBER(373);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_none;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(374);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@settings.resetKey"_j))));
	LINE_NUMBER(375);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$0_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(172);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_47(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_47 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_47);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_36(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_36 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_36);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(46.0f);
	LINE_NUMBER(206);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-6.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(0)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(208);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_expandedGroup;
	if (sp[0].o != (frame[1].o)) goto label_4;
	}
	{
	LINE_NUMBER(209);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_48(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_48 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_48);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(226);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(228);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_49(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_49 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_49);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(237);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(239);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_50(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_50 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_50);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(255);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(257);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_51(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_51 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_51);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(266);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(268);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_52(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_52 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_52);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(284);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(286);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@waves.guardian"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Boolc_2(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Boolc_2 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Boolc_2);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(4.0f);
	LINE_NUMBER(289);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_53(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_53 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_53);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(291);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_54(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_54 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_54);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = jfloat(0);
	LINE_NUMBER(296);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(298);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_55(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_55 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_55);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp2 = jfloat(8.0f);
	LINE_NUMBER(349);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_4:;
	LINE_NUMBER(351);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$30_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$30", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@waves.spawn"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(301);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8""_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_37(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_37 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_37);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(160.0f);
	LINE_NUMBER(347);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(36.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label])(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o)));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Prov_2);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_Label_setText_arc_func_Prov) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setText_arc_func_Prov])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(349);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$35_mindustry_game_SpawnGroup_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$35", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(347);
	if (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spawn) != (jint(-1))) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@waves.spawn.all"_j));
	goto label_2;
label_1:;
	{
	jint temp0 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spawn));
	jint temp1 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spawn));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001, \u0001"_j.string, 2, boxShort(ctx, temp0), boxShort(ctx, temp1));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$31_mindustry_game_SpawnGroup(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$31", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(302);
	if (((jint)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_checkedSpawns) != 0) goto label_1;
	}
	{
	LINE_NUMBER(304);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	((func_mindustry_ai_WaveSpawner_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_reset])(ctx, sp[0].o);
	LINE_NUMBER(305);
	((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_checkedSpawns = (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(308);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@waves.spawn.select"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(309);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_56(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_56 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_56);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(343);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(344);
	((func_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean])(ctx, (frame[2].o), (jint(0)));
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

void SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$32_mindustry_game_SpawnGroup_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$32", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(310);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(311);
	frame[3].i = (jint(0));
	LINE_NUMBER(312);
	frame[4].i = (jint(4));
	LINE_NUMBER(313);
	frame[5].i = (20);
	LINE_NUMBER(315);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	sp[0].o = (jobject)((func_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq])(ctx, sp[0].o);
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) < (frame[5].i)) goto label_5;
	}
	{
	LINE_NUMBER(316);
	sp[0].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"waves.spawn.first"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[5].i));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_5:;
	{
	LINE_NUMBER(319);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	sp[0].o = (jobject)((func_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(320);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001, \u0001"_j.string, 2, boxShort(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_x)), boxShort(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_y)));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatTogglet;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_38(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_38 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_38);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(110.0f);
	jfloat temp1 = jfloat(45.0f);
	LINE_NUMBER(323);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	jint temp2 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[7].o));
	sp += 1;
	if (temp2 != ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spawn)) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(325);
	INST_IINC(3, 1);
	if (((frame[3].i) % (frame[4].i)) != 0) goto label_14;
	}
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	}
label_14:;
	{
	LINE_NUMBER(330);
	if ((frame[3].i) < (20)) goto label_16;
	}
	LINE_NUMBER(331);
	goto label_8;
label_16:;
	LINE_NUMBER(333);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(335);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	sp[0].o = (jobject)((func_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@waves.spawn.none"_j))));
	goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(338);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@waves.spawn.all"_j));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatTogglet;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_39(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_39 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_39);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(110.0f);
	jfloat temp1 = jfloat(45.0f);
	LINE_NUMBER(341);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	sp += 1;
	if ((jint(-1)) != ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spawn)) goto label_22;
	}
	INST_ICONST(1);
	goto label_23;
label_22:;
	INST_ICONST(0);
label_23:;
	POP_N(2); // Pop method args
	sp->o = (jobject)((func_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].i);
	sp++;
	INST_POP();
label_20:;
	LINE_NUMBER(343);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$34_mindustry_game_SpawnGroup_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$34", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(339);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spawn = (jint(-1));
	LINE_NUMBER(340);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$33_mindustry_game_SpawnGroup_mindustry_world_Tile_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$33", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(321);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_spawn = temp0;
	LINE_NUMBER(322);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(323);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$25_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$25", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@waves.team"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(294);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_57(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_57 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_57);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_squarei;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_40(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_40 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_40);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(38.0f);
	LINE_NUMBER(295);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(296);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$28_mindustry_game_SpawnGroup(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$28", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(295);
	jint temp0 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_58(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_58 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_58);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_showTeamSelect_boolean_arc_func_Cons(ctx, temp0, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$29_mindustry_game_SpawnGroup_mindustry_game_Team(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$29", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(295);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$26_mindustry_game_SpawnGroup_arc_scene_ui_Button(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$26", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(294);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(24.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_59(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_59 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_59);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$27_mindustry_game_SpawnGroup_arc_scene_ui_Image(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$27", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(294);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_team;
	sp += 1;
	if (sp[0].o != nullptr) goto label_1;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_clear;
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	sp += 1;
	}
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_Image_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$24_mindustry_game_SpawnGroup_arc_scene_ui_CheckBox(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$24", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(289);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_effect;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[2].o = (jobject)SF_mindustry_content_StatusEffects_boss;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_CheckBox_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_CheckBox_setChecked_boolean])(ctx, sp[0].o, sp[1].i);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$23_mindustry_game_SpawnGroup_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$23", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(287);
	sp[0].o = frame[1].o;
	sp += 1;
	if ((frame[2].i) == 0) goto label_1;
	}
	clinit_mindustry_content_StatusEffects(ctx);
	(sp++)->o = SF_mindustry_content_StatusEffects_boss;
	goto label_2;
label_1:;
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 2;
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_effect = (jref) sp[1].o;
	LINE_NUMBER(288);
	((func_mindustry_editor_WaveInfoDialog_buildGroups) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_buildGroups])(ctx, (frame[0].o));
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$20_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$20", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(269);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxInteger(ctx, (jint(((jfloat)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[1].o)))->F_shields)))));
	clinit_arc_scene_ui_TextField$TextFieldFilter(ctx);
	sp[2].o = (jobject)SF_arc_scene_ui_TextField$TextFieldFilter_digitsOnly;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_60(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_60 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_60);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(80.0f);
	LINE_NUMBER(274);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(276);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" + "_j))));
	LINE_NUMBER(277);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxInteger(ctx, (jint(((jfloat)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[1].o)))->F_shieldScaling)))));
	clinit_arc_scene_ui_TextField$TextFieldFilter(ctx);
	sp[2].o = (jobject)SF_arc_scene_ui_TextField$TextFieldFilter_digitsOnly;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_61(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_61 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_61);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp1 = jfloat(80.0f);
	LINE_NUMBER(282);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(283);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@waves.shields"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$22_mindustry_game_SpawnGroup_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$22", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(278);
	jint temp0 = (jint)SM_arc_util_Strings_canParsePositiveInt_java_lang_String_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(279);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, (frame[2].o));
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_shieldScaling = (jfloat(temp0));
	LINE_NUMBER(280);
	((func_mindustry_editor_WaveInfoDialog_updateWaves) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_updateWaves])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(282);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$21_mindustry_game_SpawnGroup_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$21", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(270);
	jint temp0 = (jint)SM_arc_util_Strings_canParsePositiveInt_java_lang_String_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(271);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, (frame[2].o));
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_shields = (jfloat(temp0));
	LINE_NUMBER(272);
	((func_mindustry_editor_WaveInfoDialog_updateWaves) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_updateWaves])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(274);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$18_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$18", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(258);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[1].o)))->F_max)));
	clinit_arc_scene_ui_TextField$TextFieldFilter(ctx);
	sp[2].o = (jobject)SF_arc_scene_ui_TextField$TextFieldFilter_digitsOnly;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_62(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_62 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_62);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(80.0f);
	LINE_NUMBER(263);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(265);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@waves.max"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$19_mindustry_game_SpawnGroup_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$19", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(259);
	jint temp0 = (jint)SM_arc_util_Strings_canParsePositiveInt_java_lang_String_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(260);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, (frame[2].o));
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_max = temp0;
	LINE_NUMBER(261);
	((func_mindustry_editor_WaveInfoDialog_updateWaves) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_updateWaves])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(263);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$15_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$15", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(240);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[1].o)))->F_unitAmount)));
	clinit_arc_scene_ui_TextField$TextFieldFilter(ctx);
	sp[2].o = (jobject)SF_arc_scene_ui_TextField$TextFieldFilter_digitsOnly;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_63(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_63 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_63);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(80.0f);
	LINE_NUMBER(245);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(247);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" + "_j))));
	LINE_NUMBER(248);
	sp[0].o = frame[2].o;
	jint temp1 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[1].o)))->F_unitScaling));
	sp += 1;
	if (temp1 == 0) goto label_4;
	}
	INST_FCONST(0);
	goto label_5;
label_4:;
	{
	jfloat temp0 = (jfloat(1)) / ((jfloat)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[1].o)))->F_unitScaling);
	sp[0].f = temp0;
	sp += 1;
	}
label_5:;
	{
	sp -= 2;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, sp[1].f, (jfloat(0)));
	sp[1].o = (jobject)SM_arc_util_Strings_fixed_float_int_R_java_lang_String(ctx, temp0, (jint(2)));
	clinit_arc_scene_ui_TextField$TextFieldFilter(ctx);
	sp[2].o = (jobject)SF_arc_scene_ui_TextField$TextFieldFilter_floatsOnly;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_64(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_64 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_64);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp1 = jfloat(80.0f);
	LINE_NUMBER(253);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(254);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@waves.perspawn"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$17_mindustry_game_SpawnGroup_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$17", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(249);
	jint temp0 = (jint)SM_arc_util_Strings_canParsePositiveFloat_java_lang_String_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(250);
	sp[0].o = frame[1].o;
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_R_float(ctx, (frame[2].o));
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_unitScaling = (temp0 / temp1);
	LINE_NUMBER(251);
	((func_mindustry_editor_WaveInfoDialog_updateWaves) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_updateWaves])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(253);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$16_mindustry_game_SpawnGroup_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$16", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(241);
	jint temp0 = (jint)SM_arc_util_Strings_canParsePositiveInt_java_lang_String_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(242);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, (frame[2].o));
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_unitAmount = temp0;
	LINE_NUMBER(243);
	((func_mindustry_editor_WaveInfoDialog_updateWaves) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_updateWaves])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(245);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$13_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$13", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@waves.every"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(230);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[1].o)))->F_spacing)));
	clinit_arc_scene_ui_TextField$TextFieldFilter(ctx);
	sp[2].o = (jobject)SF_arc_scene_ui_TextField$TextFieldFilter_digitsOnly;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_65(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_65 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_65);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(100.0f);
	LINE_NUMBER(235);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(236);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@waves.waves"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$14_mindustry_game_SpawnGroup_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$14", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(231);
	jint temp0 = (jint)SM_arc_util_Strings_canParsePositiveInt_java_lang_String_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, (frame[2].o));
	if (temp0 <= 0) goto label_1;
	}
	{
	LINE_NUMBER(232);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, (frame[2].o));
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_spacing = temp0;
	LINE_NUMBER(233);
	((func_mindustry_editor_WaveInfoDialog_updateWaves) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_updateWaves])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(235);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$10_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$10", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(210);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxInteger(ctx, (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[1].o)))->F_begin) + (jint(1)))));
	clinit_arc_scene_ui_TextField$TextFieldFilter(ctx);
	sp[2].o = (jobject)SF_arc_scene_ui_TextField$TextFieldFilter_digitsOnly;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_66(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_66 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_66);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(100.0f);
	LINE_NUMBER(215);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(216);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@waves.to"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(217);
	sp[0].o = frame[2].o;
	sp += 1;
	if (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[1].o)))->F_end) != (jint(2147483647))) goto label_4;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_5;
label_4:;
	{
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxInteger(ctx, (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[1].o)))->F_end) + (jint(1)))));
	sp += 1;
	}
label_5:;
	{
	sp -= 2;
	clinit_arc_scene_ui_TextField$TextFieldFilter(ctx);
	sp[2].o = (jobject)SF_arc_scene_ui_TextField$TextFieldFilter_digitsOnly;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_67(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_67 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_67);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(100.0f);
	LINE_NUMBER(225);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	((func_arc_scene_ui_TextField_setMessageText_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_TextField_setMessageText_java_lang_String])(ctx, (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o)), (((jobject) createStringLiteral(ctx, u8"\u221e"_j))));
	LINE_NUMBER(226);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$12_mindustry_game_SpawnGroup_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$12", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(218);
	jint temp0 = (jint)SM_arc_util_Strings_canParsePositiveInt_java_lang_String_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(219);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, (frame[2].o));
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_end = (temp0 - (jint(1)));
	LINE_NUMBER(220);
	((func_mindustry_editor_WaveInfoDialog_updateWaves) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_updateWaves])(ctx, (frame[0].o));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(221);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(222);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[1].o)))->F_end = (jint(2147483647));
	LINE_NUMBER(223);
	((func_mindustry_editor_WaveInfoDialog_updateWaves) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_updateWaves])(ctx, (frame[0].o));
	}
label_4:;
	LINE_NUMBER(225);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$11_mindustry_game_SpawnGroup_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$11", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(211);
	jint temp0 = (jint)SM_arc_util_Strings_canParsePositiveInt_java_lang_String_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(212);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, (frame[2].o));
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_begin = (temp0 - (jint(1)));
	LINE_NUMBER(213);
	((func_mindustry_editor_WaveInfoDialog_updateWaves) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_updateWaves])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(215);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$9_mindustry_game_SpawnGroup(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$9", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(204);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_expandedGroup;
	sp += 1;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	INST_ALOAD(1);
label_2:;
	{
	sp -= 2;
	((mindustry_editor_WaveInfoDialog *) NULL_CHECK(sp[0].o))->F_expandedGroup = (jref) sp[1].o;
	LINE_NUMBER(205);
	((func_mindustry_editor_WaveInfoDialog_buildGroups) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_buildGroups])(ctx, (frame[0].o));
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$1_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_Button_left_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(174);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[1].o)))->F_type;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(175);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[1].o)))->F_type;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_localizedName;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_ellipsis_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_ellipsis_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(110.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(177);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_Button_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(179);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Prov_3);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(45.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (8));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(181);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_copySmall;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_41(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_41 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_41);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(-6.0f);
	LINE_NUMBER(184);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(46.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.copy"_j))));
	LINE_NUMBER(186);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[1].o)))->F_effect;
	sp += 1;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(187);
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	sp[1].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[1].o)))->F_effect;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_uiIcon;
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_10;
	}
label_8:;
	LINE_NUMBER(188);
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_logicSmall;
label_10:;
	{
	sp -= 2;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_42(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_42 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_42);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	LINE_NUMBER(186);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(-6.0f);
	LINE_NUMBER(189);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(46.0f)));
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[1].o)))->F_effect;
	sp += 1;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[1].o)))->F_effect;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_localizedName;
	sp += 1;
	goto label_14;
	}
label_13:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@none"_j));
label_14:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(191);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_unitsSmall;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_43(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_43 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_43);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-6.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(46.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@stat.unittype"_j))));
	LINE_NUMBER(192);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_cancel;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_44(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_44 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_44);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(-6.0f);
	LINE_NUMBER(198);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(46.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-12.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@waves.remove"_j))));
	LINE_NUMBER(199);
	sp[0].o = frame[3].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseMiddle;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_45(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_45 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_45);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$8_mindustry_game_SpawnGroup(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$8", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[1].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_groups;
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_R_int])(ctx, sp[1].o, (frame[1].o));
	jint temp1 = temp0 + (jint(1));
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_mindustry_game_SpawnGroup_copy_R_mindustry_game_SpawnGroup) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_SpawnGroup_copy_R_mindustry_game_SpawnGroup])(ctx, (frame[1].o));
	((mindustry_editor_WaveInfoDialog *) NULL_CHECK(sp[1].o))->F_expandedGroup = (jref) sp[2].o;
	((func_arc_struct_Seq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_insert_int_java_lang_Object])(ctx, sp[0].o, temp1, sp[2].o);
	LINE_NUMBER(201);
	((func_mindustry_editor_WaveInfoDialog_buildGroups) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_buildGroups])(ctx, (frame[0].o));
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$7_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$7", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_groups;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(194);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_expandedGroup;
	if (sp[0].o != (frame[1].o)) goto label_2;
	}
	{
	((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_expandedGroup = (jref) (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_table;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(196);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, (frame[2].o));
	LINE_NUMBER(197);
	((func_mindustry_editor_WaveInfoDialog_buildGroups) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_buildGroups])(ctx, (frame[0].o));
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$5_mindustry_game_SpawnGroup(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$5", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(191);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_68(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_68 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_68);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_WaveInfoDialog_showUnits_arc_func_Cons_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_showUnits_arc_func_Cons_boolean])(ctx, sp[0].o, sp[1].o, (jint(0)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$6_mindustry_game_SpawnGroup_mindustry_type_UnitType(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(191);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$4_mindustry_game_SpawnGroup(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(189);
	((func_mindustry_editor_WaveInfoDialog_showEffects_mindustry_game_SpawnGroup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_showEffects_mindustry_game_SpawnGroup])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$3_mindustry_game_SpawnGroup(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$3", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[1].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_groups;
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_R_int])(ctx, sp[1].o, (frame[1].o));
	jint temp1 = temp0 + (jint(1));
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_mindustry_game_SpawnGroup_copy_R_mindustry_game_SpawnGroup) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_SpawnGroup_copy_R_mindustry_game_SpawnGroup])(ctx, (frame[1].o));
	((mindustry_editor_WaveInfoDialog *) NULL_CHECK(sp[1].o))->F_expandedGroup = (jref) sp[2].o;
	((func_arc_struct_Seq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_insert_int_java_lang_Object])(ctx, sp[0].o, temp1, sp[2].o);
	LINE_NUMBER(183);
	((func_mindustry_editor_WaveInfoDialog_buildGroups) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_buildGroups])(ctx, (frame[0].o));
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$2_mindustry_game_SpawnGroup_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$buildGroups$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxInteger(ctx, (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_begin) + (jint(1)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$setup$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$setup$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(106);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_69(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_69 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_69);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(114);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(116);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_70(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_70 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_70);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(0)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(118);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_71(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_71 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_71);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$setup$7_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$setup$7", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@add"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_46(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_46 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_46);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(70.0f)));
	LINE_NUMBER(124);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_filter;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_47(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_47 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_47);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(64.0f);
	jfloat temp1 = jfloat(70.0f);
	LINE_NUMBER(142);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$setup$10(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$setup$10", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@waves.sort"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(126);
	((func_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(127);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_72(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_72 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_72);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(135);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(136);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@waves.sort.reverse"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Boolc_3(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Boolc_3 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Boolc_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(4.0f);
	LINE_NUMBER(139);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((jint)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_reverseSort));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(140);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[1].o));
	LINE_NUMBER(141);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[1].o));
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$setup$13_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$setup$13", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(137);
	((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_reverseSort = (frame[1].i);
	LINE_NUMBER(138);
	((func_mindustry_editor_WaveInfoDialog_buildGroups) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_buildGroups])(ctx, (frame[0].o));
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$setup$11_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$setup$11", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(128);
	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_WaveInfoDialog$Sort_all;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(129);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[6].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@waves.sort.\u0001"_j.string, 1, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatTogglet;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_48(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_48 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_48);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(150.0f);
	jfloat temp1 = jfloat(60.0f);
	LINE_NUMBER(133);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	sp[1].o = frame[6].o;
	sp[2].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_sort;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(128);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(135);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$setup$12_mindustry_editor_WaveInfoDialog$Sort_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$setup$12", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(130);
	((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_sort = (jref) (frame[1].o);
	LINE_NUMBER(131);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(132);
	((func_mindustry_editor_WaveInfoDialog_buildGroups) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_buildGroups])(ctx, (frame[0].o));
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$setup$8(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$setup$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_73(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_73 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_73);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_WaveInfoDialog_showUnits_arc_func_Cons_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_showUnits_arc_func_Cons_boolean])(ctx, sp[0].o, sp[1].o, (jint(0)));
	LINE_NUMBER(121);
	((func_mindustry_editor_WaveInfoDialog_buildGroups) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_buildGroups])(ctx, (frame[0].o));
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$setup$9_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$setup$9", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[1].o = frame[0].o;
	clinit_mindustry_game_SpawnGroup(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_SpawnGroup);
	init_mindustry_game_SpawnGroup_mindustry_type_UnitType(ctx, sp[2].o, (frame[1].o));
	((mindustry_editor_WaveInfoDialog *) NULL_CHECK(sp[1].o))->F_expandedGroup = (jref) sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$setup$6_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$setup$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(116);
	((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_table = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$setup$1_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$setup$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(107);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_zoom;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(108);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_search) >= 0) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxInteger(ctx, (((jint)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_search) + (jint(1)))));
	sp += 1;
	}
label_3:;
	{
	sp -= 2;
	clinit_arc_scene_ui_TextField$TextFieldFilter(ctx);
	sp[2].o = (jobject)SF_arc_scene_ui_TextField$TextFieldFilter_digitsOnly;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_74(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_74 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_74);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(111);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (8));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	((func_arc_scene_ui_TextField_setMessageText_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_TextField_setMessageText_java_lang_String])(ctx, (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o)), (((jobject) createStringLiteral(ctx, u8"@waves.search"_j))));
	LINE_NUMBER(112);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_units;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_49(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_49 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_49);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(46.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@waves.filter"_j))));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_75(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_75 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_75);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(113);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$setup$5_arc_scene_ui_ImageButton(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$setup$5", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_filterType;
	sp += 1;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	sp[1].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_filterType;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_uiIcon;
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_filter;
label_2:;
	sp -= 2;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$setup$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$setup$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_76(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_76 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_76);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_WaveInfoDialog_showUnits_arc_func_Cons_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_showUnits_arc_func_Cons_boolean])(ctx, sp[0].o, sp[1].o, (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$setup$4_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$setup$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(112);
	((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_filterType = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$setup$2_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$setup$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_groups;
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_int_R_int(ctx, (frame[1].o), (jint(0)));
	jint temp1 = temp0 - (jint(1));
	sp[0].i = temp1;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(-1);
label_2:;
	{
	sp -= 2;
	((mindustry_editor_WaveInfoDialog *) NULL_CHECK(sp[0].o))->F_search = sp[1].i;
	LINE_NUMBER(110);
	((func_mindustry_editor_WaveInfoDialog_buildGroups) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_buildGroups])(ctx, (frame[0].o));
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$new$11(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$new$11", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_game_Waves_generate_float_R_arc_struct_Seq(ctx, (jfloat(0.1f)));
	((mindustry_editor_WaveInfoDialog *) NULL_CHECK(sp[0].o))->F_groups = (jref) sp[1].o;
	LINE_NUMBER(96);
	((func_mindustry_editor_WaveInfoDialog_buildGroups) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_buildGroups])(ctx, (frame[0].o));
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$new$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$new$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@edit.menu"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(54);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[1].o));
	LINE_NUMBER(55);
	((func_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(56);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_77(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_77 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Cons_77);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(90);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[1].o));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$new$3_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$new$3", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(57);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_cleart;
	frame[3].o = sp[0].o;
	LINE_NUMBER(58);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(280.0f)), (jfloat(64.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(60);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@copy.clipboard"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_copy;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_50(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_50 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_50);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(64);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(12.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(66);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@load.clipboard"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_download;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_51(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_51 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_51);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_app;
	LINE_NUMBER(75);
	sp[1].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[1].o))(ctx, sp[1].o);
	sp += 1;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[0].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[0].o))(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	if (temp0 != 0) goto label_7;
	}
label_6:;
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].i);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(12.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(77);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@clear"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_none;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_52(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_52 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_52);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(81);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(83);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@settings.reset"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_refresh;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_53(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_53 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_53);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp1 = jfloat(12.0f);
	LINE_NUMBER(87);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$new$9_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$new$9", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@confirm"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@settings.clear.confirm"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_54(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_54 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_54);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$new$10_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$new$10", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_waves;
	sp[1].o = (jobject)((func_mindustry_game_Waves_get_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Waves_get_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_mindustry_io_JsonIO_copy_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	((mindustry_editor_WaveInfoDialog *) NULL_CHECK(sp[0].o))->F_groups = (jref) (checkCast(ctx, &class_arc_struct_Seq, sp[1].o));
	LINE_NUMBER(85);
	((func_mindustry_editor_WaveInfoDialog_buildGroups) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_buildGroups])(ctx, (frame[0].o));
	LINE_NUMBER(86);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$new$7_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$new$7", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(77);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@confirm"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@settings.clear.confirm"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_55(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_55 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog_invoke_java_lang_Runnable_55);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$new$8_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$new$8", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(79);
	((func_mindustry_editor_WaveInfoDialog_buildGroups) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_buildGroups])(ctx, (frame[0].o));
	LINE_NUMBER(80);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$new$6_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$new$6", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_maps;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_app;
	sp[2].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[2].o))(ctx, sp[2].o);
	sp[1].o = (jobject)((func_mindustry_maps_Maps_readWaves_java_lang_String_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_maps_Maps_readWaves_java_lang_String_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	((mindustry_editor_WaveInfoDialog *) NULL_CHECK(sp[0].o))->F_groups = (jref) sp[1].o;
	LINE_NUMBER(69);
	((func_mindustry_editor_WaveInfoDialog_buildGroups) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_buildGroups])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(73);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(70);
	frame[2].o = sp[0].o;
	LINE_NUMBER(71);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[2].o));
	LINE_NUMBER(72);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@waves.invalid"_j))));
	}
label_5:;
	{
	LINE_NUMBER(74);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_WaveInfoDialog_lambda$new$5_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$new$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_groups;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_groups;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$new$4_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$new$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfoFade_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfoFade_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@waves.copied"_j))));
	LINE_NUMBER(62);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_maps;
	sp[2].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[1].o = (jobject)((func_mindustry_maps_Maps_writeWaves_arc_struct_Seq_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_maps_Maps_writeWaves_arc_struct_Seq_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	((func_arc_Application_setClipboardText_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_setClipboardText_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(63);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$new$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$new$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_groups;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_spawns = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveInfoDialog_lambda$new$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog:lambda$new$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	((mindustry_editor_WaveInfoDialog *) NULL_CHECK((frame[0].o)))->F_checkedSpawns = (jint(0));
	LINE_NUMBER(46);
	((func_mindustry_editor_WaveInfoDialog_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveInfoDialog_setup])(ctx, (frame[0].o));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_editor_WaveInfoDialog;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field expandedGroup
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field filterType
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_editor_WaveInfoDialog[] {
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
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$new$1,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$new$0,
	(void *) M_mindustry_editor_WaveInfoDialog_setup,
	(void *) M_mindustry_editor_WaveInfoDialog_buildGroups,
	(void *) M_mindustry_editor_WaveInfoDialog_showUnits_arc_func_Cons_boolean,
	(void *) M_mindustry_editor_WaveInfoDialog_showEffects_mindustry_game_SpawnGroup,
	(void *) M_mindustry_editor_WaveInfoDialog_updateWaves,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$showEffects$0_mindustry_game_SpawnGroup_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$showEffects$4_mindustry_game_SpawnGroup_mindustry_type_StatusEffect_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$showEffects$2_mindustry_game_SpawnGroup_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$showUnits$0_boolean_arc_func_Cons_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$showUnits$4_arc_func_Cons_mindustry_type_UnitType_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$showUnits$2_arc_func_Cons_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$0_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$30_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$31_mindustry_game_SpawnGroup,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$23_mindustry_game_SpawnGroup_boolean,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$20_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$22_mindustry_game_SpawnGroup_java_lang_String,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$21_mindustry_game_SpawnGroup_java_lang_String,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$18_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$19_mindustry_game_SpawnGroup_java_lang_String,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$15_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$17_mindustry_game_SpawnGroup_java_lang_String,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$16_mindustry_game_SpawnGroup_java_lang_String,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$13_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$14_mindustry_game_SpawnGroup_java_lang_String,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$10_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$12_mindustry_game_SpawnGroup_java_lang_String,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$11_mindustry_game_SpawnGroup_java_lang_String,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$9_mindustry_game_SpawnGroup,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$1_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table_arc_scene_ui_Button,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$8_mindustry_game_SpawnGroup,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$7_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$5_mindustry_game_SpawnGroup,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$4_mindustry_game_SpawnGroup,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$3_mindustry_game_SpawnGroup,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$setup$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$setup$7_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$setup$10,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$setup$13_boolean,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$setup$11_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$setup$12_mindustry_editor_WaveInfoDialog$Sort_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$setup$8,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$setup$9_mindustry_type_UnitType,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$setup$6_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$setup$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$setup$5_arc_scene_ui_ImageButton,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$setup$3,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$setup$4_mindustry_type_UnitType,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$setup$2_java_lang_String,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$new$11,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$new$2,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$new$3_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$new$9_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$new$10_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$new$7_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$new$8_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$new$6_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$new$5_arc_scene_ui_TextButton_R_boolean,
	(void *) M_mindustry_editor_WaveInfoDialog_lambda$new$4_mindustry_ui_dialogs_BaseDialog,
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
	{ "buildGroups", "()V" },
	{ "showUnits", "(Larc/func/Cons;Z)V" },
	{ "showEffects", "(Lmindustry/game/SpawnGroup;)V" },
	{ "updateWaves", "()V" },
	{ "lambda$showEffects$0", "(Lmindustry/game/SpawnGroup;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showEffects$4", "(Lmindustry/game/SpawnGroup;Lmindustry/type/StatusEffect;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$showEffects$2", "(Lmindustry/game/SpawnGroup;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$showUnits$0", "(ZLarc/func/Cons;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showUnits$4", "(Larc/func/Cons;Lmindustry/type/UnitType;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$showUnits$2", "(Larc/func/Cons;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$buildGroups$0", "(Lmindustry/game/SpawnGroup;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildGroups$30", "(Lmindustry/game/SpawnGroup;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildGroups$31", "(Lmindustry/game/SpawnGroup;)V" },
	{ "lambda$buildGroups$23", "(Lmindustry/game/SpawnGroup;Z)V" },
	{ "lambda$buildGroups$20", "(Lmindustry/game/SpawnGroup;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildGroups$22", "(Lmindustry/game/SpawnGroup;Ljava/lang/String;)V" },
	{ "lambda$buildGroups$21", "(Lmindustry/game/SpawnGroup;Ljava/lang/String;)V" },
	{ "lambda$buildGroups$18", "(Lmindustry/game/SpawnGroup;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildGroups$19", "(Lmindustry/game/SpawnGroup;Ljava/lang/String;)V" },
	{ "lambda$buildGroups$15", "(Lmindustry/game/SpawnGroup;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildGroups$17", "(Lmindustry/game/SpawnGroup;Ljava/lang/String;)V" },
	{ "lambda$buildGroups$16", "(Lmindustry/game/SpawnGroup;Ljava/lang/String;)V" },
	{ "lambda$buildGroups$13", "(Lmindustry/game/SpawnGroup;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildGroups$14", "(Lmindustry/game/SpawnGroup;Ljava/lang/String;)V" },
	{ "lambda$buildGroups$10", "(Lmindustry/game/SpawnGroup;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildGroups$12", "(Lmindustry/game/SpawnGroup;Ljava/lang/String;)V" },
	{ "lambda$buildGroups$11", "(Lmindustry/game/SpawnGroup;Ljava/lang/String;)V" },
	{ "lambda$buildGroups$9", "(Lmindustry/game/SpawnGroup;)V" },
	{ "lambda$buildGroups$1", "(Lmindustry/game/SpawnGroup;Larc/scene/ui/layout/Table;Larc/scene/ui/Button;)V" },
	{ "lambda$buildGroups$8", "(Lmindustry/game/SpawnGroup;)V" },
	{ "lambda$buildGroups$7", "(Lmindustry/game/SpawnGroup;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildGroups$5", "(Lmindustry/game/SpawnGroup;)V" },
	{ "lambda$buildGroups$4", "(Lmindustry/game/SpawnGroup;)V" },
	{ "lambda$buildGroups$3", "(Lmindustry/game/SpawnGroup;)V" },
	{ "lambda$setup$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$7", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$10", "()V" },
	{ "lambda$setup$13", "(Z)V" },
	{ "lambda$setup$11", "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$12", "(Lmindustry/editor/WaveInfoDialog$Sort;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$setup$8", "()V" },
	{ "lambda$setup$9", "(Lmindustry/type/UnitType;)V" },
	{ "lambda$setup$6", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$5", "(Larc/scene/ui/ImageButton;)V" },
	{ "lambda$setup$3", "()V" },
	{ "lambda$setup$4", "(Lmindustry/type/UnitType;)V" },
	{ "lambda$setup$2", "(Ljava/lang/String;)V" },
	{ "lambda$new$11", "()V" },
	{ "lambda$new$2", "()V" },
	{ "lambda$new$3", "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$9", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$new$10", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$new$7", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$new$8", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$new$6", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$new$5", "(Larc/scene/ui/TextButton;)Z" },
	{ "lambda$new$4", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_editor_WaveInfoDialog$Sort,
};

static FieldMetadata fields[] {
	{ "groups", &class_arc_struct_Seq, offsetof(mindustry_editor_WaveInfoDialog, F_groups), "Larc/struct/Seq;", 0 },
	{ "expandedGroup", &class_mindustry_game_SpawnGroup, offsetof(mindustry_editor_WaveInfoDialog, F_expandedGroup), "Lmindustry/game/SpawnGroup;", 2 },
	{ "table", &class_arc_scene_ui_layout_Table, offsetof(mindustry_editor_WaveInfoDialog, F_table), "Larc/scene/ui/layout/Table;", 2 },
	{ "search", &class_int, offsetof(mindustry_editor_WaveInfoDialog, F_search), "I", 2 },
	{ "filterType", &class_mindustry_type_UnitType, offsetof(mindustry_editor_WaveInfoDialog, F_filterType), "Lmindustry/type/UnitType;", 2 },
	{ "sort", &class_mindustry_editor_WaveInfoDialog$Sort, offsetof(mindustry_editor_WaveInfoDialog, F_sort), "Lmindustry/editor/WaveInfoDialog$Sort;", 2 },
	{ "reverseSort", &class_boolean, offsetof(mindustry_editor_WaveInfoDialog, F_reverseSort), "Z", 2 },
	{ "checkedSpawns", &class_boolean, offsetof(mindustry_editor_WaveInfoDialog, F_checkedSpawns), "Z", 2 },
	{ "graph", &class_mindustry_editor_WaveGraph, offsetof(mindustry_editor_WaveInfoDialog, F_graph), "Lmindustry/editor/WaveGraph;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_WaveInfoDialog, 0, "()V", 1 },
	{ "setup", (intptr_t) M_mindustry_editor_WaveInfoDialog_setup, VTABLE_mindustry_editor_WaveInfoDialog_setup, "()V", 0 },
	{ "buildGroups", (intptr_t) M_mindustry_editor_WaveInfoDialog_buildGroups, VTABLE_mindustry_editor_WaveInfoDialog_buildGroups, "()V", 0 },
	{ "showUnits", (intptr_t) M_mindustry_editor_WaveInfoDialog_showUnits_arc_func_Cons_boolean, VTABLE_mindustry_editor_WaveInfoDialog_showUnits_arc_func_Cons_boolean, "(Larc/func/Cons;Z)V", 0 },
	{ "showEffects", (intptr_t) M_mindustry_editor_WaveInfoDialog_showEffects_mindustry_game_SpawnGroup, VTABLE_mindustry_editor_WaveInfoDialog_showEffects_mindustry_game_SpawnGroup, "(Lmindustry/game/SpawnGroup;)V", 0 },
	{ "updateWaves", (intptr_t) M_mindustry_editor_WaveInfoDialog_updateWaves, VTABLE_mindustry_editor_WaveInfoDialog_updateWaves, "()V", 0 },
	{ "lambda$showEffects$0", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$showEffects$0_mindustry_game_SpawnGroup_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_WaveInfoDialog_lambda$showEffects$0_mindustry_game_SpawnGroup_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Lmindustry/game/SpawnGroup;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showEffects$4", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$showEffects$4_mindustry_game_SpawnGroup_mindustry_type_StatusEffect_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_WaveInfoDialog_lambda$showEffects$4_mindustry_game_SpawnGroup_mindustry_type_StatusEffect_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/game/SpawnGroup;Lmindustry/type/StatusEffect;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$showEffects$3", (intptr_t) SM_mindustry_editor_WaveInfoDialog_lambda$showEffects$3_mindustry_type_StatusEffect_arc_scene_ui_Button, 0, "(Lmindustry/type/StatusEffect;Larc/scene/ui/Button;)V", 4106 },
	{ "lambda$showEffects$2", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$showEffects$2_mindustry_game_SpawnGroup_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_WaveInfoDialog_lambda$showEffects$2_mindustry_game_SpawnGroup_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/game/SpawnGroup;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$showEffects$1", (intptr_t) SM_mindustry_editor_WaveInfoDialog_lambda$showEffects$1_arc_scene_ui_Button, 0, "(Larc/scene/ui/Button;)V", 4106 },
	{ "lambda$showUnits$0", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$showUnits$0_boolean_arc_func_Cons_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_WaveInfoDialog_lambda$showUnits$0_boolean_arc_func_Cons_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(ZLarc/func/Cons;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showUnits$4", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$showUnits$4_arc_func_Cons_mindustry_type_UnitType_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_WaveInfoDialog_lambda$showUnits$4_arc_func_Cons_mindustry_type_UnitType_mindustry_ui_dialogs_BaseDialog, "(Larc/func/Cons;Lmindustry/type/UnitType;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$showUnits$3", (intptr_t) SM_mindustry_editor_WaveInfoDialog_lambda$showUnits$3_mindustry_type_UnitType_arc_scene_ui_Button, 0, "(Lmindustry/type/UnitType;Larc/scene/ui/Button;)V", 4106 },
	{ "lambda$showUnits$2", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$showUnits$2_arc_func_Cons_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_WaveInfoDialog_lambda$showUnits$2_arc_func_Cons_mindustry_ui_dialogs_BaseDialog, "(Larc/func/Cons;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$showUnits$1", (intptr_t) SM_mindustry_editor_WaveInfoDialog_lambda$showUnits$1_arc_scene_ui_Button, 0, "(Larc/scene/ui/Button;)V", 4106 },
	{ "lambda$buildGroups$0", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$0_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$0_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table, "(Lmindustry/game/SpawnGroup;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildGroups$30", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$30_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$30_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table, "(Lmindustry/game/SpawnGroup;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildGroups$35", (intptr_t) SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$35_mindustry_game_SpawnGroup_R_java_lang_CharSequence, 0, "(Lmindustry/game/SpawnGroup;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$buildGroups$31", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$31_mindustry_game_SpawnGroup, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$31_mindustry_game_SpawnGroup, "(Lmindustry/game/SpawnGroup;)V", 4098 },
	{ "lambda$buildGroups$32", (intptr_t) SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$32_mindustry_game_SpawnGroup_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, 0, "(Lmindustry/game/SpawnGroup;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$buildGroups$34", (intptr_t) SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$34_mindustry_game_SpawnGroup_mindustry_ui_dialogs_BaseDialog, 0, "(Lmindustry/game/SpawnGroup;Lmindustry/ui/dialogs/BaseDialog;)V", 4106 },
	{ "lambda$buildGroups$33", (intptr_t) SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$33_mindustry_game_SpawnGroup_mindustry_world_Tile_mindustry_ui_dialogs_BaseDialog, 0, "(Lmindustry/game/SpawnGroup;Lmindustry/world/Tile;Lmindustry/ui/dialogs/BaseDialog;)V", 4106 },
	{ "lambda$buildGroups$25", (intptr_t) SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$25_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table, 0, "(Lmindustry/game/SpawnGroup;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$buildGroups$28", (intptr_t) SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$28_mindustry_game_SpawnGroup, 0, "(Lmindustry/game/SpawnGroup;)V", 4106 },
	{ "lambda$buildGroups$29", (intptr_t) SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$29_mindustry_game_SpawnGroup_mindustry_game_Team, 0, "(Lmindustry/game/SpawnGroup;Lmindustry/game/Team;)V", 4106 },
	{ "lambda$buildGroups$26", (intptr_t) SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$26_mindustry_game_SpawnGroup_arc_scene_ui_Button, 0, "(Lmindustry/game/SpawnGroup;Larc/scene/ui/Button;)V", 4106 },
	{ "lambda$buildGroups$27", (intptr_t) SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$27_mindustry_game_SpawnGroup_arc_scene_ui_Image, 0, "(Lmindustry/game/SpawnGroup;Larc/scene/ui/Image;)V", 4106 },
	{ "lambda$buildGroups$24", (intptr_t) SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$24_mindustry_game_SpawnGroup_arc_scene_ui_CheckBox, 0, "(Lmindustry/game/SpawnGroup;Larc/scene/ui/CheckBox;)V", 4106 },
	{ "lambda$buildGroups$23", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$23_mindustry_game_SpawnGroup_boolean, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$23_mindustry_game_SpawnGroup_boolean, "(Lmindustry/game/SpawnGroup;Z)V", 4098 },
	{ "lambda$buildGroups$20", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$20_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$20_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table, "(Lmindustry/game/SpawnGroup;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildGroups$22", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$22_mindustry_game_SpawnGroup_java_lang_String, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$22_mindustry_game_SpawnGroup_java_lang_String, "(Lmindustry/game/SpawnGroup;Ljava/lang/String;)V", 4098 },
	{ "lambda$buildGroups$21", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$21_mindustry_game_SpawnGroup_java_lang_String, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$21_mindustry_game_SpawnGroup_java_lang_String, "(Lmindustry/game/SpawnGroup;Ljava/lang/String;)V", 4098 },
	{ "lambda$buildGroups$18", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$18_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$18_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table, "(Lmindustry/game/SpawnGroup;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildGroups$19", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$19_mindustry_game_SpawnGroup_java_lang_String, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$19_mindustry_game_SpawnGroup_java_lang_String, "(Lmindustry/game/SpawnGroup;Ljava/lang/String;)V", 4098 },
	{ "lambda$buildGroups$15", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$15_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$15_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table, "(Lmindustry/game/SpawnGroup;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildGroups$17", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$17_mindustry_game_SpawnGroup_java_lang_String, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$17_mindustry_game_SpawnGroup_java_lang_String, "(Lmindustry/game/SpawnGroup;Ljava/lang/String;)V", 4098 },
	{ "lambda$buildGroups$16", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$16_mindustry_game_SpawnGroup_java_lang_String, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$16_mindustry_game_SpawnGroup_java_lang_String, "(Lmindustry/game/SpawnGroup;Ljava/lang/String;)V", 4098 },
	{ "lambda$buildGroups$13", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$13_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$13_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table, "(Lmindustry/game/SpawnGroup;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildGroups$14", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$14_mindustry_game_SpawnGroup_java_lang_String, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$14_mindustry_game_SpawnGroup_java_lang_String, "(Lmindustry/game/SpawnGroup;Ljava/lang/String;)V", 4098 },
	{ "lambda$buildGroups$10", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$10_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$10_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table, "(Lmindustry/game/SpawnGroup;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildGroups$12", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$12_mindustry_game_SpawnGroup_java_lang_String, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$12_mindustry_game_SpawnGroup_java_lang_String, "(Lmindustry/game/SpawnGroup;Ljava/lang/String;)V", 4098 },
	{ "lambda$buildGroups$11", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$11_mindustry_game_SpawnGroup_java_lang_String, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$11_mindustry_game_SpawnGroup_java_lang_String, "(Lmindustry/game/SpawnGroup;Ljava/lang/String;)V", 4098 },
	{ "lambda$buildGroups$9", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$9_mindustry_game_SpawnGroup, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$9_mindustry_game_SpawnGroup, "(Lmindustry/game/SpawnGroup;)V", 4098 },
	{ "lambda$buildGroups$1", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$1_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table_arc_scene_ui_Button, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$1_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table_arc_scene_ui_Button, "(Lmindustry/game/SpawnGroup;Larc/scene/ui/layout/Table;Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$buildGroups$8", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$8_mindustry_game_SpawnGroup, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$8_mindustry_game_SpawnGroup, "(Lmindustry/game/SpawnGroup;)V", 4098 },
	{ "lambda$buildGroups$7", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$7_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$7_mindustry_game_SpawnGroup_arc_scene_ui_layout_Table, "(Lmindustry/game/SpawnGroup;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildGroups$5", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$5_mindustry_game_SpawnGroup, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$5_mindustry_game_SpawnGroup, "(Lmindustry/game/SpawnGroup;)V", 4098 },
	{ "lambda$buildGroups$6", (intptr_t) SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$6_mindustry_game_SpawnGroup_mindustry_type_UnitType, 0, "(Lmindustry/game/SpawnGroup;Lmindustry/type/UnitType;)V", 4106 },
	{ "lambda$buildGroups$4", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$4_mindustry_game_SpawnGroup, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$4_mindustry_game_SpawnGroup, "(Lmindustry/game/SpawnGroup;)V", 4098 },
	{ "lambda$buildGroups$3", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$buildGroups$3_mindustry_game_SpawnGroup, VTABLE_mindustry_editor_WaveInfoDialog_lambda$buildGroups$3_mindustry_game_SpawnGroup, "(Lmindustry/game/SpawnGroup;)V", 4098 },
	{ "lambda$buildGroups$2", (intptr_t) SM_mindustry_editor_WaveInfoDialog_lambda$buildGroups$2_mindustry_game_SpawnGroup_R_java_lang_CharSequence, 0, "(Lmindustry/game/SpawnGroup;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$setup$0", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$setup$0_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_WaveInfoDialog_lambda$setup$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$7", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$setup$7_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_WaveInfoDialog_lambda$setup$7_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$10", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$setup$10, VTABLE_mindustry_editor_WaveInfoDialog_lambda$setup$10, "()V", 4098 },
	{ "lambda$setup$13", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$setup$13_boolean, VTABLE_mindustry_editor_WaveInfoDialog_lambda$setup$13_boolean, "(Z)V", 4098 },
	{ "lambda$setup$11", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$setup$11_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_WaveInfoDialog_lambda$setup$11_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$12", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$setup$12_mindustry_editor_WaveInfoDialog$Sort_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_WaveInfoDialog_lambda$setup$12_mindustry_editor_WaveInfoDialog$Sort_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/editor/WaveInfoDialog$Sort;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$setup$8", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$setup$8, VTABLE_mindustry_editor_WaveInfoDialog_lambda$setup$8, "()V", 4098 },
	{ "lambda$setup$9", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$setup$9_mindustry_type_UnitType, VTABLE_mindustry_editor_WaveInfoDialog_lambda$setup$9_mindustry_type_UnitType, "(Lmindustry/type/UnitType;)V", 4098 },
	{ "lambda$setup$6", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$setup$6_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_WaveInfoDialog_lambda$setup$6_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$1", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$setup$1_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_WaveInfoDialog_lambda$setup$1_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$5", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$setup$5_arc_scene_ui_ImageButton, VTABLE_mindustry_editor_WaveInfoDialog_lambda$setup$5_arc_scene_ui_ImageButton, "(Larc/scene/ui/ImageButton;)V", 4098 },
	{ "lambda$setup$3", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$setup$3, VTABLE_mindustry_editor_WaveInfoDialog_lambda$setup$3, "()V", 4098 },
	{ "lambda$setup$4", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$setup$4_mindustry_type_UnitType, VTABLE_mindustry_editor_WaveInfoDialog_lambda$setup$4_mindustry_type_UnitType, "(Lmindustry/type/UnitType;)V", 4098 },
	{ "lambda$setup$2", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$setup$2_java_lang_String, VTABLE_mindustry_editor_WaveInfoDialog_lambda$setup$2_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$new$11", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$new$11, VTABLE_mindustry_editor_WaveInfoDialog_lambda$new$11, "()V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$new$2, VTABLE_mindustry_editor_WaveInfoDialog_lambda$new$2, "()V", 4098 },
	{ "lambda$new$3", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$new$3_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_WaveInfoDialog_lambda$new$3_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$9", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$new$9_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_WaveInfoDialog_lambda$new$9_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$new$10", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$new$10_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_WaveInfoDialog_lambda$new$10_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$new$7", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$new$7_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_WaveInfoDialog_lambda$new$7_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$new$8", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$new$8_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_WaveInfoDialog_lambda$new$8_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$new$6", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$new$6_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_WaveInfoDialog_lambda$new$6_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$new$5", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$new$5_arc_scene_ui_TextButton_R_boolean, VTABLE_mindustry_editor_WaveInfoDialog_lambda$new$5_arc_scene_ui_TextButton_R_boolean, "(Larc/scene/ui/TextButton;)Z", 4098 },
	{ "lambda$new$4", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$new$4_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_WaveInfoDialog_lambda$new$4_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$new$1, VTABLE_mindustry_editor_WaveInfoDialog_lambda$new$1, "()V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_editor_WaveInfoDialog_lambda$new$0, VTABLE_mindustry_editor_WaveInfoDialog_lambda$new$0, "()V", 4098 },
};

Class class_mindustry_editor_WaveInfoDialog{
		.nativeName = (intptr_t) "mindustry/editor/WaveInfoDialog",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_BaseDialog,
		.size = sizeof(mindustry_editor_WaveInfoDialog),
		.classVtable = (intptr_t) vtable_mindustry_editor_WaveInfoDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_WaveInfoDialog,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_editor_WaveInfoDialog,
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
		.methodCount = 78,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 356,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_WaveInfoDialog = registerClass(&class_mindustry_editor_WaveInfoDialog);

}
