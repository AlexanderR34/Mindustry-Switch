#include "mindustry/ui/dialogs/PlanetDialog.h"
#include "java/lang/StringBuilder.h"
#include "arc/func/Prov.h"
#include "arc/Input.h"
#include "arc/func/Boolp.h"
#include "mindustry/content/TechTree_TechNode.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/math/geom/Ray.h"
#include "arc/util/Tmp.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/game/SectorInfo.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "mindustry/game/EventType_SectorLaunchLoadoutEvent.h"
#include "mindustry/ui/dialogs/SectorSelectDialog.h"
#include "arc/graphics/g3d/Camera3D.h"
#include "arc/util/Time.h"
#include "arc/graphics/Texture.h"
#include "java/lang/Object.h"
#include "mindustry/ui/dialogs/LaunchLoadoutDialog.h"
#include "mindustry/content/Planets.h"
#include "mindustry/game/Universe.h"
#include "mindustry/ui/dialogs/ResearchDialog.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/ui/dialogs/PlanetDialog.h"
#include "mindustry/world/blocks/LaunchAnimator.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_40.h"
#include "arc/scene/ui/Dialog_DialogStyle.h"
#include "arc/func/Cons.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_37.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_36.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_35.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_34.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_33.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_32.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_31.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_30.h"
#include "mindustry/core/Control.h"
#include "mindustry/io/SaveMeta.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_39.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_38.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Boolp_8.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Boolp_9.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Boolp_5.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Boolp_6.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Boolp_7.h"
#include "mindustry/graphics/g3d/PlanetRenderer_PlanetInterfaceRenderer.h"
#include "mindustry/game/Saves_SaveSlot.h"
#include "mindustry/Vars.h"
#include "mindustry/graphics/g3d/PlanetParams.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "mindustry/game/SectorInfo_ExportStat.h"
#include "arc/Events.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_59.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_58.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_57.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_56.h"
#include "arc/scene/event/Touchable.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_55.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_54.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Prov_3.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_53.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_52.h"
#include "mindustry/ctype/MappableContent.h"
#include "arc/scene/ui/TextButton.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Prov_2.h"
#include "java/lang/Throwable.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Floatc2_1.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_51.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_50.h"
#include "mindustry/type/Item.h"
#include "arc/assets/AssetManager.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_48.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_47.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_46.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_45.h"
#include "arc/scene/ui/ButtonGroup.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_44.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_43.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_42.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_41.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Cons_49.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Boolf_17.h"
#include "mindustry/net/Net.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Boolf_18.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Boolf_19.h"
#include "mindustry/world/Block.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Boolf_13.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Boolf_14.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Boolf_15.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Boolf_16.h"
#include "arc/util/Timer_Task.h"
#include "arc/math/geom/Vec3.h"
#include "java/lang/String.h"
#include "mindustry/game/Schematic.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Boolf_12.h"
#include "mindustry/ui/dialogs/PlanetDialog_2.h"
#include "java/lang/Math.h"
#include "mindustry/ui/dialogs/PlanetDialog_1.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "mindustry/ui/dialogs/PlanetDialog_4.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/ui/dialogs/PlanetDialog_3.h"
#include "mindustry/ui/dialogs/PlanetDialog_6.h"
#include "mindustry/ui/dialogs/PlanetDialog_5.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/style/Style.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/gen/Player.h"
#include "mindustry/type/Planet.h"
#include "mindustry/ctype/ContentType.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "java/util/Objects.h"
#include "mindustry/core/GameState.h"
#include "arc/assets/AssetDescriptor.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Intf_1.h"
#include "arc/graphics/g2d/Font.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_39.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_38.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_35.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_34.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_37.h"
#include "arc/scene/ui/Image.h"
#include "arc/scene/ui/ScrollPane_ScrollPaneStyle.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_36.h"
#include "mindustry/graphics/g3d/PlanetRenderer.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_33.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_32.h"
#include "arc/func/Intf.h"
#include "arc/struct/Seq.h"
#include "mindustry/maps/SectorSubmissions.h"
#include "arc/Settings.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "arc/Graphics.h"
#include "arc/scene/Scene.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Boolf_20.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Boolf_21.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Boolf_22.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_arc_func_Boolf_23.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"
#include "mindustry/type/ItemSeq.h"
#include "arc/graphics/GLTexture.h"
#include "java/lang/Boolean.h"
#include "mindustry/game/Rules.h"
#include "mindustry/game/Objectives_Objective.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_57.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_56.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_59.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_58.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_53.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_52.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_55.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_54.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_51.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_50.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/game/CampaignRules.h"
#include "mindustry/type/Sector.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_49.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_46.h"
#include "mindustry/ui/Fonts.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_45.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_48.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_47.h"
#include "mindustry/type/ItemStack.h"
#include "arc/scene/ui/ScrollPane.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_42.h"
#include "arc/graphics/g3d/VertexBatch3D.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_41.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_44.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_43.h"
#include "arc/scene/event/EventListener.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_40.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/graphics/g3d/PlanetGrid_Ptile.h"
#include "mindustry/ui/dialogs/PlanetDialog_Mode.h"
#include "arc/scene/ui/Button.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/game/Saves.h"
#include "arc/util/Structs.h"
#include "arc/scene/ui/Label.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_63.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_60.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_62.h"
#include "mindustry/ui/dialogs/PlanetDialog_invoke_java_lang_Runnable_61.h"
#include "arc/func/Floatc2.h"
#include "mindustry/type/SectorPreset.h"
#include "mindustry/maps/generators/PlanetGenerator.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/Application.h"
#include "java/util/Comparator.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/util/Scaling.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/scene/Element.h"
#include "mindustry/ui/fragments/MinimapFragment.h"
#include "arc/struct/SnapshotSeq.h"

extern "C" {

jbool SF_mindustry_ui_dialogs_PlanetDialog_debugSelect;
jbool SF_mindustry_ui_dialogs_PlanetDialog_debugSectorAttackEdit;
jbool SF_mindustry_ui_dialogs_PlanetDialog_debugShowNumbers;
jfloat SF_mindustry_ui_dialogs_PlanetDialog_sectorShowDuration;

void mark_mindustry_ui_dialogs_PlanetDialog(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_PlanetDialog *) object;
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
	if (self->F_loadouts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loadouts)->clazz)->markFunction)((jobject) self->F_loadouts, mark, depth + 1);
	if (self->F_planets)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planets)->clazz)->markFunction)((jobject) self->F_planets, mark, depth + 1);
	if (self->F_state)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_state)->clazz)->markFunction)((jobject) self->F_state, mark, depth + 1);
	if (self->F_selected)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selected)->clazz)->markFunction)((jobject) self->F_selected, mark, depth + 1);
	if (self->F_hovered)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hovered)->clazz)->markFunction)((jobject) self->F_hovered, mark, depth + 1);
	if (self->F_launchSector)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_launchSector)->clazz)->markFunction)((jobject) self->F_launchSector, mark, depth + 1);
	if (self->F_launchCandidates)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_launchCandidates)->clazz)->markFunction)((jobject) self->F_launchCandidates, mark, depth + 1);
	if (self->F_mode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mode)->clazz)->markFunction)((jobject) self->F_mode, mark, depth + 1);
	if (self->F_listener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listener)->clazz)->markFunction)((jobject) self->F_listener, mark, depth + 1);
	if (self->F_newPresets)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_newPresets)->clazz)->markFunction)((jobject) self->F_newPresets, mark, depth + 1);
	if (self->F_searchText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_searchText)->clazz)->markFunction)((jobject) self->F_searchText, mark, depth + 1);
	if (self->F_sectorTop)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sectorTop)->clazz)->markFunction)((jobject) self->F_sectorTop, mark, depth + 1);
	if (self->F_notifs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_notifs)->clazz)->markFunction)((jobject) self->F_notifs, mark, depth + 1);
	if (self->F_expandTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_expandTable)->clazz)->markFunction)((jobject) self->F_expandTable, mark, depth + 1);
	if (self->F_hoverLabel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hoverLabel)->clazz)->markFunction)((jobject) self->F_hoverLabel, mark, depth + 1);
	if (self->F_planetTextures)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planetTextures)->clazz)->markFunction)((jobject) self->F_planetTextures, mark, depth + 1);
	if (self->F_mainView)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mainView)->clazz)->markFunction)((jobject) self->F_mainView, mark, depth + 1);
	if (self->F_selectDialog)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selectDialog)->clazz)->markFunction)((jobject) self->F_selectDialog, mark, depth + 1);
}

void init_mindustry_ui_dialogs_PlanetDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8""_j));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_fullDialog;
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String_arc_scene_ui_Dialog$DialogStyle(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_FrameBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_FrameBuffer);
	init_arc_graphics_gl_FrameBuffer_int_int_boolean(ctx, sp[1].o, (jint(2)), (jint(2)), (jint(1)));
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_LaunchLoadoutDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_LaunchLoadoutDialog);
	init_mindustry_ui_dialogs_LaunchLoadoutDialog(ctx, sp[1].o);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_loadouts = (jref) sp[1].o;
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_renderer;
	sp[1].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[1].o))->F_planets;
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_planets = (jref) sp[1].o;
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_g3d_PlanetParams(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_PlanetParams);
	init_mindustry_graphics_g3d_PlanetParams(ctx, sp[1].o);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(57);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_zoom = (jfloat(1));
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_look;
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_30(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_30 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_30);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_listener = (jref) sp[1].o;
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_newPresets = (jref) sp[1].o;
	LINE_NUMBER(66);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_presetShow = (jfloat(0));
	LINE_NUMBER(67);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_showed = (jint(0));
	LINE_NUMBER(68);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_searchText = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_sectorTop = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_notifs = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_expandTable = (jref) sp[1].o;
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Label(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Label);
	init_arc_scene_ui_Label_java_lang_CharSequence(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_hoverLabel = (jref) sp[1].o;
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_SectorSelectDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_SectorSelectDialog);
	init_mindustry_ui_dialogs_SectorSelectDialog(ctx, sp[1].o);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_selectDialog = (jref) sp[1].o;
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_renderer = (jref) (frame[0].o);
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_drawUi = (jint(1));
	LINE_NUMBER(83);
	((mindustry_ui_dialogs_BaseDialog *) NULL_CHECK((frame[0].o)))->F_shouldPause = (jint(1));
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_planet;
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_settings;
	sp[3].o = (jobject)((func_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"lastplanet"_j))), (((jobject) createStringLiteral(ctx, u8"serpulo"_j))));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet = (jref) (checkCast(ctx, &class_mindustry_type_Planet, sp[1].o));
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet;
	if (sp[0].o != nullptr) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_serpulo;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet = (jref) sp[1].o;
	}
label_20:;
	{
	LINE_NUMBER(87);
	((func_mindustry_ui_dialogs_PlanetDialog_clampZoom) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_clampZoom])(ctx, (frame[0].o));
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_PlanetDialog$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog$1);
	init_mindustry_ui_dialogs_PlanetDialog$1_mindustry_ui_dialogs_PlanetDialog(ctx, sp[1].o, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hoverLabel;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	((func_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hoverLabel;
	((func_arc_scene_ui_Label_setAlignment_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setAlignment_int])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(110);
	((func_mindustry_ui_dialogs_PlanetDialog_rebuildButtons) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_rebuildButtons])(ctx, (frame[0].o));
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_32(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_32 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_32);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_PlanetDialog_onResize_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_onResize_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Floatc2_1(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Floatc2_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Floatc2_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_PlanetDialog_dragged_arc_func_Floatc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_dragged_arc_func_Floatc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_PlanetDialog$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog$2);
	init_mindustry_ui_dialogs_PlanetDialog$2_mindustry_ui_dialogs_PlanetDialog(ctx, sp[1].o, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_PlanetDialog$3(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog$3);
	init_mindustry_ui_dialogs_PlanetDialog$3_mindustry_ui_dialogs_PlanetDialog(ctx, sp[1].o, (frame[0].o));
	jint temp2 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_addCaptureListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_addCaptureListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(179);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_33(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_33 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_33);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_PlanetDialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(182);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_34(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_34 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_34);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_PlanetDialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(225);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_Texture, (jint(2)));
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_planetTextures = (jref) sp[1].o;
	LINE_NUMBER(226);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"sprites/planets/serpulo.png"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"sprites/planets/erekir.png"_j)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(227);
	frame[2].i = (jint(0));
	}
label_34:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_35;
	}
	{
	LINE_NUMBER(228);
	frame[3].i = (frame[2].i);
	LINE_NUMBER(229);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i));
	sp[2].o = ((jobject) &class_arc_graphics_Texture);
	clinit_mindustry_ui_dialogs_PlanetDialog$4(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog$4);
	init_mindustry_ui_dialogs_PlanetDialog$4_mindustry_ui_dialogs_PlanetDialog(ctx, sp[3].o, (frame[0].o));
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_31(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_31 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_31);
		proxy->F_field1 = (frame[3].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(232);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	((func_arc_assets_AssetManager_finishLoadingAsset_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_finishLoadingAsset_java_lang_String])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i))));
	LINE_NUMBER(227);
	INST_IINC(2, 1);
	goto label_34;
	}
label_35:;
	LINE_NUMBER(234);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_PlanetDialog_show_R_arc_scene_ui_Dialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:show", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(239);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(240);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@map.multiplayer"_j))));
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(245);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_sector;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[1].o))->F_planet;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet = (jref) sp[1].o;
	LINE_NUMBER(247);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"lastplanet"_j));
	sp[2].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[2].o))->F_planet;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[2].o))->F_name;
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_4:;
	{
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_planet;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_selectable_mindustry_type_Planet_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_selectable_mindustry_type_Planet_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_serpulo;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(254);
	((func_mindustry_ui_dialogs_PlanetDialog_rebuildButtons) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_rebuildButtons])(ctx, (frame[0].o));
	LINE_NUMBER(255);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_look;
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	LINE_NUMBER(256);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_otherCamPos = (jref) (jobject(nullptr));
	LINE_NUMBER(257);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	sp[3].o = jobject(nullptr);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[2].o))->F_launchSector = (jref) sp[3].o;
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[1].o))->F_hovered = (jref) sp[3].o;
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_selected = (jref) sp[3].o;
	LINE_NUMBER(258);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_launching = (jint(0));
	LINE_NUMBER(260);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_zoom = (jfloat(1));
	LINE_NUMBER(261);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_zoom = (jfloat(1));
	LINE_NUMBER(262);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_uiAlpha = (jfloat(0));
	LINE_NUMBER(263);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp += 1;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_gameOver) == 0) goto label_17;
	}
	INST_ACONST_NULL();
	goto label_18;
label_17:;
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_state;
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	sp++;
label_18:;
	{
	sp -= 2;
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_launchSector = (jref) sp[1].o;
	LINE_NUMBER(264);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_presetShow = (jfloat(0));
	LINE_NUMBER(265);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_showed = (jint(0));
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_32(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_32 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_32);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_listener = (jref) sp[1].o;
	LINE_NUMBER(268);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_newPresets;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(271);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_sectors_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_sectors_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_24:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_type_SectorPreset, sp[0].o));
	LINE_NUMBER(272);
	jint temp0 = (jint)((func_mindustry_type_SectorPreset_unlocked_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_SectorPreset_unlocked_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[2].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (sp[0].o != (frame[2].o)) goto label_27;
	}
	{
	if (((jint)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[2].o)))->F_alwaysUnlocked) != 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[2].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	if (((jint)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_shown) != 0) goto label_27;
	}
	{
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK((frame[2].o)))->F_requireUnlock) == 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[2].o)))->F_sector;
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[2].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_planet;
	if (sp[0].o != sp[1].o) goto label_27;
	}
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_newPresets;
	sp[1].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[2].o)))->F_sector;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(274);
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[2].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_shown = (jint(1));
	LINE_NUMBER(275);
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[2].o)))->F_sector;
	((func_mindustry_type_Sector_saveInfo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_saveInfo])(ctx, sp[0].o);
	}
label_27:;
	LINE_NUMBER(277);
	goto label_24;
label_25:;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_newPresets;
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_31;
	}
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_newPresets;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_planet;
	sp[1].o = (jobject)((func_mindustry_type_Planet_getLastSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Planet_getLastSector_R_mindustry_type_Sector])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_31:;
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_newPresets;
	sp[0].o = (jobject)((func_arc_struct_Seq_reverse_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_reverse_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(284);
	((func_mindustry_ui_dialogs_PlanetDialog_updateSelected) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_updateSelected])(ctx, (frame[0].o));
	LINE_NUMBER(286);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((func_mindustry_type_Planet_getLastSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_getLastSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_35;
	}
	{
	LINE_NUMBER(287);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_planet;
	sp[1].o = (jobject)((func_mindustry_type_Planet_getLastSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Planet_getLastSector_R_mindustry_type_Sector])(ctx, sp[1].o);
	((func_mindustry_ui_dialogs_PlanetDialog_lookAt_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_lookAt_mindustry_type_Sector])(ctx, sp[0].o, sp[1].o);
	}
label_35:;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)M_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_rebuildButtons(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:rebuildButtons", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, sp[0].o);
	LINE_NUMBER(296);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(298);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_sectorTop;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(300);
	((func_mindustry_ui_dialogs_PlanetDialog_addBack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_addBack])(ctx, (frame[0].o));
	LINE_NUMBER(301);
	((func_mindustry_ui_dialogs_PlanetDialog_addTech) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_addTech])(ctx, (frame[0].o));
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(303);
	((func_mindustry_ui_dialogs_PlanetDialog_addBack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_addBack])(ctx, (frame[0].o));
	LINE_NUMBER(304);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(305);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_sectorTop;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(230.0f)));
	LINE_NUMBER(306);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(307);
	((func_mindustry_ui_dialogs_PlanetDialog_addTech) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_addTech])(ctx, (frame[0].o));
	}
label_7:;
	LINE_NUMBER(309);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_addBack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:addBack", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@back"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_left;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_35(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_35 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_35);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(200.0f)), (jfloat(54.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_bottom_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_bottom_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_addTech(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:addTech", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@techtree"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_tree;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_36(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_36 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_36);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(200.0f)), (jfloat(54.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolp_5(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolp_5 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolp_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_bottom_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_bottom_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_showOverview(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:showOverview", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(327);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@overview"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(328);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[1].o));
	LINE_NUMBER(330);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@sectors.captured"_j))));
	LINE_NUMBER(331);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_showPlanetLaunch_mindustry_type_Sector_arc_struct_Seq_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:showPlanetLaunch", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(335);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected = (jref) (jobject(nullptr));
	LINE_NUMBER(336);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered = (jref) (jobject(nullptr));
	LINE_NUMBER(337);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_launching = (jint(0));
	LINE_NUMBER(338);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_listener = (jref) (frame[3].o);
	LINE_NUMBER(339);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].o) != nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_launchCandidates;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ALOAD(2);
label_6:;
	{
	sp -= 2;
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_launchCandidates = (jref) sp[1].o;
	LINE_NUMBER(340);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_launchSector = (jref) (frame[1].o);
	LINE_NUMBER(343);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_launchCandidates;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != (jint(1))) goto label_9;
	}
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_launchCandidates;
	sp[1].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[1].o);
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet = (jref) (checkCast(ctx, &class_mindustry_type_Planet, sp[1].o));
	LINE_NUMBER(345);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_position;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_otherCamPos = (jref) sp[1].o;
	LINE_NUMBER(346);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_otherCamAlpha = (jfloat(0));
	LINE_NUMBER(349);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectors;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_planet;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_startSector));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(350);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_preset;
	frame[5].o = sp[0].o;
	LINE_NUMBER(351);
	if ((frame[5].o) == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(352);
	((func_mindustry_type_SectorPreset_unlock) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_type_SectorPreset_unlock])(ctx, (frame[5].o));
	}
label_16:;
	{
	LINE_NUMBER(354);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected = (jref) (frame[4].o);
	}
label_9:;
	{
	LINE_NUMBER(360);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_zoom = (jfloat(1));
	LINE_NUMBER(361);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_zoom = (jfloat(1));
	LINE_NUMBER(362);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_uiAlpha = (jfloat(0));
	LINE_NUMBER(364);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_planetLaunch;
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	LINE_NUMBER(366);
	((func_mindustry_ui_dialogs_PlanetDialog_updateSelected) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_updateSelected])(ctx, (frame[0].o));
	LINE_NUMBER(367);
	((func_mindustry_ui_dialogs_PlanetDialog_rebuildExpand) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_rebuildExpand])(ctx, (frame[0].o));
	LINE_NUMBER(369);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_sectorTop;
	if (sp[0].o == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_sectorTop;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_color;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (jfloat(0));
	}
label_24:;
	{
	LINE_NUMBER(373);
	sp[0].o = (jobject)M_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog(ctx, (frame[0].o));
	LINE_NUMBER(374);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_showSelect_mindustry_type_Sector_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:showSelect", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(377);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected = (jref) (jobject(nullptr));
	LINE_NUMBER(378);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered = (jref) (jobject(nullptr));
	LINE_NUMBER(379);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_launching = (jint(0));
	LINE_NUMBER(380);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_listener = (jref) (frame[2].o);
	LINE_NUMBER(383);
	((func_mindustry_ui_dialogs_PlanetDialog_lookAt_mindustry_type_Sector) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_lookAt_mindustry_type_Sector])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(384);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_zoom = (jfloat(1));
	LINE_NUMBER(385);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_zoom = (jfloat(1));
	LINE_NUMBER(386);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_uiAlpha = (jfloat(0));
	LINE_NUMBER(387);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_otherCamPos = (jref) (jobject(nullptr));
	LINE_NUMBER(388);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_launchSector = (jref) (frame[1].o);
	LINE_NUMBER(390);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_select;
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	LINE_NUMBER(392);
	sp[0].o = (jobject)M_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog(ctx, (frame[0].o));
	LINE_NUMBER(393);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lookAt_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lookAt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(396);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	clinit_mindustry_graphics_g3d_PlanetGrid$Ptile(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_g3d_PlanetGrid$Ptile_empty;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(399);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet = (jref) sp[1].o;
	LINE_NUMBER(400);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[2].o))->F_camPos;
	sp[0].o = (jobject)((func_mindustry_type_Planet_lookAt_mindustry_type_Sector_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_lookAt_mindustry_type_Sector_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(402);
	((func_mindustry_ui_dialogs_PlanetDialog_clampZoom) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_clampZoom])(ctx, (frame[0].o));
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lookAt_mindustry_type_Sector_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lookAt", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_camPos;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_len_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_len_R_float])(ctx, sp[0].o);
	frame[3].f = temp0;
	LINE_NUMBER(407);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_camPos;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[2].o = frame[1].o;
	clinit_arc_util_Tmp(ctx);
	sp[3].o = (jobject)SF_arc_util_Tmp_v33;
	sp[1].o = (jobject)((func_mindustry_type_Planet_lookAt_mindustry_type_Sector_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Planet_lookAt_mindustry_type_Sector_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, (frame[3].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_slerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_slerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, (frame[2].f));
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_clampZoom(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:clampZoom", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(411);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_zoom;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_planet;
	jfloat temp1 = (jfloat)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_minZoom;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_planet;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp0, temp1, ((jfloat)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_maxZoom));
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_zoom = temp2;
	LINE_NUMBER(412);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_PlanetDialog_canSelect_mindustry_type_Sector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:canSelect", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(415);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_select;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_launchSector;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_launchSector;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[1].o))->F_planet;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_planetLaunch;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_addStartingItems) == 0) goto label_4;
	}
label_5:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(422);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	if (sp[0].o != nullptr) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(424);
	jint temp0 = (jint)((func_mindustry_type_Sector_isShielded_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_isShielded_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(426);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_8;
	}
	{
	jint temp0 = (jint)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_id;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	if (temp0 != ((jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_startSector)) goto label_9;
	}
label_8:;
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(429);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_requireUnlock) == 0) goto label_10;
	}
	{
	LINE_NUMBER(430);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_techNode;
	frame[2].o = sp[0].o;
	LINE_NUMBER(431);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	jint temp0 = (jint)((func_mindustry_type_SectorPreset_unlocked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_SectorPreset_unlocked_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_13;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_13;
	{
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_parent;
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_content;
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_unlocked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_unlocked_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_parent;
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_content;
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_type_SectorPreset)) == 0) goto label_13;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_type_SectorPreset, (frame[4].o)));
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[3].o)))->F_sector;
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_14;
	}
label_13:;
	INST_ICONST(1);
	goto label_16;
label_14:;
	INST_ICONST(0);
label_16:;
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_planetLaunch;
	if (sp[0].o != sp[1].o) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	jint temp0 = (jint)((func_mindustry_maps_generators_PlanetGenerator_allowAcceleratorLanding_mindustry_type_Sector_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_PlanetGenerator_allowAcceleratorLanding_mindustry_type_Sector_R_boolean])(ctx, sp[0].o, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_18;
	}
label_17:;
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	jint temp0 = (jint)((func_mindustry_maps_generators_PlanetGenerator_allowLanding_mindustry_type_Sector_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_PlanetGenerator_allowLanding_mindustry_type_Sector_R_boolean])(ctx, sp[0].o, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_18:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_PlanetDialog_findLauncher_mindustry_type_Sector_R_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:findLauncher", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_planetLaunch;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_launchSector;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(440);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_launchSector;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_launchSector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_launchSector;
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ACONST_NULL();
label_4:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(442);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	sp[0].o = (jobject)((func_mindustry_maps_generators_PlanetGenerator_findLaunchCandidate_mindustry_type_Sector_mindustry_type_Sector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_PlanetGenerator_findLaunchCandidate_mindustry_type_Sector_mindustry_type_Sector_R_mindustry_type_Sector])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(443);
	if ((frame[3].o) != nullptr) goto label_7;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_7;
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_planetLaunch;
	if (sp[0].o == sp[1].o) goto label_8;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_isAttacked_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Sector_isAttacked_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_7;
	}
label_8:;
	INST_ALOAD(2);
	goto label_9;
label_7:;
	INST_ALOAD(3);
label_9:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_PlanetDialog_showing_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:showing", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(447);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_newPresets;
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_renderSectors_mindustry_type_Planet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:renderSectors", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(453);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	if ((floatCompare(((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_uiAlpha), (jfloat(1,000000e-02f)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(455);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	goto label_3;
label_5:;
	{
	LINE_NUMBER(457);
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_canSelect_mindustry_type_Sector_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_canSelect_mindustry_type_Sector_R_boolean])(ctx, (frame[0].o), (frame[3].o));
	if (temp0 != 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_unlocked_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_type_Sector_unlocked_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_6;
	}
	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	(sp++)->i = SF_mindustry_ui_dialogs_PlanetDialog_debugSelect;
	if ((--sp)->i == 0) goto label_7;
label_6:;
	{
	LINE_NUMBER(460);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_8;
	}
	{
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c2;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_sharded;
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_crux;
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_color;
	jint temp0 = (jint)((func_mindustry_type_Sector_hasEnemyBase_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_type_Sector_hasEnemyBase_R_boolean])(ctx, (frame[3].o));
	sp += 2;
	if (temp0 == 0) goto label_9;
	}
	(sp++)->f = jfloat(0.5f);
	goto label_10;
label_9:;
	INST_FCONST(0);
label_10:;
	POP_N(3); // Pop method args
	sp->o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, sp[2].f);
	sp++;
	goto label_11;
label_8:;
	{
	LINE_NUMBER(461);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[3].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[3].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_requireUnlock) == 0) goto label_12;
	}
	{
	LINE_NUMBER(462);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[3].o)))->F_preset;
	jint temp0 = (jint)((func_mindustry_type_SectorPreset_unlocked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_SectorPreset_unlocked_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_14;
	}
	{
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c2;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(10.0f)), (jfloat(1)));
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, temp0);
	sp += 1;
	goto label_11;
	}
label_14:;
	{
	LINE_NUMBER(463);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_gray;
	sp += 1;
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(464);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasEnemyBase_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_type_Sector_hasEnemyBase_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_15;
	}
	{
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_crux;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	sp += 1;
	goto label_11;
	}
label_15:;
	LINE_NUMBER(465);
	INST_ACONST_NULL();
label_11:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(467);
	if ((frame[4].o) == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(468);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[0].o, (jfloat(0.8f)));
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_uiAlpha));
	frame[5].o = sp[0].o;
	LINE_NUMBER(469);
	jint temp0 = (jint)((func_mindustry_type_Sector_isCaptured_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_type_Sector_isCaptured_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[3].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[3].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_showHidden) == 0) goto label_20;
	}
	{
	LINE_NUMBER(470);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_planets;
	((func_mindustry_graphics_g3d_PlanetRenderer_drawSpecialSelection_mindustry_type_Sector_arc_graphics_Color_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawSpecialSelection_mindustry_type_Sector_arc_graphics_Color_float_float])(ctx, sp[0].o, (frame[3].o), (frame[5].o), (jfloat(0.026f)), (jfloat(-1,000000e-03f)));
	goto label_17;
	}
label_20:;
	{
	LINE_NUMBER(472);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_planets;
	((func_mindustry_graphics_g3d_PlanetRenderer_drawSelection_mindustry_type_Sector_arc_graphics_Color_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawSelection_mindustry_type_Sector_arc_graphics_Color_float_float])(ctx, sp[0].o, (frame[3].o), (frame[5].o), (jfloat(0.026f)), (jfloat(-1,000000e-03f)));
	}
label_17:;
	LINE_NUMBER(475);
	goto label_22;
label_7:;
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_planets;
	sp[1].o = frame[3].o;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_mindustry_graphics_g3d_PlanetRenderer(ctx);
	sp[3].o = (jobject)SF_mindustry_graphics_g3d_PlanetRenderer_shadowColor;
	sp[2].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = jfloat(1);
	jfloat temp2 = jfloat(1);
	sp[3].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[2].o = (jobject)((func_arc_graphics_Color_mul_float_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_float_float_float_R_arc_graphics_Color])(ctx, sp[2].o, temp0, temp1, temp2, ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[3].o))->F_uiAlpha));
	((func_mindustry_graphics_g3d_PlanetRenderer_fill_mindustry_type_Sector_arc_graphics_Color_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_fill_mindustry_type_Sector_arc_graphics_Color_float])(ctx, sp[0].o, sp[1].o, sp[2].o, (jfloat(-1,000000e-03f)));
	}
label_22:;
	LINE_NUMBER(478);
	goto label_3;
label_1:;
	{
	LINE_NUMBER(481);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_type_Sector_isBeingPlayed_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_isBeingPlayed_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_23;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_planet;
	if (sp[0].o != sp[1].o) goto label_23;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	sp += 1;
	goto label_24;
	}
label_23:;
	INST_ACONST_NULL();
label_24:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(483);
	if ((frame[2].o) == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(484);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_planets;
	sp[1].o = frame[2].o;
	clinit_mindustry_graphics_g3d_PlanetRenderer(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_g3d_PlanetRenderer_hoverColor;
	clinit_arc_util_Tmp(ctx);
	sp[3].o = (jobject)SF_arc_util_Tmp_c1;
	sp[2].o = (jobject)((func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[2].o, sp[3].o);
	sp[3].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[2].o = (jobject)((func_arc_graphics_Color_mulA_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_mulA_float_R_arc_graphics_Color])(ctx, sp[2].o, ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[3].o))->F_uiAlpha));
	((func_mindustry_graphics_g3d_PlanetRenderer_fill_mindustry_type_Sector_arc_graphics_Color_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_fill_mindustry_type_Sector_arc_graphics_Color_float])(ctx, sp[0].o, sp[1].o, sp[2].o, (jfloat(-1,000000e-03f)));
	}
label_26:;
	{
	LINE_NUMBER(488);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	if (sp[0].o == nullptr) goto label_28;
	}
	{
	LINE_NUMBER(489);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_planets;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	clinit_mindustry_graphics_g3d_PlanetRenderer(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_g3d_PlanetRenderer_hoverColor;
	clinit_arc_util_Tmp(ctx);
	sp[3].o = (jobject)SF_arc_util_Tmp_c1;
	sp[2].o = (jobject)((func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[2].o, sp[3].o);
	sp[3].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[2].o = (jobject)((func_arc_graphics_Color_mulA_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_mulA_float_R_arc_graphics_Color])(ctx, sp[2].o, ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[3].o))->F_uiAlpha));
	((func_mindustry_graphics_g3d_PlanetRenderer_fill_mindustry_type_Sector_arc_graphics_Color_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_fill_mindustry_type_Sector_arc_graphics_Color_float])(ctx, sp[0].o, sp[1].o, sp[2].o, (jfloat(-3,000000e-03f)));
	LINE_NUMBER(490);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_planets;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	clinit_mindustry_graphics_g3d_PlanetRenderer(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_g3d_PlanetRenderer_borderColor;
	sp[3].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	((func_mindustry_graphics_g3d_PlanetRenderer_drawBorders_mindustry_type_Sector_arc_graphics_Color_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawBorders_mindustry_type_Sector_arc_graphics_Color_float])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[3].o))->F_uiAlpha));
	}
label_28:;
	{
	LINE_NUMBER(494);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected;
	if (sp[0].o == nullptr) goto label_31;
	}
	{
	LINE_NUMBER(495);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_planets;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[2].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	((func_mindustry_graphics_g3d_PlanetRenderer_drawSelection_mindustry_type_Sector_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawSelection_mindustry_type_Sector_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[2].o))->F_uiAlpha));
	LINE_NUMBER(496);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_planets;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected;
	clinit_mindustry_graphics_g3d_PlanetRenderer(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_g3d_PlanetRenderer_borderColor;
	sp[3].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	((func_mindustry_graphics_g3d_PlanetRenderer_drawBorders_mindustry_type_Sector_arc_graphics_Color_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawBorders_mindustry_type_Sector_arc_graphics_Color_float])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[3].o))->F_uiAlpha));
	}
label_31:;
	{
	LINE_NUMBER(499);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_planets;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK(sp[0].o))->F_batch;
	((func_arc_graphics_g3d_VertexBatch3D_flush_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_flush_int])(ctx, sp[0].o, (jint(4)));
	LINE_NUMBER(500);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_renderOverProjections_mindustry_type_Planet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:renderOverProjections", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(504);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[-1].o))->F_selected;
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(505);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_PlanetDialog_findLauncher_mindustry_type_Sector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_findLauncher_mindustry_type_Sector_R_mindustry_type_Sector])(ctx, (frame[0].o), (frame[2].o));
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ACONST_NULL();
label_5:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(507);
	if ((frame[2].o) == nullptr) goto label_7;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_7;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_7;
	{
	if ((frame[2].o) == (frame[3].o)) goto label_7;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_canSelect_mindustry_type_Sector_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_canSelect_mindustry_type_Sector_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(508);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_planets;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[3].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[2].o))->F_v;
	sp[3].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_tile;
	sp[3].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[3].o))->F_v;
	((func_mindustry_graphics_g3d_PlanetRenderer_drawArcLine_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawArcLine_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_7:;
	{
	LINE_NUMBER(511);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_planetLaunch;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_launchSector;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(512);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_planets;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_launchSector;
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[2].o))->F_tile;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[2].o))->F_v;
	sp[3].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[3].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[3].o))->F_tile;
	sp[3].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[3].o))->F_v;
	((func_mindustry_graphics_g3d_PlanetRenderer_drawArcLine_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawArcLine_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_9:;
	{
	LINE_NUMBER(515);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	if ((floatCompare(((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_uiAlpha), (jfloat(1,000000e-03f)), -1)) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(516);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(519);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[5].o)))->F_shieldTarget;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_isCaptured_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_type_Sector_isCaptured_R_boolean])(ctx, (frame[5].o));
	if (temp0 != 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[5].o)))->F_shieldTarget;
	jint temp0 = (jint)((func_mindustry_type_Sector_isCaptured_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_isCaptured_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_generator;
	jint temp0 = (jint)((func_mindustry_maps_generators_PlanetGenerator_allowLanding_mindustry_type_Sector_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_PlanetGenerator_allowLanding_mindustry_type_Sector_R_boolean])(ctx, sp[0].o, (frame[5].o));
	if (temp0 != 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_generator;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[5].o)))->F_shieldTarget;
	jint temp0 = (jint)((func_mindustry_maps_generators_PlanetGenerator_allowLanding_mindustry_type_Sector_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_PlanetGenerator_allowLanding_mindustry_type_Sector_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(520);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_planets;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[5].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[2].o))->F_v;
	sp[3].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[5].o)))->F_shieldTarget;
	sp[3].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[3].o))->F_tile;
	sp[3].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[3].o))->F_v;
	clinit_mindustry_game_Team(ctx);
	sp[4].o = (jobject)SF_mindustry_game_Team_crux;
	sp[4].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[4].o))->F_color;
	clinit_arc_util_Tmp(ctx);
	sp[5].o = (jobject)SF_arc_util_Tmp_c2;
	sp[4].o = (jobject)((func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[4].o, sp[5].o);
	sp[5].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[4].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[4].o, ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[5].o))->F_uiAlpha));
	clinit_arc_util_Tmp(ctx);
	sp[5].o = (jobject)SF_arc_util_Tmp_c3;
	clinit_arc_util_Tmp(ctx);
	sp[6].o = (jobject)SF_arc_util_Tmp_c2;
	sp[5].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[5].o, sp[6].o);
	sp[5].o = (jobject)((func_arc_graphics_Color_mulA_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_arc_graphics_Color_mulA_float_R_arc_graphics_Color])(ctx, sp[5].o, (jfloat(0.5f)));
	((func_mindustry_graphics_g3d_PlanetRenderer_drawArcLine_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawArcLine_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int_float])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (jfloat(0.3f)), (jfloat(110.0f)), (25), (jfloat(6,000000e-03f)));
	}
label_15:;
	{
	LINE_NUMBER(523);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(525);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_campaignRules;
	if (((jint)((mindustry_game_CampaignRules *) NULL_CHECK(sp[0].o))->F_sectorInvasion) == 0) goto label_19;
	}
	{
	LINE_NUMBER(526);
	sp[0].o = (jobject)((func_mindustry_type_Sector_near_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_type_Sector_near_R_arc_struct_Seq])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_21:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(527);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasEnemyBase_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_type_Sector_hasEnemyBase_R_boolean])(ctx, (frame[7].o));
	if (temp0 == 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[7].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[7].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_requireUnlock) != 0) goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(528);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_planets;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[7].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[2].o))->F_v;
	sp[3].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[5].o)))->F_tile;
	sp[3].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[3].o))->F_v;
	clinit_mindustry_game_Team(ctx);
	sp[4].o = (jobject)SF_mindustry_game_Team_crux;
	sp[4].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[4].o))->F_color;
	clinit_arc_util_Tmp(ctx);
	sp[5].o = (jobject)SF_arc_util_Tmp_c2;
	sp[4].o = (jobject)((func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[4].o, sp[5].o);
	sp[5].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[4].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[4].o, ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[5].o))->F_uiAlpha));
	clinit_arc_graphics_Color(ctx);
	sp[5].o = (jobject)SF_arc_graphics_Color_clear;
	((func_mindustry_graphics_g3d_PlanetRenderer_drawArcLine_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawArcLine_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int_float])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (jfloat(0.24f)), (jfloat(110.0f)), (25), (jfloat(5,000000e-03f)));
	}
label_23:;
	LINE_NUMBER(530);
	goto label_21;
label_19:;
	{
	LINE_NUMBER(533);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected;
	if (sp[0].o == (frame[5].o)) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(535);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[5].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_destination;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected;
	if (sp[0].o != sp[1].o) goto label_26;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[5].o)))->F_info;
	jint temp0 = (jint)((func_mindustry_game_SectorInfo_anyExports_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_anyExports_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_planets;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[5].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[2].o))->F_v;
	sp[3].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[3].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[3].o))->F_tile;
	sp[3].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[3].o))->F_v;
	clinit_arc_graphics_Color(ctx);
	sp[4].o = (jobject)SF_arc_graphics_Color_gray;
	clinit_arc_util_Tmp(ctx);
	sp[5].o = (jobject)SF_arc_util_Tmp_c2;
	sp[4].o = (jobject)((func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[4].o, sp[5].o);
	sp[5].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[4].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[4].o, ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[5].o))->F_uiAlpha));
	clinit_mindustry_graphics_Pal(ctx);
	sp[5].o = (jobject)SF_mindustry_graphics_Pal_accent;
	clinit_arc_util_Tmp(ctx);
	sp[6].o = (jobject)SF_arc_util_Tmp_c3;
	sp[5].o = (jobject)((func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[5].o, sp[6].o);
	sp[6].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[5].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[5].o, ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[6].o))->F_uiAlpha));
	((func_mindustry_graphics_g3d_PlanetRenderer_drawArc_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawArc_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (jfloat(0.4f)), (jfloat(90.0f)), (25));
	}
label_26:;
	{
	LINE_NUMBER(539);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_destination;
	if (sp[0].o != (frame[5].o)) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	jint temp0 = (jint)((func_mindustry_game_SectorInfo_anyExports_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_anyExports_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(540);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_planets;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[2].o))->F_tile;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[2].o))->F_v;
	sp[3].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[5].o)))->F_tile;
	sp[3].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[3].o))->F_v;
	clinit_mindustry_graphics_Pal(ctx);
	sp[4].o = (jobject)SF_mindustry_graphics_Pal_place;
	clinit_arc_util_Tmp(ctx);
	sp[5].o = (jobject)SF_arc_util_Tmp_c2;
	sp[4].o = (jobject)((func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[4].o, sp[5].o);
	sp[5].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[4].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[4].o, ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[5].o))->F_uiAlpha));
	clinit_mindustry_graphics_Pal(ctx);
	sp[5].o = (jobject)SF_mindustry_graphics_Pal_accent;
	clinit_arc_util_Tmp(ctx);
	sp[6].o = (jobject)SF_arc_util_Tmp_c3;
	sp[5].o = (jobject)((func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[5].o, sp[6].o);
	sp[6].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[5].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[5].o, ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[6].o))->F_uiAlpha));
	((func_mindustry_graphics_g3d_PlanetRenderer_drawArc_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawArc_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (jfloat(0.4f)), (jfloat(90.0f)), (25));
	}
label_17:;
	LINE_NUMBER(544);
	goto label_13;
label_11:;
	LINE_NUMBER(546);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_renderProjections_mindustry_type_Planet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:renderProjections", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(550);
	frame[2].f = (jfloat(16.0f));
	LINE_NUMBER(552);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(553);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(554);
	sp[0].o = (jobject)((func_mindustry_type_Sector_icon_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_type_Sector_icon_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(556);
	jint temp0 = (jint)((func_mindustry_type_Sector_isAttacked_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_type_Sector_isAttacked_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getLargeIcon_java_lang_String_R_arc_graphics_g2d_TextureRegion(ctx, (((jobject) createStringLiteral(ctx, u8"warning"_j))));
	sp += 1;
	goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(557);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_requireUnlock) == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_preset;
	jint temp0 = (jint)((func_mindustry_type_SectorPreset_unlocked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_SectorPreset_unlocked_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_12;
	}
label_11:;
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_showHidden) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_planetLaunch;
	if (sp[0].o != sp[1].o) goto label_10;
	}
label_12:;
	INST_ALOAD(5);
	if ((--sp)->o != nullptr) goto label_10;
	{
	LINE_NUMBER(558);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_requireUnlock) == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_preset;
	jint temp0 = (jint)((func_mindustry_type_SectorPreset_unlocked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_SectorPreset_unlocked_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_16;
	}
label_15:;
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_showHidden) == 0) goto label_14;
	}
label_16:;
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_preset;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_uiIcon;
	sp += 1;
	goto label_9;
	}
label_14:;
	{
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getLargeIcon_java_lang_String_R_arc_graphics_g2d_TextureRegion(ctx, (((jobject) createStringLiteral(ctx, u8"terrain"_j))));
	sp += 1;
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(559);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_requireUnlock) == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_preset;
	jint temp0 = (jint)((func_mindustry_type_SectorPreset_locked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_SectorPreset_locked_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_preset;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_techNode;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_preset;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_techNode;
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_parent;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_preset;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_techNode;
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_parent;
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_content;
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_locked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_locked_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_17;
	}
label_18:;
	{
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getLargeIcon_java_lang_String_R_arc_graphics_g2d_TextureRegion(ctx, (((jobject) createStringLiteral(ctx, u8"lock"_j))));
	sp += 1;
	goto label_9;
	}
label_17:;
	LINE_NUMBER(560);
	INST_ALOAD(5);
label_9:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(561);
	jint temp0 = (jint)((func_mindustry_type_Sector_isAttacked_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_type_Sector_isAttacked_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_20;
	}
	{
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_sharded;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	sp += 1;
	goto label_21;
	}
label_20:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
label_21:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(563);
	if ((frame[6].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(564);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_planets;
	sp[1].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_37(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_37 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_37);
		proxy->F_field5 = (frame[2].f);
		proxy->F_field4 = (jref) (frame[7].o);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (jref) (frame[6].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_graphics_g3d_PlanetRenderer_drawPlane_mindustry_type_Sector_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawPlane_mindustry_type_Sector_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_5:;
	{
	LINE_NUMBER(572);
	if ((clinit_mindustry_ui_dialogs_PlanetDialog(ctx), (jint)SF_mindustry_ui_dialogs_PlanetDialog_debugShowNumbers) == 0) goto label_24;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_hasEnemyBase_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_type_Sector_hasEnemyBase_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(573);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_planets;
	sp[1].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_38(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_38 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_38);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_graphics_g3d_PlanetRenderer_drawPlane_mindustry_type_Sector_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawPlane_mindustry_type_Sector_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_24:;
	LINE_NUMBER(582);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(584);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(586);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	if (sp[0].o == nullptr) goto label_27;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	if ((floatCompare(((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_uiAlpha), (jfloat(1,000000e-02f)), -1)) <= 0) goto label_27;
	}
	{
	LINE_NUMBER(587);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_planets;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_39(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_39 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_39);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_graphics_g3d_PlanetRenderer_drawPlane_mindustry_type_Sector_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawPlane_mindustry_type_Sector_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_27:;
	{
	LINE_NUMBER(604);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(605);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_PlanetDialog_selectable_mindustry_type_Planet_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:selectable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(608);
	if (((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_removed) == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(609);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_select;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_planet;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(610);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_planetLaunch;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_launchSector;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_launchCandidates;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_7;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_launchSector;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[1].o))->F_planet;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	if (((jint)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_allowSelfSectorLaunch) == 0) goto label_6;
	}
label_7:;
	INST_ICONST(1);
	goto label_8;
label_6:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(611);
	if (((jint)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[1].o)))->F_alwaysUnlocked) == 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Planet_isLandable_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Planet_isLandable_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_10;
	}
label_9:;
	{
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_sectors;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_12(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_12 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_12);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_10;
	}
	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	(sp++)->i = SF_mindustry_ui_dialogs_PlanetDialog_debugSelect;
	if ((--sp)->i == 0) goto label_11;
label_10:;
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_setup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:setup", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(615);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_searchText = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(616);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	jfloat temp0 = jfloat(1);
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_zoom = temp0;
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_zoom = temp0;
	LINE_NUMBER(617);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_uiAlpha = (jfloat(1));
	LINE_NUMBER(618);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_minimapfrag;
	((func_mindustry_ui_fragments_MinimapFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MinimapFragment_hide])(ctx, sp[0].o);
	LINE_NUMBER(620);
	((func_mindustry_ui_dialogs_PlanetDialog_clearChildren) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_clearChildren])(ctx, (frame[0].o));
	LINE_NUMBER(622);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_PlanetDialog_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (jfloat(0)));
	LINE_NUMBER(624);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(5)));
	jint temp3 = jint(0);
	sp[2].o = frame[0].o;
	clinit_mindustry_ui_dialogs_PlanetDialog$5(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog$5);
	init_mindustry_ui_dialogs_PlanetDialog$5_mindustry_ui_dialogs_PlanetDialog(ctx, sp[3].o, (frame[0].o));
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[2].o))->F_mainView = (jref) sp[3].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[3].o;
	jint temp4 = jint(1);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_33(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_33 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_33);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_arc_scene_ui_layout_Table_arc_func_Cons(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp5 = jint(2);
	sp[2].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	jint temp6 = jint(3);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_34(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_34 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_34);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_arc_scene_ui_layout_Table_arc_func_Cons(ctx, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolp_6(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolp_6 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolp_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	LINE_NUMBER(765);
	sp[2].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp6) = sp[2].o;
	jint temp7 = jint(4);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_35(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_35 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_35);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_arc_scene_ui_layout_Table_arc_func_Cons(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp7) = sp[2].o;
	LINE_NUMBER(624);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_PlanetDialog_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(767);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(768);
	((func_mindustry_ui_dialogs_PlanetDialog_rebuildExpand) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_rebuildExpand])(ctx, (frame[0].o));
	LINE_NUMBER(769);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_rebuildExpand(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:rebuildExpand", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(772);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_expandTable;
	frame[1].o = sp[0].o;
	LINE_NUMBER(773);
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, (frame[1].o));
	LINE_NUMBER(774);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolp_7(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolp_7 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolp_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(775);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectors;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_13(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_13 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_13);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(776);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectors;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_14(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_14 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_14);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_count_arc_func_Boolf_R_int])(ctx, sp[0].o, sp[1].o);
	frame[2].i = temp0;
	LINE_NUMBER(779);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(780);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(290.0f)));
	LINE_NUMBER(782);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"sectorlist"_j))));
	LINE_NUMBER(783);
	sp += 2;
	if ((frame[2].i) != 0) goto label_10;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_11;
label_10:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"sectorlist.attacked"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"[red]\u0001[]"_j.string, 1, boxInteger(ctx, (frame[2].i)));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\n[red]\u26a0[lightgray] \u0001"_j.string, 1, sp[0].o);
	sp += 1;
	}
label_11:;
	{
	sp -= 3;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[1].o, sp[2].o);
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_downOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_Styles_squareTogglet;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_40(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_40 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_40);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	LINE_NUMBER(782);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(60.0f);
	LINE_NUMBER(785);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_15(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_15 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_36(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_36 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_36);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(789);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_37(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_37 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_37);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(791);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_38(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_38 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_38);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp1 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolp_8(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolp_8 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolp_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_collapser_arc_func_Cons_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_collapser_arc_func_Cons_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	jfloat temp2 = jfloat(64.0f);
	LINE_NUMBER(796);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_4:;
	LINE_NUMBER(798);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_rebuildList(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:rebuildList", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(801);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_notifs;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(803);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_notifs;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(805);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectors;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_16(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_16 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_16);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(806);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_17(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_17 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_17);
		sp[1].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_Structs_comparingBool_arc_func_Boolf_R_java_util_Comparator(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Intf_1(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Intf_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Intf_1);
		sp[2].o = (jobject) proxy;
	}
	sp[2].o = (jobject)SM_arc_util_Structs_comparingInt_arc_func_Intf_R_java_util_Comparator(ctx, sp[2].o);
	sp[1].o = (jobject)SM_arc_util_Structs_comps_java_util_Comparator_java_util_Comparator_R_java_util_Comparator(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(808);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_notifs;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_39(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_39 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_39);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(865);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(866);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_PlanetDialog_getHoverPlanet_float_float_R_mindustry_type_Planet(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:getHoverPlanet", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(869);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(870);
	frame[4].f = (jfloat(std::numeric_limits<float>::infinity()));
	LINE_NUMBER(872);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_planets_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_planets_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_type_Planet, sp[0].o));
	LINE_NUMBER(873);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_planets;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK(sp[0].o))->F_cam;
	sp[0].o = (jobject)((func_arc_graphics_g3d_Camera3D_getPickRay_float_float_R_arc_math_geom_Ray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_Camera3D_getPickRay_float_float_R_arc_math_geom_Ray])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	frame[7].o = sp[0].o;
	LINE_NUMBER(876);
	sp[0].o = (jobject)((func_mindustry_type_Planet_intersect_arc_math_geom_Ray_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_type_Planet_intersect_arc_math_geom_Ray_float_R_arc_math_geom_Vec3])(ctx, (frame[6].o), (frame[7].o), ((jfloat(1.17f)) * ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[6].o)))->F_radius)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(878);
	if ((frame[8].o) == nullptr) goto label_8;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_selectable_mindustry_type_Planet_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_selectable_mindustry_type_Planet_R_boolean])(ctx, (frame[0].o), (frame[6].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[7].o)))->F_origin;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, (frame[4].f), 1)) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(879);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[7].o)))->F_origin;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[4].f = temp0;
	LINE_NUMBER(880);
	frame[3].o = (frame[6].o);
	}
label_8:;
	LINE_NUMBER(882);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(884);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_viewPlanet_mindustry_type_Planet_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:viewPlanet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(888);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(889);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected = (jref) (jobject(nullptr));
	LINE_NUMBER(890);
	if ((frame[2].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(891);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_planet;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_position;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_otherCamPos = (jref) sp[1].o;
	LINE_NUMBER(892);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_otherCamAlpha = (jfloat(0));
	}
label_4:;
	{
	LINE_NUMBER(894);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_newPresets;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(895);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet = (jref) (frame[1].o);
	LINE_NUMBER(897);
	((func_mindustry_ui_dialogs_PlanetDialog_clampZoom) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_clampZoom])(ctx, (frame[0].o));
	LINE_NUMBER(899);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected = (jref) (jobject(nullptr));
	LINE_NUMBER(900);
	((func_mindustry_ui_dialogs_PlanetDialog_updateSelected) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_updateSelected])(ctx, (frame[0].o));
	LINE_NUMBER(901);
	((func_mindustry_ui_dialogs_PlanetDialog_rebuildExpand) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_rebuildExpand])(ctx, (frame[0].o));
	LINE_NUMBER(902);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"lastplanet"_j));
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	LINE_NUMBER(904);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:draw", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(908);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a), (jfloat(0.99f)), 1)) >= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(910);
	if ((frame[1].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(911);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_buffer;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	((func_arc_graphics_gl_FrameBuffer_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_resize_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(912);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_buffer;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_clear;
	((func_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(915);
	M_arc_scene_ui_Dialog_draw(ctx, (frame[0].o));
	LINE_NUMBER(917);
	if ((frame[1].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(918);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(920);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(921);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_wrap_arc_graphics_Texture_R_arc_graphics_g2d_TextureRegion(ctx, (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o)));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2))), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2))), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width), (-((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height)));
	LINE_NUMBER(922);
	SM_arc_graphics_g2d_Draw_color(ctx);
	}
label_8:;
	LINE_NUMBER(924);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_act_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:act", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(928);
	M_arc_scene_ui_Dialog_act_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(931);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_otherCamPos;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(932);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_otherCamAlpha), (jfloat(1)), (jfloat(0.05f)));
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_otherCamAlpha = temp0;
	LINE_NUMBER(933);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_camPos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (jfloat(0)), (jfloat(4.0f)), (jfloat(0.1f)));
	LINE_NUMBER(935);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	jint temp1 = (jint)SM_arc_math_Mathf_equal_float_float_float_R_boolean(ctx, ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_otherCamAlpha), (jfloat(1)), (jfloat(1,000000e-02f)));
	if (temp1 == 0) goto label_2;
	}
	{
	LINE_NUMBER(937);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_camPos;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v31;
	sp[2].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[2].o))->F_otherCamPos;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[2].o))->F_planet;
	sp[2].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[2].o))->F_position;
	sp[3].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_slerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_slerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o, ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[3].o))->F_otherCamAlpha));
	sp[2].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[2].o))->F_camPos;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[2].o))->F_planet;
	sp[2].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[2].o))->F_position;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(939);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_otherCamPos = (jref) (jobject(nullptr));
	LINE_NUMBER(941);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectors;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(942);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_newPresets;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_planet;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_sectors;
	sp[2].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[2].o))->F_planet;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, ((jint)((mindustry_type_Planet *) NULL_CHECK(sp[2].o))->F_startSector));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_type_Sector, sp[1].o)));
	}
label_2:;
	{
	LINE_NUMBER(949);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_sectorTop;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_otherCamPos;
	if (sp[0].o != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(950);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_sectorTop;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_color;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_sectorTop;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[1].o))->F_color;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a), (jfloat(1)), (jfloat(0.1f)));
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = temp0;
	}
label_10:;
	{
	LINE_NUMBER(953);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet;
	jint temp0 = (jint)((func_mindustry_type_Planet_hasGrid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_hasGrid_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(954);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hoverLabel;
	((func_mindustry_ui_dialogs_PlanetDialog_addChild_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_addChild_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(955);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hoverLabel;
	((func_arc_scene_ui_Label_toFront) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_toFront])(ctx, sp[0].o);
	LINE_NUMBER(956);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hoverLabel;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(957);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hoverLabel;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_color;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_uiAlpha);
	LINE_NUMBER(959);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	sp[2].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_planets;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK(sp[2].o))->F_cam;
	clinit_arc_util_Tmp(ctx);
	sp[3].o = (jobject)SF_arc_util_Tmp_v31;
	sp[0].o = (jobject)((func_mindustry_type_Planet_project_mindustry_type_Sector_arc_graphics_g3d_Camera3D_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_project_mindustry_type_Sector_arc_graphics_g3d_Camera3D_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(960);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hoverLabel;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	jfloat temp1 = temp0 - ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginLeft);
	jfloat temp2 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_ui_Label_setPosition_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setPosition_float_float_int])(ctx, sp[0].o, temp1, (temp2 - ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginBottom)), (jint(1)));
	LINE_NUMBER(962);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hoverLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_Label_getText_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_getText_R_java_lang_StringBuilder])(ctx, sp[0].o);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(963);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(964);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hoverLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_Label_getText_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_getText_R_java_lang_StringBuilder])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(965);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_canSelect_mindustry_type_Sector_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_canSelect_mindustry_type_Sector_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_24;
	}
	{
	LINE_NUMBER(966);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (sp[0].o != nullptr) goto label_26;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	if (((jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_allowLaunchToNumbered) == 0) goto label_21;
	}
label_26:;
	{
	LINE_NUMBER(967);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_planetLaunch;
	if (sp[0].o != sp[1].o) goto label_27;
	}
	{
	LINE_NUMBER(968);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"[gray]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (jint(59413)));
	goto label_21;
	}
label_27:;
	{
	LINE_NUMBER(969);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_select;
	if (sp[0].o == sp[1].o) goto label_21;
	}
	{
	LINE_NUMBER(970);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	((func_mindustry_maps_generators_PlanetGenerator_getLockedText_mindustry_type_Sector_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_PlanetGenerator_getLockedText_mindustry_type_Sector_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	goto label_21;
	}
label_24:;
	{
	LINE_NUMBER(974);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"[accent][[ [white]"_j))));
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	sp[1].o = (jobject)((func_mindustry_type_Sector_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Sector_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[accent] ]"_j))));
	}
label_21:;
	{
	LINE_NUMBER(977);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hoverLabel;
	((func_arc_scene_ui_Label_invalidateHierarchy) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_invalidateHierarchy])(ctx, sp[0].o);
	LINE_NUMBER(978);
	goto label_31;
	}
label_12:;
	{
	LINE_NUMBER(979);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hoverLabel;
	jint temp0 = (jint)((func_arc_scene_ui_Label_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_remove_R_boolean])(ctx, sp[0].o);
	}
label_31:;
	{
	LINE_NUMBER(982);
	if (((jint)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_launching) == 0) goto label_32;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected;
	if (sp[0].o == nullptr) goto label_32;
	}
	{
	LINE_NUMBER(983);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected;
	((func_mindustry_ui_dialogs_PlanetDialog_lookAt_mindustry_type_Sector_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_lookAt_mindustry_type_Sector_float])(ctx, sp[0].o, sp[1].o, (jfloat(0.1f)));
	}
label_32:;
	{
	LINE_NUMBER(986);
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_showing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_showing_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_34;
	}
	{
	LINE_NUMBER(987);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_newPresets;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(989);
	sp[0].o = frame[0].o;
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_presetShow = (((jfloat)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_presetShow) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(991);
	((func_mindustry_ui_dialogs_PlanetDialog_lookAt_mindustry_type_Sector_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_lookAt_mindustry_type_Sector_float])(ctx, (frame[0].o), (frame[2].o), (jfloat(0.11f)));
	LINE_NUMBER(992);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_zoom = (jfloat(0.75f));
	LINE_NUMBER(994);
	if ((floatCompare(((jfloat)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_presetShow), (jfloat(20.0f)), -1)) < 0) goto label_40;
	}
	{
	if (((jint)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_showed) != 0) goto label_40;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_newPresets;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= (jint(1))) goto label_40;
	}
	{
	LINE_NUMBER(995);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_showed = (jint(1));
	LINE_NUMBER(996);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((func_mindustry_type_Sector_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Sector_name_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\ue876 [accent]\u0001"_j.string, 1, sp[1].o);
	((func_mindustry_core_UI_announce_java_lang_String_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_announce_java_lang_String_float])(ctx, sp[0].o, sp[1].o, (jfloat(2)));
	}
label_40:;
	{
	LINE_NUMBER(999);
	if ((floatCompare(((jfloat)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_presetShow), (clinit_mindustry_ui_dialogs_PlanetDialog(ctx), (jfloat)SF_mindustry_ui_dialogs_PlanetDialog_sectorShowDuration), -1)) <= 0) goto label_34;
	}
	{
	LINE_NUMBER(1000);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_newPresets;
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, sp[0].o);
	LINE_NUMBER(1001);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_showed = (jint(0));
	LINE_NUMBER(1002);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_presetShow = (jfloat(0));
	}
label_34:;
	{
	LINE_NUMBER(1006);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet;
	jint temp0 = (jint)((func_mindustry_type_Planet_hasGrid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_hasGrid_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_46;
	}
	{
	LINE_NUMBER(1007);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((func_arc_scene_Scene_getDialog_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Scene_getDialog_R_arc_scene_ui_Dialog])(ctx, sp[1].o);
	sp += 1;
	if (sp[0].o != (frame[0].o)) goto label_48;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_planets;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK(sp[1].o))->F_cam;
	sp[1].o = (jobject)((func_arc_graphics_g3d_Camera3D_getMouseRay_R_arc_math_geom_Ray) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g3d_Camera3D_getMouseRay_R_arc_math_geom_Ray])(ctx, sp[1].o);
	jfloat temp0 = jfloat(1.17f);
	sp[2].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[2].o))->F_planet;
	sp[0].o = (jobject)((func_mindustry_type_Planet_getSector_arc_math_geom_Ray_float_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_getSector_arc_math_geom_Ray_float_R_mindustry_type_Sector])(ctx, sp[0].o, sp[1].o, (temp0 * ((jfloat)((mindustry_type_Planet *) NULL_CHECK(sp[2].o))->F_radius)));
	sp += 1;
	goto label_49;
	}
label_48:;
	INST_ACONST_NULL();
label_49:;
	sp -= 2;
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_hovered = (jref) sp[1].o;
	goto label_50;
label_46:;
	{
	LINE_NUMBER(1008);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet;
	jint temp0 = (jint)((func_mindustry_type_Planet_isLandable_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_isLandable_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_51;
	}
	{
	LINE_NUMBER(1009);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected;
	if (sp[0].o != nullptr) goto label_53;
	}
	INST_ICONST(1);
	goto label_54;
label_53:;
	INST_ICONST(0);
label_54:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(1012);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[2].o))->F_planet;
	sp[2].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[2].o))->F_sectors;
	sp[2].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[2].o);
	sp[2].o = checkCast(ctx, &class_mindustry_type_Sector, sp[2].o);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[1].o))->F_selected = (jref) sp[2].o;
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_hovered = (jref) sp[2].o;
	LINE_NUMBER(1015);
	if ((frame[2].i) == 0) goto label_57;
	}
	{
	LINE_NUMBER(1016);
	((func_mindustry_ui_dialogs_PlanetDialog_updateSelected) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_updateSelected])(ctx, (frame[0].o));
	}
label_57:;
	LINE_NUMBER(1018);
	goto label_50;
label_51:;
	{
	LINE_NUMBER(1019);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = jobject(nullptr);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[1].o))->F_selected = (jref) sp[2].o;
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_hovered = (jref) sp[2].o;
	}
label_50:;
	{
	LINE_NUMBER(1022);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_zoom), ((jfloat)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_zoom), (jfloat(0.4f)));
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_zoom = temp0;
	LINE_NUMBER(1023);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	jfloat temp1 = (jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_uiAlpha;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	jobject temp2 = sp[1].o;
	sp[1].f = temp1;
	sp += 2;
	if ((floatCompare(((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(temp2))->F_zoom), (jfloat(1.9f)), 1)) >= 0) goto label_60;
	}
	INST_ICONST(1);
	goto label_61;
label_60:;
	INST_ICONST(0);
label_61:;
	{
	sp -= 3;
	jint temp0 = (jint)SM_arc_math_Mathf_num_boolean_R_int(ctx, sp[2].i);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, sp[1].f, (jfloat(temp0)), (jfloat(0.1f)));
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_uiAlpha = temp1;
	LINE_NUMBER(1024);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_displayItems_arc_scene_ui_layout_Table_arc_struct_ObjectMap_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:displayItems", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1027);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_40(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_40 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_40);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_PlanetDialog_displayItems_arc_scene_ui_layout_Table_arc_struct_ObjectMap_java_lang_String_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_displayItems_arc_scene_ui_layout_Table_arc_struct_ObjectMap_java_lang_String_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1028);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_displayItems_arc_scene_ui_layout_Table_arc_struct_ObjectMap_java_lang_String_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:displayItems", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(1031);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1033);
	frame[6].i = (jint(0));
	LINE_NUMBER(1034);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(1035);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_mindustry_game_SectorInfo$ExportStat, sp[0].o));
	LINE_NUMBER(1036);
	if ((frame[9].o) != nullptr) goto label_7;
	}
	goto label_3;
label_7:;
	{
	LINE_NUMBER(1037);
	frame[10].i = (jint((((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[9].o)))->F_mean) * (jfloat(60.0f)))));
	LINE_NUMBER(1038);
	if ((frame[10].i) <= (jint(1))) goto label_9;
	}
	{
	LINE_NUMBER(1039);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[8].o)))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	LINE_NUMBER(1040);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)SM_mindustry_core_UI_formatAmount_long_R_java_lang_String(ctx, (jlong((frame[10].i))));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"unit.perminute"_j))));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 \u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	LINE_NUMBER(1041);
	INST_IINC(6, 1);
	if (((frame[6].i) % (jint(3))) != 0) goto label_9;
	}
	{
	LINE_NUMBER(1042);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o));
	}
label_9:;
	LINE_NUMBER(1045);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(1047);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[5].o));
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(1048);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(1049);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[3].o));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(1050);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o), (frame[1].o));
	LINE_NUMBER(1051);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_14:;
	LINE_NUMBER(1053);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_showStats_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:showStats", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1056);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	sp[1].o = (jobject)((func_mindustry_type_Sector_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_name_R_java_lang_String])(ctx, (frame[1].o));
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1058);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_41(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_41 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_41);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1140);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[2].o));
	LINE_NUMBER(1142);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(1143);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@sector.abandon"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_cancel;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_41(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_41 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_41);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_4:;
	{
	LINE_NUMBER(1146);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[2].o));
	LINE_NUMBER(1147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_abandonSectorConfirm_mindustry_type_Sector_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:abandonSectorConfirm", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1150);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@sector.abandon.confirm"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_42(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_42 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_42);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1171);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_addSurvivedInfo_mindustry_type_Sector_arc_scene_ui_layout_Table_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:addSurvivedInfo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1174);
	if ((frame[3].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1175);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@sectors.underattack"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrapLabel_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrapLabel_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[3].i));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(1177);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_selectSector_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:selectSector", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1180);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected = (jref) (frame[1].o);
	LINE_NUMBER(1181);
	((func_mindustry_ui_dialogs_PlanetDialog_updateSelected) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_updateSelected])(ctx, (frame[0].o));
	LINE_NUMBER(1182);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_updateSelected(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:updateSelected", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1185);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1186);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_sectorTop;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1188);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1189);
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, (frame[2].o));
	LINE_NUMBER(1190);
	((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_visible = (jint(0));
	LINE_NUMBER(1191);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(1193);
	((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_visible = (jint(1));
	LINE_NUMBER(1195);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Table_getX_int_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getX_int_R_float])(ctx, (frame[2].o), (jint(1)));
	frame[3].f = temp0;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_layout_Table_getY_int_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getY_int_R_float])(ctx, (frame[2].o), (jint(1)));
	frame[4].f = temp1;
	LINE_NUMBER(1196);
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, (frame[2].o));
	LINE_NUMBER(1197);
	sp[0].o = frame[2].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black6;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1199);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_42(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_42 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_42);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1280);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(1282);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(1284);
	jint temp2 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_isLocked_mindustry_type_Sector_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_isLocked_mindustry_type_Sector_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	frame[5].i = temp2;
	LINE_NUMBER(1286);
	if ((frame[5].i) == 0) goto label_16;
	}
	{
	LINE_NUMBER(1287);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_43(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_43 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_43);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1297);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	goto label_19;
	}
label_16:;
	{
	LINE_NUMBER(1298);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_19;
	}
	{
	LINE_NUMBER(1299);
	sp[0].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"sectors.threat"_j))));
	sp[2].o = (jobject)((func_mindustry_type_Sector_displayThreat_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_displayThreat_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 [accent]\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_19:;
	{
	LINE_NUMBER(1302);
	jint temp0 = (jint)((func_mindustry_type_Sector_isAttacked_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_isAttacked_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_21;
	}
	{
	LINE_NUMBER(1303);
	((func_mindustry_ui_dialogs_PlanetDialog_addSurvivedInfo_mindustry_type_Sector_arc_scene_ui_layout_Table_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_addSurvivedInfo_mindustry_type_Sector_arc_scene_ui_layout_Table_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	goto label_23;
	}
label_21:;
	{
	LINE_NUMBER(1304);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_campaignRules;
	if (((jint)((mindustry_game_CampaignRules *) NULL_CHECK(sp[0].o))->F_sectorInvasion) == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((func_mindustry_type_Sector_near_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_near_R_arc_struct_Seq])(ctx, (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_18(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_18 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_18);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(1305);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@sectors.vulnerable"_j))));
	LINE_NUMBER(1306);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(1307);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_23;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_hasEnemyBase_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_hasEnemyBase_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_23;
	}
	{
	LINE_NUMBER(1308);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@sectors.enemybase"_j))));
	LINE_NUMBER(1309);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	}
label_23:;
	{
	LINE_NUMBER(1312);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_save;
	if (sp[0].o == nullptr) goto label_29;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_resources;
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(1313);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_44(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_44 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_44);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(10.0f);
	LINE_NUMBER(1319);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_29:;
	{
	LINE_NUMBER(1322);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(1324);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(1325);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@stats"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_info;
	clinit_mindustry_ui_Styles(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_Styles_cleart;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_43(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_43 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_43);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_33:;
	{
	LINE_NUMBER(1328);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_35;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_look;
	if (sp[0].o == sp[1].o) goto label_36;
	}
label_35:;
	{
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_canSelect_mindustry_type_Sector_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_canSelect_mindustry_type_Sector_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_36;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_37;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (((jint)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_alwaysUnlocked) != 0) goto label_36;
	}
label_37:;
	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	(sp++)->i = SF_mindustry_ui_dialogs_PlanetDialog_debugSelect;
	if ((--sp)->i == 0) goto label_38;
label_36:;
	{
	LINE_NUMBER(1329);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_showSectorSubmissions) == 0) goto label_39;
	}
	{
	LINE_NUMBER(1330);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_getSectorThread_mindustry_type_Sector_R_java_lang_String(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1331);
	if ((frame[6].o) == nullptr) goto label_39;
	}
	{
	LINE_NUMBER(1332);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@sectors.viewsubmission"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_link;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_44(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_44 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_44);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(1334);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(54.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(170.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_39:;
	{
	LINE_NUMBER(1338);
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_hasNoCandidate_mindustry_type_Sector_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_hasNoCandidate_mindustry_type_Sector_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(1340);
	sp[0].o = frame[2].o;
	LINE_NUMBER(1341);
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_select;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_46;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@sectors.select"_j));
	goto label_47;
label_46:;
	{
	LINE_NUMBER(1342);
	jint temp0 = (jint)((func_mindustry_type_Sector_isBeingPlayed_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_isBeingPlayed_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_48;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@sectors.resume"_j));
	goto label_47;
label_48:;
	{
	LINE_NUMBER(1343);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_49;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@sectors.go"_j));
	goto label_47;
label_49:;
	{
	LINE_NUMBER(1344);
	if ((frame[5].i) == 0) goto label_50;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@locked"_j));
	goto label_47;
label_50:;
	{
	LINE_NUMBER(1345);
	if ((frame[6].i) == 0) goto label_51;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@sectors.nolaunchcandidate"_j));
	goto label_47;
label_51:;
	LINE_NUMBER(1346);
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@sectors.launch"_j));
label_47:;
	{
	LINE_NUMBER(1347);
	if ((frame[5].i) == 0) goto label_52;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_lock;
	goto label_53;
label_52:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_play;
label_53:;
	{
	sp -= 3;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_45(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_45 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_45);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	LINE_NUMBER(1340);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(1347);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(54.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(170.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp += 1;
	if ((frame[5].i) != 0) goto label_56;
	}
	INST_ILOAD(6);
	if ((--sp)->i == 0) goto label_57;
label_56:;
	INST_ICONST(1);
	goto label_58;
label_57:;
	INST_ICONST(0);
label_58:;
	POP_N(2); // Pop method args
	sp->o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].i);
	sp++;
	INST_POP();
label_38:;
	{
	LINE_NUMBER(1350);
	((func_arc_scene_ui_layout_Table_pack) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_pack])(ctx, (frame[2].o));
	LINE_NUMBER(1351);
	((func_arc_scene_ui_layout_Table_setPosition_float_float_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_setPosition_float_float_int])(ctx, (frame[2].o), (frame[3].f), (frame[4].f), (jint(1)));
	LINE_NUMBER(1353);
	((func_arc_scene_ui_layout_Table_act_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_act_float])(ctx, (frame[2].o), (jfloat(0)));
	LINE_NUMBER(1354);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_PlanetDialog_hasNoCandidate_mindustry_type_Sector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:hasNoCandidate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1357);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[1].o = (jobject)((func_mindustry_type_Planet_getStartSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Planet_getStartSector_R_mindustry_type_Sector])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_PlanetDialog_findLauncher_mindustry_type_Sector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_findLauncher_mindustry_type_Sector_R_mindustry_type_Sector])(ctx, (frame[0].o), (frame[1].o));
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

jbool M_mindustry_ui_dialogs_PlanetDialog_isLocked_mindustry_type_Sector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:isLocked", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1361);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	jint temp0 = (jint)((func_mindustry_type_SectorPreset_locked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_SectorPreset_locked_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_techNode;
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

jbool M_mindustry_ui_dialogs_PlanetDialog_canPlaySector_mindustry_type_Sector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:canPlaySector", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1365);
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_isLocked_mindustry_type_Sector_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_isLocked_mindustry_type_Sector_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_hasNoCandidate_mindustry_type_Sector_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_hasNoCandidate_mindustry_type_Sector_R_boolean])(ctx, (frame[0].o), (frame[1].o));
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

void M_mindustry_ui_dialogs_PlanetDialog_playSelected(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:playSelected", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1369);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected;
	if (sp[0].o != nullptr) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(1371);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1373);
	jint temp0 = (jint)((func_mindustry_type_Sector_isBeingPlayed_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_isBeingPlayed_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(1375);
	((func_mindustry_ui_dialogs_PlanetDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(1376);
	popStackFrame(ctx);
	return;
	}
label_7:;
	{
	LINE_NUMBER(1379);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_requireUnlock) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	jint temp0 = (jint)((func_mindustry_type_SectorPreset_locked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_SectorPreset_locked_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_techNode;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_10;
	}
	LINE_NUMBER(1380);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(1383);
	frame[2].i = (jint(1));
	LINE_NUMBER(1386);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_saves;
	sp[0].o = (jobject)((func_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_select;
	if (sp[0].o == sp[1].o) goto label_13;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1388);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_saves;
	sp[0].o = (jobject)((func_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot])(ctx, sp[0].o);
	((func_mindustry_game_Saves$SaveSlot_save) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_save])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1392);
	goto label_13;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1389);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1390);
	((func_java_lang_Throwable_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Throwable_printStackTrace])(ctx, (frame[3].o));
	LINE_NUMBER(1391);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"savefail"_j))));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[accent]\u0001"_j.string, 1, sp[1].o);
	((func_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	}
label_13:;
	{
	LINE_NUMBER(1395);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_look;
	if (sp[0].o != sp[1].o) goto label_16;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_16;
	}
	{
	LINE_NUMBER(1396);
	frame[2].i = (jint(0));
	LINE_NUMBER(1397);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_PlanetDialog_findLauncher_mindustry_type_Sector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_findLauncher_mindustry_type_Sector_R_mindustry_type_Sector])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1399);
	if ((frame[3].o) != nullptr) goto label_20;
	}
	{
	LINE_NUMBER(1401);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_universe;
	((func_mindustry_game_Universe_clearLoadoutInfo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Universe_clearLoadoutInfo])(ctx, sp[0].o);
	LINE_NUMBER(1403);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	((func_mindustry_core_Control_playSector_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Control_playSector_mindustry_type_Sector])(ctx, sp[0].o, (frame[1].o));
	goto label_23;
	}
label_20:;
	{
	LINE_NUMBER(1405);
	jint temp0 = (jint)((func_mindustry_type_Sector_allowLaunchSchematics_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_allowLaunchSchematics_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[3].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_bestCoreType;
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_world_blocks_storage_CoreBlock)) == 0) goto label_25;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock, (frame[6].o)));
	sp[0].o = frame[5].o;
	sp += 1;
	goto label_27;
	}
label_25:;
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[3].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_defaultCore;
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock, sp[0].o);
	sp += 1;
	goto label_27;
	}
label_24:;
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[3].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_defaultCore;
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock, sp[0].o);
	sp += 1;
	}
label_27:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1407);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_loadouts;
	sp[1].o = frame[4].o;
	sp[2].o = frame[3].o;
	sp[3].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_46(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_46 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_46);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_LaunchLoadoutDialog_show_mindustry_world_blocks_storage_CoreBlock_mindustry_type_Sector_mindustry_type_Sector_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_LaunchLoadoutDialog_show_mindustry_world_blocks_storage_CoreBlock_mindustry_type_Sector_mindustry_type_Sector_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	}
label_23:;
	LINE_NUMBER(1445);
	goto label_29;
label_16:;
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_select;
	if (sp[0].o == sp[1].o) goto label_30;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_planetLaunch;
	if (sp[0].o != sp[1].o) goto label_31;
	}
label_30:;
	{
	LINE_NUMBER(1446);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_listener;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	goto label_29;
	}
label_31:;
	{
	LINE_NUMBER(1449);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	((func_mindustry_core_Control_playSector_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Control_playSector_mindustry_type_Sector])(ctx, sp[0].o, (frame[1].o));
	}
label_29:;
	{
	LINE_NUMBER(1452);
	if ((frame[2].i) == 0) goto label_32;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_mindustry_ui_dialogs_PlanetDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_hide])(ctx, sp[0].o);
label_32:;
	LINE_NUMBER(1453);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$playSelected$0_mindustry_type_Sector_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$playSelected$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1408);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_universe;
	sp[0].o = (jobject)((func_mindustry_game_Universe_getLastLoadout_R_mindustry_game_Schematic) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Universe_getLastLoadout_R_mindustry_game_Schematic])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1409);
	sp[0].o = (jobject)((func_mindustry_game_Schematic_findCore_R_mindustry_world_blocks_storage_CoreBlock) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_game_Schematic_findCore_R_mindustry_world_blocks_storage_CoreBlock])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1410);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_game_Schematic_requirements_R_mindustry_type_ItemSeq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_game_Schematic_requirements_R_mindustry_type_ItemSeq])(ctx, (frame[3].o));
	((func_mindustry_type_Sector_removeItems_mindustry_type_ItemSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_removeItems_mindustry_type_ItemSeq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1411);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_universe;
	sp[1].o = (jobject)((func_mindustry_game_Universe_getLaunchResources_R_mindustry_type_ItemSeq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Universe_getLaunchResources_R_mindustry_type_ItemSeq])(ctx, sp[1].o);
	((func_mindustry_type_Sector_removeItems_mindustry_type_ItemSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_removeItems_mindustry_type_ItemSeq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1413);
	clinit_mindustry_game_EventType$SectorLaunchLoadoutEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$SectorLaunchLoadoutEvent);
	init_mindustry_game_EventType$SectorLaunchLoadoutEvent_mindustry_type_Sector_mindustry_type_Sector_mindustry_game_Schematic(ctx, sp[0].o, (frame[2].o), (frame[1].o), (frame[3].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(1415);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1416);
	if ((frame[5].o) == nullptr) goto label_7;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"skipcoreanimation"_j))));
	if (temp0 == 0) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(1418);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	((func_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(1420);
	jfloat temp0 = jfloat(8.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_47(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_47 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_47);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(ctx, temp0, sp[0].o);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(1423);
	((func_mindustry_ui_dialogs_PlanetDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(1426);
	jfloat temp0 = jfloat(5.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_48(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_48 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_48);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(ctx, temp0, sp[0].o);
	}
label_10:;
	LINE_NUMBER(1443);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$playSelected$1_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_type_Sector_mindustry_type_Sector(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$playSelected$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1427);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_49(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_49 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_49);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	frame[3].o = sp[0].o;
	LINE_NUMBER(1434);
	jint temp0 = (jint)((func_mindustry_type_Sector_isBeingPlayed_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_isBeingPlayed_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(1436);
	sp[0].o = (jobject)SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(ctx, (jfloat(9.0f)), (frame[3].o));
	LINE_NUMBER(1437);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	((func_mindustry_core_Control_playSector_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Control_playSector_mindustry_type_Sector])(ctx, sp[0].o, (frame[1].o));
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(1439);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[3].o)))(ctx, (frame[3].o));
	}
label_5:;
	LINE_NUMBER(1441);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$playSelected$2_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_type_Sector_mindustry_type_Sector(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$playSelected$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1428);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	((func_mindustry_core_Renderer_showLaunch_mindustry_world_blocks_LaunchAnimator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_showLaunch_mindustry_world_blocks_LaunchAnimator])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1430);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_launchDuration_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_launchDuration_R_float])(ctx, (frame[0].o));
	jfloat temp1 = temp0 - (jfloat(8.0f));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_50(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_50 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_50);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(ctx, temp1, sp[0].o);
	LINE_NUMBER(1431);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$playSelected$3_mindustry_type_Sector_mindustry_type_Sector(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$playSelected$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1430);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	((func_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$8_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$updateSelected$8", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1333);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_openURI_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_openURI_java_lang_String_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1334);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$7_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$updateSelected$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1325);
	((func_mindustry_ui_dialogs_PlanetDialog_showStats_mindustry_type_Sector) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_showStats_mindustry_type_Sector])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$6_mindustry_type_Sector_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$updateSelected$6", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1314);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@sectors.resources"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(1315);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_resources;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[0].o));
	LINE_NUMBER(1316);
	if ((frame[3].o) != nullptr) goto label_5;
	}
	goto label_2;
label_5:;
	{
	LINE_NUMBER(1317);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[3].o)))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(24.0f)));
	LINE_NUMBER(1318);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(1319);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$5_mindustry_type_Sector_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$updateSelected$5", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1304);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasEnemyBase_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_hasEnemyBase_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_requireUnlock) != 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$4_mindustry_type_Sector_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$updateSelected$4", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1288);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@complete"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(1289);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1290);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_techNode;
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_objectives;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_game_Objectives$Objective, sp[0].o));
	LINE_NUMBER(1291);
	jint temp0 = (jint)((func_mindustry_game_Objectives$Objective_complete_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_game_Objectives$Objective, INDEX_mindustry_game_Objectives$Objective_complete_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_6;
	}
	goto label_3;
label_6:;
	{
	LINE_NUMBER(1293);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_game_Objectives$Objective_display_R_java_lang_String) resolveInterfaceMethod(ctx, &class_mindustry_game_Objectives$Objective, INDEX_mindustry_game_Objectives$Objective_display_R_java_lang_String, (frame[3].o)))(ctx, (frame[3].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"> \u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(1294);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_mindustry_game_Objectives$Objective_complete_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_game_Objectives$Objective, INDEX_mindustry_game_Objectives$Objective_complete_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	sp += 1;
	if (temp0 == 0) goto label_8;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_ok;
	goto label_9;
label_8:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_cancel;
label_9:;
	{
	jint temp0 = (jint)((func_mindustry_game_Objectives$Objective_complete_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_game_Objectives$Objective, INDEX_mindustry_game_Objectives$Objective_complete_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_10;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_lightGray;
	goto label_11;
label_10:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_scarlet;
label_11:;
	{
	sp -= 3;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	LINE_NUMBER(1295);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1296);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(1297);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$0_mindustry_type_Sector_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$updateSelected$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1200);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_type_Sector_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_name_R_java_lang_String])(ctx, (frame[1].o));
	sp += 2;
	if ((clinit_mindustry_ui_dialogs_PlanetDialog(ctx), (jint)SF_mindustry_ui_dialogs_PlanetDialog_debugSelect) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_name;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_1;
	}
label_2:;
	{
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8" [lightgray](\u0001)"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_id)));
	sp += 1;
	goto label_3;
	}
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_3:;
	{
	sp -= 3;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[accent]\u0001\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	LINE_NUMBER(1201);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_requireUnlock) != 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(1202);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(1204);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_pencilSmall;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNonei;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_51(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_51 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_51);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(40.0f);
	LINE_NUMBER(1210);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	}
label_6:;
	{
	LINE_NUMBER(1213);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_contentIcon;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(1214);
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	sp[1].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[1].o))->F_contentIcon;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_uiIcon;
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(1215);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	sp[1].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[1].o))->F_icon;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001Small"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp[0].o = checkCast(ctx, &class_arc_scene_style_TextureRegionDrawable, sp[0].o);
	sp += 1;
	}
label_11:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1217);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[3].o) != nullptr) goto label_13;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_noneSmall;
	goto label_14;
label_13:;
	INST_ALOAD(3);
label_14:;
	{
	sp -= 2;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNonei;
	jfloat temp0 = jfloat(24.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_52(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_52 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_52);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	jfloat temp1 = jfloat(40.0f);
	LINE_NUMBER(1279);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@sector.changeicon"_j))));
	LINE_NUMBER(1280);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$3_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$updateSelected$3", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1219);
	clinit_mindustry_ui_dialogs_PlanetDialog$6(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog$6);
	init_mindustry_ui_dialogs_PlanetDialog$6_mindustry_ui_dialogs_PlanetDialog_java_lang_String_mindustry_type_Sector(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))), (frame[1].o));
	LINE_NUMBER(1278);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_PlanetDialog$6_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog$6_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(1279);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$1_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$updateSelected$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1205);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@sectors.rename"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@name"_j));
	jint temp0 = 32;
	sp[3].o = (jobject)((func_mindustry_type_Sector_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_name_R_java_lang_String])(ctx, (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_45(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_45 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_45);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o);
	LINE_NUMBER(1210);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$2_mindustry_type_Sector_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$updateSelected$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1206);
	((func_mindustry_type_Sector_setName_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_setName_java_lang_String])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(1207);
	((func_mindustry_ui_dialogs_PlanetDialog_updateSelected) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_updateSelected])(ctx, (frame[0].o));
	LINE_NUMBER(1208);
	((func_mindustry_ui_dialogs_PlanetDialog_rebuildList) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_rebuildList])(ctx, (frame[0].o));
	LINE_NUMBER(1209);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$abandonSectorConfirm$0_java_lang_Runnable_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$abandonSectorConfirm$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1151);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(1153);
	jint temp0 = (jint)((func_mindustry_type_Sector_isBeingPlayed_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Sector_isBeingPlayed_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1154);
	((func_mindustry_ui_dialogs_PlanetDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(1156);
	jfloat temp0 = jfloat(7.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_53(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_53 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_53);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(ctx, temp0, sp[0].o);
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(1163);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_items;
	((func_mindustry_type_ItemSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(1164);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_info;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_hasCore = (jint(0));
	LINE_NUMBER(1165);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_production;
	((func_arc_struct_ObjectMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(1166);
	((func_mindustry_type_Sector_saveInfo) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Sector_saveInfo])(ctx, (frame[2].o));
	}
label_5:;
	{
	LINE_NUMBER(1168);
	((func_mindustry_ui_dialogs_PlanetDialog_updateSelected) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_updateSelected])(ctx, (frame[0].o));
	LINE_NUMBER(1169);
	((func_mindustry_ui_dialogs_PlanetDialog_rebuildList) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_rebuildList])(ctx, (frame[0].o));
	LINE_NUMBER(1170);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$abandonSectorConfirm$1(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$abandonSectorConfirm$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	{
	LINE_NUMBER(1158);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Team_cores_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_copy_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[0].o));
	LINE_NUMBER(1159);
	((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_kill) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_kill])(ctx, (frame[1].o));
	LINE_NUMBER(1160);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(1161);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$showStats$7_mindustry_type_Sector_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$showStats$7", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1143);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_54(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_54 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_54);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_PlanetDialog_abandonSectorConfirm_mindustry_type_Sector_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_abandonSectorConfirm_mindustry_type_Sector_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$showStats$0_mindustry_type_Sector_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$showStats$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1059);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(1061);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_description;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1062);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	sp[1].o = (jobject)((func_mindustry_type_SectorPreset_displayDescription_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_SectorPreset_displayDescription_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(420.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(1065);
	sp[0].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"sectors.time"_j))));
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_save;
	sp[2].o = (jobject)((func_mindustry_game_Saves$SaveSlot_getPlayTime_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_getPlayTime_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 [accent]\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(1067);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	if (((jint)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_attempts) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(1068);
	sp[0].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"sectors.attempts"_j))));
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 [accent]\u0001"_j.string, 2, sp[1].o, boxInteger(ctx, ((jint)((mindustry_game_SectorInfo *) NULL_CHECK(sp[2].o))->F_attempts)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_5:;
	{
	LINE_NUMBER(1071);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	if (((jint)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(1072);
	sp[0].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"sectors.wave"_j))));
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 [accent]\u0001"_j.string, 2, sp[1].o, boxInteger(ctx, ((jint)((mindustry_game_SectorInfo *) NULL_CHECK(sp[2].o))->F_wave)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_7:;
	{
	LINE_NUMBER(1075);
	jint temp0 = (jint)((func_mindustry_type_Sector_isAttacked_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_isAttacked_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(1076);
	sp[0].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"sectors.threat"_j))));
	sp[2].o = (jobject)((func_mindustry_type_Sector_displayThreat_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_displayThreat_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 [accent]\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_10:;
	{
	LINE_NUMBER(1079);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_save;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_resources;
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(1080);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@sectors.resources"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(1081);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_46(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_46 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_46);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(10.0f);
	LINE_NUMBER(1086);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_11:;
	{
	LINE_NUMBER(1089);
	jint temp0 = (jint)((func_mindustry_type_Sector_isAttacked_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_isAttacked_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_15;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_isBeingPlayed_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_isBeingPlayed_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(1091);
	if ((frame[3].i) == 0) goto label_18;
	}
	{
	LINE_NUMBER(1092);
	sp[0].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"sector.lockdown"_j))));
	sp[1].o = (jobject)SM_mindustry_core_UI_formatIcons_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_18:;
	{
	LINE_NUMBER(1096);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	sp[2].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[2].o))->F_production;
	((func_mindustry_ui_dialogs_PlanetDialog_displayItems_arc_scene_ui_layout_Table_arc_struct_ObjectMap_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_displayItems_arc_scene_ui_layout_Table_arc_struct_ObjectMap_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"@sectors.production"_j))));
	LINE_NUMBER(1099);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	sp[2].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[2].o))->F_export;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"@sectors.export"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_47(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_47 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_47);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_PlanetDialog_displayItems_arc_scene_ui_layout_Table_arc_struct_ObjectMap_java_lang_String_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_displayItems_arc_scene_ui_layout_Table_arc_struct_ObjectMap_java_lang_String_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1107);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(1108);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	sp[2].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[2].o))->F_imports;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"@sectors.import"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_48(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_48 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_48);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_PlanetDialog_displayItems_arc_scene_ui_layout_Table_arc_struct_ObjectMap_java_lang_String_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_displayItems_arc_scene_ui_layout_Table_arc_struct_ObjectMap_java_lang_String_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	}
label_22:;
	{
	LINE_NUMBER(1116);
	sp[0].o = (jobject)((func_mindustry_type_Sector_items_R_mindustry_type_ItemSeq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_items_R_mindustry_type_ItemSeq])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1119);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_25;
	}
	{
	if (((jint)((mindustry_type_ItemSeq *) NULL_CHECK((frame[4].o)))->F_total) <= 0) goto label_25;
	}
	{
	LINE_NUMBER(1121);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@sectors.stored"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(1122);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_49(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_49 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_49);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1136);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_25:;
	LINE_NUMBER(1138);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$showStats$5_mindustry_type_ItemSeq_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$showStats$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1123);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1125);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_50(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_50 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_50);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(10.0f);
	LINE_NUMBER(1135);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$showStats$6_mindustry_type_ItemSeq_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$showStats$6", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1127);
	frame[2].i = (jint(0));
	LINE_NUMBER(1128);
	sp[0].o = (jobject)((func_mindustry_type_ItemSeq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_ItemSeq_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_ItemStack, sp[0].o));
	LINE_NUMBER(1129);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[4].o)))->F_item;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	LINE_NUMBER(1130);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[4].o)))->F_amount), (jint(0)));
	sp[1].o = (jobject)SM_mindustry_core_UI_formatAmount_long_R_java_lang_String(ctx, (jlong(temp0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1131);
	INST_IINC(2, 1);
	if (((frame[2].i) % (jint(4))) != 0) goto label_7;
	}
	{
	LINE_NUMBER(1132);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_7:;
	LINE_NUMBER(1134);
	goto label_2;
label_3:;
	LINE_NUMBER(1135);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$showStats$3_mindustry_type_Sector_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$showStats$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1109);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_51(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_51 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_51);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_game_SectorInfo_eachImport_mindustry_type_Planet_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_eachImport_mindustry_type_Planet_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1113);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$showStats$4_arc_scene_ui_layout_Table_mindustry_type_Sector(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$showStats$4", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1110);
	sp[0].o = (jobject)((func_mindustry_type_Sector_iconChar_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_iconChar_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1111);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_4;
label_3:;
	INST_ALOAD(2);
	POP_N(1); // Pop string concat args
	(sp++)->o = (jobject)concatStringsRecipe(ctx, u8"\u0001 "_j.string, 1, sp[0].o);
label_4:;
	{
	sp -= 2;
	sp[2].o = (jobject)((func_mindustry_type_Sector_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_name_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\ue83a \u0001\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(1112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$showStats$2_mindustry_type_Sector_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$showStats$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1100);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_destination;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_destination;
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1101);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_destination;
	sp[0].o = (jobject)((func_mindustry_type_Sector_iconChar_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_iconChar_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1102);
	sp[0].o = frame[1].o;
	sp += 1;
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
label_4:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_6;
label_5:;
	INST_ALOAD(2);
	POP_N(1); // Pop string concat args
	(sp++)->o = (jobject)concatStringsRecipe(ctx, u8"\u0001 "_j.string, 1, sp[0].o);
label_6:;
	{
	sp -= 2;
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[2].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[2].o))->F_destination;
	sp[2].o = (jobject)((func_mindustry_type_Sector_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_type_Sector_name_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\ue83a \u0001\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(1104);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$showStats$1_mindustry_type_Sector_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$showStats$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1082);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_resources;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[0].o));
	LINE_NUMBER(1083);
	if ((frame[3].o) != nullptr) goto label_4;
	}
	goto label_1;
label_4:;
	{
	LINE_NUMBER(1084);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[3].o)))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(24.0f)));
	LINE_NUMBER(1085);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(1086);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$displayItems$0_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$displayItems$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	LINE_NUMBER(1027);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$2_arc_struct_Seq_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$rebuildList$2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(809);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Runnable, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[3].o = sp[0].o;
	LINE_NUMBER(811);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_52(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_52 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_52);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(817);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(819);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[4].o = (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o));
	LINE_NUMBER(820);
	sp[0].o = frame[4].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(822);
	sp[0].o = frame[3].o;
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_55(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_55 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_55);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(864);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))));
	LINE_NUMBER(865);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$5_arc_scene_ui_layout_Table_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$rebuildList$5", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(823);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[1].o));
	LINE_NUMBER(824);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(825);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_searchText;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_mindustry_type_Sector_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_type_Sector_name_R_java_lang_String])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_searchText;
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(826);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_53(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_53 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_53);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_underlineb;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_56(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_56 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_56);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(8.0f);
	LINE_NUMBER(854);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(13.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_19(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_19 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_19);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_5:;
	LINE_NUMBER(857);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(859);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(860);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@none.found"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	}
label_8:;
	LINE_NUMBER(862);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$10_mindustry_type_Sector_arc_scene_ui_Button_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$rebuildList$10", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(854);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected;
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

void M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$9_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$rebuildList$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(851);
	((func_mindustry_ui_dialogs_PlanetDialog_lookAt_mindustry_type_Sector) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_lookAt_mindustry_type_Sector])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(852);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_selected = (jref) (frame[1].o);
	LINE_NUMBER(853);
	((func_mindustry_ui_dialogs_PlanetDialog_updateSelected) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_updateSelected])(ctx, (frame[0].o));
	LINE_NUMBER(854);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$6_mindustry_type_Sector_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$rebuildList$6", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(827);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_marginRight_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Button_marginRight_float_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o), (jfloat(10.0f)));
	LINE_NUMBER(828);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Button_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(829);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Button_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(831);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_54(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_54 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_54);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(845);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(847);
	jint temp0 = (jint)((func_mindustry_type_Sector_isAttacked_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_isAttacked_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(848);
	((func_mindustry_ui_dialogs_PlanetDialog_addSurvivedInfo_mindustry_type_Sector_arc_scene_ui_layout_Table_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_addSurvivedInfo_mindustry_type_Sector_arc_scene_ui_layout_Table_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)));
	}
label_6:;
	LINE_NUMBER(850);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$7_mindustry_type_Sector_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$rebuildList$7", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(832);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(834);
	jint temp0 = (jint)((func_mindustry_type_Sector_isAttacked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_isAttacked_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(835);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_warningSmall;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_55(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_55 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_55);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(4.0f);
	LINE_NUMBER(837);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(838);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_requireUnlock) == 0) goto label_5;
	}
	{
	LINE_NUMBER(839);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(24.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	}
label_5:;
	{
	LINE_NUMBER(842);
	sp[0].o = (jobject)((func_mindustry_type_Sector_iconChar_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_iconChar_R_java_lang_String])(ctx, (frame[0].o));
	if (sp[0].o != nullptr) goto label_7;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_8;
label_7:;
	{
	sp[0].o = (jobject)((func_mindustry_type_Sector_iconChar_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_iconChar_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 "_j.string, 1, sp[0].o);
	sp += 1;
	}
label_8:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(844);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((func_mindustry_type_Sector_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(845);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$8_arc_scene_ui_Image(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$rebuildList$8", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(836);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_remove;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_globalTime), (jfloat(9.0f)), (jfloat(1)));
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(837);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$3_Array1_java_lang_Runnable_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$rebuildList$3", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(812);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_zoom;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(813);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_searchText;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_56(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_56 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_56);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(816);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(50.0f)));
	LINE_NUMBER(817);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$4_Array1_java_lang_Runnable_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$rebuildList$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(814);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_searchText = (jref) (frame[2].o);
	LINE_NUMBER(815);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	LINE_NUMBER(816);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$1_mindustry_type_Sector_R_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$rebuildList$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(806);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_save;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_save;
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK(sp[0].o))->F_meta;
	jint temp0 = -(jint(((jlong)((mindustry_io_SaveMeta *) NULL_CHECK(sp[0].o))->F_timePlayed)));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$0_mindustry_type_Sector_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$rebuildList$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(806);
	jint temp0 = (jint)((func_mindustry_type_Sector_isAttacked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_isAttacked_R_boolean])(ctx, (frame[0].o));
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

jbool M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$6_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$rebuildExpand$6", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(796);
	popStackFrame(ctx);
	return ((jint)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_sectorsShown);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$5_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$rebuildExpand$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(792);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black8;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(794);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_notifs = (jref) (frame[1].o);
	LINE_NUMBER(795);
	((func_mindustry_ui_dialogs_PlanetDialog_rebuildList) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_rebuildList])(ctx, (frame[0].o));
	LINE_NUMBER(796);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$4_arc_scene_ui_TextButton(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$rebuildExpand$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(789);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabelCell_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabelCell_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$3_arc_scene_ui_TextButton(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$rebuildExpand$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(789);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextButton_left_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(7.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$2_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$rebuildExpand$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(786);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getCells_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getCells_R_arc_struct_Seq])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o)));
	frame[2].o = (checkCast(ctx, &class_arc_scene_ui_Image, sp[0].o));
	LINE_NUMBER(787);
	sp[0].o = frame[2].o;
	sp += 1;
	if (((jint)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_sectorsShown) == 0) goto label_2;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_upOpen;
	goto label_3;
label_2:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_downOpen;
label_3:;
	{
	sp -= 2;
	((func_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(788);
	popStackFrame(ctx);
	return ((jint)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_sectorsShown);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$rebuildExpand$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(784);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_sectorsShown) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	sp -= 2;
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_sectorsShown = sp[1].i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$0_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$rebuildExpand$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(774);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_mobile;
	if ((--sp)->i != 0) goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_planetLaunch;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$10_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$setup$10", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(767);
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_expandTable = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$9_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$setup$9", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(765);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_select;
	if (sp[0].o == sp[1].o) goto label_1;
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

void M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$2_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$setup$2", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(734);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(735);
	clinit_arc_scene_ui_ScrollPane(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ScrollPane);
	sp[1].o = jobject(nullptr);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_smallPane;
	init_arc_scene_ui_ScrollPane_arc_scene_Element_arc_scene_ui_ScrollPane$ScrollPaneStyle(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(736);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(2)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(737);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@campaign.difficulty"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_bookSmall;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_57(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_57 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_57);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(739);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(208.0f)), (jfloat(40.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(12.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolp_9(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolp_9 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolp_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(740);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(64.0f)));
	LINE_NUMBER(741);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black;
	init_arc_scene_ui_layout_Table_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(742);
	((func_arc_scene_ui_ScrollPane_setWidget_arc_scene_Element) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_setWidget_arc_scene_Element])(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(743);
	((func_arc_scene_ui_ScrollPane_setScrollingDisabled_boolean_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_setScrollingDisabled_boolean_boolean])(ctx, (frame[2].o), (jint(1)), (jint(0)));
	LINE_NUMBER(745);
	frame[4].i = (jint(0));
	LINE_NUMBER(746);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_planets_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_planets_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_type_Planet, sp[0].o));
	LINE_NUMBER(747);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[6].o)))->F_solarSystem;
	if (sp[0].o != (frame[6].o)) goto label_11;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_planets_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_planets_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_20(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_20 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_20);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_14;
	}
	goto label_11;
label_14:;
	{
	LINE_NUMBER(749);
	INST_IINC(4, 1);
	LINE_NUMBER(750);
	if ((frame[4].i) <= (jint(1))) goto label_16;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[6].o)))->F_localizedName;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(190.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_16:;
	{
	LINE_NUMBER(751);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(752);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[7].o), (jfloat(4.0f)));
	LINE_NUMBER(753);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o), (frame[7].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(754);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_planets_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_planets_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_20:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_mindustry_type_Planet, sp[0].o));
	LINE_NUMBER(755);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[9].o)))->F_solarSystem;
	if (sp[0].o != (frame[6].o)) goto label_23;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_selectable_mindustry_type_Planet_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_selectable_mindustry_type_Planet_R_boolean])(ctx, (frame[0].o), (frame[9].o));
	if (temp0 == 0) goto label_23;
	}
	{
	LINE_NUMBER(756);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[9].o)))->F_localizedName;
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[3].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[9].o)))->F_icon;
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001Small"_j.string, 1, sp[3].o);
	clinit_mindustry_gen_Icon(ctx);
	sp[4].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[5].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[9].o)))->F_icon;
	clinit_mindustry_gen_Icon(ctx);
	sp[6].o = (jobject)SF_mindustry_gen_Icon_commandRallySmall;
	sp[4].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[4].o, sp[5].o, sp[6].o);
	sp[2].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[2].o, sp[3].o, (checkCast(ctx, &class_arc_scene_style_TextureRegionDrawable, sp[4].o)));
	sp[2].o = checkCast(ctx, &class_arc_scene_style_Drawable, sp[2].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_Styles_flatTogglet;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_58(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_58 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_58);
		proxy->F_field1 = (jref) (frame[9].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(200.0f);
	LINE_NUMBER(758);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_57(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_57 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_57);
		proxy->F_field1 = (jref) (frame[9].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_58(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_58 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_58);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[10].o = (checkCast(ctx, &class_arc_scene_ui_Button, sp[0].o));
	LINE_NUMBER(759);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_Button_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[10].o));
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_get_int_R_java_lang_Object])(ctx, sp[0].o, (jint(1)));
	sp[0].o = checkCast(ctx, &class_arc_scene_Element, sp[0].o);
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[9].o)))->F_iconColor;
	((func_arc_scene_Element_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(760);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[9].o)))->F_iconColor;
	((func_arc_scene_ui_Button_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(761);
	sp[0].o = frame[7].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_pane;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	}
label_23:;
	LINE_NUMBER(763);
	goto label_20;
label_21:;
	LINE_NUMBER(764);
	goto label_11;
label_12:;
	LINE_NUMBER(765);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$setup$8_arc_scene_ui_TextButton(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$setup$8", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(758);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_marginLeft_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextButton_marginLeft_float_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (jfloat(10.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$7_mindustry_type_Planet_arc_scene_ui_TextButton(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$setup$7", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(758);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_planet;
	sp += 1;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_TextButton_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_setChecked_boolean])(ctx, sp[0].o, sp[1].i);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$6_mindustry_type_Planet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$setup$6", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(757);
	((func_mindustry_ui_dialogs_PlanetDialog_viewPlanet_mindustry_type_Planet_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_viewPlanet_mindustry_type_Planet_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(758);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$5_mindustry_type_Planet_mindustry_type_Planet_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$setup$5", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(747);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[2].o)))->F_solarSystem;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_selectable_mindustry_type_Planet_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_selectable_mindustry_type_Planet_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_1;
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

jbool M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$4_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$setup$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(739);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet;
	if (((jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_allowCampaignRules) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_planetLaunch;
	if (sp[0].o == sp[1].o) goto label_1;
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

void M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$setup$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(738);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_campaignRules;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_planet;
	((func_mindustry_ui_dialogs_CampaignRulesDialog_show_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CampaignRulesDialog_show_mindustry_type_Planet])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(739);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$setup$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(722);
	sp[0].o = frame[1].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(723);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(724);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Prov_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	LINE_NUMBER(728);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(729);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$1_R_java_lang_CharSequence(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$setup$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(725);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_select;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@sectors.select"_j));
	goto label_2;
label_1:;
	{
	LINE_NUMBER(726);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_planetLaunch;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@sectors.launchselect"_j));
	goto label_2;
label_3:;
	LINE_NUMBER(727);
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_2:;
	LINE_NUMBER(725);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$renderProjections$2_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$renderProjections$2", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(588);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	jint temp0 = (jint)((func_mindustry_type_Sector_isAttacked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_isAttacked_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_remove;
	goto label_2;
label_1:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
label_2:;
	{
	sp -= 1;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, (jfloat(5.0f)), (jfloat(1)));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(589);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_uiAlpha));
	LINE_NUMBER(592);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	jint temp1 = (jint)((func_mindustry_type_Sector_locked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_locked_R_boolean])(ctx, sp[0].o);
	if (temp1 == 0) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_canSelect_mindustry_type_Sector_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_canSelect_mindustry_type_Sector_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	sp[0].o = (jobject)((func_mindustry_maps_generators_PlanetGenerator_getLockedIcon_mindustry_type_Sector_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_PlanetGenerator_getLockedIcon_mindustry_type_Sector_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(593);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	jint temp0 = (jint)((func_mindustry_type_Sector_isAttacked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_isAttacked_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getLargeIcon_java_lang_String_R_arc_graphics_g2d_TextureRegion(ctx, (((jobject) createStringLiteral(ctx, u8"warning"_j))));
	sp += 1;
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(594);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_hovered;
	sp[0].o = (jobject)((func_mindustry_type_Sector_icon_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_icon_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(596);
	if ((frame[2].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(597);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, (frame[2].o), (jfloat(0)), (jfloat(0)), (frame[1].f), (((frame[1].f) * (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[2].o)))->F_height)))) / (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[2].o)))->F_width)))));
	}
label_9:;
	{
	LINE_NUMBER(600);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(601);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$renderProjections$1_mindustry_type_Sector(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$renderProjections$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(574);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o);
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (jfloat(0.5f)));
	LINE_NUMBER(575);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	sp += 1;
	if (sp[0].o != nullptr) goto label_2;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_scarlet;
	goto label_3;
label_2:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
label_3:;
	{
	sp -= 2;
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(577);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_id)));
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, (jfloat(0)), (jfloat(0)), (jint(1)));
	LINE_NUMBER(578);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(579);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o);
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (jfloat(1)));
	LINE_NUMBER(580);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$renderProjections$0_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_mindustry_type_Sector_arc_graphics_Color_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$renderProjections$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(566);
	if ((frame[1].o) != (frame[2].o)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[3].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_contentIcon;
	if (sp[0].o == nullptr) goto label_1;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
	goto label_2;
label_1:;
	INST_ALOAD(4);
label_2:;
	{
	sp -= 1;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_uiAlpha));
	LINE_NUMBER(567);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, (frame[2].o), (jfloat(0)), (jfloat(0)), (frame[5].f), (((frame[5].f) * (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[2].o)))->F_height)))) / (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[2].o)))->F_width)))));
	LINE_NUMBER(568);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_PlanetDialog_lambda$addTech$1_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$addTech$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_look;
	if (sp[0].o != sp[1].o) goto label_1;
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

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$addTech$0(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$addTech$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	{
	LINE_NUMBER(316);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_research;
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_ResearchDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$show$0_mindustry_type_Sector(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$show$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	LINE_NUMBER(266);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$new$9_int_arc_graphics_Texture(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$new$9", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_planetTextures;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$new$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$new$2", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(183);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"campaignselect"_j))));
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_planets_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_planets_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_21(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_21 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_21);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(184);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@campaign.select"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(186);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_type_Planet, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[2].o = sp[0].o;
	LINE_NUMBER(187);
	clinit_arc_scene_ui_ButtonGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ButtonGroup);
	init_arc_scene_ui_ButtonGroup(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(188);
	((func_arc_scene_ui_ButtonGroup_setMinCheckCount_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_ButtonGroup_setMinCheckCount_int])(ctx, (frame[3].o), (jint(0)));
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_sun;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet = (jref) sp[1].o;
	LINE_NUMBER(190);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_type_Planet, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_serpulo;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_erekir;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	frame[4].o = sp[0].o;
	LINE_NUMBER(191);
	frame[5].i = (jint(0));
	LINE_NUMBER(192);
	frame[6].o = (frame[4].o);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_12:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_13;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(193);
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_planetTextures;
	init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(195);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_59(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_59 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Cons_59);
		proxy->F_field1 = (jref) (frame[10].o);
		proxy->F_field0 = (jref) (frame[9].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_togglet;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_59(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_59 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_59);
		proxy->F_field1 = (jref) (frame[9].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(200);
	sp += 1;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_17;
	}
	(sp++)->f = jfloat(220.0f);
	goto label_18;
label_17:;
	(sp++)->f = jfloat(320.0f);
label_18:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].f);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(201);
	INST_IINC(5, 1);
	LINE_NUMBER(192);
	INST_IINC(8, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(205);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Prov_3);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(1)));
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(440.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(2)));
	LINE_NUMBER(207);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@ok"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_ok;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_60(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_60 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_60);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(300.0f);
	jfloat temp1 = jfloat(64.0f);
	LINE_NUMBER(213);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_22(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_22 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_22);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(215);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_61(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_61 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_61);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(216);
	goto label_26;
	}
label_1:;
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_hadSerpuloRemaps;
	if ((--sp)->i == 0) goto label_26;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBoolOnce_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBoolOnce_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"serpulo-remaps-notice"_j))));
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(217);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@campaign.rework.title"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(218);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@campaign.rework.serpulo"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxWidth_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxWidth_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(500.0f)));
	LINE_NUMBER(219);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@ok"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_ok;
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_62(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_62 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_62);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(280.0f)), (jfloat(64.0f)));
	LINE_NUMBER(221);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_63(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_63 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_java_lang_Runnable_63);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_26:;
	LINE_NUMBER(223);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_PlanetDialog_lambda$new$8_Array1_mindustry_type_Planet_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$new$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(213);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))) != nullptr) goto label_1;
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

void M_mindustry_ui_dialogs_PlanetDialog_lambda$new$7_Array1_mindustry_type_Planet_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$new$7", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))));
	LINE_NUMBER(209);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_planet;
	sp[1].o = (jobject)((func_mindustry_type_Planet_getStartSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Planet_getStartSector_R_mindustry_type_Sector])(ctx, sp[1].o);
	((func_mindustry_ui_dialogs_PlanetDialog_lookAt_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_lookAt_mindustry_type_Sector])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(210);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_planet;
	sp[1].o = (jobject)((func_mindustry_type_Planet_getStartSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Planet_getStartSector_R_mindustry_type_Sector])(ctx, sp[1].o);
	((func_mindustry_ui_dialogs_PlanetDialog_selectSector_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_selectSector_mindustry_type_Sector])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(211);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"campaignselect"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(212);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_PlanetDialog_lambda$new$6_Array1_mindustry_type_Planet_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$new$6", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(205);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))) != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@campaign.none"_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))))))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"@campaign.\u0001"_j.string, 1, sp[0].o);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$new$5_Array1_mindustry_type_Planet_mindustry_type_Planet(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$new$5", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(200);
	ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))) = (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$new$4_mindustry_type_Planet_arc_graphics_g2d_TextureRegion_arc_scene_ui_Button(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$new$4", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Button_top_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(197);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(198);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Button_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(199);
	sp[0].o = frame[2].o;
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_PlanetDialog_lambda$new$3_mindustry_type_Planet_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$new$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_sectors;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_23(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_23 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog_invoke_arc_func_Boolf_23);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog_lambda$new$1_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$new$1", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(116);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_getTouches_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_getTouches_R_int])(ctx, sp[0].o);
	if (temp0 <= (jint(1))) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(118);
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_showing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_showing_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_newPresets;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_planet;
	sp[1].o = (jobject)((func_mindustry_type_Planet_getLastSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Planet_getLastSector_R_mindustry_type_Sector])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_newPresets;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_camPos;
	frame[3].o = sp[0].o;
	LINE_NUMBER(124);
	sp[0].o = frame[3].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Vec3_Y;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_angle_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_angle_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[4].f = temp0;
	LINE_NUMBER(125);
	frame[5].f = (jfloat(9.0f));
	frame[6].f = (jfloat(10.0f));
	LINE_NUMBER(126);
	frame[7].f = (jfloat(1));
	LINE_NUMBER(129);
	jfloat temp1 = jfloat(1);
	jfloat temp2 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[4].f) - (jfloat(90.0f))));
	frame[8].f = (temp1 - (temp2 / (jfloat(90.0f))));
	LINE_NUMBER(131);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_camUp;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, (((frame[1].f) / (frame[5].f)) * (frame[8].f)));
	LINE_NUMBER(134);
	frame[9].f = ((frame[2].f) / (frame[6].f));
	LINE_NUMBER(135);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((frame[4].f) + (frame[9].f)), (frame[7].f), ((jfloat(180.0f)) - (frame[7].f)));
	frame[9].f = (temp3 - (frame[4].f));
	LINE_NUMBER(137);
	sp[0].o = frame[3].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v31;
	sp[2].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[2].o))->F_camUp;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK((frame[0].o)))->F_state;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[2].o))->F_camDir;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o, (jfloat(90.0f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, (frame[9].f));
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_PlanetDialog_lambda$new$0_mindustry_type_Sector(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:lambda$new$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	frame[0].o = param0;
	LINE_NUMBER(63);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_ui_dialogs_PlanetDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	{
	LINE_NUMBER(49);
	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	SF_mindustry_ui_dialogs_PlanetDialog_debugSelect = (jint(0));
	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	SF_mindustry_ui_dialogs_PlanetDialog_debugShowNumbers = (jint(0));
	LINE_NUMBER(50);
	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	SF_mindustry_ui_dialogs_PlanetDialog_sectorShowDuration = (jfloat(144.0f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ui_dialogs_PlanetDialog;
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

	{ // Field selected
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[9]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field hovered
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[10]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field launchSector
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[11]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field launchCandidates
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	{ // Method findLauncher
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[11]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

void *vtable_mindustry_ui_dialogs_PlanetDialog[] {
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
	(void *) M_mindustry_ui_dialogs_PlanetDialog_draw,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_act_float,
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
	(void *) M_mindustry_ui_dialogs_PlanetDialog_show_R_arc_scene_ui_Dialog,
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
	(void *) M_mindustry_ui_dialogs_BaseDialog_lambda$new$1,
	(void *) M_mindustry_ui_dialogs_BaseDialog_lambda$new$0,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_renderSectors_mindustry_type_Planet,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_renderProjections_mindustry_type_Planet,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_renderOverProjections_mindustry_type_Planet,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_rebuildButtons,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_addBack,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_addTech,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_showOverview,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_showPlanetLaunch_mindustry_type_Sector_arc_struct_Seq_arc_func_Cons,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_showSelect_mindustry_type_Sector_arc_func_Cons,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lookAt_mindustry_type_Sector,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lookAt_mindustry_type_Sector_float,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_clampZoom,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_canSelect_mindustry_type_Sector_R_boolean,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_findLauncher_mindustry_type_Sector_R_mindustry_type_Sector,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_showing_R_boolean,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_selectable_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_setup,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_rebuildExpand,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_rebuildList,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_getHoverPlanet_float_float_R_mindustry_type_Planet,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_viewPlanet_mindustry_type_Planet_boolean,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_displayItems_arc_scene_ui_layout_Table_arc_struct_ObjectMap_java_lang_String,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_displayItems_arc_scene_ui_layout_Table_arc_struct_ObjectMap_java_lang_String_arc_func_Cons,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_showStats_mindustry_type_Sector,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_abandonSectorConfirm_mindustry_type_Sector_java_lang_Runnable,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_addSurvivedInfo_mindustry_type_Sector_arc_scene_ui_layout_Table_boolean,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_selectSector_mindustry_type_Sector,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_updateSelected,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_hasNoCandidate_mindustry_type_Sector_R_boolean,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_isLocked_mindustry_type_Sector_R_boolean,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_canPlaySector_mindustry_type_Sector_R_boolean,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_playSelected,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$playSelected$0_mindustry_type_Sector_mindustry_type_Sector,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$7_mindustry_type_Sector,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$0_mindustry_type_Sector_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$3_mindustry_type_Sector,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$1_mindustry_type_Sector,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$2_mindustry_type_Sector_java_lang_String,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$abandonSectorConfirm$0_java_lang_Runnable_mindustry_type_Sector,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$showStats$7_mindustry_type_Sector_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$showStats$0_mindustry_type_Sector_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$2_arc_struct_Seq_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$5_arc_scene_ui_layout_Table_arc_struct_Seq,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$10_mindustry_type_Sector_arc_scene_ui_Button_R_boolean,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$9_mindustry_type_Sector,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$6_mindustry_type_Sector_arc_scene_ui_Button,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$3_Array1_java_lang_Runnable_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$4_Array1_java_lang_Runnable_java_lang_String,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$6_R_boolean,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$5_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$2_arc_scene_ui_TextButton_R_boolean,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$1,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$0_R_boolean,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$10_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$9_R_boolean,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$2_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$7_mindustry_type_Planet_arc_scene_ui_TextButton,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$6_mindustry_type_Planet,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$5_mindustry_type_Planet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$4_R_boolean,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$3,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$1_R_java_lang_CharSequence,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$renderProjections$2_float,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$renderProjections$0_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_mindustry_type_Sector_arc_graphics_Color_float,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$addTech$1_R_boolean,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$new$9_int_arc_graphics_Texture,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$new$2,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$new$7_Array1_mindustry_type_Planet_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_ui_dialogs_PlanetDialog_lambda$new$1_float_float,
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
	{ "renderSectors", "(Lmindustry/type/Planet;)V" },
	{ "renderProjections", "(Lmindustry/type/Planet;)V" },
	{ "renderOverProjections", "(Lmindustry/type/Planet;)V" },
	{ "rebuildButtons", "()V" },
	{ "addBack", "()V" },
	{ "addTech", "()V" },
	{ "showOverview", "()V" },
	{ "showPlanetLaunch", "(Lmindustry/type/Sector;Larc/struct/Seq;Larc/func/Cons;)V" },
	{ "showSelect", "(Lmindustry/type/Sector;Larc/func/Cons;)V" },
	{ "lookAt", "(Lmindustry/type/Sector;)V" },
	{ "lookAt", "(Lmindustry/type/Sector;F)V" },
	{ "clampZoom", "()V" },
	{ "canSelect", "(Lmindustry/type/Sector;)Z" },
	{ "findLauncher", "(Lmindustry/type/Sector;)Lmindustry/type/Sector;" },
	{ "showing", "()Z" },
	{ "selectable", "(Lmindustry/type/Planet;)Z" },
	{ "setup", "()V" },
	{ "rebuildExpand", "()V" },
	{ "rebuildList", "()V" },
	{ "getHoverPlanet", "(FF)Lmindustry/type/Planet;" },
	{ "viewPlanet", "(Lmindustry/type/Planet;Z)V" },
	{ "displayItems", "(Larc/scene/ui/layout/Table;Larc/struct/ObjectMap;Ljava/lang/String;)V" },
	{ "displayItems", "(Larc/scene/ui/layout/Table;Larc/struct/ObjectMap;Ljava/lang/String;Larc/func/Cons;)V" },
	{ "showStats", "(Lmindustry/type/Sector;)V" },
	{ "abandonSectorConfirm", "(Lmindustry/type/Sector;Ljava/lang/Runnable;)V" },
	{ "addSurvivedInfo", "(Lmindustry/type/Sector;Larc/scene/ui/layout/Table;Z)V" },
	{ "selectSector", "(Lmindustry/type/Sector;)V" },
	{ "updateSelected", "()V" },
	{ "hasNoCandidate", "(Lmindustry/type/Sector;)Z" },
	{ "isLocked", "(Lmindustry/type/Sector;)Z" },
	{ "canPlaySector", "(Lmindustry/type/Sector;)Z" },
	{ "playSelected", "()V" },
	{ "lambda$playSelected$0", "(Lmindustry/type/Sector;Lmindustry/type/Sector;)V" },
	{ "lambda$updateSelected$7", "(Lmindustry/type/Sector;)V" },
	{ "lambda$updateSelected$0", "(Lmindustry/type/Sector;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$updateSelected$3", "(Lmindustry/type/Sector;)V" },
	{ "lambda$updateSelected$1", "(Lmindustry/type/Sector;)V" },
	{ "lambda$updateSelected$2", "(Lmindustry/type/Sector;Ljava/lang/String;)V" },
	{ "lambda$abandonSectorConfirm$0", "(Ljava/lang/Runnable;Lmindustry/type/Sector;)V" },
	{ "lambda$showStats$7", "(Lmindustry/type/Sector;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$showStats$0", "(Lmindustry/type/Sector;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuildList$2", "(Larc/struct/Seq;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuildList$5", "(Larc/scene/ui/layout/Table;Larc/struct/Seq;)V" },
	{ "lambda$rebuildList$10", "(Lmindustry/type/Sector;Larc/scene/ui/Button;)Z" },
	{ "lambda$rebuildList$9", "(Lmindustry/type/Sector;)V" },
	{ "lambda$rebuildList$6", "(Lmindustry/type/Sector;Larc/scene/ui/Button;)V" },
	{ "lambda$rebuildList$3", "([Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuildList$4", "([Ljava/lang/Runnable;Ljava/lang/String;)V" },
	{ "lambda$rebuildExpand$6", "()Z" },
	{ "lambda$rebuildExpand$5", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuildExpand$2", "(Larc/scene/ui/TextButton;)Z" },
	{ "lambda$rebuildExpand$1", "()V" },
	{ "lambda$rebuildExpand$0", "()Z" },
	{ "lambda$setup$10", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$9", "()Z" },
	{ "lambda$setup$2", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$7", "(Lmindustry/type/Planet;Larc/scene/ui/TextButton;)V" },
	{ "lambda$setup$6", "(Lmindustry/type/Planet;)V" },
	{ "lambda$setup$5", "(Lmindustry/type/Planet;Lmindustry/type/Planet;)Z" },
	{ "lambda$setup$4", "()Z" },
	{ "lambda$setup$3", "()V" },
	{ "lambda$setup$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$1", "()Ljava/lang/CharSequence;" },
	{ "lambda$renderProjections$2", "(F)V" },
	{ "lambda$renderProjections$0", "(Larc/graphics/g2d/TextureRegion;Larc/graphics/g2d/TextureRegion;Lmindustry/type/Sector;Larc/graphics/Color;F)V" },
	{ "lambda$addTech$1", "()Z" },
	{ "lambda$new$9", "(ILarc/graphics/Texture;)V" },
	{ "lambda$new$2", "()V" },
	{ "lambda$new$7", "([Lmindustry/type/Planet;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$new$1", "(FF)V" },
};

static jclass interfaces[] { &class_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer, };

static jclass innerClasses[] {
	&class_mindustry_ui_dialogs_PlanetDialog$Mode,
};

static FieldMetadata fields[] {
	{ "debugSelect", &class_boolean, (intptr_t) &SF_mindustry_ui_dialogs_PlanetDialog_debugSelect, "Z", 9 },
	{ "debugSectorAttackEdit", &class_boolean, (intptr_t) &SF_mindustry_ui_dialogs_PlanetDialog_debugSectorAttackEdit, "Z", 9 },
	{ "debugShowNumbers", &class_boolean, (intptr_t) &SF_mindustry_ui_dialogs_PlanetDialog_debugShowNumbers, "Z", 9 },
	{ "sectorShowDuration", &class_float, (intptr_t) &SF_mindustry_ui_dialogs_PlanetDialog_sectorShowDuration, "F", 9 },
	{ "buffer", &class_arc_graphics_gl_FrameBuffer, offsetof(mindustry_ui_dialogs_PlanetDialog, F_buffer), "Larc/graphics/gl/FrameBuffer;", 17 },
	{ "loadouts", &class_mindustry_ui_dialogs_LaunchLoadoutDialog, offsetof(mindustry_ui_dialogs_PlanetDialog, F_loadouts), "Lmindustry/ui/dialogs/LaunchLoadoutDialog;", 17 },
	{ "planets", &class_mindustry_graphics_g3d_PlanetRenderer, offsetof(mindustry_ui_dialogs_PlanetDialog, F_planets), "Lmindustry/graphics/g3d/PlanetRenderer;", 17 },
	{ "state", &class_mindustry_graphics_g3d_PlanetParams, offsetof(mindustry_ui_dialogs_PlanetDialog, F_state), "Lmindustry/graphics/g3d/PlanetParams;", 1 },
	{ "zoom", &class_float, offsetof(mindustry_ui_dialogs_PlanetDialog, F_zoom), "F", 1 },
	{ "selected", &class_mindustry_type_Sector, offsetof(mindustry_ui_dialogs_PlanetDialog, F_selected), "Lmindustry/type/Sector;", 1 },
	{ "hovered", &class_mindustry_type_Sector, offsetof(mindustry_ui_dialogs_PlanetDialog, F_hovered), "Lmindustry/type/Sector;", 1 },
	{ "launchSector", &class_mindustry_type_Sector, offsetof(mindustry_ui_dialogs_PlanetDialog, F_launchSector), "Lmindustry/type/Sector;", 1 },
	{ "launchCandidates", &class_arc_struct_Seq, offsetof(mindustry_ui_dialogs_PlanetDialog, F_launchCandidates), "Larc/struct/Seq;", 1 },
	{ "mode", &class_mindustry_ui_dialogs_PlanetDialog$Mode, offsetof(mindustry_ui_dialogs_PlanetDialog, F_mode), "Lmindustry/ui/dialogs/PlanetDialog$Mode;", 1 },
	{ "launching", &class_boolean, offsetof(mindustry_ui_dialogs_PlanetDialog, F_launching), "Z", 1 },
	{ "listener", &class_arc_func_Cons, offsetof(mindustry_ui_dialogs_PlanetDialog, F_listener), "Larc/func/Cons;", 1 },
	{ "newPresets", &class_arc_struct_Seq, offsetof(mindustry_ui_dialogs_PlanetDialog, F_newPresets), "Larc/struct/Seq;", 1 },
	{ "presetShow", &class_float, offsetof(mindustry_ui_dialogs_PlanetDialog, F_presetShow), "F", 1 },
	{ "showed", &class_boolean, offsetof(mindustry_ui_dialogs_PlanetDialog, F_showed), "Z", 1 },
	{ "sectorsShown", &class_boolean, offsetof(mindustry_ui_dialogs_PlanetDialog, F_sectorsShown), "Z", 1 },
	{ "searchText", &class_java_lang_String, offsetof(mindustry_ui_dialogs_PlanetDialog, F_searchText), "Ljava/lang/String;", 1 },
	{ "sectorTop", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_dialogs_PlanetDialog, F_sectorTop), "Larc/scene/ui/layout/Table;", 1 },
	{ "notifs", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_dialogs_PlanetDialog, F_notifs), "Larc/scene/ui/layout/Table;", 1 },
	{ "expandTable", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_dialogs_PlanetDialog, F_expandTable), "Larc/scene/ui/layout/Table;", 1 },
	{ "hoverLabel", &class_arc_scene_ui_Label, offsetof(mindustry_ui_dialogs_PlanetDialog, F_hoverLabel), "Larc/scene/ui/Label;", 1 },
	{ "planetTextures", getArrayClass(&class_arc_graphics_Texture, 1), offsetof(mindustry_ui_dialogs_PlanetDialog, F_planetTextures), "[Larc/graphics/Texture;", 2 },
	{ "mainView", &class_arc_scene_Element, offsetof(mindustry_ui_dialogs_PlanetDialog, F_mainView), "Larc/scene/Element;", 2 },
	{ "selectDialog", &class_mindustry_ui_dialogs_SectorSelectDialog, offsetof(mindustry_ui_dialogs_PlanetDialog, F_selectDialog), "Lmindustry/ui/dialogs/SectorSelectDialog;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_PlanetDialog, 0, "()V", 1 },
	{ "show", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_show_R_arc_scene_ui_Dialog, VTABLE_mindustry_ui_dialogs_PlanetDialog_show_R_arc_scene_ui_Dialog, "()Larc/scene/ui/Dialog;", 1 },
	{ "rebuildButtons", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_rebuildButtons, VTABLE_mindustry_ui_dialogs_PlanetDialog_rebuildButtons, "()V", 0 },
	{ "addBack", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_addBack, VTABLE_mindustry_ui_dialogs_PlanetDialog_addBack, "()V", 0 },
	{ "addTech", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_addTech, VTABLE_mindustry_ui_dialogs_PlanetDialog_addTech, "()V", 0 },
	{ "showOverview", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_showOverview, VTABLE_mindustry_ui_dialogs_PlanetDialog_showOverview, "()V", 1 },
	{ "showPlanetLaunch", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_showPlanetLaunch_mindustry_type_Sector_arc_struct_Seq_arc_func_Cons, VTABLE_mindustry_ui_dialogs_PlanetDialog_showPlanetLaunch_mindustry_type_Sector_arc_struct_Seq_arc_func_Cons, "(Lmindustry/type/Sector;Larc/struct/Seq;Larc/func/Cons;)V", 1 },
	{ "showSelect", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_showSelect_mindustry_type_Sector_arc_func_Cons, VTABLE_mindustry_ui_dialogs_PlanetDialog_showSelect_mindustry_type_Sector_arc_func_Cons, "(Lmindustry/type/Sector;Larc/func/Cons;)V", 1 },
	{ "lookAt", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lookAt_mindustry_type_Sector, VTABLE_mindustry_ui_dialogs_PlanetDialog_lookAt_mindustry_type_Sector, "(Lmindustry/type/Sector;)V", 1 },
	{ "lookAt", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lookAt_mindustry_type_Sector_float, VTABLE_mindustry_ui_dialogs_PlanetDialog_lookAt_mindustry_type_Sector_float, "(Lmindustry/type/Sector;F)V", 1 },
	{ "clampZoom", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_clampZoom, VTABLE_mindustry_ui_dialogs_PlanetDialog_clampZoom, "()V", 0 },
	{ "canSelect", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_canSelect_mindustry_type_Sector_R_boolean, VTABLE_mindustry_ui_dialogs_PlanetDialog_canSelect_mindustry_type_Sector_R_boolean, "(Lmindustry/type/Sector;)Z", 0 },
	{ "findLauncher", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_findLauncher_mindustry_type_Sector_R_mindustry_type_Sector, VTABLE_mindustry_ui_dialogs_PlanetDialog_findLauncher_mindustry_type_Sector_R_mindustry_type_Sector, "(Lmindustry/type/Sector;)Lmindustry/type/Sector;", 0 },
	{ "showing", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_showing_R_boolean, VTABLE_mindustry_ui_dialogs_PlanetDialog_showing_R_boolean, "()Z", 0 },
	{ "renderSectors", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_renderSectors_mindustry_type_Planet, VTABLE_mindustry_ui_dialogs_PlanetDialog_renderSectors_mindustry_type_Planet, "(Lmindustry/type/Planet;)V", 1 },
	{ "renderOverProjections", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_renderOverProjections_mindustry_type_Planet, VTABLE_mindustry_ui_dialogs_PlanetDialog_renderOverProjections_mindustry_type_Planet, "(Lmindustry/type/Planet;)V", 1 },
	{ "renderProjections", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_renderProjections_mindustry_type_Planet, VTABLE_mindustry_ui_dialogs_PlanetDialog_renderProjections_mindustry_type_Planet, "(Lmindustry/type/Planet;)V", 1 },
	{ "selectable", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_selectable_mindustry_type_Planet_R_boolean, VTABLE_mindustry_ui_dialogs_PlanetDialog_selectable_mindustry_type_Planet_R_boolean, "(Lmindustry/type/Planet;)Z", 0 },
	{ "setup", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_setup, VTABLE_mindustry_ui_dialogs_PlanetDialog_setup, "()V", 0 },
	{ "rebuildExpand", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_rebuildExpand, VTABLE_mindustry_ui_dialogs_PlanetDialog_rebuildExpand, "()V", 0 },
	{ "rebuildList", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_rebuildList, VTABLE_mindustry_ui_dialogs_PlanetDialog_rebuildList, "()V", 0 },
	{ "getHoverPlanet", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_getHoverPlanet_float_float_R_mindustry_type_Planet, VTABLE_mindustry_ui_dialogs_PlanetDialog_getHoverPlanet_float_float_R_mindustry_type_Planet, "(FF)Lmindustry/type/Planet;", 1 },
	{ "viewPlanet", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_viewPlanet_mindustry_type_Planet_boolean, VTABLE_mindustry_ui_dialogs_PlanetDialog_viewPlanet_mindustry_type_Planet_boolean, "(Lmindustry/type/Planet;Z)V", 1 },
	{ "draw", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_draw, VTABLE_mindustry_ui_dialogs_PlanetDialog_draw, "()V", 1 },
	{ "act", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_act_float, VTABLE_mindustry_ui_dialogs_PlanetDialog_act_float, "(F)V", 1 },
	{ "displayItems", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_displayItems_arc_scene_ui_layout_Table_arc_struct_ObjectMap_java_lang_String, VTABLE_mindustry_ui_dialogs_PlanetDialog_displayItems_arc_scene_ui_layout_Table_arc_struct_ObjectMap_java_lang_String, "(Larc/scene/ui/layout/Table;Larc/struct/ObjectMap;Ljava/lang/String;)V", 0 },
	{ "displayItems", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_displayItems_arc_scene_ui_layout_Table_arc_struct_ObjectMap_java_lang_String_arc_func_Cons, VTABLE_mindustry_ui_dialogs_PlanetDialog_displayItems_arc_scene_ui_layout_Table_arc_struct_ObjectMap_java_lang_String_arc_func_Cons, "(Larc/scene/ui/layout/Table;Larc/struct/ObjectMap;Ljava/lang/String;Larc/func/Cons;)V", 0 },
	{ "showStats", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_showStats_mindustry_type_Sector, VTABLE_mindustry_ui_dialogs_PlanetDialog_showStats_mindustry_type_Sector, "(Lmindustry/type/Sector;)V", 0 },
	{ "abandonSectorConfirm", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_abandonSectorConfirm_mindustry_type_Sector_java_lang_Runnable, VTABLE_mindustry_ui_dialogs_PlanetDialog_abandonSectorConfirm_mindustry_type_Sector_java_lang_Runnable, "(Lmindustry/type/Sector;Ljava/lang/Runnable;)V", 1 },
	{ "addSurvivedInfo", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_addSurvivedInfo_mindustry_type_Sector_arc_scene_ui_layout_Table_boolean, VTABLE_mindustry_ui_dialogs_PlanetDialog_addSurvivedInfo_mindustry_type_Sector_arc_scene_ui_layout_Table_boolean, "(Lmindustry/type/Sector;Larc/scene/ui/layout/Table;Z)V", 0 },
	{ "selectSector", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_selectSector_mindustry_type_Sector, VTABLE_mindustry_ui_dialogs_PlanetDialog_selectSector_mindustry_type_Sector, "(Lmindustry/type/Sector;)V", 1 },
	{ "updateSelected", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_updateSelected, VTABLE_mindustry_ui_dialogs_PlanetDialog_updateSelected, "()V", 0 },
	{ "hasNoCandidate", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_hasNoCandidate_mindustry_type_Sector_R_boolean, VTABLE_mindustry_ui_dialogs_PlanetDialog_hasNoCandidate_mindustry_type_Sector_R_boolean, "(Lmindustry/type/Sector;)Z", 0 },
	{ "isLocked", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_isLocked_mindustry_type_Sector_R_boolean, VTABLE_mindustry_ui_dialogs_PlanetDialog_isLocked_mindustry_type_Sector_R_boolean, "(Lmindustry/type/Sector;)Z", 0 },
	{ "canPlaySector", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_canPlaySector_mindustry_type_Sector_R_boolean, VTABLE_mindustry_ui_dialogs_PlanetDialog_canPlaySector_mindustry_type_Sector_R_boolean, "(Lmindustry/type/Sector;)Z", 0 },
	{ "playSelected", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_playSelected, VTABLE_mindustry_ui_dialogs_PlanetDialog_playSelected, "()V", 0 },
	{ "lambda$playSelected$0", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$playSelected$0_mindustry_type_Sector_mindustry_type_Sector, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$playSelected$0_mindustry_type_Sector_mindustry_type_Sector, "(Lmindustry/type/Sector;Lmindustry/type/Sector;)V", 4098 },
	{ "lambda$playSelected$1", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$playSelected$1_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_type_Sector_mindustry_type_Sector, 0, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;Lmindustry/type/Sector;Lmindustry/type/Sector;)V", 4106 },
	{ "lambda$playSelected$2", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$playSelected$2_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_type_Sector_mindustry_type_Sector, 0, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;Lmindustry/type/Sector;Lmindustry/type/Sector;)V", 4106 },
	{ "lambda$playSelected$3", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$playSelected$3_mindustry_type_Sector_mindustry_type_Sector, 0, "(Lmindustry/type/Sector;Lmindustry/type/Sector;)V", 4106 },
	{ "lambda$updateSelected$8", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$8_java_lang_String, 0, "(Ljava/lang/String;)V", 4106 },
	{ "lambda$updateSelected$7", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$7_mindustry_type_Sector, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$7_mindustry_type_Sector, "(Lmindustry/type/Sector;)V", 4098 },
	{ "lambda$updateSelected$6", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$6_mindustry_type_Sector_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/Sector;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$updateSelected$5", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$5_mindustry_type_Sector_R_boolean, 0, "(Lmindustry/type/Sector;)Z", 4106 },
	{ "lambda$updateSelected$4", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$4_mindustry_type_Sector_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/Sector;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$updateSelected$0", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$0_mindustry_type_Sector_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$0_mindustry_type_Sector_arc_scene_ui_layout_Table, "(Lmindustry/type/Sector;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$updateSelected$3", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$3_mindustry_type_Sector, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$3_mindustry_type_Sector, "(Lmindustry/type/Sector;)V", 4098 },
	{ "lambda$updateSelected$1", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$1_mindustry_type_Sector, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$1_mindustry_type_Sector, "(Lmindustry/type/Sector;)V", 4098 },
	{ "lambda$updateSelected$2", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$2_mindustry_type_Sector_java_lang_String, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$updateSelected$2_mindustry_type_Sector_java_lang_String, "(Lmindustry/type/Sector;Ljava/lang/String;)V", 4098 },
	{ "lambda$abandonSectorConfirm$0", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$abandonSectorConfirm$0_java_lang_Runnable_mindustry_type_Sector, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$abandonSectorConfirm$0_java_lang_Runnable_mindustry_type_Sector, "(Ljava/lang/Runnable;Lmindustry/type/Sector;)V", 4098 },
	{ "lambda$abandonSectorConfirm$1", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$abandonSectorConfirm$1, 0, "()V", 4106 },
	{ "lambda$showStats$7", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$showStats$7_mindustry_type_Sector_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$showStats$7_mindustry_type_Sector_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/type/Sector;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$showStats$0", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$showStats$0_mindustry_type_Sector_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$showStats$0_mindustry_type_Sector_arc_scene_ui_layout_Table, "(Lmindustry/type/Sector;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showStats$5", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$showStats$5_mindustry_type_ItemSeq_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/ItemSeq;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$showStats$6", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$showStats$6_mindustry_type_ItemSeq_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/ItemSeq;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$showStats$3", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$showStats$3_mindustry_type_Sector_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/Sector;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$showStats$4", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$showStats$4_arc_scene_ui_layout_Table_mindustry_type_Sector, 0, "(Larc/scene/ui/layout/Table;Lmindustry/type/Sector;)V", 4106 },
	{ "lambda$showStats$2", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$showStats$2_mindustry_type_Sector_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/Sector;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$showStats$1", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$showStats$1_mindustry_type_Sector_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/Sector;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$displayItems$0", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$displayItems$0_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$rebuildList$2", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$2_arc_struct_Seq_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$2_arc_struct_Seq_arc_scene_ui_layout_Table, "(Larc/struct/Seq;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$rebuildList$5", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$5_arc_scene_ui_layout_Table_arc_struct_Seq, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$5_arc_scene_ui_layout_Table_arc_struct_Seq, "(Larc/scene/ui/layout/Table;Larc/struct/Seq;)V", 4098 },
	{ "lambda$rebuildList$10", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$10_mindustry_type_Sector_arc_scene_ui_Button_R_boolean, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$10_mindustry_type_Sector_arc_scene_ui_Button_R_boolean, "(Lmindustry/type/Sector;Larc/scene/ui/Button;)Z", 4098 },
	{ "lambda$rebuildList$9", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$9_mindustry_type_Sector, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$9_mindustry_type_Sector, "(Lmindustry/type/Sector;)V", 4098 },
	{ "lambda$rebuildList$6", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$6_mindustry_type_Sector_arc_scene_ui_Button, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$6_mindustry_type_Sector_arc_scene_ui_Button, "(Lmindustry/type/Sector;Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$rebuildList$7", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$7_mindustry_type_Sector_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/Sector;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$rebuildList$8", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$8_arc_scene_ui_Image, 0, "(Larc/scene/ui/Image;)V", 4106 },
	{ "lambda$rebuildList$3", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$3_Array1_java_lang_Runnable_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$3_Array1_java_lang_Runnable_arc_scene_ui_layout_Table, "([Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$rebuildList$4", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$4_Array1_java_lang_Runnable_java_lang_String, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$4_Array1_java_lang_Runnable_java_lang_String, "([Ljava/lang/Runnable;Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuildList$1", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$1_mindustry_type_Sector_R_int, 0, "(Lmindustry/type/Sector;)I", 4106 },
	{ "lambda$rebuildList$0", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildList$0_mindustry_type_Sector_R_boolean, 0, "(Lmindustry/type/Sector;)Z", 4106 },
	{ "lambda$rebuildExpand$6", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$6_R_boolean, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$6_R_boolean, "()Z", 4098 },
	{ "lambda$rebuildExpand$5", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$5_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$5_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$rebuildExpand$4", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$4_arc_scene_ui_TextButton, 0, "(Larc/scene/ui/TextButton;)V", 4106 },
	{ "lambda$rebuildExpand$3", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$3_arc_scene_ui_TextButton, 0, "(Larc/scene/ui/TextButton;)V", 4106 },
	{ "lambda$rebuildExpand$2", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$2_arc_scene_ui_TextButton_R_boolean, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$2_arc_scene_ui_TextButton_R_boolean, "(Larc/scene/ui/TextButton;)Z", 4098 },
	{ "lambda$rebuildExpand$1", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$1, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$1, "()V", 4098 },
	{ "lambda$rebuildExpand$0", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$0_R_boolean, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$rebuildExpand$0_R_boolean, "()Z", 4098 },
	{ "lambda$setup$10", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$10_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$setup$10_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$9", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$9_R_boolean, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$setup$9_R_boolean, "()Z", 4098 },
	{ "lambda$setup$2", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$2_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$setup$2_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$8", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$setup$8_arc_scene_ui_TextButton, 0, "(Larc/scene/ui/TextButton;)V", 4106 },
	{ "lambda$setup$7", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$7_mindustry_type_Planet_arc_scene_ui_TextButton, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$setup$7_mindustry_type_Planet_arc_scene_ui_TextButton, "(Lmindustry/type/Planet;Larc/scene/ui/TextButton;)V", 4098 },
	{ "lambda$setup$6", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$6_mindustry_type_Planet, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$setup$6_mindustry_type_Planet, "(Lmindustry/type/Planet;)V", 4098 },
	{ "lambda$setup$5", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$5_mindustry_type_Planet_mindustry_type_Planet_R_boolean, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$setup$5_mindustry_type_Planet_mindustry_type_Planet_R_boolean, "(Lmindustry/type/Planet;Lmindustry/type/Planet;)Z", 4098 },
	{ "lambda$setup$4", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$4_R_boolean, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$setup$4_R_boolean, "()Z", 4098 },
	{ "lambda$setup$3", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$3, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$setup$3, "()V", 4098 },
	{ "lambda$setup$0", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$0_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$setup$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$1", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$setup$1_R_java_lang_CharSequence, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$setup$1_R_java_lang_CharSequence, "()Ljava/lang/CharSequence;", 4098 },
	{ "lambda$renderProjections$2", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$renderProjections$2_float, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$renderProjections$2_float, "(F)V", 4098 },
	{ "lambda$renderProjections$1", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$renderProjections$1_mindustry_type_Sector, 0, "(Lmindustry/type/Sector;)V", 4106 },
	{ "lambda$renderProjections$0", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$renderProjections$0_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_mindustry_type_Sector_arc_graphics_Color_float, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$renderProjections$0_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_mindustry_type_Sector_arc_graphics_Color_float, "(Larc/graphics/g2d/TextureRegion;Larc/graphics/g2d/TextureRegion;Lmindustry/type/Sector;Larc/graphics/Color;F)V", 4098 },
	{ "lambda$addTech$1", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$addTech$1_R_boolean, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$addTech$1_R_boolean, "()Z", 4098 },
	{ "lambda$addTech$0", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$addTech$0, 0, "()V", 4106 },
	{ "lambda$show$0", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$show$0_mindustry_type_Sector, 0, "(Lmindustry/type/Sector;)V", 4106 },
	{ "lambda$new$9", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$new$9_int_arc_graphics_Texture, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$new$9_int_arc_graphics_Texture, "(ILarc/graphics/Texture;)V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$new$2, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$new$2, "()V", 4098 },
	{ "lambda$new$8", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$new$8_Array1_mindustry_type_Planet_arc_scene_ui_TextButton_R_boolean, 0, "([Lmindustry/type/Planet;Larc/scene/ui/TextButton;)Z", 4106 },
	{ "lambda$new$7", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$new$7_Array1_mindustry_type_Planet_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$new$7_Array1_mindustry_type_Planet_mindustry_ui_dialogs_BaseDialog, "([Lmindustry/type/Planet;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$new$6", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$new$6_Array1_mindustry_type_Planet_R_java_lang_CharSequence, 0, "([Lmindustry/type/Planet;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$new$5", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$new$5_Array1_mindustry_type_Planet_mindustry_type_Planet, 0, "([Lmindustry/type/Planet;Lmindustry/type/Planet;)V", 4106 },
	{ "lambda$new$4", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$new$4_mindustry_type_Planet_arc_graphics_g2d_TextureRegion_arc_scene_ui_Button, 0, "(Lmindustry/type/Planet;Larc/graphics/g2d/TextureRegion;Larc/scene/ui/Button;)V", 4106 },
	{ "lambda$new$3", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$new$3_mindustry_type_Planet_R_boolean, 0, "(Lmindustry/type/Planet;)Z", 4106 },
	{ "lambda$new$1", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog_lambda$new$1_float_float, VTABLE_mindustry_ui_dialogs_PlanetDialog_lambda$new$1_float_float, "(FF)V", 4098 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog_lambda$new$0_mindustry_type_Sector, 0, "(Lmindustry/type/Sector;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ui_dialogs_PlanetDialog, 0, "()V", 8 },
};

Class class_mindustry_ui_dialogs_PlanetDialog{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/PlanetDialog",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_BaseDialog,
		.size = sizeof(mindustry_ui_dialogs_PlanetDialog),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_PlanetDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_PlanetDialog,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_PlanetDialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 28,
		.nativeFields = (intptr_t) fields,
		.methodCount = 106,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 367,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_PlanetDialog = registerClass(&class_mindustry_ui_dialogs_PlanetDialog);

}
