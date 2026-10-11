#include "mindustry/core/UI.h"
#include "arc/assets/AssetDescriptor.h"
#include "arc/func/Prov.h"
#include "java/lang/StringBuilder.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/Input.h"
#include "mindustry/core/UI_invoke_arc_func_Func_1.h"
#include "arc/func/Boolp.h"
#include "mindustry/core/UI_11.h"
#include "arc/graphics/Color.h"
#include "mindustry/ui/dialogs/ColorPicker.h"
#include "mindustry/core/UI_10.h"
#include "java/lang/Runnable.h"
#include "arc/input/KeyCode.h"
#include "mindustry/ui/fragments/FadeInFragment.h"
#include "arc/scene/actions/SequenceAction.h"
#include "mindustry/mod/Mods.h"
#include "mindustry/ui/dialogs/CampaignRulesDialog.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/scene/actions/DelayAction.h"
#include "arc/Settings.h"
#include "mindustry/ui/fragments/PerformanceFragment.h"
#include "mindustry/ui/dialogs/LanguageDialog.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/Colors.h"
#include "arc/Core.h"
#include "mindustry/gen/Sounds.h"
#include "arc/util/Log.h"
#include "arc/math/Interp.h"
#include "arc/Graphics_Cursor.h"
#include "arc/util/Time.h"
#include "arc/math/Interp_PowIn.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "arc/util/Nullable.h"
#include "mindustry/ui/dialogs/PausedDialog.h"
#include "mindustry/ui/dialogs/AdminsDialog.h"
#include "arc/scene/Scene.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/ui/dialogs/ContentInfoDialog.h"
#include "mindustry/ui/dialogs/BansDialog.h"
#include "mindustry/ui/dialogs/JoinDialog.h"
#include "mindustry/ui/dialogs/GameOverDialog.h"
#include "mindustry/ui/dialogs/ResearchDialog.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/ui/fragments/MenuFragment.h"
#include "mindustry/ui/dialogs/PlanetDialog.h"
#include "mindustry/ui/dialogs/CustomGameDialog.h"
#include "mindustry/ui/dialogs/KeybindDialog.h"
#include "mindustry/game/EventType_ResetEvent.h"
#include "arc/scene/actions/RunnableAction.h"
#include "mindustry/ui/fragments/ConsoleFragment.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/core/UI_invoke_arc_func_Cons_10.h"
#include "mindustry/core/UI_invoke_arc_func_Cons_12.h"
#include "mindustry/ui/dialogs/LoadDialog.h"
#include "mindustry/core/UI_invoke_arc_func_Cons_11.h"
#include "mindustry/ui/dialogs/DatabaseDialog.h"
#include "mindustry/core/UI_invoke_arc_func_Cons_13.h"
#include "mindustry/ui/fragments/LoadingFragment.h"
#include "mindustry/ui/dialogs/TraceDialog.h"
#include "arc/func/Cons.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "mindustry/ui/fragments/HintsFragment.h"
#include "mindustry/core/Control.h"
#include "arc/scene/ui/layout/Scl.h"
#include "mindustry/ui/fragments/ChatFragment.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ui/fragments/PlayerListFragment.h"
#include "arc/assets/Loadable.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/ui/dialogs/EditorMapsDialog.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/core/UI_invoke_arc_func_Boolp_5.h"
#include "mindustry/ui/Fonts.h"
#include "mindustry/core/UI_invoke_arc_func_Boolp_6.h"
#include "mindustry/core/UI_invoke_arc_func_Boolp_4.h"
#include "mindustry/game/EventType_Trigger.h"
#include "arc/scene/actions/AlphaAction.h"
#include "arc/audio/Sound.h"
#include "mindustry/ui/dialogs/CampaignCompleteDialog.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "arc/scene/event/EventListener.h"
#include "arc/graphics/g2d/PixmapPacker.h"
#include "mindustry/Vars.h"
#include "arc/struct/ObjectIntMap.h"
#include "mindustry/ui/dialogs/ModsDialog.h"
#include "mindustry/core/UI_invoke_arc_func_Boolp_7.h"
#include "mindustry/core/UI_invoke_arc_func_Prov_3.h"
#include "arc/scene/ui/TextField.h"
#include "mindustry/core/UI_invoke_arc_func_Prov_5.h"
#include "arc/Events.h"
#include "mindustry/core/UI_invoke_arc_func_Prov_4.h"
#include "arc/scene/ui/Tooltip_Tooltips.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog.h"
#include "mindustry/ui/dialogs/AboutDialog.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/scene/event/Touchable.h"
#include "mindustry/core/UI_invoke_java_lang_Runnable_35.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/ui/dialogs/HostDialog.h"
#include "mindustry/core/UI_invoke_java_lang_Runnable_33.h"
#include "mindustry/ui/fragments/HudFragment.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/core/UI_invoke_java_lang_Runnable_34.h"
#include "mindustry/core/UI_invoke_java_lang_Runnable_31.h"
#include "mindustry/ui/dialogs/EffectsDialog.h"
#include "mindustry/core/UI_invoke_java_lang_Runnable_32.h"
#include "java/lang/Throwable.h"
#include "mindustry/core/UI_invoke_java_lang_Runnable_30.h"
#include "mindustry/ui/dialogs/DiscordDialog.h"
#include "arc/func/Func.h"
#include "mindustry/gen/Iconc.h"
#include "arc/scene/ui/Tooltip.h"
#include "java/lang/reflect/Field.h"
#include "arc/input/InputProcessor.h"
#include "mindustry/core/PerfCounter.h"
#include "arc/scene/ui/Label.h"
#include "arc/assets/AssetManager.h"
#include "mindustry/core/UI_invoke_java_lang_Runnable_28.h"
#include "mindustry/core/UI_invoke_java_lang_Runnable_29.h"
#include "mindustry/core/UI_invoke_java_lang_Runnable_26.h"
#include "mindustry/core/UI_invoke_java_lang_Runnable_27.h"
#include "mindustry/core/UI_invoke_java_lang_Runnable_24.h"
#include "mindustry/core/UI_invoke_java_lang_Runnable_25.h"
#include "mindustry/core/UI_invoke_java_lang_Runnable_22.h"
#include "mindustry/core/UI_invoke_java_lang_Runnable_23.h"
#include "mindustry/core/UI_invoke_java_lang_Runnable_20.h"
#include "mindustry/core/UI_invoke_java_lang_Runnable_21.h"
#include "mindustry/logic/LogicDialog.h"
#include "mindustry/core/UI_1.h"
#include "mindustry/core/UI_2.h"
#include "mindustry/editor/MapEditorDialog.h"
#include "mindustry/core/UI_3.h"
#include "arc/util/Timer_Task.h"
#include "arc/struct/IntMap.h"
#include "arc/scene/Action.h"
#include "arc/Application.h"
#include "mindustry/core/UI_invoke_java_lang_Runnable_19.h"
#include "java/lang/String.h"
#include "mindustry/core/UI_invoke_java_lang_Runnable_18.h"
#include "mindustry/core/UI_4.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/core/UI_5.h"
#include "mindustry/core/UI_6.h"
#include "mindustry/core/UI_7.h"
#include "mindustry/core/UI_8.h"
#include "mindustry/core/UI_9.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/gen/Icon.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/core/UI_invoke_arc_func_Cons_7.h"
#include "java/lang/Enum.h"
#include "mindustry/core/UI.h"
#include "arc/scene/actions/Actions.h"
#include "java/lang/CharSequence.h"
#include "arc/Input_TextInput.h"
#include "arc/scene/style/Style.h"
#include "arc/util/Strings.h"
#include "mindustry/graphics/Pal.h"
#include "arc/scene/Element.h"
#include "arc/ApplicationListener.h"
#include "mindustry/core/UI_invoke_arc_func_Cons_9.h"
#include "mindustry/core/UI_invoke_arc_func_Cons_8.h"
#include "mindustry/ui/dialogs/SchematicsDialog.h"
#include "mindustry/ui/dialogs/FullTextDialog.h"
#include "mindustry/game/EventType_ResizeEvent.h"
#include "java/lang/Class.h"
#include "mindustry/ui/fragments/MinimapFragment.h"
#include "java/util/Objects.h"
#include "mindustry/core/GameState.h"
#include "arc/scene/actions/RemoveActorAction.h"
#include "mindustry/gen/WorldLabel.h"

extern "C" {

jobject SF_mindustry_core_UI_buffer;
jobject SF_mindustry_core_UI_billions;
jobject SF_mindustry_core_UI_millions;
jobject SF_mindustry_core_UI_thousands;
jobject SF_mindustry_core_UI_packer;

void mark_mindustry_core_UI(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_core_UI_buffer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_UI_buffer)->clazz)->markFunction)((jobject) SF_mindustry_core_UI_buffer, mark, depth + 1);
		if (SF_mindustry_core_UI_billions)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_UI_billions)->clazz)->markFunction)((jobject) SF_mindustry_core_UI_billions, mark, depth + 1);
		if (SF_mindustry_core_UI_millions)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_UI_millions)->clazz)->markFunction)((jobject) SF_mindustry_core_UI_millions, mark, depth + 1);
		if (SF_mindustry_core_UI_thousands)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_UI_thousands)->clazz)->markFunction)((jobject) SF_mindustry_core_UI_thousands, mark, depth + 1);
		if (SF_mindustry_core_UI_packer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_UI_packer)->clazz)->markFunction)((jobject) SF_mindustry_core_UI_packer, mark, depth + 1);
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
	auto self = (mindustry_core_UI *) object;
	if (self->F_menufrag)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_menufrag)->clazz)->markFunction)((jobject) self->F_menufrag, mark, depth + 1);
	if (self->F_hudfrag)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hudfrag)->clazz)->markFunction)((jobject) self->F_hudfrag, mark, depth + 1);
	if (self->F_chatfrag)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chatfrag)->clazz)->markFunction)((jobject) self->F_chatfrag, mark, depth + 1);
	if (self->F_consolefrag)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_consolefrag)->clazz)->markFunction)((jobject) self->F_consolefrag, mark, depth + 1);
	if (self->F_minimapfrag)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minimapfrag)->clazz)->markFunction)((jobject) self->F_minimapfrag, mark, depth + 1);
	if (self->F_listfrag)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listfrag)->clazz)->markFunction)((jobject) self->F_listfrag, mark, depth + 1);
	if (self->F_loadfrag)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loadfrag)->clazz)->markFunction)((jobject) self->F_loadfrag, mark, depth + 1);
	if (self->F_hints)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hints)->clazz)->markFunction)((jobject) self->F_hints, mark, depth + 1);
	if (self->F_perffrag)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_perffrag)->clazz)->markFunction)((jobject) self->F_perffrag, mark, depth + 1);
	if (self->F_menuGroup)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_menuGroup)->clazz)->markFunction)((jobject) self->F_menuGroup, mark, depth + 1);
	if (self->F_hudGroup)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hudGroup)->clazz)->markFunction)((jobject) self->F_hudGroup, mark, depth + 1);
	if (self->F_about)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_about)->clazz)->markFunction)((jobject) self->F_about, mark, depth + 1);
	if (self->F_restart)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_restart)->clazz)->markFunction)((jobject) self->F_restart, mark, depth + 1);
	if (self->F_custom)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_custom)->clazz)->markFunction)((jobject) self->F_custom, mark, depth + 1);
	if (self->F_maps)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_maps)->clazz)->markFunction)((jobject) self->F_maps, mark, depth + 1);
	if (self->F_load)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_load)->clazz)->markFunction)((jobject) self->F_load, mark, depth + 1);
	if (self->F_discord)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_discord)->clazz)->markFunction)((jobject) self->F_discord, mark, depth + 1);
	if (self->F_join)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_join)->clazz)->markFunction)((jobject) self->F_join, mark, depth + 1);
	if (self->F_host)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_host)->clazz)->markFunction)((jobject) self->F_host, mark, depth + 1);
	if (self->F_paused)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_paused)->clazz)->markFunction)((jobject) self->F_paused, mark, depth + 1);
	if (self->F_settings)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_settings)->clazz)->markFunction)((jobject) self->F_settings, mark, depth + 1);
	if (self->F_controls)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_controls)->clazz)->markFunction)((jobject) self->F_controls, mark, depth + 1);
	if (self->F_editor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_editor)->clazz)->markFunction)((jobject) self->F_editor, mark, depth + 1);
	if (self->F_language)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_language)->clazz)->markFunction)((jobject) self->F_language, mark, depth + 1);
	if (self->F_bans)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bans)->clazz)->markFunction)((jobject) self->F_bans, mark, depth + 1);
	if (self->F_admins)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_admins)->clazz)->markFunction)((jobject) self->F_admins, mark, depth + 1);
	if (self->F_traces)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_traces)->clazz)->markFunction)((jobject) self->F_traces, mark, depth + 1);
	if (self->F_database)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_database)->clazz)->markFunction)((jobject) self->F_database, mark, depth + 1);
	if (self->F_content)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_content)->clazz)->markFunction)((jobject) self->F_content, mark, depth + 1);
	if (self->F_planet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planet)->clazz)->markFunction)((jobject) self->F_planet, mark, depth + 1);
	if (self->F_research)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_research)->clazz)->markFunction)((jobject) self->F_research, mark, depth + 1);
	if (self->F_schematics)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_schematics)->clazz)->markFunction)((jobject) self->F_schematics, mark, depth + 1);
	if (self->F_mods)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mods)->clazz)->markFunction)((jobject) self->F_mods, mark, depth + 1);
	if (self->F_picker)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_picker)->clazz)->markFunction)((jobject) self->F_picker, mark, depth + 1);
	if (self->F_effects)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effects)->clazz)->markFunction)((jobject) self->F_effects, mark, depth + 1);
	if (self->F_logic)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_logic)->clazz)->markFunction)((jobject) self->F_logic, mark, depth + 1);
	if (self->F_fullText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fullText)->clazz)->markFunction)((jobject) self->F_fullText, mark, depth + 1);
	if (self->F_campaignComplete)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_campaignComplete)->clazz)->markFunction)((jobject) self->F_campaignComplete, mark, depth + 1);
	if (self->F_campaignRules)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_campaignRules)->clazz)->markFunction)((jobject) self->F_campaignRules, mark, depth + 1);
	if (self->F_drillCursor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_drillCursor)->clazz)->markFunction)((jobject) self->F_drillCursor, mark, depth + 1);
	if (self->F_unloadCursor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unloadCursor)->clazz)->markFunction)((jobject) self->F_unloadCursor, mark, depth + 1);
	if (self->F_targetCursor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_targetCursor)->clazz)->markFunction)((jobject) self->F_targetCursor, mark, depth + 1);
	if (self->F_repairCursor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_repairCursor)->clazz)->markFunction)((jobject) self->F_repairCursor, mark, depth + 1);
	if (self->F_lastAnnouncement)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastAnnouncement)->clazz)->markFunction)((jobject) self->F_lastAnnouncement, mark, depth + 1);
	if (self->F_popups)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_popups)->clazz)->markFunction)((jobject) self->F_popups, mark, depth + 1);
	if (self->F_labels)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_labels)->clazz)->markFunction)((jobject) self->F_labels, mark, depth + 1);
}

void init_mindustry_core_UI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(92);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_popups = (jref) sp[1].o;
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntMap);
	init_arc_struct_IntMap(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_labels = (jref) sp[1].o;
	LINE_NUMBER(93);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ResetEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_core_UI_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_arc_func_Cons_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(98);
	SM_mindustry_ui_Fonts_loadFonts(ctx);
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_UI_loadColors(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:loadColors", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	{
	LINE_NUMBER(102);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"accent"_j));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)SM_arc_graphics_Colors_put_java_lang_String_arc_graphics_Color_R_arc_graphics_Color(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(103);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"unlaunched"_j));
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"8982ed"_j))));
	sp[0].o = (jobject)SM_arc_graphics_Colors_put_java_lang_String_arc_graphics_Color_R_arc_graphics_Color(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(104);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"highlight"_j));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o, (jfloat(0.3f)));
	sp[0].o = (jobject)SM_arc_graphics_Colors_put_java_lang_String_arc_graphics_Color_R_arc_graphics_Color(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(105);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"stat"_j));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_stat;
	sp[0].o = (jobject)SM_arc_graphics_Colors_put_java_lang_String_arc_graphics_Color_R_arc_graphics_Color(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(106);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"negstat"_j));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_negativeStat;
	sp[0].o = (jobject)SM_arc_graphics_Colors_put_java_lang_String_arc_graphics_Color_R_arc_graphics_Color(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_loadAsync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:loadAsync", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(112);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_UI_loadSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:loadSync", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(116);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_markupEnabled = (jint(1));
	LINE_NUMBER(117);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_markupEnabled = (jint(1));
	LINE_NUMBER(118);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	((func_arc_graphics_g2d_Font_setOwnsTexture_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setOwnsTexture_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(120);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) &class_arc_graphics_g2d_Font);
	clinit_arc_struct_Seq(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getAll_java_lang_Class_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getAll_java_lang_Class_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_core_UI_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_arc_func_Cons_8);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(121);
	clinit_arc_scene_Scene(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_Scene);
	init_arc_scene_Scene(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	SF_arc_Core_scene = sp[0].o;
	LINE_NUMBER(122);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	((func_arc_Input_addProcessor_arc_input_InputProcessor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_addProcessor_arc_input_InputProcessor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(124);
	((func_mindustry_core_UI_updateMargins) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_UI_updateMargins])(ctx, (frame[0].o));
	LINE_NUMBER(126);
	SM_mindustry_gen_Tex_load(ctx);
	LINE_NUMBER(127);
	SM_mindustry_gen_Icon_load(ctx);
	LINE_NUMBER(128);
	SM_mindustry_ui_Styles_load(ctx);
	LINE_NUMBER(129);
	SM_mindustry_gen_Tex_loadStyles(ctx);
	LINE_NUMBER(130);
	SM_mindustry_ui_Fonts_loadContentIcons(ctx);
	LINE_NUMBER(132);
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_core_UI_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_arc_func_Prov_3);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_scene_ui_Dialog_setShowAction_arc_func_Prov(ctx, sp[0].o);
	LINE_NUMBER(133);
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_arc_func_Prov_4(ctx);
		auto proxy = (mindustry_core_UI_invoke_arc_func_Prov_4 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_arc_func_Prov_4);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_scene_ui_Dialog_setHideAction_arc_func_Prov(ctx, sp[0].o);
	LINE_NUMBER(135);
	sp[0].o = (jobject)SM_arc_scene_ui_Tooltip$Tooltips_getInstance_R_arc_scene_ui_Tooltip$Tooltips(ctx);
	((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK(sp[0].o))->F_animations = (jint(0));
	LINE_NUMBER(136);
	sp[0].o = (jobject)SM_arc_scene_ui_Tooltip$Tooltips_getInstance_R_arc_scene_ui_Tooltip$Tooltips(ctx);
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_core_UI_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_arc_func_Func_1);
		sp[1].o = (jobject) proxy;
	}
	((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK(sp[0].o))->F_textProvider = (jref) sp[1].o;
	LINE_NUMBER(137);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_17;
	}
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)SM_arc_scene_ui_Tooltip$Tooltips_getInstance_R_arc_scene_ui_Tooltip$Tooltips(ctx);
	jfloat temp0 = (jfloat)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK(sp[0].o))->F_offsetY;
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(60.0f)));
	((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK(sp[0].o))->F_offsetY = (temp0 + temp1);
	}
label_17:;
	{
	LINE_NUMBER(141);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_core_UI_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Settings_setErrorHandler_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_setErrorHandler_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(146);
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_java_lang_Runnable_18(ctx);
		auto proxy = (mindustry_core_UI_invoke_java_lang_Runnable_18 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_java_lang_Runnable_18);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_scene_event_ClickListener(ctx);
	SF_arc_scene_event_ClickListener_clicked = sp[0].o;
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"drill"_j));
	jint temp0 = (jint)SM_mindustry_ui_Fonts_cursorScale_R_int(ctx);
	sp[1].o = (jobject)((func_arc_Graphics_newCursor_java_lang_String_int_R_arc_Graphics$Cursor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_newCursor_java_lang_String_int_R_arc_Graphics$Cursor])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_drillCursor = (jref) sp[1].o;
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"unload"_j));
	jint temp1 = (jint)SM_mindustry_ui_Fonts_cursorScale_R_int(ctx);
	sp[1].o = (jobject)((func_arc_Graphics_newCursor_java_lang_String_int_R_arc_Graphics$Cursor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_newCursor_java_lang_String_int_R_arc_Graphics$Cursor])(ctx, sp[1].o, sp[2].o, temp1);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_unloadCursor = (jref) sp[1].o;
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"target"_j));
	jint temp2 = (jint)SM_mindustry_ui_Fonts_cursorScale_R_int(ctx);
	sp[1].o = (jobject)((func_arc_Graphics_newCursor_java_lang_String_int_R_arc_Graphics$Cursor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_newCursor_java_lang_String_int_R_arc_Graphics$Cursor])(ctx, sp[1].o, sp[2].o, temp2);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_targetCursor = (jref) sp[1].o;
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"repair"_j));
	jint temp3 = (jint)SM_mindustry_ui_Fonts_cursorScale_R_int(ctx);
	sp[1].o = (jobject)((func_arc_Graphics_newCursor_java_lang_String_int_R_arc_Graphics$Cursor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_newCursor_java_lang_String_int_R_arc_Graphics$Cursor])(ctx, sp[1].o, sp[2].o, temp3);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_repairCursor = (jref) sp[1].o;
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_UI_getDependencies_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:getDependencies", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)createArray(ctx, &class_arc_assets_AssetDescriptor, (jint(4)));
	jint temp0 = jint(0);
	clinit_arc_assets_AssetDescriptor(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_assets_AssetDescriptor);
	init_arc_assets_AssetDescriptor_java_lang_Class(ctx, sp[1].o, (((jobject) &class_mindustry_core_Control)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_assets_AssetDescriptor(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_assets_AssetDescriptor);
	init_arc_assets_AssetDescriptor_java_lang_String_java_lang_Class(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"outline"_j))), (((jobject) &class_arc_graphics_g2d_Font)));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_assets_AssetDescriptor(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_assets_AssetDescriptor);
	init_arc_assets_AssetDescriptor_java_lang_String_java_lang_Class(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"default"_j))), (((jobject) &class_arc_graphics_g2d_Font)));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_assets_AssetDescriptor(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_assets_AssetDescriptor);
	init_arc_assets_AssetDescriptor_java_lang_Class(ctx, sp[1].o, (((jobject) &class_mindustry_mod_Mods)));
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(161);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_disableUI) != 0) goto label_1;
	}
	clinit_arc_Core(ctx);
	(sp++)->o = SF_arc_Core_scene;
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(163);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_ui;
	((func_mindustry_core_PerfCounter_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_begin])(ctx, sp[0].o);
	LINE_NUMBER(165);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_uiDrawBegin;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	LINE_NUMBER(167);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_Scene_act) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_act])(ctx, sp[0].o);
	LINE_NUMBER(168);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_Scene_draw) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_draw])(ctx, sp[0].o);
	LINE_NUMBER(170);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseLeft;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasField_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasField_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(171);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getHoverElement_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getHoverElement_R_arc_scene_Element])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(172);
	if ((isInstance(ctx, (frame[1].o), &class_arc_scene_ui_TextField)) != 0) goto label_7;
	}
	{
	LINE_NUMBER(173);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, (jobject(nullptr)));
	}
label_7:;
	{
	LINE_NUMBER(177);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_uiDrawEnd;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	LINE_NUMBER(179);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_ui;
	((func_mindustry_core_PerfCounter_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_end])(ctx, sp[0].o);
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:init", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	printf("[UI::init] Starting UI::init...\n"); fflush(stdout);
	frame[0].o = self;
	{
	LINE_NUMBER(184);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unit.billions"_j))));
	clinit_mindustry_core_UI(ctx);
	SF_mindustry_core_UI_billions = sp[0].o;
	LINE_NUMBER(185);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unit.millions"_j))));
	clinit_mindustry_core_UI(ctx);
	SF_mindustry_core_UI_millions = sp[0].o;
	LINE_NUMBER(186);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unit.thousands"_j))));
	clinit_mindustry_core_UI(ctx);
	SF_mindustry_core_UI_thousands = sp[0].o;
	LINE_NUMBER(188);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_WidgetGroup(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_WidgetGroup);
	init_arc_scene_ui_layout_WidgetGroup(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_menuGroup = (jref) sp[1].o;
	LINE_NUMBER(189);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_WidgetGroup(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_WidgetGroup);
	init_arc_scene_ui_layout_WidgetGroup(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudGroup = (jref) sp[1].o;
	LINE_NUMBER(191);
	printf("[UI::init] Initializing MenuFragment & HudFragment...\n"); fflush(stdout);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_fragments_MenuFragment(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment);
	init_mindustry_ui_fragments_MenuFragment(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_menufrag = (jref) sp[1].o;
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_fragments_HudFragment(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HudFragment);
	init_mindustry_ui_fragments_HudFragment(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudfrag = (jref) sp[1].o;
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_fragments_HintsFragment(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment);
	init_mindustry_ui_fragments_HintsFragment(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hints = (jref) sp[1].o;
	LINE_NUMBER(194);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_fragments_ChatFragment(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_fragments_ChatFragment);
	init_mindustry_ui_fragments_ChatFragment(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_chatfrag = (jref) sp[1].o;
	LINE_NUMBER(195);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_fragments_MinimapFragment(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_fragments_MinimapFragment);
	init_mindustry_ui_fragments_MinimapFragment(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_minimapfrag = (jref) sp[1].o;
	LINE_NUMBER(196);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment);
	init_mindustry_ui_fragments_PlayerListFragment(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_listfrag = (jref) sp[1].o;
	LINE_NUMBER(197);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_fragments_LoadingFragment(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_fragments_LoadingFragment);
	init_mindustry_ui_fragments_LoadingFragment(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag = (jref) sp[1].o;
	LINE_NUMBER(198);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_fragments_ConsoleFragment(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_fragments_ConsoleFragment);
	init_mindustry_ui_fragments_ConsoleFragment(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_consolefrag = (jref) sp[1].o;
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_fragments_PerformanceFragment(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_fragments_PerformanceFragment);
	init_mindustry_ui_fragments_PerformanceFragment(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_perffrag = (jref) sp[1].o;
	printf("[UI::init] Initializing dialogs...\n"); fflush(stdout);
	LINE_NUMBER(201);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> ColorPicker\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_ColorPicker(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ColorPicker);
	init_mindustry_ui_dialogs_ColorPicker(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_picker = (jref) sp[1].o;
	LINE_NUMBER(202);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> EffectsDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_EffectsDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_EffectsDialog);
	init_mindustry_ui_dialogs_EffectsDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_effects = (jref) sp[1].o;
	LINE_NUMBER(203);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> MapEditorDialog\n"); fflush(stdout);
	clinit_mindustry_editor_MapEditorDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_MapEditorDialog);
	init_mindustry_editor_MapEditorDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_editor = (jref) sp[1].o;
	LINE_NUMBER(204);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> KeybindDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_KeybindDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_KeybindDialog);
	init_mindustry_ui_dialogs_KeybindDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_controls = (jref) sp[1].o;
	LINE_NUMBER(205);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> GameOverDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_GameOverDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_GameOverDialog);
	init_mindustry_ui_dialogs_GameOverDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_restart = (jref) sp[1].o;
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> JoinDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog);
	init_mindustry_ui_dialogs_JoinDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_join = (jref) sp[1].o;
	LINE_NUMBER(207);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> DiscordDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_DiscordDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_DiscordDialog);
	init_mindustry_ui_dialogs_DiscordDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_discord = (jref) sp[1].o;
	LINE_NUMBER(208);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> LoadDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_LoadDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog);
	init_mindustry_ui_dialogs_LoadDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_load = (jref) sp[1].o;
	LINE_NUMBER(209);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> CustomGameDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_CustomGameDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomGameDialog);
	init_mindustry_ui_dialogs_CustomGameDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_custom = (jref) sp[1].o;
	LINE_NUMBER(210);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> LanguageDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_LanguageDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_LanguageDialog);
	init_mindustry_ui_dialogs_LanguageDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_language = (jref) sp[1].o;
	LINE_NUMBER(211);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> DatabaseDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_DatabaseDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_DatabaseDialog);
	init_mindustry_ui_dialogs_DatabaseDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_database = (jref) sp[1].o;
	LINE_NUMBER(212);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> SettingsMenuDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog);
	init_mindustry_ui_dialogs_SettingsMenuDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_settings = (jref) sp[1].o;
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> HostDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_HostDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_HostDialog);
	init_mindustry_ui_dialogs_HostDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_host = (jref) sp[1].o;
	LINE_NUMBER(214);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> PausedDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_PausedDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_PausedDialog);
	init_mindustry_ui_dialogs_PausedDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_paused = (jref) sp[1].o;
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> AboutDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_AboutDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_AboutDialog);
	init_mindustry_ui_dialogs_AboutDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_about = (jref) sp[1].o;
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> BansDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_BansDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BansDialog);
	init_mindustry_ui_dialogs_BansDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_bans = (jref) sp[1].o;
	LINE_NUMBER(217);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> AdminsDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_AdminsDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_AdminsDialog);
	init_mindustry_ui_dialogs_AdminsDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_admins = (jref) sp[1].o;
	LINE_NUMBER(218);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> TraceDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_TraceDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_TraceDialog);
	init_mindustry_ui_dialogs_TraceDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_traces = (jref) sp[1].o;
	LINE_NUMBER(219);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> EditorMapsDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_EditorMapsDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_EditorMapsDialog);
	init_mindustry_ui_dialogs_EditorMapsDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_maps = (jref) sp[1].o;
	LINE_NUMBER(220);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> ContentInfoDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_ContentInfoDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ContentInfoDialog);
	init_mindustry_ui_dialogs_ContentInfoDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_content = (jref) sp[1].o;
	LINE_NUMBER(221);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> PlanetDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog);
	init_mindustry_ui_dialogs_PlanetDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_planet = (jref) sp[1].o;
	LINE_NUMBER(222);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> ResearchDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_ResearchDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog);
	init_mindustry_ui_dialogs_ResearchDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_research = (jref) sp[1].o;
	LINE_NUMBER(223);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> ModsDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog);
	init_mindustry_ui_dialogs_ModsDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_mods = (jref) sp[1].o;
	LINE_NUMBER(224);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> SchematicsDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_SchematicsDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog);
	init_mindustry_ui_dialogs_SchematicsDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_schematics = (jref) sp[1].o;
	LINE_NUMBER(225);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> LogicDialog\n"); fflush(stdout);
	clinit_mindustry_logic_LogicDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_logic_LogicDialog);
	init_mindustry_logic_LogicDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_logic = (jref) sp[1].o;
	LINE_NUMBER(226);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> FullTextDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_FullTextDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_FullTextDialog);
	init_mindustry_ui_dialogs_FullTextDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_fullText = (jref) sp[1].o;
	LINE_NUMBER(227);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> CampaignCompleteDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_CampaignCompleteDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignCompleteDialog);
	init_mindustry_ui_dialogs_CampaignCompleteDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_campaignComplete = (jref) sp[1].o;
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	printf("[UI::init] -> CampaignRulesDialog\n"); fflush(stdout);
	clinit_mindustry_ui_dialogs_CampaignRulesDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_CampaignRulesDialog);
	init_mindustry_ui_dialogs_CampaignRulesDialog(ctx, sp[1].o);
	((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_campaignRules = (jref) sp[1].o;
	LINE_NUMBER(230);
	printf("[UI::init] Setting up scene groups and fragments build...\n"); fflush(stdout);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_root;
	frame[1].o = sp[0].o;
	LINE_NUMBER(232);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_menuGroup;
	((func_arc_scene_ui_layout_WidgetGroup_setFillParent_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_WidgetGroup_setFillParent_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(233);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_menuGroup;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_childrenOnly;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(234);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_menuGroup;
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_arc_func_Boolp_4(ctx);
		auto proxy = (mindustry_core_UI_invoke_arc_func_Boolp_4 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_arc_func_Boolp_4);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_WidgetGroup_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_WidgetGroup_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(235);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_hudGroup;
	((func_arc_scene_ui_layout_WidgetGroup_setFillParent_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_WidgetGroup_setFillParent_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(236);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_hudGroup;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_childrenOnly;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(237);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_hudGroup;
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_arc_func_Boolp_5(ctx);
		auto proxy = (mindustry_core_UI_invoke_arc_func_Boolp_5 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_arc_func_Boolp_5);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_WidgetGroup_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_WidgetGroup_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(239);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_menuGroup;
	((func_arc_scene_Scene_add_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_add_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(240);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_hudGroup;
	((func_arc_scene_Scene_add_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_add_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(242);
	printf("[UI::init] Building hudfrag...\n"); fflush(stdout);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_hudfrag;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_hudGroup;
	((func_mindustry_ui_fragments_HudFragment_build_arc_scene_Group) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_build_arc_scene_Group])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(243);
	printf("[UI::init] Building menufrag...\n"); fflush(stdout);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_menufrag;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_menuGroup;
	((func_mindustry_ui_fragments_MenuFragment_build_arc_scene_Group) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_build_arc_scene_Group])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(244);
	printf("[UI::init] Building chatfrag...\n"); fflush(stdout);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_chatfrag;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_hudGroup;
	((func_mindustry_ui_fragments_ChatFragment_build_arc_scene_Group) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_build_arc_scene_Group])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(245);
	printf("[UI::init] Building minimapfrag...\n"); fflush(stdout);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_minimapfrag;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_hudGroup;
	((func_mindustry_ui_fragments_MinimapFragment_build_arc_scene_Group) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MinimapFragment_build_arc_scene_Group])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(246);
	printf("[UI::init] Building listfrag...\n"); fflush(stdout);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_listfrag;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_hudGroup;
	((func_mindustry_ui_fragments_PlayerListFragment_build_arc_scene_Group) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_PlayerListFragment_build_arc_scene_Group])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(247);
	printf("[UI::init] Building consolefrag...\n"); fflush(stdout);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_consolefrag;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_hudGroup;
	((func_mindustry_ui_fragments_ConsoleFragment_build_arc_scene_Group) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_build_arc_scene_Group])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(248);
	printf("[UI::init] Building loadfrag...\n"); fflush(stdout);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_build_arc_scene_Group) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_build_arc_scene_Group])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(249);
	printf("[UI::init] Building perffrag...\n"); fflush(stdout);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_perffrag;
	((func_mindustry_ui_fragments_PerformanceFragment_build_arc_scene_Group) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_PerformanceFragment_build_arc_scene_Group])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(250);
	printf("[UI::init] Building FadeInFragment...\n"); fflush(stdout);
	clinit_mindustry_ui_fragments_FadeInFragment(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_FadeInFragment);
	init_mindustry_ui_fragments_FadeInFragment(ctx, sp[0].o);
	((func_mindustry_ui_fragments_FadeInFragment_build_arc_scene_Group) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_FadeInFragment_build_arc_scene_Group])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(251);
	printf("[UI::init] UI::init completed successfully!\n"); fflush(stdout);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_updateMargins(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:updateMargins", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(255);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	sp[0].o = (jobject)((func_arc_Graphics_getSafeInsets_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getSafeInsets_R_Array1_int])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(256);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_int_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"uiEdgePadding"_j))), (jint(0)));
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(temp0)));
	frame[2].i = (jint(temp1));
	LINE_NUMBER(258);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginLeft = (jfloat(((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(0))))));
	LINE_NUMBER(259);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginRight = (jfloat(((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(1))))));
	LINE_NUMBER(260);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginTop = (jfloat(((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(2))))));
	LINE_NUMBER(261);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginBottom = (jfloat(((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(3))))));
	LINE_NUMBER(263);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp3 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	if (temp2 <= temp3) goto label_7;
	}
	{
	LINE_NUMBER(264);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginTop = (((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginTop) + (jfloat((frame[2].i))));
	LINE_NUMBER(265);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginBottom = (((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginBottom) + (jfloat((frame[2].i))));
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(267);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginLeft = (((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginLeft) + (jfloat((frame[2].i))));
	LINE_NUMBER(268);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginRight = (((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginRight) + (jfloat((frame[2].i))));
	}
label_10:;
	LINE_NUMBER(270);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_UI_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:resize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(274);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(276);
	((func_mindustry_core_UI_updateMargins) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_UI_updateMargins])(ctx, (frame[0].o));
	LINE_NUMBER(278);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_Scene_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_resize_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(279);
	clinit_mindustry_game_EventType$ResizeEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$ResizeEvent);
	init_mindustry_game_EventType$ResizeEvent(ctx, sp[0].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_UI_getIcon_java_lang_String_R_arc_scene_style_TextureRegionDrawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:getIcon", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(283);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_scene_style_TextureRegionDrawable, sp[0].o));
	}
label_1:;
	{
	LINE_NUMBER(284);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getDrawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getDrawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"error"_j))));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_scene_style_TextureRegionDrawable, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_UI_getIcon_java_lang_String_java_lang_String_R_arc_scene_style_TextureRegionDrawable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:getIcon", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(288);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_scene_style_TextureRegionDrawable, sp[0].o));
	}
label_1:;
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)((func_mindustry_core_UI_getIcon_java_lang_String_R_arc_scene_style_TextureRegionDrawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_UI_getIcon_java_lang_String_R_arc_scene_style_TextureRegionDrawable])(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_loadAnd_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:loadAnd", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(293);
	((func_mindustry_core_UI_loadAnd_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_UI_loadAnd_java_lang_String_java_lang_Runnable])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@loading"_j))), (frame[1].o));
	LINE_NUMBER(294);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_loadAnd_java_lang_String_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:loadAnd", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_show_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_show_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(298);
	jfloat temp0 = jfloat(7.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_java_lang_Runnable_19(ctx);
		auto proxy = (mindustry_core_UI_invoke_java_lang_Runnable_19 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_java_lang_Runnable_19);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(ctx, temp0, sp[0].o);
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_arc_func_Cons_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jbool param4, jobject param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showTextInput", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(306);
	((func_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_boolean_arc_func_Cons_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_boolean_arc_func_Cons_java_lang_Runnable])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].o), (frame[5].i), (jint(0)), (frame[6].o), (frame[7].o));
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_boolean_arc_func_Cons_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jbool param4, jbool param5, jobject param6, jobject param7) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showTextInput", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].o = param6;
	frame[8].o = param7;
	{
	LINE_NUMBER(310);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_1;
	}
	{
	LINE_NUMBER(311);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@"_j))));
	if (temp0 == 0) goto label_3;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[2].o), (jint(1)));
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(2);
label_4:;
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	LINE_NUMBER(312);
	frame[10].i = (frame[6].i);
	LINE_NUMBER(313);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_core_UI$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_core_UI$1);
	init_mindustry_core_UI$1_mindustry_core_UI_java_lang_String_java_lang_String_boolean_int_arc_func_Cons_java_lang_Runnable_boolean_java_lang_String(ctx, sp[1].o, (frame[0].o), (frame[1].o), (frame[4].o), (frame[5].i), (frame[3].i), (frame[7].o), (frame[8].o), (frame[10].i), (frame[9].o));
	((func_arc_Input_getTextInput_arc_Input$TextInput) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_getTextInput_arc_Input$TextInput])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(323);
	goto label_8;
	}
label_1:;
	{
	LINE_NUMBER(324);
	clinit_mindustry_core_UI$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_UI$2);
	init_mindustry_core_UI$2_mindustry_core_UI_java_lang_String_java_lang_String_boolean_java_lang_String_int_java_lang_Runnable_arc_func_Cons_boolean(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].o), (frame[5].i), (frame[4].o), (frame[3].i), (frame[8].o), (frame[7].o), (frame[6].i));
	}
label_8:;
	LINE_NUMBER(357);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showTextInput", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(360);
	((func_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_arc_func_Cons) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_arc_func_Cons])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (32), (frame[3].o), (frame[4].o));
	LINE_NUMBER(361);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showTextInput", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(364);
	((func_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_arc_func_Cons) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_arc_func_Cons])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].o), (jint(0)), (frame[5].o));
	LINE_NUMBER(365);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jbool param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showTextInput", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(368);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[3].o = frame[4].o;
	jint temp1 = frame[5].i;
	sp[4].o = frame[6].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_java_lang_Runnable_20(ctx);
		auto proxy = (mindustry_core_UI_invoke_java_lang_Runnable_20 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_java_lang_Runnable_20);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_arc_func_Cons_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_arc_func_Cons_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, temp1, sp[4].o, sp[5].o);
	LINE_NUMBER(369);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showInfoFade_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showInfoFade", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(372);
	((func_mindustry_core_UI_showInfoFade_java_lang_String_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_UI_showInfoFade_java_lang_String_float])(ctx, (frame[0].o), (frame[1].o), (jfloat(7.0f)));
	LINE_NUMBER(373);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showInfoFade_java_lang_String_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showInfoFade", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(376);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_find_java_lang_String_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_find_java_lang_String_R_arc_scene_Element])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"coreinfo"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(377);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(378);
	sp[0].o = frame[4].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(379);
	((func_arc_scene_ui_layout_Table_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_setFillParent_boolean])(ctx, (frame[4].o), (jint(1)));
	LINE_NUMBER(380);
	if (((jint)((arc_scene_Element *) NULL_CHECK((frame[3].o)))->F_visible) == 0) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	sp[0].o = frame[4].o;
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_Element_getPrefHeight_R_float])(ctx, (frame[3].o));
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_R_float(ctx);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, ((temp0 / temp1) / (jfloat(2))));
	}
label_5:;
	{
	LINE_NUMBER(381);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(2)));
	jint temp0 = jint(0);
	jfloat temp1 = frame[2].f;
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_fade;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_fadeOut_float_arc_math_Interp_R_arc_scene_actions_AlphaAction(ctx, temp1, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp2 = jint(1);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_remove_R_arc_scene_actions_RemoveActorAction(ctx);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	((func_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(382);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[1].o));
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(383);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_Scene_add_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_add_arc_scene_Element])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_addDescTooltip_arc_scene_Element_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:addDescTooltip", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(387);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(389);
	sp[0].o = frame[1].o;
	clinit_mindustry_core_UI$3(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_core_UI$3);
	sp[2].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_core_UI_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_arc_func_Cons_10);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_core_UI$3_mindustry_core_UI_arc_func_Cons(ctx, sp[1].o, sp[2].o, sp[3].o);
	jint temp0 = (jint)((func_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(402);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showInfoToast_java_lang_String_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showInfoToast", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(406);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_find_java_lang_String_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_find_java_lang_String_R_arc_scene_Element])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"coreinfo"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(407);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(408);
	sp[0].o = frame[4].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(409);
	((func_arc_scene_ui_layout_Table_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_setFillParent_boolean])(ctx, (frame[4].o), (jint(1)));
	LINE_NUMBER(410);
	if (((jint)((arc_scene_Element *) NULL_CHECK((frame[3].o)))->F_visible) == 0) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	sp[0].o = frame[4].o;
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_Element_getPrefHeight_R_float])(ctx, (frame[3].o));
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_R_float(ctx);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, ((temp0 / temp1) / (jfloat(2))));
	}
label_5:;
	{
	LINE_NUMBER(411);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_arc_func_Boolp_6(ctx);
		auto proxy = (mindustry_core_UI_invoke_arc_func_Boolp_6 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_arc_func_Boolp_6);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(415);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(3)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_delay_float_R_arc_scene_actions_DelayAction(ctx, ((frame[2].f) * (jfloat(0.9f))));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	jfloat temp2 = (frame[2].f) * (jfloat(0.1f));
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_fade;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_fadeOut_float_arc_math_Interp_R_arc_scene_actions_AlphaAction(ctx, temp2, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp3 = jint(2);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_remove_R_arc_scene_actions_RemoveActorAction(ctx);
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	((func_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(416);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black3;
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_core_UI_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_arc_func_Cons_11);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(417);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_Scene_add_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_add_arc_scene_Element])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(418);
	((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_lastAnnouncement = (jref) (frame[4].o);
	LINE_NUMBER(419);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showInfoPopup_java_lang_String_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jint param3, jint param4, jint param5, jint param6, jint param7) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showInfoPopup", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	{
	LINE_NUMBER(423);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(424);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_popups;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	frame[9].o = (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o));
	LINE_NUMBER(425);
	if ((frame[9].o) == nullptr) goto label_4;
	}
	{
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, (frame[9].o));
	}
label_4:;
	LINE_NUMBER(426);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(428);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(429);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(430);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_popups;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o), (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o));
	LINE_NUMBER(431);
	if ((frame[10].o) == nullptr) goto label_6;
	}
	{
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, (frame[10].o));
	}
label_6:;
	{
	LINE_NUMBER(433);
	((func_arc_scene_ui_layout_Table_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_setFillParent_boolean])(ctx, (frame[9].o), (jint(1)));
	LINE_NUMBER(434);
	sp[0].o = frame[9].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(435);
	sp[0].o = frame[9].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_arc_func_Boolp_7(ctx);
		auto proxy = (mindustry_core_UI_invoke_arc_func_Boolp_7 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_arc_func_Boolp_7);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[9].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(442);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(3)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_delay_float_R_arc_scene_actions_DelayAction(ctx, (frame[3].f));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_remove_R_arc_scene_actions_RemoveActorAction(ctx);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_java_lang_Runnable_21(ctx);
		auto proxy = (mindustry_core_UI_invoke_java_lang_Runnable_21 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_java_lang_Runnable_21);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_run_java_lang_Runnable_R_arc_scene_actions_RunnableAction(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	((func_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(443);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_align_int_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_align_int_R_arc_scene_ui_layout_Table])(ctx, (frame[9].o), (frame[4].i));
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black3;
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_core_UI_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_arc_func_Cons_12);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_float_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_float_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat((frame[5].i))), (jfloat((frame[6].i))), (jfloat((frame[7].i))), (jfloat((frame[8].i))));
	LINE_NUMBER(444);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_Scene_add_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_add_arc_scene_Element])(ctx, sp[0].o, (frame[9].o));
	LINE_NUMBER(445);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showLabel_java_lang_String_int_float_float_float_int(jcontext ctx, jobject self, jobject param0, jint param1, jfloat param2, jfloat param3, jfloat param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showLabel", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(449);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(450);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_labels;
	sp[0].o = (jobject)((func_arc_struct_IntMap_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[7].o = (checkCast(ctx, &class_mindustry_gen_WorldLabel, sp[0].o));
	LINE_NUMBER(451);
	if ((frame[7].o) == nullptr) goto label_4;
	}
	INST_ALOAD(7);
	POP_N(1); // Pop method args
	((func_mindustry_gen_WorldLabel_remove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_WorldLabel_remove])(ctx, sp[0].o);
label_4:;
	LINE_NUMBER(452);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(455);
	if ((frame[2].i) != (jint(-1))) goto label_5;
	}
	sp->o = (jobject)SM_mindustry_gen_WorldLabel_create_R_mindustry_gen_WorldLabel(ctx);
	sp++;
	goto label_6;
label_5:;
	{
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_labels;
	jint temp0 = frame[2].i;
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_arc_func_Prov_5(ctx);
		auto proxy = (mindustry_core_UI_invoke_arc_func_Prov_5 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_arc_func_Prov_5);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_get_int_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	sp[0].o = checkCast(ctx, &class_mindustry_gen_WorldLabel, sp[0].o);
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(456);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[7].o)))->F_id = (bit_cast<jint>(0x80000000));
	LINE_NUMBER(457);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[7].o)))->F_x = (frame[4].f);
	LINE_NUMBER(458);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[7].o)))->F_y = (frame[5].f);
	LINE_NUMBER(459);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[7].o)))->F_text = (jref) (frame[1].o);
	LINE_NUMBER(460);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[7].o)))->F_flags = (jbyte((frame[6].i)));
	LINE_NUMBER(461);
	sp[0].o = frame[7].o;
	sp += 1;
	if ((floatCompare((frame[3].f), (jfloat(3,402823e+38f)), -1)) != 0) goto label_13;
	}
	(sp++)->f = jfloat(-1.0f);
	goto label_14;
label_13:;
	INST_FLOAD(3);
label_14:;
	{
	sp -= 2;
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_duration = sp[1].f;
	LINE_NUMBER(462);
	if ((frame[2].i) == (jint(-1))) goto label_16;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[7].o)))->F_duration), (jfloat(0)), -1)) < 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[7].o)))->F_expired;
	if (sp[0].o != nullptr) goto label_16;
	}
	{
	sp[0].o = frame[7].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_java_lang_Runnable_22(ctx);
		auto proxy = (mindustry_core_UI_invoke_java_lang_Runnable_22 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_java_lang_Runnable_22);
		proxy->F_field1 = (frame[2].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_expired = (jref) sp[1].o;
	}
label_16:;
	{
	LINE_NUMBER(463);
	((func_mindustry_gen_WorldLabel_add) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_WorldLabel_add])(ctx, (frame[7].o));
	LINE_NUMBER(464);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showInfo_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showInfo", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(467);
	clinit_mindustry_core_UI$4(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_UI$4);
	init_mindustry_core_UI$4_mindustry_core_UI_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))), (frame[1].o));
	LINE_NUMBER(473);
	sp[0].o = (jobject)((func_mindustry_core_UI$4_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI$4_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(474);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showInfoOnHidden_java_lang_String_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showInfoOnHidden", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(477);
	clinit_mindustry_core_UI$5(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_UI$5);
	init_mindustry_core_UI$5_mindustry_core_UI_java_lang_String_java_lang_String_java_lang_Runnable(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))), (frame[1].o), (frame[2].o));
	LINE_NUMBER(483);
	sp[0].o = (jobject)((func_mindustry_core_UI$5_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI$5_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(484);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showStartupInfo_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showStartupInfo", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(487);
	clinit_mindustry_core_UI$6(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_UI$6);
	init_mindustry_core_UI$6_mindustry_core_UI_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))), (frame[1].o));
	LINE_NUMBER(492);
	sp[0].o = (jobject)((func_mindustry_core_UI$6_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI$6_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(493);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showErrorMessage_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showErrorMessage", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(496);
	clinit_mindustry_core_UI$7(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_UI$7);
	init_mindustry_core_UI$7_mindustry_core_UI_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))), (frame[1].o));
	LINE_NUMBER(507);
	sp[0].o = (jobject)((func_mindustry_core_UI$7_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI$7_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(508);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showException_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showException", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(511);
	((func_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))), (frame[1].o));
	LINE_NUMBER(512);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showException", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(515);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_loadfrag;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(517);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_hide])(ctx, sp[0].o);
	LINE_NUMBER(518);
	clinit_mindustry_core_UI$8(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_UI$8);
	init_mindustry_core_UI$8_mindustry_core_UI_java_lang_String_java_lang_Throwable_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))), (frame[2].o), (frame[1].o));
	LINE_NUMBER(537);
	sp[0].o = (jobject)((func_mindustry_core_UI$8_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI$8_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(538);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showText_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showText", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(541);
	((func_mindustry_core_UI_showText_java_lang_String_java_lang_String_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_UI_showText_java_lang_String_java_lang_String_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)));
	LINE_NUMBER(542);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showText_java_lang_String_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showText", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(545);
	clinit_mindustry_core_UI$9(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_UI$9);
	init_mindustry_core_UI$9_mindustry_core_UI_java_lang_String_java_lang_String_int(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i));
	LINE_NUMBER(553);
	sp[0].o = (jobject)((func_mindustry_core_UI$9_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI$9_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(554);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showInfoText_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showInfoText", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(557);
	clinit_mindustry_core_UI$10(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_UI$10);
	init_mindustry_core_UI$10_mindustry_core_UI_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(561);
	sp[0].o = (jobject)((func_mindustry_core_UI$10_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI$10_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(562);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showSmall_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showSmall", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(565);
	clinit_mindustry_core_UI$11(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_UI$11);
	init_mindustry_core_UI$11_mindustry_core_UI_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(571);
	sp[0].o = (jobject)((func_mindustry_core_UI$11_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI$11_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(572);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showConfirm", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(575);
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_arc_func_Boolp_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_arc_func_Boolp_java_lang_Runnable])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@confirm"_j))), (frame[1].o), (jobject(nullptr)), (frame[2].o));
	LINE_NUMBER(576);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showConfirm", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(579);
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_arc_func_Boolp_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_arc_func_Boolp_java_lang_Runnable])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)), (frame[3].o));
	LINE_NUMBER(580);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_arc_func_Boolp_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showConfirm", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(583);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(584);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[5].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].o));
	sp += 1;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_2;
	}
	(sp++)->f = jfloat(400.0f);
	goto label_3;
label_2:;
	(sp++)->f = jfloat(500.0f);
label_3:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].f);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	((func_arc_scene_ui_Label_setAlignment_int_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_Label_setAlignment_int_int])(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o)), (jint(1)), (jint(1)));
	LINE_NUMBER(585);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[5].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(200.0f)), (jfloat(54.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(586);
	((func_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean])(ctx, (frame[5].o), (jint(0)));
	LINE_NUMBER(587);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[5].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@cancel"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_cancel;
	sp[3].o = frame[5].o;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_java_lang_Runnable_23(ctx);
		auto proxy = (mindustry_core_UI_invoke_java_lang_Runnable_23 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_java_lang_Runnable_23);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(588);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[5].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@ok"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_ok;
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_java_lang_Runnable_24(ctx);
		auto proxy = (mindustry_core_UI_invoke_java_lang_Runnable_24 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_java_lang_Runnable_24);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(592);
	if ((frame[3].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(593);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_java_lang_Runnable_25(ctx);
		auto proxy = (mindustry_core_UI_invoke_java_lang_Runnable_25 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_java_lang_Runnable_25);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(599);
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_enter;
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_java_lang_Runnable_26(ctx);
		auto proxy = (mindustry_core_UI_invoke_java_lang_Runnable_26 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_java_lang_Runnable_26);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_BaseDialog_keyDown_arc_input_KeyCode_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_keyDown_arc_input_KeyCode_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(603);
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_escape;
	sp[2].o = frame[5].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_java_lang_Runnable_27(ctx);
		auto proxy = (mindustry_core_UI_invoke_java_lang_Runnable_27 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_java_lang_Runnable_27);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_BaseDialog_keyDown_arc_input_KeyCode_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_keyDown_arc_input_KeyCode_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(604);
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_back;
	sp[2].o = frame[5].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_java_lang_Runnable_28(ctx);
		auto proxy = (mindustry_core_UI_invoke_java_lang_Runnable_28 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_java_lang_Runnable_28);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_BaseDialog_keyDown_arc_input_KeyCode_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_keyDown_arc_input_KeyCode_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(605);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[5].o));
	LINE_NUMBER(606);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showCustomConfirm_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_Runnable_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showCustomConfirm", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(609);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (frame[1].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(610);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[7].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].o));
	sp += 1;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_2;
	}
	(sp++)->f = jfloat(400.0f);
	goto label_3;
label_2:;
	(sp++)->f = jfloat(500.0f);
label_3:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].f);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	((func_arc_scene_ui_Label_setAlignment_int_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_Label_setAlignment_int_int])(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o)), (jint(1)), (jint(1)));
	LINE_NUMBER(611);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[7].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(200.0f)), (jfloat(54.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(612);
	((func_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean])(ctx, (frame[7].o), (jint(0)));
	LINE_NUMBER(613);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[7].o)))->F_buttons;
	sp[1].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_java_lang_Runnable_29(ctx);
		auto proxy = (mindustry_core_UI_invoke_java_lang_Runnable_29 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_java_lang_Runnable_29);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(617);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[7].o)))->F_buttons;
	sp[1].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_java_lang_Runnable_30(ctx);
		auto proxy = (mindustry_core_UI_invoke_java_lang_Runnable_30 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_java_lang_Runnable_30);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(621);
	sp[0].o = frame[7].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_escape;
	sp[2].o = frame[7].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_java_lang_Runnable_31(ctx);
		auto proxy = (mindustry_core_UI_invoke_java_lang_Runnable_31 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_java_lang_Runnable_31);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_BaseDialog_keyDown_arc_input_KeyCode_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_keyDown_arc_input_KeyCode_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(622);
	sp[0].o = frame[7].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_back;
	sp[2].o = frame[7].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_java_lang_Runnable_32(ctx);
		auto proxy = (mindustry_core_UI_invoke_java_lang_Runnable_32 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_java_lang_Runnable_32);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_BaseDialog_keyDown_arc_input_KeyCode_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_keyDown_arc_input_KeyCode_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(623);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[7].o));
	LINE_NUMBER(624);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_core_UI_hasAnnouncement_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:hasAnnouncement", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(627);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_lastAnnouncement;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_lastAnnouncement;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_parent;
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

void M_mindustry_core_UI_announce_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:announce", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(632);
	((func_mindustry_core_UI_announce_java_lang_String_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_UI_announce_java_lang_String_float])(ctx, (frame[0].o), (frame[1].o), (jfloat(3.0f)));
	LINE_NUMBER(633);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_announce_java_lang_String_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:announce", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(637);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black3;
	init_arc_scene_ui_layout_Table_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(638);
	sp[0].o = frame[3].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(639);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o), (jfloat(8.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[1].o));
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(640);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_java_lang_Runnable_33(ctx);
		auto proxy = (mindustry_core_UI_invoke_java_lang_Runnable_33 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_java_lang_Runnable_33);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(648);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(2)));
	jint temp0 = jint(0);
	jfloat temp1 = frame[2].f;
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_pow4In;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_fadeOut_float_arc_math_Interp_R_arc_scene_actions_AlphaAction(ctx, temp1, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp2 = jint(1);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_remove_R_arc_scene_actions_RemoveActorAction(ctx);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	((func_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(649);
	((func_arc_scene_ui_layout_Table_pack) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_pack])(ctx, (frame[3].o));
	LINE_NUMBER(650);
	((func_arc_scene_ui_layout_Table_act_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_act_float])(ctx, (frame[3].o), (jfloat(0.1f)));
	LINE_NUMBER(651);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_Scene_add_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_add_arc_scene_Element])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(652);
	((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_lastAnnouncement = (jref) (frame[3].o);
	LINE_NUMBER(653);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_showOkText_java_lang_String_java_lang_String_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:showOkText", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(656);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(657);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[4].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(500.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	((func_arc_scene_ui_Label_setAlignment_int_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_Label_setAlignment_int_int])(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o)), (jint(1)), (jint(1)));
	LINE_NUMBER(658);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[4].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(200.0f)), (jfloat(54.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(659);
	((func_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean])(ctx, (frame[4].o), (jint(0)));
	LINE_NUMBER(660);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[4].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@ok"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_java_lang_Runnable_34(ctx);
		auto proxy = (mindustry_core_UI_invoke_java_lang_Runnable_34 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_java_lang_Runnable_34);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(664);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[4].o));
	LINE_NUMBER(665);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_core_UI_formatIcons_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:formatIcons", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(672);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8":"_j))));
	if (temp0 != 0) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(674);
	clinit_mindustry_core_UI(ctx);
	sp[0].o = (jobject)SF_mindustry_core_UI_buffer;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(675);
	frame[1].i = (jint(0));
	LINE_NUMBER(677);
	frame[2].i = (jint(0));
	LINE_NUMBER(678);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8":"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(679);
	frame[4].o = (frame[3].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_7;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(680);
	if ((frame[2].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(681);
	clinit_mindustry_gen_Iconc(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Iconc_codes;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[7].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(682);
	clinit_mindustry_core_UI(ctx);
	sp[0].o = (jobject)SF_mindustry_core_UI_buffer;
	clinit_mindustry_gen_Iconc(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Iconc_codes;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_R_int])(ctx, sp[1].o, (frame[7].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (jchar(temp0)));
	LINE_NUMBER(683);
	frame[1].i = (jint(1));
	LINE_NUMBER(684);
	frame[2].i = (jint(0));
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(685);
	jint temp0 = (jint)SM_mindustry_ui_Fonts_hasUnicodeStr_java_lang_String_R_boolean(ctx, (frame[7].o));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(686);
	clinit_mindustry_core_UI(ctx);
	sp[0].o = (jobject)SF_mindustry_core_UI_buffer;
	sp[1].o = (jobject)SM_mindustry_ui_Fonts_getUnicodeStr_java_lang_String_R_java_lang_String(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(687);
	frame[1].i = (jint(1));
	LINE_NUMBER(688);
	frame[2].i = (jint(0));
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(690);
	clinit_mindustry_core_UI(ctx);
	sp[0].o = (jobject)SF_mindustry_core_UI_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[7].o));
	goto label_15;
	}
label_9:;
	{
	LINE_NUMBER(693);
	clinit_mindustry_core_UI(ctx);
	sp[0].o = (jobject)SF_mindustry_core_UI_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(694);
	frame[2].i = (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(679);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(698);
	if ((frame[1].i) == 0) goto label_21;
	}
	{
	clinit_mindustry_core_UI(ctx);
	sp[0].o = (jobject)SF_mindustry_core_UI_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_22;
	}
label_21:;
	INST_ALOAD(0);
label_22:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_core_UI_formatTime_float_R_java_lang_String(jcontext ctx, jfloat param0) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:formatTime", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(703);
	frame[1].i = (jint(((frame[0].f) / (jfloat(60.0f)))));
	LINE_NUMBER(704);
	if ((frame[1].i) >= (60)) goto label_2;
	}
	{
	if ((frame[1].i) >= (10)) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"0"_j));
	goto label_4;
label_3:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_4:;
	{
	sp -= 1;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"0:\u0001\u0001"_j.string, 2, sp[0].o, boxInteger(ctx, (frame[1].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(706);
	frame[2].i = ((frame[1].i) / (60));
	LINE_NUMBER(707);
	frame[3].i = ((frame[1].i) % (60));
	LINE_NUMBER(708);
	if ((frame[2].i) >= (60)) goto label_7;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].i = temp0;
	sp += 1;
	if ((frame[3].i) >= (10)) goto label_8;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"0"_j));
	goto label_9;
label_8:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_9:;
	{
	sp -= 2;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001:\u0001\u0001"_j.string, 3, boxInteger(ctx, sp[0].i), sp[1].o, boxInteger(ctx, (frame[3].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(710);
	frame[4].i = ((frame[2].i) / (60));
	LINE_NUMBER(711);
	frame[5].i = ((frame[2].i) % (60));
	LINE_NUMBER(713);
	jint temp0 = frame[4].i;
	sp[0].i = temp0;
	sp += 1;
	if ((frame[5].i) >= (10)) goto label_12;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"0"_j));
	goto label_13;
label_12:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_13:;
	{
	jint temp0 = frame[5].i;
	sp[0].i = temp0;
	sp += 1;
	if ((frame[3].i) >= (10)) goto label_14;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"0"_j));
	goto label_15;
label_14:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_15:;
	{
	sp -= 4;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001:\u0001\u0001:\u0001\u0001"_j.string, 5, boxInteger(ctx, sp[0].i), sp[1].o, boxInteger(ctx, sp[2].i), sp[3].o, boxInteger(ctx, (frame[3].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_core_UI_formatAmount_long_R_java_lang_String(jcontext ctx, jlong param0) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:formatAmount", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(718);
	if ((longCompare((frame[0].l), (jlong(9223372036854775807ll)))) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"\u221e"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(719);
	if ((longCompare((frame[0].l), (bit_cast<jlong>(0x8000000000000000ll)))) != 0) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"-\u221e"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(721);
	jlong temp0 = (jlong)SM_java_lang_Math_abs_long_R_long(ctx, (frame[0].l));
	frame[2].l = temp0;
	LINE_NUMBER(722);
	if ((longCompare((frame[0].l), (jlong(0)))) >= 0) goto label_4;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"-"_j));
	goto label_5;
label_4:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_5:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(723);
	if ((longCompare((frame[2].l), (jlong(1000000000ll)))) < 0) goto label_7;
	}
	{
	LINE_NUMBER(724);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)SM_arc_util_Strings_fixed_float_int_R_java_lang_String(ctx, ((jfloat((frame[2].l))) / (jfloat(1,000000e+09f))), (jint(1)));
	clinit_mindustry_core_UI(ctx);
	sp[2].o = (jobject)SF_mindustry_core_UI_billions;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001[gray]\u0001[]"_j.string, 3, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(725);
	if ((longCompare((frame[2].l), (jlong(1000000ll)))) < 0) goto label_9;
	}
	{
	LINE_NUMBER(726);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)SM_arc_util_Strings_fixed_float_int_R_java_lang_String(ctx, ((jfloat((frame[2].l))) / (jfloat(1000000.0f))), (jint(1)));
	clinit_mindustry_core_UI(ctx);
	sp[2].o = (jobject)SF_mindustry_core_UI_millions;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001[gray]\u0001[]"_j.string, 3, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(727);
	if ((longCompare((frame[2].l), (jlong(10000ll)))) < 0) goto label_11;
	}
	{
	LINE_NUMBER(728);
	jlong temp0 = (frame[0].l) / (jlong(1000ll));
	clinit_mindustry_core_UI(ctx);
	sp[0].o = (jobject)SF_mindustry_core_UI_thousands;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001[gray]\u0001[]"_j.string, 2, boxLong(ctx, temp0), sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(729);
	if ((longCompare((frame[2].l), (jlong(1000ll)))) < 0) goto label_13;
	}
	{
	LINE_NUMBER(730);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)SM_arc_util_Strings_fixed_float_int_R_java_lang_String(ctx, ((jfloat((frame[2].l))) / (jfloat(1000.0f))), (jint(1)));
	clinit_mindustry_core_UI(ctx);
	sp[2].o = (jobject)SF_mindustry_core_UI_thousands;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001[gray]\u0001[]"_j.string, 3, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(732);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxLong(ctx, (frame[0].l)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_core_UI_roundAmount_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:roundAmount", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(737);
	if ((frame[0].i) < (jint(1000000000))) goto label_1;
	}
	{
	LINE_NUMBER(738);
	jint temp0 = (jint)SM_arc_math_Mathf_round_int_int_R_int(ctx, (frame[0].i), (jint(100000000)));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(739);
	if ((frame[0].i) < (jint(1000000))) goto label_3;
	}
	{
	LINE_NUMBER(740);
	jint temp0 = (jint)SM_arc_math_Mathf_round_int_int_R_int(ctx, (frame[0].i), (jint(100000)));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(741);
	if ((frame[0].i) < (10000)) goto label_5;
	}
	{
	LINE_NUMBER(742);
	jint temp0 = (jint)SM_arc_math_Mathf_round_int_int_R_int(ctx, (frame[0].i), (1000));
	popStackFrame(ctx);
	return temp0;
	}
label_5:;
	{
	LINE_NUMBER(743);
	if ((frame[0].i) < (1000)) goto label_7;
	}
	{
	LINE_NUMBER(744);
	jint temp0 = (jint)SM_arc_math_Mathf_round_int_int_R_int(ctx, (frame[0].i), (100));
	popStackFrame(ctx);
	return temp0;
	}
label_7:;
	{
	LINE_NUMBER(745);
	if ((frame[0].i) < (100)) goto label_9;
	}
	{
	LINE_NUMBER(746);
	jint temp0 = (jint)SM_arc_math_Mathf_round_int_int_R_int(ctx, (frame[0].i), (100));
	popStackFrame(ctx);
	return temp0;
	}
label_9:;
	{
	LINE_NUMBER(747);
	if ((frame[0].i) < (10)) goto label_11;
	}
	{
	LINE_NUMBER(748);
	jint temp0 = (jint)SM_arc_math_Mathf_round_int_int_R_int(ctx, (frame[0].i), (10));
	popStackFrame(ctx);
	return temp0;
	}
label_11:;
	{
	LINE_NUMBER(750);
	popStackFrame(ctx);
	return (frame[0].i);
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_UI_lambda$showOkText$0_mindustry_ui_dialogs_BaseDialog_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$showOkText$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(661);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(662);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(663);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_UI_lambda$announce$0_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$announce$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(641);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp1 = (jfloat(temp0)) / (jfloat(2));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	((func_arc_scene_ui_layout_Table_setPosition_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setPosition_float_float_int])(ctx, sp[0].o, temp1, ((jfloat(temp2)) / (jfloat(2))), (jint(1)));
	LINE_NUMBER(642);
	((func_arc_scene_ui_layout_Table_toFront) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_toFront])(ctx, (frame[0].o));
	LINE_NUMBER(644);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp3 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp3 != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudfrag;
	if (((jint)((mindustry_ui_fragments_HudFragment *) NULL_CHECK(sp[0].o))->F_shown) != 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(645);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, (frame[0].o));
	}
label_4:;
	LINE_NUMBER(647);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_UI_lambda$showCustomConfirm$1_mindustry_ui_dialogs_BaseDialog_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$showCustomConfirm$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(618);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(619);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(620);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_UI_lambda$showCustomConfirm$0_mindustry_ui_dialogs_BaseDialog_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$showCustomConfirm$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(614);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(615);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(616);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_UI_lambda$showConfirm$2_mindustry_ui_dialogs_BaseDialog_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$showConfirm$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(600);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(601);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(602);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_UI_lambda$showConfirm$1_arc_func_Boolp_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$showConfirm$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(594);
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(595);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(597);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_UI_lambda$showConfirm$0_mindustry_ui_dialogs_BaseDialog_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$showConfirm$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(589);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(590);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(591);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_lambda$showLabel$0_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$showLabel$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(462);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_labels;
	sp[0].o = (jobject)((func_arc_struct_IntMap_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_UI_lambda$showInfoPopup$2_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$showInfoPopup$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(443);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[0].o));
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_lambda$showInfoPopup$1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$showInfoPopup$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(442);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_popups;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_core_UI_lambda$showInfoPopup$0_arc_scene_ui_layout_Table_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$showInfoPopup$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(436);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(437);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, (frame[1].o));
	LINE_NUMBER(438);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_popups;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	}
label_1:;
	{
	LINE_NUMBER(440);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudfrag;
	popStackFrame(ctx);
	return ((jint)((mindustry_ui_fragments_HudFragment *) NULL_CHECK(sp[0].o))->F_shown);
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_UI_lambda$showInfoToast$1_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$showInfoToast$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(416);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[0].o));
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_core_UI_lambda$showInfoToast$0_arc_scene_ui_layout_Table_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$showInfoToast$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(412);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(413);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudfrag;
	popStackFrame(ctx);
	return ((jint)((mindustry_ui_fragments_HudFragment *) NULL_CHECK(sp[0].o))->F_shown);
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_UI_lambda$addDescTooltip$0_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$addDescTooltip$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(389);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black8;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[0].o));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_UI_lambda$showTextInput$0(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/core/UI:lambda$showTextInput$0", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_core_UI(ctx);
	LINE_NUMBER(368);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_UI_lambda$loadAnd$0_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$loadAnd$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(299);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(300);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_hide])(ctx, sp[0].o);
	LINE_NUMBER(301);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_core_UI_lambda$init$1_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$init$1", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	{
	LINE_NUMBER(237);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_core_UI_lambda$init$0_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$init$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	{
	LINE_NUMBER(234);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_UI_lambda$loadSync$7(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$loadSync$7", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	{
	LINE_NUMBER(146);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_uiButton;
	jint temp0 = (jint)((func_arc_audio_Sound_play_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_play_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_lambda$loadSync$5_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$loadSync$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(142);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[1].o));
	LINE_NUMBER(143);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_java_lang_Runnable_35(ctx);
		auto proxy = (mindustry_core_UI_invoke_java_lang_Runnable_35 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_java_lang_Runnable_35);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_lambda$loadSync$6(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$loadSync$6", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Failed to access local storage.\nSettings will not be saved."_j))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_core_UI_lambda$loadSync$3_java_lang_String_R_arc_scene_ui_Tooltip(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$loadSync$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(136);
	clinit_arc_scene_ui_Tooltip(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Tooltip);
	{ /* InvokeDynamic */
		clinit_mindustry_core_UI_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_core_UI_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_core_UI_invoke_arc_func_Cons_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	init_arc_scene_ui_Tooltip_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_UI_lambda$loadSync$4_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$loadSync$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(136);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black8;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_core_UI_lambda$loadSync$2_R_arc_scene_Action(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$loadSync$2", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_fadeOut_float_R_arc_scene_actions_AlphaAction(ctx, (jfloat(0.1f)));
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_sequence_arc_scene_Action_R_arc_scene_actions_SequenceAction(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_core_UI_lambda$loadSync$1_R_arc_scene_Action(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$loadSync$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_alpha_float_R_arc_scene_actions_AlphaAction(ctx, (jfloat(0)));
	sp[1].o = (jobject)SM_arc_scene_actions_Actions_fadeIn_float_R_arc_scene_actions_AlphaAction(ctx, (jfloat(0.1f)));
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_sequence_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_SequenceAction(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_UI_lambda$loadSync$0_arc_graphics_g2d_Font(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$loadSync$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(120);
	((func_arc_graphics_g2d_Font_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setUseIntegerPositions_boolean])(ctx, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI_lambda$new$0_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:lambda$new$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_labels;
	((func_arc_struct_IntMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK((frame[0].o)))->F_popups;
	((func_arc_struct_ObjectMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_core_UI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI(ctx);
	{
	LINE_NUMBER(37);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	clinit_mindustry_core_UI(ctx);
	SF_mindustry_core_UI_buffer = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_core_UI;
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

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lastAnnouncement
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[48]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_core_UI[] {
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
	(void *) M_mindustry_core_UI_init,
	(void *) M_mindustry_core_UI_resize_int_int,
	(void *) M_mindustry_core_UI_update,
	(void *) M_arc_ApplicationListener_pause,
	(void *) M_arc_ApplicationListener_resume,
	(void *) M_arc_ApplicationListener_dispose,
	(void *) M_arc_ApplicationListener_exit,
	(void *) M_arc_ApplicationListener_fileDropped_arc_files_Fi,
	(void *) M_mindustry_core_UI_loadAsync,
	(void *) M_mindustry_core_UI_loadSync,
	(void *) M_arc_assets_Loadable_getName_R_java_lang_String,
	(void *) M_mindustry_core_UI_getDependencies_R_arc_struct_Seq,
	(void *) M_mindustry_core_UI_updateMargins,
	(void *) M_mindustry_core_UI_getIcon_java_lang_String_R_arc_scene_style_TextureRegionDrawable,
	(void *) M_mindustry_core_UI_getIcon_java_lang_String_java_lang_String_R_arc_scene_style_TextureRegionDrawable,
	(void *) M_mindustry_core_UI_loadAnd_java_lang_Runnable,
	(void *) M_mindustry_core_UI_loadAnd_java_lang_String_java_lang_Runnable,
	(void *) M_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_arc_func_Cons_java_lang_Runnable,
	(void *) M_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_boolean_arc_func_Cons_java_lang_Runnable,
	(void *) M_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons,
	(void *) M_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_arc_func_Cons,
	(void *) M_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_arc_func_Cons,
	(void *) M_mindustry_core_UI_showInfoFade_java_lang_String,
	(void *) M_mindustry_core_UI_showInfoFade_java_lang_String_float,
	(void *) M_mindustry_core_UI_addDescTooltip_arc_scene_Element_java_lang_String,
	(void *) M_mindustry_core_UI_showInfoToast_java_lang_String_float,
	(void *) M_mindustry_core_UI_showInfoPopup_java_lang_String_java_lang_String_float_int_int_int_int_int,
	(void *) M_mindustry_core_UI_showLabel_java_lang_String_int_float_float_float_int,
	(void *) M_mindustry_core_UI_showInfo_java_lang_String,
	(void *) M_mindustry_core_UI_showInfoOnHidden_java_lang_String_java_lang_Runnable,
	(void *) M_mindustry_core_UI_showStartupInfo_java_lang_String,
	(void *) M_mindustry_core_UI_showErrorMessage_java_lang_String,
	(void *) M_mindustry_core_UI_showException_java_lang_Throwable,
	(void *) M_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable,
	(void *) M_mindustry_core_UI_showText_java_lang_String_java_lang_String,
	(void *) M_mindustry_core_UI_showText_java_lang_String_java_lang_String_int,
	(void *) M_mindustry_core_UI_showInfoText_java_lang_String_java_lang_String,
	(void *) M_mindustry_core_UI_showSmall_java_lang_String_java_lang_String,
	(void *) M_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable,
	(void *) M_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable,
	(void *) M_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_arc_func_Boolp_java_lang_Runnable,
	(void *) M_mindustry_core_UI_showCustomConfirm_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_Runnable_java_lang_Runnable,
	(void *) M_mindustry_core_UI_hasAnnouncement_R_boolean,
	(void *) M_mindustry_core_UI_announce_java_lang_String,
	(void *) M_mindustry_core_UI_announce_java_lang_String_float,
	(void *) M_mindustry_core_UI_showOkText_java_lang_String_java_lang_String_java_lang_Runnable,
	(void *) M_mindustry_core_UI_lambda$showLabel$0_int,
	(void *) M_mindustry_core_UI_lambda$showInfoPopup$1_java_lang_String,
	(void *) M_mindustry_core_UI_lambda$showInfoPopup$0_arc_scene_ui_layout_Table_java_lang_String_R_boolean,
	(void *) M_mindustry_core_UI_lambda$loadAnd$0_java_lang_Runnable,
	(void *) M_mindustry_core_UI_lambda$loadSync$5_java_lang_Throwable,
	(void *) M_mindustry_core_UI_lambda$loadSync$6,
	(void *) M_mindustry_core_UI_lambda$new$0_mindustry_game_EventType$ResetEvent,
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
	{ "updateMargins", "()V" },
	{ "getIcon", "(Ljava/lang/String;)Larc/scene/style/TextureRegionDrawable;" },
	{ "getIcon", "(Ljava/lang/String;Ljava/lang/String;)Larc/scene/style/TextureRegionDrawable;" },
	{ "loadAnd", "(Ljava/lang/Runnable;)V" },
	{ "loadAnd", "(Ljava/lang/String;Ljava/lang/Runnable;)V" },
	{ "showTextInput", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;ZLarc/func/Cons;Ljava/lang/Runnable;)V" },
	{ "showTextInput", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;ZZLarc/func/Cons;Ljava/lang/Runnable;)V" },
	{ "showTextInput", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Larc/func/Cons;)V" },
	{ "showTextInput", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Larc/func/Cons;)V" },
	{ "showTextInput", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;ZLarc/func/Cons;)V" },
	{ "showInfoFade", "(Ljava/lang/String;)V" },
	{ "showInfoFade", "(Ljava/lang/String;F)V" },
	{ "addDescTooltip", "(Larc/scene/Element;Ljava/lang/String;)V" },
	{ "showInfoToast", "(Ljava/lang/String;F)V" },
	{ "showInfoPopup", "(Ljava/lang/String;Ljava/lang/String;FIIIII)V" },
	{ "showLabel", "(Ljava/lang/String;IFFFI)V" },
	{ "showInfo", "(Ljava/lang/String;)V" },
	{ "showInfoOnHidden", "(Ljava/lang/String;Ljava/lang/Runnable;)V" },
	{ "showStartupInfo", "(Ljava/lang/String;)V" },
	{ "showErrorMessage", "(Ljava/lang/String;)V" },
	{ "showException", "(Ljava/lang/Throwable;)V" },
	{ "showException", "(Ljava/lang/String;Ljava/lang/Throwable;)V" },
	{ "showText", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "showText", "(Ljava/lang/String;Ljava/lang/String;I)V" },
	{ "showInfoText", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "showSmall", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "showConfirm", "(Ljava/lang/String;Ljava/lang/Runnable;)V" },
	{ "showConfirm", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Runnable;)V" },
	{ "showConfirm", "(Ljava/lang/String;Ljava/lang/String;Larc/func/Boolp;Ljava/lang/Runnable;)V" },
	{ "showCustomConfirm", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Runnable;Ljava/lang/Runnable;)V" },
	{ "hasAnnouncement", "()Z" },
	{ "announce", "(Ljava/lang/String;)V" },
	{ "announce", "(Ljava/lang/String;F)V" },
	{ "showOkText", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Runnable;)V" },
	{ "lambda$showLabel$0", "(I)V" },
	{ "lambda$showInfoPopup$1", "(Ljava/lang/String;)V" },
	{ "lambda$showInfoPopup$0", "(Larc/scene/ui/layout/Table;Ljava/lang/String;)Z" },
	{ "lambda$loadAnd$0", "(Ljava/lang/Runnable;)V" },
	{ "lambda$loadSync$5", "(Ljava/lang/Throwable;)V" },
	{ "lambda$loadSync$6", "()V" },
	{ "lambda$new$0", "(Lmindustry/game/EventType$ResetEvent;)V" },
};

static jclass interfaces[] { &class_arc_ApplicationListener, &class_arc_assets_Loadable, };

static FieldMetadata fields[] {
	{ "buffer", &class_java_lang_StringBuilder, (intptr_t) &SF_mindustry_core_UI_buffer, "Ljava/lang/StringBuilder;", 26 },
	{ "billions", &class_java_lang_String, (intptr_t) &SF_mindustry_core_UI_billions, "Ljava/lang/String;", 9 },
	{ "millions", &class_java_lang_String, (intptr_t) &SF_mindustry_core_UI_millions, "Ljava/lang/String;", 9 },
	{ "thousands", &class_java_lang_String, (intptr_t) &SF_mindustry_core_UI_thousands, "Ljava/lang/String;", 9 },
	{ "packer", &class_arc_graphics_g2d_PixmapPacker, (intptr_t) &SF_mindustry_core_UI_packer, "Larc/graphics/g2d/PixmapPacker;", 9 },
	{ "menufrag", &class_mindustry_ui_fragments_MenuFragment, offsetof(mindustry_core_UI, F_menufrag), "Lmindustry/ui/fragments/MenuFragment;", 1 },
	{ "hudfrag", &class_mindustry_ui_fragments_HudFragment, offsetof(mindustry_core_UI, F_hudfrag), "Lmindustry/ui/fragments/HudFragment;", 1 },
	{ "chatfrag", &class_mindustry_ui_fragments_ChatFragment, offsetof(mindustry_core_UI, F_chatfrag), "Lmindustry/ui/fragments/ChatFragment;", 1 },
	{ "consolefrag", &class_mindustry_ui_fragments_ConsoleFragment, offsetof(mindustry_core_UI, F_consolefrag), "Lmindustry/ui/fragments/ConsoleFragment;", 1 },
	{ "minimapfrag", &class_mindustry_ui_fragments_MinimapFragment, offsetof(mindustry_core_UI, F_minimapfrag), "Lmindustry/ui/fragments/MinimapFragment;", 1 },
	{ "listfrag", &class_mindustry_ui_fragments_PlayerListFragment, offsetof(mindustry_core_UI, F_listfrag), "Lmindustry/ui/fragments/PlayerListFragment;", 1 },
	{ "loadfrag", &class_mindustry_ui_fragments_LoadingFragment, offsetof(mindustry_core_UI, F_loadfrag), "Lmindustry/ui/fragments/LoadingFragment;", 1 },
	{ "hints", &class_mindustry_ui_fragments_HintsFragment, offsetof(mindustry_core_UI, F_hints), "Lmindustry/ui/fragments/HintsFragment;", 1 },
	{ "perffrag", &class_mindustry_ui_fragments_PerformanceFragment, offsetof(mindustry_core_UI, F_perffrag), "Lmindustry/ui/fragments/PerformanceFragment;", 1 },
	{ "menuGroup", &class_arc_scene_ui_layout_WidgetGroup, offsetof(mindustry_core_UI, F_menuGroup), "Larc/scene/ui/layout/WidgetGroup;", 1 },
	{ "hudGroup", &class_arc_scene_ui_layout_WidgetGroup, offsetof(mindustry_core_UI, F_hudGroup), "Larc/scene/ui/layout/WidgetGroup;", 1 },
	{ "about", &class_mindustry_ui_dialogs_AboutDialog, offsetof(mindustry_core_UI, F_about), "Lmindustry/ui/dialogs/AboutDialog;", 1 },
	{ "restart", &class_mindustry_ui_dialogs_GameOverDialog, offsetof(mindustry_core_UI, F_restart), "Lmindustry/ui/dialogs/GameOverDialog;", 1 },
	{ "custom", &class_mindustry_ui_dialogs_CustomGameDialog, offsetof(mindustry_core_UI, F_custom), "Lmindustry/ui/dialogs/CustomGameDialog;", 1 },
	{ "maps", &class_mindustry_ui_dialogs_EditorMapsDialog, offsetof(mindustry_core_UI, F_maps), "Lmindustry/ui/dialogs/EditorMapsDialog;", 1 },
	{ "load", &class_mindustry_ui_dialogs_LoadDialog, offsetof(mindustry_core_UI, F_load), "Lmindustry/ui/dialogs/LoadDialog;", 1 },
	{ "discord", &class_mindustry_ui_dialogs_DiscordDialog, offsetof(mindustry_core_UI, F_discord), "Lmindustry/ui/dialogs/DiscordDialog;", 1 },
	{ "join", &class_mindustry_ui_dialogs_JoinDialog, offsetof(mindustry_core_UI, F_join), "Lmindustry/ui/dialogs/JoinDialog;", 1 },
	{ "host", &class_mindustry_ui_dialogs_HostDialog, offsetof(mindustry_core_UI, F_host), "Lmindustry/ui/dialogs/HostDialog;", 1 },
	{ "paused", &class_mindustry_ui_dialogs_PausedDialog, offsetof(mindustry_core_UI, F_paused), "Lmindustry/ui/dialogs/PausedDialog;", 1 },
	{ "settings", &class_mindustry_ui_dialogs_SettingsMenuDialog, offsetof(mindustry_core_UI, F_settings), "Lmindustry/ui/dialogs/SettingsMenuDialog;", 1 },
	{ "controls", &class_mindustry_ui_dialogs_KeybindDialog, offsetof(mindustry_core_UI, F_controls), "Lmindustry/ui/dialogs/KeybindDialog;", 1 },
	{ "editor", &class_mindustry_editor_MapEditorDialog, offsetof(mindustry_core_UI, F_editor), "Lmindustry/editor/MapEditorDialog;", 1 },
	{ "language", &class_mindustry_ui_dialogs_LanguageDialog, offsetof(mindustry_core_UI, F_language), "Lmindustry/ui/dialogs/LanguageDialog;", 1 },
	{ "bans", &class_mindustry_ui_dialogs_BansDialog, offsetof(mindustry_core_UI, F_bans), "Lmindustry/ui/dialogs/BansDialog;", 1 },
	{ "admins", &class_mindustry_ui_dialogs_AdminsDialog, offsetof(mindustry_core_UI, F_admins), "Lmindustry/ui/dialogs/AdminsDialog;", 1 },
	{ "traces", &class_mindustry_ui_dialogs_TraceDialog, offsetof(mindustry_core_UI, F_traces), "Lmindustry/ui/dialogs/TraceDialog;", 1 },
	{ "database", &class_mindustry_ui_dialogs_DatabaseDialog, offsetof(mindustry_core_UI, F_database), "Lmindustry/ui/dialogs/DatabaseDialog;", 1 },
	{ "content", &class_mindustry_ui_dialogs_ContentInfoDialog, offsetof(mindustry_core_UI, F_content), "Lmindustry/ui/dialogs/ContentInfoDialog;", 1 },
	{ "planet", &class_mindustry_ui_dialogs_PlanetDialog, offsetof(mindustry_core_UI, F_planet), "Lmindustry/ui/dialogs/PlanetDialog;", 1 },
	{ "research", &class_mindustry_ui_dialogs_ResearchDialog, offsetof(mindustry_core_UI, F_research), "Lmindustry/ui/dialogs/ResearchDialog;", 1 },
	{ "schematics", &class_mindustry_ui_dialogs_SchematicsDialog, offsetof(mindustry_core_UI, F_schematics), "Lmindustry/ui/dialogs/SchematicsDialog;", 1 },
	{ "mods", &class_mindustry_ui_dialogs_ModsDialog, offsetof(mindustry_core_UI, F_mods), "Lmindustry/ui/dialogs/ModsDialog;", 1 },
	{ "picker", &class_mindustry_ui_dialogs_ColorPicker, offsetof(mindustry_core_UI, F_picker), "Lmindustry/ui/dialogs/ColorPicker;", 1 },
	{ "effects", &class_mindustry_ui_dialogs_EffectsDialog, offsetof(mindustry_core_UI, F_effects), "Lmindustry/ui/dialogs/EffectsDialog;", 1 },
	{ "logic", &class_mindustry_logic_LogicDialog, offsetof(mindustry_core_UI, F_logic), "Lmindustry/logic/LogicDialog;", 1 },
	{ "fullText", &class_mindustry_ui_dialogs_FullTextDialog, offsetof(mindustry_core_UI, F_fullText), "Lmindustry/ui/dialogs/FullTextDialog;", 1 },
	{ "campaignComplete", &class_mindustry_ui_dialogs_CampaignCompleteDialog, offsetof(mindustry_core_UI, F_campaignComplete), "Lmindustry/ui/dialogs/CampaignCompleteDialog;", 1 },
	{ "campaignRules", &class_mindustry_ui_dialogs_CampaignRulesDialog, offsetof(mindustry_core_UI, F_campaignRules), "Lmindustry/ui/dialogs/CampaignRulesDialog;", 1 },
	{ "drillCursor", &class_arc_Graphics$Cursor, offsetof(mindustry_core_UI, F_drillCursor), "Larc/Graphics$Cursor;", 1 },
	{ "unloadCursor", &class_arc_Graphics$Cursor, offsetof(mindustry_core_UI, F_unloadCursor), "Larc/Graphics$Cursor;", 1 },
	{ "targetCursor", &class_arc_Graphics$Cursor, offsetof(mindustry_core_UI, F_targetCursor), "Larc/Graphics$Cursor;", 1 },
	{ "repairCursor", &class_arc_Graphics$Cursor, offsetof(mindustry_core_UI, F_repairCursor), "Larc/Graphics$Cursor;", 1 },
	{ "lastAnnouncement", &class_arc_scene_Element, offsetof(mindustry_core_UI, F_lastAnnouncement), "Larc/scene/Element;", 2 },
	{ "popups", &class_arc_struct_ObjectMap, offsetof(mindustry_core_UI, F_popups), "Larc/struct/ObjectMap;", 18 },
	{ "labels", &class_arc_struct_IntMap, offsetof(mindustry_core_UI, F_labels), "Larc/struct/IntMap;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_core_UI, 0, "()V", 1 },
	{ "loadColors", (intptr_t) SM_mindustry_core_UI_loadColors, 0, "()V", 9 },
	{ "loadAsync", (intptr_t) M_mindustry_core_UI_loadAsync, VTABLE_mindustry_core_UI_loadAsync, "()V", 1 },
	{ "loadSync", (intptr_t) M_mindustry_core_UI_loadSync, VTABLE_mindustry_core_UI_loadSync, "()V", 1 },
	{ "getDependencies", (intptr_t) M_mindustry_core_UI_getDependencies_R_arc_struct_Seq, VTABLE_mindustry_core_UI_getDependencies_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "update", (intptr_t) M_mindustry_core_UI_update, VTABLE_mindustry_core_UI_update, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_core_UI_init, VTABLE_mindustry_core_UI_init, "()V", 1 },
	{ "updateMargins", (intptr_t) M_mindustry_core_UI_updateMargins, VTABLE_mindustry_core_UI_updateMargins, "()V", 1 },
	{ "resize", (intptr_t) M_mindustry_core_UI_resize_int_int, VTABLE_mindustry_core_UI_resize_int_int, "(II)V", 1 },
	{ "getIcon", (intptr_t) M_mindustry_core_UI_getIcon_java_lang_String_R_arc_scene_style_TextureRegionDrawable, VTABLE_mindustry_core_UI_getIcon_java_lang_String_R_arc_scene_style_TextureRegionDrawable, "(Ljava/lang/String;)Larc/scene/style/TextureRegionDrawable;", 1 },
	{ "getIcon", (intptr_t) M_mindustry_core_UI_getIcon_java_lang_String_java_lang_String_R_arc_scene_style_TextureRegionDrawable, VTABLE_mindustry_core_UI_getIcon_java_lang_String_java_lang_String_R_arc_scene_style_TextureRegionDrawable, "(Ljava/lang/String;Ljava/lang/String;)Larc/scene/style/TextureRegionDrawable;", 1 },
	{ "loadAnd", (intptr_t) M_mindustry_core_UI_loadAnd_java_lang_Runnable, VTABLE_mindustry_core_UI_loadAnd_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
	{ "loadAnd", (intptr_t) M_mindustry_core_UI_loadAnd_java_lang_String_java_lang_Runnable, VTABLE_mindustry_core_UI_loadAnd_java_lang_String_java_lang_Runnable, "(Ljava/lang/String;Ljava/lang/Runnable;)V", 1 },
	{ "showTextInput", (intptr_t) M_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_arc_func_Cons_java_lang_Runnable, VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_arc_func_Cons_java_lang_Runnable, "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;ZLarc/func/Cons;Ljava/lang/Runnable;)V", 1 },
	{ "showTextInput", (intptr_t) M_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_boolean_arc_func_Cons_java_lang_Runnable, VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_boolean_arc_func_Cons_java_lang_Runnable, "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;ZZLarc/func/Cons;Ljava/lang/Runnable;)V", 1 },
	{ "showTextInput", (intptr_t) M_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons, VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Larc/func/Cons;)V", 1 },
	{ "showTextInput", (intptr_t) M_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_arc_func_Cons, VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_arc_func_Cons, "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Larc/func/Cons;)V", 1 },
	{ "showTextInput", (intptr_t) M_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_arc_func_Cons, VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_arc_func_Cons, "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;ZLarc/func/Cons;)V", 1 },
	{ "showInfoFade", (intptr_t) M_mindustry_core_UI_showInfoFade_java_lang_String, VTABLE_mindustry_core_UI_showInfoFade_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "showInfoFade", (intptr_t) M_mindustry_core_UI_showInfoFade_java_lang_String_float, VTABLE_mindustry_core_UI_showInfoFade_java_lang_String_float, "(Ljava/lang/String;F)V", 1 },
	{ "addDescTooltip", (intptr_t) M_mindustry_core_UI_addDescTooltip_arc_scene_Element_java_lang_String, VTABLE_mindustry_core_UI_addDescTooltip_arc_scene_Element_java_lang_String, "(Larc/scene/Element;Ljava/lang/String;)V", 1 },
	{ "showInfoToast", (intptr_t) M_mindustry_core_UI_showInfoToast_java_lang_String_float, VTABLE_mindustry_core_UI_showInfoToast_java_lang_String_float, "(Ljava/lang/String;F)V", 1 },
	{ "showInfoPopup", (intptr_t) M_mindustry_core_UI_showInfoPopup_java_lang_String_java_lang_String_float_int_int_int_int_int, VTABLE_mindustry_core_UI_showInfoPopup_java_lang_String_java_lang_String_float_int_int_int_int_int, "(Ljava/lang/String;Ljava/lang/String;FIIIII)V", 1 },
	{ "showLabel", (intptr_t) M_mindustry_core_UI_showLabel_java_lang_String_int_float_float_float_int, VTABLE_mindustry_core_UI_showLabel_java_lang_String_int_float_float_float_int, "(Ljava/lang/String;IFFFI)V", 1 },
	{ "showInfo", (intptr_t) M_mindustry_core_UI_showInfo_java_lang_String, VTABLE_mindustry_core_UI_showInfo_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "showInfoOnHidden", (intptr_t) M_mindustry_core_UI_showInfoOnHidden_java_lang_String_java_lang_Runnable, VTABLE_mindustry_core_UI_showInfoOnHidden_java_lang_String_java_lang_Runnable, "(Ljava/lang/String;Ljava/lang/Runnable;)V", 1 },
	{ "showStartupInfo", (intptr_t) M_mindustry_core_UI_showStartupInfo_java_lang_String, VTABLE_mindustry_core_UI_showStartupInfo_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "showErrorMessage", (intptr_t) M_mindustry_core_UI_showErrorMessage_java_lang_String, VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "showException", (intptr_t) M_mindustry_core_UI_showException_java_lang_Throwable, VTABLE_mindustry_core_UI_showException_java_lang_Throwable, "(Ljava/lang/Throwable;)V", 1 },
	{ "showException", (intptr_t) M_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable, VTABLE_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable, "(Ljava/lang/String;Ljava/lang/Throwable;)V", 1 },
	{ "showText", (intptr_t) M_mindustry_core_UI_showText_java_lang_String_java_lang_String, VTABLE_mindustry_core_UI_showText_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "showText", (intptr_t) M_mindustry_core_UI_showText_java_lang_String_java_lang_String_int, VTABLE_mindustry_core_UI_showText_java_lang_String_java_lang_String_int, "(Ljava/lang/String;Ljava/lang/String;I)V", 1 },
	{ "showInfoText", (intptr_t) M_mindustry_core_UI_showInfoText_java_lang_String_java_lang_String, VTABLE_mindustry_core_UI_showInfoText_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "showSmall", (intptr_t) M_mindustry_core_UI_showSmall_java_lang_String_java_lang_String, VTABLE_mindustry_core_UI_showSmall_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "showConfirm", (intptr_t) M_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable, VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable, "(Ljava/lang/String;Ljava/lang/Runnable;)V", 1 },
	{ "showConfirm", (intptr_t) M_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable, VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Runnable;)V", 1 },
	{ "showConfirm", (intptr_t) M_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_arc_func_Boolp_java_lang_Runnable, VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_arc_func_Boolp_java_lang_Runnable, "(Ljava/lang/String;Ljava/lang/String;Larc/func/Boolp;Ljava/lang/Runnable;)V", 1 },
	{ "showCustomConfirm", (intptr_t) M_mindustry_core_UI_showCustomConfirm_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_Runnable_java_lang_Runnable, VTABLE_mindustry_core_UI_showCustomConfirm_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_Runnable_java_lang_Runnable, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Runnable;Ljava/lang/Runnable;)V", 1 },
	{ "hasAnnouncement", (intptr_t) M_mindustry_core_UI_hasAnnouncement_R_boolean, VTABLE_mindustry_core_UI_hasAnnouncement_R_boolean, "()Z", 1 },
	{ "announce", (intptr_t) M_mindustry_core_UI_announce_java_lang_String, VTABLE_mindustry_core_UI_announce_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "announce", (intptr_t) M_mindustry_core_UI_announce_java_lang_String_float, VTABLE_mindustry_core_UI_announce_java_lang_String_float, "(Ljava/lang/String;F)V", 1 },
	{ "showOkText", (intptr_t) M_mindustry_core_UI_showOkText_java_lang_String_java_lang_String_java_lang_Runnable, VTABLE_mindustry_core_UI_showOkText_java_lang_String_java_lang_String_java_lang_Runnable, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Runnable;)V", 1 },
	{ "formatIcons", (intptr_t) SM_mindustry_core_UI_formatIcons_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "formatTime", (intptr_t) SM_mindustry_core_UI_formatTime_float_R_java_lang_String, 0, "(F)Ljava/lang/String;", 9 },
	{ "formatAmount", (intptr_t) SM_mindustry_core_UI_formatAmount_long_R_java_lang_String, 0, "(J)Ljava/lang/String;", 9 },
	{ "roundAmount", (intptr_t) SM_mindustry_core_UI_roundAmount_int_R_int, 0, "(I)I", 9 },
	{ "lambda$showOkText$0", (intptr_t) SM_mindustry_core_UI_lambda$showOkText$0_mindustry_ui_dialogs_BaseDialog_java_lang_Runnable, 0, "(Lmindustry/ui/dialogs/BaseDialog;Ljava/lang/Runnable;)V", 4106 },
	{ "lambda$announce$0", (intptr_t) SM_mindustry_core_UI_lambda$announce$0_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$showCustomConfirm$1", (intptr_t) SM_mindustry_core_UI_lambda$showCustomConfirm$1_mindustry_ui_dialogs_BaseDialog_java_lang_Runnable, 0, "(Lmindustry/ui/dialogs/BaseDialog;Ljava/lang/Runnable;)V", 4106 },
	{ "lambda$showCustomConfirm$0", (intptr_t) SM_mindustry_core_UI_lambda$showCustomConfirm$0_mindustry_ui_dialogs_BaseDialog_java_lang_Runnable, 0, "(Lmindustry/ui/dialogs/BaseDialog;Ljava/lang/Runnable;)V", 4106 },
	{ "lambda$showConfirm$2", (intptr_t) SM_mindustry_core_UI_lambda$showConfirm$2_mindustry_ui_dialogs_BaseDialog_java_lang_Runnable, 0, "(Lmindustry/ui/dialogs/BaseDialog;Ljava/lang/Runnable;)V", 4106 },
	{ "lambda$showConfirm$1", (intptr_t) SM_mindustry_core_UI_lambda$showConfirm$1_arc_func_Boolp_mindustry_ui_dialogs_BaseDialog, 0, "(Larc/func/Boolp;Lmindustry/ui/dialogs/BaseDialog;)V", 4106 },
	{ "lambda$showConfirm$0", (intptr_t) SM_mindustry_core_UI_lambda$showConfirm$0_mindustry_ui_dialogs_BaseDialog_java_lang_Runnable, 0, "(Lmindustry/ui/dialogs/BaseDialog;Ljava/lang/Runnable;)V", 4106 },
	{ "lambda$showLabel$0", (intptr_t) M_mindustry_core_UI_lambda$showLabel$0_int, VTABLE_mindustry_core_UI_lambda$showLabel$0_int, "(I)V", 4098 },
	{ "lambda$showInfoPopup$2", (intptr_t) SM_mindustry_core_UI_lambda$showInfoPopup$2_java_lang_String_arc_scene_ui_layout_Table, 0, "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$showInfoPopup$1", (intptr_t) M_mindustry_core_UI_lambda$showInfoPopup$1_java_lang_String, VTABLE_mindustry_core_UI_lambda$showInfoPopup$1_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$showInfoPopup$0", (intptr_t) M_mindustry_core_UI_lambda$showInfoPopup$0_arc_scene_ui_layout_Table_java_lang_String_R_boolean, VTABLE_mindustry_core_UI_lambda$showInfoPopup$0_arc_scene_ui_layout_Table_java_lang_String_R_boolean, "(Larc/scene/ui/layout/Table;Ljava/lang/String;)Z", 4098 },
	{ "lambda$showInfoToast$1", (intptr_t) SM_mindustry_core_UI_lambda$showInfoToast$1_java_lang_String_arc_scene_ui_layout_Table, 0, "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$showInfoToast$0", (intptr_t) SM_mindustry_core_UI_lambda$showInfoToast$0_arc_scene_ui_layout_Table_R_boolean, 0, "(Larc/scene/ui/layout/Table;)Z", 4106 },
	{ "lambda$addDescTooltip$0", (intptr_t) SM_mindustry_core_UI_lambda$addDescTooltip$0_java_lang_String_arc_scene_ui_layout_Table, 0, "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$showTextInput$0", (intptr_t) SM_mindustry_core_UI_lambda$showTextInput$0, 0, "()V", 4106 },
	{ "lambda$loadAnd$0", (intptr_t) M_mindustry_core_UI_lambda$loadAnd$0_java_lang_Runnable, VTABLE_mindustry_core_UI_lambda$loadAnd$0_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$init$1", (intptr_t) SM_mindustry_core_UI_lambda$init$1_R_boolean, 0, "()Z", 4106 },
	{ "lambda$init$0", (intptr_t) SM_mindustry_core_UI_lambda$init$0_R_boolean, 0, "()Z", 4106 },
	{ "lambda$loadSync$7", (intptr_t) SM_mindustry_core_UI_lambda$loadSync$7, 0, "()V", 4106 },
	{ "lambda$loadSync$5", (intptr_t) M_mindustry_core_UI_lambda$loadSync$5_java_lang_Throwable, VTABLE_mindustry_core_UI_lambda$loadSync$5_java_lang_Throwable, "(Ljava/lang/Throwable;)V", 4098 },
	{ "lambda$loadSync$6", (intptr_t) M_mindustry_core_UI_lambda$loadSync$6, VTABLE_mindustry_core_UI_lambda$loadSync$6, "()V", 4098 },
	{ "lambda$loadSync$3", (intptr_t) SM_mindustry_core_UI_lambda$loadSync$3_java_lang_String_R_arc_scene_ui_Tooltip, 0, "(Ljava/lang/String;)Larc/scene/ui/Tooltip;", 4106 },
	{ "lambda$loadSync$4", (intptr_t) SM_mindustry_core_UI_lambda$loadSync$4_java_lang_String_arc_scene_ui_layout_Table, 0, "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$loadSync$2", (intptr_t) SM_mindustry_core_UI_lambda$loadSync$2_R_arc_scene_Action, 0, "()Larc/scene/Action;", 4106 },
	{ "lambda$loadSync$1", (intptr_t) SM_mindustry_core_UI_lambda$loadSync$1_R_arc_scene_Action, 0, "()Larc/scene/Action;", 4106 },
	{ "lambda$loadSync$0", (intptr_t) SM_mindustry_core_UI_lambda$loadSync$0_arc_graphics_g2d_Font, 0, "(Larc/graphics/g2d/Font;)V", 4106 },
	{ "lambda$new$0", (intptr_t) M_mindustry_core_UI_lambda$new$0_mindustry_game_EventType$ResetEvent, VTABLE_mindustry_core_UI_lambda$new$0_mindustry_game_EventType$ResetEvent, "(Lmindustry/game/EventType$ResetEvent;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_core_UI, 0, "()V", 8 },
};

Class class_mindustry_core_UI{
		.nativeName = (intptr_t) "mindustry/core/UI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_core_UI),
		.classVtable = (intptr_t) vtable_mindustry_core_UI,
		.staticInitializer = (intptr_t) clinit_mindustry_core_UI,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_core_UI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 51,
		.nativeFields = (intptr_t) fields,
		.methodCount = 74,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 64,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_core_UI = registerClass(&class_mindustry_core_UI);

}
