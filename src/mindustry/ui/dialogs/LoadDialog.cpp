#include "mindustry/ui/dialogs/LoadDialog.h"
#include "arc/func/Prov.h"
#include "java/lang/Runnable.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_java_util_Comparator_1.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_arc_func_Boolf_2.h"
#include "arc/scene/ui/Image.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_arc_func_Boolf_3.h"
#include "arc/struct/Seq.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_arc_func_Cons_9.h"
#include "mindustry/io/SaveIO_SaveException.h"
#include "mindustry/mod/data/DataAsset.h"
#include "arc/func/Boolf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "arc/util/Time.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "arc/graphics/Texture.h"
#include "mindustry/ui/dialogs/PausedDialog.h"
#include "arc/Graphics.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "arc/scene/ui/layout/Collapser.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/game/Rules.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_arc_func_Cons_13.h"
#include "mindustry/ui/dialogs/LoadDialog.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_arc_func_Cons_12.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_arc_func_Cons_11.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_arc_func_Cons_10.h"
#include "mindustry/core/GameState_State.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_arc_func_Cons_17.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_arc_func_Cons_16.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_arc_func_Cons_15.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_arc_func_Cons_14.h"
#include "arc/func/Cons.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_mindustry_core_Platform_FileWriter_1.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_arc_func_Prov_3.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_arc_func_Prov_2.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "mindustry/core/Control.h"
#include "mindustry/io/SaveMeta.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/scene/ui/layout/Scl.h"
#include "mindustry/game/Gamemode.h"
#include "mindustry/ui/FileChooser_FileChooserParams.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/type/Sector.h"
#include "mindustry/ui/Styles.h"
#include "java/lang/Long.h"
#include "arc/scene/ui/ScrollPane.h"
#include "mindustry/game/Saves_SaveSlot.h"
#include "mindustry/Vars.h"
#include "arc/scene/ui/TextField.h"
#include "mindustry/ui/BorderImage.h"
#include "arc/scene/ui/Button.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/TextButton.h"
#include "mindustry/ui/FileChooser.h"
#include "arc/scene/ui/ImageButton.h"
#include "java/lang/Throwable.h"
#include "java/lang/Exception.h"
#include "mindustry/maps/Map.h"
#include "mindustry/game/Saves.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_java_lang_Runnable_20.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_java_lang_Runnable_21.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_java_lang_Runnable_22.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_java_lang_Runnable_23.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_java_lang_Runnable_24.h"
#include "arc/scene/ui/Label.h"
#include "mindustry/core/Logic.h"
#include "mindustry/io/SaveIO.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_java_lang_Runnable_15.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_java_lang_Runnable_16.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_java_lang_Runnable_17.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_java_lang_Runnable_18.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_java_lang_Runnable_19.h"
#include "mindustry/net/Net.h"
#include "mindustry/mod/data/DataAssetType.h"
#include "arc/util/Timer_Task.h"
#include "mindustry/core/Platform_FileWriter.h"
#include "arc/files/Fi.h"
#include "arc/Application.h"
#include "java/lang/String.h"
#include "java/util/Comparator.h"
#include "mindustry/mod/DataManager.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_java_lang_Runnable_25.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_java_lang_Runnable_26.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_java_lang_Runnable_27.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_java_lang_Runnable_28.h"
#include "mindustry/ui/dialogs/LoadDialog_invoke_java_lang_Runnable_29.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/util/Scaling.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/Enum.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "arc/scene/Element.h"
#include "java/util/Objects.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_ui_dialogs_LoadDialog(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_LoadDialog *) object;
	if (self->F_slots)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_slots)->clazz)->markFunction)((jobject) self->F_slots, mark, depth + 1);
	if (self->F_searchString)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_searchString)->clazz)->markFunction)((jobject) self->F_searchString, mark, depth + 1);
	if (self->F_hidden)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hidden)->clazz)->markFunction)((jobject) self->F_hidden, mark, depth + 1);
	if (self->F_searchField)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_searchField)->clazz)->markFunction)((jobject) self->F_searchField, mark, depth + 1);
	if (self->F_pane)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pane)->clazz)->markFunction)((jobject) self->F_pane, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_LoadDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
}

void init_mindustry_ui_dialogs_LoadDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_LoadDialog(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(33);
	init_mindustry_ui_dialogs_LoadDialog_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@loadgame"_j))));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_ui_dialogs_LoadDialog_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_LoadDialog(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(37);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(38);
	((func_mindustry_ui_dialogs_LoadDialog_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_LoadDialog_setup])(ctx, (frame[0].o));
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_15(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_15 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_LoadDialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_LoadDialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_16(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_16 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_16);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_LoadDialog_onResize_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_LoadDialog_onResize_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(46);
	((func_mindustry_ui_dialogs_LoadDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_LoadDialog_addCloseButton])(ctx, (frame[0].o));
	LINE_NUMBER(47);
	((func_mindustry_ui_dialogs_LoadDialog_addSetup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_LoadDialog_addSetup])(ctx, (frame[0].o));
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_LoadDialog_setup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:setup", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK(sp[0].o))->F_slots = (jref) sp[1].o;
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK(sp[0].o))->F_hidden = (jref) sp[1].o;
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_ScrollPane(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_ScrollPane);
	sp[2].o = (jobject)((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK((frame[0].o)))->F_slots;
	init_arc_scene_ui_ScrollPane_arc_scene_Element(ctx, sp[1].o, sp[2].o);
	((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK(sp[0].o))->F_pane = (jref) sp[1].o;
	LINE_NUMBER(57);
	((func_mindustry_ui_dialogs_LoadDialog_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_LoadDialog_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(59);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(60);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_zoom;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8""_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o, sp[3].o);
	jint temp0 = 50;
	LINE_NUMBER(64);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[1].o);
	((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK(sp[0].o))->F_searchField = (jref) (checkCast(ctx, &class_arc_scene_ui_TextField, sp[1].o));
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK((frame[0].o)))->F_searchField;
	((func_arc_scene_ui_TextField_setMessageText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setMessageText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@save.search"_j))));
	LINE_NUMBER(66);
	clinit_mindustry_game_Gamemode(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Gamemode_all;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_11:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_12;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(67);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((func_mindustry_game_Gamemode_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_game_Gamemode_name_R_java_lang_String])(ctx, (frame[5].o));
	sp[1].o = (jobject)SM_arc_util_Strings_capitalize_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"mode\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_core_UI_getIcon_java_lang_String_R_arc_scene_style_TextureRegionDrawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_getIcon_java_lang_String_R_arc_scene_style_TextureRegionDrawable])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(68);
	sp[0].o = frame[5].o;
	clinit_mindustry_game_Gamemode(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Gamemode_sandbox;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(69);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_18;
	}
	INST_ILOAD(7);
	if ((--sp)->i == 0) goto label_19;
label_18:;
	{
	LINE_NUMBER(70);
	sp[0].o = frame[1].o;
	sp += 1;
	if ((frame[7].i) == 0) goto label_20;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_terrain;
	goto label_21;
label_20:;
	INST_ALOAD(6);
label_21:;
	{
	sp -= 2;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyTogglei;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_17(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_17 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_17);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(60.0f);
	LINE_NUMBER(73);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-12.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Boolf_2);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((func_mindustry_game_Gamemode_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_game_Gamemode_name_R_java_lang_String])(ctx, (frame[5].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@mode.\u0001.name"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_19:;
	{
	LINE_NUMBER(66);
	INST_IINC(4, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK((frame[0].o)))->F_pane;
	((func_arc_scene_ui_ScrollPane_setFadeScrollBars_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_setFadeScrollBars_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK((frame[0].o)))->F_pane;
	((func_arc_scene_ui_ScrollPane_setScrollingDisabled_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_setScrollingDisabled_boolean_boolean])(ctx, sp[0].o, (jint(1)), (jint(0)));
	LINE_NUMBER(80);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(81);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(82);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[1].o = (jobject)((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK((frame[0].o)))->F_pane;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_LoadDialog_rebuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:rebuild", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK((frame[0].o)))->F_slots;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK((frame[0].o)))->F_slots;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(24.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(20.0f)));
	LINE_NUMBER(90);
	jfloat temp0 = jfloat(2);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_18(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_18 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_18);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(ctx, temp0, sp[0].o);
	LINE_NUMBER(92);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_saves;
	sp[0].o = (jobject)((func_mindustry_game_Saves_getSaveSlots_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_getSaveSlots_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(93);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_java_util_Comparator_1(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_java_util_Comparator_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_java_util_Comparator_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(95);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp2 = jfloat(temp1);
	jfloat temp3 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(470.0f)));
	jint temp4 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint((temp2 / temp3))), (jint(1)));
	frame[2].i = temp4;
	LINE_NUMBER(96);
	frame[3].i = (jint(0));
	LINE_NUMBER(97);
	frame[4].i = (jint(0));
	LINE_NUMBER(99);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_game_Saves$SaveSlot, sp[0].o));
	LINE_NUMBER(100);
	jint temp0 = (jint)((func_mindustry_game_Saves$SaveSlot_isHidden_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_isHidden_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK((frame[0].o)))->F_searchString;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	sp[0].o = frame[6].o;
	LINE_NUMBER(101);
	sp[0].o = (jobject)((func_mindustry_game_Saves$SaveSlot_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_getName_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK((frame[0].o)))->F_searchString;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_9;
	}
label_12:;
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK((frame[0].o)))->F_hidden;
	LINE_NUMBER(102);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK((frame[0].o)))->F_hidden;
	sp[1].o = (jobject)((func_mindustry_game_Saves$SaveSlot_mode_R_mindustry_game_Gamemode) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_mode_R_mindustry_game_Gamemode])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_15;
	}
	LINE_NUMBER(103);
	goto label_9;
label_15:;
	{
	LINE_NUMBER(106);
	frame[4].i = (jint(1));
	LINE_NUMBER(108);
	clinit_arc_scene_ui_TextButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_TextButton);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8""_j));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_grayt;
	init_arc_scene_ui_TextButton_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label])(ctx, (frame[7].o));
	jint temp0 = (jint)((func_arc_scene_ui_Label_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_remove_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(110);
	((func_arc_scene_ui_TextButton_clearChildren) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_TextButton_clearChildren])(ctx, (frame[7].o));
	LINE_NUMBER(112);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_TextButton_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(114);
	sp[0].o = frame[7].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_10);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(148);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(2)));
	LINE_NUMBER(149);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_TextButton_row_R_arc_scene_ui_layout_Table])(ctx, (frame[7].o));
	LINE_NUMBER(151);
	frame[8].o = (((jobject) createStringLiteral(ctx, u8"[lightgray]"_j)));
	LINE_NUMBER(152);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"nomap"_j))));
	frame[9].o = sp[0].o;
	LINE_NUMBER(154);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_TextButton_left_R_arc_scene_ui_layout_Table])(ctx, (frame[7].o));
	clinit_mindustry_ui_BorderImage(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_BorderImage);
	init_mindustry_ui_BorderImage_arc_graphics_g2d_TextureRegion_float(ctx, sp[1].o, (frame[9].o), (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_11);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[9].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(165);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(160.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	LINE_NUMBER(167);
	sp[0].o = frame[7].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_12);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(181);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(260.0f)));
	LINE_NUMBER(183);
	((func_mindustry_ui_dialogs_LoadDialog_modifyButton_arc_scene_ui_TextButton_mindustry_game_Saves$SaveSlot) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_LoadDialog_modifyButton_arc_scene_ui_TextButton_mindustry_game_Saves$SaveSlot])(ctx, (frame[0].o), (frame[7].o), (frame[6].o));
	LINE_NUMBER(184);
	sp[0].o = (jobject)((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK((frame[0].o)))->F_slots;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[7].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_uniformX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_uniformX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(186);
	INST_IINC(3, 1);
	if (((frame[3].i) % (frame[2].i)) != 0) goto label_33;
	}
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK((frame[0].o)))->F_slots;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	}
label_33:;
	LINE_NUMBER(189);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(191);
	if ((frame[4].i) != 0) goto label_35;
	}
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK((frame[0].o)))->F_slots;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@save.none"_j))));
	}
label_35:;
	LINE_NUMBER(194);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_LoadDialog_addSetup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:addSetup", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@save.import"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_add;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_19(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_19 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_19);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(221);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_LoadDialog_runLoadSave_mindustry_game_Saves$SaveSlot(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:runLoadSave", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(225);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_20(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_20 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_20);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_game_Saves$SaveSlot_cautiousLoad_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_cautiousLoad_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(263);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_LoadDialog_modifyButton_arc_scene_ui_TextButton_mindustry_game_Saves$SaveSlot(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:modifyButton", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(266);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_21(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_21 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_21);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_LoadDialog_show_R_arc_scene_ui_Dialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:show", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)M_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog(ctx, (frame[0].o));
	LINE_NUMBER(277);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isDesktop_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isDesktop_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK((frame[0].o)))->F_searchField;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(278);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK((frame[0].o)))->F_searchField;
	jint temp0 = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_LoadDialog_lambda$modifyButton$0_arc_scene_ui_TextButton_mindustry_game_Saves$SaveSlot(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$modifyButton$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(267);
	jint temp0 = (jint)((func_arc_scene_ui_TextButton_childrenPressed_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TextButton_childrenPressed_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(268);
	((func_mindustry_ui_dialogs_LoadDialog_runLoadSave_mindustry_game_Saves$SaveSlot) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_LoadDialog_runLoadSave_mindustry_game_Saves$SaveSlot])(ctx, (frame[0].o), (frame[2].o));
	}
label_1:;
	LINE_NUMBER(270);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_LoadDialog_lambda$runLoadSave$0_mindustry_game_Saves$SaveSlot(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$runLoadSave$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(226);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_22(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_22 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_22);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_loadAnd_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_loadAnd_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_LoadDialog_lambda$runLoadSave$1_mindustry_game_Saves$SaveSlot(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$runLoadSave$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(227);
	((func_mindustry_ui_dialogs_LoadDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_LoadDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(228);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_paused;
	((func_mindustry_ui_dialogs_PausedDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PausedDialog_hide])(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_mindustry_io_SaveIO$SaveException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(230);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_reset])(ctx, sp[0].o);
	LINE_NUMBER(231);
	((func_mindustry_game_Saves$SaveSlot_load) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_load])(ctx, (frame[1].o));
	LINE_NUMBER(232);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor = (jint(0));
	LINE_NUMBER(233);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector = (jref) (jobject(nullptr));
	LINE_NUMBER(234);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_playing;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(236);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getMissingAssets_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getMissingAssets_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(237);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(238);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@save.assets.missing"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(239);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[3].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@save.assets.missing.info"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(2)));
	LINE_NUMBER(240);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[3].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(242);
	clinit_arc_scene_ui_layout_Collapser(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Collapser);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_13);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	init_arc_scene_ui_layout_Collapser_arc_func_Cons_boolean(ctx, sp[0].o, sp[1].o, (jint(1)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(249);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[3].o)))->F_cont;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@save.assets.missing.list"_j));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_togglet;
	sp[3].o = frame[4].o;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_23(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_23 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_23);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(180.0f)), (jfloat(50.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Boolf_3);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(250);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[3].o)))->F_cont;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@ok"_j));
	sp[2].o = frame[3].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_24(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_24 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_24);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(110.0f)), (jfloat(50.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(251);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[3].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(252);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[3].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(254);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[3].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(260);
	goto label_21;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(256);
	frame[2].o = sp[0].o;
	LINE_NUMBER(257);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[2].o));
	LINE_NUMBER(258);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logic;
	((func_mindustry_core_Logic_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Logic_reset])(ctx, sp[0].o);
	LINE_NUMBER(259);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@save.corrupted"_j))));
	}
label_21:;
	LINE_NUMBER(261);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_LoadDialog_lambda$runLoadSave$4_arc_scene_ui_layout_Collapser_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$runLoadSave$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_LoadDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(249);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Collapser_isCollapsed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_isCollapsed_R_boolean])(ctx, (frame[0].o));
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

void SM_mindustry_ui_dialogs_LoadDialog_lambda$runLoadSave$2_arc_struct_Seq_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$runLoadSave$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_LoadDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(242);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_14);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_LoadDialog_lambda$runLoadSave$3_arc_struct_Seq_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$runLoadSave$3", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_LoadDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(14.0f)));
	LINE_NUMBER(244);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_mod_data_DataAsset, sp[0].o));
	LINE_NUMBER(245);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_mod_data_DataAsset_getType_R_mindustry_mod_data_DataAssetType) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_getType_R_mindustry_mod_data_DataAssetType])(ctx, (frame[3].o));
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[2].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[3].o)))->F_path;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[accent]\u0001: [lightgray]\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(246);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(247);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_LoadDialog_lambda$addSetup$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$addSetup$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"msav"_j)));
	sp[0].o = (jobject)SM_mindustry_ui_FileChooser_open_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_FileChooser$FileChooserParams_submitMulti_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_submitMulti_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_LoadDialog_lambda$addSetup$1_Array1_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$addSetup$1", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(200);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_7:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_8;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(201);
	jint temp0 = (jint)SM_mindustry_io_SaveIO_isSaveValid_arc_files_Fi_R_boolean(ctx, (frame[5].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)SM_mindustry_io_SaveIO_getMeta_arc_files_Fi_R_mindustry_io_SaveMeta(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(204);
	sp[0].o = (jobject)((mindustry_io_SaveMeta *) NULL_CHECK((frame[6].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	if (sp[0].o == nullptr) goto label_0;
	}
	{
	LINE_NUMBER(205);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@save.nocampaign"_j))));
	goto label_14;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(208);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_saves;
	sp[0].o = (jobject)((func_mindustry_game_Saves_importSave_arc_files_Fi_R_mindustry_game_Saves$SaveSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_importSave_arc_files_Fi_R_mindustry_game_Saves$SaveSlot])(ctx, sp[0].o, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(212);
	goto label_14;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(209);
	frame[7].o = sp[0].o;
	LINE_NUMBER(210);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[7].o));
	LINE_NUMBER(211);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@save.import.fail"_j))), (frame[7].o));
	}
label_14:;
	LINE_NUMBER(214);
	goto label_17;
label_10:;
	{
	LINE_NUMBER(215);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@save.import.invalid"_j))));
	}
label_17:;
	{
	LINE_NUMBER(200);
	INST_IINC(4, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(219);
	((func_mindustry_ui_dialogs_LoadDialog_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_LoadDialog_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$11_java_lang_String_mindustry_game_Saves$SaveSlot_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[13];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$rebuild$11", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_LoadDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(169);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-2.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(280.0f)));
	LINE_NUMBER(170);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(171);
	sp[0].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"save.map"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = frame[0].o;
	sp[5].o = (jobject)((func_mindustry_game_Saves$SaveSlot_getMap_R_mindustry_maps_Map) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_getMap_R_mindustry_maps_Map])(ctx, (frame[1].o));
	jobject temp1 = sp[4].o;
	sp[4].o = sp[3].o;
	jobject temp2 = sp[5].o;
	sp[5].i = temp0;
	sp[6].o = temp1;
	sp += 7;
	if (temp2 != nullptr) goto label_4;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unknown"_j))));
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	sp[0].o = (jobject)((func_mindustry_game_Saves$SaveSlot_getMap_R_mindustry_maps_Map) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_getMap_R_mindustry_maps_Map])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_maps_Map_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Map_name_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_5:;
	{
	sp -= 8;
	sp[4].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[6].o, sp[7].o);
	ARRAY_ACCESS(jobject, sp[3].o, sp[5].i) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(172);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(173);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_game_Saves$SaveSlot_mode_R_mindustry_game_Gamemode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_mode_R_mindustry_game_Gamemode])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_game_Gamemode_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Gamemode_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_bundle;
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"save.wave"_j));
	sp[5].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[6].o = frame[0].o;
	jint temp1 = (jint)((func_mindustry_game_Saves$SaveSlot_getWave_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_getWave_R_int])(ctx, (frame[1].o));
	sp[6].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[6].o, boxInteger(ctx, temp1));
	ARRAY_ACCESS(jobject, sp[5].o, temp0) = sp[6].o;
	sp[3].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[3].o, sp[4].o, sp[5].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 /\u0001 \u0001"_j.string, 3, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(174);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(175);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Prov_2);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(177);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Prov_3);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(178);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(179);
	sp[0].o = frame[2].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_mindustry_game_Saves$SaveSlot_getDate_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_getDate_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(180);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$13_java_lang_String_mindustry_game_Saves$SaveSlot_R_java_lang_CharSequence(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$rebuild$13", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_LoadDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(177);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"save.playtime"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((func_mindustry_game_Saves$SaveSlot_getPlayTime_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_getPlayTime_R_java_lang_String])(ctx, (frame[1].o));
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$12_java_lang_String_mindustry_game_Saves$SaveSlot_R_java_lang_CharSequence(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$rebuild$12", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_LoadDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(175);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"save.autosave"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[4].o = (jobject)SF_arc_Core_bundle;
	jint temp1 = (jint)((func_mindustry_game_Saves$SaveSlot_isAutosave_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_isAutosave_R_boolean])(ctx, (frame[1].o));
	jobject temp2 = sp[3].o;
	sp[3].o = sp[2].o;
	jobject temp3 = sp[4].o;
	sp[4].i = temp0;
	sp[5].o = temp2;
	sp[6].o = temp3;
	sp += 7;
	if (temp1 == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"on"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"off"_j));
label_2:;
	{
	sp -= 8;
	sp[3].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[6].o, sp[7].o);
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[5].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, sp[4].i) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$10_arc_graphics_g2d_TextureRegion_mindustry_game_Saves$SaveSlot_mindustry_ui_BorderImage(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$rebuild$10", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_LoadDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((func_mindustry_ui_BorderImage_getDrawable_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_BorderImage_getDrawable_R_arc_scene_style_Drawable])(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_arc_scene_style_TextureRegionDrawable, sp[0].o));
	LINE_NUMBER(156);
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[3].o));
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_texture;
	jint temp0 = (jint)((func_arc_graphics_Texture_isDisposed_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_isDisposed_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(157);
	((func_arc_scene_style_TextureRegionDrawable_setRegion_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_setRegion_arc_graphics_g2d_TextureRegion])(ctx, (frame[3].o), (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((func_mindustry_game_Saves$SaveSlot_previewTexture_R_arc_graphics_Texture) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_previewTexture_R_arc_graphics_Texture])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(161);
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[3].o));
	if (sp[0].o != (frame[0].o)) goto label_5;
	}
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(162);
	sp[0].o = frame[3].o;
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture(ctx, sp[1].o, (frame[4].o));
	((func_arc_scene_style_TextureRegionDrawable_setRegion_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_setRegion_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(164);
	sp[0].o = frame[2].o;
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_mindustry_ui_BorderImage_setScaling_arc_util_Scaling_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_BorderImage_setScaling_arc_util_Scaling_R_arc_scene_ui_Image])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$2_mindustry_game_Saves$SaveSlot_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$rebuild$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(115);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_game_Saves$SaveSlot_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[accent]\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(230.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(117);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_16);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(-10.0f);
	LINE_NUMBER(147);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$3_mindustry_game_Saves$SaveSlot_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$rebuild$3", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	LINE_NUMBER(121);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_save;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyTogglei;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_25(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_25 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_25);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = frame[1].o;
	LINE_NUMBER(123);
	jint temp0 = (jint)((func_mindustry_game_Saves$SaveSlot_isAutosave_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_isAutosave_R_boolean])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(125);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_trash;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_26(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_26 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_26);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(130);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(132);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_pencil;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_27(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_27 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_27);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(137);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(139);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_export;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_28(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_28 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_28);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(145);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$9_mindustry_game_Saves$SaveSlot(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$rebuild$9", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_LoadDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(140);
	jint temp0 = (jint)((func_mindustry_game_Saves$SaveSlot_hasExternalAssets_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_hasExternalAssets_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_game_Saves$SaveSlot_isBeingPlayed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_isBeingPlayed_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(141);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@save.export.needsload"_j))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_mindustry_game_Saves$SaveSlot_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"msav"_j));
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_mindustry_core_Platform$FileWriter_1(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_mindustry_core_Platform$FileWriter_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_mindustry_core_Platform$FileWriter_1);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_ui_FileChooser_export_java_lang_String_java_lang_String_mindustry_core_Platform$FileWriter(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_3:;
	LINE_NUMBER(145);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$7_mindustry_game_Saves$SaveSlot(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$rebuild$7", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(133);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@save.rename"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@save.rename.text"_j));
	sp[3].o = (jobject)((func_mindustry_game_Saves$SaveSlot_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_getName_R_java_lang_String])(ctx, (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_arc_func_Cons_17);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$8_mindustry_game_Saves$SaveSlot_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$rebuild$8", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(134);
	((func_mindustry_game_Saves$SaveSlot_setName_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_setName_java_lang_String])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(135);
	((func_mindustry_ui_dialogs_LoadDialog_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_LoadDialog_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$5_mindustry_game_Saves$SaveSlot(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$rebuild$5", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(126);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@confirm"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@save.delete.confirm"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_29(ctx);
		auto proxy = (mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_29 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadDialog_invoke_java_lang_Runnable_29);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$6_mindustry_game_Saves$SaveSlot(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$rebuild$6", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(127);
	((func_mindustry_game_Saves$SaveSlot_delete) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_delete])(ctx, (frame[1].o));
	LINE_NUMBER(128);
	((func_mindustry_ui_dialogs_LoadDialog_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_LoadDialog_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$4_mindustry_game_Saves$SaveSlot(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$rebuild$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_LoadDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_game_Saves$SaveSlot_isAutosave_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_isAutosave_R_boolean])(ctx, (frame[0].o));
	sp += 1;
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((func_mindustry_game_Saves$SaveSlot_setAutosave_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_setAutosave_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$1_mindustry_game_Saves$SaveSlot_mindustry_game_Saves$SaveSlot_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$rebuild$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_LoadDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(93);
	jlong temp0 = (jlong)((func_mindustry_game_Saves$SaveSlot_getTimestamp_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_getTimestamp_R_long])(ctx, (frame[0].o));
	jlong temp1 = (jlong)((func_mindustry_game_Saves$SaveSlot_getTimestamp_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_getTimestamp_R_long])(ctx, (frame[1].o));
	jint temp2 = (jint)SM_java_lang_Long_compare_long_long_R_int(ctx, temp0, temp1);
	popStackFrame(ctx);
	return (-temp2);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$rebuild$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK((frame[0].o)))->F_pane;
	jint temp0 = (jint)((func_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_LoadDialog_lambda$setup$2_mindustry_game_Gamemode_arc_scene_ui_ImageButton_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$setup$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK((frame[0].o)))->F_hidden;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
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

void M_mindustry_ui_dialogs_LoadDialog_lambda$setup$1_mindustry_game_Gamemode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$setup$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK((frame[0].o)))->F_hidden;
	jint temp0 = (jint)((func_arc_struct_Seq_addUnique_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addUnique_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK((frame[0].o)))->F_hidden;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(72);
	((func_mindustry_ui_dialogs_LoadDialog_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_LoadDialog_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_LoadDialog_lambda$setup$0_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$setup$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	sp += 1;
	if (temp0 <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 2;
	((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK(sp[0].o))->F_searchString = (jref) sp[1].o;
	LINE_NUMBER(63);
	((func_mindustry_ui_dialogs_LoadDialog_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_LoadDialog_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_LoadDialog_lambda$new$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadDialog:lambda$new$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	((mindustry_ui_dialogs_LoadDialog *) NULL_CHECK((frame[0].o)))->F_searchString = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(42);
	((func_mindustry_ui_dialogs_LoadDialog_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_LoadDialog_setup])(ctx, (frame[0].o));
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_LoadDialog[] {
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
	(void *) M_mindustry_ui_dialogs_LoadDialog_show_R_arc_scene_ui_Dialog,
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
	(void *) M_mindustry_ui_dialogs_LoadDialog_lambda$new$0,
	(void *) M_mindustry_ui_dialogs_LoadDialog_setup,
	(void *) M_mindustry_ui_dialogs_LoadDialog_rebuild,
	(void *) M_mindustry_ui_dialogs_LoadDialog_addSetup,
	(void *) M_mindustry_ui_dialogs_LoadDialog_runLoadSave_mindustry_game_Saves$SaveSlot,
	(void *) M_mindustry_ui_dialogs_LoadDialog_modifyButton_arc_scene_ui_TextButton_mindustry_game_Saves$SaveSlot,
	(void *) M_mindustry_ui_dialogs_LoadDialog_lambda$modifyButton$0_arc_scene_ui_TextButton_mindustry_game_Saves$SaveSlot,
	(void *) M_mindustry_ui_dialogs_LoadDialog_lambda$runLoadSave$0_mindustry_game_Saves$SaveSlot,
	(void *) M_mindustry_ui_dialogs_LoadDialog_lambda$runLoadSave$1_mindustry_game_Saves$SaveSlot,
	(void *) M_mindustry_ui_dialogs_LoadDialog_lambda$addSetup$0,
	(void *) M_mindustry_ui_dialogs_LoadDialog_lambda$addSetup$1_Array1_arc_files_Fi,
	(void *) M_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$2_mindustry_game_Saves$SaveSlot_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$3_mindustry_game_Saves$SaveSlot_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$7_mindustry_game_Saves$SaveSlot,
	(void *) M_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$8_mindustry_game_Saves$SaveSlot_java_lang_String,
	(void *) M_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$5_mindustry_game_Saves$SaveSlot,
	(void *) M_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$6_mindustry_game_Saves$SaveSlot,
	(void *) M_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$0,
	(void *) M_mindustry_ui_dialogs_LoadDialog_lambda$setup$2_mindustry_game_Gamemode_arc_scene_ui_ImageButton_R_boolean,
	(void *) M_mindustry_ui_dialogs_LoadDialog_lambda$setup$1_mindustry_game_Gamemode,
	(void *) M_mindustry_ui_dialogs_LoadDialog_lambda$setup$0_java_lang_String,
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
	{ "rebuild", "()V" },
	{ "addSetup", "()V" },
	{ "runLoadSave", "(Lmindustry/game/Saves$SaveSlot;)V" },
	{ "modifyButton", "(Larc/scene/ui/TextButton;Lmindustry/game/Saves$SaveSlot;)V" },
	{ "lambda$modifyButton$0", "(Larc/scene/ui/TextButton;Lmindustry/game/Saves$SaveSlot;)V" },
	{ "lambda$runLoadSave$0", "(Lmindustry/game/Saves$SaveSlot;)V" },
	{ "lambda$runLoadSave$1", "(Lmindustry/game/Saves$SaveSlot;)V" },
	{ "lambda$addSetup$0", "()V" },
	{ "lambda$addSetup$1", "([Larc/files/Fi;)V" },
	{ "lambda$rebuild$2", "(Lmindustry/game/Saves$SaveSlot;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuild$3", "(Lmindustry/game/Saves$SaveSlot;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuild$7", "(Lmindustry/game/Saves$SaveSlot;)V" },
	{ "lambda$rebuild$8", "(Lmindustry/game/Saves$SaveSlot;Ljava/lang/String;)V" },
	{ "lambda$rebuild$5", "(Lmindustry/game/Saves$SaveSlot;)V" },
	{ "lambda$rebuild$6", "(Lmindustry/game/Saves$SaveSlot;)V" },
	{ "lambda$rebuild$0", "()V" },
	{ "lambda$setup$2", "(Lmindustry/game/Gamemode;Larc/scene/ui/ImageButton;)Z" },
	{ "lambda$setup$1", "(Lmindustry/game/Gamemode;)V" },
	{ "lambda$setup$0", "(Ljava/lang/String;)V" },
};

static FieldMetadata fields[] {
	{ "slots", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_dialogs_LoadDialog, F_slots), "Larc/scene/ui/layout/Table;", 0 },
	{ "searchString", &class_java_lang_String, offsetof(mindustry_ui_dialogs_LoadDialog, F_searchString), "Ljava/lang/String;", 0 },
	{ "hidden", &class_arc_struct_Seq, offsetof(mindustry_ui_dialogs_LoadDialog, F_hidden), "Larc/struct/Seq;", 0 },
	{ "searchField", &class_arc_scene_ui_TextField, offsetof(mindustry_ui_dialogs_LoadDialog, F_searchField), "Larc/scene/ui/TextField;", 0 },
	{ "pane", &class_arc_scene_ui_ScrollPane, offsetof(mindustry_ui_dialogs_LoadDialog, F_pane), "Larc/scene/ui/ScrollPane;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_LoadDialog, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_LoadDialog_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "setup", (intptr_t) M_mindustry_ui_dialogs_LoadDialog_setup, VTABLE_mindustry_ui_dialogs_LoadDialog_setup, "()V", 4 },
	{ "rebuild", (intptr_t) M_mindustry_ui_dialogs_LoadDialog_rebuild, VTABLE_mindustry_ui_dialogs_LoadDialog_rebuild, "()V", 1 },
	{ "addSetup", (intptr_t) M_mindustry_ui_dialogs_LoadDialog_addSetup, VTABLE_mindustry_ui_dialogs_LoadDialog_addSetup, "()V", 1 },
	{ "runLoadSave", (intptr_t) M_mindustry_ui_dialogs_LoadDialog_runLoadSave_mindustry_game_Saves$SaveSlot, VTABLE_mindustry_ui_dialogs_LoadDialog_runLoadSave_mindustry_game_Saves$SaveSlot, "(Lmindustry/game/Saves$SaveSlot;)V", 1 },
	{ "modifyButton", (intptr_t) M_mindustry_ui_dialogs_LoadDialog_modifyButton_arc_scene_ui_TextButton_mindustry_game_Saves$SaveSlot, VTABLE_mindustry_ui_dialogs_LoadDialog_modifyButton_arc_scene_ui_TextButton_mindustry_game_Saves$SaveSlot, "(Larc/scene/ui/TextButton;Lmindustry/game/Saves$SaveSlot;)V", 1 },
	{ "show", (intptr_t) M_mindustry_ui_dialogs_LoadDialog_show_R_arc_scene_ui_Dialog, VTABLE_mindustry_ui_dialogs_LoadDialog_show_R_arc_scene_ui_Dialog, "()Larc/scene/ui/Dialog;", 1 },
	{ "lambda$modifyButton$0", (intptr_t) M_mindustry_ui_dialogs_LoadDialog_lambda$modifyButton$0_arc_scene_ui_TextButton_mindustry_game_Saves$SaveSlot, VTABLE_mindustry_ui_dialogs_LoadDialog_lambda$modifyButton$0_arc_scene_ui_TextButton_mindustry_game_Saves$SaveSlot, "(Larc/scene/ui/TextButton;Lmindustry/game/Saves$SaveSlot;)V", 4098 },
	{ "lambda$runLoadSave$0", (intptr_t) M_mindustry_ui_dialogs_LoadDialog_lambda$runLoadSave$0_mindustry_game_Saves$SaveSlot, VTABLE_mindustry_ui_dialogs_LoadDialog_lambda$runLoadSave$0_mindustry_game_Saves$SaveSlot, "(Lmindustry/game/Saves$SaveSlot;)V", 4098 },
	{ "lambda$runLoadSave$1", (intptr_t) M_mindustry_ui_dialogs_LoadDialog_lambda$runLoadSave$1_mindustry_game_Saves$SaveSlot, VTABLE_mindustry_ui_dialogs_LoadDialog_lambda$runLoadSave$1_mindustry_game_Saves$SaveSlot, "(Lmindustry/game/Saves$SaveSlot;)V", 4098 },
	{ "lambda$runLoadSave$4", (intptr_t) SM_mindustry_ui_dialogs_LoadDialog_lambda$runLoadSave$4_arc_scene_ui_layout_Collapser_arc_scene_ui_TextButton_R_boolean, 0, "(Larc/scene/ui/layout/Collapser;Larc/scene/ui/TextButton;)Z", 4106 },
	{ "lambda$runLoadSave$2", (intptr_t) SM_mindustry_ui_dialogs_LoadDialog_lambda$runLoadSave$2_arc_struct_Seq_arc_scene_ui_layout_Table, 0, "(Larc/struct/Seq;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$runLoadSave$3", (intptr_t) SM_mindustry_ui_dialogs_LoadDialog_lambda$runLoadSave$3_arc_struct_Seq_arc_scene_ui_layout_Table, 0, "(Larc/struct/Seq;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$addSetup$0", (intptr_t) M_mindustry_ui_dialogs_LoadDialog_lambda$addSetup$0, VTABLE_mindustry_ui_dialogs_LoadDialog_lambda$addSetup$0, "()V", 4098 },
	{ "lambda$addSetup$1", (intptr_t) M_mindustry_ui_dialogs_LoadDialog_lambda$addSetup$1_Array1_arc_files_Fi, VTABLE_mindustry_ui_dialogs_LoadDialog_lambda$addSetup$1_Array1_arc_files_Fi, "([Larc/files/Fi;)V", 4098 },
	{ "lambda$rebuild$11", (intptr_t) SM_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$11_java_lang_String_mindustry_game_Saves$SaveSlot_arc_scene_ui_layout_Table, 0, "(Ljava/lang/String;Lmindustry/game/Saves$SaveSlot;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$rebuild$13", (intptr_t) SM_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$13_java_lang_String_mindustry_game_Saves$SaveSlot_R_java_lang_CharSequence, 0, "(Ljava/lang/String;Lmindustry/game/Saves$SaveSlot;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$rebuild$12", (intptr_t) SM_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$12_java_lang_String_mindustry_game_Saves$SaveSlot_R_java_lang_CharSequence, 0, "(Ljava/lang/String;Lmindustry/game/Saves$SaveSlot;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$rebuild$10", (intptr_t) SM_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$10_arc_graphics_g2d_TextureRegion_mindustry_game_Saves$SaveSlot_mindustry_ui_BorderImage, 0, "(Larc/graphics/g2d/TextureRegion;Lmindustry/game/Saves$SaveSlot;Lmindustry/ui/BorderImage;)V", 4106 },
	{ "lambda$rebuild$2", (intptr_t) M_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$2_mindustry_game_Saves$SaveSlot_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$2_mindustry_game_Saves$SaveSlot_arc_scene_ui_layout_Table, "(Lmindustry/game/Saves$SaveSlot;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$rebuild$3", (intptr_t) M_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$3_mindustry_game_Saves$SaveSlot_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$3_mindustry_game_Saves$SaveSlot_arc_scene_ui_layout_Table, "(Lmindustry/game/Saves$SaveSlot;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$rebuild$9", (intptr_t) SM_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$9_mindustry_game_Saves$SaveSlot, 0, "(Lmindustry/game/Saves$SaveSlot;)V", 4106 },
	{ "lambda$rebuild$7", (intptr_t) M_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$7_mindustry_game_Saves$SaveSlot, VTABLE_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$7_mindustry_game_Saves$SaveSlot, "(Lmindustry/game/Saves$SaveSlot;)V", 4098 },
	{ "lambda$rebuild$8", (intptr_t) M_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$8_mindustry_game_Saves$SaveSlot_java_lang_String, VTABLE_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$8_mindustry_game_Saves$SaveSlot_java_lang_String, "(Lmindustry/game/Saves$SaveSlot;Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$5", (intptr_t) M_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$5_mindustry_game_Saves$SaveSlot, VTABLE_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$5_mindustry_game_Saves$SaveSlot, "(Lmindustry/game/Saves$SaveSlot;)V", 4098 },
	{ "lambda$rebuild$6", (intptr_t) M_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$6_mindustry_game_Saves$SaveSlot, VTABLE_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$6_mindustry_game_Saves$SaveSlot, "(Lmindustry/game/Saves$SaveSlot;)V", 4098 },
	{ "lambda$rebuild$4", (intptr_t) SM_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$4_mindustry_game_Saves$SaveSlot, 0, "(Lmindustry/game/Saves$SaveSlot;)V", 4106 },
	{ "lambda$rebuild$1", (intptr_t) SM_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$1_mindustry_game_Saves$SaveSlot_mindustry_game_Saves$SaveSlot_R_int, 0, "(Lmindustry/game/Saves$SaveSlot;Lmindustry/game/Saves$SaveSlot;)I", 4106 },
	{ "lambda$rebuild$0", (intptr_t) M_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$0, VTABLE_mindustry_ui_dialogs_LoadDialog_lambda$rebuild$0, "()V", 4098 },
	{ "lambda$setup$2", (intptr_t) M_mindustry_ui_dialogs_LoadDialog_lambda$setup$2_mindustry_game_Gamemode_arc_scene_ui_ImageButton_R_boolean, VTABLE_mindustry_ui_dialogs_LoadDialog_lambda$setup$2_mindustry_game_Gamemode_arc_scene_ui_ImageButton_R_boolean, "(Lmindustry/game/Gamemode;Larc/scene/ui/ImageButton;)Z", 4098 },
	{ "lambda$setup$1", (intptr_t) M_mindustry_ui_dialogs_LoadDialog_lambda$setup$1_mindustry_game_Gamemode, VTABLE_mindustry_ui_dialogs_LoadDialog_lambda$setup$1_mindustry_game_Gamemode, "(Lmindustry/game/Gamemode;)V", 4098 },
	{ "lambda$setup$0", (intptr_t) M_mindustry_ui_dialogs_LoadDialog_lambda$setup$0_java_lang_String, VTABLE_mindustry_ui_dialogs_LoadDialog_lambda$setup$0_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_ui_dialogs_LoadDialog_lambda$new$0, VTABLE_mindustry_ui_dialogs_LoadDialog_lambda$new$0, "()V", 4098 },
};

Class class_mindustry_ui_dialogs_LoadDialog{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/LoadDialog",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_BaseDialog,
		.size = sizeof(mindustry_ui_dialogs_LoadDialog),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_LoadDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_LoadDialog,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_LoadDialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 34,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 317,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_LoadDialog = registerClass(&class_mindustry_ui_dialogs_LoadDialog);

}
