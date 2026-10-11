#include "mindustry/editor/data/MapAssetsDialog.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "arc/scene/ui/TextField.h"
#include "mindustry/editor/data/MapContentView.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/editor/data/MapPatchesView.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_arc_func_Prov_1.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/mod/DataPatcher.h"
#include "arc/struct/Seq.h"
#include "mindustry/editor/data/MapImagesView.h"
#include "arc/scene/ui/layout/Cell.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ui/FileChooser.h"
#include "arc/util/OS.h"
#include "arc/scene/ui/ImageButton.h"
#include "mindustry/mod/data/DataAsset.h"
#include "java/lang/Throwable.h"
#include "arc/func/Boolf.h"
#include "java/util/Locale.h"
#include "arc/Core.h"
#include "arc/func/Func.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "java/util/zip/ZipEntry.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_java_lang_Runnable_12.h"
#include "arc/util/Log.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_java_lang_Runnable_11.h"
#include "arc/files/ZipFi.h"
#include "mindustry/editor/data/MapAssetsDialog.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_java_lang_Runnable_16.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_java_lang_Runnable_15.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_java_lang_Runnable_14.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_java_lang_Runnable_13.h"
#include "arc/util/Nullable.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_java_lang_Runnable_19.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_java_lang_Runnable_18.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_java_lang_Runnable_17.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_arc_func_Cons_11.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_arc_func_Cons_12.h"
#include "java/lang/Object.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_arc_func_Cons_13.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_arc_func_Func_1.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_arc_func_Cons_14.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_arc_func_Cons_15.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_arc_func_Cons_10.h"
#include "mindustry/mod/data/DataAssetType.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_mindustry_core_Platform_FileWriter_1.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_java_lang_Runnable_21.h"
#include "mindustry/editor/data/MapAudioView.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_java_lang_Runnable_20.h"
#include "mindustry/editor/MapEditorDialog.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/core/Platform_FileWriter.h"
#include "arc/files/Fi.h"
#include "java/lang/Iterable.h"
#include "arc/Application.h"
#include "arc/func/Cons.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_arc_func_Boolf_5.h"
#include "java/lang/String.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_arc_func_Boolf_3.h"
#include "mindustry/mod/DataManager.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_arc_func_Boolf_4.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "mindustry/ui/FileChooser_FileChooserParams.h"
#include "mindustry/mod/data/ContentAsset.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_arc_func_Cons_9.h"
#include "mindustry/editor/data/MapAssetsDialog_invoke_arc_func_Cons_8.h"
#include "mindustry/ui/Styles.h"
#include "java/lang/Enum.h"
#include "java/util/zip/ZipOutputStream.h"
#include "mindustry/editor/data/AssetView.h"
#include "mindustry/editor/data/MapBundlesView.h"
#include "mindustry/core/UI.h"
#include "java/io/OutputStream.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/ctype/ContentType.h"
#include "java/util/Objects.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {

jobject SF_mindustry_editor_data_MapAssetsDialog_typeIcons;

void mark_mindustry_editor_data_MapAssetsDialog(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_editor_data_MapAssetsDialog_typeIcons)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_data_MapAssetsDialog_typeIcons)->clazz)->markFunction)((jobject) SF_mindustry_editor_data_MapAssetsDialog_typeIcons, mark, depth + 1);
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
	auto self = (mindustry_editor_data_MapAssetsDialog *) object;
	if (self->F_views)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_views)->clazz)->markFunction)((jobject) self->F_views, mark, depth + 1);
	if (self->F_searchField)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_searchField)->clazz)->markFunction)((jobject) self->F_searchField, mark, depth + 1);
	if (self->F_searchString)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_searchString)->clazz)->markFunction)((jobject) self->F_searchString, mark, depth + 1);
	if (self->F_list)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_list)->clazz)->markFunction)((jobject) self->F_list, mark, depth + 1);
	if (self->F_currentType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentType)->clazz)->markFunction)((jobject) self->F_currentType, mark, depth + 1);
}

void init_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapAssetsDialog(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(51);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_editor_data_AssetView, (6));
	jint temp0 = jint(0);
	clinit_mindustry_editor_data_MapPatchesView(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_editor_data_MapPatchesView);
	init_mindustry_editor_data_MapPatchesView(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_editor_data_MapContentView(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_editor_data_MapContentView);
	init_mindustry_editor_data_MapContentView(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_mindustry_editor_data_MapBundlesView(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView);
	init_mindustry_editor_data_MapBundlesView(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	clinit_mindustry_editor_data_MapImagesView(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView);
	init_mindustry_editor_data_MapImagesView(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(4);
	clinit_mindustry_editor_data_MapAudioView(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_editor_data_MapAudioView);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[3].o = (jobject)SF_mindustry_mod_data_DataAssetType_sound;
	init_mindustry_editor_data_MapAudioView_mindustry_mod_data_DataAssetType(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp5 = jint(5);
	clinit_mindustry_editor_data_MapAudioView(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_editor_data_MapAudioView);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[3].o = (jobject)SF_mindustry_mod_data_DataAssetType_music;
	init_mindustry_editor_data_MapAudioView_mindustry_mod_data_DataAssetType(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK(sp[0].o))->F_views = (jref) sp[1].o;
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_data_DataAssetType_music;
	((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK(sp[0].o))->F_currentType = (jref) sp[1].o;
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_data_MapAssetsDialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_12(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_12 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_data_MapAssetsDialog_hidden_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_hidden_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(67);
	((func_mindustry_editor_data_MapAssetsDialog_makeButtonOverlay) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_makeButtonOverlay])(ctx, (frame[0].o));
	LINE_NUMBER(68);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_titleTable;
	jint temp6 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(70);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(71);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(50.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(73);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_menu;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_graySquarei;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(75);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)), (jfloat(50.0f)));
	LINE_NUMBER(77);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_data_DataAssetType_all;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_12:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_13;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(78);
	sp[0].o = frame[1].o;
	clinit_mindustry_editor_data_MapAssetsDialog(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_data_MapAssetsDialog_typeIcons;
	jint temp0 = (jint)((func_mindustry_mod_data_DataAssetType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_mod_data_DataAssetType_ordinal_R_int])(ctx, (frame[5].o));
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, temp0);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_grayTogglei;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_14(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_14 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_14);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Boolf_3);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(79);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((func_mindustry_mod_data_DataAssetType_localized_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_mod_data_DataAssetType_localized_R_java_lang_String])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(77);
	INST_IINC(4, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(81);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)), (jfloat(50.0f)));
	LINE_NUMBER(83);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayPanel;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(50.0f);
	LINE_NUMBER(86);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-std::numeric_limits<float>::infinity())));
	LINE_NUMBER(88);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(90);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@asset.guide"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_link;
	clinit_mindustry_ui_Styles(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_Styles_grayt;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_15(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_15 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_15);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(200.0f)), (jfloat(50.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(92);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(94);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(96);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(104);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(106);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapAssetsDialog_changeType_mindustry_mod_data_DataAssetType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:changeType", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(110);
	((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK((frame[0].o)))->F_currentType = (jref) (frame[1].o);
	LINE_NUMBER(112);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, sp[0].o);
	LINE_NUMBER(113);
	((func_mindustry_editor_data_MapAssetsDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_addCloseButton])(ctx, (frame[0].o));
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK((frame[0].o)))->F_views;
	sp[1].o = (jobject)((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK((frame[0].o)))->F_currentType;
	jint temp0 = (jint)((func_mindustry_mod_data_DataAssetType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_data_DataAssetType_ordinal_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	((func_mindustry_editor_data_AssetView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table) resolveInterfaceMethod(ctx, &class_mindustry_editor_data_AssetView, INDEX_mindustry_editor_data_AssetView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(117);
	sp[0].o = frame[1].o;
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_data_DataAssetType_content;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(118);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_reloadContent_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_reloadContent_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(119);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_regenerateContentSprites_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_regenerateContentSprites_boolean])(ctx, sp[0].o, (jint(0)));
	}
label_5:;
	{
	LINE_NUMBER(122);
	((func_mindustry_editor_data_MapAssetsDialog_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapAssetsDialog_rebuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:rebuild", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK((frame[0].o)))->F_list;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_center_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_center_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK((frame[0].o)))->F_list;
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, sp[0].o);
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK((frame[0].o)))->F_list;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(70.0f)));
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK((frame[0].o)))->F_views;
	sp[1].o = (jobject)((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK((frame[0].o)))->F_currentType;
	jint temp0 = (jint)((func_mindustry_mod_data_DataAssetType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_data_DataAssetType_ordinal_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK((frame[0].o)))->F_list;
	((func_mindustry_editor_data_AssetView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table) resolveInterfaceMethod(ctx, &class_mindustry_editor_data_AssetView, INDEX_mindustry_editor_data_AssetView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapAssetsDialog_showEditMenu(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:showEditMenu", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(134);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@edit.menu"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(135);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_11);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(270);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[1].o));
	LINE_NUMBER(271);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[1].o));
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$0_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:lambda$showEditMenu$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o), (jfloat(10.0f)));
	LINE_NUMBER(137);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_12);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(268);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$1_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:lambda$showEditMenu$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(138);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_flatt;
	frame[3].o = sp[0].o;
	LINE_NUMBER(139);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(280.0f)), (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(140);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@asset.importzip"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_download;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_16(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_16 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_16);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(239);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(240);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@asset.exportzip"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_upload;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_17(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_17 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_17);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp1 = jfloat(12.0f);
	LINE_NUMBER(259);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(260);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@asset.clearall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_trash;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_18(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_18 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_18);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp2 = jfloat(12.0f);
	LINE_NUMBER(266);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$11_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:lambda$showEditMenu$11", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(261);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(262);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@asset.clearall.confirm"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_19(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_19 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_19);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$12(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:lambda$showEditMenu$12", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(263);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_unload) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_unload])(ctx, sp[0].o);
	LINE_NUMBER(264);
	((func_mindustry_editor_data_MapAssetsDialog_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$9_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:lambda$showEditMenu$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapAssetsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(240);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"assets"_j));
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"zip"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_mindustry_core_Platform$FileWriter_1(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_mindustry_core_Platform$FileWriter_1 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_mindustry_core_Platform$FileWriter_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_ui_FileChooser_export_java_lang_String_java_lang_String_mindustry_core_Platform$FileWriter(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$10_mindustry_ui_dialogs_BaseDialog_arc_files_Fi(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:lambda$showEditMenu$10", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapAssetsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(241);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(242);
	sp[0].o = (jobject)((func_arc_files_Fi_write_boolean_int_R_java_io_OutputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_write_boolean_int_R_java_io_OutputStream])(ctx, (frame[1].o), (jint(0)), (8192));
	frame[2].o = sp[0].o;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	clinit_java_util_zip_ZipOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipOutputStream);
	init_java_util_zip_ZipOutputStream_java_io_OutputStream(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(243);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getAllAssets_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getAllAssets_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_18:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_mod_data_DataAsset, sp[0].o));
	LINE_NUMBER(244);
	sp[0].o = (jobject)((func_mindustry_mod_data_DataAsset_getFullPath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_getFullPath_R_java_lang_String])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(245);
	jint temp0 = (jint)((func_mindustry_mod_data_DataAsset_isAlwaysEmbedded_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_isAlwaysEmbedded_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_21;
	}
	{
	LINE_NUMBER(246);
	sp[0].o = frame[3].o;
	clinit_java_util_zip_ZipEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_zip_ZipEntry);
	init_java_util_zip_ZipEntry_java_lang_String(ctx, sp[1].o, (frame[6].o));
	((func_java_util_zip_ZipOutputStream_putNextEntry_java_util_zip_ZipEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_ZipOutputStream_putNextEntry_java_util_zip_ZipEntry])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(247);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_mindustry_mod_data_DataAsset_getData_R_Array1_byte) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_getData_R_Array1_byte])(ctx, (frame[5].o));
	((func_java_util_zip_ZipOutputStream_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_ZipOutputStream_write_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(248);
	((func_java_util_zip_ZipOutputStream_closeEntry) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_zip_ZipOutputStream_closeEntry])(ctx, (frame[3].o));
	goto label_25;
	}
label_21:;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((func_mindustry_mod_data_DataAsset_getCacheFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_getCacheFile_R_arc_files_Fi])(ctx, (frame[5].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(251);
	if ((frame[7].o) != nullptr) goto label_27;
	}
	goto label_18;
label_27:;
	{
	LINE_NUMBER(253);
	sp[0].o = frame[3].o;
	clinit_java_util_zip_ZipEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_zip_ZipEntry);
	init_java_util_zip_ZipEntry_java_lang_String(ctx, sp[1].o, (frame[6].o));
	((func_java_util_zip_ZipOutputStream_putNextEntry_java_util_zip_ZipEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_ZipOutputStream_putNextEntry_java_util_zip_ZipEntry])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(254);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_arc_files_Fi_readBytes_R_Array1_byte) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_files_Fi_readBytes_R_Array1_byte])(ctx, (frame[7].o));
	((func_java_util_zip_ZipOutputStream_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_ZipOutputStream_write_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(255);
	((func_java_util_zip_ZipOutputStream_closeEntry) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_zip_ZipOutputStream_closeEntry])(ctx, (frame[3].o));
	}
label_25:;
	LINE_NUMBER(257);
	goto label_18;
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(258);
	((func_java_util_zip_ZipOutputStream_close) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_zip_ZipOutputStream_close])(ctx, (frame[3].o));
	goto label_9;
	}
label_2:;
	LINE_NUMBER(242);
	INST_ASTORE(4);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	((func_java_util_zip_ZipOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_ZipOutputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_30;
label_6:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[4].o), (frame[5].o));
	}
label_30:;
	INST_ALOAD(4);
	INST_ATHROW();
	label_9:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(258);
	if ((frame[2].o) == nullptr) goto label_32;
	}
	{
	((func_java_io_OutputStream_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_OutputStream_close])(ctx, (frame[2].o));
	goto label_32;
	}
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(242);
	frame[3].o = sp[0].o;
	if ((frame[2].o) == nullptr) goto label_34;
	}
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	((func_java_io_OutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_34;
label_14:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[3].o), (frame[4].o));
	}
label_34:;
	INST_ALOAD(3);
	INST_ATHROW();
	label_32:;
	LINE_NUMBER(259);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$2_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:lambda$showEditMenu$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"zip"_j)));
	sp[0].o = (jobject)SM_mindustry_ui_FileChooser_open_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_13);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_FileChooser$FileChooserParams_submit_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_submit_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$3_mindustry_ui_dialogs_BaseDialog_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:lambda$showEditMenu$3", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(144);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isAndroid) == 0) goto label_1;
	}
	{
	LINE_NUMBER(145);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_tmpDirectory;
	sp[1].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(146);
	((func_arc_files_Fi_copyTo_arc_files_Fi) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_copyTo_arc_files_Fi])(ctx, (frame[2].o), (frame[3].o));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(148);
	frame[3].o = (frame[2].o);
	}
label_4:;
	{
	LINE_NUMBER(151);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(152);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_20(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_20 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_20);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_loadAnd_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_loadAnd_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$4_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:lambda$showEditMenu$4", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(154);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(155);
	clinit_arc_files_ZipFi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_files_ZipFi);
	init_arc_files_ZipFi_arc_files_Fi(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(156);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(158);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_clearGeneratedImages) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_clearGeneratedImages])(ctx, sp[0].o);
	LINE_NUMBER(160);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_data_DataAssetType_all;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_18:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_19;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(161);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_mod_data_DataAssetType *) NULL_CHECK((frame[8].o)))->F_folder;
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(164);
	sp[0].o = frame[8].o;
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_data_DataAssetType_content;
	if (sp[0].o != sp[1].o) goto label_22;
	}
	{
	LINE_NUMBER(165);
	clinit_mindustry_mod_data_ContentAsset(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_data_ContentAsset_loadableContent;
	frame[10].o = sp[0].o;
	frame[11].i = (((jarray) nullCheck(ctx, (frame[10].o)))->length);
	frame[12].i = (jint(0));
	}
label_26:;
	{
	if ((frame[12].i) >= (frame[11].i)) goto label_27;
	}
	{
	frame[13].o = ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (frame[12].i)));
	LINE_NUMBER(166);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((mindustry_ctype_ContentType *) NULL_CHECK((frame[13].o)))->F_folderName;
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[14].o = sp[0].o;
	LINE_NUMBER(168);
	sp[0].o = frame[14].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Boolf_4);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_files_Fi_findAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_findAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[15].o = sp[0].o;
	LINE_NUMBER(170);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[15].o));
	frame[16].o = sp[0].o;
	}
label_31:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[16].o)))(ctx, (frame[16].o));
	if (temp0 == 0) goto label_32;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[16].o)))(ctx, (frame[16].o));
	frame[17].o = (checkCast(ctx, &class_arc_files_Fi, sp[0].o));
	LINE_NUMBER(171);
	sp[0].o = (jobject)((func_arc_files_Fi_absolutePath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_files_Fi_absolutePath_R_java_lang_String])(ctx, (frame[17].o));
	sp[1].o = (jobject)((func_arc_files_Fi_absolutePath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_arc_files_Fi_absolutePath_R_java_lang_String])(ctx, (frame[14].o));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, (temp0 + (jint(1))));
	frame[18].o = sp[0].o;
	LINE_NUMBER(172);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[1].o = frame[8].o;
	sp[2].o = (jobject)SM_arc_util_Strings_getFileNameWithoutExtension_java_lang_String_R_java_lang_String(ctx, (frame[18].o));
	jint temp1 = (jint)((func_mindustry_mod_DataManager_hasAssetNameOrPath_mindustry_mod_data_DataAssetType_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_hasAssetNameOrPath_mindustry_mod_data_DataAssetType_java_lang_String_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[18].o));
	if (temp1 == 0) goto label_0;
	}
	{
	LINE_NUMBER(173);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[8].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Asset of type '\u0001' with name/path '\u0001' already exists."_j.string, 2, sp[1].o, (frame[18].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(174);
	goto label_31;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(178);
	clinit_mindustry_mod_data_ContentAsset(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_data_ContentAsset);
	sp[1].o = (jobject)((func_arc_files_Fi_absolutePath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_files_Fi_absolutePath_R_java_lang_String])(ctx, (frame[17].o));
	sp[2].o = (jobject)((func_arc_files_Fi_absolutePath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_arc_files_Fi_absolutePath_R_java_lang_String])(ctx, (frame[14].o));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[1].o, (temp0 + (jint(1))));
	sp[2].o = frame[13].o;
	sp[3].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[17].o));
	init_mindustry_mod_data_ContentAsset_java_lang_String_mindustry_ctype_ContentType_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[19].o = sp[0].o;
	LINE_NUMBER(179);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[2].o), (frame[19].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(183);
	goto label_38;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(180);
	frame[19].o = sp[0].o;
	LINE_NUMBER(181);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[19].o));
	LINE_NUMBER(182);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[17].o));
	sp[2].o = (jobject)SM_arc_util_Strings_getSimpleMessage_java_lang_Throwable_R_java_lang_String(ctx, (frame[19].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Error loading content asset: \u0001: \u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_38:;
	LINE_NUMBER(184);
	goto label_31;
label_32:;
	{
	LINE_NUMBER(165);
	INST_IINC(12, 1);
	goto label_26;
	}
label_27:;
	goto label_41;
label_22:;
	{
	LINE_NUMBER(187);
	sp[0].o = frame[9].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Boolf_5);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_files_Fi_findAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_findAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(189);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[10].o));
	frame[11].o = sp[0].o;
	}
label_43:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[11].o)))(ctx, (frame[11].o));
	if (temp0 == 0) goto label_41;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[11].o)))(ctx, (frame[11].o));
	frame[12].o = (checkCast(ctx, &class_arc_files_Fi, sp[0].o));
	LINE_NUMBER(190);
	sp[0].o = (jobject)((func_arc_files_Fi_absolutePath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_files_Fi_absolutePath_R_java_lang_String])(ctx, (frame[12].o));
	sp[1].o = (jobject)((func_arc_files_Fi_absolutePath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_files_Fi_absolutePath_R_java_lang_String])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, (temp0 + (jint(1))));
	frame[13].o = sp[0].o;
	LINE_NUMBER(191);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[1].o = frame[8].o;
	sp[2].o = (jobject)SM_arc_util_Strings_getFileNameWithoutExtension_java_lang_String_R_java_lang_String(ctx, (frame[13].o));
	jint temp1 = (jint)((func_mindustry_mod_DataManager_hasAssetNameOrPath_mindustry_mod_data_DataAssetType_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_hasAssetNameOrPath_mindustry_mod_data_DataAssetType_java_lang_String_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[13].o));
	if (temp1 == 0) goto label_4;
	}
	{
	LINE_NUMBER(192);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[8].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Asset of type '\u0001' with name/path '\u0001' already exists."_j.string, 2, sp[1].o, (frame[13].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(193);
	goto label_43;
	}
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((func_mindustry_mod_data_DataAssetType_create_R_mindustry_mod_data_DataAsset) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_mod_data_DataAssetType_create_R_mindustry_mod_data_DataAsset])(ctx, (frame[8].o));
	frame[14].o = sp[0].o;
	LINE_NUMBER(197);
	((func_mindustry_mod_data_DataAsset_readFromZip_java_lang_String_arc_files_Fi) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_readFromZip_java_lang_String_arc_files_Fi])(ctx, (frame[14].o), (frame[13].o), (frame[12].o));
	LINE_NUMBER(198);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[2].o), (frame[14].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(202);
	goto label_50;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(199);
	frame[14].o = sp[0].o;
	LINE_NUMBER(200);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[14].o));
	LINE_NUMBER(201);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[12].o));
	sp[2].o = (jobject)SM_arc_util_Strings_getSimpleMessage_java_lang_Throwable_R_java_lang_String(ctx, (frame[14].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Error loading data asset: \u0001: \u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_50:;
	LINE_NUMBER(203);
	goto label_43;
label_41:;
	{
	LINE_NUMBER(160);
	INST_IINC(7, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(208);
	jint temp0 = (jint)((func_arc_files_Fi_delete_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_files_Fi_delete_R_boolean])(ctx, (frame[3].o));
	LINE_NUMBER(210);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size) <= 0) goto label_54;
	}
	{
	LINE_NUMBER(211);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getAllAssets_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getAllAssets_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_copy_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(212);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, (frame[5].o), (frame[2].o));
	LINE_NUMBER(213);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, (frame[5].o));
	LINE_NUMBER(214);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_load_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_load_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(215);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getContent_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getContent_R_arc_struct_Seq])(ctx, sp[0].o);
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_60;
	}
	{
	LINE_NUMBER(217);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_regenerateContentSprites_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_regenerateContentSprites_boolean])(ctx, sp[0].o, (jint(0)));
	}
label_60:;
	{
	LINE_NUMBER(219);
	((func_mindustry_editor_data_MapAssetsDialog_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_rebuild])(ctx, (frame[0].o));
	}
label_54:;
	{
	LINE_NUMBER(222);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@asset.image.imports"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(223);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size) <= 0) goto label_63;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[5].o)))->F_cont;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"asset.imported"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_63:;
	{
	LINE_NUMBER(224);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_64;
	}
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[5].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@asset.image.error"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(226);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[5].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_14);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	goto label_67;
	}
label_64:;
	{
	LINE_NUMBER(229);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size) != 0) goto label_67;
	}
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[5].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@asset.import.none"_j))));
	}
label_67:;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[5].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@ok"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_ok;
	sp[3].o = frame[5].o;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_21(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_21 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_java_lang_Runnable_21);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(200.0f)), (jfloat(64.0f)));
	LINE_NUMBER(233);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(237);
	goto label_70;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(235);
	frame[2].o = sp[0].o;
	LINE_NUMBER(236);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_Throwable])(ctx, sp[0].o, (frame[2].o));
	}
label_70:;
	LINE_NUMBER(238);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$7_arc_struct_Seq_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:lambda$showEditMenu$7", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapAssetsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(227);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_java_lang_Iterable_R_arc_struct_Seq(ctx, (frame[0].o));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"\n"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Func_1);
		sp[3].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_toString_java_lang_String_arc_func_Func_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toString_java_lang_String_arc_func_Func_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (8), (8));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(228);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$8_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:lambda$showEditMenu$8", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapAssetsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[gray]- []\u0001"_j.string, 1, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$6_mindustry_mod_data_DataAssetType_arc_files_Fi_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:lambda$showEditMenu$6", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapAssetsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((mindustry_mod_data_DataAssetType *) NULL_CHECK((frame[0].o)))->F_extensions;
	sp[1].o = (jobject)((func_arc_files_Fi_extension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_extension_R_java_lang_String])(ctx, (frame[1].o));
	clinit_java_util_Locale(ctx);
	sp[2].o = (jobject)SF_java_util_Locale_ROOT;
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$5_mindustry_mod_data_DataAssetType_arc_files_Fi_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:lambda$showEditMenu$5", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapAssetsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_mod_data_DataAssetType *) NULL_CHECK((frame[0].o)))->F_extensions;
	sp[1].o = (jobject)((func_arc_files_Fi_extension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_extension_R_java_lang_String])(ctx, (frame[1].o));
	clinit_java_util_Locale(ctx);
	sp[2].o = (jobject)SF_java_util_Locale_ROOT;
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapAssetsDialog_lambda$new$9_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:lambda$new$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(106);
	((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK((frame[0].o)))->F_list = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapAssetsDialog_lambda$new$7_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:lambda$new$7", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(97);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_zoom;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8""_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Cons_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(102);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[1].o);
	((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK(sp[0].o))->F_searchField = (jref) (checkCast(ctx, &class_arc_scene_ui_TextField, sp[1].o));
	LINE_NUMBER(103);
	sp[0].o = (jobject)((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK((frame[0].o)))->F_searchField;
	((func_arc_scene_ui_TextField_setMessageText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setMessageText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@search"_j))));
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapAssetsDialog_lambda$new$8_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:lambda$new$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(100);
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
	((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK(sp[0].o))->F_searchString = (jref) sp[1].o;
	LINE_NUMBER(101);
	((func_mindustry_editor_data_MapAssetsDialog_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapAssetsDialog_lambda$new$6(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:lambda$new$6", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapAssetsDialog(ctx);
	{
	LINE_NUMBER(90);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_openURI_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_openURI_java_lang_String_R_boolean, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"https://mindustrygame.github.io/wiki/datapatches/"_j))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapAssetsDialog_lambda$new$4_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:lambda$new$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(8.0f)));
	LINE_NUMBER(85);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAssetsDialog_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_editor_data_MapAssetsDialog_lambda$new$5_R_java_lang_CharSequence(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:lambda$new$5", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK((frame[0].o)))->F_currentType;
	sp[0].o = (jobject)((func_mindustry_mod_data_DataAssetType_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_data_DataAssetType_localized_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_data_MapAssetsDialog_lambda$new$3_mindustry_mod_data_DataAssetType_arc_scene_ui_ImageButton_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:lambda$new$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK((frame[0].o)))->F_currentType;
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

void M_mindustry_editor_data_MapAssetsDialog_lambda$new$2_mindustry_mod_data_DataAssetType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:lambda$new$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	((func_mindustry_editor_data_MapAssetsDialog_changeType_mindustry_mod_data_DataAssetType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_changeType_mindustry_mod_data_DataAssetType])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapAssetsDialog_lambda$new$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:lambda$new$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK((frame[0].o)))->F_list;
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, sp[0].o);
	LINE_NUMBER(62);
	SM_mindustry_mod_DataPatcher_fixContentArrays(ctx);
	LINE_NUMBER(64);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_editor;
	((func_mindustry_editor_MapEditorDialog_rebuildBlockSelection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_rebuildBlockSelection])(ctx, sp[0].o);
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapAssetsDialog_lambda$new$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:lambda$new$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK((frame[0].o)))->F_searchString = (jref) (jobject(nullptr));
	LINE_NUMBER(55);
	sp[0].o = (jobject)((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK((frame[0].o)))->F_searchField;
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_data_DataAssetType_patch;
	((func_mindustry_editor_data_MapAssetsDialog_changeType_mindustry_mod_data_DataAssetType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_changeType_mindustry_mod_data_DataAssetType])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_editor_data_MapAssetsDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAssetsDialog:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapAssetsDialog(ctx);
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)createArray(ctx, &class_arc_scene_style_TextureRegionDrawable, (6));
	jint temp0 = jint(0);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_fileCode;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_box;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_fileText;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_image;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_volumeUp;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_music;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	clinit_mindustry_editor_data_MapAssetsDialog(ctx);
	SF_mindustry_editor_data_MapAssetsDialog_typeIcons = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_editor_data_MapAssetsDialog;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field searchString
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_editor_data_MapAssetsDialog[] {
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
	(void *) M_mindustry_editor_data_MapAssetsDialog_lambda$new$1,
	(void *) M_mindustry_editor_data_MapAssetsDialog_lambda$new$0,
	(void *) M_mindustry_editor_data_MapAssetsDialog_changeType_mindustry_mod_data_DataAssetType,
	(void *) M_mindustry_editor_data_MapAssetsDialog_rebuild,
	(void *) M_mindustry_editor_data_MapAssetsDialog_showEditMenu,
	(void *) M_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$0_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$1_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$11_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$12,
	(void *) M_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$2_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$3_mindustry_ui_dialogs_BaseDialog_arc_files_Fi,
	(void *) M_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$4_arc_files_Fi,
	(void *) M_mindustry_editor_data_MapAssetsDialog_lambda$new$9_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_data_MapAssetsDialog_lambda$new$7_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_data_MapAssetsDialog_lambda$new$8_java_lang_String,
	(void *) M_mindustry_editor_data_MapAssetsDialog_lambda$new$4_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_data_MapAssetsDialog_lambda$new$5_R_java_lang_CharSequence,
	(void *) M_mindustry_editor_data_MapAssetsDialog_lambda$new$3_mindustry_mod_data_DataAssetType_arc_scene_ui_ImageButton_R_boolean,
	(void *) M_mindustry_editor_data_MapAssetsDialog_lambda$new$2_mindustry_mod_data_DataAssetType,
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
	{ "changeType", "(Lmindustry/mod/data/DataAssetType;)V" },
	{ "rebuild", "()V" },
	{ "showEditMenu", "()V" },
	{ "lambda$showEditMenu$0", "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showEditMenu$1", "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showEditMenu$11", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$showEditMenu$12", "()V" },
	{ "lambda$showEditMenu$2", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$showEditMenu$3", "(Lmindustry/ui/dialogs/BaseDialog;Larc/files/Fi;)V" },
	{ "lambda$showEditMenu$4", "(Larc/files/Fi;)V" },
	{ "lambda$new$9", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$7", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$8", "(Ljava/lang/String;)V" },
	{ "lambda$new$4", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$5", "()Ljava/lang/CharSequence;" },
	{ "lambda$new$3", "(Lmindustry/mod/data/DataAssetType;Larc/scene/ui/ImageButton;)Z" },
	{ "lambda$new$2", "(Lmindustry/mod/data/DataAssetType;)V" },
};

static FieldMetadata fields[] {
	{ "typeIcons", getArrayClass(&class_arc_scene_style_TextureRegionDrawable, 1), (intptr_t) &SF_mindustry_editor_data_MapAssetsDialog_typeIcons, "[Larc/scene/style/TextureRegionDrawable;", 26 },
	{ "views", getArrayClass(&class_mindustry_editor_data_AssetView, 1), offsetof(mindustry_editor_data_MapAssetsDialog, F_views), "[Lmindustry/editor/data/AssetView;", 2 },
	{ "searchField", &class_arc_scene_ui_TextField, offsetof(mindustry_editor_data_MapAssetsDialog, F_searchField), "Larc/scene/ui/TextField;", 0 },
	{ "searchString", &class_java_lang_String, offsetof(mindustry_editor_data_MapAssetsDialog, F_searchString), "Ljava/lang/String;", 0 },
	{ "list", &class_arc_scene_ui_layout_Table, offsetof(mindustry_editor_data_MapAssetsDialog, F_list), "Larc/scene/ui/layout/Table;", 2 },
	{ "currentType", &class_mindustry_mod_data_DataAssetType, offsetof(mindustry_editor_data_MapAssetsDialog, F_currentType), "Lmindustry/mod/data/DataAssetType;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_data_MapAssetsDialog, 0, "()V", 1 },
	{ "changeType", (intptr_t) M_mindustry_editor_data_MapAssetsDialog_changeType_mindustry_mod_data_DataAssetType, VTABLE_mindustry_editor_data_MapAssetsDialog_changeType_mindustry_mod_data_DataAssetType, "(Lmindustry/mod/data/DataAssetType;)V", 0 },
	{ "rebuild", (intptr_t) M_mindustry_editor_data_MapAssetsDialog_rebuild, VTABLE_mindustry_editor_data_MapAssetsDialog_rebuild, "()V", 0 },
	{ "showEditMenu", (intptr_t) M_mindustry_editor_data_MapAssetsDialog_showEditMenu, VTABLE_mindustry_editor_data_MapAssetsDialog_showEditMenu, "()V", 0 },
	{ "lambda$showEditMenu$0", (intptr_t) M_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$0_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$0_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showEditMenu$1", (intptr_t) M_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$1_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$1_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showEditMenu$11", (intptr_t) M_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$11_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$11_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$showEditMenu$12", (intptr_t) M_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$12, VTABLE_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$12, "()V", 4098 },
	{ "lambda$showEditMenu$9", (intptr_t) SM_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$9_mindustry_ui_dialogs_BaseDialog, 0, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4106 },
	{ "lambda$showEditMenu$10", (intptr_t) SM_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$10_mindustry_ui_dialogs_BaseDialog_arc_files_Fi, 0, "(Lmindustry/ui/dialogs/BaseDialog;Larc/files/Fi;)V", 4106 },
	{ "lambda$showEditMenu$2", (intptr_t) M_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$2_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$2_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$showEditMenu$3", (intptr_t) M_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$3_mindustry_ui_dialogs_BaseDialog_arc_files_Fi, VTABLE_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$3_mindustry_ui_dialogs_BaseDialog_arc_files_Fi, "(Lmindustry/ui/dialogs/BaseDialog;Larc/files/Fi;)V", 4098 },
	{ "lambda$showEditMenu$4", (intptr_t) M_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$4_arc_files_Fi, VTABLE_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$4_arc_files_Fi, "(Larc/files/Fi;)V", 4098 },
	{ "lambda$showEditMenu$7", (intptr_t) SM_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$7_arc_struct_Seq_arc_scene_ui_layout_Table, 0, "(Larc/struct/Seq;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$showEditMenu$8", (intptr_t) SM_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$8_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 4106 },
	{ "lambda$showEditMenu$6", (intptr_t) SM_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$6_mindustry_mod_data_DataAssetType_arc_files_Fi_R_boolean, 0, "(Lmindustry/mod/data/DataAssetType;Larc/files/Fi;)Z", 4106 },
	{ "lambda$showEditMenu$5", (intptr_t) SM_mindustry_editor_data_MapAssetsDialog_lambda$showEditMenu$5_mindustry_mod_data_DataAssetType_arc_files_Fi_R_boolean, 0, "(Lmindustry/mod/data/DataAssetType;Larc/files/Fi;)Z", 4106 },
	{ "lambda$new$9", (intptr_t) M_mindustry_editor_data_MapAssetsDialog_lambda$new$9_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_data_MapAssetsDialog_lambda$new$9_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$7", (intptr_t) M_mindustry_editor_data_MapAssetsDialog_lambda$new$7_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_data_MapAssetsDialog_lambda$new$7_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$8", (intptr_t) M_mindustry_editor_data_MapAssetsDialog_lambda$new$8_java_lang_String, VTABLE_mindustry_editor_data_MapAssetsDialog_lambda$new$8_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$new$6", (intptr_t) SM_mindustry_editor_data_MapAssetsDialog_lambda$new$6, 0, "()V", 4106 },
	{ "lambda$new$4", (intptr_t) M_mindustry_editor_data_MapAssetsDialog_lambda$new$4_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_data_MapAssetsDialog_lambda$new$4_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$5", (intptr_t) M_mindustry_editor_data_MapAssetsDialog_lambda$new$5_R_java_lang_CharSequence, VTABLE_mindustry_editor_data_MapAssetsDialog_lambda$new$5_R_java_lang_CharSequence, "()Ljava/lang/CharSequence;", 4098 },
	{ "lambda$new$3", (intptr_t) M_mindustry_editor_data_MapAssetsDialog_lambda$new$3_mindustry_mod_data_DataAssetType_arc_scene_ui_ImageButton_R_boolean, VTABLE_mindustry_editor_data_MapAssetsDialog_lambda$new$3_mindustry_mod_data_DataAssetType_arc_scene_ui_ImageButton_R_boolean, "(Lmindustry/mod/data/DataAssetType;Larc/scene/ui/ImageButton;)Z", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_editor_data_MapAssetsDialog_lambda$new$2_mindustry_mod_data_DataAssetType, VTABLE_mindustry_editor_data_MapAssetsDialog_lambda$new$2_mindustry_mod_data_DataAssetType, "(Lmindustry/mod/data/DataAssetType;)V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_editor_data_MapAssetsDialog_lambda$new$1, VTABLE_mindustry_editor_data_MapAssetsDialog_lambda$new$1, "()V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_editor_data_MapAssetsDialog_lambda$new$0, VTABLE_mindustry_editor_data_MapAssetsDialog_lambda$new$0, "()V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_editor_data_MapAssetsDialog, 0, "()V", 8 },
};

Class class_mindustry_editor_data_MapAssetsDialog{
		.nativeName = (intptr_t) "mindustry/editor/data/MapAssetsDialog",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_BaseDialog,
		.size = sizeof(mindustry_editor_data_MapAssetsDialog),
		.classVtable = (intptr_t) vtable_mindustry_editor_data_MapAssetsDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_data_MapAssetsDialog,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_editor_data_MapAssetsDialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 28,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 314,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_data_MapAssetsDialog = registerClass(&class_mindustry_editor_data_MapAssetsDialog);

}
