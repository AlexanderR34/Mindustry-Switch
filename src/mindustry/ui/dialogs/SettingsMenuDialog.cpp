#include "mindustry/ui/dialogs/SettingsMenuDialog.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "arc/func/Prov.h"
#include "arc/Input.h"
#include "mindustry/content/TechTree_TechNode.h"
#include "arc/graphics/Color.h"
#include "mindustry/content/TechTree.h"
#include "java/lang/Runnable.h"
#include "arc/input/KeyCode.h"
#include "arc/func/Intc.h"
#include "arc/scene/ui/Image.h"
#include "arc/struct/Seq.h"
#include "arc/util/OS.h"
#include "arc/Settings.h"
#include "arc/func/Boolc.h"
#include "mindustry/ui/dialogs/LanguageDialog.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_arc_func_Cons_16.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_arc_func_Cons_17.h"
#include "arc/Core.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_arc_func_Cons_14.h"
#include "java/util/Iterator.h"
#include "java/util/zip/ZipEntry.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_arc_func_Cons_15.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_SliderSetting.h"
#include "arc/util/Log.h"
#include "arc/files/ZipFi.h"
#include "arc/Files.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "arc/graphics/Texture.h"
#include "arc/Graphics.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "mindustry/content/Planets.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/game/Universe.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "mindustry/ui/dialogs/JoinDialog.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_arc_func_Cons_12.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_arc_func_Cons_13.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_arc_func_Cons_10.h"
#include "mindustry/input/DesktopInput.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_arc_func_Cons_11.h"
#include "mindustry/ui/dialogs/KeybindDialog.h"
#include "arc/graphics/GLTexture.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/ui/fragments/ConsoleFragment.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_StringProcessor.h"
#include "java/lang/Boolean.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "java/lang/Iterable.h"
#include "arc/func/Cons.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/struct/ObjectSet_ObjectSetIterator.h"
#include "mindustry/core/Control.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_65.h"
#include "mindustry/ui/FileChooser_FileChooserParams.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_arc_func_Intc_1.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/core/Platform.h"
#include "mindustry/type/Sector.h"
#include "mindustry/ui/Styles.h"
#include "java/io/OutputStream.h"
#include "mindustry/game/EventType_Trigger.h"
#include "mindustry/game/Saves_SaveSlot.h"
#include "mindustry/Vars.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_50.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_51.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_52.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_53.h"
#include "arc/Events.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog_StringProcessor_30.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog_StringProcessor_32.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_mindustry_core_Platform_FileWriter_2.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog_StringProcessor_31.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_mindustry_core_Platform_FileWriter_3.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog_StringProcessor_33.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog_StringProcessor_29.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog_StringProcessor_28.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_arc_func_Prov_1.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/input/MobileInput.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_47.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_48.h"
#include "arc/scene/ui/TextButton.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_49.h"
#include "mindustry/ui/FileChooser.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_43.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_44.h"
#include "java/lang/Throwable.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_45.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_46.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_61.h"
#include "java/lang/Exception.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_62.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_63.h"
#include "mindustry/game/Saves.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_64.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_60.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog_StringProcessor_21.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog_StringProcessor_20.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog_StringProcessor_23.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog_StringProcessor_22.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog_StringProcessor_25.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog_StringProcessor_24.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog_StringProcessor_27.h"
#include "arc/scene/ui/Label.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog_StringProcessor_26.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog_StringProcessor_18.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_arc_func_Boolc_13.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog_StringProcessor_17.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_arc_func_Boolc_12.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_arc_func_Boolc_15.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog_StringProcessor_19.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_arc_func_Boolc_14.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_arc_func_Boolc_17.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_arc_func_Boolc_16.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_58.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_59.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_54.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_55.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_arc_func_Boolc_11.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_56.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_arc_func_Boolc_10.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_57.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_arc_func_Cons_9.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_arc_func_Boolc_9.h"
#include "mindustry/maps/generators/PlanetGenerator.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsCategory.h"
#include "mindustry/core/Platform_FileWriter.h"
#include "java/lang/Float.h"
#include "arc/files/Fi.h"
#include "arc/Application.h"
#include "java/io/InputStream.h"
#include "java/lang/String.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_40.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_41.h"
#include "mindustry/gen/Icon.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_42.h"
#include "arc/scene/Group.h"
#include "arc/util/Scaling.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/Enum.h"
#include "java/util/zip/ZipOutputStream.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/Element.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/type/Planet.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_36.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_37.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_38.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_39.h"
#include "arc/util/io/Streams.h"
#include "java/util/Objects.h"
#include "arc/struct/SnapshotSeq.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_33.h"
#include "mindustry/input/InputHandler.h"
#include "mindustry/core/GameState.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_34.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_java_lang_Runnable_35.h"

extern "C" {


void mark_mindustry_ui_dialogs_SettingsMenuDialog(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_SettingsMenuDialog *) object;
	if (self->F_graphics)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_graphics)->clazz)->markFunction)((jobject) self->F_graphics, mark, depth + 1);
	if (self->F_game)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_game)->clazz)->markFunction)((jobject) self->F_game, mark, depth + 1);
	if (self->F_sound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sound)->clazz)->markFunction)((jobject) self->F_sound, mark, depth + 1);
	if (self->F_dev)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dev)->clazz)->markFunction)((jobject) self->F_dev, mark, depth + 1);
	if (self->F_main)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_main)->clazz)->markFunction)((jobject) self->F_main, mark, depth + 1);
	if (self->F_prefs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prefs)->clazz)->markFunction)((jobject) self->F_prefs, mark, depth + 1);
	if (self->F_menu)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_menu)->clazz)->markFunction)((jobject) self->F_menu, mark, depth + 1);
	if (self->F_dataDialog)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dataDialog)->clazz)->markFunction)((jobject) self->F_dataDialog, mark, depth + 1);
	if (self->F_planetDataDialog)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planetDataDialog)->clazz)->markFunction)((jobject) self->F_planetDataDialog, mark, depth + 1);
	if (self->F_planet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planet)->clazz)->markFunction)((jobject) self->F_planet, mark, depth + 1);
	if (self->F_categories)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_categories)->clazz)->markFunction)((jobject) self->F_categories, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_SettingsMenuDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
}

void init_mindustry_ui_dialogs_SettingsMenuDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"settings"_j))), (((jobject) createStringLiteral(ctx, u8"Settings"_j))));
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_serpulo;
	((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK(sp[0].o))->F_planet = (jref) sp[1].o;
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK(sp[0].o))->F_categories = (jref) sp[1].o;
	LINE_NUMBER(50);
	((func_mindustry_ui_dialogs_SettingsMenuDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_addCloseButton])(ctx, (frame[0].o));
	LINE_NUMBER(52);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[1].o = frame[0].o;
	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable);
	init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable(ctx, sp[2].o);
	((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK(sp[1].o))->F_main = (jref) sp[2].o;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[2].o);
	LINE_NUMBER(53);
	((mindustry_ui_dialogs_BaseDialog *) NULL_CHECK((frame[0].o)))->F_shouldPause = (jint(1));
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_33(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_33 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_33);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_SettingsMenuDialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(60);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	jint temp0 = jint(0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	jint temp2 = jint(1);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp3 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp2) = temp3;
	frame[1].o = sp[0].o;
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_34(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_34 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_34);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_SettingsMenuDialog_onResize_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_onResize_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(73);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, sp[0].o);
	LINE_NUMBER(74);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	jint temp4 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(75);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	jint temp5 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	clinit_mindustry_gen_Tex(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Tex_button;
	init_arc_scene_ui_layout_Table_arc_scene_style_Drawable(ctx, sp[1].o, sp[2].o);
	((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK(sp[0].o))->F_menu = (jref) sp[1].o;
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable);
	init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable(ctx, sp[1].o);
	((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK(sp[0].o))->F_game = (jref) sp[1].o;
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable);
	init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable(ctx, sp[1].o);
	((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK(sp[0].o))->F_graphics = (jref) sp[1].o;
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable);
	init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable(ctx, sp[1].o);
	((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK(sp[0].o))->F_sound = (jref) sp[1].o;
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable);
	init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable(ctx, sp[1].o);
	((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK(sp[0].o))->F_dev = (jref) sp[1].o;
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK(sp[0].o))->F_prefs = (jref) sp[1].o;
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_prefs;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(86);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_prefs;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(14.0f)));
	LINE_NUMBER(88);
	((func_mindustry_ui_dialogs_SettingsMenuDialog_rebuildMenu) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_rebuildMenu])(ctx, (frame[0].o));
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_prefs;
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, sp[0].o);
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_prefs;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"@settings.data"_j))));
	((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK(sp[0].o))->F_planetDataDialog = (jref) sp[1].o;
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_planetDataDialog;
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, sp[0].o);
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_planetDataDialog;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_cont;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"@settings.data"_j))));
	((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK(sp[0].o))->F_dataDialog = (jref) sp[1].o;
	LINE_NUMBER(173);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_dataDialog;
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, sp[0].o);
	LINE_NUMBER(175);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_dataDialog;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_cont;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(294);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_row_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	LINE_NUMBER(295);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_prefs;
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(296);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_row_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	LINE_NUMBER(297);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(299);
	((func_mindustry_ui_dialogs_SettingsMenuDialog_addSettings) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_addSettings])(ctx, (frame[0].o));
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_SettingsMenuDialog_getLogs_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:getLogs", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(303);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[0].o = (jobject)((func_arc_Settings_getDataDirectory_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getDataDirectory_R_arc_files_Fi])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"last_log.txt"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(305);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(306);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[0].o = (jobject)((func_arc_Settings_getDataDirectory_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getDataDirectory_R_arc_files_Fi])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"crashes"_j))));
	sp[0].o = (jobject)((func_arc_files_Fi_list_R_Array1_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_list_R_Array1_arc_files_Fi])(ctx, sp[0].o);
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
	LINE_NUMBER(307);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\n\n"_j))));
	sp[1].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	LINE_NUMBER(306);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(310);
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(311);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\nlast log:\n"_j))));
	sp[1].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_addCategory_java_lang_String_java_lang_String_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:addCategory", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(319);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_categories;
	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory);
	sp[2].o = frame[1].o;
	jobject temp0 = sp[2].o;
	sp[2].o = sp[1].o;
	sp[3].o = temp0;
	sp += 4;
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (frame[2].o));
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_3:;
	{
	sp -= 5;
	init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory_java_lang_String_arc_scene_style_Drawable_arc_func_Cons(ctx, sp[1].o, sp[3].o, sp[4].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_addCategory_java_lang_String_arc_scene_style_Drawable_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:addCategory", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(324);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_categories;
	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory);
	init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory_java_lang_String_arc_scene_style_Drawable_arc_func_Cons(ctx, sp[1].o, (frame[1].o), (frame[2].o), (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_addCategory_java_lang_String_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:addCategory", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(329);
	((func_mindustry_ui_dialogs_SettingsMenuDialog_addCategory_java_lang_String_arc_scene_style_Drawable_arc_func_Cons) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_addCategory_java_lang_String_arc_scene_style_Drawable_arc_func_Cons])(ctx, (frame[0].o), (frame[1].o), (checkCast(ctx, &class_arc_scene_style_Drawable, (jobject(nullptr)))), (frame[2].o));
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_SettingsMenuDialog_getCategories_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:getCategories", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(333);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_categories;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_rebuildMenu(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:rebuildMenu", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, sp[0].o);
	LINE_NUMBER(339);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_flatt;
	frame[1].o = sp[0].o;
	LINE_NUMBER(341);
	frame[2].f = (jfloat(8.0f));
	frame[3].f = (jfloat(32.0f));
	LINE_NUMBER(343);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(300.0f)), (jfloat(60.0f)));
	LINE_NUMBER(344);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@settings.game"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_settings;
	sp[3].o = frame[1].o;
	jfloat temp0 = frame[3].f;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_35(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_35 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_35);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp0, sp[4].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].f));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(345);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@settings.graphics"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_image;
	sp[3].o = frame[1].o;
	jfloat temp1 = frame[3].f;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_36(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_36 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_36);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp1, sp[4].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].f));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(346);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@settings.sound"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_volumeUp;
	sp[3].o = frame[1].o;
	jfloat temp2 = frame[3].f;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_37(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_37 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_37);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp2, sp[4].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].f));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(347);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@settings.language"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_chat;
	sp[3].o = frame[1].o;
	jfloat temp3 = frame[3].f;
	clinit_mindustry_Vars(ctx);
	sp[4].o = (jobject)SF_mindustry_Vars_ui;
	sp[4].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[4].o))->F_language;
	sp[5].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_38(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_38 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_38);
		proxy->F_field0 = (jref) sp[4].o;
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp3, sp[4].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].f));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(348);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_10;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"keyboard"_j))));
	if (temp0 == 0) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@settings.controls"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_move;
	sp[3].o = frame[1].o;
	jfloat temp0 = frame[3].f;
	clinit_mindustry_Vars(ctx);
	sp[4].o = (jobject)SF_mindustry_Vars_ui;
	sp[4].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[4].o))->F_controls;
	sp[5].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_39(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_39 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_39);
		proxy->F_field0 = (jref) sp[4].o;
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp0, sp[4].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].f));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_11:;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@settings.data"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_save;
	sp[3].o = frame[1].o;
	jfloat temp0 = frame[3].f;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_40(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_40 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_40);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp0, sp[4].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].f));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(353);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@settings.dev"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_fileCode;
	sp[3].o = frame[1].o;
	jfloat temp1 = frame[3].f;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_41(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_41 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_41);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp1, sp[4].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].f));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(355);
	frame[4].i = (jint(4));
	LINE_NUMBER(356);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_categories;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_15:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory, sp[0].o));
	LINE_NUMBER(357);
	frame[7].i = (frame[4].i);
	LINE_NUMBER(358);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory *) NULL_CHECK((frame[6].o)))->F_icon;
	if (sp[0].o != nullptr) goto label_19;
	}
	{
	LINE_NUMBER(359);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory *) NULL_CHECK((frame[6].o)))->F_name;
	sp[2].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_42(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_42 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_42);
		proxy->F_field1 = (frame[7].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].f));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(361);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory *) NULL_CHECK((frame[6].o)))->F_name;
	sp[2].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory *) NULL_CHECK((frame[6].o)))->F_icon;
	sp[3].o = frame[1].o;
	jfloat temp0 = frame[3].f;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_43(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_43 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_43);
		proxy->F_field1 = (frame[7].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp0, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_11);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].f));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_21:;
	{
	LINE_NUMBER(363);
	INST_IINC(4, 1);
	LINE_NUMBER(364);
	goto label_15;
	}
label_16:;
	LINE_NUMBER(365);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_addSettings(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:addSettings", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(368);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_sound;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"alwaysmusic"_j))), (jint(0)));
	LINE_NUMBER(369);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_sound;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"musicvol"_j));
	jint temp0 = 100;
	jint temp1 = jint(0);
	jint temp2 = 100;
	jint temp3 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_17(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_17 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_17);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, sp[2].o);
	LINE_NUMBER(370);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_sound;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"sfxvol"_j));
	jint temp4 = 100;
	jint temp5 = jint(0);
	jint temp6 = 100;
	jint temp7 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_18(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_18 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_18);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting])(ctx, sp[0].o, sp[1].o, temp4, temp5, temp6, temp7, sp[2].o);
	LINE_NUMBER(371);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_sound;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ambientvol"_j));
	jint temp8 = 100;
	jint temp9 = jint(0);
	jint temp10 = 100;
	jint temp11 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_19(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_19 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_19);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting])(ctx, sp[0].o, sp[1].o, temp8, temp9, temp10, temp11, sp[2].o);
	LINE_NUMBER(373);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_game;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"saveinterval"_j));
	jint temp12 = 60;
	jint temp13 = 10;
	jint temp14 = 600;
	jint temp15 = 10;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_20(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_20 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_20);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting])(ctx, sp[0].o, sp[1].o, temp12, temp13, temp14, temp15, sp[2].o);
	LINE_NUMBER(375);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_6;
	}
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_game;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"autotarget"_j))), (jint(1)));
	LINE_NUMBER(377);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_game;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"keyboard"_j));
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_9(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_9 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_9);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean_arc_func_Boolc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean_arc_func_Boolc])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(381);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp1 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"keyboard"_j))));
	if (temp1 == 0) goto label_6;
	}
	{
	LINE_NUMBER(382);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	clinit_mindustry_input_DesktopInput(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_input_DesktopInput);
	init_mindustry_input_DesktopInput(ctx, sp[1].o);
	((func_mindustry_core_Control_setInput_mindustry_input_InputHandler) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Control_setInput_mindustry_input_InputHandler])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(383);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	((func_arc_Input_setUseKeyboard_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_setUseKeyboard_boolean])(ctx, sp[0].o, (jint(1)));
	}
label_6:;
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_game;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"communityservers"_j));
	jint temp0 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_10(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_10 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_10);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean_arc_func_Boolc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean_arc_func_Boolc])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(404);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_game;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"savecreate"_j))), (jint(1)));
	LINE_NUMBER(405);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_game;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"blockreplace"_j))), (jint(1)));
	LINE_NUMBER(406);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_game;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"conveyorpathfinding"_j))), (jint(1)));
	LINE_NUMBER(407);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_game;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"hints"_j))), (jint(1)));
	LINE_NUMBER(409);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_17;
	}
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_game;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"backgroundpause"_j))), (jint(1)));
	LINE_NUMBER(411);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_game;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buildautopause"_j))), (jint(0)));
	LINE_NUMBER(412);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_game;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"distinctcontrolgroups"_j))), (jint(1)));
	}
label_17:;
	{
	LINE_NUMBER(415);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_game;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"doubletapmine"_j))), (jint(0)));
	LINE_NUMBER(416);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_game;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"commandmodehold"_j))), (jint(1)));
	LINE_NUMBER(418);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_steam) == 0) goto label_23;
	}
	{
	LINE_NUMBER(419);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_game;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"playerlimit"_j));
	jint temp0 = 16;
	jint temp1 = jint(2);
	jint temp2 = 32;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_21(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_21 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_21);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, sp[2].o);
	}
label_23:;
	{
	LINE_NUMBER(425);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"uiEdgePadding"_j));
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	jint temp2 = 100;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_22(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_22 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_22);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Intc_1(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Intc_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Intc_1);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_arc_func_Intc_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_arc_func_Intc_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, sp[2].o, sp[3].o);
	LINE_NUMBER(432);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	jint temp3 = jint(0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	jint temp4 = (jint)((func_arc_Settings_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_int_R_int])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"uiscale"_j))), (100));
	ARRAY_ACCESS(jint, sp[0].o, temp3) = temp4;
	frame[1].o = sp[0].o;
	LINE_NUMBER(434);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"uiscale"_j));
	jint temp5 = 100;
	jint temp6 = 25;
	jint temp7 = 300;
	jint temp8 = jint(5);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_23(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_23 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_23);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting])(ctx, sp[0].o, sp[1].o, temp5, temp6, temp7, temp8, sp[2].o);
	LINE_NUMBER(440);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"screenshake"_j));
	jint temp9 = jint(4);
	jint temp10 = jint(0);
	jint temp11 = 8;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_24(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_24 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_24);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting])(ctx, sp[0].o, sp[1].o, temp9, temp10, temp11, sp[2].o);
	LINE_NUMBER(442);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bloomintensity"_j));
	jint temp12 = 6;
	jint temp13 = jint(0);
	jint temp14 = 16;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_25(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_25 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_25);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting])(ctx, sp[0].o, sp[1].o, temp12, temp13, temp14, sp[2].o);
	LINE_NUMBER(443);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bloomblur"_j));
	jint temp15 = jint(2);
	jint temp16 = jint(1);
	jint temp17 = 16;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_26(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_26 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_26);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting])(ctx, sp[0].o, sp[1].o, temp15, temp16, temp17, sp[2].o);
	LINE_NUMBER(445);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fpscap"_j));
	jint temp18 = 240;
	jint temp19 = 10;
	jint temp20 = 245;
	jint temp21 = jint(5);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_27(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_27 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_27);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting])(ctx, sp[0].o, sp[1].o, temp18, temp19, temp20, temp21, sp[2].o);
	LINE_NUMBER(452);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_ios) == 0) goto label_32;
	}
	{
	LINE_NUMBER(453);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_int_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fpscap"_j))), (240));
	frame[2].i = temp0;
	LINE_NUMBER(454);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	sp += 1;
	if ((frame[2].i) <= (240)) goto label_35;
	}
	INST_ICONST(0);
	goto label_36;
label_35:;
	INST_ILOAD(2);
label_36:;
	POP_N(2); // Pop method args
	((func_arc_Graphics_setPreferredFPS_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_setPreferredFPS_int])(ctx, sp[0].o, sp[1].i);
label_32:;
	{
	LINE_NUMBER(457);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"chatopacity"_j));
	jint temp0 = 100;
	jint temp1 = jint(0);
	jint temp2 = 100;
	jint temp3 = jint(5);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_28(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_28 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_28);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, sp[2].o);
	LINE_NUMBER(458);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"lasersopacity"_j));
	jint temp4 = 100;
	jint temp5 = jint(0);
	jint temp6 = 100;
	jint temp7 = jint(5);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_29(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_29 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_29);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting])(ctx, sp[0].o, sp[1].o, temp4, temp5, temp6, temp7, sp[2].o);
	LINE_NUMBER(465);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"unitlaseropacity"_j));
	jint temp8 = 100;
	jint temp9 = jint(0);
	jint temp10 = 100;
	jint temp11 = jint(5);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_30(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_30 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_30);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting])(ctx, sp[0].o, sp[1].o, temp8, temp9, temp10, temp11, sp[2].o);
	LINE_NUMBER(466);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bridgeopacity"_j));
	jint temp12 = 100;
	jint temp13 = jint(0);
	jint temp14 = 100;
	jint temp15 = jint(5);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_31(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_31 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_31);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting])(ctx, sp[0].o, sp[1].o, temp12, temp13, temp14, temp15, sp[2].o);
	LINE_NUMBER(468);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"maxmagnificationmultiplierpercent"_j));
	jint temp16 = 100;
	jint temp17 = 100;
	jint temp18 = 200;
	jint temp19 = 25;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_32(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_32 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_32);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting])(ctx, sp[0].o, sp[1].o, temp16, temp17, temp18, temp19, sp[2].o);
	LINE_NUMBER(475);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"minmagnificationmultiplierpercent"_j));
	jint temp20 = 100;
	jint temp21 = 100;
	jint temp22 = 300;
	jint temp23 = 25;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_33(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_33 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_33);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting])(ctx, sp[0].o, sp[1].o, temp20, temp21, temp22, temp23, sp[2].o);
	LINE_NUMBER(482);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_43;
	}
	{
	LINE_NUMBER(483);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"vsync"_j));
	jint temp0 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_11(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_11 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_11);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean_arc_func_Boolc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean_arc_func_Boolc])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(484);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fullscreen"_j));
	jint temp1 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_12(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_12 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_12);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean_arc_func_Boolc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean_arc_func_Boolc])(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	LINE_NUMBER(486);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	jint temp2 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"vsync"_j))));
	((func_arc_Graphics_setVSync_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_setVSync_boolean])(ctx, sp[0].o, temp2);
	LINE_NUMBER(488);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp3 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fullscreen"_j))));
	if (temp3 == 0) goto label_48;
	}
	{
	LINE_NUMBER(489);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_44(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_44 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_44);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	goto label_48;
	}
label_43:;
	{
	LINE_NUMBER(491);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_ios) != 0) goto label_48;
	}
	{
	LINE_NUMBER(492);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"landscape"_j));
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_13(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_13 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_13);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean_arc_func_Boolc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean_arc_func_Boolc])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(500);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp1 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"landscape"_j))));
	if (temp1 == 0) goto label_48;
	}
	{
	LINE_NUMBER(501);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	((func_mindustry_core_Platform_beginForceLandscape) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_beginForceLandscape, sp[0].o))(ctx, sp[0].o);
	}
label_48:;
	{
	LINE_NUMBER(505);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"effects"_j))), (jint(1)));
	LINE_NUMBER(506);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"atmosphere"_j))), (jint(1)));
	LINE_NUMBER(507);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"drawlight"_j))), (jint(1)));
	LINE_NUMBER(508);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"destroyedblocks"_j))), (jint(1)));
	LINE_NUMBER(509);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"blockstatus"_j))), (jint(0)));
	LINE_NUMBER(510);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"playerchat"_j))), (jint(1)));
	LINE_NUMBER(511);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_59;
	}
	{
	LINE_NUMBER(512);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"coreitems"_j))), (jint(1)));
	}
label_59:;
	{
	LINE_NUMBER(514);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"minimap"_j));
	sp += 2;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_61;
	}
	INST_ICONST(1);
	goto label_62;
label_61:;
	INST_ICONST(0);
label_62:;
	{
	sp -= 3;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, sp[1].o, sp[2].i);
	LINE_NUMBER(515);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"smoothcamera"_j))), (jint(1)));
	LINE_NUMBER(516);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_65;
	}
	{
	LINE_NUMBER(517);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"detach-camera"_j))), (jint(0)));
	}
label_65:;
	{
	LINE_NUMBER(519);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"position"_j))), (jint(0)));
	LINE_NUMBER(520);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_68;
	}
	{
	LINE_NUMBER(521);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mouseposition"_j))), (jint(0)));
	}
label_68:;
	{
	LINE_NUMBER(523);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fps"_j))), (jint(0)));
	LINE_NUMBER(524);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"playerindicators"_j))), (jint(1)));
	LINE_NUMBER(525);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"showpings"_j))), (jint(1)));
	LINE_NUMBER(526);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"showotherbuildplans"_j))), (jint(1)));
	LINE_NUMBER(527);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"indicators"_j))), (jint(1)));
	LINE_NUMBER(528);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"showweather"_j))), (jint(1)));
	LINE_NUMBER(529);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"animatedwater"_j))), (jint(1)));
	LINE_NUMBER(531);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bloom"_j));
	jint temp0 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_14(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_14 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_14);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean_arc_func_Boolc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean_arc_func_Boolc])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(533);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pixelate"_j));
	jint temp1 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_15(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_15 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_15);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean_arc_func_Boolc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean_arc_func_Boolc])(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	LINE_NUMBER(540);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"linear"_j));
	sp += 2;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_79;
	}
	INST_ICONST(1);
	goto label_80;
label_79:;
	INST_ICONST(0);
label_80:;
	{
	sp -= 3;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_16(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_16 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_16);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean_arc_func_Boolc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean_arc_func_Boolc])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].o);
	LINE_NUMBER(547);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"linear"_j))));
	if (temp0 == 0) goto label_82;
	}
	{
	LINE_NUMBER(548);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_84:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_82;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o));
	LINE_NUMBER(549);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	frame[4].o = sp[0].o;
	LINE_NUMBER(550);
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter])(ctx, (frame[3].o), (frame[4].o), (frame[4].o));
	LINE_NUMBER(551);
	goto label_84;
	}
label_82:;
	{
	LINE_NUMBER(554);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"skipcoreanimation"_j))), (jint(0)));
	LINE_NUMBER(555);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"hidedisplays"_j))), (jint(0)));
	LINE_NUMBER(556);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"logiclocalization"_j))), (jint(1)));
	LINE_NUMBER(558);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isMac) == 0) goto label_91;
	}
	{
	LINE_NUMBER(559);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"macnotch"_j))), (jint(0)));
	}
label_91:;
	{
	LINE_NUMBER(562);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_93;
	}
	{
	LINE_NUMBER(563);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"swapdiagonal"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_93:;
	{
	LINE_NUMBER(566);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_dev;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"console"_j));
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_17(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_17 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Boolc_17);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean_arc_func_Boolc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean_arc_func_Boolc])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(571);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_dev;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"drawhitboxes"_j))), (jint(0)));
	LINE_NUMBER(572);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_dev;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"showperformance"_j))), (jint(0)));
	LINE_NUMBER(574);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_ios) != 0) goto label_98;
	}
	{
	LINE_NUMBER(575);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_dev;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"modcrashdisable"_j))), (jint(1)));
	}
label_98:;
	LINE_NUMBER(577);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_exportData_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:exportData", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(580);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(581);
	sp[0].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((func_arc_Settings_getSettingsFile_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getSettingsFile_R_arc_files_Fi])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(582);
	sp[0].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_customMapDirectory;
	sp[1].o = (jobject)((func_arc_files_Fi_list_R_Array1_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_list_R_Array1_arc_files_Fi])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(583);
	sp[0].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_saveDirectory;
	sp[1].o = (jobject)((func_arc_files_Fi_list_R_Array1_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_list_R_Array1_arc_files_Fi])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(584);
	sp[0].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_modDirectory;
	sp[1].o = (jobject)((func_arc_files_Fi_list_R_Array1_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_list_R_Array1_arc_files_Fi])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(585);
	sp[0].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_schematicDirectory;
	sp[1].o = (jobject)((func_arc_files_Fi_list_R_Array1_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_list_R_Array1_arc_files_Fi])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(586);
	sp[0].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_assetCacheDirectory;
	sp[1].o = (jobject)((func_arc_files_Fi_list_R_Array1_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_list_R_Array1_arc_files_Fi])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(587);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[0].o = (jobject)((func_arc_Settings_getDataDirectory_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getDataDirectory_R_arc_files_Fi])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_files_Fi_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_path_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(590);
	sp[0].o = (jobject)((func_arc_struct_Seq_copy_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_33:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_34;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_arc_files_Fi, sp[0].o));
	LINE_NUMBER(591);
	sp[0].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	}
label_36:;
	{
	LINE_NUMBER(592);
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[6].o));
	if (temp0 != 0) goto label_37;
	}
	{
	sp[0].o = frame[6].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((func_arc_Settings_getDataDirectory_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getDataDirectory_R_arc_files_Fi])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_files_Fi_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_37;
	}
	{
	LINE_NUMBER(593);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[2].o), (frame[6].o));
	goto label_36;
	}
label_37:;
	LINE_NUMBER(595);
	goto label_33;
label_34:;
	{
	LINE_NUMBER(597);
	sp[0].o = (jobject)((func_arc_files_Fi_write_boolean_int_R_java_io_OutputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_write_boolean_int_R_java_io_OutputStream])(ctx, (frame[1].o), (jint(0)), (2048));
	frame[4].o = sp[0].o;
	}
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_18; }
	}
	{
	clinit_java_util_zip_ZipOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipOutputStream);
	init_java_util_zip_ZipOutputStream_java_io_OutputStream(ctx, sp[0].o, (frame[4].o));
	frame[5].o = sp[0].o;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(598);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[6].o = sp[0].o;
	}
label_39:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_arc_files_Fi, sp[0].o));
	LINE_NUMBER(599);
	sp[0].o = (jobject)((func_arc_files_Fi_path_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_files_Fi_path_R_java_lang_String])(ctx, (frame[7].o));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, temp0);
	frame[8].o = sp[0].o;
	LINE_NUMBER(600);
	jint temp1 = (jint)((func_arc_files_Fi_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_files_Fi_isDirectory_R_boolean])(ctx, (frame[7].o));
	if (temp1 == 0) goto label_42;
	}
	{
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001/"_j.string, 1, (frame[8].o));
	frame[8].o = sp[0].o;
	}
label_42:;
	{
	LINE_NUMBER(602);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[8].o), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	if (temp0 == 0) goto label_43;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[8].o), (jint(1)));
	sp += 1;
	goto label_44;
	}
label_43:;
	INST_ALOAD(8);
label_44:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(603);
	sp[0].o = frame[5].o;
	clinit_java_util_zip_ZipEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_zip_ZipEntry);
	init_java_util_zip_ZipEntry_java_lang_String(ctx, sp[1].o, (frame[8].o));
	((func_java_util_zip_ZipOutputStream_putNextEntry_java_util_zip_ZipEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_ZipOutputStream_putNextEntry_java_util_zip_ZipEntry])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(604);
	jint temp0 = (jint)((func_arc_files_Fi_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_files_Fi_isDirectory_R_boolean])(ctx, (frame[7].o));
	if (temp0 != 0) goto label_47;
	}
	{
	LINE_NUMBER(605);
	sp[0].o = (jobject)((func_arc_files_Fi_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_files_Fi_read_R_java_io_InputStream])(ctx, (frame[7].o));
	frame[9].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(606);
	SM_arc_util_io_Streams_copy_java_io_InputStream_java_io_OutputStream(ctx, (frame[9].o), (frame[5].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(607);
	if ((frame[9].o) == nullptr) goto label_47;
	}
	{
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_io_InputStream_close])(ctx, (frame[9].o));
	goto label_47;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(605);
	frame[10].o = sp[0].o;
	if ((frame[9].o) == nullptr) goto label_49;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(9);
	POP_N(1); // Pop method args
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_49;
label_6:;
	{
	sp -= 1;
	frame[11].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[10].o), (frame[11].o));
	}
label_49:;
	INST_ALOAD(10);
	INST_ATHROW();
	label_47:;
	{
	LINE_NUMBER(609);
	((func_java_util_zip_ZipOutputStream_closeEntry) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_zip_ZipOutputStream_closeEntry])(ctx, (frame[5].o));
	LINE_NUMBER(610);
	goto label_39;
	}
label_9:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(611);
	((func_java_util_zip_ZipOutputStream_close) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_zip_ZipOutputStream_close])(ctx, (frame[5].o));
	goto label_17;
	}
label_10:;
	LINE_NUMBER(597);
	INST_ASTORE(6);
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	INST_ALOAD(5);
	POP_N(1); // Pop method args
	((func_java_util_zip_ZipOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_ZipOutputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_51;
label_14:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[6].o), (frame[7].o));
	}
label_51:;
	INST_ALOAD(6);
	INST_ATHROW();
	label_17:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(611);
	if ((frame[4].o) == nullptr) goto label_52;
	}
	{
	((func_java_io_OutputStream_close) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_OutputStream_close])(ctx, (frame[4].o));
	goto label_52;
	}
label_18:;
	{
	sp -= 1;
	LINE_NUMBER(597);
	frame[5].o = sp[0].o;
	if ((frame[4].o) == nullptr) goto label_53;
	}
label_23: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_22; }
	}
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	((func_java_io_OutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_53;
label_22:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[5].o), (frame[6].o));
	}
label_53:;
	INST_ALOAD(5);
	INST_ATHROW();
	label_52:;
	LINE_NUMBER(612);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_importData_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:importData", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(615);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[0].o = (jobject)((func_arc_Files_local_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_local_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"zipdata.zip"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(616);
	((func_arc_files_Fi_copyTo_arc_files_Fi) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_copyTo_arc_files_Fi])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(617);
	clinit_arc_files_ZipFi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_files_ZipFi);
	init_arc_files_ZipFi_arc_files_Fi(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(619);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[0].o = (jobject)((func_arc_Settings_getDataDirectory_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getDataDirectory_R_arc_files_Fi])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(620);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"settings.bin"_j))));
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(621);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not valid save data."_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(625);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_saveDirectory;
	jint temp0 = (jint)((func_arc_files_Fi_deleteDirectory_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_deleteDirectory_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(628);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_assetCacheDirectory;
	jint temp1 = (jint)((func_arc_files_Fi_deleteDirectory_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_deleteDirectory_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(631);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_tmpDirectory;
	jint temp2 = (jint)((func_arc_files_Fi_deleteDirectory_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_deleteDirectory_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(633);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_12);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_files_Fi_walk_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_walk_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(634);
	jint temp3 = (jint)((func_arc_files_Fi_delete_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_delete_R_boolean])(ctx, (frame[2].o));
	LINE_NUMBER(637);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_clear])(ctx, sp[0].o);
	LINE_NUMBER(639);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_load) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_load])(ctx, sp[0].o);
	LINE_NUMBER(640);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_back(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:back", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(643);
	((func_mindustry_ui_dialogs_SettingsMenuDialog_rebuildMenu) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_rebuildMenu])(ctx, (frame[0].o));
	LINE_NUMBER(644);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_prefs;
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, sp[0].o);
	LINE_NUMBER(645);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_prefs;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(646);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_visible_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:visible", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(649);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_prefs;
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, sp[0].o);
	LINE_NUMBER(651);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(652);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_ui_layout_Table, (jint(4)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_game;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	sp[2].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_sound;
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	sp[2].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_dev;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(653);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_categories;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory, sp[0].o));
	LINE_NUMBER(654);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory *) NULL_CHECK((frame[4].o)))->F_table;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(655);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(657);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_prefs;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[1].i));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[1].o)));
	LINE_NUMBER(658);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_addCloseButton(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:addCloseButton", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(662);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@back"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_left;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_45(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_45 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_45);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(210.0f);
	jfloat temp1 = jfloat(64.0f);
	LINE_NUMBER(668);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(670);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_SettingsMenuDialog_keyDown_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_keyDown_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(679);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addCloseButton$1_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addCloseButton$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(671);
	sp[0].o = frame[1].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_escape;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_back;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(672);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_prefs;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(673);
	((func_mindustry_ui_dialogs_SettingsMenuDialog_back) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_back])(ctx, (frame[0].o));
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(675);
	((func_mindustry_ui_dialogs_SettingsMenuDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_hide])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(678);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addCloseButton$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addCloseButton$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(663);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_prefs;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_menu;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(664);
	((func_mindustry_ui_dialogs_SettingsMenuDialog_back) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_back])(ctx, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(666);
	((func_mindustry_ui_dialogs_SettingsMenuDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_hide])(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(668);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$importData$0_arc_files_Fi_arc_files_Fi(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$importData$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(633);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_arc_files_Fi_path_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_path_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[1].o, sp[2].o);
	((func_arc_files_Fi_copyTo_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_copyTo_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$27_boolean(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$27", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(567);
	if ((frame[0].i) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_consolefrag;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(568);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_consolefrag;
	((func_mindustry_ui_fragments_ConsoleFragment_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_close])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(570);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$26_boolean(jcontext ctx, jbool param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$26", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(541);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o));
	LINE_NUMBER(542);
	if ((frame[0].i) == 0) goto label_4;
	}
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	(sp++)->o = SF_arc_graphics_Texture$TextureFilter_linear;
	goto label_5;
label_4:;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	(sp++)->o = SF_arc_graphics_Texture$TextureFilter_nearest;
label_5:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(543);
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter])(ctx, (frame[2].o), (frame[3].o), (frame[3].o));
	LINE_NUMBER(544);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(545);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$25_boolean(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$25", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(534);
	if ((frame[0].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(535);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_enablePixelation;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(537);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$24_boolean(jcontext ctx, jbool param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$24", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(531);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	((func_mindustry_core_Renderer_toggleBloom_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_toggleBloom_boolean])(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$23_boolean(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$23", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(493);
	if ((frame[0].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(494);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	((func_mindustry_core_Platform_beginForceLandscape) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_beginForceLandscape, sp[0].o))(ctx, sp[0].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(496);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	((func_mindustry_core_Platform_endForceLandscape) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_endForceLandscape, sp[0].o))(ctx, sp[0].o);
	}
label_3:;
	LINE_NUMBER(498);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$22(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$22", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	{
	LINE_NUMBER(489);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_setFullscreen_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_setFullscreen_boolean_R_boolean])(ctx, sp[0].o, (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$21_boolean(jcontext ctx, jbool param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$21", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(484);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_setFullscreen_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_setFullscreen_boolean_R_boolean])(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$20_boolean(jcontext ctx, jbool param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$20", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(483);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	((func_arc_Graphics_setVSync_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_setVSync_boolean])(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$19_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$19", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(476);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_settings;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(477);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"minzoomingamemultiplier"_j));
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, ((jfloat((frame[0].i))) / (jfloat(100.0f))));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	{
	LINE_NUMBER(479);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001%"_j.string, 1, boxInteger(ctx, (frame[0].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$18_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$18", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(469);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_settings;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(470);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"maxzoomingamemultiplier"_j));
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, ((jfloat((frame[0].i))) / (jfloat(100.0f))));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	{
	LINE_NUMBER(472);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001%"_j.string, 1, boxInteger(ctx, (frame[0].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$17_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$17", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(466);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001%"_j.string, 1, boxInteger(ctx, (frame[0].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$16_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$16", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(465);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001%"_j.string, 1, boxInteger(ctx, (frame[0].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$15_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$15", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(459);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_settings;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(460);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"preferredlaseropacity"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[0].i));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	{
	LINE_NUMBER(462);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001%"_j.string, 1, boxInteger(ctx, (frame[0].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$14_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$14", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(457);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001%"_j.string, 1, boxInteger(ctx, (frame[0].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$13_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$13", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(446);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_ios) == 0) goto label_1;
	}
	{
	LINE_NUMBER(447);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	sp += 1;
	if ((frame[0].i) <= (240)) goto label_3;
	}
	INST_ICONST(0);
	goto label_4;
label_3:;
	INST_ILOAD(0);
label_4:;
	POP_N(2); // Pop method args
	((func_arc_Graphics_setPreferredFPS_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_setPreferredFPS_int])(ctx, sp[0].o, sp[1].i);
label_1:;
	{
	LINE_NUMBER(449);
	if ((frame[0].i) <= (240)) goto label_5;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"setting.fpscap.none"_j))));
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"setting.fpscap.text"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[0].i));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	}
label_6:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$12_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$12", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(443);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001x"_j.string, 1, boxInteger(ctx, (frame[0].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$11_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$11", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(442);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001%"_j.string, 1, boxInteger(ctx, (jint((((jfloat((frame[0].i))) / (jfloat(4.0f))) * (jfloat(100.0f)))))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$10_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$10", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(440);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001x"_j.string, 1, boxFloat(ctx, ((jfloat((frame[0].i))) / (jfloat(4.0f)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$9_Array1_int_int_R_java_lang_String(jcontext ctx, jobject param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$9", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(436);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"uiscalechanged"_j));
	sp += 2;
	if ((frame[1].i) == ((jint)ARRAY_ACCESS(jint, (frame[0].o), (jint(0))))) goto label_1;
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
	LINE_NUMBER(437);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001%"_j.string, 1, boxInteger(ctx, (frame[1].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$8_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(426);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(427);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_updateMargins) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_updateMargins])(ctx, sp[0].o);
	LINE_NUMBER(428);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	((func_arc_scene_Scene_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_resize_int_int])(ctx, sp[0].o, temp0, temp1);
	}
label_1:;
	LINE_NUMBER(430);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$7_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$7", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(425);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001px"_j.string, 1, boxInteger(ctx, (frame[0].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$6_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$6", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(420);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	((func_mindustry_core_Platform_updateLobby) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_updateLobby, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(421);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxInteger(ctx, (frame[0].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$5_boolean(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$5", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(398);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_defaultServers;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(399);
	if ((frame[0].i) == 0) goto label_2;
	}
	LINE_NUMBER(400);
	SM_mindustry_ui_dialogs_JoinDialog_fetchServers(ctx);
label_2:;
	LINE_NUMBER(402);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$4_boolean(jcontext ctx, jbool param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(378);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp += 1;
	if ((frame[0].i) == 0) goto label_1;
	}
	{
	clinit_mindustry_input_DesktopInput(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_input_DesktopInput);
	init_mindustry_input_DesktopInput(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	clinit_mindustry_input_MobileInput(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_input_MobileInput);
	init_mindustry_input_MobileInput(ctx, sp[0].o);
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	((func_mindustry_core_Control_setInput_mindustry_input_InputHandler) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Control_setInput_mindustry_input_InputHandler])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(379);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	((func_arc_Input_setUseKeyboard_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_setUseKeyboard_boolean])(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(380);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$3_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$3", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(373);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"setting.seconds"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[0].i));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$2_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001%"_j.string, 1, boxInteger(ctx, (frame[0].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$1_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001%"_j.string, 1, boxInteger(ctx, (frame[0].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$0_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$addSettings$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(369);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001%"_j.string, 1, boxInteger(ctx, (frame[0].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$7_arc_scene_ui_TextButton(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$rebuildMenu$7", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(361);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_get_int_R_java_lang_Object])(ctx, sp[0].o, (jint(1)));
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_Image, sp[0].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$6_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$rebuildMenu$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(361);
	((func_mindustry_ui_dialogs_SettingsMenuDialog_visible_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_visible_int])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$5_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$rebuildMenu$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(359);
	((func_mindustry_ui_dialogs_SettingsMenuDialog_visible_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_visible_int])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$rebuildMenu$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(353);
	((func_mindustry_ui_dialogs_SettingsMenuDialog_visible_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_visible_int])(ctx, (frame[0].o), (jint(3)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$rebuildMenu$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_dataDialog;
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$rebuildMenu$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(346);
	((func_mindustry_ui_dialogs_SettingsMenuDialog_visible_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_visible_int])(ctx, (frame[0].o), (jint(2)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$rebuildMenu$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(345);
	((func_mindustry_ui_dialogs_SettingsMenuDialog_visible_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_visible_int])(ctx, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$rebuildMenu$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(344);
	((func_mindustry_ui_dialogs_SettingsMenuDialog_visible_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_visible_int])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$12_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$12", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(280.0f)), (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(177);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_flatt;
	frame[2].o = sp[0].o;
	LINE_NUMBER(179);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@settings.cleardata"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_trash;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_46(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_46 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_46);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(4.0f);
	LINE_NUMBER(194);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(196);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(198);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@settings.clearplanetdata"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_trash;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_47(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_47 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_47);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(200);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@settings.clearsaves"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_trash;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_48(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_48 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_48);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp1 = jfloat(4.0f);
	LINE_NUMBER(204);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(206);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(208);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@settings.clearresearch"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_trash;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_49(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_49 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_49);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp2 = jfloat(4.0f);
	LINE_NUMBER(221);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2);
	LINE_NUMBER(223);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(225);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@settings.clearcampaignsaves"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_trash;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_50(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_50 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_50);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp3 = jfloat(4.0f);
	LINE_NUMBER(249);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp3);
	LINE_NUMBER(251);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(253);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@data.export"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_upload;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_51(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_51 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_51);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp4 = jfloat(4.0f);
	LINE_NUMBER(255);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp4);
	LINE_NUMBER(257);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(259);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@data.import"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_download;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_52(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_52 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_52);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp5 = jfloat(4.0f);
	LINE_NUMBER(276);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp5);
	LINE_NUMBER(278);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_21;
	}
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(280);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@data.openfolder"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_folder;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_53(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_53 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_53);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	}
label_21:;
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(285);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@crash.export"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_upload;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_54(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_54 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_54);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(4.0f);
	LINE_NUMBER(291);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$28(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$28", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(286);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[0].o = (jobject)((func_arc_Settings_getDataDirectory_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getDataDirectory_R_arc_files_Fi])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"crashes"_j))));
	sp[0].o = (jobject)((func_arc_files_Fi_list_R_Array1_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_list_R_Array1_arc_files_Fi])(ctx, sp[0].o);
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[0].o = (jobject)((func_arc_Settings_getDataDirectory_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getDataDirectory_R_arc_files_Fi])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"last_log.txt"_j))));
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(287);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@crash.none"_j))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(289);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"logs"_j));
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"txt"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_core_Platform$FileWriter_2(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_core_Platform$FileWriter_2 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_core_Platform$FileWriter_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_ui_FileChooser_export_java_lang_String_java_lang_String_mindustry_core_Platform$FileWriter(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_3:;
	LINE_NUMBER(291);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$29_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$29", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(289);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog_getLogs_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_getLogs_R_java_lang_String])(ctx, (frame[0].o));
	((func_arc_files_Fi_writeString_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_writeString_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$27(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$27", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	{
	LINE_NUMBER(280);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((func_arc_Settings_getDataDirectory_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getDataDirectory_R_arc_files_Fi])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_files_Fi_absolutePath_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_absolutePath_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_Application_openFolder_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_openFolder_java_lang_String_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$24(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$24", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(259);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@confirm"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@data.import.confirm"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_55(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_55 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_55);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$25(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$25", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"zip"_j)));
	sp[0].o = (jobject)SM_mindustry_ui_FileChooser_open_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_14);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_FileChooser$FileChooserParams_submit_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_submit_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$26_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$26", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalArgumentException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(261);
	((func_mindustry_ui_dialogs_SettingsMenuDialog_importData_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_importData_arc_files_Fi])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(262);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mapPreviewDirectory;
	jint temp0 = (jint)((func_arc_files_Fi_deleteDirectory_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_deleteDirectory_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(263);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_saves;
	((func_mindustry_game_Saves_resetSave) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_resetSave])(ctx, sp[0].o);
	LINE_NUMBER(264);
	clinit_mindustry_core_GameState(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_GameState);
	init_mindustry_core_GameState(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_state = sp[0].o;
	LINE_NUMBER(265);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	((func_arc_Application_exit) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_exit, sp[0].o))(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(275);
	goto label_10;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(266);
	frame[2].o = sp[0].o;
	LINE_NUMBER(267);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@data.invalid"_j))));
	LINE_NUMBER(275);
	goto label_10;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(268);
	frame[2].o = sp[0].o;
	LINE_NUMBER(269);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[2].o));
	LINE_NUMBER(270);
	sp[0].o = (jobject)((func_java_lang_Exception_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_getMessage_R_java_lang_String])(ctx, (frame[2].o));
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Exception_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_getMessage_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"too short"_j))));
	if (temp0 != 0) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(271);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_Throwable])(ctx, sp[0].o, (frame[2].o));
	goto label_10;
	}
label_16:;
	{
	LINE_NUMBER(273);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@data.invalid"_j))));
	}
label_10:;
	LINE_NUMBER(276);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$23(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$23", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(254);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"mindustry-data-export"_j));
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"zip"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_core_Platform$FileWriter_3(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_core_Platform$FileWriter_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_core_Platform$FileWriter_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_ui_FileChooser_export_java_lang_String_java_lang_String_mindustry_core_Platform$FileWriter(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$21(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$21", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	{
	LINE_NUMBER(226);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@confirm"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@settings.clearcampaignsaves.confirm"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_56(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_56 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_56);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(249);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$22(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$22", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	{
	LINE_NUMBER(227);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_planets_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_planets_R_arc_struct_Seq])(ctx, sp[0].o);
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
	frame[1].o = (checkCast(ctx, &class_mindustry_type_Planet, sp[0].o));
	LINE_NUMBER(228);
	((func_mindustry_type_Planet_clearStats) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Planet_clearStats])(ctx, (frame[1].o));
	LINE_NUMBER(229);
	frame[2].i = (jint(0));
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(231);
	((func_mindustry_type_Sector_clearInfo) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_type_Sector_clearInfo])(ctx, (frame[4].o));
	LINE_NUMBER(232);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_save;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(233);
	frame[2].i = (jint(1));
	LINE_NUMBER(234);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_save;
	((func_mindustry_game_Saves$SaveSlot_delete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_delete])(ctx, sp[0].o);
	LINE_NUMBER(235);
	((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_save = (jref) (jobject(nullptr));
	}
label_10:;
	LINE_NUMBER(237);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(238);
	if ((frame[2].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(239);
	((func_mindustry_type_Planet_reloadMeshAsync) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Planet_reloadMeshAsync])(ctx, (frame[1].o));
	}
label_14:;
	LINE_NUMBER(241);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(243);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_saves;
	sp[0].o = (jobject)((func_mindustry_game_Saves_getSaveSlots_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_getSaveSlots_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_copy_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_mindustry_game_Saves$SaveSlot, sp[0].o));
	LINE_NUMBER(244);
	jint temp0 = (jint)((func_mindustry_game_Saves$SaveSlot_isSector_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_isSector_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(245);
	((func_mindustry_game_Saves$SaveSlot_delete) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_delete])(ctx, (frame[1].o));
	}
label_19:;
	LINE_NUMBER(247);
	goto label_16;
label_17:;
	LINE_NUMBER(248);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$18(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$18", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	{
	LINE_NUMBER(209);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@confirm"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@settings.clearresearch.confirm"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_57(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_57 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_57);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$19(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$19", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	{
	LINE_NUMBER(210);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_universe;
	((func_mindustry_game_Universe_clearLoadoutInfo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Universe_clearLoadoutInfo])(ctx, sp[0].o);
	LINE_NUMBER(211);
	clinit_mindustry_content_TechTree(ctx);
	sp[0].o = (jobject)SF_mindustry_content_TechTree_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_mindustry_content_TechTree$TechNode, sp[0].o));
	LINE_NUMBER(212);
	((func_mindustry_content_TechTree$TechNode_reset) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_content_TechTree$TechNode_reset])(ctx, (frame[1].o));
	LINE_NUMBER(213);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(214);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_15);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_ContentLoader_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(219);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_remove_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_remove_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unlocks"_j))));
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$20_mindustry_ctype_Content(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$20", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(215);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_ctype_UnlockableContent)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, (frame[0].o)));
	LINE_NUMBER(216);
	((func_mindustry_ctype_UnlockableContent_clearUnlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_clearUnlock])(ctx, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(218);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$16(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$16", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	{
	LINE_NUMBER(201);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@confirm"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@settings.clearsaves.confirm"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_58(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_58 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_58);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$17(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$17", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	{
	LINE_NUMBER(202);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_saves;
	((func_mindustry_game_Saves_deleteAll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_deleteAll])(ctx, sp[0].o);
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$15(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$15", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_planetDataDialog;
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$13(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$13", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	{
	LINE_NUMBER(179);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@confirm"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@settings.clearall.confirm"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_59(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_59 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_59);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$14(jcontext ctx) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$14", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog(ctx);
	{
	LINE_NUMBER(180);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(181);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[0].o = (jobject)((func_arc_Settings_keys_R_java_lang_Iterable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_keys_R_java_lang_Iterable])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(182);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"usid"_j))));
	if (temp0 != 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"uuid"_j))));
	if (temp0 == 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(183);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_settings;
	sp[2].o = (jobject)((func_arc_Settings_get_java_lang_String_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Settings_get_java_lang_String_java_lang_Object_R_java_lang_Object])(ctx, sp[2].o, (frame[2].o), (jobject(nullptr)));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_6:;
	LINE_NUMBER(185);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(186);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_clear])(ctx, sp[0].o);
	LINE_NUMBER(187);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_putAll_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_putAll_arc_struct_ObjectMap])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(189);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_dataDirectory;
	sp[0].o = (jobject)((func_arc_files_Fi_list_R_Array1_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_list_R_Array1_arc_files_Fi])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_11:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_12;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(190);
	jint temp0 = (jint)((func_arc_files_Fi_deleteDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_files_Fi_deleteDirectory_R_boolean])(ctx, (frame[4].o));
	LINE_NUMBER(189);
	INST_IINC(3, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(193);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	((func_arc_Application_exit) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_exit, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$2_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$2", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(280.0f)), (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(98);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_flatt;
	frame[2].o = sp[0].o;
	LINE_NUMBER(100);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"settings.planetselect"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[4].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[4].o))->F_iconColor;
	sp[4].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[4].o);
	sp[5].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[5].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[5].o))->F_localizedName;
	sp[4].o = (jobject)concatStringsRecipe(ctx, u8"[#\u0001]\u0001"_j.string, 2, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_planet;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_60(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_60 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_60);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp1 = jfloat(4.0f);
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label])(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_Label_setText_arc_func_Prov) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setText_arc_func_Prov])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(124);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(126);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@settings.clearplanetresearch"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_trash;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_61(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_61 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_61);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp2 = jfloat(4.0f);
	LINE_NUMBER(141);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2);
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(145);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@settings.clearplanetcampaignsaves"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_trash;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_62(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_62 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_62);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp3 = jfloat(4.0f);
	LINE_NUMBER(167);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp3);
	LINE_NUMBER(169);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$10(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$10", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(146);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@confirm"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"settings.clearplanetcampaignsaves.confirm"_j));
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[5].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[5].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[5].o))->F_localizedName;
	ARRAY_ACCESS(jobject, sp[4].o, temp0) = sp[5].o;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_63(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_63 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_63);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$11(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$11", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_planet;
	((func_mindustry_type_Planet_clearStats) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_clearStats])(ctx, sp[0].o);
	LINE_NUMBER(148);
	frame[1].i = (jint(0));
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectors;
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
	frame[3].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(150);
	((func_mindustry_type_Sector_clearInfo) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_type_Sector_clearInfo])(ctx, (frame[3].o));
	LINE_NUMBER(151);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[3].o)))->F_save;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(152);
	frame[1].i = (jint(1));
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[3].o)))->F_save;
	((func_mindustry_game_Saves$SaveSlot_delete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_delete])(ctx, sp[0].o);
	LINE_NUMBER(154);
	((mindustry_type_Sector *) NULL_CHECK((frame[3].o)))->F_save = (jref) (jobject(nullptr));
	}
label_7:;
	LINE_NUMBER(156);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(157);
	if ((frame[1].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_planet;
	((func_mindustry_type_Planet_reloadMeshAsync) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_reloadMeshAsync])(ctx, sp[0].o);
	}
label_11:;
	{
	LINE_NUMBER(161);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_saves;
	sp[0].o = (jobject)((func_mindustry_game_Saves_getSaveSlots_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_getSaveSlots_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_copy_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_game_Saves$SaveSlot, sp[0].o));
	LINE_NUMBER(162);
	jint temp0 = (jint)((func_mindustry_game_Saves$SaveSlot_isSector_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_isSector_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_mindustry_game_Saves$SaveSlot_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_getSector_R_mindustry_type_Sector])(ctx, (frame[3].o));
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_planet;
	if (sp[0].o != sp[1].o) goto label_16;
	}
	{
	LINE_NUMBER(163);
	((func_mindustry_game_Saves$SaveSlot_delete) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_delete])(ctx, (frame[3].o));
	}
label_16:;
	LINE_NUMBER(165);
	goto label_13;
label_14:;
	LINE_NUMBER(166);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$7(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$7", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(127);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@confirm"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"settings.clearplanetresearch.confirm"_j));
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[5].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[5].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[5].o))->F_localizedName;
	ARRAY_ACCESS(jobject, sp[4].o, temp0) = sp[5].o;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_64(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_64 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_64);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$8(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$8", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(128);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_universe;
	((func_mindustry_game_Universe_clearLoadoutInfo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Universe_clearLoadoutInfo])(ctx, sp[0].o);
	LINE_NUMBER(129);
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
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_rootNode;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_techTree;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(131);
	((func_mindustry_content_TechTree$TechNode_reset) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_content_TechTree$TechNode_reset])(ctx, (frame[2].o));
	}
label_5:;
	LINE_NUMBER(133);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(134);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_16);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_ContentLoader_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(139);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_remove_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_remove_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unlocks"_j))));
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$9_mindustry_ctype_Content(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$9", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(135);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_ctype_UnlockableContent)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[2].o)))->F_databaseTabs;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_planet;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(136);
	((func_mindustry_ctype_UnlockableContent_clearUnlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_clearUnlock])(ctx, (frame[2].o));
	}
label_1:;
	LINE_NUMBER(138);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$6_R_java_lang_CharSequence(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$6", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"settings.planetselect"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[3].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[3].o))->F_iconColor;
	sp[3].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[3].o);
	sp[4].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[4].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[4].o))->F_localizedName;
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"[#\u0001]\u0001"_j.string, 2, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(102);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_arc_func_Cons_17);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(119);
	((func_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(120);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[1].o));
	LINE_NUMBER(121);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[1].o));
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$4_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$4", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(103);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(104);
	frame[3].i = (jint(0));
	LINE_NUMBER(106);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_planets_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_planets_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_type_Planet, sp[0].o));
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[5].o)))->F_generator;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[5].o)))->F_sectors;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) == 0) goto label_3;
	}
	{
	if (((jint)((mindustry_type_Planet *) NULL_CHECK((frame[5].o)))->F_accessible) != 0) goto label_6;
	}
	goto label_3;
label_6:;
	{
	LINE_NUMBER(109);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[5].o)))->F_localizedName;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatTogglet;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_65(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_65 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_java_lang_Runnable_65);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(110.0f);
	jfloat temp1 = jfloat(45.0f);
	LINE_NUMBER(112);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	sp[1].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_planet;
	sp += 1;
	if (sp[0].o != (frame[5].o)) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(114);
	INST_IINC(3, 1);
	if (((frame[3].i) % (jint(4))) != 0) goto label_11;
	}
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	}
label_11:;
	LINE_NUMBER(117);
	goto label_3;
label_4:;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$5_mindustry_type_Planet_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$5", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(110);
	((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_planet = (jref) (frame[1].o);
	LINE_NUMBER(111);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$1_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	jint temp0 = (jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(0)));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	if (temp0 != temp1) goto label_1;
	}
	{
	jint temp0 = (jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(1)));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	if (temp0 == temp1) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild])(ctx, sp[0].o);
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_sound;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild])(ctx, sp[0].o);
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_game;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild])(ctx, sp[0].o);
	LINE_NUMBER(66);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog *) NULL_CHECK((frame[0].o)))->F_dev;
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild])(ctx, sp[0].o);
	LINE_NUMBER(67);
	((func_mindustry_ui_dialogs_SettingsMenuDialog_updateScrollFocus) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_updateScrollFocus])(ctx, (frame[0].o));
	LINE_NUMBER(68);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(69);
	sp[0].o = frame[1].o;
	jint temp2 = jint(1);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp3 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp2) = temp3;
	}
label_2:;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog:lambda$new$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	((func_mindustry_ui_dialogs_SettingsMenuDialog_back) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_back])(ctx, (frame[0].o));
	LINE_NUMBER(57);
	((func_mindustry_ui_dialogs_SettingsMenuDialog_rebuildMenu) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_rebuildMenu])(ctx, (frame[0].o));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_SettingsMenuDialog[] {
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
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_addCloseButton,
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
	(void *) M_mindustry_ui_dialogs_BaseDialog_lambda$new$1,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$0,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_getLogs_R_java_lang_String,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_addCategory_java_lang_String_java_lang_String_arc_func_Cons,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_addCategory_java_lang_String_arc_scene_style_Drawable_arc_func_Cons,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_addCategory_java_lang_String_arc_func_Cons,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_getCategories_R_arc_struct_Seq,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_rebuildMenu,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_addSettings,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_exportData_arc_files_Fi,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_importData_arc_files_Fi,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_back,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_visible_int,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addCloseButton$1_arc_input_KeyCode,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addCloseButton$0,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$6_int,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$5_int,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$4,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$3,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$2,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$1,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$0,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$12_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$28,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$29_arc_files_Fi,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$24,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$25,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$26_arc_files_Fi,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$23,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$15,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$2_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$10,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$11,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$7,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$8,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$9_mindustry_ctype_Content,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$6_R_java_lang_CharSequence,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$3,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$4_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$5_mindustry_type_Planet_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$1_Array1_int,
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
	{ "getLogs", "()Ljava/lang/String;" },
	{ "addCategory", "(Ljava/lang/String;Ljava/lang/String;Larc/func/Cons;)V" },
	{ "addCategory", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/func/Cons;)V" },
	{ "addCategory", "(Ljava/lang/String;Larc/func/Cons;)V" },
	{ "getCategories", "()Larc/struct/Seq;" },
	{ "rebuildMenu", "()V" },
	{ "addSettings", "()V" },
	{ "exportData", "(Larc/files/Fi;)V" },
	{ "importData", "(Larc/files/Fi;)V" },
	{ "back", "()V" },
	{ "visible", "(I)V" },
	{ "lambda$addCloseButton$1", "(Larc/input/KeyCode;)V" },
	{ "lambda$addCloseButton$0", "()V" },
	{ "lambda$rebuildMenu$6", "(I)V" },
	{ "lambda$rebuildMenu$5", "(I)V" },
	{ "lambda$rebuildMenu$4", "()V" },
	{ "lambda$rebuildMenu$3", "()V" },
	{ "lambda$rebuildMenu$2", "()V" },
	{ "lambda$rebuildMenu$1", "()V" },
	{ "lambda$rebuildMenu$0", "()V" },
	{ "lambda$new$12", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$28", "()V" },
	{ "lambda$new$29", "(Larc/files/Fi;)V" },
	{ "lambda$new$24", "()V" },
	{ "lambda$new$25", "()V" },
	{ "lambda$new$26", "(Larc/files/Fi;)V" },
	{ "lambda$new$23", "()V" },
	{ "lambda$new$15", "()V" },
	{ "lambda$new$2", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$10", "()V" },
	{ "lambda$new$11", "()V" },
	{ "lambda$new$7", "()V" },
	{ "lambda$new$8", "()V" },
	{ "lambda$new$9", "(Lmindustry/ctype/Content;)V" },
	{ "lambda$new$6", "()Ljava/lang/CharSequence;" },
	{ "lambda$new$3", "()V" },
	{ "lambda$new$4", "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$5", "(Lmindustry/type/Planet;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$new$1", "([I)V" },
};

static jclass innerClasses[] {
	&class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable,
	&class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory,
	&class_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor,
};

static FieldMetadata fields[] {
	{ "graphics", &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable, offsetof(mindustry_ui_dialogs_SettingsMenuDialog, F_graphics), "Lmindustry/ui/dialogs/SettingsMenuDialog$SettingsTable;", 1 },
	{ "game", &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable, offsetof(mindustry_ui_dialogs_SettingsMenuDialog, F_game), "Lmindustry/ui/dialogs/SettingsMenuDialog$SettingsTable;", 1 },
	{ "sound", &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable, offsetof(mindustry_ui_dialogs_SettingsMenuDialog, F_sound), "Lmindustry/ui/dialogs/SettingsMenuDialog$SettingsTable;", 1 },
	{ "dev", &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable, offsetof(mindustry_ui_dialogs_SettingsMenuDialog, F_dev), "Lmindustry/ui/dialogs/SettingsMenuDialog$SettingsTable;", 1 },
	{ "main", &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable, offsetof(mindustry_ui_dialogs_SettingsMenuDialog, F_main), "Lmindustry/ui/dialogs/SettingsMenuDialog$SettingsTable;", 1 },
	{ "prefs", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_dialogs_SettingsMenuDialog, F_prefs), "Larc/scene/ui/layout/Table;", 2 },
	{ "menu", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_dialogs_SettingsMenuDialog, F_menu), "Larc/scene/ui/layout/Table;", 2 },
	{ "dataDialog", &class_mindustry_ui_dialogs_BaseDialog, offsetof(mindustry_ui_dialogs_SettingsMenuDialog, F_dataDialog), "Lmindustry/ui/dialogs/BaseDialog;", 2 },
	{ "planetDataDialog", &class_mindustry_ui_dialogs_BaseDialog, offsetof(mindustry_ui_dialogs_SettingsMenuDialog, F_planetDataDialog), "Lmindustry/ui/dialogs/BaseDialog;", 2 },
	{ "planet", &class_mindustry_type_Planet, offsetof(mindustry_ui_dialogs_SettingsMenuDialog, F_planet), "Lmindustry/type/Planet;", 2 },
	{ "categories", &class_arc_struct_Seq, offsetof(mindustry_ui_dialogs_SettingsMenuDialog, F_categories), "Larc/struct/Seq;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_SettingsMenuDialog, 0, "()V", 1 },
	{ "getLogs", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_getLogs_R_java_lang_String, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_getLogs_R_java_lang_String, "()Ljava/lang/String;", 0 },
	{ "addCategory", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_addCategory_java_lang_String_java_lang_String_arc_func_Cons, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_addCategory_java_lang_String_java_lang_String_arc_func_Cons, "(Ljava/lang/String;Ljava/lang/String;Larc/func/Cons;)V", 1 },
	{ "addCategory", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_addCategory_java_lang_String_arc_scene_style_Drawable_arc_func_Cons, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_addCategory_java_lang_String_arc_scene_style_Drawable_arc_func_Cons, "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/func/Cons;)V", 1 },
	{ "addCategory", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_addCategory_java_lang_String_arc_func_Cons, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_addCategory_java_lang_String_arc_func_Cons, "(Ljava/lang/String;Larc/func/Cons;)V", 1 },
	{ "getCategories", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_getCategories_R_arc_struct_Seq, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_getCategories_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "rebuildMenu", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_rebuildMenu, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_rebuildMenu, "()V", 0 },
	{ "addSettings", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_addSettings, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_addSettings, "()V", 0 },
	{ "exportData", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_exportData_arc_files_Fi, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_exportData_arc_files_Fi, "(Larc/files/Fi;)V", 1 },
	{ "importData", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_importData_arc_files_Fi, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_importData_arc_files_Fi, "(Larc/files/Fi;)V", 1 },
	{ "back", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_back, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_back, "()V", 2 },
	{ "visible", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_visible_int, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_visible_int, "(I)V", 2 },
	{ "addCloseButton", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_addCloseButton, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_addCloseButton, "()V", 1 },
	{ "lambda$addCloseButton$1", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addCloseButton$1_arc_input_KeyCode, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addCloseButton$1_arc_input_KeyCode, "(Larc/input/KeyCode;)V", 4098 },
	{ "lambda$addCloseButton$0", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addCloseButton$0, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addCloseButton$0, "()V", 4098 },
	{ "lambda$importData$0", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$importData$0_arc_files_Fi_arc_files_Fi, 0, "(Larc/files/Fi;Larc/files/Fi;)V", 4106 },
	{ "lambda$addSettings$27", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$27_boolean, 0, "(Z)V", 4106 },
	{ "lambda$addSettings$26", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$26_boolean, 0, "(Z)V", 4106 },
	{ "lambda$addSettings$25", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$25_boolean, 0, "(Z)V", 4106 },
	{ "lambda$addSettings$24", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$24_boolean, 0, "(Z)V", 4106 },
	{ "lambda$addSettings$23", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$23_boolean, 0, "(Z)V", 4106 },
	{ "lambda$addSettings$22", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$22, 0, "()V", 4106 },
	{ "lambda$addSettings$21", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$21_boolean, 0, "(Z)V", 4106 },
	{ "lambda$addSettings$20", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$20_boolean, 0, "(Z)V", 4106 },
	{ "lambda$addSettings$19", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$19_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 4106 },
	{ "lambda$addSettings$18", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$18_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 4106 },
	{ "lambda$addSettings$17", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$17_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 4106 },
	{ "lambda$addSettings$16", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$16_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 4106 },
	{ "lambda$addSettings$15", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$15_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 4106 },
	{ "lambda$addSettings$14", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$14_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 4106 },
	{ "lambda$addSettings$13", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$13_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 4106 },
	{ "lambda$addSettings$12", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$12_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 4106 },
	{ "lambda$addSettings$11", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$11_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 4106 },
	{ "lambda$addSettings$10", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$10_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 4106 },
	{ "lambda$addSettings$9", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$9_Array1_int_int_R_java_lang_String, 0, "([II)Ljava/lang/String;", 4106 },
	{ "lambda$addSettings$8", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$8_int, 0, "(I)V", 4106 },
	{ "lambda$addSettings$7", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$7_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 4106 },
	{ "lambda$addSettings$6", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$6_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 4106 },
	{ "lambda$addSettings$5", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$5_boolean, 0, "(Z)V", 4106 },
	{ "lambda$addSettings$4", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$4_boolean, 0, "(Z)V", 4106 },
	{ "lambda$addSettings$3", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$3_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 4106 },
	{ "lambda$addSettings$2", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$2_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 4106 },
	{ "lambda$addSettings$1", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$1_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 4106 },
	{ "lambda$addSettings$0", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$0_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 4106 },
	{ "lambda$rebuildMenu$7", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$7_arc_scene_ui_TextButton, 0, "(Larc/scene/ui/TextButton;)V", 4106 },
	{ "lambda$rebuildMenu$6", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$6_int, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$6_int, "(I)V", 4098 },
	{ "lambda$rebuildMenu$5", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$5_int, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$5_int, "(I)V", 4098 },
	{ "lambda$rebuildMenu$4", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$4, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$4, "()V", 4098 },
	{ "lambda$rebuildMenu$3", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$3, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$3, "()V", 4098 },
	{ "lambda$rebuildMenu$2", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$2, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$2, "()V", 4098 },
	{ "lambda$rebuildMenu$1", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$1, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$1, "()V", 4098 },
	{ "lambda$rebuildMenu$0", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$0, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$rebuildMenu$0, "()V", 4098 },
	{ "lambda$new$12", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$12_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$12_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$28", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$28, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$28, "()V", 4098 },
	{ "lambda$new$29", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$29_arc_files_Fi, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$29_arc_files_Fi, "(Larc/files/Fi;)V", 4098 },
	{ "lambda$new$27", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$27, 0, "()V", 4106 },
	{ "lambda$new$24", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$24, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$24, "()V", 4098 },
	{ "lambda$new$25", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$25, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$25, "()V", 4098 },
	{ "lambda$new$26", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$26_arc_files_Fi, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$26_arc_files_Fi, "(Larc/files/Fi;)V", 4098 },
	{ "lambda$new$23", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$23, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$23, "()V", 4098 },
	{ "lambda$new$21", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$21, 0, "()V", 4106 },
	{ "lambda$new$22", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$22, 0, "()V", 4106 },
	{ "lambda$new$18", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$18, 0, "()V", 4106 },
	{ "lambda$new$19", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$19, 0, "()V", 4106 },
	{ "lambda$new$20", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$20_mindustry_ctype_Content, 0, "(Lmindustry/ctype/Content;)V", 4106 },
	{ "lambda$new$16", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$16, 0, "()V", 4106 },
	{ "lambda$new$17", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$17, 0, "()V", 4106 },
	{ "lambda$new$15", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$15, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$15, "()V", 4098 },
	{ "lambda$new$13", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$13, 0, "()V", 4106 },
	{ "lambda$new$14", (intptr_t) SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$14, 0, "()V", 4106 },
	{ "lambda$new$2", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$2_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$2_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$10", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$10, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$10, "()V", 4098 },
	{ "lambda$new$11", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$11, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$11, "()V", 4098 },
	{ "lambda$new$7", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$7, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$7, "()V", 4098 },
	{ "lambda$new$8", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$8, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$8, "()V", 4098 },
	{ "lambda$new$9", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$9_mindustry_ctype_Content, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$9_mindustry_ctype_Content, "(Lmindustry/ctype/Content;)V", 4098 },
	{ "lambda$new$6", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$6_R_java_lang_CharSequence, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$6_R_java_lang_CharSequence, "()Ljava/lang/CharSequence;", 4098 },
	{ "lambda$new$3", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$3, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$3, "()V", 4098 },
	{ "lambda$new$4", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$4_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$4_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$5", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$5_mindustry_type_Planet_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$5_mindustry_type_Planet_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/type/Planet;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$1_Array1_int, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$1_Array1_int, "([I)V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$0, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_lambda$new$0, "()V", 4098 },
};

Class class_mindustry_ui_dialogs_SettingsMenuDialog{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/SettingsMenuDialog",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_BaseDialog,
		.size = sizeof(mindustry_ui_dialogs_SettingsMenuDialog),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_SettingsMenuDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_SettingsMenuDialog,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_SettingsMenuDialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 82,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 336,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_SettingsMenuDialog = registerClass(&class_mindustry_ui_dialogs_SettingsMenuDialog);

}
