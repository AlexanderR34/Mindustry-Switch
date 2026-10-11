#include "mindustry/core/Control.h"
#include "mindustry/core/Control_invoke_java_lang_Runnable_21.h"
#include "mindustry/game/EventType_SectorLaunchEvent.h"
#include "mindustry/core/Control_invoke_java_lang_Runnable_22.h"
#include "arc/func/Prov.h"
#include "mindustry/core/Control_invoke_java_lang_Runnable_23.h"
#include "mindustry/core/Control_invoke_java_lang_Runnable_24.h"
#include "arc/Input.h"
#include "mindustry/core/Control_invoke_java_lang_Runnable_20.h"
#include "mindustry/core/Control_invoke_java_lang_Runnable_29.h"
#include "mindustry/core/Control_invoke_arc_func_Boolf_4.h"
#include "mindustry/content/TechTree_TechNode.h"
#include "mindustry/core/Control_invoke_arc_func_Boolf_5.h"
#include "arc/graphics/Color.h"
#include "mindustry/core/Control_invoke_java_lang_Runnable_25.h"
#include "mindustry/core/Control_invoke_arc_func_Boolf_3.h"
#include "mindustry/core/Control_invoke_java_lang_Runnable_26.h"
#include "mindustry/core/Control_invoke_java_lang_Runnable_27.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/input/KeyCode.h"
#include "mindustry/core/Control_invoke_java_lang_Runnable_28.h"
#include "mindustry/game/EventType_SaveLoadEvent.h"
#include "mindustry/mod/Mods.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/game/SectorInfo.h"
#include "mindustry/game/EventType_ClientLoadEvent.h"
#include "arc/func/Boolf.h"
#include "mindustry/core/Control_invoke_java_lang_Runnable_32.h"
#include "arc/math/Mathf.h"
#include "mindustry/core/Control_invoke_java_lang_Runnable_33.h"
#include "mindustry/world/blocks/power/PowerGraph.h"
#include "mindustry/core/Control_invoke_java_lang_Runnable_34.h"
#include "mindustry/core/Control_invoke_java_lang_Runnable_35.h"
#include "arc/util/Log.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/core/Control_invoke_arc_func_Cons_31.h"
#include "mindustry/core/Control_invoke_java_lang_Runnable_30.h"
#include "mindustry/core/Control_invoke_arc_func_Cons_30.h"
#include "mindustry/input/Binding.h"
#include "mindustry/core/Control_invoke_java_lang_Runnable_31.h"
#include "mindustry/core/Control_invoke_arc_func_Cons_33.h"
#include "mindustry/core/Control_invoke_arc_func_Cons_32.h"
#include "arc/util/Time.h"
#include "mindustry/core/Control_invoke_arc_func_Cons_35.h"
#include "mindustry/core/Control_invoke_arc_func_Cons_34.h"
#include "mindustry/core/Control_invoke_java_lang_Runnable_36.h"
#include "mindustry/core/Control_invoke_java_lang_Runnable_37.h"
#include "mindustry/ui/dialogs/PausedDialog.h"
#include "mindustry/core/Control_invoke_arc_func_Cons_29.h"
#include "java/lang/Object.h"
#include "mindustry/ui/dialogs/GameOverDialog.h"
#include "mindustry/ui/dialogs/PlanetDialog.h"
#include "mindustry/game/EventType_ResetEvent.h"
#include "mindustry/world/blocks/LaunchAnimator.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/core/GameState_State.h"
#include "java/util/Date.h"
#include "arc/func/Cons.h"
#include "mindustry/game/EventType_UnlockEvent.h"
#include "mindustry/game/EventType_WorldLoadEvent.h"
#include "mindustry/core/Control.h"
#include "java/io/IOException.h"
#include "arc/input/KeyBind.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/core/Platform.h"
#include "mindustry/core/Control_invoke_mindustry_world_modules_ItemModule_ItemConsumer_1.h"
#include "mindustry/game/Saves_SaveSlot.h"
#include "mindustry/Vars.h"
#include "arc/Events.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/input/MobileInput.h"
#include "mindustry/ui/fragments/HudFragment.h"
#include "java/lang/Throwable.h"
#include "mindustry/core/Control_1.h"
#include "mindustry/maps/Map.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/type/Item.h"
#include "arc/struct/Queue.h"
#include "mindustry/world/modules/ItemModule.h"
#include "arc/assets/AssetManager.h"
#include "mindustry/core/Logic.h"
#include "mindustry/game/EventType_SaveWriteEvent.h"
#include "mindustry/game/EventType_RulesLoadEvent.h"
#include "arc/graphics/Camera.h"
#include "mindustry/net/Net.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "mindustry/editor/MapEditorDialog.h"
#include "arc/util/Timer_Task.h"
#include "mindustry/game/EventType_PlayEvent.h"
#include "java/lang/String.h"
#include "mindustry/world/WorldContext.h"
#include "mindustry/graphics/MinimapRenderer.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "mindustry/game/AttackIndicators.h"
#include "java/lang/Enum.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "mindustry/gen/Player.h"
#include "mindustry/type/Planet.h"
#include "mindustry/maps/SectorDamage.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "java/util/Objects.h"
#include "mindustry/input/InputHandler.h"
#include "mindustry/core/GameState.h"
#include "mindustry/world/Build.h"
#include "java/lang/Integer.h"
#include "mindustry/content/TechTree.h"
#include "mindustry/content/Fx.h"
#include "mindustry/world/WorldParams.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "arc/Settings.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/io/SaveIO_SaveException.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/core/Control_invoke_arc_func_Prov_7.h"
#include "mindustry/core/Control_invoke_arc_func_Prov_5.h"
#include "mindustry/net/WorldReloader.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "mindustry/core/Control_invoke_arc_func_Prov_6.h"
#include "arc/util/Nullable.h"
#include "arc/util/Interval.h"
#include "mindustry/core/Control_invoke_arc_func_Prov_4.h"
#include "mindustry/gen/Building.h"
#include "arc/Graphics.h"
#include "arc/scene/Scene.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/input/DesktopInput.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "java/lang/Boolean.h"
#include "mindustry/game/Rules.h"
#include "mindustry/game/Objectives_Objective.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "mindustry/game/EventType_HostEvent.h"
#include "mindustry/game/EventType_StateChangeEvent.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/game/EventType_SectorCaptureEvent.h"
#include "mindustry/ui/fragments/ChatFragment.h"
#include "mindustry/game/EventType_GameOverEvent.h"
#include "arc/assets/Loadable.h"
#include "mindustry/game/CampaignRules.h"
#include "mindustry/type/Sector.h"
#include "mindustry/world/modules/ItemModule_ItemConsumer.h"
#include "mindustry/game/Teams_BlockPlan.h"
#include "mindustry/game/EventType_Trigger.h"
#include "arc/audio/Sound.h"
#include "mindustry/ui/dialogs/CampaignCompleteDialog.h"
#include "mindustry/game/GameStats.h"
#include "mindustry/core/NetServer.h"
#include "mindustry/game/EventType_WaveEvent.h"
#include "mindustry/core/World.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/core/Renderer.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/world/modules/PowerModule.h"
#include "arc/math/geom/Position.h"
#include "java/util/Locale.h"
#include "mindustry/game/Saves.h"
#include "mindustry/io/SaveIO.h"
#include "arc/audio/Music.h"
#include "mindustry/type/SectorPreset.h"
#include "mindustry/core/Control_invoke_arc_func_Cons_20.h"
#include "mindustry/core/Control_invoke_arc_func_Cons_22.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/core/Control_invoke_arc_func_Cons_21.h"
#include "mindustry/core/Control_invoke_arc_func_Cons_24.h"
#include "java/lang/Float.h"
#include "mindustry/core/Control_invoke_arc_func_Cons_23.h"
#include "mindustry/core/Control_invoke_arc_func_Cons_26.h"
#include "arc/files/Fi.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/core/Control_invoke_arc_func_Cons_25.h"
#include "mindustry/core/Control_invoke_arc_func_Cons_28.h"
#include "arc/Application.h"
#include "mindustry/core/Control_invoke_arc_func_Cons_27.h"
#include "mindustry/core/Control_invoke_arc_func_Cons_19.h"
#include "mindustry/core/Control_invoke_arc_func_Cons_18.h"
#include "java/text/SimpleDateFormat.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/core/Control_invoke_java_lang_Runnable_19.h"
#include "arc/scene/Element.h"
#include "arc/ApplicationListener.h"
#include "mindustry/game/Objectives_SectorComplete.h"
#include "mindustry/game/EventType_BuildDamageEvent.h"
#include "mindustry/ui/fragments/MinimapFragment.h"
#include "arc/struct/SnapshotSeq.h"
#include "mindustry/gen/Call.h"
#include "mindustry/audio/SoundControl.h"

extern "C" {


void mark_mindustry_core_Control(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_core_Control *) object;
	if (self->F_saves)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_saves)->clazz)->markFunction)((jobject) self->F_saves, mark, depth + 1);
	if (self->F_sound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sound)->clazz)->markFunction)((jobject) self->F_sound, mark, depth + 1);
	if (self->F_input)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_input)->clazz)->markFunction)((jobject) self->F_input, mark, depth + 1);
	if (self->F_indicators)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_indicators)->clazz)->markFunction)((jobject) self->F_indicators, mark, depth + 1);
	if (self->F_lastDamagedCore)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastDamagedCore)->clazz)->markFunction)((jobject) self->F_lastDamagedCore, mark, depth + 1);
	if (self->F_timer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_timer)->clazz)->markFunction)((jobject) self->F_timer, mark, depth + 1);
	if (self->F_toBePlaced)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_toBePlaced)->clazz)->markFunction)((jobject) self->F_toBePlaced, mark, depth + 1);
	if (self->F_toBePlacedConfigs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_toBePlacedConfigs)->clazz)->markFunction)((jobject) self->F_toBePlacedConfigs, mark, depth + 1);
}

void clinit_mindustry_core_Control(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_core_Control(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(63);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_arc_util_Interval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Interval);
	init_arc_util_Interval_int(ctx, sp[1].o, (jint(2)));
	((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_timer = (jref) sp[1].o;
	LINE_NUMBER(58);
	((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_hiscore = (jint(0));
	LINE_NUMBER(59);
	((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_wasPaused = (jint(0));
	((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_backgroundPaused = (jint(0));
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_toBePlaced = (jref) sp[1].o;
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_toBePlacedConfigs = (jref) sp[1].o;
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Saves(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Saves);
	init_mindustry_game_Saves(ctx, sp[1].o);
	((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_saves = (jref) sp[1].o;
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	clinit_mindustry_audio_SoundControl(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_audio_SoundControl);
	init_mindustry_audio_SoundControl(ctx, sp[1].o);
	((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_sound = (jref) sp[1].o;
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_AttackIndicators(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_AttackIndicators);
	init_mindustry_game_AttackIndicators(ctx, sp[1].o);
	((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_indicators = (jref) sp[1].o;
	LINE_NUMBER(68);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$BuildDamageEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Cons_18(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Cons_18 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Cons_18);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(75);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ClientLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Cons_19(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Cons_19 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Cons_19);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(84);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$StateChangeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Cons_20(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Cons_20 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Cons_20);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(90);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$PlayEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Cons_21(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Cons_21 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Cons_21);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(97);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WorldLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Cons_22(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Cons_22 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Cons_22);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(109);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$SaveLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Cons_23(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Cons_23 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Cons_23);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(113);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ResetEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Cons_24(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Cons_24 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Cons_24);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(123);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WaveEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Cons_25(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Cons_25 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Cons_25);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(132);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$GameOverEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Cons_26(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Cons_26 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Cons_26);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(140);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WorldLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Cons_27(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Cons_27 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Cons_27);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(149);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WorldLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Cons_28(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Cons_28 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Cons_28);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(161);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$UnlockEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Cons_29(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Cons_29 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Cons_29);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(177);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$SectorCaptureEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Cons_30(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Cons_30 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Cons_30);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(188);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$GameOverEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Cons_31(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Cons_31 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Cons_31);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(198);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_newGame;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_java_lang_Runnable_19(ctx);
		auto proxy = (mindustry_core_Control_invoke_java_lang_Runnable_19 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_java_lang_Runnable_19);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(289);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$SaveWriteEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Cons_32(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Cons_32 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Cons_32);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(295);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$HostEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Cons_33(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Cons_33 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Cons_33);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(296);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$HostEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Cons_34(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Cons_34 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Cons_34);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_forcePlaceAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:forcePlaceAll", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(303);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_toBePlaced;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(304);
	((func_mindustry_core_Control_placeLandBuild_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Control_placeLandBuild_mindustry_gen_Building])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(305);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(307);
	((func_mindustry_core_Control_configurePlaced) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Control_configurePlaced])(ctx, (frame[0].o));
	LINE_NUMBER(308);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_toBePlaced;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_configurePlaced(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:configurePlaced", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_toBePlacedConfigs;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	LINE_NUMBER(313);
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Building, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))))));
	LINE_NUMBER(314);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1))));
	LINE_NUMBER(315);
	((func_mindustry_gen_Building_configureAny_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Building_configureAny_java_lang_Object])(ctx, (frame[3].o), (frame[4].o));
	LINE_NUMBER(316);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_toBePlacedConfigs;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(318);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_placeLandBuild_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:placeLandBuild", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	jint temp0 = (jint)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_rotation;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Prov_4(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Prov_4 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Prov_4);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	LINE_NUMBER(322);
	((func_mindustry_gen_Building_dropped) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_dropped])(ctx, (frame[1].o));
	LINE_NUMBER(324);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_coreBuildBlock;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp3 = jfloat(0);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	((func_mindustry_entities_Effect_at_float_float_float_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_java_lang_Object])(ctx, sp[0].o, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(325);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_placeEffect;
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp5 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp4, temp5, (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size))));
	LINE_NUMBER(326);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_loadAsync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:loadAsync", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(330);
	jfloat temp0 = jfloat(1);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"scale_marker"_j))));
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_scl = (temp0 / (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_width))));
	LINE_NUMBER(332);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_back;
	((func_arc_Input_setCatch_arc_input_KeyCode_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_setCatch_arc_input_KeyCode_boolean])(ctx, sp[0].o, sp[1].o, (jint(1)));
	LINE_NUMBER(334);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (8));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"ip"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"localhost"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"color-0"_j)));
	jint temp1 = jint(3);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_playerColors;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (8));
	LINE_NUMBER(336);
	jint temp2 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, sp[2].o);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp2);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"name"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (6)) = (((jobject) createStringLiteral(ctx, u8"lastBuild"_j)));
	jint temp3 = 7;
	jint temp4 = jint(0);
	LINE_NUMBER(338);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp4);
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	LINE_NUMBER(334);
	((func_arc_Settings_defaults_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_defaults_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(341);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_saves;
	((func_mindustry_game_Saves_load) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_load])(ctx, sp[0].o);
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_loadSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:loadSync", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(346);
	((func_mindustry_core_Control_createPlayer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Control_createPlayer])(ctx, (frame[0].o));
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_checkAutoUnlocks(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:checkAutoUnlocks", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(351);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(353);
	clinit_mindustry_content_TechTree(ctx);
	sp[0].o = (jobject)SF_mindustry_content_TechTree_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_content_TechTree$TechNode, sp[0].o));
	LINE_NUMBER(354);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_content;
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_unlocked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_unlocked_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_parent;
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_content;
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_unlocked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_unlocked_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
label_6:;
	{
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_requirements;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_objectives;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Boolf_3);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(355);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_content;
	((func_mindustry_ctype_UnlockableContent_unlock) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_unlock])(ctx, sp[0].o);
	}
label_5:;
	LINE_NUMBER(357);
	goto label_2;
label_3:;
	LINE_NUMBER(358);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Control_createPlayer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:createPlayer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(361);
	sp[0].o = (jobject)SM_mindustry_gen_Player_create_R_mindustry_gen_Player(ctx);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_player = sp[0].o;
	LINE_NUMBER(362);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((func_arc_Settings_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"name"_j))));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(364);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[0].o = (jobject)((func_arc_Settings_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"locale"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(365);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"default"_j))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject)SM_java_util_Locale_getDefault_R_java_util_Locale(ctx);
	sp[0].o = (jobject)((func_java_util_Locale_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Locale_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(368);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_locale = (jref) (frame[1].o);
	LINE_NUMBER(370);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_color;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_R_int])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"color-0"_j))));
	sp[0].o = (jobject)((func_arc_graphics_Color_set_int_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_int_R_arc_graphics_Color])(ctx, sp[0].o, temp0);
	LINE_NUMBER(372);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_8;
	}
	{
	LINE_NUMBER(373);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_MobileInput(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_input_MobileInput);
	init_mindustry_input_MobileInput(ctx, sp[1].o);
	((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input = (jref) sp[1].o;
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(375);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_DesktopInput(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_input_DesktopInput);
	init_mindustry_input_DesktopInput(ctx, sp[1].o);
	((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input = (jref) sp[1].o;
	}
label_10:;
	{
	LINE_NUMBER(378);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(379);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((func_mindustry_gen_Player_add) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_add])(ctx, sp[0].o);
	}
label_11:;
	{
	LINE_NUMBER(382);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ClientLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Cons_35(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Cons_35 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Cons_35);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(383);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_setInput_mindustry_input_InputHandler(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:setInput", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(386);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block;
	frame[2].o = sp[0].o;
	LINE_NUMBER(387);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[0].o = (jobject)((func_arc_Input_getInputProcessors_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_getInputProcessors_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_input;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[3].i = temp0;
	LINE_NUMBER(388);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_input;
	((func_mindustry_input_InputHandler_remove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_remove])(ctx, sp[0].o);
	LINE_NUMBER(389);
	((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_input = (jref) (frame[1].o);
	LINE_NUMBER(390);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[1].o)))->F_block = (jref) (frame[2].o);
	LINE_NUMBER(391);
	if ((frame[3].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(392);
	((func_mindustry_input_InputHandler_add) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_input_InputHandler_add])(ctx, (frame[1].o));
	}
label_6:;
	LINE_NUMBER(394);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Control_playMap_mindustry_maps_Map_mindustry_game_Rules(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:playMap", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(397);
	((func_mindustry_core_Control_playMap_mindustry_maps_Map_mindustry_game_Rules_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Control_playMap_mindustry_maps_Map_mindustry_game_Rules_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(398);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_playMap_mindustry_maps_Map_mindustry_game_Rules_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:playMap", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(401);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_java_lang_Runnable_20(ctx);
		auto proxy = (mindustry_core_Control_invoke_java_lang_Runnable_20 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_java_lang_Runnable_20);
		proxy->F_field2 = (frame[3].i);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_loadAnd_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_loadAnd_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(426);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_playSector_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:playSector", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(429);
	((func_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector])(ctx, (frame[0].o), (frame[1].o), (frame[1].o));
	LINE_NUMBER(430);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:playSector", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(433);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_mindustry_net_WorldReloader(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_net_WorldReloader);
	init_mindustry_net_WorldReloader(ctx, sp[3].o);
	((func_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(434);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:playSector", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(437);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_java_lang_Runnable_21(ctx);
		auto proxy = (mindustry_core_Control_invoke_java_lang_Runnable_21 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_java_lang_Runnable_21);
		proxy->F_field3 = (jref) (frame[1].o);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_loadAnd_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_loadAnd_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(567);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:playNewSector", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(570);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	clinit_mindustry_world_WorldParams(ctx);
	sp[4].o = gcAlloc(ctx, &class_mindustry_world_WorldParams);
	init_mindustry_world_WorldParams(ctx, sp[4].o);
	((func_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader_mindustry_world_WorldParams_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader_mindustry_world_WorldParams_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jobject(nullptr)));
	LINE_NUMBER(571);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader_mindustry_world_WorldParams_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:playNewSector", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(574);
	((func_mindustry_net_WorldReloader_begin) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_net_WorldReloader_begin])(ctx, (frame[3].o));
	LINE_NUMBER(575);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	((func_mindustry_core_World_loadSector_mindustry_type_Sector_mindustry_world_WorldParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_loadSector_mindustry_type_Sector_mindustry_world_WorldParams])(ctx, sp[0].o, (frame[2].o), (frame[4].o));
	LINE_NUMBER(576);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector = (jref) (frame[2].o);
	LINE_NUMBER(577);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_info;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_origin = (jref) (frame[1].o);
	LINE_NUMBER(578);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_info;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_destination = (jref) (frame[1].o);
	LINE_NUMBER(579);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_info;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_attempts = (((jint)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_attempts) + (jint(1)));
	LINE_NUMBER(581);
	if ((frame[5].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(582);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[5].o)))(ctx, (frame[5].o));
	}
label_7:;
	{
	LINE_NUMBER(585);
	clinit_mindustry_game_EventType$RulesLoadEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$RulesLoadEvent);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	init_mindustry_game_EventType$RulesLoadEvent_mindustry_game_Rules(ctx, sp[0].o, sp[1].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(586);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logic;
	((func_mindustry_core_Logic_play) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Logic_play])(ctx, sp[0].o);
	LINE_NUMBER(587);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_saves;
	((func_mindustry_game_Saves_saveSector_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_saveSector_mindustry_type_Sector])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(588);
	clinit_mindustry_game_EventType$SectorLaunchEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$SectorLaunchEvent);
	init_mindustry_game_EventType$SectorLaunchEvent_mindustry_type_Sector(ctx, sp[0].o, (frame[2].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(589);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_newGame;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	LINE_NUMBER(590);
	((func_mindustry_net_WorldReloader_end) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_net_WorldReloader_end])(ctx, (frame[3].o));
	LINE_NUMBER(591);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_playing;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(592);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_core_Control_isHighScore_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:isHighScore", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(595);
	popStackFrame(ctx);
	return ((jint)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_hiscore);
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:dispose", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(601);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_saves;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_saves;
	sp[0].o = (jobject)((func_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_saves;
	sp[0].o = (jobject)((func_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_game_Saves$SaveSlot_isAutosave_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_isAutosave_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_gameOver) != 0) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(603);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_saves;
	sp[0].o = (jobject)((func_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK(sp[0].o))->F_file;
	SM_mindustry_io_SaveIO_save_arc_files_Fi(ctx, sp[0].o);
	LINE_NUMBER(604);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_forceSave) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_forceSave])(ctx, sp[0].o);
	LINE_NUMBER(605);
	SM_arc_util_Log_info_java_lang_Object(ctx, (((jobject) createStringLiteral(ctx, u8"Saved on exit."_j))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(608);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(606);
	frame[1].o = sp[0].o;
	LINE_NUMBER(607);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[1].o));
	}
label_5:;
	{
	LINE_NUMBER(611);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) &class_arc_audio_Music);
	clinit_arc_struct_Seq(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getAll_java_lang_Class_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getAll_java_lang_Class_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_audio_Music, sp[0].o));
	LINE_NUMBER(612);
	((func_arc_audio_Music_stop) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_audio_Music_stop])(ctx, (frame[2].o));
	LINE_NUMBER(613);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(615);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_dispose])(ctx, sp[0].o);
	LINE_NUMBER(616);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_pause(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:pause", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(620);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"backgroundpause"_j))), (jint(1)));
	if (temp0 == 0) goto label_1;
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
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pauseDisabled) != 0) goto label_1;
	}
	{
	LINE_NUMBER(621);
	((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_backgroundPaused = (jint(1));
	LINE_NUMBER(622);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[2].o = (jobject)SF_mindustry_core_GameState$State_paused;
	jint temp0 = (jint)((func_mindustry_core_GameState_is_mindustry_core_GameState$State_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_is_mindustry_core_GameState$State_R_boolean])(ctx, sp[1].o, sp[2].o);
	((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_wasPaused = temp0;
	LINE_NUMBER(623);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_playing;
	jint temp1 = (jint)((func_mindustry_core_GameState_is_mindustry_core_GameState$State_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_is_mindustry_core_GameState$State_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp1 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_paused;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(625);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Control_resume(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:resume", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(629);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_paused;
	jint temp0 = (jint)((func_mindustry_core_GameState_is_mindustry_core_GameState$State_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_is_mindustry_core_GameState$State_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_wasPaused) != 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"backgroundpause"_j))), (jint(1)));
	if (temp0 == 0) goto label_1;
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
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pauseDisabled) != 0) goto label_1;
	}
	{
	LINE_NUMBER(630);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_playing;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(632);
	((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_backgroundPaused = (jint(0));
	LINE_NUMBER(633);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:init", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(637);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	((func_mindustry_core_Platform_updateRPC) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_updateRPC, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(640);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"uiscalechanged"_j))), (jint(0)));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(641);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_java_lang_Runnable_22(ctx);
		auto proxy = (mindustry_core_Control_invoke_java_lang_Runnable_22 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_java_lang_Runnable_22);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	LINE_NUMBER(671);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Control_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(676);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	if (sp[0].o != nullptr) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(678);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_saves;
	((func_mindustry_game_Saves_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_update])(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(682);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	jint temp0 = (jint)((func_arc_assets_AssetManager_update_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_update_R_boolean])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(684);
	goto label_6;
label_2:;
	LINE_NUMBER(683);
	INST_ASTORE(1);
label_6:;
	{
	LINE_NUMBER(686);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_input;
	((func_mindustry_input_InputHandler_updateState) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_updateState])(ctx, sp[0].o);
	LINE_NUMBER(688);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_sound;
	((func_mindustry_audio_SoundControl_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_update])(ctx, sp[0].o);
	LINE_NUMBER(690);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_fullscreen;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(691);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fullscreen"_j))));
	frame[1].i = temp0;
	LINE_NUMBER(692);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	sp += 1;
	if ((frame[1].i) != 0) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 2;
	jint temp0 = (jint)((func_arc_Graphics_setFullscreen_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_setFullscreen_boolean_R_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(693);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fullscreen"_j));
	sp += 2;
	if ((frame[1].i) != 0) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[0].i);
	sp++;
	POP_N(3); // Pop method args
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
label_9:;
	{
	LINE_NUMBER(696);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_x));
	if (temp0 != 0) goto label_17;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_y));
	if (temp0 == 0) goto label_18;
	}
label_17:;
	{
	LINE_NUMBER(697);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((func_mindustry_gen_Player_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_set_float_float])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(698);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_18;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	((func_mindustry_gen_Unit_kill) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_kill])(ctx, sp[0].o);
	}
label_18:;
	{
	LINE_NUMBER(700);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	if (temp0 == 0) goto label_20;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_unitWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_unitWidth_R_int])(ctx, sp[1].o);
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = ((jfloat(temp0)) / (jfloat(2)));
	}
label_20:;
	{
	LINE_NUMBER(701);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	if (temp0 == 0) goto label_21;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_unitHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_unitHeight_R_int])(ctx, sp[1].o);
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = ((jfloat(temp0)) / (jfloat(2)));
	}
label_21:;
	{
	LINE_NUMBER(703);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasKeyboard_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasKeyboard_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_22;
	}
	{
	LINE_NUMBER(704);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_performanceMetrics;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_22;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_toggle_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_toggle_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"showperformance"_j))));
	}
label_22:;
	{
	LINE_NUMBER(707);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(708);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_input;
	((func_mindustry_input_InputHandler_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_update])(ctx, sp[0].o);
	LINE_NUMBER(709);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_input;
	((func_mindustry_input_InputHandler_updateSelectQuadtree) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_updateSelectQuadtree])(ctx, sp[0].o);
	LINE_NUMBER(710);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_28;
	}
	{
	LINE_NUMBER(711);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_indicators;
	((func_mindustry_game_AttackIndicators_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_AttackIndicators_update])(ctx, sp[0].o);
	}
label_28:;
	{
	LINE_NUMBER(715);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(0)), (jfloat(300.0f)));
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(716);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	((func_mindustry_core_Platform_updateRPC) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_updateRPC, sp[0].o))(ctx, sp[0].o);
	}
label_30:;
	{
	LINE_NUMBER(720);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(721);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_33;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_33;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(722);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_items;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_mindustry_world_modules_ItemModule$ItemConsumer_1(ctx);
		auto proxy = (mindustry_core_Control_invoke_mindustry_world_modules_ItemModule$ItemConsumer_1 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_mindustry_world_modules_ItemModule$ItemConsumer_1);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_modules_ItemModule_each_mindustry_world_modules_ItemModule$ItemConsumer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_each_mindustry_world_modules_ItemModule$ItemConsumer])(ctx, sp[0].o, sp[1].o);
	}
label_33:;
	{
	LINE_NUMBER(725);
	if (((jint)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_backgroundPaused) == 0) goto label_35;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"backgroundpause"_j))));
	if (temp0 == 0) goto label_35;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_35;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pauseDisabled) != 0) goto label_35;
	}
	{
	LINE_NUMBER(726);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_paused;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	}
label_35:;
	{
	LINE_NUMBER(730);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_37;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jint temp0 = (jint)((func_mindustry_core_Renderer_isCutscene_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_isCutscene_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_37;
	}
	{
	LINE_NUMBER(731);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_playing;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	}
label_37:;
	{
	LINE_NUMBER(734);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_39;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_pause;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_39;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_40;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_afterGameOver) != 0) goto label_39;
	}
label_40:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jint temp0 = (jint)((func_mindustry_core_Renderer_isCutscene_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_isCutscene_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_39;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasDialog_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasDialog_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_39;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasKeyboard_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasKeyboard_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_39;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_restart;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_GameOverDialog_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_GameOverDialog_isShown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_39;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_paused;
	jint temp0 = (jint)((func_mindustry_core_GameState_is_mindustry_core_GameState$State_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_is_mindustry_core_GameState$State_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_41;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_playing;
	jint temp0 = (jint)((func_mindustry_core_GameState_is_mindustry_core_GameState$State_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_is_mindustry_core_GameState$State_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_39;
	}
label_41:;
	{
	LINE_NUMBER(735);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pauseDisabled) == 0) goto label_42;
	}
	{
	LINE_NUMBER(736);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudfrag;
	((func_mindustry_ui_fragments_HudFragment_showPauseDisabled) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_showPauseDisabled])(ctx, sp[0].o);
	goto label_39;
	}
label_42:;
	{
	LINE_NUMBER(738);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_44;
	}
	clinit_mindustry_core_GameState$State(ctx);
	(sp++)->o = SF_mindustry_core_GameState$State_playing;
	goto label_45;
label_44:;
	clinit_mindustry_core_GameState$State(ctx);
	(sp++)->o = SF_mindustry_core_GameState$State_paused;
label_45:;
	POP_N(2); // Pop method args
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
label_39:;
	{
	LINE_NUMBER(742);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_46;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_afterGameOver) == 0) goto label_46;
	}
	{
	LINE_NUMBER(743);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_paused;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	}
label_46:;
	{
	LINE_NUMBER(746);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_input;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_input_DesktopInput)) == 0) goto label_48;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_menu;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_49;
	}
	goto label_50;
label_48:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_back;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_49;
	}
label_50:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_restart;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_GameOverDialog_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_GameOverDialog_isShown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_49;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_minimapfrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_MinimapFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MinimapFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_49;
	}
	{
	LINE_NUMBER(747);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_chatfrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_ChatFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_52;
	}
	{
	LINE_NUMBER(748);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_chatfrag;
	((func_mindustry_ui_fragments_ChatFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_hide])(ctx, sp[0].o);
	goto label_49;
	}
label_52:;
	{
	LINE_NUMBER(749);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_paused;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PausedDialog_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PausedDialog_isShown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_49;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasDialog_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasDialog_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_49;
	}
	{
	LINE_NUMBER(750);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_paused;
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_PausedDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PausedDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(751);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_49;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pauseDisabled) != 0) goto label_49;
	}
	{
	LINE_NUMBER(752);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_paused;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	}
label_49:;
	{
	LINE_NUMBER(757);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_57;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_screenshot;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_57;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasField_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasField_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_57;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasKeyboard_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasKeyboard_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_57;
	}
	{
	LINE_NUMBER(758);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	((func_mindustry_core_Renderer_takeMapScreenshot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_takeMapScreenshot])(ctx, sp[0].o);
	}
label_57:;
	LINE_NUMBER(761);
	goto label_59;
label_24:;
	{
	LINE_NUMBER(763);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_60;
	}
	LINE_NUMBER(764);
	SM_arc_util_Time_update(ctx);
label_60:;
	{
	LINE_NUMBER(767);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasDialog_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasDialog_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_59;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_root;
	sp[0].o = (jobject)((func_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_59;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_root;
	sp[0].o = (jobject)((func_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_peek_R_java_lang_Object])(ctx, sp[0].o);
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_Dialog)) != 0) goto label_59;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_back;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_59;
	}
	{
	LINE_NUMBER(768);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	((func_mindustry_core_Platform_hide) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_hide, sp[0].o))(ctx, sp[0].o);
	}
label_59:;
	LINE_NUMBER(771);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_Control_lambda$update$0_mindustry_type_Item_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$update$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(722);
	((func_mindustry_type_Item_unlock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Item_unlock])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_Control_lambda$init$0(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$init$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	{
	LINE_NUMBER(641);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_java_lang_Runnable_23(ctx);
		auto proxy = (mindustry_core_Control_invoke_java_lang_Runnable_23 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_java_lang_Runnable_23);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_Control_lambda$init$1(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$init$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	{
	LINE_NUMBER(642);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@confirm"_j))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(643);
	((func_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(645);
	sp[0].o = (jobject) createArray(ctx, &class_float, (jint(1)));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(660.0f));
	frame[1].o = sp[0].o;
	LINE_NUMBER(646);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_java_lang_Runnable_24(ctx);
		auto proxy = (mindustry_core_Control_invoke_java_lang_Runnable_24 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_java_lang_Runnable_24);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	frame[2].o = sp[0].o;
	LINE_NUMBER(653);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Prov_5(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Prov_5 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Prov_5);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(10.0f);
	LINE_NUMBER(658);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expand_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expand_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(660);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(200.0f)), (jfloat(60.0f)));
	LINE_NUMBER(661);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@uiscale.cancel"_j))), (frame[2].o));
	LINE_NUMBER(663);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@ok"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_java_lang_Runnable_25(ctx);
		auto proxy = (mindustry_core_Control_invoke_java_lang_Runnable_25 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_java_lang_Runnable_25);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(668);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[0].o));
	LINE_NUMBER(669);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_Control_lambda$init$4_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$init$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(664);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"uiscalechanged"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(665);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(666);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_core_Control_lambda$init$3_Array1_float_java_lang_Runnable_R_java_lang_CharSequence(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$init$3", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(654);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))), (jfloat(0)), 1)) > 0) goto label_1;
	}
	{
	LINE_NUMBER(655);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[1].o)))(ctx, (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(657);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"uiscale.reset"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = frame[0].o;
	jint temp1 = jint(0);
	jfloat temp4 = ((jfloat)ARRAY_ACCESS(jfloat, sp[3].o, temp1)) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	ARRAY_ACCESS(jfloat, sp[3].o, temp1) = temp4;
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint((temp4 / (jfloat(60.0f))))));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_Control_lambda$init$2_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$init$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(647);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"uiscale"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (100));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(648);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"uiscalechanged"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(649);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(650);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	((func_arc_Application_exit) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_exit, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(651);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_lambda$playSector$0_mindustry_type_Sector_mindustry_net_WorldReloader_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$playSector$0", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_saves;
	sp[0].o = (jobject)((func_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(439);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_saves;
	sp[0].o = (jobject)((func_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot])(ctx, sp[0].o);
	((func_mindustry_game_Saves$SaveSlot_save) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_save])(ctx, sp[0].o);
	LINE_NUMBER(440);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_saves;
	((func_mindustry_game_Saves_resetSave) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_resetSave])(ctx, sp[0].o);
	}
label_8:;
	{
	LINE_NUMBER(443);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	((func_mindustry_type_SectorPreset_quietUnlock) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_SectorPreset_quietUnlock])(ctx, sp[0].o);
	}
label_11:;
	{
	LINE_NUMBER(447);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_planet;
	((func_mindustry_ui_dialogs_PlanetDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_hide])(ctx, sp[0].o);
	LINE_NUMBER(448);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_save;
	frame[4].o = sp[0].o;
	LINE_NUMBER(449);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	((func_mindustry_type_Planet_setLastSector_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_setLastSector_mindustry_type_Sector])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(451);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	if (((jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_clearSectorOnLose) != 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_campaignRules;
	if (((jint)((mindustry_game_CampaignRules *) NULL_CHECK(sp[0].o))->F_clearSectorOnLose) == 0) goto label_17;
	}
label_16:;
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(453);
	if ((frame[4].o) == nullptr) goto label_20;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_clearSectors;
	if ((--sp)->i != 0) goto label_20;
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_0;
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	if (((jint)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_hasCore) == 0) goto label_20;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_mindustry_io_SaveIO$SaveException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	if (((jint)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_hasCore) != 0) goto label_21;
	}
	INST_ICONST(1);
	goto label_22;
label_21:;
	INST_ICONST(0);
label_22:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(457);
	((func_mindustry_net_WorldReloader_begin) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_net_WorldReloader_begin])(ctx, (frame[2].o));
	LINE_NUMBER(459);
	sp[0].o = frame[4].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((func_mindustry_core_World_makeSectorContext_mindustry_type_Sector_R_mindustry_world_WorldContext) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_makeSectorContext_mindustry_type_Sector_R_mindustry_world_WorldContext])(ctx, sp[1].o, (frame[1].o));
	((func_mindustry_game_Saves$SaveSlot_load_mindustry_world_WorldContext) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_load_mindustry_world_WorldContext])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(460);
	((func_mindustry_game_Saves$SaveSlot_setAutosave_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_setAutosave_boolean])(ctx, (frame[4].o), (jint(1)));
	LINE_NUMBER(461);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector = (jref) (frame[1].o);
	LINE_NUMBER(462);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_landCloudColor;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_cloudColor = (jref) sp[1].o;
	LINE_NUMBER(465);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_cores_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	printf("[Control] playSector: defaultTeam cores isEmpty=%d, frame[6]=%d\n", temp0, frame[6].i);
	if (temp0 != 0) goto label_29;
	}
	INST_ILOAD(6);
	if ((--sp)->i == 0) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_30
label_29:;
	{
	LINE_NUMBER(468);
	if ((frame[5].i) != 0) goto label_31;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	if (((jint)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_spawnPosition) == 0) goto label_31;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	jint temp0 = (jint)((func_mindustry_game_SectorInfo_sectorDataMatches_mindustry_type_Sector_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_sectorDataMatches_mindustry_type_Sector_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_32;
	}
label_31:;
	{
	LINE_NUMBER(469);
	((func_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader])(ctx, (frame[0].o), (frame[3].o), (frame[1].o), (frame[2].o));
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_6; } // goto label_5
	}
label_32:;
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	frame[7].i = ((jint)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_spawnPosition);
	LINE_NUMBER(474);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(475);
	if ((frame[8].o) != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(476);
	((func_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader])(ctx, (frame[0].o), (frame[3].o), (frame[1].o), (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(477);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_mindustry_io_SaveIO$SaveException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_30; }
	if (bypasses[1]) { bypasses[1] = false; goto label_5; }
	{
	LINE_NUMBER(479);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_defaultCore;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	sp[2].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_defaultTeam;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(482);
	SM_mindustry_maps_SectorDamage_apply_float(ctx, (jfloat(1)));
	LINE_NUMBER(485);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_mindustry_game_Teams$BlockPlan)));
	frame[9].o = (checkCast(ctx, getArrayClass(&class_mindustry_game_Teams$BlockPlan, 1), sp[0].o));
	LINE_NUMBER(486);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_buildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_mindustry_gen_Building)));
	frame[10].o = (checkCast(ctx, getArrayClass(&class_mindustry_gen_Building, 1), sp[0].o));
	LINE_NUMBER(487);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_derelict;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_buildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_mindustry_gen_Building)));
	frame[11].o = (checkCast(ctx, getArrayClass(&class_mindustry_gen_Building, 1), sp[0].o));
	LINE_NUMBER(489);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logic;
	((func_mindustry_core_Logic_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Logic_reset])(ctx, sp[0].o);
	LINE_NUMBER(492);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	clinit_mindustry_core_Control$1(ctx);
	sp[4].o = gcAlloc(ctx, &class_mindustry_core_Control$1);
	init_mindustry_core_Control$1_mindustry_core_Control_int(ctx, sp[4].o, (frame[0].o), (frame[7].i));
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_java_lang_Runnable_26(ctx);
		auto proxy = (mindustry_core_Control_invoke_java_lang_Runnable_26 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_java_lang_Runnable_26);
		proxy->F_field2 = (jref) (frame[9].o);
		proxy->F_field1 = (jref) (frame[10].o);
		proxy->F_field0 = (jref) (frame[11].o);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader_mindustry_world_WorldParams_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader_mindustry_world_WorldParams_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	LINE_NUMBER(544);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_java_lang_Runnable_27(ctx);
		auto proxy = (mindustry_core_Control_invoke_java_lang_Runnable_27 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_java_lang_Runnable_27);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(548);
	goto label_5;
	}
label_30:;
	{
	LINE_NUMBER(550);
	clinit_mindustry_game_EventType$RulesLoadEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$RulesLoadEvent);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	init_mindustry_game_EventType$RulesLoadEvent_mindustry_game_Rules_boolean(ctx, sp[0].o, sp[1].o, (jint(1)));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(551);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_playing;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(552);
	((func_mindustry_net_WorldReloader_end) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_net_WorldReloader_end])(ctx, (frame[2].o));
	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(561);
	goto label_46;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(555);
	frame[6].o = sp[0].o;
	LINE_NUMBER(556);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[6].o));
	LINE_NUMBER(557);
	((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_save = (jref) (jobject(nullptr));
	LINE_NUMBER(558);
	jfloat temp0 = jfloat(10.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_java_lang_Runnable_28(ctx);
		auto proxy = (mindustry_core_Control_invoke_java_lang_Runnable_28 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_java_lang_Runnable_28);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(ctx, temp0, sp[0].o);
	LINE_NUMBER(559);
	((func_mindustry_game_Saves$SaveSlot_delete) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_delete])(ctx, (frame[4].o));
	LINE_NUMBER(560);
	((func_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector])(ctx, (frame[0].o), (frame[3].o), (frame[1].o));
	}
label_46:;
	{
	LINE_NUMBER(562);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_planet;
	((func_mindustry_ui_dialogs_PlanetDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_hide])(ctx, sp[0].o);
	goto label_52;
	}
label_20:;
	{
	LINE_NUMBER(564);
	((func_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader])(ctx, (frame[0].o), (frame[3].o), (frame[1].o), (frame[2].o));
	}
label_52:;
	LINE_NUMBER(566);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_Control_lambda$playSector$5(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$playSector$5", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	{
	LINE_NUMBER(558);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@save.corrupted"_j))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_Control_lambda$playSector$4(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$playSector$4", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	{
	LINE_NUMBER(546);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_minimap;
	((func_mindustry_graphics_MinimapRenderer_updateAll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_updateAll])(ctx, sp[0].o);
	LINE_NUMBER(547);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_Control_lambda$playSector$1_Array1_mindustry_gen_Building_Array1_mindustry_gen_Building_Array1_mindustry_game_Teams$BlockPlan(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$playSector$1", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(495);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(498);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_derelict;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_buildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_mindustry_gen_Building)));
	frame[4].o = (checkCast(ctx, getArrayClass(&class_mindustry_gen_Building, 1), sp[0].o));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_4:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_5;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(499);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_tile;
	((func_mindustry_world_Tile_remove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_remove])(ctx, sp[0].o);
	LINE_NUMBER(498);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(503);
	frame[4].o = (frame[0].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_10:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_11;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(504);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, (frame[7].o));
	jint temp1 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, temp1);
	frame[8].o = sp[0].o;
	LINE_NUMBER(505);
	if ((frame[8].o) == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_build;
	if (sp[0].o != nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_block;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	jint temp0 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, (frame[7].o));
	jint temp1 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, (frame[7].o));
	jint temp2 = (jint)SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_boolean_boolean_R_boolean(ctx, sp[0].o, sp[1].o, temp0, temp1, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_rotation), (jint(0)), (jint(0)));
	if (temp2 == 0) goto label_14;
	}
	{
	LINE_NUMBER(506);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_block;
	clinit_mindustry_game_Team(ctx);
	sp[2].o = (jobject)SF_mindustry_game_Team_derelict;
	jint temp0 = (jint)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_rotation;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Prov_6(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Prov_6 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Prov_6);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	}
label_14:;
	{
	LINE_NUMBER(503);
	INST_IINC(6, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(511);
	frame[4].o = (frame[1].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_18:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_19;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(512);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_power;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(513);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_power;
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerGraph);
	init_mindustry_world_blocks_power_PowerGraph(ctx, sp[1].o);
	((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph = (jref) sp[1].o;
	LINE_NUMBER(514);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	}
label_21:;
	{
	LINE_NUMBER(511);
	INST_IINC(6, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(519);
	frame[4].o = (frame[1].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_26:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_27;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(520);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, (frame[7].o));
	jint temp1 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, temp1);
	frame[8].o = sp[0].o;
	LINE_NUMBER(521);
	if ((frame[8].o) == nullptr) goto label_30;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_build;
	if (sp[0].o != nullptr) goto label_30;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_block;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	jint temp0 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, (frame[7].o));
	jint temp1 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, (frame[7].o));
	jint temp2 = (jint)SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_boolean_boolean_R_boolean(ctx, sp[0].o, sp[1].o, temp0, temp1, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_rotation), (jint(0)), (jint(0)));
	if (temp2 == 0) goto label_30;
	}
	{
	LINE_NUMBER(522);
	((func_mindustry_gen_Building_addPlan_boolean_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_addPlan_boolean_boolean])(ctx, (frame[7].o), (jint(0)), (jint(1)));
	LINE_NUMBER(523);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_block;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	sp[2].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_defaultTeam;
	jint temp0 = (jint)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_rotation;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Prov_7(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Prov_7 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Prov_7);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	LINE_NUMBER(524);
	sp[0].o = frame[7].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	((func_mindustry_gen_Building_changeTeam_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_changeTeam_mindustry_game_Team])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(525);
	((func_mindustry_gen_Building_dropped) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_dropped])(ctx, (frame[7].o));
	}
label_30:;
	{
	LINE_NUMBER(519);
	INST_IINC(6, 1);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(529);
	frame[4].o = (frame[1].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_37:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_38;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(530);
	jint temp0 = (jint)((func_mindustry_gen_Building_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_isValid_R_boolean])(ctx, (frame[7].o));
	if (temp0 == 0) goto label_40;
	}
	{
	LINE_NUMBER(531);
	((func_mindustry_gen_Building_updateProximity) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_updateProximity])(ctx, (frame[7].o));
	}
label_40:;
	{
	LINE_NUMBER(529);
	INST_IINC(6, 1);
	goto label_37;
	}
label_38:;
	{
	LINE_NUMBER(536);
	frame[4].o = (frame[2].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_44:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_45;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(537);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_x), ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_y));
	frame[8].o = sp[0].o;
	LINE_NUMBER(538);
	if ((frame[8].o) == nullptr) goto label_48;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_block;
	sp[1].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_48;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, (frame[8].o));
	if (temp0 != ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_x)) goto label_48;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, (frame[8].o));
	if (temp0 != ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_y)) goto label_48;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o != sp[1].o) goto label_49;
	}
label_48:;
	{
	LINE_NUMBER(539);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[3].o)))->F_plans;
	((func_arc_struct_Queue_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_add_java_lang_Object])(ctx, sp[0].o, (frame[7].o));
	}
label_49:;
	{
	LINE_NUMBER(536);
	INST_IINC(6, 1);
	goto label_44;
	}
label_45:;
	LINE_NUMBER(542);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_core_Control_lambda$playSector$3_mindustry_gen_Building_R_mindustry_gen_Building(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$playSector$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(523);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_core_Control_lambda$playSector$2_mindustry_gen_Building_R_mindustry_gen_Building(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$playSector$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(506);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_Control_lambda$playMap$0_mindustry_maps_Map_mindustry_game_Rules_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$playMap$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(402);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logic;
	((func_mindustry_core_Logic_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Logic_reset])(ctx, sp[0].o);
	LINE_NUMBER(403);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	((func_mindustry_core_World_loadMap_mindustry_maps_Map_mindustry_game_Rules) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_loadMap_mindustry_maps_Map_mindustry_game_Rules])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(404);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[3].o = sp[0].o;
	LINE_NUMBER(405);
	((func_mindustry_game_Rules_retainContentFields_mindustry_game_Rules) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Rules_retainContentFields_mindustry_game_Rules])(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(406);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules = (jref) (frame[1].o);
	LINE_NUMBER(407);
	if ((frame[2].i) == 0) goto label_6;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_playtestingMap = (jref) (frame[0].o);
	}
label_6:;
	{
	LINE_NUMBER(408);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector = (jref) (jobject(nullptr));
	LINE_NUMBER(409);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor = (jint(0));
	LINE_NUMBER(410);
	clinit_mindustry_game_EventType$RulesLoadEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$RulesLoadEvent);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	init_mindustry_game_EventType$RulesLoadEvent_mindustry_game_Rules(ctx, sp[0].o, sp[1].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(411);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logic;
	((func_mindustry_core_Logic_play) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Logic_play])(ctx, sp[0].o);
	LINE_NUMBER(412);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"savecreate"_j))));
	if (temp0 == 0) goto label_11;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_isInvalidMap_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_isInvalidMap_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_11;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_11;
	{
	LINE_NUMBER(413);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_saves;
	sp[1].o = (jobject)((func_mindustry_maps_Map_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Map_name_R_java_lang_String])(ctx, (frame[0].o));
	clinit_java_text_SimpleDateFormat(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_text_SimpleDateFormat);
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"MMM dd h:mm"_j));
	sp[4].o = (jobject)SM_java_util_Locale_getDefault_R_java_util_Locale(ctx);
	init_java_text_SimpleDateFormat_java_lang_String_java_util_Locale(ctx, sp[2].o, sp[3].o, sp[4].o);
	clinit_java_util_Date(ctx);
	sp[3].o = gcAlloc(ctx, &class_java_util_Date);
	init_java_util_Date(ctx, sp[3].o);
	sp[2].o = (jobject)((func_java_text_SimpleDateFormat_format_java_util_Date_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_text_SimpleDateFormat_format_java_util_Date_R_java_lang_String])(ctx, sp[2].o, sp[3].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 \u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_mindustry_game_Saves_addSave_java_lang_String_R_mindustry_game_Saves$SaveSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_addSave_java_lang_String_R_mindustry_game_Saves$SaveSlot])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(415);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_newGame;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	LINE_NUMBER(418);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_isInvalidMap_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_isInvalidMap_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_14;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_14;
	{
	LINE_NUMBER(419);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getDialog_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getDialog_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(420);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_editor;
	((func_mindustry_editor_MapEditorDialog_resumeAfterPlaytest_mindustry_maps_Map) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_resumeAfterPlaytest_mindustry_maps_Map])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(421);
	if ((frame[4].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(422);
	sp[0].o = frame[4].o;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_java_lang_Runnable_29(ctx);
		auto proxy = (mindustry_core_Control_invoke_java_lang_Runnable_29 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_java_lang_Runnable_29);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	}
label_14:;
	LINE_NUMBER(425);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Control_lambda$createPlayer$0_mindustry_game_EventType$ClientLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$createPlayer$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(382);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_input;
	((func_mindustry_input_InputHandler_add) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_add])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_core_Control_lambda$checkAutoUnlocks$0_mindustry_game_Objectives$Objective_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$checkAutoUnlocks$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(354);
	jint temp0 = (jint)((func_mindustry_game_Objectives$Objective_complete_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_game_Objectives$Objective, INDEX_mindustry_game_Objectives$Objective_complete_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
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

jobject SM_mindustry_core_Control_lambda$placeLandBuild$0_mindustry_gen_Building_R_mindustry_gen_Building(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$placeLandBuild$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_Control_lambda$new$24_mindustry_game_EventType$HostEvent(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$24", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(297);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_playing;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_lambda$new$23_mindustry_game_EventType$HostEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$23", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(295);
	((func_mindustry_core_Control_forcePlaceAll) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Control_forcePlaceAll])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_lambda$new$22_mindustry_game_EventType$SaveWriteEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$22", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(290);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(291);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	((func_mindustry_type_Planet_saveStats) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_saveStats])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(293);
	((func_mindustry_core_Control_forcePlaceAll) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Control_forcePlaceAll])(ctx, (frame[0].o));
	LINE_NUMBER(294);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_lambda$new$19(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$19", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(199);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(200);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(202);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(203);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((func_mindustry_gen_Player_set_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_set_arc_math_geom_Position])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(205);
	frame[2].f = (jfloat(0));
	LINE_NUMBER(206);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"skipcoreanimation"_j))));
	if (temp0 != 0) goto label_6;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pvp) != 0) goto label_6;
	}
	{
	LINE_NUMBER(207);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_launchDuration_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_launchDuration_R_float])(ctx, (frame[1].o));
	frame[2].f = temp0;
	LINE_NUMBER(209);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp1 = jfloat(60.0f);
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_launchDuration_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_launchDuration_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_deathTimer = (temp1 - temp2);
	LINE_NUMBER(211);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp3 = (jint)((func_arc_Settings_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"musicvol"_j))));
	if (temp3 <= 0) goto label_10;
	}
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_landMusic_R_arc_audio_Music) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_landMusic_R_arc_audio_Music])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(214);
	if ((frame[3].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(215);
	((func_arc_audio_Music_stop) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_audio_Music_stop])(ctx, (frame[3].o));
	LINE_NUMBER(216);
	((func_arc_audio_Music_play) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_audio_Music_play])(ctx, (frame[3].o));
	LINE_NUMBER(217);
	sp[0].o = frame[3].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_R_int])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"musicvol"_j))));
	((func_arc_audio_Music_setVolume_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Music_setVolume_float])(ctx, sp[0].o, ((jfloat(temp0)) / (jfloat(100.0f))));
	}
label_10:;
	{
	LINE_NUMBER(221);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	((func_mindustry_core_Renderer_showLanding_mindustry_world_blocks_LaunchAnimator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_showLanding_mindustry_world_blocks_LaunchAnimator])(ctx, sp[0].o, (frame[1].o));
	}
label_6:;
	{
	LINE_NUMBER(224);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(225);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_importRateCache;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(226);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_sector;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[1].o))->F_planet;
	((func_mindustry_game_SectorInfo_refreshImportRates_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_refreshImportRates_mindustry_type_Planet])(ctx, sp[0].o, sp[1].o);
	}
label_18:;
	{
	LINE_NUMBER(230);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	if (((jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_prebuildBase) == 0) goto label_16;
	}
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_toBePlaced;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(232);
	frame[3].f = (jfloat(2));
	LINE_NUMBER(233);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[4].f = (((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_enemyCoreBuildRadius) * (jfloat(1.5f)));
	LINE_NUMBER(236);
	frame[5].i = (jint(0));
	LINE_NUMBER(237);
	frame[6].f = (jfloat(0));
	LINE_NUMBER(239);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_buildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_26:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(241);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_delayLandingConfig) == 0) goto label_29;
	}
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_toBePlacedConfigs;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[8].o);
	jint temp0 = jint(1);
	sp[2].o = (jobject)((func_mindustry_gen_Building_config_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_gen_Building_config_R_java_lang_Object])(ctx, (frame[8].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_29:;
	LINE_NUMBER(244);
	goto label_26;
label_27:;
	{
	LINE_NUMBER(246);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_buildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_copy_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_31:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_32;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(247);
	if ((isInstance(ctx, (frame[8].o), &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild)) != 0) goto label_34;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) != 0) goto label_34;
	}
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((func_mindustry_gen_Building_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_gen_Building_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(250);
	if ((frame[9].o) == nullptr) goto label_34;
	}
	{
	LINE_NUMBER(251);
	frame[5].i = (jint(1));
	LINE_NUMBER(253);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_39;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pauseDisabled) != 0) goto label_39;
	}
	{
	LINE_NUMBER(254);
	((func_mindustry_gen_Building_pickedUp) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_gen_Building_pickedUp])(ctx, (frame[8].o));
	LINE_NUMBER(255);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_tile;
	((func_mindustry_world_Tile_remove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_remove])(ctx, sp[0].o);
	LINE_NUMBER(257);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_toBePlaced;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(258);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_dst_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_gen_Building_dst_arc_math_geom_Position_R_float])(ctx, (frame[8].o), (frame[9].o));
	frame[10].f = ((temp0 / (frame[3].f)) + (frame[2].f));
	LINE_NUMBER(259);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[10].f), (frame[6].f));
	frame[6].f = temp1;
	LINE_NUMBER(261);
	jfloat temp2 = frame[10].f;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_java_lang_Runnable_30(ctx);
		auto proxy = (mindustry_core_Control_invoke_java_lang_Runnable_30 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_java_lang_Runnable_30);
		proxy->F_field1 = (jref) (frame[8].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp2, sp[0].o);
	LINE_NUMBER(268);
	goto label_34;
	}
label_39:;
	{
	LINE_NUMBER(270);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_coreBuildBlock;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_y;
	jfloat temp2 = jfloat(0);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_block;
	((func_mindustry_entities_Effect_at_float_float_float_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(271);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_placeEffect;
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_x;
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_block;
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp3, temp4, (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size))));
	}
label_34:;
	LINE_NUMBER(275);
	goto label_31;
label_32:;
	{
	LINE_NUMBER(277);
	if ((frame[5].i) == 0) goto label_16;
	}
	{
	LINE_NUMBER(278);
	jfloat temp0 = (frame[6].f) + (jfloat(1));
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_java_lang_Runnable_31(ctx);
		auto proxy = (mindustry_core_Control_invoke_java_lang_Runnable_31 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_java_lang_Runnable_31);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(279);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_cores;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_50:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[0].o));
	LINE_NUMBER(280);
	jfloat temp0 = frame[2].f;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_java_lang_Runnable_32(ctx);
		auto proxy = (mindustry_core_Control_invoke_java_lang_Runnable_32 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_java_lang_Runnable_32);
		proxy->F_field1 = (frame[4].f);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(283);
	goto label_50;
	}
label_16:;
	LINE_NUMBER(287);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_Control_lambda$new$21_mindustry_world_blocks_storage_CoreBlock$CoreBuild_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$21", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(281);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_coreBuildShockwave;
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f));
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_lambda$new$20_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$20", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(263);
	((func_mindustry_core_Control_placeLandBuild_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Control_placeLandBuild_mindustry_gen_Building])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(265);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_toBePlaced;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(267);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Control_lambda$new$18_mindustry_game_EventType$GameOverEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$18", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(189);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i != 0) goto label_1;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_saves;
	sp[0].o = (jobject)((func_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_saves;
	sp[0].o = (jobject)((func_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot])(ctx, sp[0].o);
	((func_mindustry_game_Saves$SaveSlot_save) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_save])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(196);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Control_lambda$new$16_mindustry_game_EventType$SectorCaptureEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$16", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(178);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_java_lang_Runnable_33(ctx);
		auto proxy = (mindustry_core_Control_invoke_java_lang_Runnable_33 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_java_lang_Runnable_33);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(180);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[1].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[1].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_isLastSector) == 0) goto label_2;
	}
	{
	if (((jint)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[1].o)))->F_initialCapture) == 0) goto label_2;
	}
	{
	LINE_NUMBER(181);
	jfloat temp0 = jfloat(120.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_java_lang_Runnable_34(ctx);
		auto proxy = (mindustry_core_Control_invoke_java_lang_Runnable_34 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_java_lang_Runnable_34);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	}
label_2:;
	LINE_NUMBER(185);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_Control_lambda$new$17_mindustry_game_EventType$SectorCaptureEvent(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$17", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(182);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_campaignComplete;
	sp[1].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[1].o))->F_planet;
	((func_mindustry_ui_dialogs_CampaignCompleteDialog_show_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CampaignCompleteDialog_show_mindustry_type_Planet])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_lambda$new$13_mindustry_game_EventType$UnlockEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$13", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_game_EventType$UnlockEvent *) NULL_CHECK((frame[1].o)))->F_content;
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_showUnlock_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_showUnlock_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(163);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudfrag;
	sp[1].o = (jobject)((mindustry_game_EventType$UnlockEvent *) NULL_CHECK((frame[1].o)))->F_content;
	((func_mindustry_ui_fragments_HudFragment_showUnlock_mindustry_ctype_UnlockableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_showUnlock_mindustry_ctype_UnlockableContent])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(166);
	((func_mindustry_core_Control_checkAutoUnlocks) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Control_checkAutoUnlocks])(ctx, (frame[0].o));
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_game_EventType$UnlockEvent *) NULL_CHECK((frame[1].o)))->F_content;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_type_SectorPreset)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(169);
	clinit_mindustry_content_TechTree(ctx);
	sp[0].o = (jobject)SF_mindustry_content_TechTree_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_content_TechTree$TechNode, sp[0].o));
	LINE_NUMBER(170);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[3].o)))->F_content;
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_unlocked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_unlocked_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[3].o)))->F_objectives;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Boolf_4);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[3].o)))->F_objectives;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_core_Control_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_arc_func_Boolf_5);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(171);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudfrag;
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	sp[2].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[3].o)))->F_content;
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[2].o))->F_uiIcon;
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(40.0f);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"available"_j))));
	((func_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_float_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_float_java_lang_String])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	}
label_8:;
	LINE_NUMBER(173);
	goto label_6;
label_4:;
	LINE_NUMBER(175);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_core_Control_lambda$new$15_mindustry_game_Objectives$Objective_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$15", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(170);
	jint temp0 = (jint)((func_mindustry_game_Objectives$Objective_complete_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_game_Objectives$Objective, INDEX_mindustry_game_Objectives$Objective_complete_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
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

jbool SM_mindustry_core_Control_lambda$new$14_mindustry_game_EventType$UnlockEvent_mindustry_game_Objectives$Objective_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$14", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(170);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_game_Objectives$SectorComplete)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_game_Objectives$SectorComplete, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_game_Objectives$SectorComplete *) NULL_CHECK((frame[2].o)))->F_preset;
	sp[1].o = (jobject)((mindustry_game_EventType$UnlockEvent *) NULL_CHECK((frame[0].o)))->F_content;
	if (sp[0].o != sp[1].o) goto label_1;
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

void SM_mindustry_core_Control_lambda$new$11_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$11", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(149);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_java_lang_Runnable_35(ctx);
		auto proxy = (mindustry_core_Control_invoke_java_lang_Runnable_35 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_java_lang_Runnable_35);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_Control_lambda$new$12(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$12", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	{
	LINE_NUMBER(150);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pvp) == 0) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pauseDisabled) != 0) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_editor;
	jint temp0 = (jint)((func_mindustry_editor_MapEditorDialog_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_isShown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(152);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_host_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_host_int])(ctx, sp[0].o, (6567));
	LINE_NUMBER(153);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_admin = (jint(1));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(157);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(154);
	frame[0].o = sp[0].o;
	LINE_NUMBER(155);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@server.error"_j))), (frame[0].o));
	LINE_NUMBER(156);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_menu;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	LINE_NUMBER(159);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_Control_lambda$new$10_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$10", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(141);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((func_mindustry_gen_Player_add) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_add])(ctx, sp[0].o);
	LINE_NUMBER(143);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(144);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_admin = (jint(1));
	}
label_2:;
	LINE_NUMBER(146);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_Control_lambda$new$9_mindustry_game_EventType$GameOverEvent(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$9", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(133);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_stats;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_game_GameStats *) NULL_CHECK(sp[0].o))->F_wavesLasted = ((jint)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_wave);
	LINE_NUMBER(134);
	jfloat temp0 = jfloat(5.0f);
	jfloat temp1 = jfloat(6.0f);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	SM_mindustry_entities_Effect_shake_float_float_float_float(ctx, temp0, temp1, temp2, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((mindustry_game_EventType$GameOverEvent *) NULL_CHECK((frame[0].o)))->F_winner;
	SM_mindustry_gen_Call_gameOver_mindustry_game_Team(ctx, sp[0].o);
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_lambda$new$8_mindustry_game_EventType$WaveEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(124);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_map;
	jint temp0 = (jint)((func_mindustry_maps_Map_getHighScore_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Map_getHighScore_R_int])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (temp0 >= ((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave)) goto label_1;
	}
	{
	LINE_NUMBER(125);
	((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_hiscore = (jint(1));
	LINE_NUMBER(126);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_map;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	((func_mindustry_maps_Map_setHighScore_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Map_setHighScore_int])(ctx, sp[0].o, ((jint)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_wave));
	}
label_1:;
	{
	LINE_NUMBER(129);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_waveSpawn;
	jint temp0 = (jint)((func_arc_audio_Sound_play_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_play_R_int])(ctx, sp[0].o);
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_lambda$new$7_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(114);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((func_mindustry_gen_Player_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_reset])(ctx, sp[0].o);
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_toBePlaced;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(116);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_toBePlacedConfigs;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(117);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_indicators;
	((func_mindustry_game_AttackIndicators_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_AttackIndicators_clear])(ctx, sp[0].o);
	LINE_NUMBER(119);
	((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_hiscore = (jint(0));
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_saves;
	((func_mindustry_game_Saves_resetSave) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_resetSave])(ctx, sp[0].o);
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_lambda$new$6_mindustry_game_EventType$SaveLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$6", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_input;
	((func_mindustry_input_InputHandler_checkUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_checkUnit])(ctx, sp[0].o);
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_Control_lambda$new$5_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(98);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_x));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_y));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(99);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(100);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(101);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((func_mindustry_gen_Player_set_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_set_arc_math_geom_Position])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(102);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	}
label_4:;
	LINE_NUMBER(104);
	goto label_7;
label_1:;
	{
	LINE_NUMBER(105);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	LINE_NUMBER(107);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_Control_lambda$new$4_mindustry_game_EventType$PlayEvent(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(91);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_netServer;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_core_NetServer_assignTeam_mindustry_gen_Player_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_NetServer_assignTeam_mindustry_gen_Player_R_mindustry_game_Team])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_gen_Player_team_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_mindustry_game_Team])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(92);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((func_mindustry_gen_Player_add) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_add])(ctx, sp[0].o);
	LINE_NUMBER(94);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_playing;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_Control_lambda$new$3_mindustry_game_EventType$StateChangeEvent(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_game_EventType$StateChangeEvent *) NULL_CHECK((frame[0].o)))->F_from;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_playing;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$StateChangeEvent *) NULL_CHECK((frame[0].o)))->F_to;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_menu;
	if (sp[0].o == sp[1].o) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_game_EventType$StateChangeEvent *) NULL_CHECK((frame[0].o)))->F_from;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_menu;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$StateChangeEvent *) NULL_CHECK((frame[0].o)))->F_to;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_menu;
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(86);
	jfloat temp0 = jfloat(5.0f);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_java_lang_Runnable_36(ctx);
		auto proxy = (mindustry_core_Control_invoke_java_lang_Runnable_36 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_java_lang_Runnable_36);
		proxy->F_field0 = (jref) sp[0].o;
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(ctx, temp0, sp[0].o);
	}
label_3:;
	LINE_NUMBER(88);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Control_lambda$new$1_mindustry_game_EventType$ClientLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(76);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	jint temp0 = (jint)((func_mindustry_mod_Mods_skipModLoading_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_skipModLoading_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[0].o = (jobject)((func_mindustry_mod_Mods_list_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_list_R_arc_struct_Seq])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(77);
	jfloat temp0 = jfloat(4.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Control_invoke_java_lang_Runnable_37(ctx);
		auto proxy = (mindustry_core_Control_invoke_java_lang_Runnable_37 *) gcAlloc(ctx, &class_mindustry_core_Control_invoke_java_lang_Runnable_37);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(ctx, temp0, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(81);
	((func_mindustry_core_Control_checkAutoUnlocks) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Control_checkAutoUnlocks])(ctx, (frame[0].o));
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_Control_lambda$new$2(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control(ctx);
	{
	LINE_NUMBER(78);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@mods.initfailed"_j))));
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Control_lambda$new$0_mindustry_game_EventType$BuildDamageEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control:lambda$new$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((mindustry_game_EventType$BuildDamageEvent *) NULL_CHECK((frame[1].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK((frame[0].o)))->F_indicators;
	sp[1].o = (jobject)((mindustry_game_EventType$BuildDamageEvent *) NULL_CHECK((frame[1].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_game_EventType$BuildDamageEvent *) NULL_CHECK((frame[1].o)))->F_build;
	jint temp1 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, sp[1].o);
	((func_mindustry_game_AttackIndicators_add_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_AttackIndicators_add_int_int])(ctx, sp[0].o, temp0, temp1);
	}
label_1:;
	LINE_NUMBER(72);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_core_Control;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lastDamagedCore
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_core_Control[] {
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
	(void *) M_mindustry_core_Control_init,
	(void *) M_arc_ApplicationListener_resize_int_int,
	(void *) M_mindustry_core_Control_update,
	(void *) M_mindustry_core_Control_pause,
	(void *) M_mindustry_core_Control_resume,
	(void *) M_mindustry_core_Control_dispose,
	(void *) M_arc_ApplicationListener_exit,
	(void *) M_arc_ApplicationListener_fileDropped_arc_files_Fi,
	(void *) M_mindustry_core_Control_loadAsync,
	(void *) M_mindustry_core_Control_loadSync,
	(void *) M_arc_assets_Loadable_getName_R_java_lang_String,
	(void *) M_arc_assets_Loadable_getDependencies_R_arc_struct_Seq,
	(void *) M_mindustry_core_Control_forcePlaceAll,
	(void *) M_mindustry_core_Control_configurePlaced,
	(void *) M_mindustry_core_Control_placeLandBuild_mindustry_gen_Building,
	(void *) M_mindustry_core_Control_checkAutoUnlocks,
	(void *) M_mindustry_core_Control_createPlayer,
	(void *) M_mindustry_core_Control_setInput_mindustry_input_InputHandler,
	(void *) M_mindustry_core_Control_playMap_mindustry_maps_Map_mindustry_game_Rules,
	(void *) M_mindustry_core_Control_playMap_mindustry_maps_Map_mindustry_game_Rules_boolean,
	(void *) M_mindustry_core_Control_playSector_mindustry_type_Sector,
	(void *) M_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector,
	(void *) M_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader,
	(void *) M_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader,
	(void *) M_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader_mindustry_world_WorldParams_java_lang_Runnable,
	(void *) M_mindustry_core_Control_isHighScore_R_boolean,
	(void *) M_mindustry_core_Control_lambda$playSector$0_mindustry_type_Sector_mindustry_net_WorldReloader_mindustry_type_Sector,
	(void *) M_mindustry_core_Control_lambda$createPlayer$0_mindustry_game_EventType$ClientLoadEvent,
	(void *) M_mindustry_core_Control_lambda$new$23_mindustry_game_EventType$HostEvent,
	(void *) M_mindustry_core_Control_lambda$new$22_mindustry_game_EventType$SaveWriteEvent,
	(void *) M_mindustry_core_Control_lambda$new$19,
	(void *) M_mindustry_core_Control_lambda$new$20_mindustry_gen_Building,
	(void *) M_mindustry_core_Control_lambda$new$18_mindustry_game_EventType$GameOverEvent,
	(void *) M_mindustry_core_Control_lambda$new$16_mindustry_game_EventType$SectorCaptureEvent,
	(void *) M_mindustry_core_Control_lambda$new$13_mindustry_game_EventType$UnlockEvent,
	(void *) M_mindustry_core_Control_lambda$new$8_mindustry_game_EventType$WaveEvent,
	(void *) M_mindustry_core_Control_lambda$new$7_mindustry_game_EventType$ResetEvent,
	(void *) M_mindustry_core_Control_lambda$new$6_mindustry_game_EventType$SaveLoadEvent,
	(void *) M_mindustry_core_Control_lambda$new$1_mindustry_game_EventType$ClientLoadEvent,
	(void *) M_mindustry_core_Control_lambda$new$0_mindustry_game_EventType$BuildDamageEvent,
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
	{ "init", "()V" },
	{ "resize", "(II)V" },
	{ "update", "()V" },
	{ "pause", "()V" },
	{ "resume", "()V" },
	{ "dispose", "()V" },
	{ "exit", "()V" },
	{ "fileDropped", "(Larc/files/Fi;)V" },
	{ "loadAsync", "()V" },
	{ "loadSync", "()V" },
	{ "getName", "()Ljava/lang/String;" },
	{ "getDependencies", "()Larc/struct/Seq;" },
	{ "forcePlaceAll", "()V" },
	{ "configurePlaced", "()V" },
	{ "placeLandBuild", "(Lmindustry/gen/Building;)V" },
	{ "checkAutoUnlocks", "()V" },
	{ "createPlayer", "()V" },
	{ "setInput", "(Lmindustry/input/InputHandler;)V" },
	{ "playMap", "(Lmindustry/maps/Map;Lmindustry/game/Rules;)V" },
	{ "playMap", "(Lmindustry/maps/Map;Lmindustry/game/Rules;Z)V" },
	{ "playSector", "(Lmindustry/type/Sector;)V" },
	{ "playSector", "(Lmindustry/type/Sector;Lmindustry/type/Sector;)V" },
	{ "playSector", "(Lmindustry/type/Sector;Lmindustry/type/Sector;Lmindustry/net/WorldReloader;)V" },
	{ "playNewSector", "(Lmindustry/type/Sector;Lmindustry/type/Sector;Lmindustry/net/WorldReloader;)V" },
	{ "playNewSector", "(Lmindustry/type/Sector;Lmindustry/type/Sector;Lmindustry/net/WorldReloader;Lmindustry/world/WorldParams;Ljava/lang/Runnable;)V" },
	{ "isHighScore", "()Z" },
	{ "lambda$playSector$0", "(Lmindustry/type/Sector;Lmindustry/net/WorldReloader;Lmindustry/type/Sector;)V" },
	{ "lambda$createPlayer$0", "(Lmindustry/game/EventType$ClientLoadEvent;)V" },
	{ "lambda$new$23", "(Lmindustry/game/EventType$HostEvent;)V" },
	{ "lambda$new$22", "(Lmindustry/game/EventType$SaveWriteEvent;)V" },
	{ "lambda$new$19", "()V" },
	{ "lambda$new$20", "(Lmindustry/gen/Building;)V" },
	{ "lambda$new$18", "(Lmindustry/game/EventType$GameOverEvent;)V" },
	{ "lambda$new$16", "(Lmindustry/game/EventType$SectorCaptureEvent;)V" },
	{ "lambda$new$13", "(Lmindustry/game/EventType$UnlockEvent;)V" },
	{ "lambda$new$8", "(Lmindustry/game/EventType$WaveEvent;)V" },
	{ "lambda$new$7", "(Lmindustry/game/EventType$ResetEvent;)V" },
	{ "lambda$new$6", "(Lmindustry/game/EventType$SaveLoadEvent;)V" },
	{ "lambda$new$1", "(Lmindustry/game/EventType$ClientLoadEvent;)V" },
	{ "lambda$new$0", "(Lmindustry/game/EventType$BuildDamageEvent;)V" },
};

static jclass interfaces[] { &class_arc_ApplicationListener, &class_arc_assets_Loadable, };

static FieldMetadata fields[] {
	{ "saves", &class_mindustry_game_Saves, offsetof(mindustry_core_Control, F_saves), "Lmindustry/game/Saves;", 1 },
	{ "sound", &class_mindustry_audio_SoundControl, offsetof(mindustry_core_Control, F_sound), "Lmindustry/audio/SoundControl;", 1 },
	{ "input", &class_mindustry_input_InputHandler, offsetof(mindustry_core_Control, F_input), "Lmindustry/input/InputHandler;", 1 },
	{ "indicators", &class_mindustry_game_AttackIndicators, offsetof(mindustry_core_Control, F_indicators), "Lmindustry/game/AttackIndicators;", 1 },
	{ "lastDamagedCore", &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, offsetof(mindustry_core_Control, F_lastDamagedCore), "Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "timer", &class_arc_util_Interval, offsetof(mindustry_core_Control, F_timer), "Larc/util/Interval;", 2 },
	{ "hiscore", &class_boolean, offsetof(mindustry_core_Control, F_hiscore), "Z", 2 },
	{ "wasPaused", &class_boolean, offsetof(mindustry_core_Control, F_wasPaused), "Z", 2 },
	{ "backgroundPaused", &class_boolean, offsetof(mindustry_core_Control, F_backgroundPaused), "Z", 2 },
	{ "toBePlaced", &class_arc_struct_Seq, offsetof(mindustry_core_Control, F_toBePlaced), "Larc/struct/Seq;", 2 },
	{ "toBePlacedConfigs", &class_arc_struct_Seq, offsetof(mindustry_core_Control, F_toBePlacedConfigs), "Larc/struct/Seq;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_core_Control, 0, "()V", 1 },
	{ "forcePlaceAll", (intptr_t) M_mindustry_core_Control_forcePlaceAll, VTABLE_mindustry_core_Control_forcePlaceAll, "()V", 2 },
	{ "configurePlaced", (intptr_t) M_mindustry_core_Control_configurePlaced, VTABLE_mindustry_core_Control_configurePlaced, "()V", 2 },
	{ "placeLandBuild", (intptr_t) M_mindustry_core_Control_placeLandBuild_mindustry_gen_Building, VTABLE_mindustry_core_Control_placeLandBuild_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 2 },
	{ "loadAsync", (intptr_t) M_mindustry_core_Control_loadAsync, VTABLE_mindustry_core_Control_loadAsync, "()V", 1 },
	{ "loadSync", (intptr_t) M_mindustry_core_Control_loadSync, VTABLE_mindustry_core_Control_loadSync, "()V", 1 },
	{ "checkAutoUnlocks", (intptr_t) M_mindustry_core_Control_checkAutoUnlocks, VTABLE_mindustry_core_Control_checkAutoUnlocks, "()V", 1 },
	{ "createPlayer", (intptr_t) M_mindustry_core_Control_createPlayer, VTABLE_mindustry_core_Control_createPlayer, "()V", 0 },
	{ "setInput", (intptr_t) M_mindustry_core_Control_setInput_mindustry_input_InputHandler, VTABLE_mindustry_core_Control_setInput_mindustry_input_InputHandler, "(Lmindustry/input/InputHandler;)V", 1 },
	{ "playMap", (intptr_t) M_mindustry_core_Control_playMap_mindustry_maps_Map_mindustry_game_Rules, VTABLE_mindustry_core_Control_playMap_mindustry_maps_Map_mindustry_game_Rules, "(Lmindustry/maps/Map;Lmindustry/game/Rules;)V", 1 },
	{ "playMap", (intptr_t) M_mindustry_core_Control_playMap_mindustry_maps_Map_mindustry_game_Rules_boolean, VTABLE_mindustry_core_Control_playMap_mindustry_maps_Map_mindustry_game_Rules_boolean, "(Lmindustry/maps/Map;Lmindustry/game/Rules;Z)V", 1 },
	{ "playSector", (intptr_t) M_mindustry_core_Control_playSector_mindustry_type_Sector, VTABLE_mindustry_core_Control_playSector_mindustry_type_Sector, "(Lmindustry/type/Sector;)V", 1 },
	{ "playSector", (intptr_t) M_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector, VTABLE_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector, "(Lmindustry/type/Sector;Lmindustry/type/Sector;)V", 1 },
	{ "playSector", (intptr_t) M_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader, VTABLE_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader, "(Lmindustry/type/Sector;Lmindustry/type/Sector;Lmindustry/net/WorldReloader;)V", 0 },
	{ "playNewSector", (intptr_t) M_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader, VTABLE_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader, "(Lmindustry/type/Sector;Lmindustry/type/Sector;Lmindustry/net/WorldReloader;)V", 1 },
	{ "playNewSector", (intptr_t) M_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader_mindustry_world_WorldParams_java_lang_Runnable, VTABLE_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader_mindustry_world_WorldParams_java_lang_Runnable, "(Lmindustry/type/Sector;Lmindustry/type/Sector;Lmindustry/net/WorldReloader;Lmindustry/world/WorldParams;Ljava/lang/Runnable;)V", 1 },
	{ "isHighScore", (intptr_t) M_mindustry_core_Control_isHighScore_R_boolean, VTABLE_mindustry_core_Control_isHighScore_R_boolean, "()Z", 1 },
	{ "dispose", (intptr_t) M_mindustry_core_Control_dispose, VTABLE_mindustry_core_Control_dispose, "()V", 1 },
	{ "pause", (intptr_t) M_mindustry_core_Control_pause, VTABLE_mindustry_core_Control_pause, "()V", 1 },
	{ "resume", (intptr_t) M_mindustry_core_Control_resume, VTABLE_mindustry_core_Control_resume, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_core_Control_init, VTABLE_mindustry_core_Control_init, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_core_Control_update, VTABLE_mindustry_core_Control_update, "()V", 1 },
	{ "lambda$update$0", (intptr_t) SM_mindustry_core_Control_lambda$update$0_mindustry_type_Item_int, 0, "(Lmindustry/type/Item;I)V", 4106 },
	{ "lambda$init$0", (intptr_t) SM_mindustry_core_Control_lambda$init$0, 0, "()V", 4106 },
	{ "lambda$init$1", (intptr_t) SM_mindustry_core_Control_lambda$init$1, 0, "()V", 4106 },
	{ "lambda$init$4", (intptr_t) SM_mindustry_core_Control_lambda$init$4_mindustry_ui_dialogs_BaseDialog, 0, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4106 },
	{ "lambda$init$3", (intptr_t) SM_mindustry_core_Control_lambda$init$3_Array1_float_java_lang_Runnable_R_java_lang_CharSequence, 0, "([FLjava/lang/Runnable;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$init$2", (intptr_t) SM_mindustry_core_Control_lambda$init$2_mindustry_ui_dialogs_BaseDialog, 0, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4106 },
	{ "lambda$playSector$0", (intptr_t) M_mindustry_core_Control_lambda$playSector$0_mindustry_type_Sector_mindustry_net_WorldReloader_mindustry_type_Sector, VTABLE_mindustry_core_Control_lambda$playSector$0_mindustry_type_Sector_mindustry_net_WorldReloader_mindustry_type_Sector, "(Lmindustry/type/Sector;Lmindustry/net/WorldReloader;Lmindustry/type/Sector;)V", 4098 },
	{ "lambda$playSector$5", (intptr_t) SM_mindustry_core_Control_lambda$playSector$5, 0, "()V", 4106 },
	{ "lambda$playSector$4", (intptr_t) SM_mindustry_core_Control_lambda$playSector$4, 0, "()V", 4106 },
	{ "lambda$playSector$1", (intptr_t) SM_mindustry_core_Control_lambda$playSector$1_Array1_mindustry_gen_Building_Array1_mindustry_gen_Building_Array1_mindustry_game_Teams$BlockPlan, 0, "([Lmindustry/gen/Building;[Lmindustry/gen/Building;[Lmindustry/game/Teams$BlockPlan;)V", 4106 },
	{ "lambda$playSector$3", (intptr_t) SM_mindustry_core_Control_lambda$playSector$3_mindustry_gen_Building_R_mindustry_gen_Building, 0, "(Lmindustry/gen/Building;)Lmindustry/gen/Building;", 4106 },
	{ "lambda$playSector$2", (intptr_t) SM_mindustry_core_Control_lambda$playSector$2_mindustry_gen_Building_R_mindustry_gen_Building, 0, "(Lmindustry/gen/Building;)Lmindustry/gen/Building;", 4106 },
	{ "lambda$playMap$0", (intptr_t) SM_mindustry_core_Control_lambda$playMap$0_mindustry_maps_Map_mindustry_game_Rules_boolean, 0, "(Lmindustry/maps/Map;Lmindustry/game/Rules;Z)V", 4106 },
	{ "lambda$createPlayer$0", (intptr_t) M_mindustry_core_Control_lambda$createPlayer$0_mindustry_game_EventType$ClientLoadEvent, VTABLE_mindustry_core_Control_lambda$createPlayer$0_mindustry_game_EventType$ClientLoadEvent, "(Lmindustry/game/EventType$ClientLoadEvent;)V", 4098 },
	{ "lambda$checkAutoUnlocks$0", (intptr_t) SM_mindustry_core_Control_lambda$checkAutoUnlocks$0_mindustry_game_Objectives$Objective_R_boolean, 0, "(Lmindustry/game/Objectives$Objective;)Z", 4106 },
	{ "lambda$placeLandBuild$0", (intptr_t) SM_mindustry_core_Control_lambda$placeLandBuild$0_mindustry_gen_Building_R_mindustry_gen_Building, 0, "(Lmindustry/gen/Building;)Lmindustry/gen/Building;", 4106 },
	{ "lambda$new$24", (intptr_t) SM_mindustry_core_Control_lambda$new$24_mindustry_game_EventType$HostEvent, 0, "(Lmindustry/game/EventType$HostEvent;)V", 4106 },
	{ "lambda$new$23", (intptr_t) M_mindustry_core_Control_lambda$new$23_mindustry_game_EventType$HostEvent, VTABLE_mindustry_core_Control_lambda$new$23_mindustry_game_EventType$HostEvent, "(Lmindustry/game/EventType$HostEvent;)V", 4098 },
	{ "lambda$new$22", (intptr_t) M_mindustry_core_Control_lambda$new$22_mindustry_game_EventType$SaveWriteEvent, VTABLE_mindustry_core_Control_lambda$new$22_mindustry_game_EventType$SaveWriteEvent, "(Lmindustry/game/EventType$SaveWriteEvent;)V", 4098 },
	{ "lambda$new$19", (intptr_t) M_mindustry_core_Control_lambda$new$19, VTABLE_mindustry_core_Control_lambda$new$19, "()V", 4098 },
	{ "lambda$new$21", (intptr_t) SM_mindustry_core_Control_lambda$new$21_mindustry_world_blocks_storage_CoreBlock$CoreBuild_float, 0, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;F)V", 4106 },
	{ "lambda$new$20", (intptr_t) M_mindustry_core_Control_lambda$new$20_mindustry_gen_Building, VTABLE_mindustry_core_Control_lambda$new$20_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 4098 },
	{ "lambda$new$18", (intptr_t) M_mindustry_core_Control_lambda$new$18_mindustry_game_EventType$GameOverEvent, VTABLE_mindustry_core_Control_lambda$new$18_mindustry_game_EventType$GameOverEvent, "(Lmindustry/game/EventType$GameOverEvent;)V", 4098 },
	{ "lambda$new$16", (intptr_t) M_mindustry_core_Control_lambda$new$16_mindustry_game_EventType$SectorCaptureEvent, VTABLE_mindustry_core_Control_lambda$new$16_mindustry_game_EventType$SectorCaptureEvent, "(Lmindustry/game/EventType$SectorCaptureEvent;)V", 4098 },
	{ "lambda$new$17", (intptr_t) SM_mindustry_core_Control_lambda$new$17_mindustry_game_EventType$SectorCaptureEvent, 0, "(Lmindustry/game/EventType$SectorCaptureEvent;)V", 4106 },
	{ "lambda$new$13", (intptr_t) M_mindustry_core_Control_lambda$new$13_mindustry_game_EventType$UnlockEvent, VTABLE_mindustry_core_Control_lambda$new$13_mindustry_game_EventType$UnlockEvent, "(Lmindustry/game/EventType$UnlockEvent;)V", 4098 },
	{ "lambda$new$15", (intptr_t) SM_mindustry_core_Control_lambda$new$15_mindustry_game_Objectives$Objective_R_boolean, 0, "(Lmindustry/game/Objectives$Objective;)Z", 4106 },
	{ "lambda$new$14", (intptr_t) SM_mindustry_core_Control_lambda$new$14_mindustry_game_EventType$UnlockEvent_mindustry_game_Objectives$Objective_R_boolean, 0, "(Lmindustry/game/EventType$UnlockEvent;Lmindustry/game/Objectives$Objective;)Z", 4106 },
	{ "lambda$new$11", (intptr_t) SM_mindustry_core_Control_lambda$new$11_mindustry_game_EventType$WorldLoadEvent, 0, "(Lmindustry/game/EventType$WorldLoadEvent;)V", 4106 },
	{ "lambda$new$12", (intptr_t) SM_mindustry_core_Control_lambda$new$12, 0, "()V", 4106 },
	{ "lambda$new$10", (intptr_t) SM_mindustry_core_Control_lambda$new$10_mindustry_game_EventType$WorldLoadEvent, 0, "(Lmindustry/game/EventType$WorldLoadEvent;)V", 4106 },
	{ "lambda$new$9", (intptr_t) SM_mindustry_core_Control_lambda$new$9_mindustry_game_EventType$GameOverEvent, 0, "(Lmindustry/game/EventType$GameOverEvent;)V", 4106 },
	{ "lambda$new$8", (intptr_t) M_mindustry_core_Control_lambda$new$8_mindustry_game_EventType$WaveEvent, VTABLE_mindustry_core_Control_lambda$new$8_mindustry_game_EventType$WaveEvent, "(Lmindustry/game/EventType$WaveEvent;)V", 4098 },
	{ "lambda$new$7", (intptr_t) M_mindustry_core_Control_lambda$new$7_mindustry_game_EventType$ResetEvent, VTABLE_mindustry_core_Control_lambda$new$7_mindustry_game_EventType$ResetEvent, "(Lmindustry/game/EventType$ResetEvent;)V", 4098 },
	{ "lambda$new$6", (intptr_t) M_mindustry_core_Control_lambda$new$6_mindustry_game_EventType$SaveLoadEvent, VTABLE_mindustry_core_Control_lambda$new$6_mindustry_game_EventType$SaveLoadEvent, "(Lmindustry/game/EventType$SaveLoadEvent;)V", 4098 },
	{ "lambda$new$5", (intptr_t) SM_mindustry_core_Control_lambda$new$5_mindustry_game_EventType$WorldLoadEvent, 0, "(Lmindustry/game/EventType$WorldLoadEvent;)V", 4106 },
	{ "lambda$new$4", (intptr_t) SM_mindustry_core_Control_lambda$new$4_mindustry_game_EventType$PlayEvent, 0, "(Lmindustry/game/EventType$PlayEvent;)V", 4106 },
	{ "lambda$new$3", (intptr_t) SM_mindustry_core_Control_lambda$new$3_mindustry_game_EventType$StateChangeEvent, 0, "(Lmindustry/game/EventType$StateChangeEvent;)V", 4106 },
	{ "lambda$new$1", (intptr_t) M_mindustry_core_Control_lambda$new$1_mindustry_game_EventType$ClientLoadEvent, VTABLE_mindustry_core_Control_lambda$new$1_mindustry_game_EventType$ClientLoadEvent, "(Lmindustry/game/EventType$ClientLoadEvent;)V", 4098 },
	{ "lambda$new$2", (intptr_t) SM_mindustry_core_Control_lambda$new$2, 0, "()V", 4106 },
	{ "lambda$new$0", (intptr_t) M_mindustry_core_Control_lambda$new$0_mindustry_game_EventType$BuildDamageEvent, VTABLE_mindustry_core_Control_lambda$new$0_mindustry_game_EventType$BuildDamageEvent, "(Lmindustry/game/EventType$BuildDamageEvent;)V", 4098 },
};

Class class_mindustry_core_Control{
		.nativeName = (intptr_t) "mindustry/core/Control",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_core_Control),
		.classVtable = (intptr_t) vtable_mindustry_core_Control,
		.staticInitializer = (intptr_t) clinit_mindustry_core_Control,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_core_Control,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 63,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 51,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_core_Control = registerClass(&class_mindustry_core_Control);

}
