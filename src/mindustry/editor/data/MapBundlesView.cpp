#include "mindustry/editor/data/MapBundlesView.h"
#include "mindustry/editor/data/MapBundlesView_invoke_arc_func_Cons_19.h"
#include "java/lang/Integer.h"
#include "mindustry/editor/data/MapBundlesView_invoke_arc_func_Cons_18.h"
#include "java/io/StringReader.h"
#include "java/lang/Runnable.h"
#include "arc/struct/StringMap.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "mindustry/editor/data/MapBundlesView_invoke_arc_func_Cons_11.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/editor/data/MapBundlesView_invoke_arc_func_Cons_10.h"
#include "mindustry/ui/FileChooser.h"
#include "mindustry/editor/data/MapBundlesView_invoke_arc_func_Cons_13.h"
#include "arc/scene/ui/TextButton.h"
#include "mindustry/editor/data/MapBundlesView_invoke_arc_func_Cons_12.h"
#include "mindustry/mod/data/DataAsset.h"
#include "java/io/Reader.h"
#include "mindustry/editor/data/MapBundlesView_invoke_arc_func_Cons_15.h"
#include "java/lang/Throwable.h"
#include "mindustry/editor/data/MapBundlesView_invoke_arc_func_Cons_14.h"
#include "arc/func/Boolf.h"
#include "mindustry/editor/data/MapBundlesView_invoke_arc_func_Cons_17.h"
#include "mindustry/editor/data/MapBundlesView_invoke_arc_func_Cons_16.h"
#include "java/lang/Exception.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/editor/data/MapAssetsDialog.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "arc/scene/ui/Label.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/editor/data/MapBundlesView_invoke_arc_func_Boolf_4.h"
#include "mindustry/editor/data/MapBundlesView_invoke_arc_func_Boolf_5.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/editor/data/MapBundlesView_invoke_arc_func_Boolf_3.h"
#include "mindustry/editor/data/MapBundlesView_invoke_java_lang_Runnable_15.h"
#include "mindustry/editor/data/MapBundlesView_invoke_java_lang_Runnable_14.h"
#include "mindustry/mod/data/DataAssetType.h"
#include "mindustry/editor/data/MapBundlesView_invoke_java_lang_Runnable_17.h"
#include "mindustry/editor/data/MapBundlesView_invoke_java_lang_Runnable_16.h"
#include "arc/struct/OrderedMap.h"
#include "mindustry/editor/data/MapBundlesView_invoke_java_lang_Runnable_19.h"
#include "java/nio/charset/Charset.h"
#include "mindustry/editor/data/MapBundlesView_invoke_java_lang_Runnable_18.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/core/Platform_FileWriter.h"
#include "arc/files/Fi.h"
#include "mindustry/editor/data/MapBundlesView_invoke_java_lang_Runnable_11.h"
#include "arc/util/io/PropertiesUtils.h"
#include "mindustry/editor/data/MapBundlesView_invoke_java_lang_Runnable_13.h"
#include "arc/Application.h"
#include "mindustry/editor/data/MapBundlesView_invoke_java_lang_Runnable_12.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/mod/DataManager.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "mindustry/ui/FileChooser_FileChooserParams.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/mod/data/BundleAsset.h"
#include "mindustry/editor/data/MapBundlesView_invoke_java_lang_Runnable_20.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/editor/data/MapBundlesView_invoke_java_lang_Runnable_21.h"
#include "mindustry/editor/data/AssetView.h"
#include "mindustry/core/UI.h"
#include "mindustry/editor/data/MapBundlesView.h"
#include "java/lang/CharSequence.h"
#include "mindustry/editor/data/MapBundlesView_invoke_mindustry_core_Platform_FileWriter_1.h"
#include "arc/util/Strings.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "arc/struct/SnapshotSeq.h"
#include "java/util/Objects.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_editor_data_MapBundlesView(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_data_MapBundlesView *) object;
}

void clinit_mindustry_editor_data_MapBundlesView(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_editor_data_MapBundlesView(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapBundlesView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:build", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(25);
	frame[3].f = (jfloat(50.0f));
	LINE_NUMBER(27);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getBundles_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getBundles_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(29);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(30);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_mod_data_BundleAsset, sp[0].o));
	LINE_NUMBER(31);
	sp[0].o = (jobject)((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK((frame[1].o)))->F_searchString;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[6].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK((frame[1].o)))->F_searchString;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_7;
	}
	goto label_4;
label_7:;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((func_mindustry_mod_data_BundleAsset_getCacheFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_mod_data_BundleAsset_getCacheFile_R_arc_files_Fi])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(35);
	if ((frame[7].o) != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(36);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_warning;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_graySquarei;
	jfloat temp0 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_11);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[3].f));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[3].f));
	}
label_11:;
	{
	LINE_NUMBER(41);
	((func_mindustry_mod_data_BundleAsset_tryLoadCache) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_mod_data_BundleAsset_tryLoadCache])(ctx, (frame[6].o));
	LINE_NUMBER(43);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[6].o)))->F_name;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"bundle.lines"_j));
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[5].o = (jobject)((mindustry_mod_data_BundleAsset *) NULL_CHECK((frame[6].o)))->F_cachedBundle;
	jobject temp1 = sp[5].o;
	sp[5].o = sp[4].o;
	sp[6].i = temp0;
	sp += 7;
	if (temp1 != nullptr) goto label_13;
	}
	INST_ACONST_NULL();
	goto label_14;
label_13:;
	{
	sp[0].o = (jobject)((mindustry_mod_data_BundleAsset *) NULL_CHECK((frame[6].o)))->F_cachedBundle;
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_size));
	sp += 1;
	}
label_14:;
	{
	sp -= 8;
	ARRAY_ACCESS(jobject, sp[4].o, sp[6].i) = sp[7].o;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[accent]\u0001\n[lightgray][[\u0001]"_j.string, 2, sp[1].o, sp[2].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_grayt;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_12(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_12 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_12);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(57);
	sp += 1;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_16;
	}
	(sp++)->f = jfloat(390.0f);
	goto label_17;
label_16:;
	(sp++)->f = jfloat(450.0f);
label_17:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].f, (frame[3].f));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_10);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_arc_func_Boolf_3);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(59);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(61);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_refresh;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_graySquarei;
	jfloat temp0 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_13);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	jfloat temp1 = frame[3].f;
	LINE_NUMBER(89);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(91);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_export;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_graySquarei;
	jfloat temp2 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_14(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_14 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_14);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp2, sp[3].o);
	jfloat temp3 = frame[3].f;
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp3);
	sp += 1;
	if ((frame[7].o) != nullptr) goto label_23;
	}
	INST_ICONST(1);
	goto label_24;
label_23:;
	INST_ICONST(0);
label_24:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(120);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_trash;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_graySquarei;
	jfloat temp0 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_15(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_15 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_15);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	jfloat temp1 = frame[3].f;
	LINE_NUMBER(125);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(127);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(128);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@patch.none"_j))));
	}
label_29:;
	LINE_NUMBER(133);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapBundlesView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:buildButtons", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(137);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@add"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_add;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_16(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_16 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_16);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(190.0f);
	jfloat temp1 = jfloat(64.0f);
	LINE_NUMBER(160);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapBundlesView_lambda$buildButtons$0_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$buildButtons$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"properties"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"txt"_j)));
	sp[0].o = (jobject)SM_mindustry_ui_FileChooser_open_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_FileChooser$FileChooserParams_submitMulti_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_submitMulti_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapBundlesView_lambda$buildButtons$1_mindustry_editor_data_MapAssetsDialog_Array1_arc_files_Fi(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$buildButtons$1", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(139);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_10:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_11;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(140);
	sp[0].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(141);
	sp[0].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[5].o));
	frame[7].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(143);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_data_DataAssetType_bundle;
	jint temp0 = (jint)((func_mindustry_mod_DataManager_hasAssetPath_mindustry_mod_data_DataAssetType_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_hasAssetPath_mindustry_mod_data_DataAssetType_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[6].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(144);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"asset.bundle.exists"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(0))) = (frame[6].o);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(145);
	goto label_15;
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(147);
	clinit_arc_struct_StringMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	init_arc_struct_StringMap(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(148);
	sp[0].o = frame[8].o;
	clinit_java_io_StringReader(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_StringReader);
	init_java_io_StringReader_java_lang_String(ctx, sp[1].o, (frame[7].o));
	SM_arc_util_io_PropertiesUtils_load_arc_struct_ObjectMap_java_io_Reader(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(149);
	sp[0].o = frame[7].o;
	clinit_arc_util_Strings(ctx);
	sp[1].o = (jobject)SF_arc_util_Strings_utf8;
	sp[0].o = (jobject)((func_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte])(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(150);
	clinit_mindustry_mod_data_BundleAsset(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_data_BundleAsset);
	init_mindustry_mod_data_BundleAsset(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(151);
	((func_mindustry_mod_data_BundleAsset_setPath_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_mod_data_BundleAsset_setPath_java_lang_String])(ctx, (frame[10].o), (frame[6].o));
	LINE_NUMBER(152);
	((func_mindustry_mod_data_BundleAsset_updateData_Array1_byte) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_mod_data_BundleAsset_updateData_Array1_byte])(ctx, (frame[10].o), (frame[9].o));
	LINE_NUMBER(153);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getBundles_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getBundles_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[10].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(156);
	goto label_22;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(154);
	frame[8].o = sp[0].o;
	LINE_NUMBER(155);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_Throwable])(ctx, sp[0].o, (frame[8].o));
	}
label_22:;
	{
	LINE_NUMBER(157);
	((func_mindustry_editor_data_MapAssetsDialog_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_rebuild])(ctx, (frame[0].o));
	}
label_15:;
	{
	LINE_NUMBER(139);
	INST_IINC(4, 1);
	goto label_10;
	}
label_11:;
	LINE_NUMBER(159);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapBundlesView_lambda$build$20_arc_struct_Seq_mindustry_mod_data_BundleAsset_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$build$20", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(121);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@asset.delete.confirm"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_17(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_17 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_17);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapBundlesView_lambda$build$21_arc_struct_Seq_mindustry_mod_data_BundleAsset_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$build$21", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(122);
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(123);
	((func_mindustry_editor_data_MapAssetsDialog_rebuild) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_rebuild])(ctx, (frame[2].o));
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapBundlesView_lambda$build$14_arc_files_Fi_mindustry_mod_data_BundleAsset(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$build$14", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(92);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.export"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(93);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[2].o));
	LINE_NUMBER(94);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_12);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(117);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[2].o));
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapBundlesView_lambda$build$15_mindustry_ui_dialogs_BaseDialog_arc_files_Fi_mindustry_mod_data_BundleAsset_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$build$15", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o), (jfloat(10.0f)));
	LINE_NUMBER(96);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_13);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapBundlesView_lambda$build$16_mindustry_ui_dialogs_BaseDialog_arc_files_Fi_mindustry_mod_data_BundleAsset_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$build$16", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(97);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_flatt;
	frame[4].o = sp[0].o;
	LINE_NUMBER(98);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(280.0f)), (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(99);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(100);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@copy.clipboard"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_copy;
	sp[3].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_18(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_18 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_18);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_arc_func_Boolf_4);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(110);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@export.file"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_export;
	sp[3].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_19(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_19 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_19);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp1 = jfloat(12.0f);
	LINE_NUMBER(113);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(114);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapBundlesView_lambda$build$19_mindustry_ui_dialogs_BaseDialog_mindustry_mod_data_BundleAsset_arc_files_Fi(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$build$19", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(111);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(112);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"properties"_j));
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_mindustry_core_Platform$FileWriter_1(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_mindustry_core_Platform$FileWriter_1 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_mindustry_core_Platform$FileWriter_1);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_ui_FileChooser_export_java_lang_String_java_lang_String_mindustry_core_Platform$FileWriter(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_data_MapBundlesView_lambda$build$18_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$build$18", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(108);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[0].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[0].o))(ctx, sp[0].o);
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

void SM_mindustry_editor_data_MapBundlesView_lambda$build$17_mindustry_ui_dialogs_BaseDialog_arc_files_Fi(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$build$17", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(101);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(103);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[1].o));
	((func_arc_Application_setClipboardText_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_setClipboardText_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(104);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfoFade_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfoFade_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@copied"_j))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(107);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(105);
	frame[2].o = sp[0].o;
	LINE_NUMBER(106);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_Throwable])(ctx, sp[0].o, (frame[2].o));
	}
label_6:;
	LINE_NUMBER(108);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapBundlesView_lambda$build$6_mindustry_mod_data_BundleAsset_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$build$6", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(62);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_14);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	frame[2].o = sp[0].o;
	LINE_NUMBER(67);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.import"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(68);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[3].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_15);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(87);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[3].o));
	LINE_NUMBER(88);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[3].o));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapBundlesView_lambda$build$8_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$build$8", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o), (jfloat(10.0f)));
	LINE_NUMBER(70);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_16);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapBundlesView_lambda$build$9_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$build$9", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(71);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_flatt;
	frame[3].o = sp[0].o;
	LINE_NUMBER(72);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(280.0f)), (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(73);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(74);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@load.clipboard"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_copy;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_20(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_20 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_20);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_arc_func_Boolf_5);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(78);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(79);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@import.file"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_download;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_21(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_21 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_java_lang_Runnable_21);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp1 = jfloat(12.0f);
	LINE_NUMBER(82);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(83);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapBundlesView_lambda$build$12_mindustry_ui_dialogs_BaseDialog_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$build$12", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"properties"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"txt"_j)));
	sp[0].o = (jobject)SM_mindustry_ui_FileChooser_open_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_17);
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

void SM_mindustry_editor_data_MapBundlesView_lambda$build$13_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_arc_files_Fi(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$build$13", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(80);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(81);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[2].o));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_data_MapBundlesView_lambda$build$11_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$build$11", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(77);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[0].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[0].o))(ctx, sp[0].o);
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

void SM_mindustry_editor_data_MapBundlesView_lambda$build$10_mindustry_ui_dialogs_BaseDialog_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$build$10", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(75);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(76);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[1].o))(ctx, sp[1].o);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapBundlesView_lambda$build$7_mindustry_mod_data_BundleAsset_mindustry_editor_data_MapAssetsDialog_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$build$7", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	clinit_arc_util_Strings(ctx);
	sp[2].o = (jobject)SF_arc_util_Strings_utf8;
	sp[1].o = (jobject)((func_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_mod_data_BundleAsset_updateData_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_data_BundleAsset_updateData_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(64);
	((func_mindustry_editor_data_MapAssetsDialog_rebuild) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_rebuild])(ctx, (frame[1].o));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_data_MapBundlesView_lambda$build$5_arc_files_Fi_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$build$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(59);
	if ((frame[0].o) != nullptr) goto label_1;
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

void SM_mindustry_editor_data_MapBundlesView_lambda$build$4_arc_scene_ui_TextButton(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$build$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label])(ctx, (frame[0].o));
	((func_arc_scene_ui_Label_setAlignment_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setAlignment_int_int])(ctx, sp[0].o, (8), (8));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapBundlesView_lambda$build$1_mindustry_mod_data_BundleAsset_arc_files_Fi(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$build$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(44);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_name;
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(45);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_18(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_18 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_18);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(54);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(55);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[2].o));
	LINE_NUMBER(56);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[2].o));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapBundlesView_lambda$build$2_arc_files_Fi_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$build$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(47);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayPanel;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_19(ctx);
		auto proxy = (mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_19 *) gcAlloc(ctx, &class_mindustry_editor_data_MapBundlesView_invoke_arc_func_Cons_19);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(6.0f);
	LINE_NUMBER(53);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapBundlesView_lambda$build$3_arc_files_Fi_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$build$3", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(49);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\t"_j))), (((jobject) createStringLiteral(ctx, u8"  "_j))));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_monoLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (8));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(52);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(50);
	frame[2].o = sp[0].o;
	LINE_NUMBER(51);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_Throwable])(ctx, sp[0].o, (frame[2].o));
	}
label_4:;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapBundlesView_lambda$build$0(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapBundlesView:lambda$build$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapBundlesView(ctx);
	{
	LINE_NUMBER(36);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@asset.broken"_j))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_data_MapBundlesView[] {
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
	(void *) M_mindustry_editor_data_MapBundlesView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_data_MapBundlesView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table,
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
};

static jclass interfaces[] { &class_mindustry_editor_data_AssetView, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_data_MapBundlesView, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_editor_data_MapBundlesView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_data_MapBundlesView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, "(Lmindustry/editor/data/MapAssetsDialog;Larc/scene/ui/layout/Table;)V", 1 },
	{ "buildButtons", (intptr_t) M_mindustry_editor_data_MapBundlesView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_data_MapBundlesView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, "(Lmindustry/editor/data/MapAssetsDialog;Larc/scene/ui/layout/Table;)V", 1 },
	{ "lambda$buildButtons$0", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$buildButtons$0_mindustry_editor_data_MapAssetsDialog, 0, "(Lmindustry/editor/data/MapAssetsDialog;)V", 4106 },
	{ "lambda$buildButtons$1", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$buildButtons$1_mindustry_editor_data_MapAssetsDialog_Array1_arc_files_Fi, 0, "(Lmindustry/editor/data/MapAssetsDialog;[Larc/files/Fi;)V", 4106 },
	{ "lambda$build$20", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$build$20_arc_struct_Seq_mindustry_mod_data_BundleAsset_mindustry_editor_data_MapAssetsDialog, 0, "(Larc/struct/Seq;Lmindustry/mod/data/BundleAsset;Lmindustry/editor/data/MapAssetsDialog;)V", 4106 },
	{ "lambda$build$21", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$build$21_arc_struct_Seq_mindustry_mod_data_BundleAsset_mindustry_editor_data_MapAssetsDialog, 0, "(Larc/struct/Seq;Lmindustry/mod/data/BundleAsset;Lmindustry/editor/data/MapAssetsDialog;)V", 4106 },
	{ "lambda$build$14", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$build$14_arc_files_Fi_mindustry_mod_data_BundleAsset, 0, "(Larc/files/Fi;Lmindustry/mod/data/BundleAsset;)V", 4106 },
	{ "lambda$build$15", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$build$15_mindustry_ui_dialogs_BaseDialog_arc_files_Fi_mindustry_mod_data_BundleAsset_arc_scene_ui_layout_Table, 0, "(Lmindustry/ui/dialogs/BaseDialog;Larc/files/Fi;Lmindustry/mod/data/BundleAsset;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$16", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$build$16_mindustry_ui_dialogs_BaseDialog_arc_files_Fi_mindustry_mod_data_BundleAsset_arc_scene_ui_layout_Table, 0, "(Lmindustry/ui/dialogs/BaseDialog;Larc/files/Fi;Lmindustry/mod/data/BundleAsset;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$19", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$build$19_mindustry_ui_dialogs_BaseDialog_mindustry_mod_data_BundleAsset_arc_files_Fi, 0, "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/mod/data/BundleAsset;Larc/files/Fi;)V", 4106 },
	{ "lambda$build$18", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$build$18_arc_scene_ui_TextButton_R_boolean, 0, "(Larc/scene/ui/TextButton;)Z", 4106 },
	{ "lambda$build$17", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$build$17_mindustry_ui_dialogs_BaseDialog_arc_files_Fi, 0, "(Lmindustry/ui/dialogs/BaseDialog;Larc/files/Fi;)V", 4106 },
	{ "lambda$build$6", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$build$6_mindustry_mod_data_BundleAsset_mindustry_editor_data_MapAssetsDialog, 0, "(Lmindustry/mod/data/BundleAsset;Lmindustry/editor/data/MapAssetsDialog;)V", 4106 },
	{ "lambda$build$8", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$build$8_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_arc_scene_ui_layout_Table, 0, "(Lmindustry/ui/dialogs/BaseDialog;Larc/func/Cons;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$9", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$build$9_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_arc_scene_ui_layout_Table, 0, "(Lmindustry/ui/dialogs/BaseDialog;Larc/func/Cons;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$12", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$build$12_mindustry_ui_dialogs_BaseDialog_arc_func_Cons, 0, "(Lmindustry/ui/dialogs/BaseDialog;Larc/func/Cons;)V", 4106 },
	{ "lambda$build$13", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$build$13_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_arc_files_Fi, 0, "(Lmindustry/ui/dialogs/BaseDialog;Larc/func/Cons;Larc/files/Fi;)V", 4106 },
	{ "lambda$build$11", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$build$11_arc_scene_ui_TextButton_R_boolean, 0, "(Larc/scene/ui/TextButton;)Z", 4106 },
	{ "lambda$build$10", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$build$10_mindustry_ui_dialogs_BaseDialog_arc_func_Cons, 0, "(Lmindustry/ui/dialogs/BaseDialog;Larc/func/Cons;)V", 4106 },
	{ "lambda$build$7", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$build$7_mindustry_mod_data_BundleAsset_mindustry_editor_data_MapAssetsDialog_java_lang_String, 0, "(Lmindustry/mod/data/BundleAsset;Lmindustry/editor/data/MapAssetsDialog;Ljava/lang/String;)V", 4106 },
	{ "lambda$build$5", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$build$5_arc_files_Fi_arc_scene_ui_TextButton_R_boolean, 0, "(Larc/files/Fi;Larc/scene/ui/TextButton;)Z", 4106 },
	{ "lambda$build$4", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$build$4_arc_scene_ui_TextButton, 0, "(Larc/scene/ui/TextButton;)V", 4106 },
	{ "lambda$build$1", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$build$1_mindustry_mod_data_BundleAsset_arc_files_Fi, 0, "(Lmindustry/mod/data/BundleAsset;Larc/files/Fi;)V", 4106 },
	{ "lambda$build$2", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$build$2_arc_files_Fi_arc_scene_ui_layout_Table, 0, "(Larc/files/Fi;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$3", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$build$3_arc_files_Fi_arc_scene_ui_layout_Table, 0, "(Larc/files/Fi;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$0", (intptr_t) SM_mindustry_editor_data_MapBundlesView_lambda$build$0, 0, "()V", 4106 },
};

Class class_mindustry_editor_data_MapBundlesView{
		.nativeName = (intptr_t) "mindustry/editor/data/MapBundlesView",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_editor_data_MapBundlesView),
		.classVtable = (intptr_t) vtable_mindustry_editor_data_MapBundlesView,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_data_MapBundlesView,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_data_MapBundlesView,
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
		.methodCount = 27,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_data_MapBundlesView = registerClass(&class_mindustry_editor_data_MapBundlesView);

}
