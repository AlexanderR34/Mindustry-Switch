#include "mindustry/editor/data/MapImagesView.h"
#include "java/lang/Integer.h"
#include "mindustry/editor/data/MapImagesView_invoke_arc_func_Boolf_4.h"
#include "mindustry/editor/data/MapImagesView_invoke_arc_func_Boolf_6.h"
#include "mindustry/editor/data/MapImagesView_invoke_arc_func_Boolf_5.h"
#include "mindustry/editor/data/MapImagesView_invoke_java_lang_Runnable_20.h"
#include "mindustry/editor/data/MapImagesView_invoke_java_lang_Runnable_21.h"
#include "java/util/concurrent/Future.h"
#include "arc/graphics/Color.h"
#include "mindustry/editor/data/MapImagesView_invoke_java_lang_Runnable_24.h"
#include "mindustry/editor/data/MapImagesView_invoke_java_lang_Runnable_25.h"
#include "mindustry/editor/data/MapImagesView_invoke_java_lang_Runnable_22.h"
#include "java/lang/Runnable.h"
#include "mindustry/editor/data/MapImagesView_invoke_java_lang_Runnable_23.h"
#include "arc/graphics/Pixmap.h"
#include "arc/struct/Seq.h"
#include "arc/util/OS.h"
#include "mindustry/mod/data/DataAsset.h"
#include "arc/func/Boolf.h"
#include "mindustry/editor/data/MapImagesView_invoke_java_lang_Runnable_17.h"
#include "mindustry/editor/data/MapImagesView_invoke_java_lang_Runnable_18.h"
#include "arc/Core.h"
#include "mindustry/editor/data/MapImagesView_invoke_java_lang_Runnable_15.h"
#include "java/util/Iterator.h"
#include "mindustry/editor/data/MapImagesView_invoke_java_lang_Runnable_16.h"
#include "java/util/zip/ZipEntry.h"
#include "arc/files/ZipFi.h"
#include "mindustry/editor/data/MapImagesView_invoke_java_lang_Runnable_19.h"
#include "mindustry/mod/DataAssetCache.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "mindustry/editor/data/MapImagesView_invoke_java_lang_Runnable_13.h"
#include "java/util/concurrent/Callable.h"
#include "mindustry/editor/data/MapImagesView_invoke_java_lang_Runnable_14.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/editor/data/MapImagesView_invoke_arc_func_Boolf_7.h"
#include "arc/struct/ObjectMap.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "java/lang/Boolean.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "java/lang/Iterable.h"
#include "arc/func/Cons.h"
#include "mindustry/editor/data/MapImagesView_invoke_mindustry_core_Platform_FileWriter_3.h"
#include "mindustry/editor/data/MapImagesView_invoke_mindustry_core_Platform_FileWriter_2.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/scene/ui/layout/Scl.h"
#include "mindustry/ui/FileChooser_FileChooserParams.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/ui/Styles.h"
#include "java/io/OutputStream.h"
#include "arc/util/Threads.h"
#include "arc/scene/event/EventListener.h"
#include "mindustry/Vars.h"
#include "mindustry/ui/BorderImage.h"
#include "java/util/concurrent/CopyOnWriteArrayList.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/editor/data/MapImagesView.h"
#include "mindustry/ui/FileChooser.h"
#include "mindustry/editor/data/MapImagesView_invoke_java_util_concurrent_Callable_1.h"
#include "java/lang/Throwable.h"
#include "java/lang/Exception.h"
#include "arc/func/Func.h"
#include "java/util/concurrent/ExecutorService.h"
#include "mindustry/editor/data/MapAssetsDialog.h"
#include "arc/graphics/Pixmaps.h"
#include "arc/scene/event/HandCursorListener.h"
#include "mindustry/editor/data/MapImagesView_1Result.h"
#include "mindustry/core/Platform_FileWriter.h"
#include "arc/files/Fi.h"
#include "mindustry/editor/data/MapImagesView_invoke_arc_func_Cons_20.h"
#include "mindustry/editor/data/MapImagesView_invoke_arc_func_Cons_21.h"
#include "mindustry/editor/data/MapImagesView_invoke_arc_func_Func_1.h"
#include "mindustry/editor/data/MapImagesView_invoke_arc_func_Cons_22.h"
#include "mindustry/editor/data/MapImagesView_invoke_arc_func_Cons_23.h"
#include "java/lang/String.h"
#include "mindustry/editor/data/MapImagesView_invoke_arc_func_Cons_17.h"
#include "mindustry/editor/data/MapImagesView_invoke_arc_func_Cons_18.h"
#include "mindustry/editor/data/MapImagesView_invoke_arc_func_Cons_19.h"
#include "mindustry/mod/DataManager.h"
#include "arc/scene/style/Drawable.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/util/Scaling.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/mod/data/ImageAsset.h"
#include "mindustry/editor/data/MapImagesView_invoke_arc_func_Cons_13.h"
#include "mindustry/editor/data/MapImagesView_invoke_arc_func_Cons_14.h"
#include "mindustry/editor/data/MapImagesView_invoke_arc_func_Cons_15.h"
#include "mindustry/editor/data/MapImagesView_invoke_arc_func_Cons_16.h"
#include "arc/graphics/PixmapIO.h"
#include "java/util/zip/ZipOutputStream.h"
#include "mindustry/editor/data/AssetView.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "mindustry/editor/data/MapImagesView_invoke_arc_func_Cons_12.h"
#include "arc/util/Strings.h"
#include "arc/scene/Element.h"
#include "arc/struct/SnapshotSeq.h"
#include "java/util/Objects.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_editor_data_MapImagesView(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_data_MapImagesView *) object;
}

void clinit_mindustry_editor_data_MapImagesView(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_editor_data_MapImagesView(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapImagesView(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapImagesView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:buildButtons", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(32);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@add"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_add;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_13);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(190.0f);
	jfloat temp1 = jfloat(64.0f);
	LINE_NUMBER(70);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(72);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@edit"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_menu;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_14(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_14 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_14);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapImagesView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:build", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(211);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[2].o));
	LINE_NUMBER(212);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(214);
	frame[3].f = (jfloat(200.0f));
	LINE_NUMBER(215);
	jfloat temp0 = jfloat(1);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp2 = jfloat(temp1);
	jfloat temp3 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(20.0f)));
	jfloat temp4 = (temp2 - temp3) * (jfloat(0.9f));
	jfloat temp5 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, ((frame[3].f) + (jfloat(14.0f))));
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (temp4 / temp5));
	frame[4].i = (jint(temp6));
	LINE_NUMBER(216);
	frame[5].i = (jint(0));
	LINE_NUMBER(217);
	sp[0].o = (jobject)((func_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_mod_data_ImageAsset, sp[0].o));
	LINE_NUMBER(219);
	jint temp0 = (jint)((func_mindustry_mod_data_ImageAsset_isGenerated_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_mod_data_ImageAsset_isGenerated_R_boolean])(ctx, (frame[7].o));
	if (temp0 == 0) goto label_9;
	}
	goto label_6;
label_9:;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK((frame[1].o)))->F_searchString;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[7].o)))->F_path;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK((frame[1].o)))->F_searchString;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_10;
	}
	goto label_6;
label_10:;
	{
	LINE_NUMBER(222);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[7].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"dp-\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"nomap"_j))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(223);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[7].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"dp-\u0001"_j.string, 1, sp[1].o);
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[9].i = temp0;
	LINE_NUMBER(224);
	sp[0].o = (jobject)((func_mindustry_mod_data_ImageAsset_getCacheFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_mod_data_ImageAsset_getCacheFile_R_arc_files_Fi])(ctx, (frame[7].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(225);
	if ((frame[9].i) == 0) goto label_14;
	}
	{
	jint temp0 = (jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[8].o)))->F_width;
	sp[0].i = temp0;
	sp += 1;
	goto label_15;
	}
label_14:;
	INST_ICONST(1);
label_15:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	if ((frame[9].i) == 0) goto label_17;
	}
	{
	jint temp0 = (jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[8].o)))->F_height;
	sp[0].i = temp0;
	sp += 1;
	goto label_18;
	}
label_17:;
	INST_ICONST(1);
label_18:;
	{
	sp -= 1;
	frame[12].i = sp[0].i;
	LINE_NUMBER(226);
	if ((frame[10].o) == nullptr) goto label_20;
	}
	{
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, (frame[10].o));
	if (temp0 == 0) goto label_20;
	}
	{
	jlong temp0 = (jlong)((func_arc_files_Fi_length_R_long) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_files_Fi_length_R_long])(ctx, (frame[10].o));
	jint temp1 = jint(temp0);
	sp[0].i = temp1;
	sp += 1;
	goto label_21;
	}
label_20:;
	INST_ICONST(0);
label_21:;
	{
	sp -= 1;
	frame[13].i = sp[0].i;
	LINE_NUMBER(228);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_15(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_15 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_15);
		proxy->F_field5 = (frame[13].i);
		proxy->F_field4 = (frame[12].i);
		proxy->F_field3 = (frame[11].i);
		proxy->F_field2 = (frame[9].i);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[0].o = (jobject) proxy;
	}
	frame[14].o = sp[0].o;
	LINE_NUMBER(249);
	sp[0].o = frame[2].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayPanel;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_12);
		proxy->F_field9 = (jref) (frame[1].o);
		proxy->F_field8 = (frame[13].i);
		proxy->F_field7 = (frame[12].i);
		proxy->F_field6 = (frame[11].i);
		proxy->F_field5 = (jref) (frame[7].o);
		proxy->F_field4 = (frame[9].i);
		proxy->F_field3 = (jref) (frame[14].o);
		proxy->F_field2 = (frame[3].f);
		proxy->F_field1 = (jref) (frame[8].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(4.0f);
	LINE_NUMBER(306);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[3].f));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_uniformY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_uniformY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(307);
	INST_IINC(5, 1);
	if (((frame[5].i) % (frame[4].i)) != 0) goto label_26;
	}
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	}
label_26:;
	LINE_NUMBER(310);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_28;
	}
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_center_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_center_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@none.found"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	}
label_28:;
	LINE_NUMBER(315);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:getImages", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(318);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getImages_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getImages_R_arc_struct_Seq])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapImagesView_lambda$build$2_arc_graphics_g2d_TextureRegion_float_java_lang_Runnable_boolean_mindustry_mod_data_ImageAsset_int_int_int_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2, jbool param3, jobject param4, jint param5, jint param6, jint param7, jobject param8, jobject param9) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$build$2", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].o = param8;
	frame[10].o = param9;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[10].o), (jfloat(5.0f)));
	LINE_NUMBER(251);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[10].o));
	LINE_NUMBER(252);
	sp[0].o = frame[10].o;
	clinit_mindustry_ui_BorderImage(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_BorderImage);
	init_mindustry_ui_BorderImage_arc_graphics_g2d_TextureRegion_float(ctx, sp[1].o, (frame[1].o), (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_13);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((frame[2].f) - (jfloat(10.0f))));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_14);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(255);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(256);
	sp[0].o = frame[10].o;
	sp += 1;
	if ((frame[4].i) == 0) goto label_5;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_6;
label_5:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[red]\u26a0[] "_j));
label_6:;
	{
	sp -= 2;
	sp[2].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[5].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[5].o)))->F_name;
	sp[2].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[5].o)))->F_path;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"dp-\u0001\n[lightgray]\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_ellipsis_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_ellipsis_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((frame[2].f) - (jfloat(10.0f))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(257);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001x\u0001"_j.string, 2, boxInteger(ctx, (frame[6].i)), boxInteger(ctx, (frame[7].i)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)SM_arc_util_Strings_formatByteCount_long_R_java_lang_String(ctx, (jlong((frame[8].i))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(258);
	sp[0].o = frame[10].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_15);
		proxy->F_field5 = (jref) (frame[3].o);
		proxy->F_field4 = (jref) (frame[9].o);
		proxy->F_field3 = (jref) (frame[1].o);
		proxy->F_field2 = (jref) (frame[5].o);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(304);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapImagesView_lambda$build$5_float_mindustry_mod_data_ImageAsset_arc_graphics_g2d_TextureRegion_mindustry_editor_data_MapAssetsDialog_java_lang_Runnable_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jfloat param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$build$5", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[6].o));
	LINE_NUMBER(260);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((frame[1].f) - (jfloat(10.0f))) / (jfloat(4.0f))));
	LINE_NUMBER(261);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	frame[7].o = sp[0].o;
	LINE_NUMBER(262);
	sp[0].o = frame[6].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_pencil;
	sp[2].o = frame[7].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_16(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_16 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_16);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(292);
	sp[0].o = frame[6].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_info;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, (frame[7].o), (frame[5].o));
	LINE_NUMBER(293);
	sp[0].o = frame[6].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_export;
	sp[2].o = frame[7].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_17(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_17 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_17);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(296);
	sp[0].o = frame[6].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_trash;
	sp[2].o = frame[7].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_18(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_18 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_18);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(2);
	LINE_NUMBER(303);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapImagesView_lambda$build$11_mindustry_mod_data_ImageAsset_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$build$11", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(297);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@asset.image.delete.confirm"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_19(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_19 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_19);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(303);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapImagesView_lambda$build$12_mindustry_mod_data_ImageAsset_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$build$12", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(298);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"dp-\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(299);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getDrawables_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getDrawables_R_arc_struct_ObjectMap])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"dp-\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(300);
	sp[0].o = (jobject)((func_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(301);
	((func_mindustry_editor_data_MapAssetsDialog_rebuild) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_rebuild])(ctx, (frame[2].o));
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapImagesView_lambda$build$9_mindustry_mod_data_ImageAsset(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$build$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapImagesView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"png"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_mindustry_core_Platform$FileWriter_2(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_mindustry_core_Platform$FileWriter_2 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_mindustry_core_Platform$FileWriter_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_ui_FileChooser_export_java_lang_String_java_lang_String_mindustry_core_Platform$FileWriter(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapImagesView_lambda$build$10_mindustry_mod_data_ImageAsset_arc_files_Fi(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$build$10", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapImagesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((func_mindustry_mod_data_ImageAsset_getCacheFileNoNull_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_ImageAsset_getCacheFileNoNull_R_arc_files_Fi])(ctx, (frame[0].o));
	((func_arc_files_Fi_copyTo_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_copyTo_arc_files_Fi])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapImagesView_lambda$build$6_mindustry_mod_data_ImageAsset_arc_graphics_g2d_TextureRegion_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$build$6", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(263);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@save.rename"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@patch.path"_j));
	jint temp0 = 1000;
	sp[3].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[1].o)))->F_path;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_16);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o);
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapImagesView_lambda$build$7_mindustry_mod_data_ImageAsset_arc_graphics_g2d_TextureRegion_mindustry_editor_data_MapAssetsDialog_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$build$7", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(264);
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8".png"_j))));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.png"_j.string, 1, (frame[4].o));
	frame[4].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(266);
	jint temp0 = (jint)SM_mindustry_mod_data_DataAsset_validPath_java_lang_String_R_boolean(ctx, (frame[4].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(267);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@asset.path.invalid"_j))));
	LINE_NUMBER(268);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(271);
	clinit_arc_files_Fi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_files_Fi);
	init_arc_files_Fi_java_lang_String(ctx, sp[0].o, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(272);
	sp[0].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(273);
	sp[0].o = (jobject)((func_arc_files_Fi_pathWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_files_Fi_pathWithoutExtension_R_java_lang_String])(ctx, (frame[5].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(274);
	sp[0].o = (jobject)((func_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq])(ctx, (frame[0].o));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_arc_func_Boolf_4);
		proxy->F_field2 = (jref) (frame[6].o);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[8].o = (checkCast(ctx, &class_mindustry_mod_data_ImageAsset, sp[0].o));
	LINE_NUMBER(275);
	if ((frame[8].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(276);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"asset.image.exists"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[8].o)))->F_name;
	sp[5].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[8].o)))->F_path;
	sp[4].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 (\u0001)"_j.string, 2, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, sp[1].o);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(279);
	if ((isInstance(ctx, (frame[2].o), &class_arc_graphics_g2d_TextureAtlas$AtlasRegion)) == 0) goto label_12;
	}
	{
	frame[9].o = (checkCast(ctx, &class_arc_graphics_g2d_TextureAtlas$AtlasRegion, (frame[2].o)));
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[9].o)))->F_name;
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"dp-\u0001"_j.string, 1, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(280);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(281);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"dp-\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(282);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"dp-\u0001"_j.string, 1, (frame[6].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[9].o));
	LINE_NUMBER(283);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"dp-\u0001"_j.string, 1, (frame[6].o));
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	}
label_12:;
	{
	LINE_NUMBER(286);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_files_Fi_path_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_files_Fi_path_R_java_lang_String])(ctx, (frame[5].o));
	((func_mindustry_mod_data_ImageAsset_setPath_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_data_ImageAsset_setPath_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(287);
	((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[1].o)))->F_name = (jref) (frame[6].o);
	LINE_NUMBER(288);
	((func_mindustry_editor_data_MapAssetsDialog_rebuild) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_rebuild])(ctx, (frame[3].o));
	}
label_11:;
	LINE_NUMBER(290);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_data_MapImagesView_lambda$build$8_mindustry_mod_data_ImageAsset_java_lang_String_java_lang_String_mindustry_mod_data_ImageAsset_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$build$8", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapImagesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(274);
	if ((frame[3].o) == (frame[0].o)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_mod_data_ImageAsset_isGenerated_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_mod_data_ImageAsset_isGenerated_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[3].o)))->F_path;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[3].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_1;
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

void SM_mindustry_editor_data_MapImagesView_lambda$build$4_java_lang_Runnable_mindustry_ui_BorderImage(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$build$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapImagesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(253);
	sp[0].o = frame[1].o;
	clinit_arc_scene_event_HandCursorListener(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_event_HandCursorListener);
	init_arc_scene_event_HandCursorListener(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_ui_BorderImage_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_BorderImage_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(254);
	sp[0].o = (jobject)((func_mindustry_ui_BorderImage_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_BorderImage_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapImagesView_lambda$build$3_mindustry_ui_BorderImage(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$build$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapImagesView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(252);
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_drawAlpha = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapImagesView_lambda$build$0_arc_graphics_g2d_TextureRegion_mindustry_mod_data_ImageAsset_boolean_int_int_int(jcontext ctx, jobject param0, jobject param1, jbool param2, jint param3, jint param4, jint param5) {
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$build$0", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapImagesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(229);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@asset.image.info"_j))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(230);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	jfloat temp3 = jfloat(temp2);
	jfloat temp4 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	jfloat temp5 = (temp3 / temp4) * (jfloat(0.8f));
	jfloat temp6 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(124.0f)));
	frame[7].f = (temp5 - temp6);
	LINE_NUMBER(231);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[6].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(232);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[6].o)))->F_cont;
	clinit_mindustry_ui_BorderImage(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_BorderImage);
	init_mindustry_ui_BorderImage_arc_graphics_g2d_TextureRegion_float(ctx, sp[1].o, (frame[0].o), (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_17);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[7].f));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(233);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[6].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(234);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[1].o)))->F_path;
	jint temp7 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"blocks/environment/"_j))));
	frame[8].i = temp7;
	LINE_NUMBER(235);
	if ((frame[2].i) != 0) goto label_7;
	}
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[6].o)))->F_cont;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"asset.image.packfailed"_j))));
	sp += 2;
	if ((frame[8].i) == 0) goto label_9;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"asset.image.packfailed.env"_j))));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\n\u0001"_j.string, 1, sp[0].o);
	sp += 1;
	goto label_10;
	}
label_9:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_10:;
	{
	sp -= 3;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_7:;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[6].o)))->F_cont;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"asset.image.name"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[1].o)))->F_name;
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(239);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[6].o)))->F_cont;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"asset.image.region.name"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp1 = jint(0);
	sp[4].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[1].o)))->F_name;
	sp[4].o = (jobject)concatStringsRecipe(ctx, u8"dp-\u0001"_j.string, 1, sp[4].o);
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(240);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[6].o)))->F_cont;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"asset.image.path"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp2 = jint(0);
	sp[4].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[1].o)))->F_name;
	ARRAY_ACCESS(jobject, sp[3].o, temp2) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(241);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[6].o)))->F_cont;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"asset.image.env"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp3 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (frame[8].i));
	ARRAY_ACCESS(jobject, sp[3].o, temp3) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(242);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[6].o)))->F_cont;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"asset.image.size"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp4 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[3].i));
	ARRAY_ACCESS(jobject, sp[3].o, temp4) = sp[4].o;
	jint temp5 = jint(1);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[4].i));
	ARRAY_ACCESS(jobject, sp[3].o, temp5) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(243);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[6].o)))->F_cont;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"asset.image.filesize"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp6 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_formatByteCount_long_R_java_lang_String(ctx, (jlong((frame[5].i))));
	ARRAY_ACCESS(jobject, sp[3].o, temp6) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(245);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[6].o));
	LINE_NUMBER(246);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[6].o));
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapImagesView_lambda$build$1_mindustry_ui_BorderImage(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$build$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapImagesView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(232);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(1);
	((mindustry_ui_BorderImage *) NULL_CHECK(sp[1].o))->F_forceNearest = temp0;
	((mindustry_ui_BorderImage *) NULL_CHECK(sp[0].o))->F_drawAlpha = temp0;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapImagesView_lambda$buildButtons$3_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$buildButtons$3", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(73);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@edit.menu"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(74);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_18(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_18 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_18);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(204);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[2].o));
	LINE_NUMBER(205);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[2].o));
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapImagesView_lambda$buildButtons$4_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$buildButtons$4", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o), (jfloat(10.0f)));
	LINE_NUMBER(76);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_19(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_19 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_19);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapImagesView_lambda$buildButtons$5_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$buildButtons$5", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(77);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_flatt;
	frame[4].o = sp[0].o;
	LINE_NUMBER(78);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(280.0f)), (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(79);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@asset.image.importzip"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_download;
	sp[3].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_20(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_20 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_20);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(179);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(180);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@asset.image.exportzip"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_upload;
	sp[3].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_21(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_21 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_21);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp1 = jfloat(12.0f);
	LINE_NUMBER(192);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(193);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@asset.clearall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_trash;
	sp[3].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_22(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_22 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_22);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp2 = jfloat(12.0f);
	LINE_NUMBER(200);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapImagesView_lambda$buildButtons$17_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$buildButtons$17", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(194);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(195);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@asset.image.clearall.confirm"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_23(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_23 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_23);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapImagesView_lambda$buildButtons$18_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$buildButtons$18", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((func_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(197);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[1].o = (jobject)((func_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq])(ctx, (frame[0].o));
	((func_mindustry_mod_DataManager_reloadImages_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_reloadImages_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(198);
	((func_mindustry_editor_data_MapAssetsDialog_rebuild) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_rebuild])(ctx, (frame[1].o));
	LINE_NUMBER(199);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapImagesView_lambda$buildButtons$15_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$buildButtons$15", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(180);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"images"_j));
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"zip"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_mindustry_core_Platform$FileWriter_3(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_mindustry_core_Platform$FileWriter_3 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_mindustry_core_Platform$FileWriter_3);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_ui_FileChooser_export_java_lang_String_java_lang_String_mindustry_core_Platform$FileWriter(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapImagesView_lambda$buildButtons$16_mindustry_ui_dialogs_BaseDialog_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$buildButtons$16", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(181);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(182);
	sp[0].o = (jobject)((func_arc_files_Fi_write_boolean_int_R_java_io_OutputStream) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_write_boolean_int_R_java_io_OutputStream])(ctx, (frame[2].o), (jint(0)), (4096));
	frame[3].o = sp[0].o;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	clinit_java_util_zip_ZipOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipOutputStream);
	init_java_util_zip_ZipOutputStream_java_io_OutputStream(ctx, sp[0].o, (frame[3].o));
	frame[4].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((func_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_18:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_mod_data_ImageAsset, sp[0].o));
	LINE_NUMBER(184);
	sp[0].o = (jobject)((func_mindustry_mod_data_ImageAsset_getCacheFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_mod_data_ImageAsset_getCacheFile_R_arc_files_Fi])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(185);
	if ((frame[7].o) != nullptr) goto label_21;
	}
	goto label_18;
label_21:;
	{
	LINE_NUMBER(187);
	sp[0].o = frame[4].o;
	clinit_java_util_zip_ZipEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_zip_ZipEntry);
	sp[2].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[6].o)))->F_path;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.png"_j.string, 1, sp[2].o);
	init_java_util_zip_ZipEntry_java_lang_String(ctx, sp[1].o, sp[2].o);
	((func_java_util_zip_ZipOutputStream_putNextEntry_java_util_zip_ZipEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_ZipOutputStream_putNextEntry_java_util_zip_ZipEntry])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(188);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_arc_files_Fi_readBytes_R_Array1_byte) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_files_Fi_readBytes_R_Array1_byte])(ctx, (frame[7].o));
	((func_java_util_zip_ZipOutputStream_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_ZipOutputStream_write_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(189);
	((func_java_util_zip_ZipOutputStream_closeEntry) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_zip_ZipOutputStream_closeEntry])(ctx, (frame[4].o));
	LINE_NUMBER(190);
	goto label_18;
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(191);
	((func_java_util_zip_ZipOutputStream_close) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_zip_ZipOutputStream_close])(ctx, (frame[4].o));
	goto label_9;
	}
label_2:;
	LINE_NUMBER(182);
	INST_ASTORE(5);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	((func_java_util_zip_ZipOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_ZipOutputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_25;
label_6:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[5].o), (frame[6].o));
	}
label_25:;
	INST_ALOAD(5);
	INST_ATHROW();
	label_9:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(191);
	if ((frame[3].o) == nullptr) goto label_27;
	}
	{
	((func_java_io_OutputStream_close) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_OutputStream_close])(ctx, (frame[3].o));
	goto label_27;
	}
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(182);
	frame[4].o = sp[0].o;
	if ((frame[3].o) == nullptr) goto label_29;
	}
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	((func_java_io_OutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_29;
label_14:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[4].o), (frame[5].o));
	}
label_29:;
	INST_ALOAD(4);
	INST_ATHROW();
	label_27:;
	LINE_NUMBER(192);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapImagesView_lambda$buildButtons$6_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$buildButtons$6", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"zip"_j)));
	sp[0].o = (jobject)SM_mindustry_ui_FileChooser_open_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_20(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_20 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_20);
		proxy->F_field2 = (jref) (frame[2].o);
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

void M_mindustry_editor_data_MapImagesView_lambda$buildButtons$7_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$buildButtons$7", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(83);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isAndroid) == 0) goto label_1;
	}
	{
	LINE_NUMBER(84);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_tmpDirectory;
	sp[1].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(85);
	((func_arc_files_Fi_copyTo_arc_files_Fi) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_files_Fi_copyTo_arc_files_Fi])(ctx, (frame[3].o), (frame[4].o));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(87);
	frame[4].o = (frame[3].o);
	}
label_4:;
	{
	LINE_NUMBER(90);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(91);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_24(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_24 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_24);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_loadAnd_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_loadAnd_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapImagesView_lambda$buildButtons$8_arc_files_Fi_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$buildButtons$8", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(99);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(100);
	clinit_java_util_concurrent_CopyOnWriteArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CopyOnWriteArrayList);
	init_java_util_concurrent_CopyOnWriteArrayList(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(102);
	clinit_arc_files_ZipFi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_files_ZipFi);
	init_arc_files_ZipFi_arc_files_Fi(ctx, sp[0].o, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(103);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_21(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_21 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_21);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_files_Fi_walk_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_walk_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(131);
	SM_arc_util_Threads_awaitAll_arc_struct_Seq(ctx, (frame[3].o));
	LINE_NUMBER(132);
	jint temp0 = (jint)((func_arc_files_Fi_delete_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_files_Fi_delete_R_boolean])(ctx, (frame[5].o));
	LINE_NUMBER(133);
	frame[6].i = (jint(0));
	LINE_NUMBER(135);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_clearGeneratedImages) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_clearGeneratedImages])(ctx, sp[0].o);
	LINE_NUMBER(137);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[3].o));
	frame[7].o = sp[0].o;
	}
label_12:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o));
	LINE_NUMBER(138);
	sp[0].o = (jobject)((func_java_util_concurrent_Future_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_get_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_mindustry_editor_data_MapImagesView$1Result, sp[0].o));
	LINE_NUMBER(139);
	if ((frame[9].o) == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(140);
	if (((jint)((mindustry_editor_data_MapImagesView$1Result *) NULL_CHECK((frame[9].o)))->F_width) > (2000)) goto label_18;
	}
	{
	if (((jint)((mindustry_editor_data_MapImagesView$1Result *) NULL_CHECK((frame[9].o)))->F_height) > (2000)) goto label_18;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_data_MapImagesView$1Result *) NULL_CHECK((frame[9].o)))->F_hash;
	if (sp[0].o != nullptr) goto label_19;
	}
label_18:;
	{
	LINE_NUMBER(141);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_editor_data_MapImagesView$1Result *) NULL_CHECK((frame[9].o)))->F_path;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"asset.image.toolarge"_j));
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(4)));
	jint temp0 = jint(0);
	sp[5].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_editor_data_MapImagesView$1Result *) NULL_CHECK((frame[9].o)))->F_width));
	ARRAY_ACCESS(jobject, sp[4].o, temp0) = sp[5].o;
	jint temp1 = jint(1);
	sp[5].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_editor_data_MapImagesView$1Result *) NULL_CHECK((frame[9].o)))->F_height));
	ARRAY_ACCESS(jobject, sp[4].o, temp1) = sp[5].o;
	jint temp2 = jint(2);
	sp[5].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (2000));
	ARRAY_ACCESS(jobject, sp[4].o, temp2) = sp[5].o;
	jint temp3 = jint(3);
	sp[5].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (2000));
	ARRAY_ACCESS(jobject, sp[4].o, temp3) = sp[5].o;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[accent]\u0001[white]: \u0001"_j.string, 2, sp[1].o, sp[2].o);
	jint temp4 = (jint)((func_java_util_concurrent_CopyOnWriteArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(142);
	goto label_12;
	}
label_19:;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((mindustry_editor_data_MapImagesView$1Result *) NULL_CHECK((frame[9].o)))->F_path;
	sp[0].o = (jobject)((func_arc_files_Fi_pathWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_pathWithoutExtension_R_java_lang_String])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	sp[0].o = (jobject)((mindustry_editor_data_MapImagesView$1Result *) NULL_CHECK((frame[9].o)))->F_path;
	sp[0].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(146);
	sp[0].o = (jobject)((func_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq])(ctx, (frame[0].o));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_arc_func_Boolf_5);
		proxy->F_field1 = (jref) (frame[11].o);
		proxy->F_field0 = (jref) (frame[10].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[12].o = (checkCast(ctx, &class_mindustry_mod_data_ImageAsset, sp[0].o));
	LINE_NUMBER(147);
	if ((frame[12].o) == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(148);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_editor_data_MapImagesView$1Result *) NULL_CHECK((frame[9].o)))->F_path;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"asset.image.exists"_j));
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[5].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[12].o)))->F_name;
	sp[6].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[12].o)))->F_path;
	sp[5].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 (\u0001)"_j.string, 2, sp[5].o, sp[6].o);
	ARRAY_ACCESS(jobject, sp[4].o, temp0) = sp[5].o;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	sp[2].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))), (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[accent]\u0001[white]: \u0001"_j.string, 2, sp[1].o, sp[2].o);
	jint temp1 = (jint)((func_java_util_concurrent_CopyOnWriteArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(149);
	goto label_12;
	}
label_24:;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((func_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq])(ctx, (frame[0].o));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_arc_func_Boolf_6);
		proxy->F_field0 = (jref) (frame[11].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(152);
	sp[0].o = (jobject)((func_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq])(ctx, (frame[0].o));
	clinit_mindustry_mod_data_ImageAsset(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_mod_data_ImageAsset);
	sp[2].o = frame[10].o;
	sp[3].o = (jobject)((mindustry_editor_data_MapImagesView$1Result *) NULL_CHECK((frame[9].o)))->F_hash;
	init_mindustry_mod_data_ImageAsset_java_lang_String_Array1_byte(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(153);
	INST_IINC(6, 1);
	}
label_16:;
	LINE_NUMBER(155);
	goto label_12;
label_13:;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((func_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(159);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[1].o = (jobject)((func_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq])(ctx, (frame[0].o));
	((func_mindustry_mod_DataManager_reloadImages_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_reloadImages_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(160);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_regenerateContentSprites_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_regenerateContentSprites_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(161);
	((func_mindustry_editor_data_MapAssetsDialog_rebuild) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_rebuild])(ctx, (frame[2].o));
	LINE_NUMBER(163);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@asset.image.imports"_j))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(164);
	if ((frame[6].i) <= 0) goto label_34;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[7].o)))->F_cont;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"asset.image.imported"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[6].i));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_34:;
	{
	LINE_NUMBER(165);
	jint temp0 = (jint)((func_java_util_concurrent_CopyOnWriteArrayList_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_isEmpty_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_35;
	}
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[7].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@asset.image.error"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(167);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[7].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_22(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_22 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_22);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	goto label_38;
	}
label_35:;
	{
	LINE_NUMBER(170);
	if ((frame[6].i) != 0) goto label_38;
	}
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[7].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@asset.image.none"_j))));
	}
label_38:;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[7].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@ok"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_ok;
	sp[3].o = frame[7].o;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_25(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_25 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_java_lang_Runnable_25);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(200.0f)), (jfloat(64.0f)));
	LINE_NUMBER(174);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[7].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(177);
	goto label_41;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(175);
	frame[3].o = sp[0].o;
	LINE_NUMBER(176);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_Throwable])(ctx, sp[0].o, (frame[3].o));
	}
label_41:;
	LINE_NUMBER(178);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapImagesView_lambda$buildButtons$13_java_util_concurrent_CopyOnWriteArrayList_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$buildButtons$13", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapImagesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(168);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_java_lang_Iterable_R_arc_struct_Seq(ctx, (frame[0].o));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"\n"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_arc_func_Func_1);
		sp[3].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_toString_java_lang_String_arc_func_Func_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toString_java_lang_String_arc_func_Func_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (8), (8));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_data_MapImagesView_lambda$buildButtons$14_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$buildButtons$14", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapImagesView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[gray]- []\u0001"_j.string, 1, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_data_MapImagesView_lambda$buildButtons$12_java_lang_String_mindustry_mod_data_ImageAsset_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$buildButtons$12", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapImagesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(151);
	jint temp0 = (jint)((func_mindustry_mod_data_ImageAsset_isGenerated_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_data_ImageAsset_isGenerated_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[1].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
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

jbool SM_mindustry_editor_data_MapImagesView_lambda$buildButtons$11_java_lang_String_java_lang_String_mindustry_mod_data_ImageAsset_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$buildButtons$11", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapImagesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(146);
	jint temp0 = (jint)((func_mindustry_mod_data_ImageAsset_isGenerated_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_mod_data_ImageAsset_isGenerated_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[2].o)))->F_path;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[2].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
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

void M_mindustry_editor_data_MapImagesView_lambda$buildButtons$9_arc_struct_Seq_java_util_concurrent_CopyOnWriteArrayList_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$buildButtons$9", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(104);
	jint temp0 = (jint)((func_arc_files_Fi_extEquals_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_files_Fi_extEquals_java_lang_String_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"png"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(105);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_mainExecutor;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_java_util_concurrent_Callable_1(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_java_util_concurrent_Callable_1 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_java_util_concurrent_Callable_1);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future, sp[1].o))(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(129);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_editor_data_MapImagesView_lambda$buildButtons$10_arc_files_Fi_java_util_concurrent_CopyOnWriteArrayList_R_mindustry_editor_data_MapImagesView$1Result(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$buildButtons$10", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(107);
	clinit_mindustry_editor_data_MapImagesView$1Result(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView$1Result);
	init_mindustry_editor_data_MapImagesView$1Result_mindustry_editor_data_MapImagesView(ctx, sp[0].o, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(108);
	((mindustry_editor_data_MapImagesView$1Result *) NULL_CHECK((frame[3].o)))->F_path = (jref) (frame[1].o);
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_arc_files_Fi_readBytes_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_readBytes_R_Array1_byte])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(110);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_Array1_byte(ctx, sp[0].o, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(111);
	((mindustry_editor_data_MapImagesView$1Result *) NULL_CHECK((frame[3].o)))->F_width = ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[5].o)))->F_width);
	LINE_NUMBER(112);
	((mindustry_editor_data_MapImagesView$1Result *) NULL_CHECK((frame[3].o)))->F_height = ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[5].o)))->F_height);
	LINE_NUMBER(114);
	if (((jint)((mindustry_editor_data_MapImagesView$1Result *) NULL_CHECK((frame[3].o)))->F_width) >= (2000)) goto label_10;
	}
	{
	if (((jint)((mindustry_editor_data_MapImagesView$1Result *) NULL_CHECK((frame[3].o)))->F_height) >= (2000)) goto label_10;
	}
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)SM_arc_graphics_Pixmaps_bleed_arc_graphics_Pixmap_R_arc_graphics_Pixmap(ctx, (frame[5].o));
	LINE_NUMBER(116);
	sp[0].o = (jobject)SM_arc_graphics_PixmapIO_writePngBytes_arc_graphics_Pixmap_R_Array1_byte(ctx, (frame[5].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(117);
	sp[0].o = frame[3].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_assetCache;
	sp[1].o = (jobject)((func_mindustry_mod_DataAssetCache_add_Array1_byte_R_Array1_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_DataAssetCache_add_Array1_byte_R_Array1_byte])(ctx, sp[1].o, (frame[4].o));
	((mindustry_editor_data_MapImagesView$1Result *) NULL_CHECK(sp[0].o))->F_hash = (jref) sp[1].o;
	}
label_10:;
	{
	LINE_NUMBER(120);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[5].o));
	LINE_NUMBER(122);
	sp[0].o = frame[3].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(123);
	frame[3].o = sp[0].o;
	LINE_NUMBER(124);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_arc_files_Fi_path_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_path_R_java_lang_String])(ctx, (frame[1].o));
	sp[2].o = (jobject)SM_arc_util_Strings_getSimpleMessage_java_lang_Throwable_R_java_lang_String(ctx, (frame[3].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[accent]\u0001[white]: \u0001"_j.string, 2, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_java_util_concurrent_CopyOnWriteArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapImagesView_lambda$buildButtons$0_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$buildButtons$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"png"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"jpeg"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"jpg"_j)));
	sp[0].o = (jobject)SM_mindustry_ui_FileChooser_open_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_23(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_23 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_arc_func_Cons_23);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_FileChooser$FileChooserParams_submitMulti_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_submitMulti_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapImagesView_lambda$buildButtons$1_mindustry_editor_data_MapAssetsDialog_Array1_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$buildButtons$1", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(35);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_clearGeneratedImages) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_clearGeneratedImages])(ctx, sp[0].o);
	LINE_NUMBER(37);
	frame[4].o = (frame[2].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_15:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_16;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(39);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_arc_files_Fi(ctx, sp[0].o, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(40);
	frame[9].i = ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[8].o)))->F_width);
	LINE_NUMBER(41);
	frame[10].i = ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[8].o)))->F_height);
	LINE_NUMBER(42);
	sp[0].o = (jobject)SM_arc_graphics_Pixmaps_bleed_arc_graphics_Pixmap_R_arc_graphics_Pixmap(ctx, (frame[8].o));
	LINE_NUMBER(43);
	sp[0].o = (jobject)SM_arc_graphics_PixmapIO_writePngBytes_arc_graphics_Pixmap_R_Array1_byte(ctx, (frame[8].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(44);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[8].o));
	LINE_NUMBER(46);
	if ((frame[9].i) > (2000)) goto label_23;
	}
	{
	if ((frame[10].i) <= (2000)) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
label_23:;
	{
	LINE_NUMBER(47);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"asset.image.toolarge"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(4)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[9].i));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	jint temp1 = jint(1);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[10].i));
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	jint temp2 = jint(2);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (2000));
	ARRAY_ACCESS(jobject, sp[3].o, temp2) = sp[4].o;
	jint temp3 = jint(3);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (2000));
	ARRAY_ACCESS(jobject, sp[3].o, temp3) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(48);
	goto label_24;
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, (frame[7].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(52);
	sp[0].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, (frame[7].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(53);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapImagesView_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_editor_data_MapImagesView_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_editor_data_MapImagesView_invoke_arc_func_Boolf_7);
		proxy->F_field1 = (jref) (frame[12].o);
		proxy->F_field0 = (jref) (frame[13].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[14].o = (checkCast(ctx, &class_mindustry_mod_data_ImageAsset, sp[0].o));
	LINE_NUMBER(54);
	if ((frame[14].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(55);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"asset.image.exists"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[14].o)))->F_name;
	sp[5].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[14].o)))->F_path;
	sp[4].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 (\u0001)"_j.string, 2, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(56);
	goto label_24;
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(59);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_assetCache;
	sp[0].o = (jobject)((func_mindustry_mod_DataAssetCache_add_Array1_byte_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataAssetCache_add_Array1_byte_R_Array1_byte])(ctx, sp[0].o, (frame[11].o));
	frame[15].o = sp[0].o;
	LINE_NUMBER(60);
	sp[0].o = frame[3].o;
	clinit_mindustry_mod_data_ImageAsset(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_mod_data_ImageAsset);
	init_mindustry_mod_data_ImageAsset_java_lang_String_Array1_byte(ctx, sp[1].o, (frame[13].o), (frame[15].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(63);
	goto label_24;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(61);
	frame[8].o = sp[0].o;
	LINE_NUMBER(62);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_Throwable])(ctx, sp[0].o, (frame[8].o));
	}
label_24:;
	{
	LINE_NUMBER(37);
	INST_IINC(6, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, (frame[3].o));
	LINE_NUMBER(67);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_regenerateContentSprites_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_regenerateContentSprites_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(68);
	((func_mindustry_editor_data_MapAssetsDialog_rebuild) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_rebuild])(ctx, (frame[1].o));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_data_MapImagesView_lambda$buildButtons$2_java_lang_String_java_lang_String_mindustry_mod_data_ImageAsset_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView:lambda$buildButtons$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapImagesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[2].o)))->F_path;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[2].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[1].o));
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

void *vtable_mindustry_editor_data_MapImagesView[] {
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
	(void *) M_mindustry_editor_data_MapImagesView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_data_MapImagesView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq,
	(void *) M_mindustry_editor_data_MapImagesView_lambda$build$2_arc_graphics_g2d_TextureRegion_float_java_lang_Runnable_boolean_mindustry_mod_data_ImageAsset_int_int_int_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_data_MapImagesView_lambda$build$5_float_mindustry_mod_data_ImageAsset_arc_graphics_g2d_TextureRegion_mindustry_editor_data_MapAssetsDialog_java_lang_Runnable_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_data_MapImagesView_lambda$build$11_mindustry_mod_data_ImageAsset_mindustry_editor_data_MapAssetsDialog,
	(void *) M_mindustry_editor_data_MapImagesView_lambda$build$12_mindustry_mod_data_ImageAsset_mindustry_editor_data_MapAssetsDialog,
	(void *) M_mindustry_editor_data_MapImagesView_lambda$build$6_mindustry_mod_data_ImageAsset_arc_graphics_g2d_TextureRegion_mindustry_editor_data_MapAssetsDialog,
	(void *) M_mindustry_editor_data_MapImagesView_lambda$build$7_mindustry_mod_data_ImageAsset_arc_graphics_g2d_TextureRegion_mindustry_editor_data_MapAssetsDialog_java_lang_String,
	(void *) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$3_mindustry_editor_data_MapAssetsDialog,
	(void *) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$4_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$5_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$17_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog,
	(void *) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$18_mindustry_editor_data_MapAssetsDialog,
	(void *) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$15_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$16_mindustry_ui_dialogs_BaseDialog_arc_files_Fi,
	(void *) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$6_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog,
	(void *) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$7_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_arc_files_Fi,
	(void *) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$8_arc_files_Fi_mindustry_editor_data_MapAssetsDialog,
	(void *) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$9_arc_struct_Seq_java_util_concurrent_CopyOnWriteArrayList_arc_files_Fi,
	(void *) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$10_arc_files_Fi_java_util_concurrent_CopyOnWriteArrayList_R_mindustry_editor_data_MapImagesView$1Result,
	(void *) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$0_mindustry_editor_data_MapAssetsDialog,
	(void *) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$1_mindustry_editor_data_MapAssetsDialog_Array1_arc_files_Fi,
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
	{ "build", "(Lmindustry/editor/data/MapAssetsDialog;Larc/scene/ui/layout/Table;)V" },
	{ "buildButtons", "(Lmindustry/editor/data/MapAssetsDialog;Larc/scene/ui/layout/Table;)V" },
	{ "getImages", "()Larc/struct/Seq;" },
	{ "lambda$build$2", "(Larc/graphics/g2d/TextureRegion;FLjava/lang/Runnable;ZLmindustry/mod/data/ImageAsset;IIILmindustry/editor/data/MapAssetsDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$5", "(FLmindustry/mod/data/ImageAsset;Larc/graphics/g2d/TextureRegion;Lmindustry/editor/data/MapAssetsDialog;Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$11", "(Lmindustry/mod/data/ImageAsset;Lmindustry/editor/data/MapAssetsDialog;)V" },
	{ "lambda$build$12", "(Lmindustry/mod/data/ImageAsset;Lmindustry/editor/data/MapAssetsDialog;)V" },
	{ "lambda$build$6", "(Lmindustry/mod/data/ImageAsset;Larc/graphics/g2d/TextureRegion;Lmindustry/editor/data/MapAssetsDialog;)V" },
	{ "lambda$build$7", "(Lmindustry/mod/data/ImageAsset;Larc/graphics/g2d/TextureRegion;Lmindustry/editor/data/MapAssetsDialog;Ljava/lang/String;)V" },
	{ "lambda$buildButtons$3", "(Lmindustry/editor/data/MapAssetsDialog;)V" },
	{ "lambda$buildButtons$4", "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/editor/data/MapAssetsDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildButtons$5", "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/editor/data/MapAssetsDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildButtons$17", "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/editor/data/MapAssetsDialog;)V" },
	{ "lambda$buildButtons$18", "(Lmindustry/editor/data/MapAssetsDialog;)V" },
	{ "lambda$buildButtons$15", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$buildButtons$16", "(Lmindustry/ui/dialogs/BaseDialog;Larc/files/Fi;)V" },
	{ "lambda$buildButtons$6", "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/editor/data/MapAssetsDialog;)V" },
	{ "lambda$buildButtons$7", "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/editor/data/MapAssetsDialog;Larc/files/Fi;)V" },
	{ "lambda$buildButtons$8", "(Larc/files/Fi;Lmindustry/editor/data/MapAssetsDialog;)V" },
	{ "lambda$buildButtons$9", "(Larc/struct/Seq;Ljava/util/concurrent/CopyOnWriteArrayList;Larc/files/Fi;)V" },
	{ "lambda$buildButtons$10", "(Larc/files/Fi;Ljava/util/concurrent/CopyOnWriteArrayList;)Lmindustry/editor/data/MapImagesView$1Result;" },
	{ "lambda$buildButtons$0", "(Lmindustry/editor/data/MapAssetsDialog;)V" },
	{ "lambda$buildButtons$1", "(Lmindustry/editor/data/MapAssetsDialog;[Larc/files/Fi;)V" },
};

static jclass interfaces[] { &class_mindustry_editor_data_AssetView, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_data_MapImagesView, 0, "()V", 1 },
	{ "buildButtons", (intptr_t) M_mindustry_editor_data_MapImagesView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_data_MapImagesView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, "(Lmindustry/editor/data/MapAssetsDialog;Larc/scene/ui/layout/Table;)V", 1 },
	{ "build", (intptr_t) M_mindustry_editor_data_MapImagesView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_data_MapImagesView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, "(Lmindustry/editor/data/MapAssetsDialog;Larc/scene/ui/layout/Table;)V", 1 },
	{ "getImages", (intptr_t) M_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq, VTABLE_mindustry_editor_data_MapImagesView_getImages_R_arc_struct_Seq, "()Larc/struct/Seq;", 2 },
	{ "lambda$build$2", (intptr_t) M_mindustry_editor_data_MapImagesView_lambda$build$2_arc_graphics_g2d_TextureRegion_float_java_lang_Runnable_boolean_mindustry_mod_data_ImageAsset_int_int_int_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_data_MapImagesView_lambda$build$2_arc_graphics_g2d_TextureRegion_float_java_lang_Runnable_boolean_mindustry_mod_data_ImageAsset_int_int_int_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, "(Larc/graphics/g2d/TextureRegion;FLjava/lang/Runnable;ZLmindustry/mod/data/ImageAsset;IIILmindustry/editor/data/MapAssetsDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$5", (intptr_t) M_mindustry_editor_data_MapImagesView_lambda$build$5_float_mindustry_mod_data_ImageAsset_arc_graphics_g2d_TextureRegion_mindustry_editor_data_MapAssetsDialog_java_lang_Runnable_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_data_MapImagesView_lambda$build$5_float_mindustry_mod_data_ImageAsset_arc_graphics_g2d_TextureRegion_mindustry_editor_data_MapAssetsDialog_java_lang_Runnable_arc_scene_ui_layout_Table, "(FLmindustry/mod/data/ImageAsset;Larc/graphics/g2d/TextureRegion;Lmindustry/editor/data/MapAssetsDialog;Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$11", (intptr_t) M_mindustry_editor_data_MapImagesView_lambda$build$11_mindustry_mod_data_ImageAsset_mindustry_editor_data_MapAssetsDialog, VTABLE_mindustry_editor_data_MapImagesView_lambda$build$11_mindustry_mod_data_ImageAsset_mindustry_editor_data_MapAssetsDialog, "(Lmindustry/mod/data/ImageAsset;Lmindustry/editor/data/MapAssetsDialog;)V", 4098 },
	{ "lambda$build$12", (intptr_t) M_mindustry_editor_data_MapImagesView_lambda$build$12_mindustry_mod_data_ImageAsset_mindustry_editor_data_MapAssetsDialog, VTABLE_mindustry_editor_data_MapImagesView_lambda$build$12_mindustry_mod_data_ImageAsset_mindustry_editor_data_MapAssetsDialog, "(Lmindustry/mod/data/ImageAsset;Lmindustry/editor/data/MapAssetsDialog;)V", 4098 },
	{ "lambda$build$9", (intptr_t) SM_mindustry_editor_data_MapImagesView_lambda$build$9_mindustry_mod_data_ImageAsset, 0, "(Lmindustry/mod/data/ImageAsset;)V", 4106 },
	{ "lambda$build$10", (intptr_t) SM_mindustry_editor_data_MapImagesView_lambda$build$10_mindustry_mod_data_ImageAsset_arc_files_Fi, 0, "(Lmindustry/mod/data/ImageAsset;Larc/files/Fi;)V", 4106 },
	{ "lambda$build$6", (intptr_t) M_mindustry_editor_data_MapImagesView_lambda$build$6_mindustry_mod_data_ImageAsset_arc_graphics_g2d_TextureRegion_mindustry_editor_data_MapAssetsDialog, VTABLE_mindustry_editor_data_MapImagesView_lambda$build$6_mindustry_mod_data_ImageAsset_arc_graphics_g2d_TextureRegion_mindustry_editor_data_MapAssetsDialog, "(Lmindustry/mod/data/ImageAsset;Larc/graphics/g2d/TextureRegion;Lmindustry/editor/data/MapAssetsDialog;)V", 4098 },
	{ "lambda$build$7", (intptr_t) M_mindustry_editor_data_MapImagesView_lambda$build$7_mindustry_mod_data_ImageAsset_arc_graphics_g2d_TextureRegion_mindustry_editor_data_MapAssetsDialog_java_lang_String, VTABLE_mindustry_editor_data_MapImagesView_lambda$build$7_mindustry_mod_data_ImageAsset_arc_graphics_g2d_TextureRegion_mindustry_editor_data_MapAssetsDialog_java_lang_String, "(Lmindustry/mod/data/ImageAsset;Larc/graphics/g2d/TextureRegion;Lmindustry/editor/data/MapAssetsDialog;Ljava/lang/String;)V", 4098 },
	{ "lambda$build$8", (intptr_t) SM_mindustry_editor_data_MapImagesView_lambda$build$8_mindustry_mod_data_ImageAsset_java_lang_String_java_lang_String_mindustry_mod_data_ImageAsset_R_boolean, 0, "(Lmindustry/mod/data/ImageAsset;Ljava/lang/String;Ljava/lang/String;Lmindustry/mod/data/ImageAsset;)Z", 4106 },
	{ "lambda$build$4", (intptr_t) SM_mindustry_editor_data_MapImagesView_lambda$build$4_java_lang_Runnable_mindustry_ui_BorderImage, 0, "(Ljava/lang/Runnable;Lmindustry/ui/BorderImage;)V", 4106 },
	{ "lambda$build$3", (intptr_t) SM_mindustry_editor_data_MapImagesView_lambda$build$3_mindustry_ui_BorderImage, 0, "(Lmindustry/ui/BorderImage;)V", 4106 },
	{ "lambda$build$0", (intptr_t) SM_mindustry_editor_data_MapImagesView_lambda$build$0_arc_graphics_g2d_TextureRegion_mindustry_mod_data_ImageAsset_boolean_int_int_int, 0, "(Larc/graphics/g2d/TextureRegion;Lmindustry/mod/data/ImageAsset;ZIII)V", 4106 },
	{ "lambda$build$1", (intptr_t) SM_mindustry_editor_data_MapImagesView_lambda$build$1_mindustry_ui_BorderImage, 0, "(Lmindustry/ui/BorderImage;)V", 4106 },
	{ "lambda$buildButtons$3", (intptr_t) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$3_mindustry_editor_data_MapAssetsDialog, VTABLE_mindustry_editor_data_MapImagesView_lambda$buildButtons$3_mindustry_editor_data_MapAssetsDialog, "(Lmindustry/editor/data/MapAssetsDialog;)V", 4098 },
	{ "lambda$buildButtons$4", (intptr_t) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$4_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_data_MapImagesView_lambda$buildButtons$4_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/editor/data/MapAssetsDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildButtons$5", (intptr_t) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$5_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_data_MapImagesView_lambda$buildButtons$5_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/editor/data/MapAssetsDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildButtons$17", (intptr_t) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$17_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog, VTABLE_mindustry_editor_data_MapImagesView_lambda$buildButtons$17_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog, "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/editor/data/MapAssetsDialog;)V", 4098 },
	{ "lambda$buildButtons$18", (intptr_t) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$18_mindustry_editor_data_MapAssetsDialog, VTABLE_mindustry_editor_data_MapImagesView_lambda$buildButtons$18_mindustry_editor_data_MapAssetsDialog, "(Lmindustry/editor/data/MapAssetsDialog;)V", 4098 },
	{ "lambda$buildButtons$15", (intptr_t) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$15_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_data_MapImagesView_lambda$buildButtons$15_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$buildButtons$16", (intptr_t) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$16_mindustry_ui_dialogs_BaseDialog_arc_files_Fi, VTABLE_mindustry_editor_data_MapImagesView_lambda$buildButtons$16_mindustry_ui_dialogs_BaseDialog_arc_files_Fi, "(Lmindustry/ui/dialogs/BaseDialog;Larc/files/Fi;)V", 4098 },
	{ "lambda$buildButtons$6", (intptr_t) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$6_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog, VTABLE_mindustry_editor_data_MapImagesView_lambda$buildButtons$6_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog, "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/editor/data/MapAssetsDialog;)V", 4098 },
	{ "lambda$buildButtons$7", (intptr_t) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$7_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_arc_files_Fi, VTABLE_mindustry_editor_data_MapImagesView_lambda$buildButtons$7_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_arc_files_Fi, "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/editor/data/MapAssetsDialog;Larc/files/Fi;)V", 4098 },
	{ "lambda$buildButtons$8", (intptr_t) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$8_arc_files_Fi_mindustry_editor_data_MapAssetsDialog, VTABLE_mindustry_editor_data_MapImagesView_lambda$buildButtons$8_arc_files_Fi_mindustry_editor_data_MapAssetsDialog, "(Larc/files/Fi;Lmindustry/editor/data/MapAssetsDialog;)V", 4098 },
	{ "lambda$buildButtons$13", (intptr_t) SM_mindustry_editor_data_MapImagesView_lambda$buildButtons$13_java_util_concurrent_CopyOnWriteArrayList_arc_scene_ui_layout_Table, 0, "(Ljava/util/concurrent/CopyOnWriteArrayList;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$buildButtons$14", (intptr_t) SM_mindustry_editor_data_MapImagesView_lambda$buildButtons$14_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 4106 },
	{ "lambda$buildButtons$12", (intptr_t) SM_mindustry_editor_data_MapImagesView_lambda$buildButtons$12_java_lang_String_mindustry_mod_data_ImageAsset_R_boolean, 0, "(Ljava/lang/String;Lmindustry/mod/data/ImageAsset;)Z", 4106 },
	{ "lambda$buildButtons$11", (intptr_t) SM_mindustry_editor_data_MapImagesView_lambda$buildButtons$11_java_lang_String_java_lang_String_mindustry_mod_data_ImageAsset_R_boolean, 0, "(Ljava/lang/String;Ljava/lang/String;Lmindustry/mod/data/ImageAsset;)Z", 4106 },
	{ "lambda$buildButtons$9", (intptr_t) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$9_arc_struct_Seq_java_util_concurrent_CopyOnWriteArrayList_arc_files_Fi, VTABLE_mindustry_editor_data_MapImagesView_lambda$buildButtons$9_arc_struct_Seq_java_util_concurrent_CopyOnWriteArrayList_arc_files_Fi, "(Larc/struct/Seq;Ljava/util/concurrent/CopyOnWriteArrayList;Larc/files/Fi;)V", 4098 },
	{ "lambda$buildButtons$10", (intptr_t) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$10_arc_files_Fi_java_util_concurrent_CopyOnWriteArrayList_R_mindustry_editor_data_MapImagesView$1Result, VTABLE_mindustry_editor_data_MapImagesView_lambda$buildButtons$10_arc_files_Fi_java_util_concurrent_CopyOnWriteArrayList_R_mindustry_editor_data_MapImagesView$1Result, "(Larc/files/Fi;Ljava/util/concurrent/CopyOnWriteArrayList;)Lmindustry/editor/data/MapImagesView$1Result;", 4098 },
	{ "lambda$buildButtons$0", (intptr_t) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$0_mindustry_editor_data_MapAssetsDialog, VTABLE_mindustry_editor_data_MapImagesView_lambda$buildButtons$0_mindustry_editor_data_MapAssetsDialog, "(Lmindustry/editor/data/MapAssetsDialog;)V", 4098 },
	{ "lambda$buildButtons$1", (intptr_t) M_mindustry_editor_data_MapImagesView_lambda$buildButtons$1_mindustry_editor_data_MapAssetsDialog_Array1_arc_files_Fi, VTABLE_mindustry_editor_data_MapImagesView_lambda$buildButtons$1_mindustry_editor_data_MapAssetsDialog_Array1_arc_files_Fi, "(Lmindustry/editor/data/MapAssetsDialog;[Larc/files/Fi;)V", 4098 },
	{ "lambda$buildButtons$2", (intptr_t) SM_mindustry_editor_data_MapImagesView_lambda$buildButtons$2_java_lang_String_java_lang_String_mindustry_mod_data_ImageAsset_R_boolean, 0, "(Ljava/lang/String;Ljava/lang/String;Lmindustry/mod/data/ImageAsset;)Z", 4106 },
};

Class class_mindustry_editor_data_MapImagesView{
		.nativeName = (intptr_t) "mindustry/editor/data/MapImagesView",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_editor_data_MapImagesView),
		.classVtable = (intptr_t) vtable_mindustry_editor_data_MapImagesView,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_data_MapImagesView,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_data_MapImagesView,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 36,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 34,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_data_MapImagesView = registerClass(&class_mindustry_editor_data_MapImagesView);

}
