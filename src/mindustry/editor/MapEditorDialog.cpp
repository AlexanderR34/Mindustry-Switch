#include "mindustry/editor/MapEditorDialog.h"
#include "arc/func/Prov.h"
#include "mindustry/editor/MapView.h"
#include "arc/Input.h"
#include "mindustry/editor/EditorTool.h"
#include "arc/func/Boolp.h"
#include "mindustry/ui/dialogs/MapPlayDialog.h"
#include "arc/graphics/Color.h"
#include "arc/scene/ui/TextField_TextFieldValidator.h"
#include "java/lang/Runnable.h"
#include "arc/input/KeyCode.h"
#include "arc/graphics/Pixmap.h"
#include "arc/scene/actions/SequenceAction.h"
#include "arc/util/Tmp.h"
#include "java/lang/reflect/Method.h"
#include "arc/func/Boolc.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "arc/util/Log.h"
#include "arc/util/Time.h"
#include "arc/func/Floatc.h"
#include "java/lang/Object.h"
#include "mindustry/world/meta/BuildVisibility.h"
#include "mindustry/game/MapObjectives.h"
#include "arc/struct/ObjectSet.h"
#include "arc/struct/ObjectMap.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/core/GameState_State.h"
#include "arc/func/Cons.h"
#include "mindustry/core/Control.h"
#include "mindustry/editor/MapResizeDialog_ResizeListener.h"
#include "mindustry/game/Gamemode.h"
#include "mindustry/ui/FileChooser_FileChooserParams.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/core/Platform.h"
#include "mindustry/io/JsonIO.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/entities/EntityGroup.h"
#include "arc/scene/actions/AlphaAction.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Boolp_3.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Boolp_4.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Boolp_5.h"
#include "mindustry/Vars.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_60.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_61.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_62.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Boolc_3.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Boolc_4.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Boolc_5.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/struct/StringMap.h"
#include "arc/scene/event/Touchable.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_67.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_68.h"
#include "arc/scene/ui/TextButton.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_69.h"
#include "mindustry/ui/FileChooser.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_63.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_64.h"
#include "java/lang/Throwable.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_65.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_66.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_70.h"
#include "mindustry/maps/Map.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_71.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_72.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_73.h"
#include "mindustry/editor/MapEditorDialog_invoke_mindustry_editor_MapResizeDialog_ResizeListener_1.h"
#include "mindustry/type/Item.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/core/Logic.h"
#include "arc/scene/ui/ButtonGroup.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_78.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_79.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_74.h"
#include "mindustry/editor/MapResizeDialog.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_75.h"
#include "arc/graphics/Camera.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_76.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_77.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "mindustry/editor/MapEditorDialog.h"
#include "mindustry/gen/Groups.h"
#include "arc/util/Timer_Task.h"
#include "mindustry/core/Platform_FileWriter.h"
#include "arc/scene/Action.h"
#include "mindustry/world/Tiles.h"
#include "java/lang/String.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Floatc_1.h"
#include "mindustry/world/blocks/environment/OverlayFloor.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_util_Comparator_1.h"
#include "java/lang/Enum.h"
#include "arc/util/UnsafeRunnable.h"
#include "mindustry/core/UI.h"
#include "arc/scene/actions/Actions.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/gen/Player.h"
#include "mindustry/type/Planet.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_56.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_57.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_58.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_59.h"
#include "java/util/Objects.h"
#include "mindustry/game/Team.h"
#include "mindustry/core/GameState.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_54.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_55.h"
#include "java/lang/Integer.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_100.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_101.h"
#include "mindustry/editor/MapLoadDialog.h"
#include "arc/scene/ui/ProgressBar.h"
#include "arc/scene/ui/ScrollPane_ScrollPaneStyle.h"
#include "arc/scene/ui/Image.h"
#include "mindustry/editor/MapEditorDialog_invoke_mindustry_core_Platform_FileWriter_2.h"
#include "mindustry/maps/Maps.h"
#include "mindustry/editor/MapEditorDialog_invoke_mindustry_core_Platform_FileWriter_3.h"
#include "arc/struct/Seq.h"
#include "arc/util/OS.h"
#include "mindustry/world/Tile.h"
#include "arc/Settings.h"
#include "arc/util/Disposable.h"
#include "arc/Core.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_util_UnsafeRunnable_1.h"
#include "java/util/Iterator.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "arc/util/Nullable.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_49.h"
#include "mindustry/gen/Building.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_57.h"
#include "arc/scene/Scene.h"
#include "arc/Graphics.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_56.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_59.h"
#include "mindustry/editor/EditorRenderer.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_58.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_53.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_52.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_55.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_54.h"
#include "mindustry/type/Publishable.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_51.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_50.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"
#include "arc/scene/ui/layout/Collapser.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_81.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_82.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_83.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_84.h"
#include "java/lang/Boolean.h"
#include "mindustry/game/Rules.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_80.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_39.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_38.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_46.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_45.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_48.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_47.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_42.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_41.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_44.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_43.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_89.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_40.h"
#include "mindustry/content/UnitTypes.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_85.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_86.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_87.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_88.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_92.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_93.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_94.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_95.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_90.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_91.h"
#include "mindustry/editor/SectorGenerateDialog.h"
#include "mindustry/type/Sector.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_35.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_34.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_37.h"
#include "arc/scene/ui/ScrollPane.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_36.h"
#include "mindustry/game/Teams.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_31.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_30.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_33.h"
#include "mindustry/game/GameStats.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Cons_32.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_106.h"
#include "mindustry/editor/MapInfoDialog.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_107.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Prov_1.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_96.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_102.h"
#include "mindustry/core/World.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_97.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_103.h"
#include "mindustry/editor/MapEditor.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_98.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_104.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_99.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_lang_Runnable_105.h"
#include "arc/scene/ui/TextField.h"
#include "arc/math/geom/Point2.h"
#include "arc/scene/ui/Button.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/ImageButton.h"
#include "arc/math/geom/Position.h"
#include "arc/util/Structs.h"
#include "mindustry/io/MapIO.h"
#include "arc/scene/ui/Label.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "arc/files/Fi.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Boolf_4.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Boolf_5.h"
#include "arc/Application.h"
#include "java/util/Comparator.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_scene_ui_TextField_TextFieldValidator_1.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/editor/MapGenerateDialog.h"
#include "arc/scene/ui/Slider.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/scene/Element.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Boolf_6.h"
#include "mindustry/editor/MapEditorDialog_invoke_arc_func_Boolf_7.h"

extern "C" {


void mark_mindustry_editor_MapEditorDialog(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_Dialog(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_editor_MapEditorDialog *) object;
	if (self->F_view)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_view)->clazz)->markFunction)((jobject) self->F_view, mark, depth + 1);
	if (self->F_infoDialog)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_infoDialog)->clazz)->markFunction)((jobject) self->F_infoDialog, mark, depth + 1);
	if (self->F_loadDialog)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loadDialog)->clazz)->markFunction)((jobject) self->F_loadDialog, mark, depth + 1);
	if (self->F_resizeDialog)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_resizeDialog)->clazz)->markFunction)((jobject) self->F_resizeDialog, mark, depth + 1);
	if (self->F_generateDialog)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_generateDialog)->clazz)->markFunction)((jobject) self->F_generateDialog, mark, depth + 1);
	if (self->F_sectorGenDialog)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sectorGenDialog)->clazz)->markFunction)((jobject) self->F_sectorGenDialog, mark, depth + 1);
	if (self->F_playtestDialog)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_playtestDialog)->clazz)->markFunction)((jobject) self->F_playtestDialog, mark, depth + 1);
	if (self->F_pane)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pane)->clazz)->markFunction)((jobject) self->F_pane, mark, depth + 1);
	if (self->F_menu)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_menu)->clazz)->markFunction)((jobject) self->F_menu, mark, depth + 1);
	if (self->F_blockSelection)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blockSelection)->clazz)->markFunction)((jobject) self->F_blockSelection, mark, depth + 1);
	if (self->F_lastSavedRules)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastSavedRules)->clazz)->markFunction)((jobject) self->F_lastSavedRules, mark, depth + 1);
	if (self->F_blocksOut)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blocksOut)->clazz)->markFunction)((jobject) self->F_blocksOut, mark, depth + 1);
}

void clinit_mindustry_editor_MapEditorDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_Dialog(ctx);
}

void init_mindustry_editor_MapEditorDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(55);
	init_arc_scene_ui_Dialog_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(50);
	((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_saved = (jint(0));
	LINE_NUMBER(51);
	((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_shownWithMap = (jint(0));
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_editor_MapEditorDialog *) NULL_CHECK(sp[0].o))->F_blocksOut = (jref) sp[1].o;
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black;
	sp[0].o = (jobject)((func_mindustry_editor_MapEditorDialog_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_MapView(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_MapView);
	init_mindustry_editor_MapView(ctx, sp[1].o);
	((mindustry_editor_MapEditorDialog *) NULL_CHECK(sp[0].o))->F_view = (jref) sp[1].o;
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_MapInfoDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_MapInfoDialog);
	init_mindustry_editor_MapInfoDialog(ctx, sp[1].o);
	((mindustry_editor_MapEditorDialog *) NULL_CHECK(sp[0].o))->F_infoDialog = (jref) sp[1].o;
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_MapGenerateDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog);
	init_mindustry_editor_MapGenerateDialog_boolean(ctx, sp[1].o, (jint(1)));
	((mindustry_editor_MapEditorDialog *) NULL_CHECK(sp[0].o))->F_generateDialog = (jref) sp[1].o;
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_SectorGenerateDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_SectorGenerateDialog);
	init_mindustry_editor_SectorGenerateDialog(ctx, sp[1].o);
	((mindustry_editor_MapEditorDialog *) NULL_CHECK(sp[0].o))->F_sectorGenDialog = (jref) sp[1].o;
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_MapPlayDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_MapPlayDialog);
	init_mindustry_ui_dialogs_MapPlayDialog(ctx, sp[1].o);
	((mindustry_editor_MapEditorDialog *) NULL_CHECK(sp[0].o))->F_playtestDialog = (jref) sp[1].o;
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"@menu"_j))));
	((mindustry_editor_MapEditorDialog *) NULL_CHECK(sp[0].o))->F_menu = (jref) sp[1].o;
	LINE_NUMBER(66);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, sp[0].o);
	LINE_NUMBER(68);
	frame[1].f = (jfloat(180.0f));
	LINE_NUMBER(70);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_30(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_30 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_30);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(142);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(144);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_steam) == 0) goto label_16;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_cont;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.publish.workshop"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_link;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_54(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_54 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_54);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(-3.0f);
	LINE_NUMBER(173);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((frame[1].f) * (jfloat(2))) + (jfloat(10.0f))), (jfloat(60.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_31(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_31 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_31);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	}
label_16:;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_cont;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.sectorgenerate"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_terrain;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_55(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_55 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_55);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(184);
	sp += 1;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_steam) != 0) goto label_21;
	}
	(sp++)->f = jfloat(-3.0f);
	goto label_22;
label_21:;
	INST_FCONST(1);
label_22:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].f);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((frame[1].f) * (jfloat(2))) + (jfloat(10.0f))), (jfloat(60.0f)));
	LINE_NUMBER(186);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(189);
	jint temp0 = (jint)SM_arc_util_OS_hasProp_java_lang_String_R_boolean(ctx, (((jobject) createStringLiteral(ctx, u8"mindustry.editor.simulate.button"_j))));
	if (temp0 == 0) goto label_25;
	}
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_cont;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Simulate"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_logic;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_56(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_56 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_56);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = ((frame[1].f) * (jfloat(2))) + (jfloat(10.0f));
	jfloat temp1 = jfloat(60.0f);
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(254);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	}
label_25:;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_cont;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@quit"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_exit;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_57(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_57 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_57);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(1);
	LINE_NUMBER(260);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((frame[1].f) * (jfloat(2))) + (jfloat(10.0f))), (jfloat(60.0f)));
	LINE_NUMBER(262);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_MapResizeDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_MapResizeDialog);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_mindustry_editor_MapResizeDialog$ResizeListener_1(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_mindustry_editor_MapResizeDialog$ResizeListener_1 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_mindustry_editor_MapResizeDialog$ResizeListener_1);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_editor_MapResizeDialog_mindustry_editor_MapResizeDialog$ResizeListener(ctx, sp[1].o, sp[2].o);
	((mindustry_editor_MapEditorDialog *) NULL_CHECK(sp[0].o))->F_resizeDialog = (jref) sp[1].o;
	LINE_NUMBER(270);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_MapLoadDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_MapLoadDialog);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_32(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_32 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_32);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_editor_MapLoadDialog_arc_func_Cons(ctx, sp[1].o, sp[2].o);
	((mindustry_editor_MapEditorDialog *) NULL_CHECK(sp[0].o))->F_loadDialog = (jref) sp[1].o;
	LINE_NUMBER(279);
	((func_mindustry_editor_MapEditorDialog_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditorDialog_setFillParent_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(281);
	((func_mindustry_editor_MapEditorDialog_clearChildren) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditorDialog_clearChildren])(ctx, (frame[0].o));
	LINE_NUMBER(282);
	sp[0].o = (jobject)((func_mindustry_editor_MapEditorDialog_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditorDialog_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (jfloat(0)));
	LINE_NUMBER(284);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_58(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_58 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_58);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_editor_MapEditorDialog_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(290);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_59(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_59 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_59);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapEditorDialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(307);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_60(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_60 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_60);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapEditorDialog_hidden_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_hidden_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(313);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_61(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_61 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_61);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapEditorDialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(314);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_resumeEditing(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:resumeEditing", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(317);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_menu;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(318);
	((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_shownWithMap = (jint(1));
	LINE_NUMBER(319);
	sp[0].o = (jobject)((func_mindustry_editor_MapEditorDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditorDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[0].o));
	LINE_NUMBER(320);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_lastSavedRules;
	sp += 1;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	clinit_mindustry_game_Rules(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Rules);
	init_mindustry_game_Rules(ctx, sp[0].o);
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_editor_MapEditorDialog *) NULL_CHECK(sp[-1].o))->F_lastSavedRules;
label_5:;
	{
	sp -= 2;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules = (jref) sp[1].o;
	LINE_NUMBER(321);
	((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_lastSavedRules = (jref) (jobject(nullptr));
	LINE_NUMBER(322);
	((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_saved = (jint(0));
	LINE_NUMBER(323);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_renderer;
	((func_mindustry_editor_EditorRenderer_recache) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_recache])(ctx, sp[0].o);
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_editInGame(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:editInGame", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, sp[0].o);
	LINE_NUMBER(328);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_62(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_62 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_62);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_loadAnd_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_loadAnd_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(368);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_resumeAfterPlaytest_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:resumeAfterPlaytest", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(371);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_file;
	((func_mindustry_editor_MapEditorDialog_beginEditMap_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_beginEditMap_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(372);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_playtest(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:playtest", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(375);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, sp[0].o);
	LINE_NUMBER(376);
	sp[0].o = (jobject)((func_mindustry_editor_MapEditorDialog_save_R_mindustry_maps_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditorDialog_save_R_mindustry_maps_Map])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(378);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(380);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_shift_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_shift_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(381);
	((func_mindustry_editor_MapEditorDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditorDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(383);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[1].o = frame[1].o;
	sp[2].o = frame[1].o;
	LINE_NUMBER(384);
	clinit_mindustry_game_Gamemode(ctx);
	sp[3].o = (jobject)SF_mindustry_game_Gamemode_survival;
	jint temp0 = (jint)((func_mindustry_game_Gamemode_valid_mindustry_maps_Map_R_boolean) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_game_Gamemode_valid_mindustry_maps_Map_R_boolean])(ctx, sp[3].o, (frame[1].o));
	sp += 3;
	if (temp0 == 0) goto label_9;
	}
	clinit_mindustry_game_Gamemode(ctx);
	(sp++)->o = SF_mindustry_game_Gamemode_survival;
	goto label_10;
label_9:;
	{
	LINE_NUMBER(385);
	clinit_mindustry_game_Gamemode(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Gamemode_attack;
	jint temp0 = (jint)((func_mindustry_game_Gamemode_valid_mindustry_maps_Map_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Gamemode_valid_mindustry_maps_Map_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_11;
	}
	clinit_mindustry_game_Gamemode(ctx);
	(sp++)->o = SF_mindustry_game_Gamemode_attack;
	goto label_10;
label_11:;
	LINE_NUMBER(386);
	clinit_mindustry_game_Gamemode(ctx);
	(sp++)->o = SF_mindustry_game_Gamemode_sandbox;
label_10:;
	{
	sp -= 4;
	LINE_NUMBER(383);
	sp[2].o = (jobject)((func_mindustry_maps_Map_applyRules_mindustry_game_Gamemode_R_mindustry_game_Rules) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_maps_Map_applyRules_mindustry_game_Gamemode_R_mindustry_game_Rules])(ctx, sp[2].o, sp[3].o);
	((func_mindustry_core_Control_playMap_mindustry_maps_Map_mindustry_game_Rules_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Control_playMap_mindustry_maps_Map_mindustry_game_Rules_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(389);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_playtestDialog;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_63(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_63 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_63);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_ui_dialogs_MapPlayDialog *) NULL_CHECK(sp[0].o))->F_playListener = (jref) sp[1].o;
	LINE_NUMBER(390);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_playtestDialog;
	((func_mindustry_ui_dialogs_MapPlayDialog_show_mindustry_maps_Map_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_MapPlayDialog_show_mindustry_maps_Map_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(393);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_editor_MapEditorDialog_save_R_mindustry_maps_Map(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:save", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(396);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[1].i = ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor);
	LINE_NUMBER(397);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor = (jint(0));
	LINE_NUMBER(398);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_allowEditRules = (jint(0));
	LINE_NUMBER(399);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	auto edRules = (mindustry_game_Rules *) NULL_CHECK(sp[0].o);
	if (!edRules->F_objectiveFlags) {
		clinit_arc_struct_ObjectSet(ctx);
		edRules->F_objectiveFlags = (jref)gcAlloc(ctx, &class_arc_struct_ObjectSet);
		init_arc_struct_ObjectSet(ctx, (jobject)edRules->F_objectiveFlags);
	}
	sp[0].o = (jobject)edRules->F_objectiveFlags;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(400);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (!((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_objectives) {
		clinit_mindustry_game_MapObjectives(ctx);
		((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_objectives = (jref)gcAlloc(ctx, &class_mindustry_game_MapObjectives);
		init_mindustry_game_MapObjectives(ctx, (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_objectives);
	}
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_objectives;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_33(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_33 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_33);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_game_MapObjectives_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(401);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_game_GameStats(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_GameStats);
	init_mindustry_game_GameStats(ctx, sp[1].o);
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_stats = (jref) sp[1].o;
	LINE_NUMBER(402);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(403);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_tags;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"rules"_j));
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	sp[2].o = (jobject)SM_mindustry_io_JsonIO_write_java_lang_Object_R_java_lang_String(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(404);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"width"_j))));
	LINE_NUMBER(405);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"height"_j))));
	LINE_NUMBER(407);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((func_mindustry_gen_Player_clearUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_clearUnit])(ctx, sp[0].o);
	LINE_NUMBER(410);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Boolf_4);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_find_arc_func_Boolf_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_find_arc_func_Boolf_R_mindustry_gen_Entityc])(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(411);
	if ((frame[3].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(412);
	((func_mindustry_gen_Unit_remove) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_remove])(ctx, (frame[3].o));
	}
label_13:;
	{
	LINE_NUMBER(415);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(417);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(418);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_infoDialog;
	sp[0].o = (jobject)((func_mindustry_editor_MapInfoDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapInfoDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(419);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_64(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_64 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_64);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	goto label_19;
	}
label_16:;
	{
	LINE_NUMBER(421);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_maps;
	sp[0].o = (jobject)((func_mindustry_maps_Maps_all_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_all_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Boolf_5);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[5].o = (checkCast(ctx, &class_mindustry_maps_Map, sp[0].o));
	LINE_NUMBER(422);
	if ((frame[5].o) == nullptr) goto label_21;
	}
	{
	if (((jint)((mindustry_maps_Map *) NULL_CHECK((frame[5].o)))->F_custom) != 0) goto label_21;
	}
	{
	if (((jint)((mindustry_maps_Map *) NULL_CHECK((frame[5].o)))->F_workshop) != 0) goto label_21;
	}
	{
	LINE_NUMBER(423);
	((func_mindustry_editor_MapEditorDialog_handleSaveBuiltin_mindustry_maps_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditorDialog_handleSaveBuiltin_mindustry_maps_Map])(ctx, (frame[0].o), (frame[5].o));
	goto label_19;
	}
label_21:;
	{
	LINE_NUMBER(425);
	frame[6].i = (jint(0));
	LINE_NUMBER(427);
	if ((frame[5].o) == nullptr) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[5].o)))->F_tags;
	jint temp0 = (jint)((func_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"steamid"_j))));
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(428);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_tags;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"steamid"_j));
	sp[2].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[5].o)))->F_tags;
	sp[2].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"steamid"_j))));
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	LINE_NUMBER(429);
	frame[6].i = (jint(1));
	}
label_24:;
	{
	LINE_NUMBER(431);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_maps;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_tags;
	sp[0].o = (jobject)((func_mindustry_maps_Maps_saveMap_arc_struct_ObjectMap_boolean_R_mindustry_maps_Map) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_saveMap_arc_struct_ObjectMap_boolean_R_mindustry_maps_Map])(ctx, sp[0].o, sp[1].o, (jint(0)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(432);
	if ((frame[6].i) == 0) goto label_28;
	}
	{
	LINE_NUMBER(433);
	((mindustry_maps_Map *) NULL_CHECK((frame[4].o)))->F_workshop = (frame[6].i);
	}
label_28:;
	{
	LINE_NUMBER(435);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfoFade_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfoFade_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.saved"_j))));
	}
label_19:;
	{
	LINE_NUMBER(439);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, sp[0].o);
	LINE_NUMBER(440);
	((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_saved = (jint(1));
	LINE_NUMBER(441);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor = (frame[1].i);
	LINE_NUMBER(442);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_handleSaveBuiltin_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:handleSaveBuiltin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(447);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.save.overwrite"_j))));
	LINE_NUMBER(448);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_createDialog_java_lang_String_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:createDialog", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(458);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(460);
	frame[4].f = (jfloat(90.0f));
	LINE_NUMBER(462);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[3].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(360.0f)), (frame[4].f));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(464);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	if ((frame[5].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(465);
	frame[6].o = (checkCast(ctx, &class_java_lang_String, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i)))));
	LINE_NUMBER(466);
	frame[7].o = (checkCast(ctx, &class_java_lang_String, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[5].i) + (jint(1)))))));
	LINE_NUMBER(467);
	frame[8].o = (checkCast(ctx, &class_arc_scene_style_Drawable, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[5].i) + (jint(2)))))));
	LINE_NUMBER(468);
	frame[9].o = (checkCast(ctx, &class_java_lang_Runnable, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[5].i) + (jint(3)))))));
	LINE_NUMBER(470);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[3].o)))->F_cont;
	sp[1].o = frame[6].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_65(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_65 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_65);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[9].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(474);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[10].o = (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o));
	LINE_NUMBER(476);
	((func_arc_scene_ui_TextButton_clearChildren) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_TextButton_clearChildren])(ctx, (frame[10].o));
	LINE_NUMBER(477);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_TextButton_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, (frame[10].o), (frame[8].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(478);
	sp[0].o = frame[10].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_34(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_34 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_34);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(482);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(484);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_TextButton_row_R_arc_scene_ui_layout_Table])(ctx, (frame[10].o));
	LINE_NUMBER(486);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[3].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(464);
	INST_IINC(5, 4);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(489);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[3].o));
	LINE_NUMBER(490);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[3].o));
	LINE_NUMBER(491);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_editor_MapEditorDialog_show_R_arc_scene_ui_Dialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:show", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(495);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_alpha_float_R_arc_scene_actions_AlphaAction(ctx, (jfloat(1)));
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_sequence_arc_scene_Action_R_arc_scene_actions_SequenceAction(ctx, sp[2].o);
	sp[0].o = (jobject)M_arc_scene_ui_Dialog_show_arc_scene_Scene_arc_scene_Action_R_arc_scene_ui_Dialog(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_hide(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:hide", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(500);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_scene_actions_Actions_alpha_float_R_arc_scene_actions_AlphaAction(ctx, (jfloat(0)));
	sp[1].o = (jobject)SM_arc_scene_actions_Actions_sequence_arc_scene_Action_R_arc_scene_actions_SequenceAction(ctx, sp[1].o);
	M_arc_scene_ui_Dialog_hide_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(501);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(505);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_renderer;
	((func_mindustry_editor_EditorRenderer_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_dispose])(ctx, sp[0].o);
	LINE_NUMBER(506);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_beginEditMap_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:beginEditMap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(509);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_66(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_66 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_66);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_loadAnd_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_loadAnd_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(519);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_editor_MapEditorDialog_getView_R_mindustry_editor_MapView(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:getView", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(522);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_view;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_editor_MapEditorDialog_getGenerateDialog_R_mindustry_editor_MapGenerateDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:getGenerateDialog", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(526);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_generateDialog;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_resetSaved(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:resetSaved", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(530);
	((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_saved = (jint(0));
	LINE_NUMBER(531);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapEditorDialog_hasPane_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:hasPane", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(534);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getScrollFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getScrollFocus_R_arc_scene_Element])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_pane;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	if (sp[0].o == (frame[0].o)) goto label_2;
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

void M_mindustry_editor_MapEditorDialog_build(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:build", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(538);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_1;
	}
	(sp++)->f = jfloat(50.0f);
	goto label_2;
label_1:;
	(sp++)->f = jfloat(58.0f);
label_2:;
	{
	sp -= 1;
	frame[1].f = sp[0].f;
	LINE_NUMBER(540);
	((func_mindustry_editor_MapEditorDialog_clearChildren) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditorDialog_clearChildren])(ctx, (frame[0].o));
	LINE_NUMBER(541);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_35(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_35 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_35);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_editor_MapEditorDialog_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(730);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(731);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_doInput(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:doInput", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(735);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_ctrl_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_ctrl_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(737);
	frame[1].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_view;
	sp[0].o = (jobject)((func_mindustry_editor_MapView_getTool_R_mindustry_editor_EditorTool) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapView_getTool_R_mindustry_editor_EditorTool])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_editor_EditorTool *) NULL_CHECK(sp[0].o))->F_altModes;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(738);
	jint temp0 = (frame[1].i) + (jint(1));
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_numbers;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_numbers;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((frame[1].i) + (jint(1))))));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(739);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_view;
	sp[0].o = (jobject)((func_mindustry_editor_MapView_getTool_R_mindustry_editor_EditorTool) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapView_getTool_R_mindustry_editor_EditorTool])(ctx, sp[0].o);
	((mindustry_editor_EditorTool *) NULL_CHECK(sp[0].o))->F_mode = (frame[1].i);
	}
label_6:;
	{
	LINE_NUMBER(737);
	INST_IINC(1, 1);
	goto label_3;
	}
label_4:;
	goto label_8;
label_1:;
	{
	LINE_NUMBER(743);
	clinit_mindustry_editor_EditorTool(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_EditorTool_all;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_9:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_8;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(744);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((mindustry_editor_EditorTool *) NULL_CHECK((frame[4].o)))->F_key;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(745);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_view;
	((func_mindustry_editor_MapView_setTool_mindustry_editor_EditorTool) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapView_setTool_mindustry_editor_EditorTool])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(746);
	goto label_8;
	}
label_11:;
	{
	LINE_NUMBER(743);
	INST_IINC(3, 1);
	goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(751);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_escape;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(752);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_BaseDialog_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_isShown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_14;
	}
	{
	LINE_NUMBER(753);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	}
label_14:;
	{
	LINE_NUMBER(757);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_r;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(758);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (((jint)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_rotation) + (jint(1))), (jint(4)));
	((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	}
label_17:;
	{
	LINE_NUMBER(761);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_e;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(762);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (((jint)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_rotation) - (jint(1))), (jint(4)));
	((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	}
label_19:;
	{
	LINE_NUMBER(766);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_ctrl_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_ctrl_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_21;
	}
	{
	LINE_NUMBER(767);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_z;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_23;
	}
	{
	LINE_NUMBER(768);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_shift_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_shift_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_25;
	}
	{
	LINE_NUMBER(769);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	((func_mindustry_editor_MapEditor_redo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_redo])(ctx, sp[0].o);
	goto label_23;
	}
label_25:;
	{
	LINE_NUMBER(771);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	((func_mindustry_editor_MapEditor_undo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_undo])(ctx, sp[0].o);
	}
label_23:;
	{
	LINE_NUMBER(775);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_y;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_27;
	}
	{
	LINE_NUMBER(776);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	((func_mindustry_editor_MapEditor_redo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_redo])(ctx, sp[0].o);
	}
label_27:;
	{
	LINE_NUMBER(779);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_s;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(780);
	sp[0].o = (jobject)((func_mindustry_editor_MapEditorDialog_save_R_mindustry_maps_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditorDialog_save_R_mindustry_maps_Map])(ctx, (frame[0].o));
	}
label_29:;
	{
	LINE_NUMBER(783);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_g;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_21;
	}
	{
	LINE_NUMBER(784);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_view;
	sp[1].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_view;
	jint temp0 = (jint)((func_mindustry_editor_MapView_isGrid_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapView_isGrid_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 != 0) goto label_32;
	}
	INST_ICONST(1);
	goto label_33;
label_32:;
	INST_ICONST(0);
label_33:;
	POP_N(2); // Pop method args
	((func_mindustry_editor_MapView_setGrid_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapView_setGrid_boolean])(ctx, sp[0].o, sp[1].i);
label_21:;
	LINE_NUMBER(787);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_tryExit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:tryExit", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(790);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@confirm"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@editor.unsaved"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_67(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_67 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_67);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(795);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_addBlockSelection_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:addBlockSelection", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(798);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	((mindustry_editor_MapEditorDialog *) NULL_CHECK(sp[0].o))->F_blockSelection = (jref) sp[1].o;
	LINE_NUMBER(799);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_ScrollPane(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_ScrollPane);
	sp[2].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_blockSelection;
	clinit_mindustry_ui_Styles(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_Styles_smallPane;
	init_arc_scene_ui_ScrollPane_arc_scene_Element_arc_scene_ui_ScrollPane$ScrollPaneStyle(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_editor_MapEditorDialog *) NULL_CHECK(sp[0].o))->F_pane = (jref) sp[1].o;
	LINE_NUMBER(800);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_pane;
	((func_arc_scene_ui_ScrollPane_setFadeScrollBars_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_setFadeScrollBars_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(801);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_pane;
	((func_arc_scene_ui_ScrollPane_setOverscroll_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_setOverscroll_boolean_boolean])(ctx, sp[0].o, (jint(1)), (jint(0)));
	LINE_NUMBER(802);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_pane;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_68(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_68 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_68);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_ScrollPane_exited_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_exited_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(808);
	sp[0].o = (jobject)createArray(ctx, &class_arc_scene_ui_layout_Table, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[2].o = sp[0].o;
	LINE_NUMBER(809);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[3].o = sp[0].o;
	LINE_NUMBER(811);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_36(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_36 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_36);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(815);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-2.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	LINE_NUMBER(816);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(817);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_underline;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_37(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_37 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_37);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(818);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(819);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_38(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_38 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_38);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Boolp_3(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Boolp_3 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Boolp_3);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_39(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_39 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_39);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(821);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_40(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_40 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_40);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(831);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(832);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_pane;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expandY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expandY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(834);
	((func_mindustry_editor_MapEditorDialog_rebuildBlockSelection_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditorDialog_rebuildBlockSelection_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(835);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_rebuildBlockSelection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:rebuildBlockSelection", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(838);
	((func_mindustry_editor_MapEditorDialog_rebuildBlockSelection_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditorDialog_rebuildBlockSelection_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(839);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_rebuildBlockSelection_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:rebuildBlockSelection", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(842);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_blockSelection;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(844);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_blocksOut;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(845);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_blocksOut;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(846);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_blocksOut;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_util_Comparator_1(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_util_Comparator_1 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_util_Comparator_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(856);
	frame[2].i = (jint(0));
	LINE_NUMBER(857);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" +"_j))), (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(859);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_blocksOut;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(860);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[5].o)))->F_uiIcon;
	frame[6].o = sp[0].o;
	LINE_NUMBER(862);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean])(ctx, sp[0].o, (frame[6].o));
	if (temp0 == 0) goto label_7;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[5].o)))->F_inEditor) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[5].o)))->F_buildVisibility;
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BuildVisibility_debugOnly;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(864);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[5].o)))->F_localizedName;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 != 0) goto label_12;
	}
	LINE_NUMBER(865);
	goto label_7;
label_12:;
	{
	LINE_NUMBER(867);
	clinit_arc_scene_ui_ImageButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton);
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNoneTogglei;
	init_arc_scene_ui_ImageButton_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(868);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[7].o));
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, (frame[6].o));
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	LINE_NUMBER(869);
	sp[0].o = frame[7].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_69(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_69 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_69);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(870);
	((func_arc_scene_ui_ImageButton_resizeImage_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_resizeImage_float])(ctx, (frame[7].o), (jfloat(32.0f)));
	LINE_NUMBER(871);
	sp[0].o = frame[7].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_70(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_70 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_70);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(872);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_blockSelection;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[7].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(50.0f)));
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[5].o)))->F_localizedName;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(874);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_20;
	}
	INST_ICONST(4);
	goto label_21;
label_20:;
	INST_BIPUSH(6);
label_21:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(876);
	INST_IINC(2, 1);
	if (((frame[2].i) % (frame[8].i)) != 0) goto label_23;
	}
	{
	LINE_NUMBER(877);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_blockSelection;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	}
label_23:;
	LINE_NUMBER(879);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(881);
	if ((frame[2].i) != 0) goto label_25;
	}
	{
	LINE_NUMBER(882);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_blockSelection;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@none.found"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(54.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	}
label_25:;
	LINE_NUMBER(884);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$rebuildBlockSelection$2_arc_scene_ui_ImageButton_mindustry_world_Block(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$rebuildBlockSelection$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(871);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_drawBlock;
	sp += 1;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_ImageButton_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_setChecked_boolean])(ctx, sp[0].o, sp[1].i);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$rebuildBlockSelection$1_mindustry_world_Block(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$rebuildBlockSelection$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(869);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawBlock = (jref) (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_editor_MapEditorDialog_lambda$rebuildBlockSelection$0_mindustry_world_Block_mindustry_world_Block_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$rebuildBlockSelection$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(847);
	jint temp0 = (jint)SM_java_lang_Boolean_compare_boolean_boolean_R_int(ctx, (isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_storage_CoreBlock)), (isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_storage_CoreBlock)));
	frame[2].i = (-temp0);
	LINE_NUMBER(848);
	if ((frame[2].i) == 0) goto label_2;
	}
	INST_ILOAD(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(849);
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, (frame[1].o));
	jint temp2 = (jint)SM_java_lang_Boolean_compare_boolean_boolean_R_int(ctx, temp0, temp1);
	frame[3].i = temp2;
	LINE_NUMBER(850);
	if ((frame[3].i) == 0) goto label_4;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(851);
	jint temp0 = (jint)SM_java_lang_Boolean_compare_boolean_boolean_R_int(ctx, (isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_OverlayFloor)), (isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_environment_OverlayFloor)));
	frame[4].i = temp0;
	LINE_NUMBER(852);
	if ((frame[4].i) == 0) goto label_6;
	}
	INST_ILOAD(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(853);
	jint temp0 = (jint)SM_java_lang_Integer_compare_int_int_R_int(ctx, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[0].o)))->F_id), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$addBlockSelection$7_Array1_mindustry_world_Block_Array1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Collapser(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$addBlockSelection$7", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(823);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_drawBlock;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(824);
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))))->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	LINE_NUMBER(825);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawBlock;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(826);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawBlock;
	((func_mindustry_world_Block_buildEditorConfig_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_buildEditorConfig_arc_scene_ui_layout_Table])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	LINE_NUMBER(827);
	((func_arc_scene_ui_layout_Collapser_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_invalidateHierarchy])(ctx, (frame[2].o));
	}
label_4:;
	{
	LINE_NUMBER(829);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_drawBlock;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_1:;
	LINE_NUMBER(831);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$addBlockSelection$6_arc_scene_ui_layout_Collapser(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$addBlockSelection$6", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(821);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Collapser_setEnforceMinSize_boolean_R_arc_scene_ui_layout_Collapser) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_setEnforceMinSize_boolean_R_arc_scene_ui_layout_Collapser])(ctx, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapEditorDialog_lambda$addBlockSelection$5_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$addBlockSelection$5", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	{
	LINE_NUMBER(821);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawBlock;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawBlock;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_editorConfigurable) == 0) goto label_1;
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

void SM_mindustry_editor_MapEditorDialog_lambda$addBlockSelection$4_Array1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$addBlockSelection$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(820);
	ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))) = (frame[1].o);
	LINE_NUMBER(821);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$addBlockSelection$2_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$addBlockSelection$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(817);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(200.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapEditorDialog_lambda$addBlockSelection$3_R_java_lang_CharSequence(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$addBlockSelection$3", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	{
	LINE_NUMBER(817);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawBlock;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_localizedName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$addBlockSelection$1_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$addBlockSelection$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(812);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_zoom;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(813);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8""_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_41(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_41 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_41);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"editor/search"_j));
	LINE_NUMBER(814);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (40));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	((func_arc_scene_ui_TextField_setMessageText_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_TextField_setMessageText_java_lang_String])(ctx, (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o)), (((jobject) createStringLiteral(ctx, u8"@players.search"_j))));
	LINE_NUMBER(815);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$addBlockSelection$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$addBlockSelection$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(803);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_pane;
	jint temp0 = (jint)((func_arc_scene_ui_ScrollPane_hasScroll_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_hasScroll_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(804);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_view;
	jint temp0 = (jint)((func_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(806);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$tryExit$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$tryExit$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(792);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logic;
	((func_mindustry_core_Logic_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Logic_reset])(ctx, sp[0].o);
	LINE_NUMBER(793);
	((func_mindustry_editor_MapEditorDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditorDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(794);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$build$0_float_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(542);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(544);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_42(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_42 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_42);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(0);
	LINE_NUMBER(724);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(726);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_43(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_43 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_43);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(728);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_44(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_44 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_44);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(730);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$build$27_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$27", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(726);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_view;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$build$1_float_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$1", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(545);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(547);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(549);
	clinit_arc_scene_ui_ButtonGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ButtonGroup);
	init_arc_scene_ui_ButtonGroup(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(550);
	sp[0].o = (jobject)createArray(ctx, &class_arc_scene_ui_layout_Table, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[5].o = sp[0].o;
	LINE_NUMBER(552);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_45(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_45 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_45);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	frame[6].o = sp[0].o;
	LINE_NUMBER(628);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[1].f), (frame[1].f));
	LINE_NUMBER(630);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_menu;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flati;
	sp[3].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_71(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_71 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_71);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(632);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_grid;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_squareTogglei;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_72(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_72 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_72);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[7].o = (checkCast(ctx, &class_arc_scene_ui_ImageButton, sp[0].o));
	LINE_NUMBER(634);
	sp[0].o = frame[6].o;
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_zoom;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(636);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(638);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_undo;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flati;
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_editor;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_73(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_73 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_73);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[8].o = (checkCast(ctx, &class_arc_scene_ui_ImageButton, sp[0].o));
	LINE_NUMBER(639);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_redo;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flati;
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_editor;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_74(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_74 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_74);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[9].o = (checkCast(ctx, &class_arc_scene_ui_ImageButton, sp[0].o));
	LINE_NUMBER(641);
	sp[0].o = frame[6].o;
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_pick;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(643);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(645);
	sp[0].o = frame[8].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Boolp_4(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Boolp_4 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Boolp_4);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_ImageButton_setDisabled_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_setDisabled_arc_func_Boolp])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(646);
	sp[0].o = frame[9].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Boolp_5(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Boolp_5 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Boolp_5);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_ImageButton_setDisabled_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_setDisabled_arc_func_Boolp])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(648);
	sp[0].o = frame[8].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_75(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_75 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_75);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(649);
	sp[0].o = frame[9].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_76(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_76 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_76);
		proxy->F_field0 = (jref) (frame[9].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(650);
	sp[0].o = frame[7].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_77(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_77 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_77);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(652);
	sp[0].o = frame[6].o;
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_line;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(653);
	sp[0].o = frame[6].o;
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_pencil;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(654);
	sp[0].o = frame[6].o;
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_eraser;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(656);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(658);
	sp[0].o = frame[6].o;
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_fill;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(659);
	sp[0].o = frame[6].o;
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_spray;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(661);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_right;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flati;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_78(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_78 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_78);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[10].o = (checkCast(ctx, &class_arc_scene_ui_ImageButton, sp[0].o));
	LINE_NUMBER(662);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image])(ctx, (frame[10].o));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_79(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_79 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_79);
		proxy->F_field0 = (jref) (frame[10].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Image_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(667);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(669);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((frame[1].f) * (jfloat(3.0f))) + (jfloat(3.0f))));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(671);
	clinit_arc_scene_ui_ButtonGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ButtonGroup);
	init_arc_scene_ui_ButtonGroup(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(673);
	frame[12].i = (jint(0));
	LINE_NUMBER(675);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_baseTeams;
	frame[13].o = sp[0].o;
	frame[14].i = (((jarray) nullCheck(ctx, (frame[13].o)))->length);
	frame[15].i = (jint(0));
	}
label_34:;
	{
	if ((frame[15].i) >= (frame[14].i)) goto label_35;
	}
	{
	frame[16].o = ((jobject)ARRAY_ACCESS(jobject, (frame[13].o), (frame[15].i)));
	LINE_NUMBER(676);
	clinit_arc_scene_ui_ImageButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton);
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNoneTogglei;
	init_arc_scene_ui_ImageButton_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[17].o = sp[0].o;
	LINE_NUMBER(677);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[17].o), (jfloat(4.0f)));
	LINE_NUMBER(678);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getImageCell_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getImageCell_R_arc_scene_ui_layout_Cell])(ctx, (frame[17].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(679);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[17].o));
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[16].o)))->F_color;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUpColor = (jref) sp[1].o;
	LINE_NUMBER(680);
	sp[0].o = frame[17].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_80(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_80 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_80);
		proxy->F_field0 = (jref) (frame[16].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(681);
	sp[0].o = frame[17].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_81(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_81 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_81);
		proxy->F_field1 = (jref) (frame[16].o);
		proxy->F_field0 = (jref) (frame[17].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(682);
	((func_arc_scene_ui_ButtonGroup_add_arc_scene_ui_Button) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_scene_ui_ButtonGroup_add_arc_scene_ui_Button])(ctx, (frame[11].o), (frame[17].o));
	LINE_NUMBER(683);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o), (frame[17].o));
	LINE_NUMBER(685);
	jint temp0 = frame[12].i;
	INST_IINC(12, 1);
	if ((temp0 % (jint(3))) != (jint(2))) goto label_45;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	}
label_45:;
	{
	LINE_NUMBER(675);
	INST_IINC(15, 1);
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(688);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-6.0f)));
	LINE_NUMBER(690);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(692);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_underline;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_46(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_46 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_46);
		proxy->F_field0 = (frame[1].f);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(5.0f);
	LINE_NUMBER(707);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(709);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(711);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.showblocks"_j));
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_editor;
	jint temp1 = (jint)((mindustry_editor_MapEditor *) NULL_CHECK(sp[2].o))->F_showBuildings;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Boolc_3(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Boolc_3 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Boolc_3);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	jfloat temp2 = jfloat(2);
	LINE_NUMBER(714);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_47(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_47 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_47);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(715);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.showterrain"_j));
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_editor;
	jint temp3 = (jint)((mindustry_editor_MapEditor *) NULL_CHECK(sp[2].o))->F_showTerrain;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Boolc_4(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Boolc_4 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Boolc_4);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, temp3, sp[2].o);
	jfloat temp4 = jfloat(2);
	LINE_NUMBER(718);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp4);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_48(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_48 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_48);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(719);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.showfloor"_j));
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_editor;
	jint temp5 = (jint)((mindustry_editor_MapEditor *) NULL_CHECK(sp[2].o))->F_showFloor;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Boolc_5(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Boolc_5 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Boolc_5);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, temp5, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_49(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_49 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_49);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(721);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_56;
	}
	{
	LINE_NUMBER(722);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.center"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_move;
	clinit_mindustry_ui_Styles(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_Styles_flatt;
	sp[4].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_view;
	sp[5].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_82(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_82 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_82);
		proxy->F_field0 = (jref) sp[4].o;
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(9.0f)));
	}
label_56:;
	LINE_NUMBER(724);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$build$26_boolean(jcontext ctx, jbool param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$26", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(719);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_showFloor = (frame[0].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$build$25_boolean(jcontext ctx, jbool param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$25", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(716);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_showTerrain = (frame[0].i);
	LINE_NUMBER(717);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_renderer;
	((func_mindustry_editor_EditorRenderer_recacheTerrain) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_recacheTerrain])(ctx, sp[0].o);
	LINE_NUMBER(718);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$build$24_boolean(jcontext ctx, jbool param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$24", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(712);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_showBuildings = (frame[0].i);
	LINE_NUMBER(713);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_renderer;
	((func_mindustry_editor_EditorRenderer_recacheShadows) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_recacheShadows])(ctx, sp[0].o);
	LINE_NUMBER(714);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$build$22_float_arc_scene_ui_layout_Table(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$22", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(693);
	clinit_arc_scene_ui_Slider(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Slider);
	jfloat temp0 = jfloat(0);
	clinit_mindustry_editor_MapEditor(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_MapEditor_brushSizes;
	init_arc_scene_ui_Slider_float_float_float_boolean(ctx, sp[0].o, temp0, (jfloat(((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1))))), (jfloat(1)), (jint(0)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(694);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Floatc_1(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Floatc_1 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Floatc_1);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_Slider_moved_arc_func_Floatc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Slider_moved_arc_func_Floatc])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(695);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[3].i;
	clinit_mindustry_editor_MapEditor(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_MapEditor_brushSizes;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(696);
	clinit_mindustry_editor_MapEditor(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_MapEditor_brushSizes;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	if ((floatCompare(temp0, ((jfloat)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_brushSize), -1)) != 0) goto label_6;
	}
	{
	LINE_NUMBER(697);
	jint temp0 = (jint)((func_arc_scene_ui_Slider_setValue_float_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Slider_setValue_float_R_boolean])(ctx, (frame[2].o), (jfloat((frame[3].i))));
	}
label_6:;
	{
	LINE_NUMBER(695);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(701);
	clinit_arc_scene_ui_Label(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Label);
	init_arc_scene_ui_Label_java_lang_CharSequence(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.brush"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(702);
	((func_arc_scene_ui_Label_setAlignment_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_Label_setAlignment_int])(ctx, (frame[3].o), (jint(1)));
	LINE_NUMBER(703);
	sp[0].o = frame[3].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(705);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (frame[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((frame[0].f) * (jfloat(3.0f))) - (jfloat(20.0f))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(706);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(707);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$build$23_float(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$23", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(694);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	clinit_mindustry_editor_MapEditor(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_MapEditor_brushSizes;
	((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_brushSize = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint((frame[0].f)))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$build$21_arc_scene_ui_ImageButton_mindustry_game_Team(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$21", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(681);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_drawTeam;
	sp += 1;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_ImageButton_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_setChecked_boolean])(ctx, sp[0].o, sp[1].i);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$build$20_mindustry_game_Team(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$20", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(680);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawTeam = (jref) (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$build$19_arc_scene_ui_ImageButton(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$19", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(663);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image])(ctx, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	((func_arc_scene_ui_Image_setRotation_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setRotation_float])(ctx, sp[0].o, (jfloat((((jint)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_rotation) * (90)))));
	LINE_NUMBER(664);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image])(ctx, (frame[0].o));
	((func_arc_scene_ui_Image_setOrigin_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setOrigin_int])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(665);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$build$18(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$18", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	{
	LINE_NUMBER(661);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_rotation = ((((jint)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_rotation) + (jint(1))) % (jint(4)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$build$17_arc_scene_ui_ImageButton(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$17", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(650);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_view;
	jint temp0 = (jint)((func_mindustry_editor_MapView_isGrid_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapView_isGrid_R_boolean])(ctx, sp[1].o);
	((func_arc_scene_ui_ImageButton_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_setChecked_boolean])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$build$16_arc_scene_ui_ImageButton(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$16", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(649);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_scene_ui_ImageButton_isDisabled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_isDisabled_R_boolean])(ctx, (frame[0].o));
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_gray;
	goto label_2;
label_1:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_Image_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$build$15_arc_scene_ui_ImageButton(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$15", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(648);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_scene_ui_ImageButton_isDisabled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_isDisabled_R_boolean])(ctx, (frame[0].o));
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_gray;
	goto label_2;
label_1:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_Image_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapEditorDialog_lambda$build$14_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$14", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	{
	LINE_NUMBER(646);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = (jint)((func_mindustry_editor_MapEditor_canRedo_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_canRedo_R_boolean])(ctx, sp[0].o);
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

jbool SM_mindustry_editor_MapEditorDialog_lambda$build$13_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$13", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	{
	LINE_NUMBER(645);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = (jint)((func_mindustry_editor_MapEditor_canUndo_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_canUndo_R_boolean])(ctx, sp[0].o);
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

void M_mindustry_editor_MapEditorDialog_lambda$build$12(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$12", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(632);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_view;
	sp[1].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_view;
	jint temp0 = (jint)((func_mindustry_editor_MapView_isGrid_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapView_isGrid_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	POP_N(2); // Pop method args
	((func_mindustry_editor_MapView_setGrid_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapView_setGrid_boolean])(ctx, sp[0].o, sp[1].i);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$build$2_Array1_arc_scene_ui_layout_Table_arc_scene_ui_ButtonGroup_arc_scene_ui_layout_Table_mindustry_editor_EditorTool(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$2", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(554);
	clinit_arc_scene_ui_ImageButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[2].o = (jobject)((func_mindustry_editor_EditorTool_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_editor_EditorTool_name_R_java_lang_String])(ctx, (frame[4].o));
	sp[1].o = (jobject)((func_mindustry_core_UI_getIcon_java_lang_String_R_arc_scene_style_TextureRegionDrawable) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_UI_getIcon_java_lang_String_R_arc_scene_style_TextureRegionDrawable])(ctx, sp[1].o, sp[2].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_squareTogglei;
	init_arc_scene_ui_ImageButton_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(555);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_83(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_83 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_83);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(561);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_84(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_84 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_84);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(562);
	((func_arc_scene_ui_ButtonGroup_add_arc_scene_ui_Button) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_ButtonGroup_add_arc_scene_ui_Button])(ctx, (frame[2].o), (frame[5].o));
	LINE_NUMBER(564);
	sp[0].o = (jobject)((mindustry_editor_EditorTool *) NULL_CHECK((frame[4].o)))->F_altModes;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(565);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_50(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_50 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_50);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_51(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_51 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_51);
		proxy->F_field3 = (jref) (frame[5].o);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_5:;
	{
	LINE_NUMBER(619);
	clinit_arc_scene_ui_Label(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Label);
	init_arc_scene_ui_Label_java_lang_CharSequence(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(620);
	sp[0].o = frame[6].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_remove;
	((func_arc_scene_ui_Label_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(621);
	sp[0].o = frame[6].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_85(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_85 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_85);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Label_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(622);
	((func_arc_scene_ui_Label_setAlignment_int_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_Label_setAlignment_int_int])(ctx, (frame[6].o), (20), (20));
	LINE_NUMBER(623);
	sp[0].o = frame[6].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(625);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[5].o);
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (frame[6].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(626);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$build$11_arc_scene_ui_Label_mindustry_editor_EditorTool(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$11", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(621);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK((frame[1].o)))->F_mode) != (jint(-1))) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"M\u0001 "_j.string, 1, boxInteger(ctx, (((jint)((mindustry_editor_EditorTool *) NULL_CHECK((frame[1].o)))->F_mode) + (jint(1)))));
	sp += 1;
	}
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_Label_setText_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setText_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$build$6_Array1_arc_scene_ui_layout_Table_mindustry_editor_EditorTool_arc_scene_ui_ImageButton_arc_scene_event_ClickListener(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$6", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(572);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_scene_event_ClickListener_getTapCount_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_event_ClickListener_getTapCount_R_int])(ctx, (frame[4].o));
	if (temp0 >= (jint(2))) goto label_1;
	}
	LINE_NUMBER(573);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(576);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(577);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))))->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	}
label_3:;
	{
	LINE_NUMBER(580);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black9;
	init_arc_scene_ui_layout_Table_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(581);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(300.0f)), (jfloat(70.0f)));
	LINE_NUMBER(583);
	frame[6].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((mindustry_editor_EditorTool *) NULL_CHECK((frame[2].o)))->F_altModes;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_8;
	}
	{
	LINE_NUMBER(584);
	frame[7].i = (frame[6].i);
	LINE_NUMBER(585);
	sp[0].o = (jobject)((mindustry_editor_EditorTool *) NULL_CHECK((frame[2].o)))->F_altModes;
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)));
	LINE_NUMBER(587);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_52(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_52 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_52);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_86(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_86 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_86);
		proxy->F_field2 = (jref) (frame[5].o);
		proxy->F_field1 = (frame[7].i);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_53(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_53 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_53);
		proxy->F_field1 = (frame[7].i);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(597);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(598);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o));
	LINE_NUMBER(583);
	INST_IINC(6, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(601);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_87(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_87 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_87);
		proxy->F_field3 = (jref) (frame[1].o);
		proxy->F_field2 = (jref) (frame[5].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(610);
	((func_arc_scene_ui_layout_Table_pack) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_pack])(ctx, (frame[5].o));
	LINE_NUMBER(611);
	sp[0].o = frame[5].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jfloat temp0 = (jfloat)((func_arc_Graphics_getDeltaTime_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getDeltaTime_R_float])(ctx, sp[1].o);
	((func_arc_scene_ui_layout_Table_act_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_act_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(613);
	((func_mindustry_editor_MapEditorDialog_addChild_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditorDialog_addChild_arc_scene_Element])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(614);
	ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))) = (frame[5].o);
	LINE_NUMBER(615);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$build$10_arc_scene_ui_ImageButton_arc_scene_ui_layout_Table_Array1_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$10", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(602);
	sp[0].o = frame[1].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(603);
	((func_arc_scene_ui_layout_Table_setPosition_float_float_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_setPosition_float_float_int])(ctx, (frame[2].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_y), (10));
	LINE_NUMBER(604);
	jint temp0 = (jint)((func_mindustry_editor_MapEditorDialog_isShown_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditorDialog_isShown_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(605);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, (frame[2].o));
	LINE_NUMBER(606);
	ARRAY_ACCESS(jobject, (frame[3].o), (jint(0))) = (jobject(nullptr));
	}
label_3:;
	LINE_NUMBER(608);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$build$9_mindustry_editor_EditorTool_int_arc_scene_ui_Button(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$9", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(597);
	sp[0].o = frame[2].o;
	sp += 1;
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_mode) != (frame[1].i)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_Button_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_setChecked_boolean])(ctx, sp[0].o, sp[1].i);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$build$8_mindustry_editor_EditorTool_int_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$8", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(595);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_mode) != (frame[1].i)) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	INST_ILOAD(1);
label_2:;
	{
	sp -= 2;
	((mindustry_editor_EditorTool *) NULL_CHECK(sp[0].o))->F_mode = sp[1].i;
	LINE_NUMBER(596);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, (frame[2].o));
	LINE_NUMBER(597);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$build$7_java_lang_String_arc_scene_ui_Button(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$7", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(588);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Button_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(589);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_marginLeft_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Button_marginLeft_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(6.0f)));
	LINE_NUMBER(590);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_flatTogglet;
	((func_arc_scene_ui_Button_setStyle_arc_scene_ui_Button$ButtonStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_setStyle_arc_scene_ui_Button$ButtonStyle])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(591);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"toolmode.\u0001"_j.string, 1, (frame[0].o));
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(592);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Button_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(593);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"toolmode.\u0001.description"_j.string, 1, (frame[0].o));
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(594);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$build$5_arc_scene_event_ClickListener(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(566);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_1;
	}
	{
	LINE_NUMBER(568);
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseRight;
	((func_arc_scene_event_ClickListener_setButton_arc_input_KeyCode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_ClickListener_setButton_arc_input_KeyCode])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(570);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$build$4_arc_scene_ui_ImageButton_mindustry_editor_EditorTool(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$4", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(561);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_view;
	sp[1].o = (jobject)((func_mindustry_editor_MapView_getTool_R_mindustry_editor_EditorTool) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapView_getTool_R_mindustry_editor_EditorTool])(ctx, sp[1].o);
	sp += 1;
	if (sp[0].o != (frame[2].o)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_ImageButton_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_setChecked_boolean])(ctx, sp[0].o, sp[1].i);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$build$3_mindustry_editor_EditorTool_Array1_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$build$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(556);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_view;
	((func_mindustry_editor_MapView_setTool_mindustry_editor_EditorTool) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapView_setTool_mindustry_editor_EditorTool])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(557);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(558);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))))->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	}
label_2:;
	LINE_NUMBER(560);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$beginEditMap$0_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$beginEditMap$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(511);
	((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_shownWithMap = (jint(1));
	LINE_NUMBER(512);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)SM_mindustry_io_MapIO_createMap_arc_files_Fi_boolean_R_mindustry_maps_Map(ctx, (frame[1].o), (jint(1)));
	((func_mindustry_editor_MapEditor_beginEdit_mindustry_maps_Map) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_beginEdit_mindustry_maps_Map])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(513);
	sp[0].o = (jobject)((func_mindustry_editor_MapEditorDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditorDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(517);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(514);
	frame[2].o = sp[0].o;
	LINE_NUMBER(515);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[2].o));
	LINE_NUMBER(516);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.errorload"_j))), (frame[2].o));
	}
label_6:;
	LINE_NUMBER(518);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$createDialog$1_java_lang_String_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$createDialog$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(479);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(480);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(481);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (frame[1].o));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(482);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$createDialog$0_java_lang_Runnable_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$createDialog$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(471);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(472);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(473);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, sp[0].o);
	LINE_NUMBER(474);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapEditorDialog_lambda$save$2_java_lang_String_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$save$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)((func_mindustry_maps_Map_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_Map_name_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$save$1(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$save$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	{
	LINE_NUMBER(419);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.save.noname"_j))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapEditorDialog_lambda$save$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$save$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(410);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_spawnedByCore);
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$editInGame$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$editInGame$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(329);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	((mindustry_editor_MapEditorDialog *) NULL_CHECK(sp[0].o))->F_lastSavedRules = (jref) sp[1].o;
	LINE_NUMBER(330);
	((func_mindustry_editor_MapEditorDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditorDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(332);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_game_Teams(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Teams);
	init_mindustry_game_Teams(ctx, sp[1].o);
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams = (jref) sp[1].o;
	LINE_NUMBER(333);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((func_mindustry_gen_Player_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_reset])(ctx, sp[0].o);
	LINE_NUMBER(334);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_game_Gamemode(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Gamemode_editor;
	sp[2].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_lastSavedRules;
	sp[2].o = (jobject)((func_mindustry_game_Rules_copy_R_mindustry_game_Rules) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_game_Rules_copy_R_mindustry_game_Rules])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_mindustry_game_Gamemode_apply_mindustry_game_Rules_R_mindustry_game_Rules) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Gamemode_apply_mindustry_game_Rules_R_mindustry_game_Rules])(ctx, sp[1].o, sp[2].o);
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules = (jref) sp[1].o;
	LINE_NUMBER(335);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea = (jint(0));
	LINE_NUMBER(336);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector = (jref) (jobject(nullptr));
	LINE_NUMBER(337);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog = (jint(0));
	LINE_NUMBER(338);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_maps_Map(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_Map);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (6));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"name"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Editor Playtesting"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"width"_j)));
	jint temp0 = jint(3);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_editor;
	LINE_NUMBER(340);
	jint temp1 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, sp[3].o);
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[2].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"height"_j)));
	jint temp2 = jint(5);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_editor;
	LINE_NUMBER(341);
	jint temp3 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, sp[3].o);
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp3);
	ARRAY_ACCESS(jobject, sp[2].o, temp2) = sp[3].o;
	LINE_NUMBER(338);
	sp[2].o = (jobject)SM_arc_struct_StringMap_of_Array1_java_lang_Object_R_arc_struct_StringMap(ctx, sp[2].o);
	init_mindustry_maps_Map_arc_struct_StringMap(ctx, sp[1].o, sp[2].o);
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_map = (jref) sp[1].o;
	LINE_NUMBER(343);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_playing;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(344);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	((func_mindustry_core_World_endMapLoad) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_endMapLoad])(ctx, sp[0].o);
	LINE_NUMBER(345);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((func_mindustry_gen_Player_clearUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_clearUnit])(ctx, sp[0].o);
	LINE_NUMBER(347);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(348);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_spawnedByCore) == 0) goto label_19;
	}
	{
	LINE_NUMBER(349);
	((func_mindustry_gen_Unit_remove) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_remove])(ctx, (frame[2].o));
	}
label_19:;
	LINE_NUMBER(351);
	goto label_16;
label_17:;
	{
	LINE_NUMBER(353);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_weather;
	((func_mindustry_entities_EntityGroup_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_clear])(ctx, sp[0].o);
	LINE_NUMBER(354);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logic;
	((func_mindustry_core_Logic_play) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Logic_play])(ctx, sp[0].o);
	LINE_NUMBER(356);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_view;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp1 = (jfloat(temp0)) / (jfloat(2));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_editor_MapView_project_float_float_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapView_project_float_float_R_arc_math_geom_Point2])(ctx, sp[0].o, temp1, ((jfloat(temp2)) / (jfloat(2))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(358);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(360);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((func_mindustry_gen_Player_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_set_float_float])(ctx, sp[0].o, (jfloat((((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_x) * (8)))), (jfloat((((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_y) * (8)))));
	LINE_NUMBER(361);
	if ((frame[2].o) == nullptr) goto label_26;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock, sp[0].o))))->F_unitType;
	sp += 1;
	goto label_27;
	}
label_26:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_game_Rules_hasEnv_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_hasEnv_int_R_boolean])(ctx, sp[0].o, (16));
	if (temp0 == 0) goto label_28;
	}
	clinit_mindustry_content_UnitTypes(ctx);
	(sp++)->o = SF_mindustry_content_UnitTypes_evoke;
	goto label_27;
label_28:;
	clinit_mindustry_content_UnitTypes(ctx);
	(sp++)->o = SF_mindustry_content_UnitTypes_alpha;
label_27:;
	{
	sp -= 1;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_drawTeam;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp0 = (jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[2].o))->F_x;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_R_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[2].o))->F_y));
	frame[3].o = sp[0].o;
	LINE_NUMBER(362);
	((mindustry_gen_Unit *) NULL_CHECK((frame[3].o)))->F_spawnedByCore = (jint(1));
	LINE_NUMBER(363);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((func_mindustry_gen_Player_unit_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_mindustry_gen_Unit])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(364);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((func_mindustry_gen_Player_set_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_set_arc_math_geom_Position])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(366);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[3].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[3].o)))->F_y));
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$new$36(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$36", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	{
	LINE_NUMBER(308);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	((func_mindustry_editor_MapEditor_clearOp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_clearOp])(ctx, sp[0].o);
	LINE_NUMBER(309);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	((func_mindustry_core_Platform_updateRPC) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_updateRPC, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(310);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"landscape"_j))));
	if (temp0 != 0) goto label_3;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_platform;
	POP_N(1); // Pop method args
	((func_mindustry_core_Platform_endForceLandscape) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_endForceLandscape, sp[0].o))(ctx, sp[0].o);
label_3:;
	LINE_NUMBER(311);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$new$35(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$35", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(292);
	((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_saved = (jint(1));
	LINE_NUMBER(293);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"landscape"_j))));
	if (temp0 != 0) goto label_2;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_platform;
	POP_N(1); // Pop method args
	((func_mindustry_core_Platform_beginForceLandscape) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_beginForceLandscape, sp[0].o))(ctx, sp[0].o);
label_2:;
	{
	LINE_NUMBER(294);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	((func_mindustry_editor_MapEditor_clearOp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_clearOp])(ctx, sp[0].o);
	LINE_NUMBER(295);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_view;
	jint temp0 = (jint)((func_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(296);
	if (((jint)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_shownWithMap) != 0) goto label_5;
	}
	{
	LINE_NUMBER(298);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logic;
	((func_mindustry_core_Logic_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Logic_reset])(ctx, sp[0].o);
	LINE_NUMBER(299);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_game_Rules(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Rules);
	init_mindustry_game_Rules(ctx, sp[1].o);
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules = (jref) sp[1].o;
	LINE_NUMBER(300);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	((func_mindustry_editor_MapEditor_beginEdit_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_beginEdit_int_int])(ctx, sp[0].o, (200), (200));
	}
label_5:;
	{
	LINE_NUMBER(302);
	((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_shownWithMap = (jint(0));
	LINE_NUMBER(304);
	jfloat temp0 = jfloat(10.0f);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_88(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_88 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_88);
		proxy->F_field0 = (jref) sp[0].o;
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(ctx, temp0, sp[0].o);
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$new$34(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$34", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(285);
	jint temp0 = (jint)((func_mindustry_editor_MapEditorDialog_hasKeyboard_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditorDialog_hasKeyboard_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(286);
	((func_mindustry_editor_MapEditorDialog_doInput) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditorDialog_doInput])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(288);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$new$32_mindustry_maps_Map(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$32", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(270);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_89(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_89 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_89);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_loadAnd_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_loadAnd_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$new$33_mindustry_maps_Map(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$33", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(272);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	((func_mindustry_editor_MapEditor_beginEdit_mindustry_maps_Map) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_beginEdit_mindustry_maps_Map])(ctx, sp[0].o, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(276);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(273);
	frame[1].o = sp[0].o;
	LINE_NUMBER(274);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.errorload"_j))), (frame[1].o));
	LINE_NUMBER(275);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[1].o));
	}
label_4:;
	LINE_NUMBER(277);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$new$30_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$30", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(263);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, sp[0].o);
	if (temp0 != (frame[0].i)) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, sp[0].o);
	if (temp0 != (frame[1].i)) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_1;
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_2;
label_1:;
	{
	LINE_NUMBER(264);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_90(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_90 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_90);
		proxy->F_field3 = (frame[3].i);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (frame[0].i);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_loadAnd_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_loadAnd_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	LINE_NUMBER(268);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$new$31_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$31", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(265);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	((func_mindustry_editor_MapEditor_resize_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_resize_int_int_int_int])(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i));
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$new$29(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$29", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(258);
	((func_mindustry_editor_MapEditorDialog_tryExit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditorDialog_tryExit])(ctx, (frame[0].o));
	LINE_NUMBER(259);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, sp[0].o);
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$new$22(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$22", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, sp[0].o);
	LINE_NUMBER(194);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Simulate"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(196);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (60);
	frame[2].o = sp[0].o;
	LINE_NUMBER(198);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Seconds: "_j))));
	LINE_NUMBER(199);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxInteger(ctx, ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(0))))));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_54(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_54 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_54);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_1(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_1 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(201);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[1].o));
	LINE_NUMBER(203);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@ok"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_ok;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_91(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_91 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_91);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(210.0f);
	jfloat temp1 = jfloat(64.0f);
	LINE_NUMBER(248);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(250);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[1].o));
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$new$25_Array1_int_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$25", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(204);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_92(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_92 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_92);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_loadAnd_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_loadAnd_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(247);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$new$26_Array1_int(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$26", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(206);
	frame[1].f = (jfloat(2));
	LINE_NUMBER(207);
	jint temp0 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, (((jfloat(((jint)ARRAY_ACCESS(jint, (frame[0].o), (jint(0)))))) * (jfloat(60.0f))) / (frame[1].f)));
	frame[2].i = temp0;
	LINE_NUMBER(208);
	frame[3].f = (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	LINE_NUMBER(209);
	clinit_arc_util_Time(ctx);
	SF_arc_util_Time_delta = (frame[1].f);
	LINE_NUMBER(211);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(212);
	SM_arc_util_Time_clear(ctx);
	LINE_NUMBER(214);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_55(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_55 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_55);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Tiles_eachTile_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_eachTile_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(221);
	frame[5].i = (jint(0));
	}
label_8:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(222);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Teams_getActive_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_getActive_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_game_Teams$TeamData, sp[0].o));
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[7].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_fillItems) == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[7].o)))->F_cores;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[7].o)))->F_cores;
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	frame[8].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[0].o));
	LINE_NUMBER(225);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_56(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_56 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_56);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
label_14:;
	LINE_NUMBER(231);
	goto label_11;
label_12:;
	{
	LINE_NUMBER(232);
	SM_arc_util_Time_update(ctx);
	LINE_NUMBER(233);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[4].o));
	frame[6].o = sp[0].o;
	}
label_18:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(234);
	((func_mindustry_gen_Building_update) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_update])(ctx, (frame[7].o));
	LINE_NUMBER(235);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(236);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_powerGraph;
	((func_mindustry_entities_EntityGroup_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_update])(ctx, sp[0].o);
	LINE_NUMBER(237);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_bullet;
	((func_mindustry_entities_EntityGroup_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_update])(ctx, sp[0].o);
	LINE_NUMBER(221);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(241);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	((func_mindustry_entities_EntityGroup_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_clear])(ctx, sp[0].o);
	LINE_NUMBER(243);
	SM_arc_util_Time_clear(ctx);
	LINE_NUMBER(244);
	clinit_arc_util_Time(ctx);
	SF_arc_util_Time_delta = (frame[3].f);
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$new$28_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_type_Item(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$28", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(226);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_type_Item_isOnPlanet_mindustry_type_Planet_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Item_isOnPlanet_mindustry_type_Planet_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Item_isHidden_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Item_isHidden_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_getMaximumAccepted_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_getMaximumAccepted_mindustry_type_Item_R_int])(ctx, (frame[0].o), (frame[1].o));
	((func_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, temp0);
	}
label_1:;
	LINE_NUMBER(229);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$new$27_arc_struct_Seq_mindustry_world_Tile(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$27", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_isCenter_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_isCenter_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_update) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_allowUpdate_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_allowUpdate_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(217);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	((func_mindustry_gen_Building_updateProximity) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_updateProximity])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(219);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapEditorDialog_lambda$new$24_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$24", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(199);
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_int_R_int(ctx, (frame[0].o), (jint(9999999)));
	if ((floatCompare((jfloat(temp0)), (jfloat(600.0f)), 1)) >= 0) goto label_1;
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

void SM_mindustry_editor_MapEditorDialog_lambda$new$23_Array1_int_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$23", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_int_R_int(ctx, (frame[1].o), (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$new$21(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$21", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, sp[0].o);
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_sectorGenDialog;
	sp[0].o = (jobject)((func_mindustry_editor_SectorGenerateDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_SectorGenerateDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$new$20_arc_scene_ui_TextButton(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$20", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(174);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_tags;
	jint temp0 = (jint)((func_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"steamid"_j))));
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(175);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"author"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = checkCast(ctx, &class_java_lang_String, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_steamPlayerName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@workshop.listing"_j));
	goto label_4;
label_3:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@view.workshop"_j));
	goto label_4;
label_1:;
	LINE_NUMBER(176);
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@editor.publish.workshop"_j));
label_4:;
	{
	sp -= 2;
	LINE_NUMBER(174);
	((func_arc_scene_ui_TextButton_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$new$17(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$17", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(146);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_maps;
	sp[0].o = (jobject)((func_mindustry_maps_Maps_all_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_all_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Boolf_6);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_mindustry_maps_Map, sp[0].o));
	LINE_NUMBER(148);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_tags;
	jint temp0 = (jint)((func_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"steamid"_j))));
	if (temp0 == 0) goto label_2;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_2;
	{
	if (((jint)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_custom) != 0) goto label_2;
	}
	{
	LINE_NUMBER(149);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_tags;
	sp[1].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"steamid"_j))));
	((func_mindustry_core_Platform_viewListingID_java_lang_String) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_viewListingID_java_lang_String, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((func_mindustry_editor_MapEditorDialog_save_R_mindustry_maps_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditorDialog_save_R_mindustry_maps_Map])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(155);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_tags;
	jint temp0 = (jint)((func_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"steamid"_j))));
	if (temp0 == 0) goto label_6;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_6;
	{
	LINE_NUMBER(156);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	((func_mindustry_core_Platform_viewListing_mindustry_type_Publishable) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_viewListing_mindustry_type_Publishable, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}
label_6:;
	{
	LINE_NUMBER(160);
	if ((frame[2].o) != nullptr) goto label_9;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_9:;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[2].o)))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"description"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	if (temp0 >= (jint(4))) goto label_10;
	}
	{
	LINE_NUMBER(163);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.nodescription"_j))));
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return;
	}
label_10:;
	{
	LINE_NUMBER(167);
	clinit_mindustry_game_Gamemode(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Gamemode_all;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Boolf_7);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)SM_arc_util_Structs_contains_Array1_java_lang_Object_arc_func_Boolf_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(168);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@map.nospawn"_j))));
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return;
	}
label_13:;
	{
	LINE_NUMBER(172);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	((func_mindustry_core_Platform_publish_mindustry_type_Publishable) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_publish_mindustry_type_Publishable, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapEditorDialog_lambda$new$19_mindustry_maps_Map_mindustry_game_Gamemode_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$19", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(167);
	jint temp0 = (jint)((func_mindustry_game_Gamemode_valid_mindustry_maps_Map_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Gamemode_valid_mindustry_maps_Map_R_boolean])(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapEditorDialog_lambda$new$18_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$18", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((func_mindustry_maps_Map_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Map_name_R_java_lang_String])(ctx, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_tags;
	sp[1].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"name"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[1].o)))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$new$0_float_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[1].f), (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(73);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.savemap"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_save;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_93(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_93 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_93);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(75);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.mapinfo"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_pencil;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_94(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_94 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_94);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(80);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(82);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.generate"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_terrain;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_95(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_95 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_95);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(87);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.resize"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_resize;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_96(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_96 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_96);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(92);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(94);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.import"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_download;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_97(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_97 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_97);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(125);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.export"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_upload;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_98(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_98 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_98);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(135);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(137);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.ingame"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_right;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_99(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_99 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_99);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(139);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.playtest"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_play;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_100(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_100 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_100);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$new$12(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$12", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.export"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (8));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"@editor.exportfile"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"@editor.exportfile.description"_j)));
	jint temp0 = jint(2);
	clinit_mindustry_gen_Icon(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Icon_file;
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp1 = jint(3);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_101(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_101 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_101);
		sp[3].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[2].o, temp1) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[2].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"@editor.exportimage"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8"@editor.exportimage.description"_j)));
	jint temp2 = 6;
	clinit_mindustry_gen_Icon(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Icon_fileImage;
	ARRAY_ACCESS(jobject, sp[2].o, temp2) = sp[3].o;
	jint temp3 = 7;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_102(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_102 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_102);
		sp[3].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[2].o, temp3) = sp[3].o;
	((func_mindustry_editor_MapEditorDialog_createDialog_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_createDialog_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$new$15(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$15", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	{
	LINE_NUMBER(129);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name"_j))), (((jobject) createStringLiteral(ctx, u8"unknown"_j))));
	sp[0].o = checkCast(ctx, &class_java_lang_String, sp[0].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"png"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_mindustry_core_Platform$FileWriter_2(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_mindustry_core_Platform$FileWriter_2 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_mindustry_core_Platform$FileWriter_2);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_ui_FileChooser_export_java_lang_String_java_lang_String_mindustry_core_Platform$FileWriter(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$new$16_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$16", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(130);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((func_mindustry_editor_MapEditor_tiles_R_mindustry_world_Tiles) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_tiles_R_mindustry_world_Tiles])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_mindustry_io_MapIO_writeImage_mindustry_world_Tiles_R_arc_graphics_Pixmap(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(131);
	((func_arc_files_Fi_writePng_arc_graphics_Pixmap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_writePng_arc_graphics_Pixmap])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(132);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[1].o));
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$new$13(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$13", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	{
	LINE_NUMBER(127);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name"_j))), (((jobject) createStringLiteral(ctx, u8"unknown"_j))));
	sp[0].o = checkCast(ctx, &class_java_lang_String, sp[0].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"msav"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_mindustry_core_Platform$FileWriter_3(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_mindustry_core_Platform$FileWriter_3 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_mindustry_core_Platform$FileWriter_3);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_ui_FileChooser_export_java_lang_String_java_lang_String_mindustry_core_Platform$FileWriter(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$new$14_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$14", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((func_mindustry_editor_MapEditor_createMap_arc_files_Fi_R_mindustry_maps_Map) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapEditor_createMap_arc_files_Fi_R_mindustry_maps_Map])(ctx, sp[1].o, (frame[0].o));
	SM_mindustry_io_MapIO_writeMap_arc_files_Fi_mindustry_maps_Map(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$new$4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$4", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.import"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (12));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"@editor.importmap"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"@editor.importmap.description"_j)));
	jint temp0 = jint(2);
	clinit_mindustry_gen_Icon(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Icon_download;
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp1 = jint(3);
	sp[3].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_loadDialog;
	LINE_NUMBER(95);
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_103(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_103 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_103);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[2].o, temp1) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[2].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"@editor.importfile"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8"@editor.importfile.description"_j)));
	jint temp2 = 6;
	clinit_mindustry_gen_Icon(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Icon_file;
	ARRAY_ACCESS(jobject, sp[2].o, temp2) = sp[3].o;
	jint temp3 = 7;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_104(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_104 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_104);
		sp[3].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[2].o, temp3) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[2].o, (8)) = (((jobject) createStringLiteral(ctx, u8"@editor.importimage"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (9)) = (((jobject) createStringLiteral(ctx, u8"@editor.importimage.description"_j)));
	jint temp4 = 10;
	clinit_mindustry_gen_Icon(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Icon_fileImage;
	ARRAY_ACCESS(jobject, sp[2].o, temp4) = sp[3].o;
	jint temp5 = 11;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_105(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_105 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_105);
		sp[3].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[2].o, temp5) = sp[3].o;
	LINE_NUMBER(94);
	((func_mindustry_editor_MapEditorDialog_createDialog_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_createDialog_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$new$9(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"png"_j)));
	sp[0].o = (jobject)SM_mindustry_ui_FileChooser_open_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_57(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_57 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_57);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_FileChooser$FileChooserParams_submit_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_submit_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$new$10_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$10", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(109);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_106(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_106 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_106);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_loadAnd_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_loadAnd_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$new$11_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$11", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(111);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_arc_files_Fi(ctx, sp[0].o, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(113);
	if (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_width) > (clinit_mindustry_editor_MapResizeDialog(ctx), (jint)SF_mindustry_editor_MapResizeDialog_maxSize)) goto label_5;
	}
	{
	if (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_height) <= (clinit_mindustry_editor_MapResizeDialog(ctx), (jint)SF_mindustry_editor_MapResizeDialog_maxSize)) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(114);
	clinit_java_lang_Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Exception);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Image is too large (maximum size is \u0001x\u0001)"_j.string, 2, boxInteger(ctx, (clinit_mindustry_editor_MapResizeDialog(ctx), (jint)SF_mindustry_editor_MapResizeDialog_maxSize)), boxInteger(ctx, (clinit_mindustry_editor_MapResizeDialog(ctx), (jint)SF_mindustry_editor_MapResizeDialog_maxSize)));
	init_java_lang_Exception_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(116);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	((func_mindustry_editor_MapEditor_beginEdit_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_beginEdit_arc_graphics_Pixmap])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(117);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(121);
	goto label_8;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(118);
	frame[1].o = sp[0].o;
	LINE_NUMBER(119);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.errorload"_j))), (frame[1].o));
	LINE_NUMBER(120);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[1].o));
	}
label_8:;
	LINE_NUMBER(122);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$new$5(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"msav"_j)));
	sp[0].o = (jobject)SM_mindustry_ui_FileChooser_open_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_58(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_58 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_58);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_FileChooser$FileChooserParams_submit_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_submit_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$new$6_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$6", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(97);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_107(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_107 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_java_lang_Runnable_107);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_loadAnd_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_loadAnd_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$new$7_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$7", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(98);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_maps;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_util_UnsafeRunnable_1(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_util_UnsafeRunnable_1 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_util_UnsafeRunnable_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_Maps_tryCatchMapError_arc_util_UnsafeRunnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_tryCatchMapError_arc_util_UnsafeRunnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditorDialog_lambda$new$8_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditorDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(99);
	jint temp0 = (jint)SM_mindustry_io_MapIO_isImage_arc_files_Fi_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(100);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.errorimage"_j))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(102);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)SM_mindustry_io_MapIO_createMap_arc_files_Fi_boolean_R_mindustry_maps_Map(ctx, (frame[0].o), (jint(1)));
	((func_mindustry_editor_MapEditor_beginEdit_mindustry_maps_Map) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_beginEdit_mindustry_maps_Map])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(104);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$new$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_resizeDialog;
	sp[0].o = (jobject)((func_mindustry_editor_MapResizeDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapResizeDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, sp[0].o);
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$new$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_generateDialog;
	sp[1].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_generateDialog;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_59(ctx);
		auto proxy = (mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_59 *) gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog_invoke_arc_func_Cons_59);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapGenerateDialog_show_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_show_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, sp[0].o);
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditorDialog_lambda$new$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog:lambda$new$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_infoDialog;
	sp[0].o = (jobject)((func_mindustry_editor_MapInfoDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapInfoDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(77);
	sp[0].o = (jobject)((mindustry_editor_MapEditorDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, sp[0].o);
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_editor_MapEditorDialog;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method save
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	methods[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[85]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[86]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[87]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[88]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[89]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[90]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[91]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[92]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[93]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[94]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[95]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[96]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[97]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[98]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[99]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[100]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[101]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[102]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[103]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[104]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_editor_MapEditorDialog[] {
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
	(void *) M_mindustry_editor_MapEditorDialog_show_R_arc_scene_ui_Dialog,
	(void *) M_arc_scene_ui_Dialog_show_arc_scene_Scene_R_arc_scene_ui_Dialog,
	(void *) M_arc_scene_ui_Dialog_hide_arc_scene_Action,
	(void *) M_mindustry_editor_MapEditorDialog_hide,
	(void *) M_arc_scene_ui_Dialog_lambda$closeOnBack$1_java_lang_Runnable_arc_input_KeyCode,
	(void *) M_arc_scene_ui_Dialog_lambda$updateScrollFocus$0_Array1_boolean,
	(void *) M_mindustry_editor_MapEditorDialog_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_mindustry_editor_MapEditorDialog_resumeEditing,
	(void *) M_mindustry_editor_MapEditorDialog_editInGame,
	(void *) M_mindustry_editor_MapEditorDialog_resumeAfterPlaytest_mindustry_maps_Map,
	(void *) M_mindustry_editor_MapEditorDialog_playtest,
	(void *) M_mindustry_editor_MapEditorDialog_save_R_mindustry_maps_Map,
	(void *) M_mindustry_editor_MapEditorDialog_handleSaveBuiltin_mindustry_maps_Map,
	(void *) M_mindustry_editor_MapEditorDialog_createDialog_java_lang_String_Array1_java_lang_Object,
	(void *) M_mindustry_editor_MapEditorDialog_beginEditMap_arc_files_Fi,
	(void *) M_mindustry_editor_MapEditorDialog_getView_R_mindustry_editor_MapView,
	(void *) M_mindustry_editor_MapEditorDialog_getGenerateDialog_R_mindustry_editor_MapGenerateDialog,
	(void *) M_mindustry_editor_MapEditorDialog_resetSaved,
	(void *) M_mindustry_editor_MapEditorDialog_hasPane_R_boolean,
	(void *) M_mindustry_editor_MapEditorDialog_build,
	(void *) M_mindustry_editor_MapEditorDialog_doInput,
	(void *) M_mindustry_editor_MapEditorDialog_tryExit,
	(void *) M_mindustry_editor_MapEditorDialog_addBlockSelection_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapEditorDialog_rebuildBlockSelection,
	(void *) M_mindustry_editor_MapEditorDialog_rebuildBlockSelection_java_lang_String,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$addBlockSelection$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$addBlockSelection$0,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$tryExit$0,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$build$0_float_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$build$27_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$build$1_float_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$build$17_arc_scene_ui_ImageButton,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$build$12,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$build$2_Array1_arc_scene_ui_layout_Table_arc_scene_ui_ButtonGroup_arc_scene_ui_layout_Table_mindustry_editor_EditorTool,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$build$6_Array1_arc_scene_ui_layout_Table_mindustry_editor_EditorTool_arc_scene_ui_ImageButton_arc_scene_event_ClickListener,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$build$10_arc_scene_ui_ImageButton_arc_scene_ui_layout_Table_Array1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$build$4_arc_scene_ui_ImageButton_mindustry_editor_EditorTool,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$build$3_mindustry_editor_EditorTool_Array1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$beginEditMap$0_arc_files_Fi,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$createDialog$0_java_lang_Runnable_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$editInGame$0,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$new$35,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$new$34,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$new$29,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$new$22,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$new$21,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$new$17,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$new$0_float_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$new$12,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$new$4,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$new$3,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$new$2,
	(void *) M_mindustry_editor_MapEditorDialog_lambda$new$1,
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
	{ "dispose", "()V" },
	{ "isDisposed", "()Z" },
	{ "resumeEditing", "()V" },
	{ "editInGame", "()V" },
	{ "resumeAfterPlaytest", "(Lmindustry/maps/Map;)V" },
	{ "playtest", "()V" },
	{ "save", "()Lmindustry/maps/Map;" },
	{ "handleSaveBuiltin", "(Lmindustry/maps/Map;)V" },
	{ "createDialog", "(Ljava/lang/String;[Ljava/lang/Object;)V" },
	{ "beginEditMap", "(Larc/files/Fi;)V" },
	{ "getView", "()Lmindustry/editor/MapView;" },
	{ "getGenerateDialog", "()Lmindustry/editor/MapGenerateDialog;" },
	{ "resetSaved", "()V" },
	{ "hasPane", "()Z" },
	{ "build", "()V" },
	{ "doInput", "()V" },
	{ "tryExit", "()V" },
	{ "addBlockSelection", "(Larc/scene/ui/layout/Table;)V" },
	{ "rebuildBlockSelection", "()V" },
	{ "rebuildBlockSelection", "(Ljava/lang/String;)V" },
	{ "lambda$addBlockSelection$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$addBlockSelection$0", "()V" },
	{ "lambda$tryExit$0", "()V" },
	{ "lambda$build$0", "(FLarc/scene/ui/layout/Table;)V" },
	{ "lambda$build$27", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$1", "(FLarc/scene/ui/layout/Table;)V" },
	{ "lambda$build$17", "(Larc/scene/ui/ImageButton;)V" },
	{ "lambda$build$12", "()V" },
	{ "lambda$build$2", "([Larc/scene/ui/layout/Table;Larc/scene/ui/ButtonGroup;Larc/scene/ui/layout/Table;Lmindustry/editor/EditorTool;)V" },
	{ "lambda$build$6", "([Larc/scene/ui/layout/Table;Lmindustry/editor/EditorTool;Larc/scene/ui/ImageButton;Larc/scene/event/ClickListener;)V" },
	{ "lambda$build$10", "(Larc/scene/ui/ImageButton;Larc/scene/ui/layout/Table;[Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$4", "(Larc/scene/ui/ImageButton;Lmindustry/editor/EditorTool;)V" },
	{ "lambda$build$3", "(Lmindustry/editor/EditorTool;[Larc/scene/ui/layout/Table;)V" },
	{ "lambda$beginEditMap$0", "(Larc/files/Fi;)V" },
	{ "lambda$createDialog$0", "(Ljava/lang/Runnable;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$editInGame$0", "()V" },
	{ "lambda$new$35", "()V" },
	{ "lambda$new$34", "()V" },
	{ "lambda$new$29", "()V" },
	{ "lambda$new$22", "()V" },
	{ "lambda$new$21", "()V" },
	{ "lambda$new$17", "()V" },
	{ "lambda$new$0", "(FLarc/scene/ui/layout/Table;)V" },
	{ "lambda$new$12", "()V" },
	{ "lambda$new$4", "()V" },
	{ "lambda$new$3", "()V" },
	{ "lambda$new$2", "()V" },
	{ "lambda$new$1", "()V" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static FieldMetadata fields[] {
	{ "view", &class_mindustry_editor_MapView, offsetof(mindustry_editor_MapEditorDialog, F_view), "Lmindustry/editor/MapView;", 2 },
	{ "infoDialog", &class_mindustry_editor_MapInfoDialog, offsetof(mindustry_editor_MapEditorDialog, F_infoDialog), "Lmindustry/editor/MapInfoDialog;", 2 },
	{ "loadDialog", &class_mindustry_editor_MapLoadDialog, offsetof(mindustry_editor_MapEditorDialog, F_loadDialog), "Lmindustry/editor/MapLoadDialog;", 2 },
	{ "resizeDialog", &class_mindustry_editor_MapResizeDialog, offsetof(mindustry_editor_MapEditorDialog, F_resizeDialog), "Lmindustry/editor/MapResizeDialog;", 2 },
	{ "generateDialog", &class_mindustry_editor_MapGenerateDialog, offsetof(mindustry_editor_MapEditorDialog, F_generateDialog), "Lmindustry/editor/MapGenerateDialog;", 2 },
	{ "sectorGenDialog", &class_mindustry_editor_SectorGenerateDialog, offsetof(mindustry_editor_MapEditorDialog, F_sectorGenDialog), "Lmindustry/editor/SectorGenerateDialog;", 2 },
	{ "playtestDialog", &class_mindustry_ui_dialogs_MapPlayDialog, offsetof(mindustry_editor_MapEditorDialog, F_playtestDialog), "Lmindustry/ui/dialogs/MapPlayDialog;", 2 },
	{ "pane", &class_arc_scene_ui_ScrollPane, offsetof(mindustry_editor_MapEditorDialog, F_pane), "Larc/scene/ui/ScrollPane;", 2 },
	{ "menu", &class_mindustry_ui_dialogs_BaseDialog, offsetof(mindustry_editor_MapEditorDialog, F_menu), "Lmindustry/ui/dialogs/BaseDialog;", 2 },
	{ "blockSelection", &class_arc_scene_ui_layout_Table, offsetof(mindustry_editor_MapEditorDialog, F_blockSelection), "Larc/scene/ui/layout/Table;", 2 },
	{ "lastSavedRules", &class_mindustry_game_Rules, offsetof(mindustry_editor_MapEditorDialog, F_lastSavedRules), "Lmindustry/game/Rules;", 2 },
	{ "saved", &class_boolean, offsetof(mindustry_editor_MapEditorDialog, F_saved), "Z", 2 },
	{ "shownWithMap", &class_boolean, offsetof(mindustry_editor_MapEditorDialog, F_shownWithMap), "Z", 2 },
	{ "blocksOut", &class_arc_struct_Seq, offsetof(mindustry_editor_MapEditorDialog, F_blocksOut), "Larc/struct/Seq;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_MapEditorDialog, 0, "()V", 1 },
	{ "resumeEditing", (intptr_t) M_mindustry_editor_MapEditorDialog_resumeEditing, VTABLE_mindustry_editor_MapEditorDialog_resumeEditing, "()V", 1 },
	{ "editInGame", (intptr_t) M_mindustry_editor_MapEditorDialog_editInGame, VTABLE_mindustry_editor_MapEditorDialog_editInGame, "()V", 2 },
	{ "resumeAfterPlaytest", (intptr_t) M_mindustry_editor_MapEditorDialog_resumeAfterPlaytest_mindustry_maps_Map, VTABLE_mindustry_editor_MapEditorDialog_resumeAfterPlaytest_mindustry_maps_Map, "(Lmindustry/maps/Map;)V", 1 },
	{ "playtest", (intptr_t) M_mindustry_editor_MapEditorDialog_playtest, VTABLE_mindustry_editor_MapEditorDialog_playtest, "()V", 2 },
	{ "save", (intptr_t) M_mindustry_editor_MapEditorDialog_save_R_mindustry_maps_Map, VTABLE_mindustry_editor_MapEditorDialog_save_R_mindustry_maps_Map, "()Lmindustry/maps/Map;", 1 },
	{ "handleSaveBuiltin", (intptr_t) M_mindustry_editor_MapEditorDialog_handleSaveBuiltin_mindustry_maps_Map, VTABLE_mindustry_editor_MapEditorDialog_handleSaveBuiltin_mindustry_maps_Map, "(Lmindustry/maps/Map;)V", 4 },
	{ "createDialog", (intptr_t) M_mindustry_editor_MapEditorDialog_createDialog_java_lang_String_Array1_java_lang_Object, VTABLE_mindustry_editor_MapEditorDialog_createDialog_java_lang_String_Array1_java_lang_Object, "(Ljava/lang/String;[Ljava/lang/Object;)V", 130 },
	{ "show", (intptr_t) M_mindustry_editor_MapEditorDialog_show_R_arc_scene_ui_Dialog, VTABLE_mindustry_editor_MapEditorDialog_show_R_arc_scene_ui_Dialog, "()Larc/scene/ui/Dialog;", 1 },
	{ "hide", (intptr_t) M_mindustry_editor_MapEditorDialog_hide, VTABLE_mindustry_editor_MapEditorDialog_hide, "()V", 1 },
	{ "dispose", (intptr_t) M_mindustry_editor_MapEditorDialog_dispose, VTABLE_mindustry_editor_MapEditorDialog_dispose, "()V", 1 },
	{ "beginEditMap", (intptr_t) M_mindustry_editor_MapEditorDialog_beginEditMap_arc_files_Fi, VTABLE_mindustry_editor_MapEditorDialog_beginEditMap_arc_files_Fi, "(Larc/files/Fi;)V", 1 },
	{ "getView", (intptr_t) M_mindustry_editor_MapEditorDialog_getView_R_mindustry_editor_MapView, VTABLE_mindustry_editor_MapEditorDialog_getView_R_mindustry_editor_MapView, "()Lmindustry/editor/MapView;", 1 },
	{ "getGenerateDialog", (intptr_t) M_mindustry_editor_MapEditorDialog_getGenerateDialog_R_mindustry_editor_MapGenerateDialog, VTABLE_mindustry_editor_MapEditorDialog_getGenerateDialog_R_mindustry_editor_MapGenerateDialog, "()Lmindustry/editor/MapGenerateDialog;", 1 },
	{ "resetSaved", (intptr_t) M_mindustry_editor_MapEditorDialog_resetSaved, VTABLE_mindustry_editor_MapEditorDialog_resetSaved, "()V", 1 },
	{ "hasPane", (intptr_t) M_mindustry_editor_MapEditorDialog_hasPane_R_boolean, VTABLE_mindustry_editor_MapEditorDialog_hasPane_R_boolean, "()Z", 1 },
	{ "build", (intptr_t) M_mindustry_editor_MapEditorDialog_build, VTABLE_mindustry_editor_MapEditorDialog_build, "()V", 1 },
	{ "doInput", (intptr_t) M_mindustry_editor_MapEditorDialog_doInput, VTABLE_mindustry_editor_MapEditorDialog_doInput, "()V", 2 },
	{ "tryExit", (intptr_t) M_mindustry_editor_MapEditorDialog_tryExit, VTABLE_mindustry_editor_MapEditorDialog_tryExit, "()V", 2 },
	{ "addBlockSelection", (intptr_t) M_mindustry_editor_MapEditorDialog_addBlockSelection_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapEditorDialog_addBlockSelection_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 2 },
	{ "rebuildBlockSelection", (intptr_t) M_mindustry_editor_MapEditorDialog_rebuildBlockSelection, VTABLE_mindustry_editor_MapEditorDialog_rebuildBlockSelection, "()V", 1 },
	{ "rebuildBlockSelection", (intptr_t) M_mindustry_editor_MapEditorDialog_rebuildBlockSelection_java_lang_String, VTABLE_mindustry_editor_MapEditorDialog_rebuildBlockSelection_java_lang_String, "(Ljava/lang/String;)V", 2 },
	{ "lambda$rebuildBlockSelection$2", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$rebuildBlockSelection$2_arc_scene_ui_ImageButton_mindustry_world_Block, 0, "(Larc/scene/ui/ImageButton;Lmindustry/world/Block;)V", 4106 },
	{ "lambda$rebuildBlockSelection$1", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$rebuildBlockSelection$1_mindustry_world_Block, 0, "(Lmindustry/world/Block;)V", 4106 },
	{ "lambda$rebuildBlockSelection$0", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$rebuildBlockSelection$0_mindustry_world_Block_mindustry_world_Block_R_int, 0, "(Lmindustry/world/Block;Lmindustry/world/Block;)I", 4106 },
	{ "lambda$addBlockSelection$7", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$addBlockSelection$7_Array1_mindustry_world_Block_Array1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Collapser, 0, "([Lmindustry/world/Block;[Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Collapser;)V", 4106 },
	{ "lambda$addBlockSelection$6", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$addBlockSelection$6_arc_scene_ui_layout_Collapser, 0, "(Larc/scene/ui/layout/Collapser;)V", 4106 },
	{ "lambda$addBlockSelection$5", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$addBlockSelection$5_R_boolean, 0, "()Z", 4106 },
	{ "lambda$addBlockSelection$4", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$addBlockSelection$4_Array1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, 0, "([Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$addBlockSelection$2", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$addBlockSelection$2_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$addBlockSelection$3", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$addBlockSelection$3_R_java_lang_CharSequence, 0, "()Ljava/lang/CharSequence;", 4106 },
	{ "lambda$addBlockSelection$1", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$addBlockSelection$1_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapEditorDialog_lambda$addBlockSelection$1_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$addBlockSelection$0", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$addBlockSelection$0, VTABLE_mindustry_editor_MapEditorDialog_lambda$addBlockSelection$0, "()V", 4098 },
	{ "lambda$tryExit$0", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$tryExit$0, VTABLE_mindustry_editor_MapEditorDialog_lambda$tryExit$0, "()V", 4098 },
	{ "lambda$build$0", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$build$0_float_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapEditorDialog_lambda$build$0_float_arc_scene_ui_layout_Table, "(FLarc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$27", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$build$27_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapEditorDialog_lambda$build$27_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$1", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$build$1_float_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapEditorDialog_lambda$build$1_float_arc_scene_ui_layout_Table, "(FLarc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$26", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$build$26_boolean, 0, "(Z)V", 4106 },
	{ "lambda$build$25", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$build$25_boolean, 0, "(Z)V", 4106 },
	{ "lambda$build$24", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$build$24_boolean, 0, "(Z)V", 4106 },
	{ "lambda$build$22", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$build$22_float_arc_scene_ui_layout_Table, 0, "(FLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$23", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$build$23_float, 0, "(F)V", 4106 },
	{ "lambda$build$21", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$build$21_arc_scene_ui_ImageButton_mindustry_game_Team, 0, "(Larc/scene/ui/ImageButton;Lmindustry/game/Team;)V", 4106 },
	{ "lambda$build$20", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$build$20_mindustry_game_Team, 0, "(Lmindustry/game/Team;)V", 4106 },
	{ "lambda$build$19", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$build$19_arc_scene_ui_ImageButton, 0, "(Larc/scene/ui/ImageButton;)V", 4106 },
	{ "lambda$build$18", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$build$18, 0, "()V", 4106 },
	{ "lambda$build$17", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$build$17_arc_scene_ui_ImageButton, VTABLE_mindustry_editor_MapEditorDialog_lambda$build$17_arc_scene_ui_ImageButton, "(Larc/scene/ui/ImageButton;)V", 4098 },
	{ "lambda$build$16", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$build$16_arc_scene_ui_ImageButton, 0, "(Larc/scene/ui/ImageButton;)V", 4106 },
	{ "lambda$build$15", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$build$15_arc_scene_ui_ImageButton, 0, "(Larc/scene/ui/ImageButton;)V", 4106 },
	{ "lambda$build$14", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$build$14_R_boolean, 0, "()Z", 4106 },
	{ "lambda$build$13", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$build$13_R_boolean, 0, "()Z", 4106 },
	{ "lambda$build$12", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$build$12, VTABLE_mindustry_editor_MapEditorDialog_lambda$build$12, "()V", 4098 },
	{ "lambda$build$2", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$build$2_Array1_arc_scene_ui_layout_Table_arc_scene_ui_ButtonGroup_arc_scene_ui_layout_Table_mindustry_editor_EditorTool, VTABLE_mindustry_editor_MapEditorDialog_lambda$build$2_Array1_arc_scene_ui_layout_Table_arc_scene_ui_ButtonGroup_arc_scene_ui_layout_Table_mindustry_editor_EditorTool, "([Larc/scene/ui/layout/Table;Larc/scene/ui/ButtonGroup;Larc/scene/ui/layout/Table;Lmindustry/editor/EditorTool;)V", 4098 },
	{ "lambda$build$11", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$build$11_arc_scene_ui_Label_mindustry_editor_EditorTool, 0, "(Larc/scene/ui/Label;Lmindustry/editor/EditorTool;)V", 4106 },
	{ "lambda$build$6", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$build$6_Array1_arc_scene_ui_layout_Table_mindustry_editor_EditorTool_arc_scene_ui_ImageButton_arc_scene_event_ClickListener, VTABLE_mindustry_editor_MapEditorDialog_lambda$build$6_Array1_arc_scene_ui_layout_Table_mindustry_editor_EditorTool_arc_scene_ui_ImageButton_arc_scene_event_ClickListener, "([Larc/scene/ui/layout/Table;Lmindustry/editor/EditorTool;Larc/scene/ui/ImageButton;Larc/scene/event/ClickListener;)V", 4098 },
	{ "lambda$build$10", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$build$10_arc_scene_ui_ImageButton_arc_scene_ui_layout_Table_Array1_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapEditorDialog_lambda$build$10_arc_scene_ui_ImageButton_arc_scene_ui_layout_Table_Array1_arc_scene_ui_layout_Table, "(Larc/scene/ui/ImageButton;Larc/scene/ui/layout/Table;[Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$9", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$build$9_mindustry_editor_EditorTool_int_arc_scene_ui_Button, 0, "(Lmindustry/editor/EditorTool;ILarc/scene/ui/Button;)V", 4106 },
	{ "lambda$build$8", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$build$8_mindustry_editor_EditorTool_int_arc_scene_ui_layout_Table, 0, "(Lmindustry/editor/EditorTool;ILarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$7", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$build$7_java_lang_String_arc_scene_ui_Button, 0, "(Ljava/lang/String;Larc/scene/ui/Button;)V", 4106 },
	{ "lambda$build$5", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$build$5_arc_scene_event_ClickListener, 0, "(Larc/scene/event/ClickListener;)V", 4106 },
	{ "lambda$build$4", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$build$4_arc_scene_ui_ImageButton_mindustry_editor_EditorTool, VTABLE_mindustry_editor_MapEditorDialog_lambda$build$4_arc_scene_ui_ImageButton_mindustry_editor_EditorTool, "(Larc/scene/ui/ImageButton;Lmindustry/editor/EditorTool;)V", 4098 },
	{ "lambda$build$3", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$build$3_mindustry_editor_EditorTool_Array1_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapEditorDialog_lambda$build$3_mindustry_editor_EditorTool_Array1_arc_scene_ui_layout_Table, "(Lmindustry/editor/EditorTool;[Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$beginEditMap$0", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$beginEditMap$0_arc_files_Fi, VTABLE_mindustry_editor_MapEditorDialog_lambda$beginEditMap$0_arc_files_Fi, "(Larc/files/Fi;)V", 4098 },
	{ "lambda$createDialog$1", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$createDialog$1_java_lang_String_java_lang_String_arc_scene_ui_layout_Table, 0, "(Ljava/lang/String;Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$createDialog$0", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$createDialog$0_java_lang_Runnable_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_MapEditorDialog_lambda$createDialog$0_java_lang_Runnable_mindustry_ui_dialogs_BaseDialog, "(Ljava/lang/Runnable;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$save$2", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$save$2_java_lang_String_mindustry_maps_Map_R_boolean, 0, "(Ljava/lang/String;Lmindustry/maps/Map;)Z", 4106 },
	{ "lambda$save$1", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$save$1, 0, "()V", 4106 },
	{ "lambda$save$0", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$save$0_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$editInGame$0", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$editInGame$0, VTABLE_mindustry_editor_MapEditorDialog_lambda$editInGame$0, "()V", 4098 },
	{ "lambda$new$36", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$36, 0, "()V", 4106 },
	{ "lambda$new$35", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$new$35, VTABLE_mindustry_editor_MapEditorDialog_lambda$new$35, "()V", 4098 },
	{ "lambda$new$34", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$new$34, VTABLE_mindustry_editor_MapEditorDialog_lambda$new$34, "()V", 4098 },
	{ "lambda$new$32", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$32_mindustry_maps_Map, 0, "(Lmindustry/maps/Map;)V", 4106 },
	{ "lambda$new$33", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$33_mindustry_maps_Map, 0, "(Lmindustry/maps/Map;)V", 4106 },
	{ "lambda$new$30", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$30_int_int_int_int, 0, "(IIII)V", 4106 },
	{ "lambda$new$31", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$31_int_int_int_int, 0, "(IIII)V", 4106 },
	{ "lambda$new$29", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$new$29, VTABLE_mindustry_editor_MapEditorDialog_lambda$new$29, "()V", 4098 },
	{ "lambda$new$22", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$new$22, VTABLE_mindustry_editor_MapEditorDialog_lambda$new$22, "()V", 4098 },
	{ "lambda$new$25", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$25_Array1_int_mindustry_ui_dialogs_BaseDialog, 0, "([ILmindustry/ui/dialogs/BaseDialog;)V", 4106 },
	{ "lambda$new$26", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$26_Array1_int, 0, "([I)V", 4106 },
	{ "lambda$new$28", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$28_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_type_Item, 0, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;Lmindustry/type/Item;)V", 4106 },
	{ "lambda$new$27", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$27_arc_struct_Seq_mindustry_world_Tile, 0, "(Larc/struct/Seq;Lmindustry/world/Tile;)V", 4106 },
	{ "lambda$new$24", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$24_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 4106 },
	{ "lambda$new$23", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$23_Array1_int_java_lang_String, 0, "([ILjava/lang/String;)V", 4106 },
	{ "lambda$new$21", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$new$21, VTABLE_mindustry_editor_MapEditorDialog_lambda$new$21, "()V", 4098 },
	{ "lambda$new$20", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$20_arc_scene_ui_TextButton, 0, "(Larc/scene/ui/TextButton;)V", 4106 },
	{ "lambda$new$17", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$new$17, VTABLE_mindustry_editor_MapEditorDialog_lambda$new$17, "()V", 4098 },
	{ "lambda$new$19", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$19_mindustry_maps_Map_mindustry_game_Gamemode_R_boolean, 0, "(Lmindustry/maps/Map;Lmindustry/game/Gamemode;)Z", 4106 },
	{ "lambda$new$18", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$18_mindustry_maps_Map_R_boolean, 0, "(Lmindustry/maps/Map;)Z", 4106 },
	{ "lambda$new$0", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$new$0_float_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapEditorDialog_lambda$new$0_float_arc_scene_ui_layout_Table, "(FLarc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$12", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$new$12, VTABLE_mindustry_editor_MapEditorDialog_lambda$new$12, "()V", 4098 },
	{ "lambda$new$15", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$15, 0, "()V", 4106 },
	{ "lambda$new$16", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$16_arc_files_Fi, 0, "(Larc/files/Fi;)V", 4106 },
	{ "lambda$new$13", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$13, 0, "()V", 4106 },
	{ "lambda$new$14", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$14_arc_files_Fi, 0, "(Larc/files/Fi;)V", 4106 },
	{ "lambda$new$4", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$new$4, VTABLE_mindustry_editor_MapEditorDialog_lambda$new$4, "()V", 4098 },
	{ "lambda$new$9", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$9, 0, "()V", 4106 },
	{ "lambda$new$10", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$10_arc_files_Fi, 0, "(Larc/files/Fi;)V", 4106 },
	{ "lambda$new$11", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$11_arc_files_Fi, 0, "(Larc/files/Fi;)V", 4106 },
	{ "lambda$new$5", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$5, 0, "()V", 4106 },
	{ "lambda$new$6", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$6_arc_files_Fi, 0, "(Larc/files/Fi;)V", 4106 },
	{ "lambda$new$7", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$7_arc_files_Fi, 0, "(Larc/files/Fi;)V", 4106 },
	{ "lambda$new$8", (intptr_t) SM_mindustry_editor_MapEditorDialog_lambda$new$8_arc_files_Fi, 0, "(Larc/files/Fi;)V", 4106 },
	{ "lambda$new$3", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$new$3, VTABLE_mindustry_editor_MapEditorDialog_lambda$new$3, "()V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$new$2, VTABLE_mindustry_editor_MapEditorDialog_lambda$new$2, "()V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_editor_MapEditorDialog_lambda$new$1, VTABLE_mindustry_editor_MapEditorDialog_lambda$new$1, "()V", 4098 },
};

Class class_mindustry_editor_MapEditorDialog{
		.nativeName = (intptr_t) "mindustry/editor/MapEditorDialog",
		.parentClass = (intptr_t) &class_arc_scene_ui_Dialog,
		.size = sizeof(mindustry_editor_MapEditorDialog),
		.classVtable = (intptr_t) vtable_mindustry_editor_MapEditorDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_MapEditorDialog,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_editor_MapEditorDialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 106,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 337,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_MapEditorDialog = registerClass(&class_mindustry_editor_MapEditorDialog);

}
