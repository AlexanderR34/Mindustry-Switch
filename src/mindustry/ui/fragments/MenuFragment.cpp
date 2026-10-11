#include "mindustry/ui/fragments/MenuFragment.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_arc_func_Func_1.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/func/Boolp.h"
#include "mindustry/core/Version.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/scene/ui/ScrollPane_ScrollPaneStyle.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_arc_scene_ui_layout_Table_DrawRect_3.h"
#include "mindustry/mod/Mods.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_arc_scene_ui_layout_Table_DrawRect_4.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_arc_scene_ui_layout_Table_DrawRect_5.h"
#include "arc/Settings.h"
#include "arc/func/Boolc.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_39.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "arc/math/Interp.h"
#include "arc/Graphics.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/ui/dialogs/JoinDialog.h"
#include "mindustry/ui/fragments/MenuFragment.h"
#include "mindustry/ui/dialogs/PlanetDialog.h"
#include "mindustry/ui/dialogs/CustomGameDialog.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_arc_func_Boolp_7.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_arc_func_Boolp_8.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_arc_func_Boolp_5.h"
#include "arc/scene/actions/RunnableAction.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_arc_func_Boolp_6.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/ui/fragments/ConsoleFragment.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_arc_func_Boolp_9.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/ui/dialogs/LoadDialog.h"
#include "mindustry/ui/dialogs/DatabaseDialog.h"
#include "mindustry/ui/fragments/LoadingFragment.h"
#include "mindustry/ui/fragments/MenuFragment_2.h"
#include "arc/func/Cons.h"
#include "mindustry/net/BeControl.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/ui/layout/Table_DrawRect.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/core/Platform.h"
#include "mindustry/ui/dialogs/EditorMapsDialog.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/ui/Fonts.h"
#include "arc/scene/ui/ScrollPane.h"
#include "arc/scene/actions/AlphaAction.h"
#include "mindustry/Vars.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_arc_func_Boolc_1.h"
#include "mindustry/ui/dialogs/ModsDialog.h"
#include "arc/Events.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog.h"
#include "mindustry/ui/dialogs/AboutDialog.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_71.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_72.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_70.h"
#include "arc/scene/ui/Button.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_77.h"
#include "arc/scene/event/Touchable.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_75.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_76.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_73.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_74.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/TextButton.h"
#include "mindustry/ui/dialogs/DiscordDialog.h"
#include "mindustry/ui/MobileButton.h"
#include "arc/func/Func.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_arc_func_Cons_18.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_arc_func_Cons_17.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_arc_func_Cons_19.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_60.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_61.h"
#include "arc/scene/ui/Label.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_68.h"
#include "mindustry/ui/fragments/MenuFragment_1.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_69.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_66.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_67.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_64.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_65.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_62.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_63.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_arc_func_Cons_21.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_arc_func_Cons_20.h"
#include "mindustry/ui/fragments/MenuFragment_MenuButton.h"
#include "mindustry/graphics/MenuRenderer.h"
#include "mindustry/editor/MapEditorDialog.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_50.h"
#include "arc/scene/Action.h"
#include "arc/Application.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_57.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_58.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_55.h"
#include "java/lang/String.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_56.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_53.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_54.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_51.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_52.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_arc_func_Cons_14.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_arc_func_Cons_13.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_arc_func_Cons_16.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_arc_func_Cons_15.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_arc_func_Cons_12.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_59.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_arc_func_Cons_11.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/core/UI.h"
#include "arc/scene/actions/Actions.h"
#include "java/lang/CharSequence.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_46.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_47.h"
#include "arc/scene/Element.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_44.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_45.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_42.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_43.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_40.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_41.h"
#include "mindustry/ui/dialogs/SchematicsDialog.h"
#include "mindustry/game/EventType_ResizeEvent.h"
#include "java/util/Objects.h"
#include "arc/struct/SnapshotSeq.h"
#include "java/lang/Class.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_48.h"
#include "mindustry/ui/fragments/MenuFragment_invoke_java_lang_Runnable_49.h"

extern "C" {


void mark_mindustry_ui_fragments_MenuFragment(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_fragments_MenuFragment *) object;
	if (self->F_container)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_container)->clazz)->markFunction)((jobject) self->F_container, mark, depth + 1);
	if (self->F_submenu)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_submenu)->clazz)->markFunction)((jobject) self->F_submenu, mark, depth + 1);
	if (self->F_currentMenu)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentMenu)->clazz)->markFunction)((jobject) self->F_currentMenu, mark, depth + 1);
	if (self->F_renderer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_renderer)->clazz)->markFunction)((jobject) self->F_renderer, mark, depth + 1);
	if (self->F_customButtons)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_customButtons)->clazz)->markFunction)((jobject) self->F_customButtons, mark, depth + 1);
	if (self->F_desktopButtons)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_desktopButtons)->clazz)->markFunction)((jobject) self->F_desktopButtons, mark, depth + 1);
}

void clinit_mindustry_ui_fragments_MenuFragment(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_fragments_MenuFragment(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MenuFragment(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(26);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_fragments_MenuFragment *) NULL_CHECK(sp[0].o))->F_customButtons = (jref) sp[1].o;
	LINE_NUMBER(31);
	((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_desktopButtons = (jref) (jobject(nullptr));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_build_arc_scene_Group(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:build", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_MenuRenderer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_MenuRenderer);
	init_mindustry_graphics_MenuRenderer(ctx, sp[1].o);
	((mindustry_ui_fragments_MenuFragment *) NULL_CHECK(sp[0].o))->F_renderer = (jref) sp[1].o;
	LINE_NUMBER(36);
	clinit_arc_scene_ui_layout_WidgetGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_WidgetGroup);
	init_arc_scene_ui_layout_WidgetGroup(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(37);
	((func_arc_scene_Group_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_Group_setFillParent_boolean])(ctx, (frame[2].o), (jint(1)));
	LINE_NUMBER(38);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Boolp_5(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_arc_func_Boolp_5 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Boolp_5);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_Group_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(39);
	((func_arc_scene_Group_addChild_arc_scene_Element) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Group_addChild_arc_scene_Element])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(41);
	frame[1].o = (frame[2].o);
	LINE_NUMBER(43);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_arc_scene_ui_layout_Table$DrawRect_3(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_arc_scene_ui_layout_Table$DrawRect_3 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_arc_scene_ui_layout_Table$DrawRect_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(45);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Group_fill_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(63);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Group_fill_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(68);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_10;
	}
	{
	LINE_NUMBER(70);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_arc_scene_ui_layout_Table$DrawRect_4(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_arc_scene_ui_layout_Table$DrawRect_4 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_arc_scene_ui_layout_Table$DrawRect_4);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(88);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Group_fill_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(98);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_becontrol;
	jint temp0 = (jint)((func_mindustry_net_BeControl_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_BeControl_active_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_14);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Group_fill_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
label_13:;
	{
	LINE_NUMBER(112);
	if ((clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build) != (jint(-1))) goto label_15;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[#fc8140aa]"_j));
	goto label_16;
label_15:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[#ffffffba]"_j));
label_16:;
	{
	sp -= 1;
	sp[1].o = (jobject)SM_mindustry_core_Version_combined_R_java_lang_String(ctx);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(113);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_arc_scene_ui_layout_Table$DrawRect_5(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_arc_scene_ui_layout_Table$DrawRect_5 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_arc_scene_ui_layout_Table$DrawRect_5);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_buildMobile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:buildMobile", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(136);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"buttons"_j)));
	LINE_NUMBER(137);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp1 = jfloat(temp0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	((func_arc_scene_ui_layout_Table_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setSize_float_float])(ctx, sp[0].o, temp1, (jfloat(temp2)));
	LINE_NUMBER(139);
	frame[1].f = (jfloat(120.0f));
	LINE_NUMBER(140);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[1].f));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(143);
	clinit_mindustry_ui_MobileButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_MobileButton);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_play;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@campaign"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_39(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_39 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_39);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_MobileButton_arc_scene_style_Drawable_java_lang_String_java_lang_Runnable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(144);
	clinit_mindustry_ui_MobileButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_MobileButton);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_rightOpenOut;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@customgame"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_40(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_40 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_40);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_MobileButton_arc_scene_style_Drawable_java_lang_String_java_lang_Runnable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(145);
	clinit_mindustry_ui_MobileButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_MobileButton);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_download;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@loadgame"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_41(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_41 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_41);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_MobileButton_arc_scene_style_Drawable_java_lang_String_java_lang_Runnable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(146);
	clinit_mindustry_ui_MobileButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_MobileButton);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_add;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@joingame"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_42(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_42 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_42);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_MobileButton_arc_scene_style_Drawable_java_lang_String_java_lang_Runnable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(147);
	clinit_mindustry_ui_MobileButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_MobileButton);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_terrain;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@editor"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_43(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_43 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_43);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_MobileButton_arc_scene_style_Drawable_java_lang_String_java_lang_Runnable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(148);
	clinit_mindustry_ui_MobileButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_MobileButton);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_settings;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@settings"_j));
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_ui;
	sp[3].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[3].o))->F_settings;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_44(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_44 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_44);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_MobileButton_arc_scene_style_Drawable_java_lang_String_java_lang_Runnable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(149);
	clinit_mindustry_ui_MobileButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_MobileButton);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_book;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@mods"_j));
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_ui;
	sp[3].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[3].o))->F_mods;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_45(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_45 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_45);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_MobileButton_arc_scene_style_Drawable_java_lang_String_java_lang_Runnable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(150);
	clinit_mindustry_ui_MobileButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_MobileButton);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_exit;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@quit"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_46(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_46 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_46);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_MobileButton_arc_scene_style_Drawable_java_lang_String_java_lang_Runnable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(151);
	clinit_mindustry_ui_MobileButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_MobileButton);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_info;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@about.button"_j));
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_ui;
	sp[3].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[3].o))->F_about;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_47(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_47 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_47);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_MobileButton_arc_scene_style_Drawable_java_lang_String_java_lang_Runnable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_customButtons;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Func_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(155);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp3 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
	if (temp3 != 0) goto label_16;
	}
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(60.0f)));
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(158);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(159);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(162);
	frame[12].i = (jint(1));
	}
label_23:;
	{
	if ((frame[12].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[11].o)))->F_size)) goto label_24;
	}
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[11].o), (frame[12].i));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_ui_MobileButton, sp[1].o)));
	LINE_NUMBER(162);
	INST_IINC(12, 2);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(167);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(171);
	frame[12].i = (jint(0));
	}
label_31:;
	{
	if ((frame[12].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[11].o)))->F_size)) goto label_32;
	}
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[11].o), (frame[12].i));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_ui_MobileButton, sp[1].o)));
	LINE_NUMBER(171);
	INST_IINC(12, 2);
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp += 1;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_ios) == 0) goto label_35;
	}
	INST_ALOAD(10);
	goto label_36;
label_35:;
	INST_ALOAD(9);
label_36:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	goto label_37;
	}
label_16:;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(177);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(179);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(180);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(182);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(184);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(185);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(186);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(188);
	frame[12].i = (jint(0));
	}
label_49:;
	{
	if ((frame[12].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[11].o)))->F_size)) goto label_50;
	}
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[11].o), (frame[12].i));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_ui_MobileButton, sp[1].o)));
	LINE_NUMBER(190);
	if (((frame[12].i) % (jint(2))) != 0) goto label_53;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	}
label_53:;
	{
	LINE_NUMBER(188);
	INST_IINC(12, 1);
	goto label_49;
	}
label_50:;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp += 1;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_ios) == 0) goto label_54;
	}
	INST_ALOAD(10);
	goto label_55;
label_54:;
	INST_ALOAD(9);
label_55:;
	POP_N(2); // Pop method args
	sp->o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp++;
	INST_POP();
label_37:;
	LINE_NUMBER(194);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_buildDesktop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:buildDesktop", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(198);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp1 = jfloat(temp0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	((func_arc_scene_ui_layout_Table_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setSize_float_float])(ctx, sp[0].o, temp1, (jfloat(temp2)));
	LINE_NUMBER(200);
	frame[1].f = (jfloat(230.0f));
	LINE_NUMBER(201);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_black6;
	frame[2].o = sp[0].o;
	LINE_NUMBER(203);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(204);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp3 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((jfloat(temp3)) / (jfloat(10.0f))));
	LINE_NUMBER(205);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[1].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_15);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp4 = frame[1].f;
	LINE_NUMBER(231);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp4);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(233);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container;
	sp[1].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_16);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp5 = frame[1].f;
	LINE_NUMBER(241);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp5);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:checkPlay", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(245);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	jint temp0 = (jint)((func_mindustry_mod_Mods_hasContentErrors_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_hasContentErrors_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(246);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[1].o)))(ctx, (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(248);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@mod.noerrorplay"_j))));
	}
label_3:;
	LINE_NUMBER(250);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_fadeInMenu(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:fadeInMenu", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_submenu;
	((func_arc_scene_ui_layout_Table_clearActions) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearActions])(ctx, sp[0].o);
	LINE_NUMBER(254);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_submenu;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(1)));
	jint temp0 = jint(0);
	jfloat temp1 = jfloat(1);
	jfloat temp2 = jfloat(0.15f);
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_fade;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_alpha_float_float_arc_math_Interp_R_arc_scene_actions_AlphaAction(ctx, temp1, temp2, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	((func_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_fadeOutMenu(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:fadeOutMenu", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_submenu;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	LINE_NUMBER(260);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_submenu;
	((func_arc_scene_ui_layout_Table_clearActions) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearActions])(ctx, sp[0].o);
	LINE_NUMBER(264);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_submenu;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(3)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_alpha_float_R_arc_scene_actions_AlphaAction(ctx, (jfloat(1)));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	jfloat temp2 = jfloat(0);
	jfloat temp3 = jfloat(0.2f);
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_fade;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_alpha_float_float_arc_math_Interp_R_arc_scene_actions_AlphaAction(ctx, temp2, temp3, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp4 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_48(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_48 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_48);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_run_java_lang_Runnable_R_arc_scene_actions_RunnableAction(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	((func_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_buttons_arc_scene_ui_layout_Table_Array1_mindustry_ui_fragments_MenuFragment$MenuButton(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:buttons", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(268);
	frame[3].o = (frame[2].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_1:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_2;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(269);
	if ((frame[6].o) != nullptr) goto label_4;
	}
	goto label_5;
label_4:;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)createArray(ctx, &class_arc_scene_ui_Button, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[7].o = sp[0].o;
	LINE_NUMBER(271);
	sp[0].o = frame[7].o;
	jint temp0 = jint(0);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_ui_fragments_MenuFragment$MenuButton *) NULL_CHECK((frame[6].o)))->F_text;
	sp[3].o = (jobject)((mindustry_ui_fragments_MenuFragment$MenuButton *) NULL_CHECK((frame[6].o)))->F_icon;
	clinit_mindustry_ui_Styles(ctx);
	sp[4].o = (jobject)SF_mindustry_ui_Styles_flatToggleMenut;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_49(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_49 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_49);
		proxy->F_field2 = (jref) (frame[6].o);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[5].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	jfloat temp1 = jfloat(11.0f);
	LINE_NUMBER(290);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, temp1);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (checkCast(ctx, &class_arc_scene_ui_Button, sp[1].o));
	LINE_NUMBER(291);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(0)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_50(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_50 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_50);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(292);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_5:;
	{
	LINE_NUMBER(268);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(294);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_addButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:addButton", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(298);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_fragments_MenuFragment$MenuButton(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment$MenuButton);
	init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable(ctx, sp[1].o, (frame[1].o), (frame[2].o), (frame[3].o));
	((func_mindustry_ui_fragments_MenuFragment_addButton_mindustry_ui_fragments_MenuFragment$MenuButton) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_addButton_mindustry_ui_fragments_MenuFragment$MenuButton])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_addButton_java_lang_String_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:addButton", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(303);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_none;
	((func_mindustry_ui_fragments_MenuFragment_addButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_addButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].o));
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_addButton_mindustry_ui_fragments_MenuFragment$MenuButton(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:addButton", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_customButtons;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_lambda$buttons$1_Array1_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$buttons$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)));
	sp[1].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_currentMenu;
	sp += 1;
	if (sp[0].o != ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))))) goto label_1;
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

void M_mindustry_ui_fragments_MenuFragment_lambda$buttons$0_Array1_arc_scene_ui_Button_mindustry_ui_fragments_MenuFragment$MenuButton(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$buttons$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_currentMenu;
	if (sp[0].o != ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))))) goto label_1;
	}
	{
	LINE_NUMBER(273);
	((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_currentMenu = (jref) (jobject(nullptr));
	LINE_NUMBER(274);
	((func_mindustry_ui_fragments_MenuFragment_fadeOutMenu) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_fadeOutMenu])(ctx, (frame[0].o));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment$MenuButton *) NULL_CHECK((frame[2].o)))->F_submenu;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment$MenuButton *) NULL_CHECK((frame[2].o)))->F_submenu;
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(277);
	((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_currentMenu = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))));
	LINE_NUMBER(278);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_submenu;
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, sp[0].o);
	LINE_NUMBER(279);
	((func_mindustry_ui_fragments_MenuFragment_fadeInMenu) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_fadeInMenu])(ctx, (frame[0].o));
	LINE_NUMBER(281);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_submenu;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	jfloat temp1 = jfloat(temp0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	jfloat temp2 = temp1 - ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginTop);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	jfloat temp3 = temp2 - ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginBottom);
	jfloat temp4 = (jfloat)((func_arc_scene_ui_Button_getY_int_R_float) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))))->vtable)[VTABLE_arc_scene_ui_Button_getY_int_R_float])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))), (10));
	jfloat temp5 = temp3 - temp4;
	jfloat temp6 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (temp5 / temp6));
	LINE_NUMBER(282);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_submenu;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(283);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_submenu;
	sp[2].o = (jobject)((mindustry_ui_fragments_MenuFragment$MenuButton *) NULL_CHECK((frame[2].o)))->F_submenu;
	sp[2].o = (jobject)((func_arc_struct_Seq_toArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_toArray_R_Array1_java_lang_Object])(ctx, sp[2].o);
	((func_mindustry_ui_fragments_MenuFragment_buttons_arc_scene_ui_layout_Table_Array1_mindustry_ui_fragments_MenuFragment$MenuButton) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_buttons_arc_scene_ui_layout_Table_Array1_mindustry_ui_fragments_MenuFragment$MenuButton])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, getArrayClass(&class_mindustry_ui_fragments_MenuFragment$MenuButton, 1), sp[2].o)));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(285);
	((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_currentMenu = (jref) (jobject(nullptr));
	LINE_NUMBER(286);
	((func_mindustry_ui_fragments_MenuFragment_fadeOutMenu) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_fadeOutMenu])(ctx, (frame[0].o));
	LINE_NUMBER(287);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment$MenuButton *) NULL_CHECK((frame[2].o)))->F_runnable;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	}
label_4:;
	LINE_NUMBER(290);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_lambda$fadeOutMenu$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$fadeOutMenu$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(264);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_submenu;
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$6_float_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$buildDesktop$6", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(234);
	((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_submenu = (jref) (frame[2].o);
	LINE_NUMBER(235);
	((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"submenu"_j)));
	LINE_NUMBER(236);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_color;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (jfloat(0));
	LINE_NUMBER(237);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(238);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[1].f));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(70.0f)));
	LINE_NUMBER(239);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Boolp_6(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_arc_func_Boolp_6 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Boolp_6);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$7_arc_scene_ui_layout_Table_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$buildDesktop$7", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MenuFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_isEmpty_R_boolean])(ctx, sp[0].o);
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

void M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$0_float_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$buildDesktop$0", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[1].f));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(70.0f)));
	LINE_NUMBER(207);
	((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"buttons"_j)));
	LINE_NUMBER(209);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_desktopButtons;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(210);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_ui_fragments_MenuFragment$MenuButton, (6));
	jint temp0 = jint(0);
	clinit_mindustry_ui_fragments_MenuFragment$MenuButton(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment$MenuButton);
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"@play"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[4].o = (jobject)SF_mindustry_gen_Icon_play;
	sp[5].o = (jobject)createArray(ctx, &class_mindustry_ui_fragments_MenuFragment$MenuButton, (jint(4)));
	jint temp1 = jint(0);
	clinit_mindustry_ui_fragments_MenuFragment$MenuButton(ctx);
	sp[6].o = gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment$MenuButton);
	sp[7].o = ((jobject) createStringLiteral(ctx, u8"@campaign"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[8].o = (jobject)SF_mindustry_gen_Icon_play;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_51(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_51 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_51);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[9].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable(ctx, sp[6].o, sp[7].o, sp[8].o, sp[9].o);
	ARRAY_ACCESS(jobject, sp[5].o, temp1) = sp[6].o;
	jint temp2 = jint(1);
	clinit_mindustry_ui_fragments_MenuFragment$MenuButton(ctx);
	sp[6].o = gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment$MenuButton);
	sp[7].o = ((jobject) createStringLiteral(ctx, u8"@joingame"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[8].o = (jobject)SF_mindustry_gen_Icon_add;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_52(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_52 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_52);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[9].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable(ctx, sp[6].o, sp[7].o, sp[8].o, sp[9].o);
	ARRAY_ACCESS(jobject, sp[5].o, temp2) = sp[6].o;
	jint temp3 = jint(2);
	clinit_mindustry_ui_fragments_MenuFragment$MenuButton(ctx);
	sp[6].o = gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment$MenuButton);
	sp[7].o = ((jobject) createStringLiteral(ctx, u8"@customgame"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[8].o = (jobject)SF_mindustry_gen_Icon_terrain;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_53(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_53 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_53);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[9].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable(ctx, sp[6].o, sp[7].o, sp[8].o, sp[9].o);
	ARRAY_ACCESS(jobject, sp[5].o, temp3) = sp[6].o;
	jint temp4 = jint(3);
	clinit_mindustry_ui_fragments_MenuFragment$MenuButton(ctx);
	sp[6].o = gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment$MenuButton);
	sp[7].o = ((jobject) createStringLiteral(ctx, u8"@loadgame"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[8].o = (jobject)SF_mindustry_gen_Icon_download;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_54(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_54 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_54);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[9].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable(ctx, sp[6].o, sp[7].o, sp[8].o, sp[9].o);
	ARRAY_ACCESS(jobject, sp[5].o, temp4) = sp[6].o;
	init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_Array1_mindustry_ui_fragments_MenuFragment$MenuButton(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp5 = jint(1);
	clinit_mindustry_ui_fragments_MenuFragment$MenuButton(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment$MenuButton);
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"@database.button"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[4].o = (jobject)SF_mindustry_gen_Icon_menu;
	sp[5].o = (jobject)createArray(ctx, &class_mindustry_ui_fragments_MenuFragment$MenuButton, (jint(3)));
	jint temp6 = jint(0);
	clinit_mindustry_ui_fragments_MenuFragment$MenuButton(ctx);
	sp[6].o = gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment$MenuButton);
	sp[7].o = ((jobject) createStringLiteral(ctx, u8"@schematics"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[8].o = (jobject)SF_mindustry_gen_Icon_paste;
	clinit_mindustry_Vars(ctx);
	sp[9].o = (jobject)SF_mindustry_Vars_ui;
	sp[9].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[9].o))->F_schematics;
	LINE_NUMBER(218);
	sp[10].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[9].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_55(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_55 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_55);
		proxy->F_field0 = (jref) sp[9].o;
		sp[9].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable(ctx, sp[6].o, sp[7].o, sp[8].o, sp[9].o);
	ARRAY_ACCESS(jobject, sp[5].o, temp6) = sp[6].o;
	jint temp7 = jint(1);
	clinit_mindustry_ui_fragments_MenuFragment$MenuButton(ctx);
	sp[6].o = gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment$MenuButton);
	sp[7].o = ((jobject) createStringLiteral(ctx, u8"@database"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[8].o = (jobject)SF_mindustry_gen_Icon_book;
	clinit_mindustry_Vars(ctx);
	sp[9].o = (jobject)SF_mindustry_Vars_ui;
	sp[9].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[9].o))->F_database;
	LINE_NUMBER(219);
	sp[10].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[9].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_56(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_56 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_56);
		proxy->F_field0 = (jref) sp[9].o;
		sp[9].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable(ctx, sp[6].o, sp[7].o, sp[8].o, sp[9].o);
	ARRAY_ACCESS(jobject, sp[5].o, temp7) = sp[6].o;
	jint temp8 = jint(2);
	clinit_mindustry_ui_fragments_MenuFragment$MenuButton(ctx);
	sp[6].o = gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment$MenuButton);
	sp[7].o = ((jobject) createStringLiteral(ctx, u8"@about.button"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[8].o = (jobject)SF_mindustry_gen_Icon_info;
	clinit_mindustry_Vars(ctx);
	sp[9].o = (jobject)SF_mindustry_Vars_ui;
	sp[9].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[9].o))->F_about;
	LINE_NUMBER(220);
	sp[10].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[9].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_57(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_57 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_57);
		proxy->F_field0 = (jref) sp[9].o;
		sp[9].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable(ctx, sp[6].o, sp[7].o, sp[8].o, sp[9].o);
	ARRAY_ACCESS(jobject, sp[5].o, temp8) = sp[6].o;
	init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_Array1_mindustry_ui_fragments_MenuFragment$MenuButton(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	jint temp9 = jint(2);
	clinit_mindustry_ui_fragments_MenuFragment$MenuButton(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment$MenuButton);
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"@editor"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[4].o = (jobject)SF_mindustry_gen_Icon_terrain;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_58(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_58 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_58);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[5].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp9) = sp[2].o;
	jint temp10 = jint(3);
	LINE_NUMBER(222);
	sp[2].o = sp[1].o;
	sp[3].i = temp10;
	sp += 4;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_steam) == 0) goto label_9;
	}
	{
	clinit_mindustry_ui_fragments_MenuFragment$MenuButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment$MenuButton);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@workshop"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_steam;
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_platform;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_59(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_59 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_59);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp += 1;
	goto label_10;
	}
label_9:;
	INST_ACONST_NULL();
label_10:;
	{
	sp -= 5;
	ARRAY_ACCESS(jobject, sp[1].o, sp[3].i) = sp[4].o;
	jint temp0 = jint(4);
	clinit_mindustry_ui_fragments_MenuFragment$MenuButton(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment$MenuButton);
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"@mods"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[4].o = (jobject)SF_mindustry_gen_Icon_book;
	clinit_mindustry_Vars(ctx);
	sp[5].o = (jobject)SF_mindustry_Vars_ui;
	sp[5].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[5].o))->F_mods;
	LINE_NUMBER(223);
	sp[6].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[5].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_60(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_60 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_60);
		proxy->F_field0 = (jref) sp[5].o;
		sp[5].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(5);
	clinit_mindustry_ui_fragments_MenuFragment$MenuButton(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment$MenuButton);
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"@settings"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[4].o = (jobject)SF_mindustry_gen_Icon_settings;
	clinit_mindustry_Vars(ctx);
	sp[5].o = (jobject)SF_mindustry_Vars_ui;
	sp[5].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[5].o))->F_settings;
	LINE_NUMBER(224);
	sp[6].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[5].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_61(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_61 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_61);
		proxy->F_field0 = (jref) sp[5].o;
		sp[5].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	LINE_NUMBER(210);
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_fragments_MenuFragment *) NULL_CHECK(sp[0].o))->F_desktopButtons = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_desktopButtons;
	sp[2].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[2].o, (((jobject) &class_mindustry_ui_fragments_MenuFragment$MenuButton)));
	((func_mindustry_ui_fragments_MenuFragment_buttons_arc_scene_ui_layout_Table_Array1_mindustry_ui_fragments_MenuFragment$MenuButton) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_buttons_arc_scene_ui_layout_Table_Array1_mindustry_ui_fragments_MenuFragment$MenuButton])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, getArrayClass(&class_mindustry_ui_fragments_MenuFragment$MenuButton, 1), sp[2].o)));
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_customButtons;
	sp[2].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[2].o, (((jobject) &class_mindustry_ui_fragments_MenuFragment$MenuButton)));
	((func_mindustry_ui_fragments_MenuFragment_buttons_arc_scene_ui_layout_Table_Array1_mindustry_ui_fragments_MenuFragment$MenuButton) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_buttons_arc_scene_ui_layout_Table_Array1_mindustry_ui_fragments_MenuFragment$MenuButton])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, getArrayClass(&class_mindustry_ui_fragments_MenuFragment$MenuButton, 1), sp[2].o)));
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)createArray(ctx, &class_mindustry_ui_fragments_MenuFragment$MenuButton, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_ui_fragments_MenuFragment$MenuButton(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment$MenuButton);
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"@quit"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[5].o = (jobject)SF_mindustry_gen_Icon_exit;
	clinit_arc_Core(ctx);
	sp[6].o = (jobject)SF_arc_Core_app;
	sp[7].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[6].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_62(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_62 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_62);
		proxy->F_field0 = (jref) sp[6].o;
		sp[6].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable(ctx, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	((func_mindustry_ui_fragments_MenuFragment_buttons_arc_scene_ui_layout_Table_Array1_mindustry_ui_fragments_MenuFragment$MenuButton) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_buttons_arc_scene_ui_layout_Table_Array1_mindustry_ui_fragments_MenuFragment$MenuButton])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$5(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$buildDesktop$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(222);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[1].o))->F_maps;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_63(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_63 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_63);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$buildDesktop$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[1].o))->F_load;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_64(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_64 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_64);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$buildDesktop$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(214);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[1].o))->F_custom;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_65(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_65 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_65);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$buildDesktop$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[1].o))->F_join;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_66(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_66 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_66);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$buildDesktop$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(212);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[1].o))->F_planet;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_67(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_67 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_67);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$6_mindustry_ui_fragments_MenuFragment$MenuButton_R_mindustry_ui_MobileButton(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$buildMobile$6", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MenuFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(153);
	clinit_mindustry_ui_MobileButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_MobileButton);
	sp[1].o = (jobject)((mindustry_ui_fragments_MenuFragment$MenuButton *) NULL_CHECK((frame[0].o)))->F_icon;
	sp[2].o = (jobject)((mindustry_ui_fragments_MenuFragment$MenuButton *) NULL_CHECK((frame[0].o)))->F_text;
	sp[3].o = (jobject)((mindustry_ui_fragments_MenuFragment$MenuButton *) NULL_CHECK((frame[0].o)))->F_runnable;
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	jobject temp1 = sp[2].o;
	sp[2].o = temp0;
	jobject temp2 = sp[3].o;
	sp[3].o = temp1;
	sp += 4;
	if (temp2 != nullptr) goto label_1;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_68(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_68 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_68);
		PUSH_OBJECT((jobject) proxy);
	}
	goto label_2;
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_ui_fragments_MenuFragment$MenuButton *) NULL_CHECK(sp[-1].o))->F_runnable;
label_2:;
	POP_N(4); // Pop method args
	init_mindustry_ui_MobileButton_arc_scene_style_Drawable_java_lang_String_java_lang_Runnable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$7(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$buildMobile$7", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_ui_fragments_MenuFragment(ctx);
	LINE_NUMBER(153);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$5(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$buildMobile$5", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MenuFragment(ctx);
	{
	LINE_NUMBER(150);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	((func_arc_Application_exit) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_exit, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$buildMobile$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[1].o))->F_maps;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_69(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_69 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_69);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$buildMobile$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[1].o))->F_join;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_70(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_70 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_70);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$buildMobile$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[1].o))->F_load;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_71(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_71 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_71);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$buildMobile$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[1].o))->F_custom;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_72(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_72 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_72);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$buildMobile$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[1].o))->F_planet;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_73(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_73 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_73);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_MenuFragment_lambda$build$18_java_lang_String_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$build$18", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MenuFragment(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(114);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"logo"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(115);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	frame[6].f = (jfloat(temp0));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	jfloat temp2 = jfloat(temp1);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	frame[7].f = (temp2 - ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginTop));
	LINE_NUMBER(116);
	jfloat temp3 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	frame[8].f = (temp3 * ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[5].o)))->F_scale));
	LINE_NUMBER(117);
	jfloat temp4 = (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[5].o)))->F_width))) * (frame[8].f);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp5 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp6 = jfloat(temp5);
	jfloat temp7 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(20.0f)));
	jfloat temp8 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp4, (temp6 - temp7));
	frame[9].f = temp8;
	LINE_NUMBER(118);
	frame[10].f = (((frame[9].f) * (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[5].o)))->F_height)))) / (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[5].o)))->F_width))));
	LINE_NUMBER(120);
	frame[11].f = (jfloat((jint(((frame[6].f) / (jfloat(2)))))));
	LINE_NUMBER(121);
	jfloat temp9 = (jfloat((jint((((frame[7].f) - (jfloat(6.0f))) - (frame[10].f)))))) + ((frame[10].f) / (jfloat(2)));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp10 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
	sp[0].f = temp9;
	sp += 1;
	if (temp10 == 0) goto label_8;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(30.0f)));
	sp[0].f = temp0;
	sp += 1;
	goto label_9;
	}
label_8:;
	INST_FCONST(0);
label_9:;
	{
	sp -= 2;
	frame[12].f = (sp[0].f - sp[1].f);
	LINE_NUMBER(122);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"macnotch"_j))));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(123);
	jfloat temp0 = frame[12].f;
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (clinit_mindustry_Vars(ctx), (jfloat)SF_mindustry_Vars_macNotchHeight));
	frame[12].f = (temp0 - temp1);
	}
label_11:;
	{
	LINE_NUMBER(126);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(127);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, (frame[5].o), (frame[11].f), (frame[12].f), (frame[9].f), (frame[10].f));
	LINE_NUMBER(129);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(130);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	sp[1].o = frame[0].o;
	jfloat temp0 = frame[11].f;
	jfloat temp1 = (frame[12].f) - ((frame[10].f) / (jfloat(2)));
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, temp0, (temp1 - temp2), (jint(1)));
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_MenuFragment_lambda$build$14_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$build$14", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MenuFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@be.check"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_refresh;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_74(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_74 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_74);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(200.0f);
	jfloat temp1 = jfloat(60.0f);
	LINE_NUMBER(107);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"becheck"_j))));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_17);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_MenuFragment_lambda$build$17_arc_scene_ui_TextButton(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$build$17", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MenuFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label])(ctx, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_becontrol;
	jint temp0 = (jint)((func_mindustry_net_BeControl_isUpdateAvailable_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_net_BeControl_isUpdateAvailable_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, (jfloat(5.0f)), (jfloat(1)));
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, temp0);
	sp += 1;
	goto label_2;
	}
label_1:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
label_2:;
	{
	sp -= 2;
	((func_arc_scene_ui_Label_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_MenuFragment_lambda$build$15(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$build$15", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MenuFragment(ctx);
	{
	LINE_NUMBER(100);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_show) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_show])(ctx, sp[0].o);
	LINE_NUMBER(101);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_becontrol;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Boolc_1(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_arc_func_Boolc_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Boolc_1);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_net_BeControl_checkUpdate_arc_func_Boolc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_BeControl_checkUpdate_arc_func_Boolc])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_MenuFragment_lambda$build$16_boolean(jcontext ctx, jbool param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$build$16", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MenuFragment(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(102);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_hide])(ctx, sp[0].o);
	LINE_NUMBER(103);
	if ((frame[0].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(104);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@be.noupdates"_j))));
	}
label_2:;
	LINE_NUMBER(106);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_lambda$build$10_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$build$10", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(90);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_terminal;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_75(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_75 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_75);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Boolp_7(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_arc_func_Boolp_7 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Boolp_7);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(92);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8""_j));
	clinit_mindustry_ui_fragments_MenuFragment$2(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment$2);
	init_mindustry_ui_fragments_MenuFragment$2_mindustry_ui_fragments_MenuFragment(ctx, sp[2].o, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_ui;
	sp[3].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[3].o))->F_about;
	LINE_NUMBER(96);
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_76(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_76 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_76);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	LINE_NUMBER(92);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(84.0f);
	jfloat temp1 = jfloat(45.0f);
	LINE_NUMBER(96);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Boolp_8(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_arc_func_Boolp_8 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Boolp_8);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"info"_j))));
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_MenuFragment_lambda$build$13_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$build$13", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MenuFragment(ctx);
	{
	LINE_NUMBER(96);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_consolefrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean])(ctx, sp[0].o);
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

jbool SM_mindustry_ui_fragments_MenuFragment_lambda$build$12_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$build$12", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MenuFragment(ctx);
	{
	LINE_NUMBER(90);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_consolefrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"console"_j))));
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

void SM_mindustry_ui_fragments_MenuFragment_lambda$build$11(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$build$11", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MenuFragment(ctx);
	{
	LINE_NUMBER(90);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_consolefrag;
	((func_mindustry_ui_fragments_ConsoleFragment_toggleMobile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_toggleMobile])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_MenuFragment_lambda$build$9_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$build$9", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MenuFragment(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(71);
	frame[0].f = (jfloat(0));
	LINE_NUMBER(72);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(73);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	frame[2].f = (jfloat(temp0));
	LINE_NUMBER(74);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	frame[3].f = (jfloat(temp1));
	LINE_NUMBER(75);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	if ((floatCompare(((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginLeft), (jfloat(0)), -1)) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(76);
	clinit_mindustry_gen_Tex(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Tex_paneRight;
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp0, temp1, ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginLeft), (frame[3].f));
	}
label_5:;
	{
	LINE_NUMBER(79);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	if ((floatCompare(((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginRight), (jfloat(0)), -1)) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(80);
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
label_7:;
	{
	LINE_NUMBER(83);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	if ((floatCompare(((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginBottom), (jfloat(0)), -1)) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(84);
	clinit_mindustry_gen_Tex(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Tex_paneTop;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	jfloat temp0 = (jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginLeft;
	jfloat temp1 = jfloat(0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp3 = jfloat(temp2);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	jfloat temp4 = temp3 - ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginRight);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	jfloat temp5 = temp4 - ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginLeft);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp5, ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginBottom));
	}
label_9:;
	LINE_NUMBER(86);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_lambda$build$7_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$build$7", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_discord;
	clinit_mindustry_ui_fragments_MenuFragment$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment$1);
	init_mindustry_ui_fragments_MenuFragment$1_mindustry_ui_fragments_MenuFragment(ctx, sp[2].o, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_ui;
	sp[3].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[3].o))->F_discord;
	LINE_NUMBER(65);
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_77(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_77 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_java_lang_Runnable_77);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	LINE_NUMBER(63);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Boolp_9(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_arc_func_Boolp_9 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Boolp_9);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(65);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(9.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@discord"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(84.0f)), (jfloat(45.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"discord"_j))));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_MenuFragment_lambda$build$8_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$build$8", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MenuFragment(ctx);
	{
	LINE_NUMBER(65);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_consolefrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean])(ctx, sp[0].o);
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

void M_mindustry_ui_fragments_MenuFragment_lambda$build$2_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$build$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_noBarPane;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_18(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_18 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_18);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_19(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_19 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_19);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(58);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(60);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_MenuFragment_lambda$build$6_arc_scene_ui_ScrollPane(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$build$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MenuFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(59);
	((func_arc_scene_ui_ScrollPane_setOverscroll_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_setOverscroll_boolean_boolean])(ctx, (frame[0].o), (jint(0)), (jint(0)));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_lambda$build$3_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$build$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(47);
	((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_container = (jref) (frame[2].o);
	LINE_NUMBER(48);
	((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"menu container"_j)));
	LINE_NUMBER(50);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_3;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(52);
	((func_mindustry_ui_fragments_MenuFragment_buildDesktop) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_buildDesktop])(ctx, (frame[0].o));
	LINE_NUMBER(53);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ResizeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_20(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_20 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_20);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(55);
	((func_mindustry_ui_fragments_MenuFragment_buildMobile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_buildMobile])(ctx, (frame[0].o));
	LINE_NUMBER(56);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ResizeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_21(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_21 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment_invoke_arc_func_Cons_21);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	LINE_NUMBER(58);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_lambda$build$5_mindustry_game_EventType$ResizeEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$build$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	((func_mindustry_ui_fragments_MenuFragment_buildMobile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_buildMobile])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_lambda$build$4_mindustry_game_EventType$ResizeEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$build$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	((func_mindustry_ui_fragments_MenuFragment_buildDesktop) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_MenuFragment_buildDesktop])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MenuFragment_lambda$build$1_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$build$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((mindustry_ui_fragments_MenuFragment *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_mindustry_graphics_MenuRenderer_render) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MenuRenderer_render])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_MenuFragment_lambda$build$0_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment:lambda$build$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MenuFragment(ctx);
	{
	LINE_NUMBER(38);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_editor;
	jint temp0 = (jint)((func_mindustry_editor_MapEditorDialog_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_isShown_R_boolean])(ctx, sp[0].o);
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

void *vtable_mindustry_ui_fragments_MenuFragment[] {
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
	(void *) M_mindustry_ui_fragments_MenuFragment_build_arc_scene_Group,
	(void *) M_mindustry_ui_fragments_MenuFragment_buildMobile,
	(void *) M_mindustry_ui_fragments_MenuFragment_buildDesktop,
	(void *) M_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable,
	(void *) M_mindustry_ui_fragments_MenuFragment_fadeInMenu,
	(void *) M_mindustry_ui_fragments_MenuFragment_fadeOutMenu,
	(void *) M_mindustry_ui_fragments_MenuFragment_buttons_arc_scene_ui_layout_Table_Array1_mindustry_ui_fragments_MenuFragment$MenuButton,
	(void *) M_mindustry_ui_fragments_MenuFragment_addButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable,
	(void *) M_mindustry_ui_fragments_MenuFragment_addButton_java_lang_String_java_lang_Runnable,
	(void *) M_mindustry_ui_fragments_MenuFragment_addButton_mindustry_ui_fragments_MenuFragment$MenuButton,
	(void *) M_mindustry_ui_fragments_MenuFragment_lambda$buttons$1_Array1_arc_scene_ui_Button,
	(void *) M_mindustry_ui_fragments_MenuFragment_lambda$buttons$0_Array1_arc_scene_ui_Button_mindustry_ui_fragments_MenuFragment$MenuButton,
	(void *) M_mindustry_ui_fragments_MenuFragment_lambda$fadeOutMenu$0,
	(void *) M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$6_float_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$0_float_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$5,
	(void *) M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$4,
	(void *) M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$3,
	(void *) M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$2,
	(void *) M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$1,
	(void *) M_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$4,
	(void *) M_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$3,
	(void *) M_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$2,
	(void *) M_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$1,
	(void *) M_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$0,
	(void *) M_mindustry_ui_fragments_MenuFragment_lambda$build$10_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_MenuFragment_lambda$build$7_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_MenuFragment_lambda$build$2_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_MenuFragment_lambda$build$3_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_MenuFragment_lambda$build$5_mindustry_game_EventType$ResizeEvent,
	(void *) M_mindustry_ui_fragments_MenuFragment_lambda$build$4_mindustry_game_EventType$ResizeEvent,
	(void *) M_mindustry_ui_fragments_MenuFragment_lambda$build$1_float_float_float_float,
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
	{ "buildMobile", "()V" },
	{ "buildDesktop", "()V" },
	{ "checkPlay", "(Ljava/lang/Runnable;)V" },
	{ "fadeInMenu", "()V" },
	{ "fadeOutMenu", "()V" },
	{ "buttons", "(Larc/scene/ui/layout/Table;[Lmindustry/ui/fragments/MenuFragment$MenuButton;)V" },
	{ "addButton", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)V" },
	{ "addButton", "(Ljava/lang/String;Ljava/lang/Runnable;)V" },
	{ "addButton", "(Lmindustry/ui/fragments/MenuFragment$MenuButton;)V" },
	{ "lambda$buttons$1", "([Larc/scene/ui/Button;)V" },
	{ "lambda$buttons$0", "([Larc/scene/ui/Button;Lmindustry/ui/fragments/MenuFragment$MenuButton;)V" },
	{ "lambda$fadeOutMenu$0", "()V" },
	{ "lambda$buildDesktop$6", "(FLarc/scene/ui/layout/Table;)V" },
	{ "lambda$buildDesktop$0", "(FLarc/scene/ui/layout/Table;)V" },
	{ "lambda$buildDesktop$5", "()V" },
	{ "lambda$buildDesktop$4", "()V" },
	{ "lambda$buildDesktop$3", "()V" },
	{ "lambda$buildDesktop$2", "()V" },
	{ "lambda$buildDesktop$1", "()V" },
	{ "lambda$buildMobile$4", "()V" },
	{ "lambda$buildMobile$3", "()V" },
	{ "lambda$buildMobile$2", "()V" },
	{ "lambda$buildMobile$1", "()V" },
	{ "lambda$buildMobile$0", "()V" },
	{ "lambda$build$10", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$7", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$2", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$3", "(Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$5", "(Lmindustry/game/EventType$ResizeEvent;)V" },
	{ "lambda$build$4", "(Lmindustry/game/EventType$ResizeEvent;)V" },
	{ "lambda$build$1", "(FFFF)V" },
};

static jclass innerClasses[] {
	&class_mindustry_ui_fragments_MenuFragment$MenuButton,
};

static FieldMetadata fields[] {
	{ "container", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_fragments_MenuFragment, F_container), "Larc/scene/ui/layout/Table;", 2 },
	{ "submenu", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_fragments_MenuFragment, F_submenu), "Larc/scene/ui/layout/Table;", 2 },
	{ "currentMenu", &class_arc_scene_ui_Button, offsetof(mindustry_ui_fragments_MenuFragment, F_currentMenu), "Larc/scene/ui/Button;", 2 },
	{ "renderer", &class_mindustry_graphics_MenuRenderer, offsetof(mindustry_ui_fragments_MenuFragment, F_renderer), "Lmindustry/graphics/MenuRenderer;", 2 },
	{ "customButtons", &class_arc_struct_Seq, offsetof(mindustry_ui_fragments_MenuFragment, F_customButtons), "Larc/struct/Seq;", 2 },
	{ "desktopButtons", &class_arc_struct_Seq, offsetof(mindustry_ui_fragments_MenuFragment, F_desktopButtons), "Larc/struct/Seq;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_MenuFragment, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_ui_fragments_MenuFragment_build_arc_scene_Group, VTABLE_mindustry_ui_fragments_MenuFragment_build_arc_scene_Group, "(Larc/scene/Group;)V", 1 },
	{ "buildMobile", (intptr_t) M_mindustry_ui_fragments_MenuFragment_buildMobile, VTABLE_mindustry_ui_fragments_MenuFragment_buildMobile, "()V", 2 },
	{ "buildDesktop", (intptr_t) M_mindustry_ui_fragments_MenuFragment_buildDesktop, VTABLE_mindustry_ui_fragments_MenuFragment_buildDesktop, "()V", 2 },
	{ "checkPlay", (intptr_t) M_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable, VTABLE_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 2 },
	{ "fadeInMenu", (intptr_t) M_mindustry_ui_fragments_MenuFragment_fadeInMenu, VTABLE_mindustry_ui_fragments_MenuFragment_fadeInMenu, "()V", 2 },
	{ "fadeOutMenu", (intptr_t) M_mindustry_ui_fragments_MenuFragment_fadeOutMenu, VTABLE_mindustry_ui_fragments_MenuFragment_fadeOutMenu, "()V", 2 },
	{ "buttons", (intptr_t) M_mindustry_ui_fragments_MenuFragment_buttons_arc_scene_ui_layout_Table_Array1_mindustry_ui_fragments_MenuFragment$MenuButton, VTABLE_mindustry_ui_fragments_MenuFragment_buttons_arc_scene_ui_layout_Table_Array1_mindustry_ui_fragments_MenuFragment$MenuButton, "(Larc/scene/ui/layout/Table;[Lmindustry/ui/fragments/MenuFragment$MenuButton;)V", 130 },
	{ "addButton", (intptr_t) M_mindustry_ui_fragments_MenuFragment_addButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable, VTABLE_mindustry_ui_fragments_MenuFragment_addButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable, "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)V", 1 },
	{ "addButton", (intptr_t) M_mindustry_ui_fragments_MenuFragment_addButton_java_lang_String_java_lang_Runnable, VTABLE_mindustry_ui_fragments_MenuFragment_addButton_java_lang_String_java_lang_Runnable, "(Ljava/lang/String;Ljava/lang/Runnable;)V", 1 },
	{ "addButton", (intptr_t) M_mindustry_ui_fragments_MenuFragment_addButton_mindustry_ui_fragments_MenuFragment$MenuButton, VTABLE_mindustry_ui_fragments_MenuFragment_addButton_mindustry_ui_fragments_MenuFragment$MenuButton, "(Lmindustry/ui/fragments/MenuFragment$MenuButton;)V", 1 },
	{ "lambda$buttons$1", (intptr_t) M_mindustry_ui_fragments_MenuFragment_lambda$buttons$1_Array1_arc_scene_ui_Button, VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buttons$1_Array1_arc_scene_ui_Button, "([Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$buttons$0", (intptr_t) M_mindustry_ui_fragments_MenuFragment_lambda$buttons$0_Array1_arc_scene_ui_Button_mindustry_ui_fragments_MenuFragment$MenuButton, VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buttons$0_Array1_arc_scene_ui_Button_mindustry_ui_fragments_MenuFragment$MenuButton, "([Larc/scene/ui/Button;Lmindustry/ui/fragments/MenuFragment$MenuButton;)V", 4098 },
	{ "lambda$fadeOutMenu$0", (intptr_t) M_mindustry_ui_fragments_MenuFragment_lambda$fadeOutMenu$0, VTABLE_mindustry_ui_fragments_MenuFragment_lambda$fadeOutMenu$0, "()V", 4098 },
	{ "lambda$buildDesktop$6", (intptr_t) M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$6_float_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$6_float_arc_scene_ui_layout_Table, "(FLarc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildDesktop$7", (intptr_t) SM_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$7_arc_scene_ui_layout_Table_R_boolean, 0, "(Larc/scene/ui/layout/Table;)Z", 4106 },
	{ "lambda$buildDesktop$0", (intptr_t) M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$0_float_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$0_float_arc_scene_ui_layout_Table, "(FLarc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildDesktop$5", (intptr_t) M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$5, VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$5, "()V", 4098 },
	{ "lambda$buildDesktop$4", (intptr_t) M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$4, VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$4, "()V", 4098 },
	{ "lambda$buildDesktop$3", (intptr_t) M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$3, VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$3, "()V", 4098 },
	{ "lambda$buildDesktop$2", (intptr_t) M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$2, VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$2, "()V", 4098 },
	{ "lambda$buildDesktop$1", (intptr_t) M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$1, VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$1, "()V", 4098 },
	{ "lambda$buildMobile$6", (intptr_t) SM_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$6_mindustry_ui_fragments_MenuFragment$MenuButton_R_mindustry_ui_MobileButton, 0, "(Lmindustry/ui/fragments/MenuFragment$MenuButton;)Lmindustry/ui/MobileButton;", 4106 },
	{ "lambda$buildMobile$7", (intptr_t) SM_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$7, 0, "()V", 4106 },
	{ "lambda$buildMobile$5", (intptr_t) SM_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$5, 0, "()V", 4106 },
	{ "lambda$buildMobile$4", (intptr_t) M_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$4, VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$4, "()V", 4098 },
	{ "lambda$buildMobile$3", (intptr_t) M_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$3, VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$3, "()V", 4098 },
	{ "lambda$buildMobile$2", (intptr_t) M_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$2, VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$2, "()V", 4098 },
	{ "lambda$buildMobile$1", (intptr_t) M_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$1, VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$1, "()V", 4098 },
	{ "lambda$buildMobile$0", (intptr_t) M_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$0, VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$0, "()V", 4098 },
	{ "lambda$build$18", (intptr_t) SM_mindustry_ui_fragments_MenuFragment_lambda$build$18_java_lang_String_float_float_float_float, 0, "(Ljava/lang/String;FFFF)V", 4106 },
	{ "lambda$build$14", (intptr_t) SM_mindustry_ui_fragments_MenuFragment_lambda$build$14_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$17", (intptr_t) SM_mindustry_ui_fragments_MenuFragment_lambda$build$17_arc_scene_ui_TextButton, 0, "(Larc/scene/ui/TextButton;)V", 4106 },
	{ "lambda$build$15", (intptr_t) SM_mindustry_ui_fragments_MenuFragment_lambda$build$15, 0, "()V", 4106 },
	{ "lambda$build$16", (intptr_t) SM_mindustry_ui_fragments_MenuFragment_lambda$build$16_boolean, 0, "(Z)V", 4106 },
	{ "lambda$build$10", (intptr_t) M_mindustry_ui_fragments_MenuFragment_lambda$build$10_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_MenuFragment_lambda$build$10_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$13", (intptr_t) SM_mindustry_ui_fragments_MenuFragment_lambda$build$13_R_boolean, 0, "()Z", 4106 },
	{ "lambda$build$12", (intptr_t) SM_mindustry_ui_fragments_MenuFragment_lambda$build$12_R_boolean, 0, "()Z", 4106 },
	{ "lambda$build$11", (intptr_t) SM_mindustry_ui_fragments_MenuFragment_lambda$build$11, 0, "()V", 4106 },
	{ "lambda$build$9", (intptr_t) SM_mindustry_ui_fragments_MenuFragment_lambda$build$9_float_float_float_float, 0, "(FFFF)V", 4106 },
	{ "lambda$build$7", (intptr_t) M_mindustry_ui_fragments_MenuFragment_lambda$build$7_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_MenuFragment_lambda$build$7_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$8", (intptr_t) SM_mindustry_ui_fragments_MenuFragment_lambda$build$8_R_boolean, 0, "()Z", 4106 },
	{ "lambda$build$2", (intptr_t) M_mindustry_ui_fragments_MenuFragment_lambda$build$2_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_MenuFragment_lambda$build$2_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$6", (intptr_t) SM_mindustry_ui_fragments_MenuFragment_lambda$build$6_arc_scene_ui_ScrollPane, 0, "(Larc/scene/ui/ScrollPane;)V", 4106 },
	{ "lambda$build$3", (intptr_t) M_mindustry_ui_fragments_MenuFragment_lambda$build$3_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_MenuFragment_lambda$build$3_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$5", (intptr_t) M_mindustry_ui_fragments_MenuFragment_lambda$build$5_mindustry_game_EventType$ResizeEvent, VTABLE_mindustry_ui_fragments_MenuFragment_lambda$build$5_mindustry_game_EventType$ResizeEvent, "(Lmindustry/game/EventType$ResizeEvent;)V", 4098 },
	{ "lambda$build$4", (intptr_t) M_mindustry_ui_fragments_MenuFragment_lambda$build$4_mindustry_game_EventType$ResizeEvent, VTABLE_mindustry_ui_fragments_MenuFragment_lambda$build$4_mindustry_game_EventType$ResizeEvent, "(Lmindustry/game/EventType$ResizeEvent;)V", 4098 },
	{ "lambda$build$1", (intptr_t) M_mindustry_ui_fragments_MenuFragment_lambda$build$1_float_float_float_float, VTABLE_mindustry_ui_fragments_MenuFragment_lambda$build$1_float_float_float_float, "(FFFF)V", 4098 },
	{ "lambda$build$0", (intptr_t) SM_mindustry_ui_fragments_MenuFragment_lambda$build$0_R_boolean, 0, "()Z", 4106 },
};

Class class_mindustry_ui_fragments_MenuFragment{
		.nativeName = (intptr_t) "mindustry/ui/fragments/MenuFragment",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_fragments_MenuFragment),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_MenuFragment,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_MenuFragment,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_MenuFragment,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 49,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 43,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_MenuFragment = registerClass(&class_mindustry_ui_fragments_MenuFragment);

}
