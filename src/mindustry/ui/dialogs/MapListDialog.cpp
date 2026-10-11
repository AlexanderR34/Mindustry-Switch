#include "mindustry/ui/dialogs/MapListDialog.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_java_lang_Runnable_25.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_java_lang_Runnable_26.h"
#include "arc/func/Prov.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_java_lang_Runnable_23.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_java_lang_Runnable_24.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_java_lang_Runnable_29.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_java_lang_Runnable_27.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_java_lang_Runnable_28.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/input/KeyCode.h"
#include "arc/scene/ui/Image.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_arc_func_Func_1.h"
#include "mindustry/maps/Maps.h"
#include "arc/struct/Seq.h"
#include "mindustry/mod/Mods_ModMeta.h"
#include "arc/Settings.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_java_lang_Runnable_32.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_java_lang_Runnable_33.h"
#include "arc/func/Boolf.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_java_lang_Runnable_30.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_java_lang_Runnable_31.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_java_lang_Runnable_18.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_java_lang_Runnable_19.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_java_lang_Runnable_17.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "arc/graphics/Texture.h"
#include "arc/Graphics.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/content/Planets.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_java_lang_Runnable_21.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_java_lang_Runnable_22.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_java_lang_Runnable_20.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/game/Rules.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "arc/func/Cons.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_arc_func_Cons_17.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_arc_func_Cons_16.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_arc_func_Cons_19.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_arc_func_Cons_18.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_arc_func_Cons_13.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_arc_func_Cons_12.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_arc_func_Cons_15.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_arc_func_Cons_14.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/scene/ui/layout/Scl.h"
#include "mindustry/game/Gamemode.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_arc_func_Cons_20.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_arc_func_Cons_22.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_arc_func_Cons_21.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/ui/dialogs/MapListDialog.h"
#include "arc/scene/ui/ScrollPane.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_arc_func_Cons_23.h"
#include "arc/scene/event/EventListener.h"
#include "mindustry/Vars.h"
#include "arc/scene/ui/TextField.h"
#include "mindustry/ui/BorderImage.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_arc_func_Prov_3.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_arc_func_Prov_2.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/TextButton.h"
#include "arc/scene/ui/ImageButton.h"
#include "mindustry/maps/Map.h"
#include "arc/func/Func.h"
#include "arc/scene/ui/Label.h"
#include "mindustry/ui/dialogs/MapListDialog_MapViewSettings.h"
#include "arc/Application.h"
#include "java/lang/String.h"
#include "java/util/Comparator.h"
#include "arc/scene/style/Drawable.h"
#include "java/lang/Math.h"
#include "mindustry/ui/dialogs/MapListDialog_3.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/ui/dialogs/MapListDialog_1.h"
#include "mindustry/gen/Icon.h"
#include "mindustry/ui/dialogs/MapListDialog_2.h"
#include "arc/scene/Group.h"
#include "arc/util/Scaling.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/dialogs/MapListDialog_MapPriority.h"
#include "java/lang/Enum.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "mindustry/type/Planet.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_arc_func_Boolf_5.h"
#include "java/util/Objects.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_arc_func_Boolf_8.h"
#include "arc/struct/SnapshotSeq.h"
#include "java/lang/Class.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_arc_func_Boolf_9.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_arc_func_Boolf_6.h"
#include "mindustry/ui/dialogs/MapListDialog_invoke_arc_func_Boolf_7.h"

extern "C" {

jobject SF_mindustry_ui_dialogs_MapListDialog_settings;

void mark_mindustry_ui_dialogs_MapListDialog(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ui_dialogs_MapListDialog_settings)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_dialogs_MapListDialog_settings)->clazz)->markFunction)((jobject) SF_mindustry_ui_dialogs_MapListDialog_settings, mark, depth + 1);
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
	auto self = (mindustry_ui_dialogs_MapListDialog *) object;
	if (self->F_activeDialog)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_activeDialog)->clazz)->markFunction)((jobject) self->F_activeDialog, mark, depth + 1);
	if (self->F_searchString)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_searchString)->clazz)->markFunction)((jobject) self->F_searchString, mark, depth + 1);
	if (self->F_modes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_modes)->clazz)->markFunction)((jobject) self->F_modes, mark, depth + 1);
	if (self->F_availablePlanets)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_availablePlanets)->clazz)->markFunction)((jobject) self->F_availablePlanets, mark, depth + 1);
	if (self->F_mapTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mapTable)->clazz)->markFunction)((jobject) self->F_mapTable, mark, depth + 1);
	if (self->F_searchField)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_searchField)->clazz)->markFunction)((jobject) self->F_searchField, mark, depth + 1);
	if (self->F_rulesCache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rulesCache)->clazz)->markFunction)((jobject) self->F_rulesCache, mark, depth + 1);
}

void init_mindustry_ui_dialogs_MapListDialog_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(77);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK(sp[0].o))->F_modes = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK(sp[0].o))->F_availablePlanets = (jref) sp[1].o;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK(sp[0].o))->F_mapTable = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK(sp[0].o))->F_rulesCache = (jref) sp[1].o;
	LINE_NUMBER(79);
	((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_displayType = (frame[2].i);
	LINE_NUMBER(81);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(83);
	((func_mindustry_ui_dialogs_MapListDialog_addCloseListener) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_MapListDialog_addCloseListener])(ctx, (frame[0].o));
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_17(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_17 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_17);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_MapListDialog_hidden_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_MapListDialog_hidden_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_18(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_18 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_18);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_MapListDialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_MapListDialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_19(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_19 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_19);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_MapListDialog_onResize_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_MapListDialog_onResize_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_buildButtons(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:buildButtons", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(95);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_setup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:setup", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_planets_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_planets_R_arc_struct_Seq])(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Boolf_5);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Func_1);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK(sp[0].o))->F_availablePlanets = (jref) sp[1].o;
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_availablePlanets;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_sun;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[1].o))->F_name;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(103);
	((func_mindustry_ui_dialogs_MapListDialog_makeButtonOverlay) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_MapListDialog_makeButtonOverlay])(ctx, (frame[0].o));
	LINE_NUMBER(105);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, sp[0].o);
	LINE_NUMBER(107);
	((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_searchString = (jref) (jobject(nullptr));
	LINE_NUMBER(109);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	if (((jint)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_displayType) == 0) goto label_6;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@back"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_left;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_20(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_20 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_20);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(420.0f)), (jfloat(64.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(2)));
	LINE_NUMBER(111);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@back"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_left;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_21(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_21 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_21);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(210.0f)), (jfloat(64.0f)));
	}
label_9:;
	{
	LINE_NUMBER(116);
	((func_mindustry_ui_dialogs_MapListDialog_buildButtons) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_MapListDialog_buildButtons])(ctx, (frame[0].o));
	LINE_NUMBER(118);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(120);
	((func_mindustry_ui_dialogs_MapListDialog_rebuildMaps) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_MapListDialog_rebuildMaps])(ctx, (frame[0].o));
	LINE_NUMBER(122);
	clinit_arc_scene_ui_ScrollPane(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ScrollPane);
	sp[1].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_mapTable;
	init_arc_scene_ui_ScrollPane_arc_scene_Element(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(123);
	((func_arc_scene_ui_ScrollPane_setFadeScrollBars_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_setFadeScrollBars_boolean])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(124);
	((func_arc_scene_ui_ScrollPane_setScrollingDisabledX_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_setScrollingDisabledX_boolean])(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(126);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(127);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_zoom;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(128);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8""_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o, sp[3].o);
	jint temp0 = 50;
	LINE_NUMBER(131);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[1].o);
	((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK(sp[0].o))->F_searchField = (jref) (checkCast(ctx, &class_arc_scene_ui_TextField, sp[1].o));
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_searchField;
	((func_arc_scene_ui_TextField_setMessageText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setMessageText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.search"_j))));
	LINE_NUMBER(133);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_filter;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_22(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_22 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_22);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.filters"_j))));
	LINE_NUMBER(135);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(136);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(137);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(28.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_uniformX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_uniformX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(64.0f)));
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_rebuildMaps(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:rebuildMaps", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_mapTable;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(143);
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_mapTable;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(12.0f)));
	LINE_NUMBER(145);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp1 = jfloat(temp0);
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(230.0f)));
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint((temp1 / temp2))), (jint(1)));
	frame[1].i = temp3;
	LINE_NUMBER(146);
	frame[2].f = (jfloat(200.0f));
	LINE_NUMBER(147);
	frame[3].i = (jint(1));
	LINE_NUMBER(149);
	frame[4].i = (jint(0));
	LINE_NUMBER(151);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(152);
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_planets;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Boolf_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(154);
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	if (((jint)((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_showCustom) == 0) goto label_9;
	}
	{
	sp[0].o = frame[5].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_maps;
	sp[1].o = (jobject)((func_mindustry_maps_Maps_customMaps_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_maps_Maps_customMaps_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(155);
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	if (((jint)((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_showBuiltIn) == 0) goto label_10;
	}
	{
	sp[0].o = frame[5].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_maps;
	sp[1].o = (jobject)((func_mindustry_maps_Maps_defaultMaps_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_maps_Maps_defaultMaps_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	{
	LINE_NUMBER(156);
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	if (((jint)((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_showModded) == 0) goto label_11;
	}
	{
	sp[0].o = frame[5].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_maps;
	sp[1].o = (jobject)((func_mindustry_maps_Maps_moddedMaps_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_maps_Maps_moddedMaps_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((func_arc_struct_Seq_distinct_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_distinct_R_arc_struct_Seq])(ctx, (frame[5].o));
	LINE_NUMBER(159);
	sp[0].o = frame[5].o;
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	sp[1].o = (jobject)((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[1].o))->F_priority;
	sp[1].o = (jobject)((mindustry_ui_dialogs_MapListDialog$MapPriority *) NULL_CHECK(sp[1].o))->F_comparator;
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(161);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[5].o));
	frame[7].o = sp[0].o;
	}
label_14:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_maps_Map, sp[0].o));
	LINE_NUMBER(163);
	frame[9].i = (jint(0));
	LINE_NUMBER(164);
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_modes;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	}
label_18:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[10].o)))(ctx, (frame[10].o));
	if (temp0 == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[10].o)))(ctx, (frame[10].o));
	frame[11].o = (checkCast(ctx, &class_mindustry_game_Gamemode, sp[0].o));
	LINE_NUMBER(165);
	jint temp0 = frame[9].i;
	jint temp1 = (jint)((func_mindustry_game_Gamemode_valid_mindustry_maps_Map_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_game_Gamemode_valid_mindustry_maps_Map_R_boolean])(ctx, (frame[11].o), (frame[8].o));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 != 0) goto label_21;
	}
	INST_ICONST(1);
	goto label_22;
label_21:;
	INST_ICONST(0);
label_22:;
	{
	sp -= 2;
	frame[9].i = (sp[0].i | sp[1].i);
	LINE_NUMBER(166);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(169);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_24;
	}
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_rulesCache;
	sp[1].o = frame[8].o;
	sp[2].o = frame[8].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Prov_2);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[10].o = (checkCast(ctx, &class_mindustry_game_Rules, sp[0].o));
	LINE_NUMBER(171);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[10].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[1].o))->F_name;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_24;
	}
	LINE_NUMBER(172);
	goto label_14;
label_24:;
	{
	LINE_NUMBER(176);
	if ((frame[9].i) != 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_searchString;
	if (sp[0].o == nullptr) goto label_28;
	}
	{
	sp[0].o = frame[8].o;
	LINE_NUMBER(177);
	sp[0].o = (jobject)((func_mindustry_maps_Map_plainName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Map_plainName_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_searchString;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_28;
	}
	{
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	if (((jint)((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_searchAuthor) == 0) goto label_30;
	}
	{
	sp[0].o = frame[8].o;
	LINE_NUMBER(178);
	sp[0].o = (jobject)((func_mindustry_maps_Map_plainAuthor_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Map_plainAuthor_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_searchString;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_28;
	}
label_30:;
	{
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	if (((jint)((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_searchDescription) == 0) goto label_32;
	}
	{
	sp[0].o = frame[8].o;
	LINE_NUMBER(179);
	sp[0].o = (jobject)((func_mindustry_maps_Map_plainDescription_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Map_plainDescription_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_searchString;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_28;
	}
label_32:;
	{
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	if (((jint)((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_searchModname) == 0) goto label_14;
	}
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[8].o)))->F_mod;
	if (sp[0].o != nullptr) goto label_35;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_36;
label_35:;
	{
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[8].o)))->F_mod;
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[0].o))->F_meta;
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_displayName;
	sp[0].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_36:;
	{
	sp -= 1;
	sp[1].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_searchString;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_28;
	}
	LINE_NUMBER(181);
	goto label_14;
label_28:;
	{
	LINE_NUMBER(184);
	frame[3].i = (jint(0));
	LINE_NUMBER(186);
	if (((frame[4].i) % (frame[1].i)) != 0) goto label_39;
	}
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_mapTable;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	}
label_39:;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_mapTable;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8""_j));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_grayt;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_23(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_23 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_23);
		proxy->F_field1 = (jref) (frame[8].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].f));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_bottom_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_bottom_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[10].o = (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o));
	LINE_NUMBER(191);
	((func_arc_scene_ui_TextButton_clearChildren) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_TextButton_clearChildren])(ctx, (frame[10].o));
	LINE_NUMBER(192);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_TextButton_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[10].o), (jfloat(9.0f)));
	LINE_NUMBER(193);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_bottom_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_TextButton_bottom_R_arc_scene_ui_layout_Table])(ctx, (frame[10].o));
	LINE_NUMBER(196);
	sp[0].o = frame[10].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_13);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(207);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(209);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_mindustry_maps_Map_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_maps_Map_name_R_java_lang_String])(ctx, (frame[8].o));
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((frame[2].f) - (jfloat(18.0f))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	((func_arc_scene_ui_Label_setEllipsis_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_Label_setEllipsis_boolean])(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o)), (jint(1)));
	LINE_NUMBER(210);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_TextButton_row_R_arc_scene_ui_layout_Table])(ctx, (frame[10].o));
	LINE_NUMBER(211);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_TextButton_image_R_arc_scene_ui_layout_Cell])(ctx, (frame[10].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(212);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_TextButton_row_R_arc_scene_ui_layout_Table])(ctx, (frame[10].o));
	LINE_NUMBER(213);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(2)));
	jint temp0 = jint(0);
	clinit_arc_scene_ui_Image(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	sp[3].o = (jobject)((func_mindustry_maps_Map_safeTexture_R_arc_graphics_Texture) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_maps_Map_safeTexture_R_arc_graphics_Texture])(ctx, (frame[8].o));
	init_arc_scene_ui_Image_arc_graphics_Texture(ctx, sp[2].o, sp[3].o);
	clinit_arc_util_Scaling(ctx);
	sp[3].o = (jobject)SF_arc_util_Scaling_fit;
	sp[2].o = (jobject)((func_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image])(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_ui_BorderImage(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ui_BorderImage);
	sp[3].o = (jobject)((func_mindustry_maps_Map_safeTexture_R_arc_graphics_Texture) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_maps_Map_safeTexture_R_arc_graphics_Texture])(ctx, (frame[8].o));
	init_mindustry_ui_BorderImage_arc_graphics_Texture(ctx, sp[2].o, sp[3].o);
	clinit_arc_util_Scaling(ctx);
	sp[3].o = (jobject)SF_arc_util_Scaling_fit;
	sp[2].o = (jobject)((func_mindustry_ui_BorderImage_setScaling_arc_util_Scaling_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_ui_BorderImage_setScaling_arc_util_Scaling_R_arc_scene_ui_Image])(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((frame[2].f) - (jfloat(20.0f))));
	LINE_NUMBER(215);
	if (((jint)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_displayType) == 0) goto label_52;
	}
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_TextButton_row_R_arc_scene_ui_layout_Table])(ctx, (frame[10].o));
	LINE_NUMBER(217);
	sp[0].o = frame[10].o;
	sp += 1;
	if (((jint)((mindustry_maps_Map *) NULL_CHECK((frame[8].o)))->F_custom) == 0) goto label_55;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@custom"_j));
	goto label_56;
label_55:;
	{
	if (((jint)((mindustry_maps_Map *) NULL_CHECK((frame[8].o)))->F_workshop) == 0) goto label_57;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@workshop"_j));
	goto label_56;
label_57:;
	{
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[8].o)))->F_mod;
	if (sp[0].o == nullptr) goto label_58;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[8].o)))->F_mod;
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[0].o))->F_meta;
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_displayName;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[lightgray]\u0001"_j.string, 1, sp[0].o);
	sp += 1;
	goto label_56;
	}
label_58:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@builtin"_j));
label_56:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	}
label_52:;
	{
	LINE_NUMBER(220);
	INST_IINC(4, 1);
	LINE_NUMBER(221);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(223);
	if ((frame[3].i) == 0) goto label_60;
	}
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_mapTable;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@maps.none"_j))));
	}
label_60:;
	LINE_NUMBER(226);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_showMapFilters(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:showMapFilters", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"@editor.filters"_j))));
	((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK(sp[0].o))->F_activeDialog = (jref) sp[1].o;
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_activeDialog;
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, sp[0].o);
	LINE_NUMBER(231);
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_activeDialog;
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_24(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_24 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_24);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_BaseDialog_hidden_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hidden_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(232);
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_activeDialog;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_14);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(361);
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_activeDialog;
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(362);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_MapListDialog_show_R_arc_scene_ui_Dialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:show", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject)M_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog(ctx, (frame[0].o));
	LINE_NUMBER(368);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isDesktop_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isDesktop_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_searchField;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(369);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_searchField;
	jint temp0 = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(372);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$showMapFilters$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(233);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(10.0f);
	LINE_NUMBER(325);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(326);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(328);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@editor.filters.type"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(120.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(329);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_16);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp1 = jfloat(10.0f);
	LINE_NUMBER(342);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(343);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(344);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@editor.filters.search"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(120.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(345);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_17);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$18_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$showMapFilters$18", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(346);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.filters.author"_j));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatTogglet;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_25(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_25 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_25);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(150.0f);
	jfloat temp1 = jfloat(60.0f);
	LINE_NUMBER(349);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((jint)((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[1].o))->F_searchAuthor));
	LINE_NUMBER(350);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.filters.description"_j));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatTogglet;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_26(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_26 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_26);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp2 = jfloat(150.0f);
	jfloat temp3 = jfloat(60.0f);
	LINE_NUMBER(353);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2, temp3);
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((jint)((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[1].o))->F_searchDescription));
	LINE_NUMBER(354);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.filters.modname"_j));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatTogglet;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_27(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_27 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_27);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp4 = jfloat(150.0f);
	jfloat temp5 = jfloat(60.0f);
	LINE_NUMBER(357);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp4, temp5);
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((jint)((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[1].o))->F_searchModname));
	LINE_NUMBER(358);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$21(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$showMapFilters$21", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(355);
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	sp += 1;
	if (((jint)((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_searchModname) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_searchModname = sp[1].i;
	LINE_NUMBER(356);
	((func_mindustry_ui_dialogs_MapListDialog_rebuildMaps) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_MapListDialog_rebuildMaps])(ctx, (frame[0].o));
	LINE_NUMBER(357);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$20(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$showMapFilters$20", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(351);
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	sp += 1;
	if (((jint)((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_searchDescription) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_searchDescription = sp[1].i;
	LINE_NUMBER(352);
	((func_mindustry_ui_dialogs_MapListDialog_rebuildMaps) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_MapListDialog_rebuildMaps])(ctx, (frame[0].o));
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$19(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$showMapFilters$19", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(347);
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	sp += 1;
	if (((jint)((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_searchAuthor) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_searchAuthor = sp[1].i;
	LINE_NUMBER(348);
	((func_mindustry_ui_dialogs_MapListDialog_rebuildMaps) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_MapListDialog_rebuildMaps])(ctx, (frame[0].o));
	LINE_NUMBER(349);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$14_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$showMapFilters$14", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(330);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@custom"_j));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatTogglet;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_28(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_28 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_28);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(150.0f);
	jfloat temp1 = jfloat(60.0f);
	LINE_NUMBER(333);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((jint)((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[1].o))->F_showCustom));
	LINE_NUMBER(334);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@builtin"_j));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatTogglet;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_29(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_29 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_29);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp2 = jfloat(150.0f);
	jfloat temp3 = jfloat(60.0f);
	LINE_NUMBER(337);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2, temp3);
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((jint)((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[1].o))->F_showBuiltIn));
	LINE_NUMBER(338);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@modded"_j));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatTogglet;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_30(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_30 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_30);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp4 = jfloat(150.0f);
	jfloat temp5 = jfloat(60.0f);
	LINE_NUMBER(341);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp4, temp5);
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((jint)((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[1].o))->F_showModded));
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$17(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$showMapFilters$17", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(339);
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	sp += 1;
	if (((jint)((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_showModded) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_showModded = sp[1].i;
	LINE_NUMBER(340);
	((func_mindustry_ui_dialogs_MapListDialog_rebuildMaps) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_MapListDialog_rebuildMaps])(ctx, (frame[0].o));
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$16(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$showMapFilters$16", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(335);
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	sp += 1;
	if (((jint)((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_showBuiltIn) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_showBuiltIn = sp[1].i;
	LINE_NUMBER(336);
	((func_mindustry_ui_dialogs_MapListDialog_rebuildMaps) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_MapListDialog_rebuildMaps])(ctx, (frame[0].o));
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$15(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$showMapFilters$15", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(331);
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	sp += 1;
	if (((jint)((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_showCustom) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_showCustom = sp[1].i;
	LINE_NUMBER(332);
	((func_mindustry_ui_dialogs_MapListDialog_rebuildMaps) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_MapListDialog_rebuildMaps])(ctx, (frame[0].o));
	LINE_NUMBER(333);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$1_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$showMapFilters$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(235);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_18(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_18 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_18);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(254);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_19(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_19 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_19);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(267);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(269);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_20(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_20 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_20);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(324);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$9_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$showMapFilters$9", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(271);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_21(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_21 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_21);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$10_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$showMapFilters$10", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(272);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_planet;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyTogglei;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_31(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_31 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_31);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(60.0f);
	LINE_NUMBER(304);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.filters.planetselect"_j))));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Boolf_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(305);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_ui_ImageButton, sp[0].o));
	LINE_NUMBER(306);
	sp[0].o = frame[2].o;
	clinit_mindustry_ui_dialogs_MapListDialog$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog$2);
	sp[2].o = frame[0].o;
	clinit_arc_input_KeyCode(ctx);
	sp[3].o = (jobject)SF_arc_input_KeyCode_mouseRight;
	init_mindustry_ui_dialogs_MapListDialog$2_mindustry_ui_dialogs_MapListDialog_arc_input_KeyCode(ctx, sp[1].o, sp[2].o, sp[3].o);
	jint temp1 = (jint)((func_arc_scene_ui_ImageButton_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(314);
	sp[0].o = frame[2].o;
	clinit_mindustry_ui_dialogs_MapListDialog$3(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog$3);
	init_mindustry_ui_dialogs_MapListDialog$3_mindustry_ui_dialogs_MapListDialog(ctx, sp[1].o, (frame[0].o));
	jint temp2 = (jint)((func_arc_scene_ui_ImageButton_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(323);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$12_arc_scene_ui_ImageButton_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$showMapFilters$12", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(304);
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_planets;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Boolf_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
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

jbool M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$13_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$showMapFilters$13", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_availablePlanets;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$11(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$showMapFilters$11", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(273);
	clinit_mindustry_ui_dialogs_MapListDialog$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog$1);
	init_mindustry_ui_dialogs_MapListDialog$1_mindustry_ui_dialogs_MapListDialog_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@editor.filters.planetselect"_j))));
	LINE_NUMBER(303);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_MapListDialog$1_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_MapListDialog$1_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$5_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$showMapFilters$5", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@editor.filters.priorities"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(256);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_22(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_22 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_22);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$6_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$showMapFilters$6", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)createArray(ctx, &class_arc_scene_style_TextureRegionDrawable, (jint(4)));
	jint temp0 = jint(0);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_fileText;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_players;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_hammer;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_play;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	frame[2].o = sp[0].o;
	LINE_NUMBER(259);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[3].i;
	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog$MapPriority_all;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(260);
	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog$MapPriority_all;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(261);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyTogglei;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_32(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_32 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_32);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(60.0f);
	LINE_NUMBER(264);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Boolf_9);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((func_mindustry_ui_dialogs_MapListDialog$MapPriority_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ui_dialogs_MapListDialog$MapPriority_name_R_java_lang_String])(ctx, (frame[4].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@editor.filters.prioritize.\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, (jint(1)));
	LINE_NUMBER(259);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(266);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$8_mindustry_ui_dialogs_MapListDialog$MapPriority_arc_scene_ui_ImageButton_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$showMapFilters$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(264);
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_priority;
	if (sp[0].o != (frame[0].o)) goto label_1;
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

void M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$7_mindustry_ui_dialogs_MapListDialog$MapPriority(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$showMapFilters$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(262);
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog_settings;
	((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_priority = (jref) (frame[1].o);
	LINE_NUMBER(263);
	((func_mindustry_ui_dialogs_MapListDialog_rebuildMaps) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_MapListDialog_rebuildMaps])(ctx, (frame[0].o));
	LINE_NUMBER(264);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$2_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$showMapFilters$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@editor.filters.mode"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(237);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_23(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_23 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Cons_23);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$3_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$showMapFilters$3", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(238);
	clinit_mindustry_game_Gamemode(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Gamemode_all;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(239);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((func_mindustry_game_Gamemode_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_game_Gamemode_name_R_java_lang_String])(ctx, (frame[5].o));
	sp[1].o = (jobject)SM_arc_util_Strings_capitalize_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"mode\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_core_UI_getIcon_java_lang_String_R_arc_scene_style_TextureRegionDrawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_getIcon_java_lang_String_R_arc_scene_style_TextureRegionDrawable])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(240);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(241);
	sp[0].o = frame[1].o;
	sp[1].o = frame[6].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyTogglei;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_33(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_33 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_java_lang_Runnable_33);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(248);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(60.0f)));
	sp[1].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_modes;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[1].o, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[1].o = (jobject)((func_mindustry_game_Gamemode_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_game_Gamemode_name_R_java_lang_String])(ctx, (frame[5].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@mode.\u0001.name"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(238);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(251);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$4_mindustry_game_Gamemode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$showMapFilters$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_modes;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_modes;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_modes;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	}
label_3:;
	{
	LINE_NUMBER(247);
	((func_mindustry_ui_dialogs_MapListDialog_rebuildMaps) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_MapListDialog_rebuildMaps])(ctx, (frame[0].o));
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_MapListDialog_lambda$rebuildMaps$2_mindustry_maps_Map_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$rebuildMaps$2", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(198);
	clinit_mindustry_game_Gamemode(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Gamemode_all;
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
	LINE_NUMBER(199);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((func_mindustry_game_Gamemode_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_game_Gamemode_name_R_java_lang_String])(ctx, (frame[5].o));
	sp[1].o = (jobject)SM_arc_util_Strings_capitalize_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"mode\u0001Small"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_core_UI_getIcon_java_lang_String_R_arc_scene_style_TextureRegionDrawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_getIcon_java_lang_String_R_arc_scene_style_TextureRegionDrawable])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(200);
	jint temp0 = (jint)((func_mindustry_game_Gamemode_valid_mindustry_maps_Map_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_game_Gamemode_valid_mindustry_maps_Map_R_boolean])(ctx, (frame[5].o), (frame[0].o));
	if (temp0 == 0) goto label_8;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[6].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(16.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	}
label_8:;
	{
	LINE_NUMBER(198);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[1].o));
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_10;
	}
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(16.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	}
label_10:;
	LINE_NUMBER(207);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_lambda$rebuildMaps$1_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$rebuildMaps$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(190);
	((func_mindustry_ui_dialogs_MapListDialog_showMap_mindustry_maps_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_MapListDialog_showMap_mindustry_maps_Map])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_MapListDialog_lambda$rebuildMaps$0_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$rebuildMaps$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_availablePlanets;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_lambda$setup$2_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$setup$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(129);
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
	((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK(sp[0].o))->F_searchString = (jref) sp[1].o;
	LINE_NUMBER(130);
	((func_mindustry_ui_dialogs_MapListDialog_rebuildMaps) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_MapListDialog_rebuildMaps])(ctx, (frame[0].o));
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_MapListDialog_lambda$setup$1_mindustry_type_Planet_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$setup$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_MapListDialog_lambda$setup$0_mindustry_type_Planet_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$setup$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return ((jint)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_accessible);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_lambda$new$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$new$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_activeDialog;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_activeDialog;
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(91);
	((func_mindustry_ui_dialogs_MapListDialog_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_MapListDialog_setup])(ctx, (frame[0].o));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog_lambda$new$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:lambda$new$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK((frame[0].o)))->F_rulesCache;
	((func_arc_struct_ObjectMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_clear])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_ui_dialogs_MapListDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	{
	LINE_NUMBER(30);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"editormapviewsettings"_j));
	sp[2].o = ((jobject) &class_mindustry_ui_dialogs_MapListDialog$MapViewSettings);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog_invoke_arc_func_Prov_3);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
	SF_mindustry_ui_dialogs_MapListDialog_settings = (checkCast(ctx, &class_mindustry_ui_dialogs_MapListDialog$MapViewSettings, sp[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_MapListDialog[] {
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
	(void *) M_mindustry_ui_dialogs_MapListDialog_show_R_arc_scene_ui_Dialog,
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
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$new$1,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$new$0,
	(void *) M_mindustry_ui_dialogs_MapListDialog_buildButtons,
	(void *) nullptr,
	(void *) M_mindustry_ui_dialogs_MapListDialog_setup,
	(void *) M_mindustry_ui_dialogs_MapListDialog_rebuildMaps,
	(void *) M_mindustry_ui_dialogs_MapListDialog_showMapFilters,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$18_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$21,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$20,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$19,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$14_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$17,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$16,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$15,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$9_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$10_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$12_arc_scene_ui_ImageButton_R_boolean,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$13_java_lang_String_R_boolean,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$11,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$5_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$6_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$7_mindustry_ui_dialogs_MapListDialog$MapPriority,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$2_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$3_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$4_mindustry_game_Gamemode,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$rebuildMaps$1_mindustry_maps_Map,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$rebuildMaps$0_java_lang_String_R_boolean,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$setup$2_java_lang_String,
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
	{ "buildButtons", "()V" },
	{ "showMap", "(Lmindustry/maps/Map;)V" },
	{ "setup", "()V" },
	{ "rebuildMaps", "()V" },
	{ "showMapFilters", "()V" },
	{ "lambda$showMapFilters$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showMapFilters$18", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showMapFilters$21", "()V" },
	{ "lambda$showMapFilters$20", "()V" },
	{ "lambda$showMapFilters$19", "()V" },
	{ "lambda$showMapFilters$14", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showMapFilters$17", "()V" },
	{ "lambda$showMapFilters$16", "()V" },
	{ "lambda$showMapFilters$15", "()V" },
	{ "lambda$showMapFilters$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showMapFilters$9", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showMapFilters$10", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showMapFilters$12", "(Larc/scene/ui/ImageButton;)Z" },
	{ "lambda$showMapFilters$13", "(Ljava/lang/String;)Z" },
	{ "lambda$showMapFilters$11", "()V" },
	{ "lambda$showMapFilters$5", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showMapFilters$6", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showMapFilters$7", "(Lmindustry/ui/dialogs/MapListDialog$MapPriority;)V" },
	{ "lambda$showMapFilters$2", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showMapFilters$3", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showMapFilters$4", "(Lmindustry/game/Gamemode;)V" },
	{ "lambda$rebuildMaps$1", "(Lmindustry/maps/Map;)V" },
	{ "lambda$rebuildMaps$0", "(Ljava/lang/String;)Z" },
	{ "lambda$setup$2", "(Ljava/lang/String;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_ui_dialogs_MapListDialog$MapViewSettings,
	&class_mindustry_ui_dialogs_MapListDialog$MapPriority,
};

static FieldMetadata fields[] {
	{ "settings", &class_mindustry_ui_dialogs_MapListDialog$MapViewSettings, (intptr_t) &SF_mindustry_ui_dialogs_MapListDialog_settings, "Lmindustry/ui/dialogs/MapListDialog$MapViewSettings;", 10 },
	{ "activeDialog", &class_mindustry_ui_dialogs_BaseDialog, offsetof(mindustry_ui_dialogs_MapListDialog, F_activeDialog), "Lmindustry/ui/dialogs/BaseDialog;", 0 },
	{ "searchString", &class_java_lang_String, offsetof(mindustry_ui_dialogs_MapListDialog, F_searchString), "Ljava/lang/String;", 2 },
	{ "modes", &class_arc_struct_Seq, offsetof(mindustry_ui_dialogs_MapListDialog, F_modes), "Larc/struct/Seq;", 2 },
	{ "availablePlanets", &class_arc_struct_Seq, offsetof(mindustry_ui_dialogs_MapListDialog, F_availablePlanets), "Larc/struct/Seq;", 2 },
	{ "mapTable", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_dialogs_MapListDialog, F_mapTable), "Larc/scene/ui/layout/Table;", 2 },
	{ "searchField", &class_arc_scene_ui_TextField, offsetof(mindustry_ui_dialogs_MapListDialog, F_searchField), "Larc/scene/ui/TextField;", 2 },
	{ "rulesCache", &class_arc_struct_ObjectMap, offsetof(mindustry_ui_dialogs_MapListDialog, F_rulesCache), "Larc/struct/ObjectMap;", 2 },
	{ "displayType", &class_boolean, offsetof(mindustry_ui_dialogs_MapListDialog, F_displayType), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_MapListDialog_java_lang_String_boolean, 0, "(Ljava/lang/String;Z)V", 1 },
	{ "buildButtons", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_buildButtons, VTABLE_mindustry_ui_dialogs_MapListDialog_buildButtons, "()V", 0 },
	{ "showMap", 0, VTABLE_mindustry_ui_dialogs_MapListDialog_showMap_mindustry_maps_Map, "(Lmindustry/maps/Map;)V", 1024 },
	{ "setup", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_setup, VTABLE_mindustry_ui_dialogs_MapListDialog_setup, "()V", 0 },
	{ "rebuildMaps", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_rebuildMaps, VTABLE_mindustry_ui_dialogs_MapListDialog_rebuildMaps, "()V", 0 },
	{ "showMapFilters", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_showMapFilters, VTABLE_mindustry_ui_dialogs_MapListDialog_showMapFilters, "()V", 0 },
	{ "show", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_show_R_arc_scene_ui_Dialog, VTABLE_mindustry_ui_dialogs_MapListDialog_show_R_arc_scene_ui_Dialog, "()Larc/scene/ui/Dialog;", 1 },
	{ "lambda$showMapFilters$0", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$0_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showMapFilters$18", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$18_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$18_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showMapFilters$21", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$21, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$21, "()V", 4098 },
	{ "lambda$showMapFilters$20", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$20, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$20, "()V", 4098 },
	{ "lambda$showMapFilters$19", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$19, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$19, "()V", 4098 },
	{ "lambda$showMapFilters$14", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$14_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$14_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showMapFilters$17", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$17, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$17, "()V", 4098 },
	{ "lambda$showMapFilters$16", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$16, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$16, "()V", 4098 },
	{ "lambda$showMapFilters$15", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$15, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$15, "()V", 4098 },
	{ "lambda$showMapFilters$1", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$1_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$1_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showMapFilters$9", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$9_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$9_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showMapFilters$10", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$10_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$10_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showMapFilters$12", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$12_arc_scene_ui_ImageButton_R_boolean, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$12_arc_scene_ui_ImageButton_R_boolean, "(Larc/scene/ui/ImageButton;)Z", 4098 },
	{ "lambda$showMapFilters$13", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$13_java_lang_String_R_boolean, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$13_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 4098 },
	{ "lambda$showMapFilters$11", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$11, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$11, "()V", 4098 },
	{ "lambda$showMapFilters$5", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$5_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$5_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showMapFilters$6", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$6_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$6_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showMapFilters$8", (intptr_t) SM_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$8_mindustry_ui_dialogs_MapListDialog$MapPriority_arc_scene_ui_ImageButton_R_boolean, 0, "(Lmindustry/ui/dialogs/MapListDialog$MapPriority;Larc/scene/ui/ImageButton;)Z", 4106 },
	{ "lambda$showMapFilters$7", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$7_mindustry_ui_dialogs_MapListDialog$MapPriority, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$7_mindustry_ui_dialogs_MapListDialog$MapPriority, "(Lmindustry/ui/dialogs/MapListDialog$MapPriority;)V", 4098 },
	{ "lambda$showMapFilters$2", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$2_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$2_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showMapFilters$3", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$3_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$3_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showMapFilters$4", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$4_mindustry_game_Gamemode, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$4_mindustry_game_Gamemode, "(Lmindustry/game/Gamemode;)V", 4098 },
	{ "lambda$rebuildMaps$2", (intptr_t) SM_mindustry_ui_dialogs_MapListDialog_lambda$rebuildMaps$2_mindustry_maps_Map_arc_scene_ui_layout_Table, 0, "(Lmindustry/maps/Map;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$rebuildMaps$1", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$rebuildMaps$1_mindustry_maps_Map, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$rebuildMaps$1_mindustry_maps_Map, "(Lmindustry/maps/Map;)V", 4098 },
	{ "lambda$rebuildMaps$0", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$rebuildMaps$0_java_lang_String_R_boolean, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$rebuildMaps$0_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 4098 },
	{ "lambda$setup$2", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$setup$2_java_lang_String, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$setup$2_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$setup$1", (intptr_t) SM_mindustry_ui_dialogs_MapListDialog_lambda$setup$1_mindustry_type_Planet_R_java_lang_String, 0, "(Lmindustry/type/Planet;)Ljava/lang/String;", 4106 },
	{ "lambda$setup$0", (intptr_t) SM_mindustry_ui_dialogs_MapListDialog_lambda$setup$0_mindustry_type_Planet_R_boolean, 0, "(Lmindustry/type/Planet;)Z", 4106 },
	{ "lambda$new$1", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$new$1, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$new$1, "()V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_ui_dialogs_MapListDialog_lambda$new$0, VTABLE_mindustry_ui_dialogs_MapListDialog_lambda$new$0, "()V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ui_dialogs_MapListDialog, 0, "()V", 8 },
};

Class class_mindustry_ui_dialogs_MapListDialog{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/MapListDialog",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_BaseDialog,
		.size = sizeof(mindustry_ui_dialogs_MapListDialog),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_MapListDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_MapListDialog,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_MapListDialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 38,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 326,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_MapListDialog = registerClass(&class_mindustry_ui_dialogs_MapListDialog);

}
