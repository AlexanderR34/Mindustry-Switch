#include "mindustry/ui/fragments/HudFragment.h"
#include "arc/scene/actions/ParallelAction.h"
#include "arc/func/Prov.h"
#include "java/lang/StringBuilder.h"
#include "arc/Input.h"
#include "arc/func/Boolp.h"
#include "arc/graphics/Color.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_53.h"
#include "java/lang/Runnable.h"
#include "arc/input/KeyCode.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_31.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_30.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_26.h"
#include "arc/util/Tmp.h"
#include "arc/scene/actions/DelayAction.h"
#include "arc/func/Floatp.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Func_1.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "mindustry/gen/Sounds.h"
#include "arc/math/Interp.h"
#include "mindustry/input/Binding.h"
#include "arc/util/Time.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_27.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_28.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_29.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_34.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_21.h"
#include "mindustry/ui/dialogs/PausedDialog.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_35.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_20.h"
#include "java/lang/Object.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_36.h"
#include "arc/scene/actions/ScaleToAction.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_37.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_30.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_25.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_31.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_24.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_32.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_23.h"
#include "mindustry/world/meta/BuildVisibility.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_33.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_22.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_29.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_28.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_27.h"
#include "mindustry/game/MapObjectives.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_26.h"
#include "mindustry/ui/dialogs/ResearchDialog.h"
#include "mindustry/game/EventType_ResetEvent.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/core/GameState_State.h"
#include "arc/func/Cons.h"
#include "mindustry/content/StatusEffects.h"
#include "mindustry/ui/fragments/HintsFragment.h"
#include "mindustry/core/Control.h"
#include "arc/scene/ui/layout/Table_DrawRect.h"
#include "arc/input/KeyBind.h"
#include "arc/scene/ui/layout/Stack.h"
#include "mindustry/game/EventType_SectorInvasionEvent.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Intf_1.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/type/UnitType.h"
#include "arc/scene/actions/AlphaAction.h"
#include "mindustry/Vars.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_60.h"
#include "arc/input/KeyBind_Axis.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_61.h"
#include "arc/Events.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_66.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_67.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_68.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_69.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_62.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_63.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_64.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_65.h"
#include "arc/scene/event/Touchable.h"
#include "mindustry/input/MobileInput.h"
#include "mindustry/ui/fragments/HudFragment.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_70.h"
#include "mindustry/net/Packets_AdminAction.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_71.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_72.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_77.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_78.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_79.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_73.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_74.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_75.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_76.h"
#include "mindustry/core/Logic.h"
#include "mindustry/net/Net.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolf_1.h"
#include "arc/scene/event/HandCursorListener.h"
#include "arc/util/Timer_Task.h"
#include "arc/scene/Action.h"
#include "java/lang/String.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_49.h"
#include "mindustry/world/blocks/environment/OverlayFloor.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_50.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_55.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_56.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_57.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_58.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_51.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_52.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_53.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/actions/Actions.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_54.h"
#include "arc/scene/style/Style.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_59.h"
#include "mindustry/gen/Player.h"
#include "mindustry/type/Planet.h"
#include "mindustry/ui/dialogs/SchematicsDialog.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "arc/scene/event/InputListener.h"
#include "java/util/Objects.h"
#include "mindustry/core/GameState.h"
#include "mindustry/input/InputHandler.h"
#include "java/lang/Integer.h"
#include "arc/scene/ui/ScrollPane_ScrollPaneStyle.h"
#include "arc/scene/ui/Image.h"
#include "arc/func/Intf.h"
#include "arc/struct/Seq.h"
#include "arc/util/OS.h"
#include "arc/Settings.h"
#include "mindustry/gen/Healthc.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/scene/Scene.h"
#include "arc/Graphics.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/ui/fragments/HudFragment_1.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/ui/fragments/HudFragment_3.h"
#include "mindustry/ui/fragments/HudFragment_2.h"
#include "mindustry/ui/fragments/HudFragment_5.h"
#include "mindustry/ui/fragments/HudFragment_4.h"
#include "arc/scene/ui/layout/Collapser.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_80.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_81.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_82.h"
#include "arc/scene/actions/RunnableAction.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_83.h"
#include "mindustry/ui/fragments/ConsoleFragment.h"
#include "java/lang/Boolean.h"
#include "mindustry/ui/Bar.h"
#include "mindustry/game/Rules.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_88.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_89.h"
#include "mindustry/ui/dialogs/DatabaseDialog.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_84.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_85.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_86.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_87.h"
#include "mindustry/game/MapObjectives_MapObjective.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/scene/ui/layout/Scl.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_91.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_92.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_93.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_94.h"
#include "mindustry/world/blocks/environment/RemoveOre.h"
#include "mindustry/game/EventType_SectorCaptureEvent.h"
#include "mindustry/ui/fragments/ChatFragment.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_90.h"
#include "mindustry/ui/fragments/PlayerListFragment.h"
#include "mindustry/ui/IntFormat.h"
#include "mindustry/type/Sector.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_95.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_96.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_97.h"
#include "arc/scene/actions/TranslateByAction.h"
#include "arc/scene/ui/ScrollPane.h"
#include "mindustry/game/Teams.h"
#include "mindustry/game/EventType_Trigger.h"
#include "arc/audio/Sound.h"
#include "mindustry/gen/Statusc.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "mindustry/core/NetServer.h"
#include "mindustry/game/EventType_WaveEvent.h"
#include "arc/scene/event/EventListener.h"
#include "mindustry/ui/fragments/PlacementFragment.h"
#include "mindustry/core/World.h"
#include "arc/scene/ui/TextField.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_scene_ui_layout_Table_DrawRect_3.h"
#include "arc/scene/ui/Button.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/ImageButton.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/blocks/environment/RemoveWall.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_scene_ui_layout_Table_DrawRect_2.h"
#include "arc/func/Func.h"
#include "arc/scene/ui/Tooltip.h"
#include "mindustry/game/Saves.h"
#include "mindustry/game/EventType_SectorLoseEvent.h"
#include "arc/struct/Bits.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_28.h"
#include "mindustry/gen/Payloadc.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_29.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_27.h"
#include "arc/scene/ui/Label.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_30.h"
#include "mindustry/ai/WaveSpawner.h"
#include "mindustry/ui/CoreItemsDisplay.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_39.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_37.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_38.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Floatp_8.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_35.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Floatp_7.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_36.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_33.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_38.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_34.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_39.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_31.h"
#include "arc/Application.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_32.h"
#include "mindustry/ui/Minimap.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_40.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_45.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_41.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_46.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_47.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_48.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_41.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Floatp_9.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_42.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_43.h"
#include "java/util/Comparator.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_44.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_18.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_17.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_16.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_40.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Floatp_13.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Floatp_12.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Floatp_11.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_19.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Floatp_10.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/util/Scaling.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/fragments/HudFragment_1SideBar.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/core/NetClient.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_48.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_49.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_46.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_47.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_44.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_49.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_45.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_42.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_43.h"
#include "mindustry/game/SpawnGroup.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_51.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_52.h"
#include "arc/scene/Element.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_lang_Runnable_50.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_50.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Boolp_51.h"
#include "mindustry/ui/fragments/HudFragment_invoke_java_util_Comparator_1.h"
#include "arc/struct/SnapshotSeq.h"
#include "mindustry/gen/Call.h"
#include "arc/scene/actions/RemoveActorAction.h"

extern "C" {

jfloat SF_mindustry_ui_fragments_HudFragment_dsize;
jfloat SF_mindustry_ui_fragments_HudFragment_pauseHeight;
jobject SF_mindustry_ui_fragments_HudFragment_favoriteBlocks;
jobject SF_mindustry_ui_fragments_HudFragment_lastFavorited;

void mark_mindustry_ui_fragments_HudFragment(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ui_fragments_HudFragment_favoriteBlocks)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HudFragment_favoriteBlocks)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HudFragment_favoriteBlocks, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HudFragment_lastFavorited)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HudFragment_lastFavorited)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HudFragment_lastFavorited, mark, depth + 1);
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
	auto self = (mindustry_ui_fragments_HudFragment *) object;
	if (self->F_blockfrag)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blockfrag)->clazz)->markFunction)((jobject) self->F_blockfrag, mark, depth + 1);
	if (self->F_coreItems)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_coreItems)->clazz)->markFunction)((jobject) self->F_coreItems, mark, depth + 1);
	if (self->F_flip)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_flip)->clazz)->markFunction)((jobject) self->F_flip, mark, depth + 1);
	if (self->F_hudText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hudText)->clazz)->markFunction)((jobject) self->F_hudText, mark, depth + 1);
	if (self->F_lastUnlockTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastUnlockTable)->clazz)->markFunction)((jobject) self->F_lastUnlockTable, mark, depth + 1);
	if (self->F_lastUnlockLayout)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastUnlockLayout)->clazz)->markFunction)((jobject) self->F_lastUnlockLayout, mark, depth + 1);
	if (self->F_blocksOut)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blocksOut)->clazz)->markFunction)((jobject) self->F_blocksOut, mark, depth + 1);
	if (self->F_hudLabel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hudLabel)->clazz)->markFunction)((jobject) self->F_hudLabel, mark, depth + 1);
}

void init_mindustry_ui_fragments_HudFragment(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(40);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment);
	init_mindustry_ui_fragments_PlacementFragment(ctx, sp[1].o);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK(sp[0].o))->F_blockfrag = (jref) sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_CoreItemsDisplay(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_CoreItemsDisplay);
	init_mindustry_ui_CoreItemsDisplay(ctx, sp[1].o);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK(sp[0].o))->F_coreItems = (jref) sp[1].o;
	LINE_NUMBER(45);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_shown = (jint(1));
	LINE_NUMBER(49);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_hudText = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK(sp[0].o))->F_blocksOut = (jref) sp[1].o;
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_addBlockSelection_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:addBlockSelection", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(66);
	clinit_arc_scene_ui_ScrollPane(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ScrollPane);
	sp[1].o = frame[2].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_smallPane;
	init_arc_scene_ui_ScrollPane_arc_scene_Element_arc_scene_ui_ScrollPane$ScrollPaneStyle(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(67);
	((func_arc_scene_ui_ScrollPane_setFadeScrollBars_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_setFadeScrollBars_boolean])(ctx, (frame[3].o), (jint(0)));
	LINE_NUMBER(68);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_type_Planet, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_planet;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	frame[4].o = sp[0].o;
	LINE_NUMBER(69);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_27(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_27 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_27);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ScrollPane_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(83);
	sp[0].o = (jobject)createArray(ctx, &class_arc_scene_ui_layout_Table, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[5].o = sp[0].o;
	LINE_NUMBER(84);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[6].o = sp[0].o;
	LINE_NUMBER(86);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_49(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_49 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_49);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(90);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-2.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	LINE_NUMBER(91);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(92);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_50(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_50 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_50);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_26(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_26 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_26);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_51(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_51 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_51);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(94);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_52(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_52 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_52);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(104);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(105);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expandY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expandY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(107);
	((func_mindustry_ui_fragments_HudFragment_rebuildBlockSelection_arc_scene_ui_layout_Table_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_rebuildBlockSelection_arc_scene_ui_layout_Table_java_lang_String])(ctx, (frame[0].o), (frame[2].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_loadFavorites(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:loadFavorites", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(111);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"editor-block-favorites"_j));
	sp[2].o = ((jobject) &class_arc_struct_ObjectSet);
	sp[3].o = ((jobject) &class_java_lang_String);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_16(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_16 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_16);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_Settings_getJson_java_lang_String_java_lang_Class_java_lang_Class_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getJson_java_lang_String_java_lang_Class_java_lang_Class_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	clinit_mindustry_ui_fragments_HudFragment(ctx);
	SF_mindustry_ui_fragments_HudFragment_favoriteBlocks = (checkCast(ctx, &class_arc_struct_ObjectSet, sp[0].o));
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_saveFavorites(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:saveFavorites", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(115);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"editor-block-favorites"_j));
	sp[2].o = ((jobject) &class_java_lang_String);
	clinit_mindustry_ui_fragments_HudFragment(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_fragments_HudFragment_favoriteBlocks;
	((func_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HudFragment_isFavorite_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:isFavorite", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(119);
	clinit_mindustry_ui_fragments_HudFragment(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_fragments_HudFragment_favoriteBlocks;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_toggleFavorite_mindustry_world_Block(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:toggleFavorite", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(123);
	clinit_mindustry_ui_fragments_HudFragment(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_fragments_HudFragment_favoriteBlocks;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[1].i = temp0;
	LINE_NUMBER(124);
	if ((frame[1].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(125);
	clinit_mindustry_ui_fragments_HudFragment(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_fragments_HudFragment_favoriteBlocks;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(126);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_uiFavorite;
	jint temp1 = (jint)((func_arc_audio_Sound_play_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_play_float_float_float_R_int])(ctx, sp[0].o, (jfloat(0.35f)), (jfloat(0.67f)), (jfloat(0)));
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(128);
	clinit_mindustry_ui_fragments_HudFragment(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_fragments_HudFragment_favoriteBlocks;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	clinit_mindustry_ui_fragments_HudFragment(ctx);
	SF_mindustry_ui_fragments_HudFragment_lastFavorited = sp[0].o;
	LINE_NUMBER(130);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_uiFavorite;
	jint temp1 = (jint)((func_arc_audio_Sound_play_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_play_float_float_float_R_int])(ctx, sp[0].o, (jfloat(0.6f)), (jfloat(2)), (jfloat(0)));
	}
label_5:;
	{
	LINE_NUMBER(132);
	SM_mindustry_ui_fragments_HudFragment_saveFavorites(ctx);
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_rebuildBlockSelection_arc_scene_ui_layout_Table_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:rebuildBlockSelection", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(136);
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, (frame[1].o));
	LINE_NUMBER(138);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_blocksOut;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(140);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(141);
	jint temp0 = (jint)SM_mindustry_ui_fragments_HudFragment_isFavorite_mindustry_world_Block_R_boolean(ctx, (frame[4].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_blocksOut;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[4].o));
	}
label_6:;
	LINE_NUMBER(144);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(146);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(147);
	jint temp0 = (jint)SM_mindustry_ui_fragments_HudFragment_isFavorite_mindustry_world_Block_R_boolean(ctx, (frame[4].o));
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_blocksOut;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[4].o));
	}
label_11:;
	LINE_NUMBER(150);
	goto label_8;
label_9:;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_blocksOut;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_util_Comparator_1(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_util_Comparator_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_util_Comparator_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(164);
	frame[3].i = (jint(0));
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_blocksOut;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_15:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(167);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[5].o)))->F_uiIcon;
	frame[6].o = sp[0].o;
	LINE_NUMBER(169);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean])(ctx, sp[0].o, (frame[6].o));
	if (temp0 == 0) goto label_15;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[5].o)))->F_inEditor) != 0) goto label_19;
	}
	{
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_world_blocks_environment_RemoveWall)) != 0) goto label_19;
	}
	{
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_world_blocks_environment_RemoveOre)) == 0) goto label_15;
	}
label_19:;
	{
	sp[0].o = frame[5].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_planet;
	LINE_NUMBER(171);
	jint temp0 = (jint)((func_mindustry_world_Block_isOnPlanet_mindustry_type_Planet_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isOnPlanet_mindustry_type_Planet_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[5].o)))->F_buildVisibility;
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BuildVisibility_debugOnly;
	if (sp[0].o == sp[1].o) goto label_15;
	}
	{
	sp[0].o = frame[2].o;
	LINE_NUMBER(173);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_22;
	}
	{
	sp[0].o = frame[5].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_removeOre;
	if (sp[0].o == sp[1].o) goto label_22;
	}
	{
	sp[0].o = frame[5].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_removeWall;
	if (sp[0].o == sp[1].o) goto label_22;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[5].o)))->F_localizedName;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" +"_j))), (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_22;
	}
	LINE_NUMBER(174);
	goto label_15;
label_22:;
	{
	LINE_NUMBER(176);
	clinit_arc_scene_ui_ImageButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton);
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNoneTogglei;
	init_arc_scene_ui_ImageButton_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(177);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[7].o));
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, (frame[6].o));
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	LINE_NUMBER(178);
	sp[0].o = frame[7].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_28(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_28 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_28);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(180);
	sp[0].o = frame[7].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseRight;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_29(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_29 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_29);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(187);
	sp[0].o = frame[7].o;
	clinit_mindustry_ui_fragments_HudFragment$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment$1);
	init_mindustry_ui_fragments_HudFragment$1_mindustry_ui_fragments_HudFragment_mindustry_world_Block_arc_scene_ui_layout_Table_java_lang_String(ctx, sp[1].o, (frame[0].o), (frame[5].o), (frame[1].o), (frame[2].o));
	jint temp0 = (jint)((func_arc_scene_ui_ImageButton_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(198);
	((func_arc_scene_ui_ImageButton_resizeImage_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_resizeImage_float])(ctx, (frame[7].o), (jfloat(32.0f)));
	LINE_NUMBER(199);
	sp[0].o = frame[7].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_30(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_30 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_30);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(201);
	clinit_arc_scene_ui_layout_Stack(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Stack);
	init_arc_scene_ui_layout_Stack(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(202);
	((func_arc_scene_ui_layout_Stack_add_arc_scene_Element) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_scene_ui_layout_Stack_add_arc_scene_Element])(ctx, (frame[8].o), (frame[7].o));
	LINE_NUMBER(203);
	jint temp1 = (jint)SM_mindustry_ui_fragments_HudFragment_isFavorite_mindustry_world_Block_R_boolean(ctx, (frame[5].o));
	if (temp1 == 0) goto label_33;
	}
	{
	LINE_NUMBER(204);
	clinit_arc_scene_ui_Image(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_star;
	init_arc_scene_ui_Image_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(205);
	sp[0].o = frame[9].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_gold;
	((func_arc_scene_ui_Image_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(206);
	((func_arc_scene_ui_Image_setOrigin_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_ui_Image_setOrigin_int])(ctx, (frame[9].o), (jint(1)));
	LINE_NUMBER(208);
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[5].o)))->F_name;
	clinit_mindustry_ui_fragments_HudFragment(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HudFragment_lastFavorited;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_38;
	}
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[9].o)))->F_color;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (jfloat(0));
	LINE_NUMBER(210);
	((func_arc_scene_ui_Image_setScale_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_ui_Image_setScale_float])(ctx, (frame[9].o), (jfloat(0)));
	LINE_NUMBER(211);
	sp[0].o = frame[9].o;
	jfloat temp0 = jfloat(0.7f);
	jfloat temp1 = jfloat(0.7f);
	jfloat temp2 = jfloat(0.2f);
	LINE_NUMBER(212);
	sp[1].o = (jobject)SM_arc_scene_actions_Actions_scaleTo_float_float_float_R_arc_scene_actions_ScaleToAction(ctx, temp0, temp1, temp2);
	jfloat temp3 = jfloat(1);
	jfloat temp4 = jfloat(0.2f);
	LINE_NUMBER(213);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_alpha_float_float_R_arc_scene_actions_AlphaAction(ctx, temp3, temp4);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_31(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_31 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_31);
		sp[3].o = (jobject) proxy;
	}
	LINE_NUMBER(214);
	sp[3].o = (jobject)SM_arc_scene_actions_Actions_run_java_lang_Runnable_R_arc_scene_actions_RunnableAction(ctx, sp[3].o);
	LINE_NUMBER(211);
	sp[1].o = (jobject)SM_arc_scene_actions_Actions_parallel_arc_scene_Action_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_ParallelAction(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_arc_scene_ui_Image_addAction_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_addAction_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	goto label_46;
	}
label_38:;
	{
	LINE_NUMBER(217);
	((func_arc_scene_ui_Image_setScale_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_ui_Image_setScale_float])(ctx, (frame[9].o), (jfloat(0.7f)));
	}
label_46:;
	{
	LINE_NUMBER(220);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_align_int_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_align_int_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (18));
	frame[10].o = sp[0].o;
	LINE_NUMBER(221);
	sp[0].o = frame[10].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(222);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[10].o), (frame[9].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(12.0f)));
	LINE_NUMBER(224);
	((func_arc_scene_ui_layout_Stack_add_arc_scene_Element) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_scene_ui_layout_Stack_add_arc_scene_Element])(ctx, (frame[8].o), (frame[10].o));
	}
label_33:;
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[8].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(48.0f)));
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[5].o)))->F_localizedName;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(228);
	INST_IINC(3, 1);
	if (((frame[3].i) % (6)) != 0) goto label_51;
	}
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_51:;
	LINE_NUMBER(231);
	goto label_15;
label_16:;
	{
	LINE_NUMBER(233);
	if ((frame[3].i) != 0) goto label_53;
	}
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@none.found"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(54.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	}
label_53:;
	LINE_NUMBER(236);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_build_arc_scene_Group(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:build", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(239);
	SM_mindustry_ui_fragments_HudFragment_loadFavorites(ctx);
	LINE_NUMBER(241);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WaveEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_53(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_53 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_53);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(261);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$SectorCaptureEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_54(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_54 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_54);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(269);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$SectorLoseEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_55(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_55 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_55);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(273);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$SectorInvasionEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_56(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_56 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_56);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(277);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ResetEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_57(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_57 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_57);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(287);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_58(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_58 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_58);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Group_fill_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(300);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_59(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_59 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_59);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Group_fill_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(313);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_scene_ui_layout_Table$DrawRect_2(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_scene_ui_layout_Table$DrawRect_2 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_scene_ui_layout_Table$DrawRect_2);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(329);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_60(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_60 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_60);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Group_fill_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(336);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_61(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_61 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_61);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Group_fill_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(353);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hints;
	((func_mindustry_ui_fragments_HintsFragment_build_arc_scene_Group) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HintsFragment_build_arc_scene_Group])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(356);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_62(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_62 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_62);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Group_fill_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(579);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_63(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_63 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_63);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Group_fill_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(659);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_64(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_64 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_64);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Group_fill_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(669);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_65(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_65 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_65);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Group_fill_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(710);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_blockfrag;
	((func_mindustry_ui_fragments_PlacementFragment_build_arc_scene_Group) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_build_arc_scene_Group])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(711);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_setPlayerTeamEditor_mindustry_gen_Player_mindustry_game_Team(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:setPlayerTeamEditor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(715);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ALOAD(0);
	if ((--sp)->o == nullptr) goto label_1;
	{
	LINE_NUMBER(716);
	((func_mindustry_gen_Player_team_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_team_mindustry_game_Team])(ctx, (frame[0].o), (frame[1].o));
	}
label_1:;
	LINE_NUMBER(718);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_setHudText_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:setHudText", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(721);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_showHudText = (jint(1));
	LINE_NUMBER(722);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_hudText = (jref) (frame[1].o);
	LINE_NUMBER(723);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_toggleHudText_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:toggleHudText", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(726);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_showHudText = (frame[1].i);
	LINE_NUMBER(727);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_scheduleToast_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:scheduleToast", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(730);
	frame[2].l = (jlong(3500ll));
	LINE_NUMBER(731);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_lastToast));
	frame[4].l = temp0;
	LINE_NUMBER(732);
	if ((longCompare((frame[4].l), (frame[2].l))) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(733);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK(sp[0].o))->F_lastToast = temp0;
	LINE_NUMBER(734);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[1].o)))(ctx, (frame[1].o));
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(736);
	sp[0].o = (jobject)SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(ctx, (((jfloat(((frame[2].l) - (frame[4].l)))) / (jfloat(1000.0f))) * (jfloat(60.0f))), (frame[1].o));
	LINE_NUMBER(737);
	sp[0].o = frame[0].o;
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK(sp[0].o))->F_lastToast = (((jlong)((mindustry_ui_fragments_HudFragment *) NULL_CHECK(sp[0].o))->F_lastToast) + (frame[2].l));
	}
label_6:;
	LINE_NUMBER(739);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_HudFragment_hasToast_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:hasToast", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(742);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_lastToast));
	if ((floatCompare((jfloat(temp0)), (jfloat(3500.0f)), 1)) >= 0) goto label_1;
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

void M_mindustry_ui_fragments_HudFragment_showToast_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:showToast", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(746);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_ok;
	((func_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_java_lang_String])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(747);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:showToast", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(750);
	((func_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_float_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_float_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (jfloat(-1.0f)), (frame[2].o));
	LINE_NUMBER(751);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_float_java_lang_String(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:showToast", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(754);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(756);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_32(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_32 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_32);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_fragments_HudFragment_scheduleToast_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_scheduleToast_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(779);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_showPauseDisabled(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:showPauseDisabled", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(782);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_pauseDisableDur = (jfloat(60.0f));
	LINE_NUMBER(783);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_showUnlock_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:showUnlock", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(789);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(791);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_uiNotify;
	jint temp0 = (jint)((func_arc_audio_Sound_play_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_play_R_int])(ctx, sp[0].o);
	LINE_NUMBER(794);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_lastUnlockTable;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(795);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_33(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_33 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_33);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_fragments_HudFragment_scheduleToast_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_scheduleToast_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(835);
	frame[2].i = (jint(3));
	LINE_NUMBER(837);
	frame[3].i = (((frame[2].i) * (frame[2].i)) - (jint(1)));
	LINE_NUMBER(840);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	sp[1].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_lastUnlockLayout;
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, sp[1].o);
	init_arc_struct_Seq_arc_struct_Seq(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(841);
	frame[5].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[4].o)))->F_size);
	LINE_NUMBER(844);
	if ((frame[5].i) <= (frame[3].i)) goto label_10;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(847);
	jfloat temp0 = jfloat(48.0f);
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (((jint)((arc_struct_Seq *) NULL_CHECK((frame[4].o)))->F_size) + (jint(1))), (frame[2].i));
	frame[6].f = (temp0 / (jfloat(temp1)));
	LINE_NUMBER(849);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_lastUnlockLayout;
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, sp[0].o);
	LINE_NUMBER(850);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_lastUnlockLayout;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[6].f));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(852);
	frame[7].i = (jint(0));
	}
label_14:;
	{
	if ((frame[7].i) >= (frame[5].i)) goto label_15;
	}
	{
	LINE_NUMBER(853);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_lastUnlockLayout;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[4].o), (frame[7].i));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (checkCast(ctx, &class_arc_scene_Element, sp[1].o)));
	LINE_NUMBER(855);
	if (((frame[7].i) % (frame[2].i)) != ((frame[2].i) - (jint(1)))) goto label_18;
	}
	{
	LINE_NUMBER(856);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_lastUnlockLayout;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	}
label_18:;
	{
	LINE_NUMBER(852);
	INST_IINC(7, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(861);
	if ((frame[5].i) >= (frame[3].i)) goto label_20;
	}
	{
	LINE_NUMBER(863);
	clinit_arc_scene_ui_Image(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[1].o)))->F_uiIcon;
	init_arc_scene_ui_Image_arc_graphics_g2d_TextureRegion(ctx, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(864);
	sp[0].o = frame[7].o;
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(866);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_lastUnlockLayout;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(867);
	goto label_25;
	}
label_20:;
	{
	LINE_NUMBER(868);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_lastUnlockLayout;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_add;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_25:;
	{
	LINE_NUMBER(871);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_lastUnlockLayout;
	((func_arc_scene_ui_layout_Table_pack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pack])(ctx, sp[0].o);
	}
label_5:;
	LINE_NUMBER(873);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_toggleMenus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:toggleMenus", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(876);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_shown) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK(sp[0].o))->F_shown = sp[1].i;
	LINE_NUMBER(877);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_fragments_HudFragment_makeStatusTable_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[28];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:makeStatusTable", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(880);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_wavepane;
	init_arc_scene_ui_layout_Table_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(882);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(885);
	clinit_mindustry_ui_IntFormat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_IntFormat);
	init_mindustry_ui_IntFormat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"wave"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(886);
	clinit_mindustry_ui_IntFormat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_IntFormat);
	init_mindustry_ui_IntFormat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"wave.cap"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(887);
	clinit_mindustry_ui_IntFormat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_IntFormat);
	init_mindustry_ui_IntFormat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"wave.enemy"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(888);
	clinit_mindustry_ui_IntFormat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_IntFormat);
	init_mindustry_ui_IntFormat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"wave.enemies"_j))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(889);
	clinit_mindustry_ui_IntFormat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_IntFormat);
	init_mindustry_ui_IntFormat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"wave.enemycore"_j))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(890);
	clinit_mindustry_ui_IntFormat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_IntFormat);
	init_mindustry_ui_IntFormat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"wave.enemycores"_j))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(892);
	clinit_mindustry_ui_IntFormat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_IntFormat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"wave.waiting"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Func_1);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_ui_IntFormat_java_lang_String_arc_func_Func(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(907);
	sp[0].o = frame[1].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(909);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(911);
	((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"waves"_j)));
	LINE_NUMBER(913);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(998);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_ui_fragments_HudFragment$4(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment$4);
	init_mindustry_ui_fragments_HudFragment$4_mindustry_ui_fragments_HudFragment(ctx, sp[2].o, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_66(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_66 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_66);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_arc_scene_ui_layout_Table_arc_func_Cons(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp2 = jfloat(120.0f);
	jfloat temp3 = jfloat(80.0f);
	LINE_NUMBER(1061);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2, temp3);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(1063);
	sp[0].o = (jobject)createArray(ctx, &class_arc_scene_ui_layout_Cell, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[11].o = sp[0].o;
	LINE_NUMBER(1064);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(1));
	frame[12].o = sp[0].o;
	LINE_NUMBER(1066);
	sp[0].o = frame[11].o;
	jint temp4 = jint(0);
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_17(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_17 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_17);
		proxy->F_field11 = (jref) (frame[9].o);
		proxy->F_field10 = (jref) (frame[6].o);
		proxy->F_field9 = (jref) (frame[5].o);
		proxy->F_field8 = (jref) (frame[3].o);
		proxy->F_field7 = (jref) (frame[4].o);
		proxy->F_field6 = (jref) (frame[7].o);
		proxy->F_field5 = (jref) (frame[8].o);
		proxy->F_field4 = (jref) (frame[10].o);
		proxy->F_field3 = (jref) (frame[1].o);
		proxy->F_field2 = (jref) (frame[11].o);
		proxy->F_field1 = (jref) (frame[12].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o);
	LINE_NUMBER(1155);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, (jfloat(8.0f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	LINE_NUMBER(1157);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1183);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_addInfoTable_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:addInfoTable", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1187);
	((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"infotable"_j)));
	LINE_NUMBER(1188);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1190);
	sp[0].o = (jobject) createArray(ctx, &class_float, (jint(1)));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(-1.0f));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1191);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_67(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_67 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_67);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1202);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_27(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_27 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_27);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jint temp0 = jint(2);
	LINE_NUMBER(1206);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1207);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1209);
	clinit_arc_struct_Bits(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Bits);
	init_arc_struct_Bits(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1211);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_68(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_68 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_68);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1231);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(1232);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_HudFragment_canSkipWave_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:canSkipWave", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1235);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveSending) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	if (((jint)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_admin) != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
label_2:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_enemies) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	jint temp0 = (jint)((func_mindustry_ai_WaveSpawner_isSpawning_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_isSpawning_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_HudFragment_shown_R_boolean(jcontext ctx, jobject self) {
	if (!self) return 0;
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:shown", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	// Restore F_shown = 1 so in-game UI is never permanently hidden
	((mindustry_ui_fragments_HudFragment *) frame[0].o)->F_shown = 1;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	if (sp[0].o != nullptr) {
		sp[0].o = (jobject)((mindustry_core_Control *) sp[0].o)->F_input;
		if (sp[0].o != nullptr && ((mindustry_input_InputHandler *) sp[0].o)->F_logicHideHud != 0) goto label_1;
	}
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

void SM_mindustry_ui_fragments_HudFragment_lambda$addInfoTable$2_arc_struct_Bits_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$addInfoTable$2", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1212);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1213);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_statusBits_R_arc_struct_Bits) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_statusBits_R_arc_struct_Bits])(ctx, sp[0].o);
	sp += 1;
	}
label_3:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1214);
	jint temp0 = (jint)((func_arc_struct_Bits_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Bits_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(1215);
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, (frame[1].o));
	LINE_NUMBER(1217);
	if ((frame[2].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(1218);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_statusEffects_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_statusEffects_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_10:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_StatusEffect, sp[0].o));
	LINE_NUMBER(1219);
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, (frame[2].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_id));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[4].o)))->F_uiIcon;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(1220);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[4].o)))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_Image, sp[0].o);
	clinit_arc_scene_ui_Tooltip(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Tooltip);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_69(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_69 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_69);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[2].o = (jobject) proxy;
	}
	init_arc_scene_ui_Tooltip_arc_func_Cons(ctx, sp[1].o, sp[2].o);
	LINE_NUMBER(1221);
	jint temp0 = (jint)((func_arc_scene_ui_Image_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_13:;
	LINE_NUMBER(1224);
	goto label_10;
label_11:;
	{
	LINE_NUMBER(1226);
	((func_arc_struct_Bits_set_arc_struct_Bits) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Bits_set_arc_struct_Bits])(ctx, (frame[0].o), (frame[2].o));
	goto label_5;
	}
label_8:;
	{
	LINE_NUMBER(1228);
	((func_arc_struct_Bits_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Bits_clear])(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(1231);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$addInfoTable$3_mindustry_type_StatusEffect_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$addInfoTable$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1221);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_18(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_18 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_18);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	LINE_NUMBER(1222);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1221);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_fragments_HudFragment_lambda$addInfoTable$4_mindustry_type_StatusEffect_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$addInfoTable$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1222);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[1].o);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_getDuration_mindustry_type_StatusEffect_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_getDuration_mindustry_type_StatusEffect_R_float])(ctx, sp[1].o, (frame[0].o));
	sp += 1;
	if ((floatCompare(temp0, (jfloat(3,402823e+38f)), -1)) < 0) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"\u221e"_j));
	goto label_4;
label_3:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_getDuration_mindustry_type_StatusEffect_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_getDuration_mindustry_type_StatusEffect_R_float])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)SM_mindustry_core_UI_formatTime_float_R_java_lang_String(ctx, temp0);
	sp += 1;
	}
label_4:;
	POP_N(2); // Pop string concat args
	(sp++)->o = (jobject)concatStringsRecipe(ctx, u8"\u0001 [lightgray]\u0001"_j.string, 2, sp[0].o, sp[1].o);
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HudFragment_lambda$addInfoTable$1_Array1_float_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$addInfoTable$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1203);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Payloadc)) == 0) goto label_2;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[3].o)));
	jfloat temp0 = (jfloat)((func_mindustry_gen_Payloadc_payloadUsed_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloadUsed_R_float, (frame[2].o)))(ctx, (frame[2].o));
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(1204);
	if ((frame[1].i) != 0) goto label_6;
	}
	{
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0))) = (jfloat(-1.0f));
	}
label_6:;
	{
	LINE_NUMBER(1205);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$addInfoTable$0_Array1_float_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$addInfoTable$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1192);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Payloadc)) == 0) goto label_2;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[3].o)));
	LINE_NUMBER(1193);
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Payloadc_payloadUsed_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloadUsed_R_float, (frame[2].o)))(ctx, (frame[2].o));
	if ((floatCompare(temp0, temp1, -1)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(1194);
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, (frame[1].o));
	LINE_NUMBER(1195);
	((func_mindustry_gen_Payloadc_contentInfo_arc_scene_ui_layout_Table_float_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_contentInfo_arc_scene_ui_layout_Table_float_float, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o), (jfloat(16.0f)), (jfloat(275.0f)));
	LINE_NUMBER(1196);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jfloat temp1 = (jfloat)((func_mindustry_gen_Payloadc_payloadUsed_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloadUsed_R_float, (frame[2].o)))(ctx, (frame[2].o));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(1199);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0))) = (jfloat(-1.0f));
	LINE_NUMBER(1200);
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, (frame[1].o));
	}
label_4:;
	LINE_NUMBER(1202);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$13_Array1_boolean_Array1_arc_scene_ui_layout_Cell_arc_scene_ui_layout_Table_java_lang_StringBuilder_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_R_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7, jobject param8, jobject param9, jobject param10) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$makeStatusTable$13", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	frame[8].o = param7;
	frame[9].o = param8;
	frame[10].o = param9;
	frame[11].o = param10;
	{
	LINE_NUMBER(1069);
	jint temp0 = (jint)((func_mindustry_ui_fragments_HudFragment_canSkipWave_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_canSkipWave_R_boolean])(ctx, (frame[0].o));
	frame[12].i = temp0;
	LINE_NUMBER(1070);
	if ((frame[12].i) == ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (jint(0))))) goto label_2;
	}
	{
	LINE_NUMBER(1071);
	jint temp0 = (jint)((func_mindustry_ui_fragments_HudFragment_canSkipWave_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_canSkipWave_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(1072);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))))->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))), (jfloat(8.0f)));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(1074);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))))->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))), (jfloat(-42.0f)));
	}
label_6:;
	{
	LINE_NUMBER(1076);
	((func_arc_scene_ui_layout_Table_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_invalidateHierarchy])(ctx, (frame[3].o));
	LINE_NUMBER(1077);
	ARRAY_ACCESS(jbyte, (frame[1].o), (jint(0))) = (frame[12].i);
	}
label_2:;
	{
	LINE_NUMBER(1080);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[4].o), (jint(0)));
	LINE_NUMBER(1083);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_mission;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_mission;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_9;
	}
	{
	LINE_NUMBER(1084);
	sp[0].o = frame[4].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_mission;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1085);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_9:;
	{
	LINE_NUMBER(1089);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_objectives;
	if (sp[0].o == nullptr) goto label_12;
	jint temp0 = (jint)((func_mindustry_game_MapObjectives_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(1090);
	frame[13].i = (jint(1));
	LINE_NUMBER(1091);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_objectives;
	sp[0].o = (jobject)((func_mindustry_game_MapObjectives_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[14].o = sp[0].o;
	}
label_15:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[14].o)))(ctx, (frame[14].o));
	if (temp0 == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[14].o)))(ctx, (frame[14].o));
	frame[15].o = (checkCast(ctx, &class_mindustry_game_MapObjectives$MapObjective, sp[0].o));
	LINE_NUMBER(1092);
	jint temp0 = (jint)((func_mindustry_game_MapObjectives$MapObjective_qualified_R_boolean) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_mindustry_game_MapObjectives$MapObjective_qualified_R_boolean])(ctx, (frame[15].o));
	if (temp0 == 0) goto label_15;
	}
	{
	if (((jint)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[15].o)))->F_hidden) == 0) goto label_18;
	}
	goto label_15;
label_18:;
	{
	LINE_NUMBER(1094);
	sp[0].o = (jobject)((func_mindustry_game_MapObjectives$MapObjective_text_R_java_lang_String) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_mindustry_game_MapObjectives$MapObjective_text_R_java_lang_String])(ctx, (frame[15].o));
	frame[16].o = sp[0].o;
	LINE_NUMBER(1095);
	if ((frame[16].o) == nullptr) goto label_20;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[16].o));
	if (temp0 != 0) goto label_20;
	}
	{
	LINE_NUMBER(1096);
	if ((frame[13].i) != 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"\n\n[white]"_j))));
	}
label_22:;
	{
	LINE_NUMBER(1097);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)SM_mindustry_core_UI_formatIcons_java_lang_String_R_java_lang_String(ctx, (frame[16].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1099);
	frame[13].i = (jint(0));
	}
label_20:;
	LINE_NUMBER(1101);
	goto label_15;
label_16:;
	{
	LINE_NUMBER(1104);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[4].o));
	if (temp0 <= 0) goto label_12;
	}
	{
	LINE_NUMBER(1105);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_12:;
	{
	LINE_NUMBER(1109);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_game_Team_activateUnitFactories_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_activateUnitFactories_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_25;
	}
	{
	LINE_NUMBER(1110);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"[lightgray]"_j))));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"rules.unitfactoryactivation.objective"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_Vars(ctx);
	sp[4].o = (jobject)SF_mindustry_Vars_state;
	sp[4].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[4].o))->F_rules;
	clinit_mindustry_Vars(ctx);
	sp[5].o = (jobject)SF_mindustry_Vars_player;
	sp[5].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[5].o);
	jfloat temp1 = (jfloat)((func_mindustry_game_Rules_unitActivationDelay_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_game_Rules_unitActivationDelay_mindustry_game_Team_R_float])(ctx, sp[4].o, sp[5].o);
	jdouble temp2 = jdouble(temp1);
	clinit_mindustry_Vars(ctx);
	sp[4].o = (jobject)SF_mindustry_Vars_state;
	jdouble temp3 = (jdouble)SM_java_lang_Math_max_double_double_R_double(ctx, (temp2 - ((jdouble)((mindustry_core_GameState *) NULL_CHECK(sp[4].o))->F_tick)), (jdouble(0)));
	sp[4].o = (jobject)SM_mindustry_core_UI_formatTime_float_R_java_lang_String(ctx, (jfloat(temp3)));
	sp[4].o = (jobject)concatStringsRecipe(ctx, u8"[accent]\u0001"_j.string, 1, sp[4].o);
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[white]\n"_j))));
	}
label_25:;
	{
	LINE_NUMBER(1113);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) != 0) goto label_27;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attackMode) == 0) goto label_27;
	}
	{
	LINE_NUMBER(1114);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_present;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Intf_1(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Intf_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Intf_1);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_sum_arc_func_Intf_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sum_arc_func_Intf_R_int])(ctx, sp[0].o, sp[1].o);
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint(1)));
	frame[13].i = temp1;
	LINE_NUMBER(1115);
	sp[0].o = frame[4].o;
	sp += 1;
	if ((frame[13].i) <= (jint(1))) goto label_30;
	}
	{
	sp[0].o = (jobject)((func_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence])(ctx, (frame[5].o), (frame[13].i));
	sp += 1;
	goto label_31;
	}
label_30:;
	{
	sp[0].o = (jobject)((func_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence])(ctx, (frame[6].o), (frame[13].i));
	sp += 1;
	}
label_31:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1116);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_27:;
	{
	LINE_NUMBER(1120);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_afterGameOver) == 0) goto label_33;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(1121);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_33:;
	{
	LINE_NUMBER(1124);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) != 0) goto label_35;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_35;
	}
	{
	LINE_NUMBER(1125);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"[lightgray]"_j))));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"sector.curcapture"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_35:;
	{
	LINE_NUMBER(1128);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) != 0) goto label_37;
	}
	{
	LINE_NUMBER(1129);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_37:;
	{
	LINE_NUMBER(1132);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_winWave) <= (jint(1))) goto label_39;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp0 = (jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_winWave;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (temp0 < ((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave)) goto label_39;
	}
	{
	LINE_NUMBER(1133);
	sp[0].o = frame[4].o;
	sp[1].o = frame[7].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_wave;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	sp[1].o = (jobject)((func_mindustry_ui_IntFormat_get_int_int_R_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_IntFormat_get_int_int_R_java_lang_CharSequence])(ctx, sp[1].o, temp0, ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_winWave));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_41;
	}
label_39:;
	{
	LINE_NUMBER(1135);
	sp[0].o = frame[4].o;
	sp[1].o = frame[8].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((func_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence])(ctx, sp[1].o, ((jint)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_wave));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_41:;
	{
	LINE_NUMBER(1137);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	LINE_NUMBER(1139);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_enemies) <= 0) goto label_43;
	}
	{
	LINE_NUMBER(1140);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_enemies) != (jint(1))) goto label_45;
	}
	{
	LINE_NUMBER(1141);
	sp[0].o = frame[4].o;
	sp[1].o = frame[9].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((func_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence])(ctx, sp[1].o, ((jint)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_enemies));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_47;
	}
label_45:;
	{
	LINE_NUMBER(1143);
	sp[0].o = frame[4].o;
	sp[1].o = frame[10].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((func_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence])(ctx, sp[1].o, ((jint)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_enemies));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_47:;
	{
	LINE_NUMBER(1145);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	}
label_43:;
	{
	LINE_NUMBER(1148);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTimer) == 0) goto label_48;
	}
	{
	LINE_NUMBER(1149);
	sp[0].o = frame[4].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_logic;
	jint temp0 = (jint)((func_mindustry_core_Logic_isWaitingWave_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_Logic_isWaitingWave_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_50;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"wave.waveInProgress"_j))));
	sp += 1;
	goto label_51;
	}
label_50:;
	{
	sp[0].o = frame[11].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence])(ctx, sp[0].o, (jint((((jfloat)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_wavetime) / (jfloat(60.0f))))));
	sp += 1;
	}
label_51:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_52;
	}
label_48:;
	{
	LINE_NUMBER(1150);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_enemies) != 0) goto label_52;
	}
	{
	LINE_NUMBER(1151);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"waiting"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_52:;
	{
	LINE_NUMBER(1154);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$14_mindustry_game_Teams$TeamData_R_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$makeStatusTable$14", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1114);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_cores;
	jint temp0 = (jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$1_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$makeStatusTable$1", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1009);
	frame[2].f = (jfloat(40.0f));
	LINE_NUMBER(1010);
	frame[3].f = (jfloat(-20.0f));
	LINE_NUMBER(1011);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(0)));
	LINE_NUMBER(1012);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_34(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_34 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_34);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1021);
	sp[0].o = (jobject) createArray(ctx, &class_float, (jint(1)));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(0));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1022);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_28(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_28 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_28);
		sp[0].o = (jobject) proxy;
	}
	frame[5].o = sp[0].o;
	LINE_NUMBER(1023);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Floatp_7(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Floatp_7 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Floatp_7);
		sp[0].o = (jobject) proxy;
	}
	frame[6].o = sp[0].o;
	LINE_NUMBER(1025);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_ui_fragments_HudFragment$1SideBar(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment$1SideBar);
	sp[3].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Floatp_8(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Floatp_8 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Floatp_8);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_29(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_29 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_29);
		sp[5].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HudFragment$1SideBar_mindustry_ui_fragments_HudFragment_arc_func_Floatp_arc_func_Boolp_boolean(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_ui_fragments_HudFragment$5(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment$5);
	sp[3].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Floatp_9(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Floatp_9 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Floatp_9);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_30(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_30 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_30);
		sp[5].o = (jobject) proxy;
	}
	jint temp2 = jint(1);
	jint temp3 = jint(0);
	clinit_mindustry_graphics_Pal(ctx);
	sp[6].o = (jobject)SF_mindustry_graphics_Pal_accent;
	init_mindustry_ui_fragments_HudFragment$5_mindustry_ui_fragments_HudFragment_arc_func_Floatp_arc_func_Boolp_boolean_boolean_arc_graphics_Color_arc_func_Boolp_Array1_float(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o, temp2, temp3, sp[6].o, (frame[5].o), (frame[4].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp4 = frame[2].f;
	LINE_NUMBER(1045);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp4);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[3].f));
	LINE_NUMBER(1047);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_19(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_19 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_19);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_bounded;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxWidth_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxWidth_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(54.0f)));
	LINE_NUMBER(1049);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_fragments_HudFragment$1SideBar(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment$1SideBar);
	sp[2].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Floatp_10(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Floatp_10 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Floatp_10);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_31(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_31 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_31);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HudFragment$1SideBar_mindustry_ui_fragments_HudFragment_arc_func_Floatp_arc_func_Boolp_boolean(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jint(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp5 = frame[2].f;
	LINE_NUMBER(1055);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp5);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[3].f));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_70(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_70 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_70);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1060);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_get_int_R_java_lang_Object])(ctx, sp[0].o, (jint(1)));
	((func_arc_scene_Element_toFront) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_Element, sp[0].o)))->vtable)[VTABLE_arc_scene_Element_toFront])(ctx, (checkCast(ctx, &class_arc_scene_Element, sp[0].o)));
	LINE_NUMBER(1061);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$12_arc_func_Boolp_mindustry_ui_fragments_HudFragment$1SideBar(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$makeStatusTable$12", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1057);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_displayAmmo_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_displayAmmo_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_ammo;
	goto label_2;
label_1:;
	{
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_items;
	goto label_2;
label_3:;
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_health;
label_2:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1058);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$11_arc_func_Boolp_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$makeStatusTable$11", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1055);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_displayAmmo_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_displayAmmo_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
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

jfloat SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$10_arc_func_Boolp_arc_func_Floatp_R_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$makeStatusTable$10", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1051);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	{
	LINE_NUMBER(1052);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_displayAmmo_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_displayAmmo_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_ammof_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_ammof_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1053);
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	jfloat temp0 = (jfloat)((func_arc_func_Floatp_get_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatp, INDEX_arc_func_Floatp_get_R_float, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(1054);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_healthf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_healthf_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	LINE_NUMBER(1051);
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$9_R_arc_graphics_g2d_TextureRegion(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$makeStatusTable$9", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(1047);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_icon_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_icon_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$8_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$makeStatusTable$8", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(1029);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$7_Array1_float_R_float(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$makeStatusTable$7", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1029);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	{
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)));
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$6_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$makeStatusTable$6", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(1027);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$5_R_float(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$makeStatusTable$5", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(1027);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_healthf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_healthf_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$4_R_float(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$makeStatusTable$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(1023);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Payloadc)) == 0) goto label_2;
	}
	{
	frame[0].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[1].o)));
	jfloat temp0 = (jfloat)((func_mindustry_gen_Payloadc_payloadUsed_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloadUsed_R_float, (frame[0].o)))(ctx, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_type_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_type_R_mindustry_type_UnitType])(ctx, sp[0].o);
	jfloat temp1 = temp0 / ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_payloadCapacity);
	sp[0].f = temp1;
	sp += 1;
	goto label_4;
	}
label_2:;
	INST_FCONST(0);
label_4:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$3_R_boolean(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$makeStatusTable$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(1022);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Payloadc)) == 0) goto label_2;
	}
	{
	frame[0].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[1].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[0].o)))(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$2(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$makeStatusTable$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(1013);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_mobile;
	if ((--sp)->i == 0) goto label_1;
	{
	LINE_NUMBER(1014);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_unitClear_mindustry_gen_Player(ctx, sp[0].o);
	LINE_NUMBER(1015);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_recentRespawnTimer = (jfloat(1));
	LINE_NUMBER(1016);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_controlledType = (jref) (jobject(nullptr));
	LINE_NUMBER(1017);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_droppingItem = (jint(0));
	}
label_1:;
	LINE_NUMBER(1019);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$0_java_lang_StringBuilder_java_lang_Integer_R_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$makeStatusTable$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(893);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(894);
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[1].o));
	frame[2].i = (temp0 / (60));
	LINE_NUMBER(895);
	jint temp1 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[1].o));
	frame[3].i = (temp1 % (60));
	LINE_NUMBER(896);
	if ((frame[2].i) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(897);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(898);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8":"_j))));
	LINE_NUMBER(899);
	if ((frame[3].i) >= (10)) goto label_4;
	}
	{
	LINE_NUMBER(900);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"0"_j))));
	}
label_4:;
	{
	LINE_NUMBER(903);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(904);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$showUnlock$0_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$showUnlock$0", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(796);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	init_arc_scene_ui_layout_Table_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(797);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_35(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_35 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_35);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(804);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o), (jfloat(12.0f)));
	LINE_NUMBER(806);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(809);
	clinit_arc_scene_ui_Image(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[1].o)))->F_uiIcon;
	init_arc_scene_ui_Image_arc_graphics_g2d_TextureRegion(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(810);
	sp[0].o = frame[4].o;
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(812);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o), (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(48.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(815);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(816);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@unlocked"_j))));
	LINE_NUMBER(817);
	((func_arc_scene_ui_layout_Table_pack) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_pack])(ctx, (frame[2].o));
	LINE_NUMBER(820);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_table_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_table_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(821);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(822);
	sp[0].o = frame[5].o;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = (jfloat)((func_arc_scene_ui_layout_Table_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getPrefHeight_R_float])(ctx, (frame[2].o));
	((func_arc_scene_ui_layout_Table_setTranslation_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setTranslation_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(823);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(3)));
	jint temp2 = jint(0);
	jfloat temp3 = jfloat(0);
	jfloat temp4 = (jfloat)((func_arc_scene_ui_layout_Table_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getPrefHeight_R_float])(ctx, (frame[2].o));
	jfloat temp5 = -temp4;
	jfloat temp6 = jfloat(1);
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_fade;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_translateBy_float_float_float_arc_math_Interp_R_arc_scene_actions_TranslateByAction(ctx, temp3, temp5, temp6, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp7 = jint(1);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_delay_float_R_arc_scene_actions_DelayAction(ctx, (jfloat(2.5f)));
	ARRAY_ACCESS(jobject, sp[1].o, temp7) = sp[2].o;
	jint temp8 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_36(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_36 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_36);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	LINE_NUMBER(825);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_run_java_lang_Runnable_R_arc_scene_actions_RunnableAction(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp8) = sp[2].o;
	LINE_NUMBER(823);
	((func_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(830);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_lastUnlockTable = (jref) (frame[5].o);
	LINE_NUMBER(831);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_lastUnlockLayout = (jref) (frame[3].o);
	LINE_NUMBER(832);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$showUnlock$2_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$showUnlock$2", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(825);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(3)));
	jint temp0 = jint(0);
	jfloat temp1 = jfloat(0);
	jfloat temp2 = (jfloat)((func_arc_scene_ui_layout_Table_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getPrefHeight_R_float])(ctx, (frame[2].o));
	jfloat temp3 = jfloat(1);
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_fade;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_translateBy_float_float_float_arc_math_Interp_R_arc_scene_actions_TranslateByAction(ctx, temp1, temp2, temp3, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp4 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_37(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_37 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_37);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_run_java_lang_Runnable_R_arc_scene_actions_RunnableAction(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp5 = jint(2);
	LINE_NUMBER(828);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_remove_R_arc_scene_actions_RemoveActorAction(ctx);
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	LINE_NUMBER(825);
	((func_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$showUnlock$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$showUnlock$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(826);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_lastUnlockTable = (jref) (jobject(nullptr));
	LINE_NUMBER(827);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_lastUnlockLayout = (jref) (jobject(nullptr));
	LINE_NUMBER(828);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$showUnlock$1_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$showUnlock$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(798);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(799);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, (frame[1].o));
	LINE_NUMBER(800);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_lastUnlockLayout = (jref) (jobject(nullptr));
	LINE_NUMBER(801);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_lastUnlockTable = (jref) (jobject(nullptr));
	}
label_1:;
	LINE_NUMBER(803);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$showToast$0_arc_scene_style_Drawable_float_java_lang_String(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$showToast$0", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(757);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_uiNotify;
	jint temp0 = (jint)((func_arc_audio_Sound_play_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_play_R_int])(ctx, sp[0].o);
	LINE_NUMBER(759);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	init_arc_scene_ui_layout_Table_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(760);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_38(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_38 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_38);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(765);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o), (jfloat(12.0f)));
	LINE_NUMBER(766);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o), (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(767);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) <= 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, (frame[4].o), (frame[1].f));
	}
label_6:;
	{
	LINE_NUMBER(768);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o), (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(280.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	((func_arc_scene_ui_Label_setAlignment_int_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_Label_setAlignment_int_int])(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o)), (jint(1)), (jint(1)));
	LINE_NUMBER(769);
	((func_arc_scene_ui_layout_Table_pack) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_pack])(ctx, (frame[3].o));
	LINE_NUMBER(772);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_table_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_table_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(773);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(774);
	sp[0].o = frame[5].o;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = (jfloat)((func_arc_scene_ui_layout_Table_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getPrefHeight_R_float])(ctx, (frame[3].o));
	((func_arc_scene_ui_layout_Table_setTranslation_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setTranslation_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(775);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(3)));
	jint temp2 = jint(0);
	jfloat temp3 = jfloat(0);
	jfloat temp4 = (jfloat)((func_arc_scene_ui_layout_Table_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getPrefHeight_R_float])(ctx, (frame[3].o));
	jfloat temp5 = -temp4;
	jfloat temp6 = jfloat(1);
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_fade;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_translateBy_float_float_float_arc_math_Interp_R_arc_scene_actions_TranslateByAction(ctx, temp3, temp5, temp6, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp7 = jint(1);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_delay_float_R_arc_scene_actions_DelayAction(ctx, (jfloat(2.5f)));
	ARRAY_ACCESS(jobject, sp[1].o, temp7) = sp[2].o;
	jint temp8 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_39(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_39 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_39);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	LINE_NUMBER(777);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_run_java_lang_Runnable_R_arc_scene_actions_RunnableAction(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp8) = sp[2].o;
	LINE_NUMBER(775);
	((func_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(778);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$showToast$2_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$showToast$2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(777);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(2)));
	jint temp0 = jint(0);
	jfloat temp1 = jfloat(0);
	jfloat temp2 = (jfloat)((func_arc_scene_ui_layout_Table_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getPrefHeight_R_float])(ctx, (frame[1].o));
	jfloat temp3 = jfloat(1);
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_fade;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_translateBy_float_float_float_arc_math_Interp_R_arc_scene_actions_TranslateByAction(ctx, temp1, temp2, temp3, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp4 = jint(1);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_remove_R_arc_scene_actions_RemoveActorAction(ctx);
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	((func_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$showToast$1_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$showToast$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(761);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudfrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_HudFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(762);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(764);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$build$83_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$83", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(670);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"saving"_j)));
	LINE_NUMBER(671);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_32(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_32 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_32);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(672);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@saving"_j))));
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(673);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HudFragment_lambda$build$84_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$84", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(671);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_saves;
	jint temp0 = (jint)((func_mindustry_game_Saves_isSaving_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_isSaving_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$build$79_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$79", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(660);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"nearpoint"_j)));
	LINE_NUMBER(661);
	sp[0].o = frame[0].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(662);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black6;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_71(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_71 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_71);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(6.0f);
	LINE_NUMBER(665);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_72(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_72 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_72);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o))))->F_color;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (jfloat(0));
	LINE_NUMBER(666);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$build$82_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$82", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(665);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp0 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_spawner;
	jint temp1 = (jint)((func_mindustry_ai_WaveSpawner_playerNear_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_playerNear_R_boolean])(ctx, sp[1].o);
	jint temp2 = (jint)SM_arc_math_Mathf_num_boolean_R_int(ctx, temp1);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, temp0, (jfloat(temp2)), (jfloat(0.1f)));
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = temp3;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$build$80_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$80", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(662);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@nearpoint"_j))));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_73(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_73 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_73);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(663);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jint temp0 = jint(1);
	jint temp1 = jint(1);
	LINE_NUMBER(664);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(662);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$build$81_arc_scene_ui_Label(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$81", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(663);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_scarlet;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(10.0f)), (jfloat(1)));
	sp[1].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o, temp0);
	((func_arc_scene_ui_Label_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$build$57_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$57", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(580);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(582);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"macnotch"_j))));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(583);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (clinit_mindustry_Vars(ctx), (jfloat)SF_mindustry_Vars_macNotchHeight));
	}
label_2:;
	{
	LINE_NUMBER(586);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_33(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_33 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_33);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(588);
	((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"coreinfo"_j)));
	LINE_NUMBER(590);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_74(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_74 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_74);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_34(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_34 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_34);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(592);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_75(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_75 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_75);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(625);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(627);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(628);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"guardian"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(629);
	frame[4].i = (6);
	LINE_NUMBER(631);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_76(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_76 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_76);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (frame[4].i);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(652);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(320.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"boss"_j))));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_35(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_35 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_35);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(7.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(654);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black3;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_77(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_77 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_77);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_touchable_arc_scene_event_Touchable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_touchable_arc_scene_event_Touchable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_78(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_78 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_78);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_79(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_79 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_79);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(655);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(656);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$build$77_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$77", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(655);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_36(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_36 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_36);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_HudFragment_lambda$build$78_arc_scene_ui_layout_Table_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$78", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(655);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	jfloat temp0 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a;
	jint temp1 = (jint)SM_arc_math_Mathf_num_boolean_R_int(ctx, ((jint)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_showHudText));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, temp0, (jfloat(temp1)), (jfloat(0.2f)));
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = temp2;
	if ((floatCompare(temp2, (jfloat(1,000000e-03f)), -1)) < 0) goto label_1;
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

void M_mindustry_ui_fragments_HudFragment_lambda$build$76_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$76", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(654);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_hudLabel = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$build$74_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$74", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(654);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(4.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_20(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_20 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_20);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_fragments_HudFragment_lambda$build$75_R_java_lang_CharSequence(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$75", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(654);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_hudText;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HudFragment_lambda$build$73_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$73", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(652);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_boss_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_boss_R_mindustry_gen_Unit])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_mobile;
	if ((--sp)->i == 0) goto label_2;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
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

void SM_mindustry_ui_fragments_HudFragment_lambda$build$69_java_lang_StringBuilder_int_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$69", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(631);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o), (jfloat(10.0f)));
	clinit_mindustry_ui_Bar(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_21(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_21 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_21);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_22(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_22 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_22);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Floatp_11(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Floatp_11 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Floatp_11);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_ui_Bar_arc_func_Prov_arc_func_Prov_arc_func_Floatp(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	LINE_NUMBER(651);
	sp[1].o = (jobject)((func_mindustry_ui_Bar_blink_arc_graphics_Color_R_mindustry_ui_Bar) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_Bar_blink_arc_graphics_Color_R_mindustry_ui_Bar])(ctx, sp[1].o, sp[2].o);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[2].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0.6f)));
	sp[1].o = (jobject)((func_mindustry_ui_Bar_outline_arc_graphics_Color_float_R_mindustry_ui_Bar) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_Bar_outline_arc_graphics_Color_float_R_mindustry_ui_Bar])(ctx, sp[1].o, sp[2].o, (jfloat(7.0f)));
	LINE_NUMBER(632);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(651);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(631);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ui_fragments_HudFragment_lambda$build$72_R_float(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$72", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(644);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_boss_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_boss_R_mindustry_gen_Unit])(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(645);
	frame[0].f = (jfloat(0));
	frame[1].f = (jfloat(0));
	LINE_NUMBER(646);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_bosses;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(647);
	frame[0].f = ((frame[0].f) + ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[3].o)))->F_maxHealth));
	LINE_NUMBER(648);
	frame[1].f = ((frame[1].f) + ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[3].o)))->F_health));
	LINE_NUMBER(649);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(650);
	if ((floatCompare((frame[0].f), (jfloat(0)), -1)) != 0) goto label_9;
	}
	INST_FCONST(0);
	goto label_10;
label_9:;
	{
	jfloat temp0 = (frame[1].f) / (frame[0].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_10:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_fragments_HudFragment_lambda$build$71_R_arc_graphics_Color(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$71", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(643);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_health;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_fragments_HudFragment_lambda$build$70_java_lang_StringBuilder_int_java_lang_String_R_java_lang_CharSequence(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$70", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(633);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(634);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[3].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_bosses;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size), (frame[1].i));
	if (temp0 >= temp1) goto label_3;
	}
	{
	LINE_NUMBER(635);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_teams;
	sp[1].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[1].o))->F_bosses;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o))))->F_type;
	sp[1].o = (jobject)((func_mindustry_type_UnitType_emoji_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_UnitType_emoji_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(634);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(637);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_bosses;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= (frame[1].i)) goto label_6;
	}
	{
	LINE_NUMBER(638);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"[accent]+[]"_j))));
	}
label_6:;
	{
	LINE_NUMBER(640);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(641);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(642);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$build$60_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$60", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(594);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_coreItems;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_37(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_37 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_37);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(596);
	frame[2].f = (jfloat(240.0f));
	LINE_NUMBER(598);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_teamCoreDamage;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_40(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_40 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_40);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(599);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ResetEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_80(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_80 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_80);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(604);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_81(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_81 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_81);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_38(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_38 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_38);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_collapser_arc_func_Cons_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_collapser_arc_func_Cons_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	LINE_NUMBER(623);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_touchable_arc_scene_event_Touchable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_touchable_arc_scene_event_Touchable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(624);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(625);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_HudFragment_lambda$build$68_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$68", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(615);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_hasCore_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_hasCore_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(616);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_coreAttackTime = (jfloat(0));
	LINE_NUMBER(617);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(619);
	jint temp0 = (jint)((func_mindustry_ui_fragments_HudFragment_shown_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_shown_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
label_4:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(621);
	sp[0].o = frame[0].o;
	jfloat temp0 = ((jfloat)((mindustry_ui_fragments_HudFragment *) NULL_CHECK(sp[0].o))->F_coreAttackTime) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK(sp[0].o))->F_coreAttackTime = temp0;
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$build$64_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$64", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(604);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black6;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@coreattack"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_82(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_82 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_82);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(605);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_83(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_83 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_83);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(613);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(604);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$build$67_arc_scene_ui_Label(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$67", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(613);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_orange;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_scarlet;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(2)), (jfloat(1)));
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$build$65_arc_scene_ui_Label(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$65", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(606);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_41(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_41 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_41);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Label_tapped_java_lang_Runnable_R_arc_scene_event_InputListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_tapped_java_lang_Runnable_R_arc_scene_event_InputListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(611);
	sp[0].o = frame[0].o;
	clinit_arc_scene_event_HandCursorListener(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_event_HandCursorListener);
	init_arc_scene_event_HandCursorListener(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_scene_ui_Label_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(612);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$build$66(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$66", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(607);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_lastDamagedCore;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(608);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_control;
	sp[2].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[2].o))->F_lastDamagedCore;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_input_InputHandler_panCamera_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_panCamera_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(610);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$build$63_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$63", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(600);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_coreAttackTime = (jfloat(0));
	LINE_NUMBER(601);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$build$62_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$62", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(598);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_coreAttackTime = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_HudFragment_lambda$build$61_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$61", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(594);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"coreitems"_j))));
	if (temp0 == 0) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_mobile;
	if ((--sp)->i != 0) goto label_1;
	{
	jint temp0 = (jint)((func_mindustry_ui_fragments_HudFragment_shown_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_shown_R_boolean])(ctx, (frame[0].o));
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

jbool M_mindustry_ui_fragments_HudFragment_lambda$build$59_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$59", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(590);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	jint temp0 = (jint)((func_mindustry_core_NetServer_isWaitingForPlayers_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetServer_isWaitingForPlayers_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_pauseDisableDur), (jfloat(0)), -1)) <= 0) goto label_1;
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

void SM_mindustry_ui_fragments_HudFragment_lambda$build$58_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$58", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(590);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(36.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$build$23_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$23", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(357);
	((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"overlaymarker"_j)));
	LINE_NUMBER(358);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(360);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_3;
	}
	{
	LINE_NUMBER(362);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_scene_ui_layout_Table$DrawRect_3(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_scene_ui_layout_Table$DrawRect_3 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_scene_ui_layout_Table$DrawRect_3);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(367);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(370);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_23(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_23 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_23);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	LINE_NUMBER(371);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jint temp0 = jint(1);
	LINE_NUMBER(372);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_39(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_39 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_39);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(373);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	LINE_NUMBER(374);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_touchable_arc_scene_event_Touchable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_touchable_arc_scene_event_Touchable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(20.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-40.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(376);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(378);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_84(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_84 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_84);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_40(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_40 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_40);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(446);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(448);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(449);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(450);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_3:;
	{
	LINE_NUMBER(453);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_42(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_42 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_42);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(472);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(3)));
	jint temp0 = jint(0);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[2].o);
	frame[2].o = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[2].o);
	frame[3].o = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_mindustry_ui_fragments_HudFragment$2(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment$2);
	init_mindustry_ui_fragments_HudFragment$2_mindustry_ui_fragments_HudFragment(ctx, sp[2].o, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"waves/editor"_j));
	LINE_NUMBER(484);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(486);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_41(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_41 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_41);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(487);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"waves"_j)));
	LINE_NUMBER(489);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_85(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_85 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_85);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp3 = jfloat(329.0f);
	LINE_NUMBER(510);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp3);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"statustable"_j))));
	LINE_NUMBER(512);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(514);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, (jfloat(329.0f)));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[1].o);
	((func_mindustry_ui_fragments_HudFragment_addInfoTable_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_addInfoTable_arc_scene_ui_layout_Table])(ctx, sp[0].o, (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[1].o)));
	LINE_NUMBER(516);
	((arc_scene_Element *) NULL_CHECK((frame[3].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"editor"_j)));
	LINE_NUMBER(517);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_buttonEdge4;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_86(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_86 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_86);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp4 = jfloat(329.0f);
	LINE_NUMBER(536);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp4);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(537);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_31;
	}
	{
	LINE_NUMBER(538);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Floatp_12(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Floatp_12 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Floatp_12);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_spacerY_arc_func_Floatp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_spacerY_arc_func_Floatp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_31:;
	{
	LINE_NUMBER(548);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(549);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_42(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_42 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_42);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(552);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_87(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_87 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_87);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(575);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(576);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$build$50_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$50", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(553);
	((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"fps/ping"_j)));
	LINE_NUMBER(554);
	sp[0].o = frame[1].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(555);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(4.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_43(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_43 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_43);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(556);
	clinit_mindustry_ui_IntFormat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_IntFormat);
	init_mindustry_ui_IntFormat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fps"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(557);
	clinit_mindustry_ui_IntFormat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_IntFormat);
	init_mindustry_ui_IntFormat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ping"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(558);
	clinit_mindustry_ui_IntFormat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_IntFormat);
	init_mindustry_ui_IntFormat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tps"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(559);
	clinit_mindustry_ui_IntFormat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_IntFormat);
	init_mindustry_ui_IntFormat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"memory"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(560);
	clinit_mindustry_ui_IntFormat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_IntFormat);
	init_mindustry_ui_IntFormat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"memory2"_j))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(562);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_24(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_24 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_24);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fps"_j))));
	LINE_NUMBER(563);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(565);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_android) == 0) goto label_11;
	}
	{
	LINE_NUMBER(566);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_25(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_25 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_25);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"memory2"_j))));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(568);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_26(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_26 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_26);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"memory"_j))));
	}
label_13:;
	{
	LINE_NUMBER(570);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(572);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_27(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_27 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_27);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_net;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_44(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_44 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_44);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ping"_j))));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(573);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_28(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_28 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_28);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_net;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_45(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_45 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_45);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tps"_j))));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(575);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_fragments_HudFragment_lambda$build$56_mindustry_ui_IntFormat_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$56", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(573);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp += 1;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_serverTps) != (jint(-1))) goto label_1;
	}
	INST_BIPUSH(60);
	goto label_2;
label_1:;
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_state;
	sp[-1].i = ((mindustry_core_GameState *) NULL_CHECK(sp[-1].o))->F_serverTps;
label_2:;
	POP_N(2); // Pop method args
	sp->o = (jobject)((func_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence])(ctx, sp[0].o, sp[1].i);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_fragments_HudFragment_lambda$build$55_mindustry_ui_IntFormat_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$55", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(572);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_netClient;
	jint temp0 = (jint)((func_mindustry_core_NetClient_getPing_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_NetClient_getPing_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_fragments_HudFragment_lambda$build$54_mindustry_ui_IntFormat_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$54", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(568);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_app;
	jlong temp0 = (jlong)((func_arc_Application_getJavaHeap_R_long) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getJavaHeap_R_long, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence])(ctx, sp[0].o, (jint(((temp0 / (jlong(1024ll))) / (jlong(1024ll))))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_fragments_HudFragment_lambda$build$53_mindustry_ui_IntFormat_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$53", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(566);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_app;
	jlong temp0 = (jlong)((func_arc_Application_getJavaHeap_R_long) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getJavaHeap_R_long, sp[1].o))(ctx, sp[1].o);
	jint temp1 = jint(((temp0 / (jlong(1024ll))) / (jlong(1024ll))));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_app;
	jlong temp2 = (jlong)((func_arc_Application_getNativeHeap_R_long) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getNativeHeap_R_long, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_ui_IntFormat_get_int_int_R_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_IntFormat_get_int_int_R_java_lang_CharSequence])(ctx, sp[0].o, temp1, (jint(((temp2 / (jlong(1024ll))) / (jlong(1024ll))))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_fragments_HudFragment_lambda$build$52_mindustry_ui_IntFormat_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$52", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(562);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getFramesPerSecond_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getFramesPerSecond_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_HudFragment_lambda$build$51_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$51", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(555);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fps"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_fragments_HudFragment_shown_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_shown_R_boolean])(ctx, (frame[0].o));
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

jbool M_mindustry_ui_fragments_HudFragment_lambda$build$49_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$49", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(549);
	jint temp0 = (jint)((func_mindustry_ui_fragments_HudFragment_shown_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_shown_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
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

jfloat SM_mindustry_ui_fragments_HudFragment_lambda$build$48_R_float(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$48", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(539);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	frame[1].o = sp[0].o;
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_input_MobileInput)) == 0) goto label_2;
	}
	{
	frame[0].o = (checkCast(ctx, &class_mindustry_input_MobileInput, (frame[1].o)));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"editor-blocks-shown"_j))));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(540);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	jfloat temp1 = (jfloat(temp0)) / (jfloat(2));
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	popStackFrame(ctx);
	return (temp1 / temp2);
	}
label_5:;
	{
	LINE_NUMBER(541);
	jint temp0 = (jint)((func_mindustry_input_MobileInput_hasSchematic_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_hasSchematic_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_6;
	}
	(sp++)->f = jfloat(156.0f);
	popStackFrame(ctx);
	INST_FRETURN();
label_6:;
	{
	LINE_NUMBER(542);
	jint temp0 = (jint)((func_mindustry_input_MobileInput_showCancel_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_showCancel_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	(sp++)->f = jfloat(50.0f);
	popStackFrame(ctx);
	INST_FRETURN();
label_2:;
	{
	LINE_NUMBER(544);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$build$41_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$41", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(518);
	((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"teams"_j)));
	LINE_NUMBER(520);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_88(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_88 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_88);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(532);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(534);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_89(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_89 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_89);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_46(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_46 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_46);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(536);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HudFragment_lambda$build$47_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$47", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(534);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"editor-blocks-shown"_j))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$build$42_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$42", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(521);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	LINE_NUMBER(522);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_baseTeams;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_5;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(523);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNoneTogglei;
	jfloat temp0 = jfloat(33.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_43(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_43 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_43);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	jfloat temp1 = jfloat(45.0f);
	LINE_NUMBER(524);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[5].o = (checkCast(ctx, &class_arc_scene_ui_ImageButton, sp[0].o));
	LINE_NUMBER(525);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getImageCell_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getImageCell_R_arc_scene_ui_layout_Cell])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(526);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[5].o));
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[4].o)))->F_color;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUpColor = (jref) sp[1].o;
	LINE_NUMBER(527);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_44(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_44 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_44);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(522);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(530);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_downOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_45(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_45 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_45);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(45.0f);
	LINE_NUMBER(531);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_90(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_90 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_90);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(532);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$build$46_arc_scene_ui_ImageButton(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$46", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(531);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"editor-blocks-shown"_j))));
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_upOpen;
	goto label_2;
label_1:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_downOpen;
label_2:;
	sp -= 2;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$build$45(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$45", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(530);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"editor-blocks-shown"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"editor-blocks-shown"_j))));
	sp += 2;
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 3;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[2].i);
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$build$44_arc_scene_ui_ImageButton_mindustry_game_Team(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$44", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(527);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
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

void SM_mindustry_ui_fragments_HudFragment_lambda$build$43_mindustry_game_Team(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$43", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(523);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_setPlayerTeamEditor_mindustry_gen_Player_mindustry_game_Team(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$build$38_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$38", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(491);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_ui_fragments_HudFragment_makeStatusTable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_makeStatusTable_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"status"_j))));
	LINE_NUMBER(493);
	clinit_mindustry_ui_fragments_HudFragment$3(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment$3);
	init_mindustry_ui_fragments_HudFragment$3_mindustry_ui_fragments_HudFragment(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(503);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_play;
	sp[2].o = frame[2].o;
	jfloat temp0 = jfloat(30.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_46(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_46 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_46);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	LINE_NUMBER(509);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"skip"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	((func_arc_scene_ui_ImageButton_toBack) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_ImageButton, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_ImageButton_toBack])(ctx, (checkCast(ctx, &class_arc_scene_ui_ImageButton, sp[0].o)));
	LINE_NUMBER(510);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_HudFragment_lambda$build$40_arc_scene_ui_ImageButton_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$40", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(509);
	jint temp0 = (jint)((func_mindustry_ui_fragments_HudFragment_canSkipWave_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_canSkipWave_R_boolean])(ctx, (frame[0].o));
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

void SM_mindustry_ui_fragments_HudFragment_lambda$build$39(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$39", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(504);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	if (((jint)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_admin) == 0) goto label_1;
	}
	{
	LINE_NUMBER(505);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	clinit_mindustry_net_Packets$AdminAction(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$AdminAction_wave;
	SM_mindustry_gen_Call_adminRequest_mindustry_gen_Player_mindustry_net_Packets$AdminAction_java_lang_Object(ctx, sp[0].o, sp[1].o, (jobject(nullptr)));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(507);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logic;
	((func_mindustry_core_Logic_skipWave) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Logic_skipWave])(ctx, sp[0].o);
	}
label_3:;
	LINE_NUMBER(509);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_HudFragment_lambda$build$37_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$37", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(486);
	jint temp0 = (jint)((func_mindustry_ui_fragments_HudFragment_shown_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_shown_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
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

void M_mindustry_ui_fragments_HudFragment_lambda$build$35(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$35", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(454);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_toggleMenus;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_chatfrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_ChatFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasDialog_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasDialog_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasField_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasField_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(455);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ui-hidden"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_47(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_47 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_47);
		sp[2].o = (jobject) proxy;
	}
	((func_arc_Settings_getBoolOnce_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBoolOnce_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(458);
	((func_mindustry_ui_fragments_HudFragment_toggleMenus) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_toggleMenus])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(461);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_skipWave;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_fragments_HudFragment_canSkipWave_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_canSkipWave_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasDialog_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasDialog_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasField_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasField_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(462);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	if (((jint)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_admin) == 0) goto label_6;
	}
	{
	LINE_NUMBER(463);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	clinit_mindustry_net_Packets$AdminAction(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$AdminAction_wave;
	SM_mindustry_gen_Call_adminRequest_mindustry_gen_Player_mindustry_net_Packets$AdminAction_java_lang_Object(ctx, sp[0].o, sp[1].o, (jobject(nullptr)));
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(465);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logic;
	((func_mindustry_core_Logic_skipWave) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Logic_skipWave])(ctx, sp[0].o);
	}
label_4:;
	LINE_NUMBER(468);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$build$36(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$36", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(456);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"showui"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_input_Binding(ctx);
	sp[4].o = (jobject)SF_mindustry_input_Binding_toggleMenus;
	sp[4].o = (jobject)((arc_input_KeyBind *) NULL_CHECK(sp[4].o))->F_value;
	sp[4].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[4].o))->F_key;
	sp[4].o = (jobject)((func_arc_input_KeyCode_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_input_KeyCode_toString_R_java_lang_String])(ctx, sp[4].o);
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	jint temp1 = jint(1);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (11));
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_core_UI_announce_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_announce_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(457);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HudFragment_lambda$build$34_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$34", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(446);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isIos) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_logicHideHud) != 0) goto label_2;
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

void M_mindustry_ui_fragments_HudFragment_lambda$build$27_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$27", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(379);
	((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"mobile buttons"_j)));
	LINE_NUMBER(380);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(381);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(65.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(382);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black6;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(384);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_clearNonei;
	frame[2].o = sp[0].o;
	LINE_NUMBER(386);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_menu;
	sp[2].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_ui;
	sp[3].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[3].o))->F_paused;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_48(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_48 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_48);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"menu"_j))));
	LINE_NUMBER(387);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_upOpen;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_49(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_49 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_49);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_91(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_91 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_91);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	LINE_NUMBER(393);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o);
	LINE_NUMBER(400);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[1].o);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK(sp[0].o))->F_flip = (jref) (checkCast(ctx, &class_arc_scene_ui_ImageButton, sp[1].o));
	LINE_NUMBER(401);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_flip;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"flip"_j)));
	LINE_NUMBER(403);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_paste;
	sp[2].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_ui;
	sp[3].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[3].o))->F_schematics;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_50(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_50 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_50);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"schematics"_j));
	LINE_NUMBER(404);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(406);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_pause;
	sp[2].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_51(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_51 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_51);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pause"_j));
	LINE_NUMBER(412);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_92(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_92 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_92);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(422);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_chat;
	sp[2].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_52(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_52 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_52);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"chat"_j));
	LINE_NUMBER(434);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_93(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_93 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_93);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(444);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(446);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$build$33_arc_scene_ui_ImageButton(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$33", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(435);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_mobile;
	if ((--sp)->i == 0) goto label_1;
	{
	LINE_NUMBER(436);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[0].o));
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_chat;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(437);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[0].o));
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_tree;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(440);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[0].o));
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_book;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	}
label_3:;
	LINE_NUMBER(442);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$build$32(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$32", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(423);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_mobile;
	if ((--sp)->i == 0) goto label_1;
	{
	LINE_NUMBER(424);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_chatfrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_ChatFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(425);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_chatfrag;
	((func_mindustry_ui_fragments_ChatFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_hide])(ctx, sp[0].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(427);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_chatfrag;
	((func_mindustry_ui_fragments_ChatFragment_toggle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_toggle])(ctx, sp[0].o);
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(429);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(430);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_research;
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_ResearchDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(432);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_database;
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_DatabaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_DatabaseDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	}
label_5:;
	LINE_NUMBER(434);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$build$31_arc_scene_ui_ImageButton(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$31", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(413);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(414);
	((func_arc_scene_ui_ImageButton_setDisabled_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_setDisabled_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(415);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[0].o));
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_players;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(417);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp += 1;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pauseDisabled) != 0) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_afterGameOver) == 0) goto label_6;
	}
label_5:;
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 2;
	((func_arc_scene_ui_ImageButton_setDisabled_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_setDisabled_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(418);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_9;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_play;
	goto label_10;
label_9:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_pause;
label_10:;
	sp -= 2;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
label_4:;
	LINE_NUMBER(420);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$build$30(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$30", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(407);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(408);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_listfrag;
	((func_mindustry_ui_fragments_PlayerListFragment_toggle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_PlayerListFragment_toggle])(ctx, sp[0].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(409);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pauseDisabled) != 0) goto label_3;
	}
	{
	LINE_NUMBER(410);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_5;
	}
	clinit_mindustry_core_GameState$State(ctx);
	(sp++)->o = SF_mindustry_core_GameState$State_playing;
	goto label_6;
label_5:;
	clinit_mindustry_core_GameState$State(ctx);
	(sp++)->o = SF_mindustry_core_GameState$State_paused;
label_6:;
	POP_N(2); // Pop method args
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
label_3:;
	LINE_NUMBER(412);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$build$29_arc_scene_ui_ImageButton(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$29", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(394);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"console"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[1].o));
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_terminal;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	LINE_NUMBER(396);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_shown = (jint(1));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[1].o));
	sp += 1;
	if (((jint)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_shown) == 0) goto label_5;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_downOpen;
	goto label_6;
label_5:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_upOpen;
label_6:;
	sp -= 2;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
label_4:;
	LINE_NUMBER(400);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$build$28(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$28", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(388);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"console"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(389);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_consolefrag;
	((func_mindustry_ui_fragments_ConsoleFragment_toggleMobile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_toggleMobile])(ctx, sp[0].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(391);
	((func_mindustry_ui_fragments_HudFragment_toggleMenus) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_toggleMenus])(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(393);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_HudFragment_lambda$build$26_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$26", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(373);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_shown) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	jint temp0 = (jint)((func_mindustry_core_NetServer_isWaitingForPlayers_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetServer_isWaitingForPlayers_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
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

jobject SM_mindustry_ui_fragments_HudFragment_lambda$build$25_R_java_lang_CharSequence(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$25", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(370);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_gameOver) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@sector.curlost"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@paused"_j));
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$build$24_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$24", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(363);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	if ((floatCompare(((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginTop), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(364);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(365);
	clinit_mindustry_gen_Tex(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Tex_paneRight;
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = frame[2].f;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginTop));
	}
label_1:;
	LINE_NUMBER(367);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$build$19_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$19", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(337);
	((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"minimap/position"_j)));
	LINE_NUMBER(338);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_47(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_47 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_47);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(340);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Minimap(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_Minimap);
	init_mindustry_ui_Minimap(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"minimap"_j))));
	LINE_NUMBER(341);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(343);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_29(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_29 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_29);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_48(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_48 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_48);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(346);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	LINE_NUMBER(347);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_touchable_arc_scene_event_Touchable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_touchable_arc_scene_event_Touchable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	LINE_NUMBER(348);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"position"_j));
	LINE_NUMBER(349);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(350);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(351);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HudFragment_lambda$build$22_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$22", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(346);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"position"_j))));
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mouseposition"_j))));
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

jobject SM_mindustry_ui_fragments_HudFragment_lambda$build$21_R_java_lang_CharSequence(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$21", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(344);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"position"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_tileX_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_tileX_R_int])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp1 = (jint)((func_mindustry_gen_Player_tileY_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_tileY_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001,\u0001\n"_j.string, 2, boxInteger(ctx, temp0), boxInteger(ctx, temp1));
	sp += 1;
	goto label_2;
	}
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_2:;
	{
	LINE_NUMBER(345);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mouseposition"_j))));
	if (temp0 == 0) goto label_3;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[0].o);
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, temp0);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jfloat temp2 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[0].o);
	jint temp3 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, temp2);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[lightgray]\u0001,\u0001"_j.string, 2, boxInteger(ctx, temp1), boxInteger(ctx, temp3));
	sp += 1;
	goto label_4;
	}
label_3:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_4:;
	{
	sp -= 2;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
	LINE_NUMBER(344);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_HudFragment_lambda$build$20_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$20", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(338);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"minimap"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_fragments_HudFragment_shown_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_shown_R_boolean])(ctx, (frame[0].o));
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

void M_mindustry_ui_fragments_HudFragment_lambda$build$16_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$16", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(330);
	((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"waiting"_j)));
	LINE_NUMBER(331);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_49(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_49 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_49);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(332);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black6;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_94(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_94 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_94);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(333);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$build$18_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$18", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@waiting.players"_j))));
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(18.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_HudFragment_lambda$build$17_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$17", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(331);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	jint temp0 = (jint)((func_mindustry_core_NetServer_isWaitingForPlayers_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetServer_isWaitingForPlayers_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_fragments_HudFragment_shown_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_shown_R_boolean])(ctx, (frame[0].o));
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

void SM_mindustry_ui_fragments_HudFragment_lambda$build$15_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$15", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(314);
	frame[0].f = (jfloat(0));
	LINE_NUMBER(315);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(316);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	frame[2].f = (jfloat(temp0));
	LINE_NUMBER(317);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	frame[3].f = (jfloat(temp1));
	LINE_NUMBER(318);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(319);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	if ((floatCompare(((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginLeft), (jfloat(0)), -1)) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(320);
	clinit_mindustry_gen_Tex(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Tex_paneRight;
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp0, temp1, ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginLeft), (frame[3].f));
	}
label_6:;
	{
	LINE_NUMBER(323);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	if ((floatCompare(((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginRight), (jfloat(0)), -1)) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(324);
	clinit_mindustry_gen_Tex(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Tex_paneLeft;
	jfloat temp0 = (frame[0].f) + (frame[2].f);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	jfloat temp1 = temp0 - ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginRight);
	jfloat temp2 = frame[1].f;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp1, temp2, ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginRight), (frame[3].f));
	}
label_8:;
	LINE_NUMBER(326);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$build$10_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$10", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(301);
	((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"pause-disabled"_j)));
	LINE_NUMBER(302);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_50(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_50 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_50);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(303);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_53(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_53 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_java_lang_Runnable_53);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(309);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black6;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_95(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_95 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_95);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(36.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(310);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$build$13_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$13", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(309);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_30(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_30 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_30);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_fragments_HudFragment_lambda$build$14_R_java_lang_CharSequence(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$14", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"@pause.disabled"_j)));
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$build$12_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$12", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp += 1;
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_pauseDisableDur), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	jfloat temp0 = ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / ((jfloat)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_pauseDisableDur));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_FCONST(1);
label_2:;
	{
	sp -= 2;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = sp[1].f;
	LINE_NUMBER(305);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a), (jfloat(0)), 1)) > 0) goto label_4;
	}
	{
	LINE_NUMBER(306);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_pauseDisableDur = (jfloat(0));
	}
label_4:;
	LINE_NUMBER(308);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_HudFragment_lambda$build$11_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$11", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(302);
	if ((floatCompare(((jfloat)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_pauseDisableDur), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_fragments_HudFragment_shown_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_shown_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_mobile;
	if ((--sp)->i != 0) goto label_1;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	jint temp0 = (jint)((func_mindustry_core_NetServer_isWaitingForPlayers_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetServer_isWaitingForPlayers_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_gameOver) == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
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

void M_mindustry_ui_fragments_HudFragment_lambda$build$5_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$5", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(288);
	frame[2].f = (jfloat(329.0f));
	LINE_NUMBER(289);
	((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"paused"_j)));
	LINE_NUMBER(290);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_51(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_51 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Boolp_51);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(291);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black6;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_96(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_96 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_96);
		proxy->F_field0 = (frame[2].f);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(36.0f);
	LINE_NUMBER(295);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	jfloat temp1 = frame[2].f;
	LINE_NUMBER(296);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(297);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$build$7_float_arc_scene_ui_layout_Table(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(292);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_31(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_31 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_31);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	LINE_NUMBER(293);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(294);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Floatp_13(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Floatp_13 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Floatp_13);
		proxy->F_field0 = (frame[0].f);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_spacerX_arc_func_Floatp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_spacerX_arc_func_Floatp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ui_fragments_HudFragment_lambda$build$9_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$9", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(294);
	jfloat temp0 = frame[0].f;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jfloat temp1 = temp0 + ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginLeft);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	popStackFrame(ctx);
	return (temp1 - ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginRight));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_fragments_HudFragment_lambda$build$8_R_java_lang_CharSequence(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$8", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(292);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_gameOver) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@sector.curlost"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@paused"_j));
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_HudFragment_lambda$build$6_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$6", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(290);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_fragments_HudFragment_shown_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_shown_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	jint temp0 = (jint)((func_mindustry_core_NetServer_isWaitingForPlayers_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetServer_isWaitingForPlayers_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_mobile;
	if ((--sp)->i == 0) goto label_2;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
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

void M_mindustry_ui_fragments_HudFragment_lambda$build$4_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_coreItems;
	((func_mindustry_ui_CoreItemsDisplay_resetUsed) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_CoreItemsDisplay_resetUsed])(ctx, sp[0].o);
	LINE_NUMBER(279);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_coreItems;
	((func_mindustry_ui_CoreItemsDisplay_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_CoreItemsDisplay_clear])(ctx, sp[0].o);
	LINE_NUMBER(280);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_hudLabel;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_hudLabel;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_color;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (jfloat(0));
	}
label_3:;
	{
	LINE_NUMBER(283);
	((mindustry_ui_fragments_HudFragment *) NULL_CHECK((frame[0].o)))->F_showHudText = (jint(0));
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$build$3_mindustry_game_EventType$SectorInvasionEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$3", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(274);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_warning;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"sector.attacked"_j));
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[5].o = (jobject)((mindustry_game_EventType$SectorInvasionEvent *) NULL_CHECK((frame[1].o)))->F_sector;
	sp[5].o = (jobject)((func_mindustry_type_Sector_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_mindustry_type_Sector_name_R_java_lang_String])(ctx, sp[5].o);
	ARRAY_ACCESS(jobject, sp[4].o, temp0) = sp[5].o;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	((func_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$build$2_mindustry_game_EventType$SectorLoseEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(270);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_warning;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"sector.lost"_j));
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[5].o = (jobject)((mindustry_game_EventType$SectorLoseEvent *) NULL_CHECK((frame[1].o)))->F_sector;
	sp[5].o = (jobject)((func_mindustry_type_Sector_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_mindustry_type_Sector_name_R_java_lang_String])(ctx, sp[5].o);
	ARRAY_ACCESS(jobject, sp[4].o, temp0) = sp[5].o;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	((func_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$build$1_mindustry_game_EventType$SectorCaptureEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[1].o)))->F_sector;
	jint temp0 = (jint)((func_mindustry_type_Sector_isBeingPlayed_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_isBeingPlayed_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(263);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_announce_java_lang_String_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_announce_java_lang_String_float])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@sector.capture.current"_j))), (jfloat(5.0f)));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(265);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"sector.capture"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[1].o)))->F_sector;
	sp[4].o = (jobject)((func_mindustry_type_Sector_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_type_Sector_name_R_java_lang_String])(ctx, sp[4].o);
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_ui_fragments_HudFragment_showToast_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_showToast_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(267);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$build$0_mindustry_game_EventType$WaveEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$build$0", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(242);
	frame[2].i = (10);
	LINE_NUMBER(243);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_winWave) <= 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp0 = (jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_winWave;
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	(sp++)->i = jint(2147483647);
label_3:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(245);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	frame[4].i = (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave) - (jint(1)));
	}
label_5:;
	{
	jint temp0 = frame[4].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave) + (frame[2].i)), ((frame[3].i) - (jint(2))));
	if (temp0 > temp1) goto label_6;
	}
	{
	LINE_NUMBER(246);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_spawns;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_game_SpawnGroup, sp[0].o));
	LINE_NUMBER(247);
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[6].o)))->F_effect;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_boss;
	if (sp[0].o != sp[1].o) goto label_11;
	}
	{
	jint temp0 = (jint)((func_mindustry_game_SpawnGroup_getSpawned_int_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_game_SpawnGroup_getSpawned_int_R_int])(ctx, (frame[6].o), (frame[4].i));
	if (temp0 <= 0) goto label_11;
	}
	{
	LINE_NUMBER(248);
	jint temp0 = (frame[4].i) + (jint(2));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	frame[7].i = (temp0 - ((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave));
	LINE_NUMBER(251);
	if ((frame[7].i) == (jint(1))) goto label_14;
	}
	{
	if ((frame[7].i) == (jint(2))) goto label_14;
	}
	{
	if ((frame[7].i) == (jint(5))) goto label_14;
	}
	{
	if ((frame[7].i) != (10)) goto label_6;
	}
label_14:;
	{
	LINE_NUMBER(252);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_warning;
	sp[2].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[6].o)))->F_type;
	sp[2].o = (jobject)((func_mindustry_type_UnitType_emoji_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_type_UnitType_emoji_R_java_lang_String])(ctx, sp[2].o);
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_bundle;
	sp += 4;
	if ((frame[7].i) != (jint(1))) goto label_15;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8".one"_j));
	goto label_16;
label_15:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_16:;
	{
	sp -= 5;
	sp[4].o = (jobject)concatStringsRecipe(ctx, u8"wave.guardianwarn\u0001"_j.string, 1, sp[4].o);
	sp[5].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[6].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[7].i));
	ARRAY_ACCESS(jobject, sp[5].o, temp0) = sp[6].o;
	sp[3].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[3].o, sp[4].o, sp[5].o);
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 \u0001"_j.string, 2, sp[2].o, sp[3].o);
	((func_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_6;
	}
label_11:;
	LINE_NUMBER(257);
	goto label_8;
label_9:;
	{
	LINE_NUMBER(245);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(259);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$rebuildBlockSelection$4(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$rebuildBlockSelection$4", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(214);
	clinit_mindustry_ui_fragments_HudFragment(ctx);
	SF_mindustry_ui_fragments_HudFragment_lastFavorited = (jobject(nullptr));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$rebuildBlockSelection$3_arc_scene_ui_ImageButton_mindustry_world_Block(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$rebuildBlockSelection$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_control;
	sp[1].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[1].o))->F_input;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[1].o))->F_block;
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

void M_mindustry_ui_fragments_HudFragment_lambda$rebuildBlockSelection$2_mindustry_world_Block_arc_scene_ui_layout_Table_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$rebuildBlockSelection$2", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(181);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_removeOre;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_removeWall;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(182);
	SM_mindustry_ui_fragments_HudFragment_toggleFavorite_mindustry_world_Block(ctx, (frame[1].o));
	LINE_NUMBER(183);
	((func_mindustry_ui_fragments_HudFragment_rebuildBlockSelection_arc_scene_ui_layout_Table_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_rebuildBlockSelection_arc_scene_ui_layout_Table_java_lang_String])(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(184);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block = (jref) (frame[1].o);
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$rebuildBlockSelection$1_mindustry_world_Block(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$rebuildBlockSelection$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(178);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block = (jref) (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ui_fragments_HudFragment_lambda$rebuildBlockSelection$0_mindustry_world_Block_mindustry_world_Block_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$rebuildBlockSelection$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_removeOre;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_removeWall;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(154);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_removeOre;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_removeWall;
	if (sp[0].o != sp[1].o) goto label_4;
	}
label_3:;
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(155);
	jint temp0 = (jint)SM_mindustry_ui_fragments_HudFragment_isFavorite_mindustry_world_Block_R_boolean(ctx, (frame[1].o));
	jint temp1 = (jint)SM_mindustry_ui_fragments_HudFragment_isFavorite_mindustry_world_Block_R_boolean(ctx, (frame[0].o));
	jint temp2 = (jint)SM_java_lang_Boolean_compare_boolean_boolean_R_int(ctx, temp0, temp1);
	frame[2].i = temp2;
	LINE_NUMBER(156);
	if ((frame[2].i) == 0) goto label_6;
	}
	INST_ILOAD(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(157);
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, (frame[1].o));
	jint temp2 = (jint)SM_java_lang_Boolean_compare_boolean_boolean_R_int(ctx, temp0, temp1);
	frame[3].i = temp2;
	LINE_NUMBER(158);
	if ((frame[3].i) == 0) goto label_8;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(159);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_OverlayFloor)) == 0) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_removeOre;
	if (sp[0].o == sp[1].o) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_environment_OverlayFloor)) == 0) goto label_11;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_removeOre;
	if (sp[0].o == sp[1].o) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 2;
	jint temp0 = (jint)SM_java_lang_Boolean_compare_boolean_boolean_R_int(ctx, sp[0].i, sp[1].i);
	frame[4].i = temp0;
	LINE_NUMBER(160);
	if ((frame[4].i) == 0) goto label_14;
	}
	INST_ILOAD(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_14:;
	{
	LINE_NUMBER(161);
	jint temp0 = (jint)SM_java_lang_Integer_compare_int_int_R_int(ctx, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[0].o)))->F_id), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$addBlockSelection$6_Array1_mindustry_world_Block_Array1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Collapser(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$addBlockSelection$6", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_control;
	sp[1].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[1].o))->F_input;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[1].o))->F_block;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(97);
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))))->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	LINE_NUMBER(98);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(99);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block;
	((func_mindustry_world_Block_buildEditorConfig_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_buildEditorConfig_arc_scene_ui_layout_Table])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	LINE_NUMBER(100);
	((func_arc_scene_ui_layout_Collapser_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_invalidateHierarchy])(ctx, (frame[2].o));
	}
label_4:;
	{
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_control;
	sp[1].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[1].o))->F_input;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[1].o))->F_block;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_1:;
	LINE_NUMBER(104);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HudFragment_lambda$addBlockSelection$5_arc_scene_ui_layout_Collapser(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$addBlockSelection$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Collapser_setEnforceMinSize_boolean_R_arc_scene_ui_layout_Collapser) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_setEnforceMinSize_boolean_R_arc_scene_ui_layout_Collapser])(ctx, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HudFragment_lambda$addBlockSelection$4_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$addBlockSelection$4", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(94);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block;
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

void SM_mindustry_ui_fragments_HudFragment_lambda$addBlockSelection$3_Array1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$addBlockSelection$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(93);
	ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))) = (frame[1].o);
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$addBlockSelection$1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$addBlockSelection$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(87);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_zoom;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(88);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8""_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_97(ctx);
		auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_97 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_97);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"editor/search"_j));
	LINE_NUMBER(89);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (40));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	((func_arc_scene_ui_TextField_setMessageText_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_TextField_setMessageText_java_lang_String])(ctx, (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o)), (((jobject) createStringLiteral(ctx, u8"@players.search"_j))));
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$addBlockSelection$2_arc_scene_ui_layout_Table_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$addBlockSelection$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(88);
	((func_mindustry_ui_fragments_HudFragment_rebuildBlockSelection_arc_scene_ui_layout_Table_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_rebuildBlockSelection_arc_scene_ui_layout_Table_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment_lambda$addBlockSelection$0_arc_scene_ui_ScrollPane_Array1_mindustry_type_Planet_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:lambda$addBlockSelection$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(70);
	jint temp0 = (jint)((func_arc_scene_ui_ScrollPane_hasScroll_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_hasScroll_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(71);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getHoverElement_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getHoverElement_R_arc_scene_Element])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(72);
	if ((frame[4].o) == nullptr) goto label_4;
	}
	{
	jint temp0 = (jint)((func_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean])(ctx, (frame[4].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(73);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, (jobject(nullptr)));
	}
label_1:;
	{
	LINE_NUMBER(77);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_planet;
	if (sp[0].o == ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))))) goto label_5;
	}
	{
	LINE_NUMBER(78);
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_planet;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(79);
	((func_mindustry_ui_fragments_HudFragment_rebuildBlockSelection_arc_scene_ui_layout_Table_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_rebuildBlockSelection_arc_scene_ui_layout_Table_java_lang_String])(ctx, (frame[0].o), (frame[3].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	}
label_5:;
	LINE_NUMBER(81);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_ui_fragments_HudFragment(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_ui_fragments_HudFragment_dsize = jfloat(65.0f);
	SF_mindustry_ui_fragments_HudFragment_pauseHeight = jfloat(36.0f);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment(ctx);
	{
	LINE_NUMBER(61);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	clinit_mindustry_ui_fragments_HudFragment(ctx);
	SF_mindustry_ui_fragments_HudFragment_favoriteBlocks = sp[0].o;
	LINE_NUMBER(62);
	clinit_mindustry_ui_fragments_HudFragment(ctx);
	SF_mindustry_ui_fragments_HudFragment_lastFavorited = (jobject(nullptr));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_fragments_HudFragment[] {
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
	(void *) M_mindustry_ui_fragments_HudFragment_addBlockSelection_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_HudFragment_rebuildBlockSelection_arc_scene_ui_layout_Table_java_lang_String,
	(void *) M_mindustry_ui_fragments_HudFragment_build_arc_scene_Group,
	(void *) M_mindustry_ui_fragments_HudFragment_setHudText_java_lang_String,
	(void *) M_mindustry_ui_fragments_HudFragment_toggleHudText_boolean,
	(void *) M_mindustry_ui_fragments_HudFragment_scheduleToast_java_lang_Runnable,
	(void *) M_mindustry_ui_fragments_HudFragment_hasToast_R_boolean,
	(void *) M_mindustry_ui_fragments_HudFragment_showToast_java_lang_String,
	(void *) M_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_java_lang_String,
	(void *) M_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_float_java_lang_String,
	(void *) M_mindustry_ui_fragments_HudFragment_showPauseDisabled,
	(void *) M_mindustry_ui_fragments_HudFragment_showUnlock_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_ui_fragments_HudFragment_toggleMenus,
	(void *) M_mindustry_ui_fragments_HudFragment_makeStatusTable_R_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_HudFragment_addInfoTable_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_HudFragment_canSkipWave_R_boolean,
	(void *) M_mindustry_ui_fragments_HudFragment_shown_R_boolean,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$13_Array1_boolean_Array1_arc_scene_ui_layout_Cell_arc_scene_ui_layout_Table_java_lang_StringBuilder_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_R_java_lang_CharSequence,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$showUnlock$0_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$showUnlock$2_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$showUnlock$3,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$showUnlock$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$57_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$77_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$78_arc_scene_ui_layout_Table_R_boolean,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$76_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$74_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$75_R_java_lang_CharSequence,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$60_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$68_R_boolean,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$63_mindustry_game_EventType$ResetEvent,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$62_float,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$61_R_boolean,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$59_R_boolean,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$23_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$50_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$51_R_boolean,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$49_R_boolean,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$41_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$38_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$40_arc_scene_ui_ImageButton_R_boolean,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$37_R_boolean,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$35,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$27_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$29_arc_scene_ui_ImageButton,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$28,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$26_R_boolean,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$19_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$20_R_boolean,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$16_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$17_R_boolean,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$10_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$12_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$11_R_boolean,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$5_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$6_R_boolean,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$4_mindustry_game_EventType$ResetEvent,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$3_mindustry_game_EventType$SectorInvasionEvent,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$2_mindustry_game_EventType$SectorLoseEvent,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$1_mindustry_game_EventType$SectorCaptureEvent,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$build$0_mindustry_game_EventType$WaveEvent,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$rebuildBlockSelection$2_mindustry_world_Block_arc_scene_ui_layout_Table_java_lang_String,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$addBlockSelection$1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$addBlockSelection$2_arc_scene_ui_layout_Table_java_lang_String,
	(void *) M_mindustry_ui_fragments_HudFragment_lambda$addBlockSelection$0_arc_scene_ui_ScrollPane_Array1_mindustry_type_Planet_arc_scene_ui_layout_Table,
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
	{ "addBlockSelection", "(Larc/scene/ui/layout/Table;)V" },
	{ "rebuildBlockSelection", "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V" },
	{ "build", "(Larc/scene/Group;)V" },
	{ "setHudText", "(Ljava/lang/String;)V" },
	{ "toggleHudText", "(Z)V" },
	{ "scheduleToast", "(Ljava/lang/Runnable;)V" },
	{ "hasToast", "()Z" },
	{ "showToast", "(Ljava/lang/String;)V" },
	{ "showToast", "(Larc/scene/style/Drawable;Ljava/lang/String;)V" },
	{ "showToast", "(Larc/scene/style/Drawable;FLjava/lang/String;)V" },
	{ "showPauseDisabled", "()V" },
	{ "showUnlock", "(Lmindustry/ctype/UnlockableContent;)V" },
	{ "toggleMenus", "()V" },
	{ "makeStatusTable", "()Larc/scene/ui/layout/Table;" },
	{ "addInfoTable", "(Larc/scene/ui/layout/Table;)V" },
	{ "canSkipWave", "()Z" },
	{ "shown", "()Z" },
	{ "lambda$makeStatusTable$13", "([Z[Larc/scene/ui/layout/Cell;Larc/scene/ui/layout/Table;Ljava/lang/StringBuilder;Lmindustry/ui/IntFormat;Lmindustry/ui/IntFormat;Lmindustry/ui/IntFormat;Lmindustry/ui/IntFormat;Lmindustry/ui/IntFormat;Lmindustry/ui/IntFormat;Lmindustry/ui/IntFormat;)Ljava/lang/CharSequence;" },
	{ "lambda$makeStatusTable$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showUnlock$0", "(Lmindustry/ctype/UnlockableContent;)V" },
	{ "lambda$showUnlock$2", "(Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showUnlock$3", "()V" },
	{ "lambda$showUnlock$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$57", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$77", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$78", "(Larc/scene/ui/layout/Table;)Z" },
	{ "lambda$build$76", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$74", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$75", "()Ljava/lang/CharSequence;" },
	{ "lambda$build$60", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$68", "()Z" },
	{ "lambda$build$63", "(Lmindustry/game/EventType$ResetEvent;)V" },
	{ "lambda$build$62", "(F)V" },
	{ "lambda$build$61", "()Z" },
	{ "lambda$build$59", "()Z" },
	{ "lambda$build$23", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$50", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$51", "()Z" },
	{ "lambda$build$49", "()Z" },
	{ "lambda$build$41", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$38", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$40", "(Larc/scene/ui/ImageButton;)Z" },
	{ "lambda$build$37", "()Z" },
	{ "lambda$build$35", "()V" },
	{ "lambda$build$27", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$29", "(Larc/scene/ui/ImageButton;)V" },
	{ "lambda$build$28", "()V" },
	{ "lambda$build$26", "()Z" },
	{ "lambda$build$19", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$20", "()Z" },
	{ "lambda$build$16", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$17", "()Z" },
	{ "lambda$build$10", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$12", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$11", "()Z" },
	{ "lambda$build$5", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$6", "()Z" },
	{ "lambda$build$4", "(Lmindustry/game/EventType$ResetEvent;)V" },
	{ "lambda$build$3", "(Lmindustry/game/EventType$SectorInvasionEvent;)V" },
	{ "lambda$build$2", "(Lmindustry/game/EventType$SectorLoseEvent;)V" },
	{ "lambda$build$1", "(Lmindustry/game/EventType$SectorCaptureEvent;)V" },
	{ "lambda$build$0", "(Lmindustry/game/EventType$WaveEvent;)V" },
	{ "lambda$rebuildBlockSelection$2", "(Lmindustry/world/Block;Larc/scene/ui/layout/Table;Ljava/lang/String;)V" },
	{ "lambda$addBlockSelection$1", "(Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$addBlockSelection$2", "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V" },
	{ "lambda$addBlockSelection$0", "(Larc/scene/ui/ScrollPane;[Lmindustry/type/Planet;Larc/scene/ui/layout/Table;)V" },
};

static FieldMetadata fields[] {
	{ "dsize", &class_float, (intptr_t) &SF_mindustry_ui_fragments_HudFragment_dsize, "F", 26 },
	{ "pauseHeight", &class_float, (intptr_t) &SF_mindustry_ui_fragments_HudFragment_pauseHeight, "F", 26 },
	{ "blockfrag", &class_mindustry_ui_fragments_PlacementFragment, offsetof(mindustry_ui_fragments_HudFragment, F_blockfrag), "Lmindustry/ui/fragments/PlacementFragment;", 1 },
	{ "coreItems", &class_mindustry_ui_CoreItemsDisplay, offsetof(mindustry_ui_fragments_HudFragment, F_coreItems), "Lmindustry/ui/CoreItemsDisplay;", 1 },
	{ "shown", &class_boolean, offsetof(mindustry_ui_fragments_HudFragment, F_shown), "Z", 1 },
	{ "flip", &class_arc_scene_ui_ImageButton, offsetof(mindustry_ui_fragments_HudFragment, F_flip), "Larc/scene/ui/ImageButton;", 2 },
	{ "hudText", &class_java_lang_String, offsetof(mindustry_ui_fragments_HudFragment, F_hudText), "Ljava/lang/String;", 2 },
	{ "showHudText", &class_boolean, offsetof(mindustry_ui_fragments_HudFragment, F_showHudText), "Z", 2 },
	{ "lastUnlockTable", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_fragments_HudFragment, F_lastUnlockTable), "Larc/scene/ui/layout/Table;", 2 },
	{ "lastUnlockLayout", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_fragments_HudFragment, F_lastUnlockLayout), "Larc/scene/ui/layout/Table;", 2 },
	{ "lastToast", &class_long, offsetof(mindustry_ui_fragments_HudFragment, F_lastToast), "J", 2 },
	{ "pauseDisableDur", &class_float, offsetof(mindustry_ui_fragments_HudFragment, F_pauseDisableDur), "F", 2 },
	{ "blocksOut", &class_arc_struct_Seq, offsetof(mindustry_ui_fragments_HudFragment, F_blocksOut), "Larc/struct/Seq;", 2 },
	{ "hudLabel", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_fragments_HudFragment, F_hudLabel), "Larc/scene/ui/layout/Table;", 2 },
	{ "coreAttackTime", &class_float, offsetof(mindustry_ui_fragments_HudFragment, F_coreAttackTime), "F", 2 },
	{ "favoriteBlocks", &class_arc_struct_ObjectSet, (intptr_t) &SF_mindustry_ui_fragments_HudFragment_favoriteBlocks, "Larc/struct/ObjectSet;", 10 },
	{ "lastFavorited", &class_java_lang_String, (intptr_t) &SF_mindustry_ui_fragments_HudFragment_lastFavorited, "Ljava/lang/String;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_HudFragment, 0, "()V", 1 },
	{ "addBlockSelection", (intptr_t) M_mindustry_ui_fragments_HudFragment_addBlockSelection_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HudFragment_addBlockSelection_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 2 },
	{ "loadFavorites", (intptr_t) SM_mindustry_ui_fragments_HudFragment_loadFavorites, 0, "()V", 10 },
	{ "saveFavorites", (intptr_t) SM_mindustry_ui_fragments_HudFragment_saveFavorites, 0, "()V", 10 },
	{ "isFavorite", (intptr_t) SM_mindustry_ui_fragments_HudFragment_isFavorite_mindustry_world_Block_R_boolean, 0, "(Lmindustry/world/Block;)Z", 10 },
	{ "toggleFavorite", (intptr_t) SM_mindustry_ui_fragments_HudFragment_toggleFavorite_mindustry_world_Block, 0, "(Lmindustry/world/Block;)V", 10 },
	{ "rebuildBlockSelection", (intptr_t) M_mindustry_ui_fragments_HudFragment_rebuildBlockSelection_arc_scene_ui_layout_Table_java_lang_String, VTABLE_mindustry_ui_fragments_HudFragment_rebuildBlockSelection_arc_scene_ui_layout_Table_java_lang_String, "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V", 2 },
	{ "build", (intptr_t) M_mindustry_ui_fragments_HudFragment_build_arc_scene_Group, VTABLE_mindustry_ui_fragments_HudFragment_build_arc_scene_Group, "(Larc/scene/Group;)V", 1 },
	{ "setPlayerTeamEditor", (intptr_t) SM_mindustry_ui_fragments_HudFragment_setPlayerTeamEditor_mindustry_gen_Player_mindustry_game_Team, 0, "(Lmindustry/gen/Player;Lmindustry/game/Team;)V", 9 },
	{ "setHudText", (intptr_t) M_mindustry_ui_fragments_HudFragment_setHudText_java_lang_String, VTABLE_mindustry_ui_fragments_HudFragment_setHudText_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "toggleHudText", (intptr_t) M_mindustry_ui_fragments_HudFragment_toggleHudText_boolean, VTABLE_mindustry_ui_fragments_HudFragment_toggleHudText_boolean, "(Z)V", 1 },
	{ "scheduleToast", (intptr_t) M_mindustry_ui_fragments_HudFragment_scheduleToast_java_lang_Runnable, VTABLE_mindustry_ui_fragments_HudFragment_scheduleToast_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 2 },
	{ "hasToast", (intptr_t) M_mindustry_ui_fragments_HudFragment_hasToast_R_boolean, VTABLE_mindustry_ui_fragments_HudFragment_hasToast_R_boolean, "()Z", 1 },
	{ "showToast", (intptr_t) M_mindustry_ui_fragments_HudFragment_showToast_java_lang_String, VTABLE_mindustry_ui_fragments_HudFragment_showToast_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "showToast", (intptr_t) M_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_java_lang_String, VTABLE_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_java_lang_String, "(Larc/scene/style/Drawable;Ljava/lang/String;)V", 1 },
	{ "showToast", (intptr_t) M_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_float_java_lang_String, VTABLE_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_float_java_lang_String, "(Larc/scene/style/Drawable;FLjava/lang/String;)V", 1 },
	{ "showPauseDisabled", (intptr_t) M_mindustry_ui_fragments_HudFragment_showPauseDisabled, VTABLE_mindustry_ui_fragments_HudFragment_showPauseDisabled, "()V", 1 },
	{ "showUnlock", (intptr_t) M_mindustry_ui_fragments_HudFragment_showUnlock_mindustry_ctype_UnlockableContent, VTABLE_mindustry_ui_fragments_HudFragment_showUnlock_mindustry_ctype_UnlockableContent, "(Lmindustry/ctype/UnlockableContent;)V", 1 },
	{ "toggleMenus", (intptr_t) M_mindustry_ui_fragments_HudFragment_toggleMenus, VTABLE_mindustry_ui_fragments_HudFragment_toggleMenus, "()V", 2 },
	{ "makeStatusTable", (intptr_t) M_mindustry_ui_fragments_HudFragment_makeStatusTable_R_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HudFragment_makeStatusTable_R_arc_scene_ui_layout_Table, "()Larc/scene/ui/layout/Table;", 2 },
	{ "addInfoTable", (intptr_t) M_mindustry_ui_fragments_HudFragment_addInfoTable_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HudFragment_addInfoTable_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 2 },
	{ "canSkipWave", (intptr_t) M_mindustry_ui_fragments_HudFragment_canSkipWave_R_boolean, VTABLE_mindustry_ui_fragments_HudFragment_canSkipWave_R_boolean, "()Z", 2 },
	{ "shown", (intptr_t) M_mindustry_ui_fragments_HudFragment_shown_R_boolean, VTABLE_mindustry_ui_fragments_HudFragment_shown_R_boolean, "()Z", 1 },
	{ "lambda$addInfoTable$2", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$addInfoTable$2_arc_struct_Bits_arc_scene_ui_layout_Table, 0, "(Larc/struct/Bits;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$addInfoTable$3", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$addInfoTable$3_mindustry_type_StatusEffect_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/StatusEffect;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$addInfoTable$4", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$addInfoTable$4_mindustry_type_StatusEffect_R_java_lang_CharSequence, 0, "(Lmindustry/type/StatusEffect;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$addInfoTable$1", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$addInfoTable$1_Array1_float_R_boolean, 0, "([F)Z", 4106 },
	{ "lambda$addInfoTable$0", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$addInfoTable$0_Array1_float_arc_scene_ui_layout_Table, 0, "([FLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$makeStatusTable$13", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$13_Array1_boolean_Array1_arc_scene_ui_layout_Cell_arc_scene_ui_layout_Table_java_lang_StringBuilder_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_R_java_lang_CharSequence, VTABLE_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$13_Array1_boolean_Array1_arc_scene_ui_layout_Cell_arc_scene_ui_layout_Table_java_lang_StringBuilder_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_R_java_lang_CharSequence, "([Z[Larc/scene/ui/layout/Cell;Larc/scene/ui/layout/Table;Ljava/lang/StringBuilder;Lmindustry/ui/IntFormat;Lmindustry/ui/IntFormat;Lmindustry/ui/IntFormat;Lmindustry/ui/IntFormat;Lmindustry/ui/IntFormat;Lmindustry/ui/IntFormat;Lmindustry/ui/IntFormat;)Ljava/lang/CharSequence;", 4098 },
	{ "lambda$makeStatusTable$14", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$14_mindustry_game_Teams$TeamData_R_int, 0, "(Lmindustry/game/Teams$TeamData;)I", 4106 },
	{ "lambda$makeStatusTable$1", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$1_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$1_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$makeStatusTable$12", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$12_arc_func_Boolp_mindustry_ui_fragments_HudFragment$1SideBar, 0, "(Larc/func/Boolp;Lmindustry/ui/fragments/HudFragment$1SideBar;)V", 4106 },
	{ "lambda$makeStatusTable$11", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$11_arc_func_Boolp_R_boolean, 0, "(Larc/func/Boolp;)Z", 4106 },
	{ "lambda$makeStatusTable$10", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$10_arc_func_Boolp_arc_func_Floatp_R_float, 0, "(Larc/func/Boolp;Larc/func/Floatp;)F", 4106 },
	{ "lambda$makeStatusTable$9", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$9_R_arc_graphics_g2d_TextureRegion, 0, "()Larc/graphics/g2d/TextureRegion;", 4106 },
	{ "lambda$makeStatusTable$8", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$8_R_boolean, 0, "()Z", 4106 },
	{ "lambda$makeStatusTable$7", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$7_Array1_float_R_float, 0, "([F)F", 4106 },
	{ "lambda$makeStatusTable$6", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$6_R_boolean, 0, "()Z", 4106 },
	{ "lambda$makeStatusTable$5", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$5_R_float, 0, "()F", 4106 },
	{ "lambda$makeStatusTable$4", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$4_R_float, 0, "()F", 4106 },
	{ "lambda$makeStatusTable$3", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$3_R_boolean, 0, "()Z", 4106 },
	{ "lambda$makeStatusTable$2", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$2, 0, "()V", 4106 },
	{ "lambda$makeStatusTable$0", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$0_java_lang_StringBuilder_java_lang_Integer_R_java_lang_String, 0, "(Ljava/lang/StringBuilder;Ljava/lang/Integer;)Ljava/lang/String;", 4106 },
	{ "lambda$showUnlock$0", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$showUnlock$0_mindustry_ctype_UnlockableContent, VTABLE_mindustry_ui_fragments_HudFragment_lambda$showUnlock$0_mindustry_ctype_UnlockableContent, "(Lmindustry/ctype/UnlockableContent;)V", 4098 },
	{ "lambda$showUnlock$2", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$showUnlock$2_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HudFragment_lambda$showUnlock$2_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showUnlock$3", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$showUnlock$3, VTABLE_mindustry_ui_fragments_HudFragment_lambda$showUnlock$3, "()V", 4098 },
	{ "lambda$showUnlock$1", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$showUnlock$1_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HudFragment_lambda$showUnlock$1_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showToast$0", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$showToast$0_arc_scene_style_Drawable_float_java_lang_String, 0, "(Larc/scene/style/Drawable;FLjava/lang/String;)V", 4106 },
	{ "lambda$showToast$2", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$showToast$2_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$showToast$1", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$showToast$1_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$83", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$83_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$84", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$84_R_boolean, 0, "()Z", 4106 },
	{ "lambda$build$79", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$79_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$82", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$82_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$80", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$80_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$81", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$81_arc_scene_ui_Label, 0, "(Larc/scene/ui/Label;)V", 4106 },
	{ "lambda$build$57", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$57_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$57_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$77", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$77_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$77_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$78", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$78_arc_scene_ui_layout_Table_R_boolean, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$78_arc_scene_ui_layout_Table_R_boolean, "(Larc/scene/ui/layout/Table;)Z", 4098 },
	{ "lambda$build$76", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$76_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$76_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$74", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$74_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$74_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$75", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$75_R_java_lang_CharSequence, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$75_R_java_lang_CharSequence, "()Ljava/lang/CharSequence;", 4098 },
	{ "lambda$build$73", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$73_R_boolean, 0, "()Z", 4106 },
	{ "lambda$build$69", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$69_java_lang_StringBuilder_int_java_lang_String_arc_scene_ui_layout_Table, 0, "(Ljava/lang/StringBuilder;ILjava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$72", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$72_R_float, 0, "()F", 4106 },
	{ "lambda$build$71", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$71_R_arc_graphics_Color, 0, "()Larc/graphics/Color;", 4106 },
	{ "lambda$build$70", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$70_java_lang_StringBuilder_int_java_lang_String_R_java_lang_CharSequence, 0, "(Ljava/lang/StringBuilder;ILjava/lang/String;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$build$60", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$60_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$60_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$68", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$68_R_boolean, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$68_R_boolean, "()Z", 4098 },
	{ "lambda$build$64", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$64_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$67", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$67_arc_scene_ui_Label, 0, "(Larc/scene/ui/Label;)V", 4106 },
	{ "lambda$build$65", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$65_arc_scene_ui_Label, 0, "(Larc/scene/ui/Label;)V", 4106 },
	{ "lambda$build$66", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$66, 0, "()V", 4106 },
	{ "lambda$build$63", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$63_mindustry_game_EventType$ResetEvent, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$63_mindustry_game_EventType$ResetEvent, "(Lmindustry/game/EventType$ResetEvent;)V", 4098 },
	{ "lambda$build$62", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$62_float, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$62_float, "(F)V", 4098 },
	{ "lambda$build$61", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$61_R_boolean, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$61_R_boolean, "()Z", 4098 },
	{ "lambda$build$59", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$59_R_boolean, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$59_R_boolean, "()Z", 4098 },
	{ "lambda$build$58", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$58_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$23", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$23_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$23_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$50", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$50_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$50_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$56", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$56_mindustry_ui_IntFormat_R_java_lang_CharSequence, 0, "(Lmindustry/ui/IntFormat;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$build$55", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$55_mindustry_ui_IntFormat_R_java_lang_CharSequence, 0, "(Lmindustry/ui/IntFormat;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$build$54", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$54_mindustry_ui_IntFormat_R_java_lang_CharSequence, 0, "(Lmindustry/ui/IntFormat;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$build$53", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$53_mindustry_ui_IntFormat_R_java_lang_CharSequence, 0, "(Lmindustry/ui/IntFormat;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$build$52", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$52_mindustry_ui_IntFormat_R_java_lang_CharSequence, 0, "(Lmindustry/ui/IntFormat;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$build$51", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$51_R_boolean, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$51_R_boolean, "()Z", 4098 },
	{ "lambda$build$49", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$49_R_boolean, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$49_R_boolean, "()Z", 4098 },
	{ "lambda$build$48", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$48_R_float, 0, "()F", 4106 },
	{ "lambda$build$41", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$41_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$41_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$47", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$47_R_boolean, 0, "()Z", 4106 },
	{ "lambda$build$42", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$42_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$46", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$46_arc_scene_ui_ImageButton, 0, "(Larc/scene/ui/ImageButton;)V", 4106 },
	{ "lambda$build$45", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$45, 0, "()V", 4106 },
	{ "lambda$build$44", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$44_arc_scene_ui_ImageButton_mindustry_game_Team, 0, "(Larc/scene/ui/ImageButton;Lmindustry/game/Team;)V", 4106 },
	{ "lambda$build$43", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$43_mindustry_game_Team, 0, "(Lmindustry/game/Team;)V", 4106 },
	{ "lambda$build$38", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$38_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$38_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$40", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$40_arc_scene_ui_ImageButton_R_boolean, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$40_arc_scene_ui_ImageButton_R_boolean, "(Larc/scene/ui/ImageButton;)Z", 4098 },
	{ "lambda$build$39", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$39, 0, "()V", 4106 },
	{ "lambda$build$37", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$37_R_boolean, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$37_R_boolean, "()Z", 4098 },
	{ "lambda$build$35", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$35, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$35, "()V", 4098 },
	{ "lambda$build$36", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$36, 0, "()V", 4106 },
	{ "lambda$build$34", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$34_R_boolean, 0, "()Z", 4106 },
	{ "lambda$build$27", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$27_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$27_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$33", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$33_arc_scene_ui_ImageButton, 0, "(Larc/scene/ui/ImageButton;)V", 4106 },
	{ "lambda$build$32", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$32, 0, "()V", 4106 },
	{ "lambda$build$31", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$31_arc_scene_ui_ImageButton, 0, "(Larc/scene/ui/ImageButton;)V", 4106 },
	{ "lambda$build$30", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$30, 0, "()V", 4106 },
	{ "lambda$build$29", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$29_arc_scene_ui_ImageButton, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$29_arc_scene_ui_ImageButton, "(Larc/scene/ui/ImageButton;)V", 4098 },
	{ "lambda$build$28", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$28, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$28, "()V", 4098 },
	{ "lambda$build$26", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$26_R_boolean, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$26_R_boolean, "()Z", 4098 },
	{ "lambda$build$25", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$25_R_java_lang_CharSequence, 0, "()Ljava/lang/CharSequence;", 4106 },
	{ "lambda$build$24", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$24_float_float_float_float, 0, "(FFFF)V", 4106 },
	{ "lambda$build$19", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$19_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$19_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$22", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$22_R_boolean, 0, "()Z", 4106 },
	{ "lambda$build$21", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$21_R_java_lang_CharSequence, 0, "()Ljava/lang/CharSequence;", 4106 },
	{ "lambda$build$20", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$20_R_boolean, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$20_R_boolean, "()Z", 4098 },
	{ "lambda$build$16", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$16_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$16_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$18", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$18_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$17", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$17_R_boolean, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$17_R_boolean, "()Z", 4098 },
	{ "lambda$build$15", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$15_float_float_float_float, 0, "(FFFF)V", 4106 },
	{ "lambda$build$10", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$10_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$10_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$13", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$13_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$14", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$14_R_java_lang_CharSequence, 0, "()Ljava/lang/CharSequence;", 4106 },
	{ "lambda$build$12", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$12_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$12_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$11", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$11_R_boolean, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$11_R_boolean, "()Z", 4098 },
	{ "lambda$build$5", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$5_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$5_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$7", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$7_float_arc_scene_ui_layout_Table, 0, "(FLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$9", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$9_float_R_float, 0, "(F)F", 4106 },
	{ "lambda$build$8", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$build$8_R_java_lang_CharSequence, 0, "()Ljava/lang/CharSequence;", 4106 },
	{ "lambda$build$6", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$6_R_boolean, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$6_R_boolean, "()Z", 4098 },
	{ "lambda$build$4", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$4_mindustry_game_EventType$ResetEvent, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$4_mindustry_game_EventType$ResetEvent, "(Lmindustry/game/EventType$ResetEvent;)V", 4098 },
	{ "lambda$build$3", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$3_mindustry_game_EventType$SectorInvasionEvent, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$3_mindustry_game_EventType$SectorInvasionEvent, "(Lmindustry/game/EventType$SectorInvasionEvent;)V", 4098 },
	{ "lambda$build$2", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$2_mindustry_game_EventType$SectorLoseEvent, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$2_mindustry_game_EventType$SectorLoseEvent, "(Lmindustry/game/EventType$SectorLoseEvent;)V", 4098 },
	{ "lambda$build$1", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$1_mindustry_game_EventType$SectorCaptureEvent, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$1_mindustry_game_EventType$SectorCaptureEvent, "(Lmindustry/game/EventType$SectorCaptureEvent;)V", 4098 },
	{ "lambda$build$0", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$build$0_mindustry_game_EventType$WaveEvent, VTABLE_mindustry_ui_fragments_HudFragment_lambda$build$0_mindustry_game_EventType$WaveEvent, "(Lmindustry/game/EventType$WaveEvent;)V", 4098 },
	{ "lambda$rebuildBlockSelection$4", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$rebuildBlockSelection$4, 0, "()V", 4106 },
	{ "lambda$rebuildBlockSelection$3", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$rebuildBlockSelection$3_arc_scene_ui_ImageButton_mindustry_world_Block, 0, "(Larc/scene/ui/ImageButton;Lmindustry/world/Block;)V", 4106 },
	{ "lambda$rebuildBlockSelection$2", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$rebuildBlockSelection$2_mindustry_world_Block_arc_scene_ui_layout_Table_java_lang_String, VTABLE_mindustry_ui_fragments_HudFragment_lambda$rebuildBlockSelection$2_mindustry_world_Block_arc_scene_ui_layout_Table_java_lang_String, "(Lmindustry/world/Block;Larc/scene/ui/layout/Table;Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuildBlockSelection$1", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$rebuildBlockSelection$1_mindustry_world_Block, 0, "(Lmindustry/world/Block;)V", 4106 },
	{ "lambda$rebuildBlockSelection$0", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$rebuildBlockSelection$0_mindustry_world_Block_mindustry_world_Block_R_int, 0, "(Lmindustry/world/Block;Lmindustry/world/Block;)I", 4106 },
	{ "lambda$addBlockSelection$6", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$addBlockSelection$6_Array1_mindustry_world_Block_Array1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Collapser, 0, "([Lmindustry/world/Block;[Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Collapser;)V", 4106 },
	{ "lambda$addBlockSelection$5", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$addBlockSelection$5_arc_scene_ui_layout_Collapser, 0, "(Larc/scene/ui/layout/Collapser;)V", 4106 },
	{ "lambda$addBlockSelection$4", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$addBlockSelection$4_R_boolean, 0, "()Z", 4106 },
	{ "lambda$addBlockSelection$3", (intptr_t) SM_mindustry_ui_fragments_HudFragment_lambda$addBlockSelection$3_Array1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, 0, "([Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$addBlockSelection$1", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$addBlockSelection$1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HudFragment_lambda$addBlockSelection$1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$addBlockSelection$2", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$addBlockSelection$2_arc_scene_ui_layout_Table_java_lang_String, VTABLE_mindustry_ui_fragments_HudFragment_lambda$addBlockSelection$2_arc_scene_ui_layout_Table_java_lang_String, "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V", 4098 },
	{ "lambda$addBlockSelection$0", (intptr_t) M_mindustry_ui_fragments_HudFragment_lambda$addBlockSelection$0_arc_scene_ui_ScrollPane_Array1_mindustry_type_Planet_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HudFragment_lambda$addBlockSelection$0_arc_scene_ui_ScrollPane_Array1_mindustry_type_Planet_arc_scene_ui_layout_Table, "(Larc/scene/ui/ScrollPane;[Lmindustry/type/Planet;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ui_fragments_HudFragment, 0, "()V", 8 },
};

Class class_mindustry_ui_fragments_HudFragment{
		.nativeName = (intptr_t) "mindustry/ui/fragments/HudFragment",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_fragments_HudFragment),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_HudFragment,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_HudFragment,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_HudFragment,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 148,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 77,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_HudFragment = registerClass(&class_mindustry_ui_fragments_HudFragment);

}
