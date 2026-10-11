#include "mindustry/editor/data/MapPatchesView.h"
#include "java/lang/Integer.h"
#include "mindustry/mod/data/PatchAsset.h"
#include "java/lang/Runnable.h"
#include "mindustry/editor/data/MapPatchesView.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ui/FileChooser.h"
#include "arc/scene/ui/TextButton.h"
#include "java/lang/Throwable.h"
#include "mindustry/editor/data/MapPatchesView_invoke_arc_func_Boolf_1.h"
#include "arc/func/Boolf.h"
#include "java/lang/Exception.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/editor/data/MapAssetsDialog.h"
#include "arc/util/serialization/JsonValue_JsonIterator.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "arc/scene/ui/Label.h"
#include "java/lang/Object.h"
#include "arc/util/serialization/JsonValue.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/editor/data/MapPatchesView_invoke_java_lang_Runnable_15.h"
#include "mindustry/editor/data/MapPatchesView_invoke_java_lang_Runnable_16.h"
#include "mindustry/editor/data/MapPatchesView_invoke_java_lang_Runnable_17.h"
#include "mindustry/editor/data/MapPatchesView_invoke_java_lang_Runnable_11.h"
#include "mindustry/editor/data/MapPatchesView_invoke_java_lang_Runnable_12.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/editor/data/MapPatchesView_invoke_java_lang_Runnable_13.h"
#include "mindustry/editor/data/MapPatchesView_invoke_java_lang_Runnable_14.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "arc/files/Fi.h"
#include "arc/Application.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/mod/DataManager.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "java/lang/Math.h"
#include "mindustry/ui/FileChooser_FileChooserParams.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/util/serialization/Jval.h"
#include "mindustry/editor/data/MapPatchesView_invoke_arc_func_Cons_12.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/editor/data/MapPatchesView_invoke_arc_func_Cons_11.h"
#include "mindustry/editor/data/MapPatchesView_invoke_arc_func_Cons_10.h"
#include "mindustry/editor/data/MapPatchesView_invoke_java_lang_Runnable_9.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/editor/data/AssetView.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "mindustry/editor/data/MapPatchesView_invoke_arc_func_Cons_16.h"
#include "mindustry/editor/data/MapPatchesView_invoke_arc_func_Cons_15.h"
#include "mindustry/editor/data/MapPatchesView_invoke_arc_func_Cons_14.h"
#include "mindustry/editor/data/MapPatchesView_invoke_java_lang_Runnable_10.h"
#include "mindustry/editor/data/MapPatchesView_invoke_arc_func_Cons_13.h"
#include "arc/struct/SnapshotSeq.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/editor/data/MapPatchesView_invoke_arc_func_Cons_19.h"
#include "mindustry/editor/data/MapPatchesView_invoke_arc_func_Cons_18.h"
#include "mindustry/editor/data/MapPatchesView_invoke_arc_func_Cons_17.h"

extern "C" {


void mark_mindustry_editor_data_MapPatchesView(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_data_MapPatchesView *) object;
}

void clinit_mindustry_editor_data_MapPatchesView(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_editor_data_MapPatchesView(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapPatchesView(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(17);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapPatchesView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:buildButtons", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(21);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@add"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_add;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_9);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(190.0f);
	jfloat temp1 = jfloat(64.0f);
	LINE_NUMBER(24);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapPatchesView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:build", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(29);
	frame[3].f = (jfloat(50.0f));
	LINE_NUMBER(31);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getPatches_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getPatches_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(33);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(34);
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
	frame[6].o = (checkCast(ctx, &class_mindustry_mod_data_PatchAsset, sp[0].o));
	LINE_NUMBER(35);
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
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_mod_data_PatchAsset *) NULL_CHECK((frame[6].o)))->F_json;
	jint temp0 = (jint)((func_mindustry_editor_data_MapPatchesView_countFields_arc_util_serialization_JsonValue_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_data_MapPatchesView_countFields_arc_util_serialization_JsonValue_R_int])(ctx, sp[0].o, sp[1].o);
	frame[7].i = temp0;
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_mod_data_PatchAsset *) NULL_CHECK((frame[6].o)))->F_warnings;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(40);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_warning;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_graySquarei;
	jfloat temp0 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_10(ctx);
		auto proxy = (mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_10 *) gcAlloc(ctx, &class_mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_10);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	jfloat temp1 = frame[3].f;
	LINE_NUMBER(53);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	goto label_12;
	}
label_9:;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[3].f));
	}
label_12:;
	{
	LINE_NUMBER(58);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[6].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_13;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"<unnamed>\n"_j));
	goto label_14;
label_13:;
	{
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[6].o)))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[accent]\u0001\n"_j.string, 1, sp[0].o);
	sp += 1;
	}
label_14:;
	{
	sp -= 2;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"patch.fields"_j));
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[5].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[7].i));
	ARRAY_ACCESS(jobject, sp[4].o, temp0) = sp[5].o;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001[lightgray][[\u0001]"_j.string, 2, sp[1].o, sp[2].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_grayt;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_11);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(68);
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
		clinit_mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_10);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(72);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_copy;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_graySquarei;
	jfloat temp0 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_12(ctx);
		auto proxy = (mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_12 *) gcAlloc(ctx, &class_mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_12);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	jfloat temp1 = frame[3].f;
	LINE_NUMBER(75);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(77);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_refresh;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_graySquarei;
	jfloat temp2 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_13);
		proxy->F_field3 = (jref) (frame[1].o);
		proxy->F_field2 = (jref) (frame[6].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp2, sp[3].o);
	jfloat temp3 = frame[3].f;
	LINE_NUMBER(82);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp3);
	LINE_NUMBER(84);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_trash;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_graySquarei;
	jfloat temp4 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_14(ctx);
		auto proxy = (mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_14 *) gcAlloc(ctx, &class_mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_14);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp4, sp[3].o);
	jfloat temp5 = frame[3].f;
	LINE_NUMBER(90);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp5);
	LINE_NUMBER(92);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(93);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@patch.none"_j))));
	}
label_26:;
	LINE_NUMBER(98);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapPatchesView_showImport_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:showImport", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(101);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.import"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(102);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_11);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(122);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[2].o));
	LINE_NUMBER(123);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[2].o));
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapPatchesView_addPatch_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:addPatch", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(127);
	((func_mindustry_editor_data_MapPatchesView_addPatch_java_lang_String_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapPatchesView_addPatch_java_lang_String_int])(ctx, (frame[0].o), (frame[1].o), (jint(-1)));
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapPatchesView_addPatch_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:addPatch", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(131);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getPatches_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getPatches_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(132);
	sp[0].o = (jobject)((func_arc_struct_Seq_copy_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)SM_arc_util_serialization_Jval_read_java_lang_String_R_arc_util_serialization_Jval(ctx, (frame[1].o));
	LINE_NUMBER(137);
	if ((frame[2].i) != (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(138);
	sp[0].o = frame[3].o;
	clinit_mindustry_mod_data_PatchAsset(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_mod_data_PatchAsset);
	init_mindustry_mod_data_PatchAsset_java_lang_String(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(140);
	sp[0].o = frame[3].o;
	jint temp0 = frame[2].i;
	clinit_mindustry_mod_data_PatchAsset(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_mod_data_PatchAsset);
	init_mindustry_mod_data_PatchAsset_java_lang_String(ctx, sp[1].o, (frame[1].o));
	((func_arc_struct_Seq_set_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_set_int_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(143);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_reloadPatches_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_reloadPatches_arc_struct_Seq])(ctx, sp[0].o, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(148);
	goto label_10;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(145);
	frame[5].o = sp[0].o;
	LINE_NUMBER(146);
	((func_arc_struct_Seq_set_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_set_arc_struct_Seq])(ctx, (frame[3].o), (frame[4].o));
	LINE_NUMBER(147);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@patch.importerror"_j))), (frame[5].o));
	}
label_10:;
	LINE_NUMBER(149);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_mindustry_editor_data_MapPatchesView_countFields_arc_util_serialization_JsonValue_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:countFields", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(152);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(153);
	frame[2].i = (jint(0));
	LINE_NUMBER(154);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, sp[0].o));
	LINE_NUMBER(155);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_mindustry_editor_data_MapPatchesView_countFields_arc_util_serialization_JsonValue_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapPatchesView_countFields_arc_util_serialization_JsonValue_R_int])(ctx, (frame[0].o), (frame[4].o));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(156);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(157);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[2].i), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapPatchesView_lambda$showImport$0_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:lambda$showImport$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapPatchesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o), (jfloat(10.0f)));
	LINE_NUMBER(104);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_12);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapPatchesView_lambda$showImport$1_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:lambda$showImport$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapPatchesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(105);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_flatt;
	frame[3].o = sp[0].o;
	LINE_NUMBER(106);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(280.0f)), (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(107);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(108);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@load.clipboard"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_copy;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_15(ctx);
		auto proxy = (mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_15 *) gcAlloc(ctx, &class_mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_15);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(111);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapPatchesView_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_editor_data_MapPatchesView_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_editor_data_MapPatchesView_invoke_arc_func_Boolf_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(112);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(114);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@import.file"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_download;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_16(ctx);
		auto proxy = (mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_16 *) gcAlloc(ctx, &class_mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_16);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp1 = jfloat(12.0f);
	LINE_NUMBER(117);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapPatchesView_lambda$showImport$4_mindustry_ui_dialogs_BaseDialog_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:lambda$showImport$4", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapPatchesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"json"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"hjson"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"json5"_j)));
	sp[0].o = (jobject)SM_mindustry_ui_FileChooser_open_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_13);
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

void SM_mindustry_editor_data_MapPatchesView_lambda$showImport$5_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_arc_files_Fi(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:lambda$showImport$5", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapPatchesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(115);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(116);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[2].o));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_data_MapPatchesView_lambda$showImport$3_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:lambda$showImport$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapPatchesView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(111);
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

void SM_mindustry_editor_data_MapPatchesView_lambda$showImport$2_mindustry_ui_dialogs_BaseDialog_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:lambda$showImport$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapPatchesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(109);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(110);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[1].o))(ctx, sp[1].o);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapPatchesView_lambda$build$10_arc_struct_Seq_mindustry_mod_data_PatchAsset_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:lambda$build$10", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapPatchesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(85);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@patch.delete.confirm"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_17(ctx);
		auto proxy = (mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_17 *) gcAlloc(ctx, &class_mindustry_editor_data_MapPatchesView_invoke_java_lang_Runnable_17);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapPatchesView_lambda$build$11_arc_struct_Seq_mindustry_mod_data_PatchAsset_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:lambda$build$11", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapPatchesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(86);
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(87);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_reloadPatches_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_reloadPatches_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(88);
	((func_mindustry_editor_data_MapAssetsDialog_rebuild) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_rebuild])(ctx, (frame[2].o));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapPatchesView_lambda$build$8_arc_struct_Seq_mindustry_mod_data_PatchAsset_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:lambda$build$8", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_14);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_data_MapPatchesView_showImport_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_data_MapPatchesView_showImport_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapPatchesView_lambda$build$9_arc_struct_Seq_mindustry_mod_data_PatchAsset_mindustry_editor_data_MapAssetsDialog_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:lambda$build$9", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_R_int])(ctx, (frame[1].o), (frame[2].o));
	((func_mindustry_editor_data_MapPatchesView_addPatch_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_data_MapPatchesView_addPatch_java_lang_String_int])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(80);
	((func_mindustry_editor_data_MapAssetsDialog_rebuild) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_rebuild])(ctx, (frame[3].o));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapPatchesView_lambda$build$7_mindustry_mod_data_PatchAsset(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:lambda$build$7", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapPatchesView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(73);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((mindustry_mod_data_PatchAsset *) NULL_CHECK((frame[0].o)))->F_patch;
	((func_arc_Application_setClipboardText_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_setClipboardText_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(74);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfoFade_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfoFade_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@copied"_j))));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapPatchesView_lambda$build$6_arc_scene_ui_TextButton(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:lambda$build$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapPatchesView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label])(ctx, (frame[0].o));
	((func_arc_scene_ui_Label_setAlignment_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setAlignment_int_int])(ctx, sp[0].o, (8), (8));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapPatchesView_lambda$build$3_mindustry_mod_data_PatchAsset(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:lambda$build$3", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapPatchesView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(59);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"patch.set"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp1 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[4].o);
	jobject temp2 = sp[1].o;
	sp[1].o = sp[0].o;
	jobject temp3 = sp[2].o;
	sp[2].o = temp2;
	jobject temp4 = sp[3].o;
	sp[3].o = temp3;
	sp[4].o = temp4;
	sp[5].o = temp4;
	sp[6].i = temp0;
	sp += 7;
	if (temp1 == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"<unnamed>"_j));
	goto label_2;
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_mod_data_DataAsset *) NULL_CHECK(sp[-1].o))->F_name;
label_2:;
	{
	sp -= 8;
	ARRAY_ACCESS(jobject, sp[4].o, sp[6].i) = sp[7].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(60);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(65);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(66);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[1].o));
	LINE_NUMBER(67);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[1].o));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapPatchesView_lambda$build$4_mindustry_mod_data_PatchAsset_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:lambda$build$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapPatchesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(62);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayPanel;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_16);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(6.0f);
	LINE_NUMBER(64);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapPatchesView_lambda$build$5_mindustry_mod_data_PatchAsset_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:lambda$build$5", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapPatchesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(63);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_data_PatchAsset *) NULL_CHECK((frame[0].o)))->F_patch;
	sp[1].o = (jobject)((func_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\t"_j))), (((jobject) createStringLiteral(ctx, u8"  "_j))));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_monoLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (8));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapPatchesView_lambda$build$0_mindustry_mod_data_PatchAsset(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:lambda$build$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapPatchesView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(41);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@patch.errors"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(42);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_17);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(50);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(51);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[1].o));
	LINE_NUMBER(52);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[1].o));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapPatchesView_lambda$build$1_mindustry_mod_data_PatchAsset_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:lambda$build$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapPatchesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_mod_data_PatchAsset *) NULL_CHECK((frame[0].o)))->F_warnings;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(46);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayPanel;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_18(ctx);
		auto proxy = (mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_18 *) gcAlloc(ctx, &class_mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_18);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(6.0f);
	LINE_NUMBER(48);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(49);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapPatchesView_lambda$build$2_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:lambda$build$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapPatchesView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(47);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\t"_j))), (((jobject) createStringLiteral(ctx, u8"  "_j))));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_monoLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapPatchesView_lambda$buildButtons$0_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:lambda$buildButtons$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_19(ctx);
		auto proxy = (mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_19 *) gcAlloc(ctx, &class_mindustry_editor_data_MapPatchesView_invoke_arc_func_Cons_19);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_data_MapPatchesView_showImport_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_data_MapPatchesView_showImport_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapPatchesView_lambda$buildButtons$1_mindustry_editor_data_MapAssetsDialog_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapPatchesView:lambda$buildButtons$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(22);
	((func_mindustry_editor_data_MapPatchesView_addPatch_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapPatchesView_addPatch_java_lang_String])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(23);
	((func_mindustry_editor_data_MapAssetsDialog_rebuild) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_rebuild])(ctx, (frame[1].o));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_data_MapPatchesView[] {
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
	(void *) M_mindustry_editor_data_MapPatchesView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_data_MapPatchesView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_data_MapPatchesView_showImport_arc_func_Cons,
	(void *) M_mindustry_editor_data_MapPatchesView_addPatch_java_lang_String,
	(void *) M_mindustry_editor_data_MapPatchesView_addPatch_java_lang_String_int,
	(void *) M_mindustry_editor_data_MapPatchesView_countFields_arc_util_serialization_JsonValue_R_int,
	(void *) M_mindustry_editor_data_MapPatchesView_lambda$build$8_arc_struct_Seq_mindustry_mod_data_PatchAsset_mindustry_editor_data_MapAssetsDialog,
	(void *) M_mindustry_editor_data_MapPatchesView_lambda$build$9_arc_struct_Seq_mindustry_mod_data_PatchAsset_mindustry_editor_data_MapAssetsDialog_java_lang_String,
	(void *) M_mindustry_editor_data_MapPatchesView_lambda$buildButtons$0_mindustry_editor_data_MapAssetsDialog,
	(void *) M_mindustry_editor_data_MapPatchesView_lambda$buildButtons$1_mindustry_editor_data_MapAssetsDialog_java_lang_String,
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
	{ "showImport", "(Larc/func/Cons;)V" },
	{ "addPatch", "(Ljava/lang/String;)V" },
	{ "addPatch", "(Ljava/lang/String;I)V" },
	{ "countFields", "(Larc/util/serialization/JsonValue;)I" },
	{ "lambda$build$8", "(Larc/struct/Seq;Lmindustry/mod/data/PatchAsset;Lmindustry/editor/data/MapAssetsDialog;)V" },
	{ "lambda$build$9", "(Larc/struct/Seq;Lmindustry/mod/data/PatchAsset;Lmindustry/editor/data/MapAssetsDialog;Ljava/lang/String;)V" },
	{ "lambda$buildButtons$0", "(Lmindustry/editor/data/MapAssetsDialog;)V" },
	{ "lambda$buildButtons$1", "(Lmindustry/editor/data/MapAssetsDialog;Ljava/lang/String;)V" },
};

static jclass interfaces[] { &class_mindustry_editor_data_AssetView, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_data_MapPatchesView, 0, "()V", 1 },
	{ "buildButtons", (intptr_t) M_mindustry_editor_data_MapPatchesView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_data_MapPatchesView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, "(Lmindustry/editor/data/MapAssetsDialog;Larc/scene/ui/layout/Table;)V", 1 },
	{ "build", (intptr_t) M_mindustry_editor_data_MapPatchesView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_data_MapPatchesView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, "(Lmindustry/editor/data/MapAssetsDialog;Larc/scene/ui/layout/Table;)V", 1 },
	{ "showImport", (intptr_t) M_mindustry_editor_data_MapPatchesView_showImport_arc_func_Cons, VTABLE_mindustry_editor_data_MapPatchesView_showImport_arc_func_Cons, "(Larc/func/Cons;)V", 0 },
	{ "addPatch", (intptr_t) M_mindustry_editor_data_MapPatchesView_addPatch_java_lang_String, VTABLE_mindustry_editor_data_MapPatchesView_addPatch_java_lang_String, "(Ljava/lang/String;)V", 0 },
	{ "addPatch", (intptr_t) M_mindustry_editor_data_MapPatchesView_addPatch_java_lang_String_int, VTABLE_mindustry_editor_data_MapPatchesView_addPatch_java_lang_String_int, "(Ljava/lang/String;I)V", 0 },
	{ "countFields", (intptr_t) M_mindustry_editor_data_MapPatchesView_countFields_arc_util_serialization_JsonValue_R_int, VTABLE_mindustry_editor_data_MapPatchesView_countFields_arc_util_serialization_JsonValue_R_int, "(Larc/util/serialization/JsonValue;)I", 0 },
	{ "lambda$showImport$0", (intptr_t) SM_mindustry_editor_data_MapPatchesView_lambda$showImport$0_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_arc_scene_ui_layout_Table, 0, "(Lmindustry/ui/dialogs/BaseDialog;Larc/func/Cons;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$showImport$1", (intptr_t) SM_mindustry_editor_data_MapPatchesView_lambda$showImport$1_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_arc_scene_ui_layout_Table, 0, "(Lmindustry/ui/dialogs/BaseDialog;Larc/func/Cons;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$showImport$4", (intptr_t) SM_mindustry_editor_data_MapPatchesView_lambda$showImport$4_mindustry_ui_dialogs_BaseDialog_arc_func_Cons, 0, "(Lmindustry/ui/dialogs/BaseDialog;Larc/func/Cons;)V", 4106 },
	{ "lambda$showImport$5", (intptr_t) SM_mindustry_editor_data_MapPatchesView_lambda$showImport$5_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_arc_files_Fi, 0, "(Lmindustry/ui/dialogs/BaseDialog;Larc/func/Cons;Larc/files/Fi;)V", 4106 },
	{ "lambda$showImport$3", (intptr_t) SM_mindustry_editor_data_MapPatchesView_lambda$showImport$3_arc_scene_ui_TextButton_R_boolean, 0, "(Larc/scene/ui/TextButton;)Z", 4106 },
	{ "lambda$showImport$2", (intptr_t) SM_mindustry_editor_data_MapPatchesView_lambda$showImport$2_mindustry_ui_dialogs_BaseDialog_arc_func_Cons, 0, "(Lmindustry/ui/dialogs/BaseDialog;Larc/func/Cons;)V", 4106 },
	{ "lambda$build$10", (intptr_t) SM_mindustry_editor_data_MapPatchesView_lambda$build$10_arc_struct_Seq_mindustry_mod_data_PatchAsset_mindustry_editor_data_MapAssetsDialog, 0, "(Larc/struct/Seq;Lmindustry/mod/data/PatchAsset;Lmindustry/editor/data/MapAssetsDialog;)V", 4106 },
	{ "lambda$build$11", (intptr_t) SM_mindustry_editor_data_MapPatchesView_lambda$build$11_arc_struct_Seq_mindustry_mod_data_PatchAsset_mindustry_editor_data_MapAssetsDialog, 0, "(Larc/struct/Seq;Lmindustry/mod/data/PatchAsset;Lmindustry/editor/data/MapAssetsDialog;)V", 4106 },
	{ "lambda$build$8", (intptr_t) M_mindustry_editor_data_MapPatchesView_lambda$build$8_arc_struct_Seq_mindustry_mod_data_PatchAsset_mindustry_editor_data_MapAssetsDialog, VTABLE_mindustry_editor_data_MapPatchesView_lambda$build$8_arc_struct_Seq_mindustry_mod_data_PatchAsset_mindustry_editor_data_MapAssetsDialog, "(Larc/struct/Seq;Lmindustry/mod/data/PatchAsset;Lmindustry/editor/data/MapAssetsDialog;)V", 4098 },
	{ "lambda$build$9", (intptr_t) M_mindustry_editor_data_MapPatchesView_lambda$build$9_arc_struct_Seq_mindustry_mod_data_PatchAsset_mindustry_editor_data_MapAssetsDialog_java_lang_String, VTABLE_mindustry_editor_data_MapPatchesView_lambda$build$9_arc_struct_Seq_mindustry_mod_data_PatchAsset_mindustry_editor_data_MapAssetsDialog_java_lang_String, "(Larc/struct/Seq;Lmindustry/mod/data/PatchAsset;Lmindustry/editor/data/MapAssetsDialog;Ljava/lang/String;)V", 4098 },
	{ "lambda$build$7", (intptr_t) SM_mindustry_editor_data_MapPatchesView_lambda$build$7_mindustry_mod_data_PatchAsset, 0, "(Lmindustry/mod/data/PatchAsset;)V", 4106 },
	{ "lambda$build$6", (intptr_t) SM_mindustry_editor_data_MapPatchesView_lambda$build$6_arc_scene_ui_TextButton, 0, "(Larc/scene/ui/TextButton;)V", 4106 },
	{ "lambda$build$3", (intptr_t) SM_mindustry_editor_data_MapPatchesView_lambda$build$3_mindustry_mod_data_PatchAsset, 0, "(Lmindustry/mod/data/PatchAsset;)V", 4106 },
	{ "lambda$build$4", (intptr_t) SM_mindustry_editor_data_MapPatchesView_lambda$build$4_mindustry_mod_data_PatchAsset_arc_scene_ui_layout_Table, 0, "(Lmindustry/mod/data/PatchAsset;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$5", (intptr_t) SM_mindustry_editor_data_MapPatchesView_lambda$build$5_mindustry_mod_data_PatchAsset_arc_scene_ui_layout_Table, 0, "(Lmindustry/mod/data/PatchAsset;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$0", (intptr_t) SM_mindustry_editor_data_MapPatchesView_lambda$build$0_mindustry_mod_data_PatchAsset, 0, "(Lmindustry/mod/data/PatchAsset;)V", 4106 },
	{ "lambda$build$1", (intptr_t) SM_mindustry_editor_data_MapPatchesView_lambda$build$1_mindustry_mod_data_PatchAsset_arc_scene_ui_layout_Table, 0, "(Lmindustry/mod/data/PatchAsset;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$2", (intptr_t) SM_mindustry_editor_data_MapPatchesView_lambda$build$2_java_lang_String_arc_scene_ui_layout_Table, 0, "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$buildButtons$0", (intptr_t) M_mindustry_editor_data_MapPatchesView_lambda$buildButtons$0_mindustry_editor_data_MapAssetsDialog, VTABLE_mindustry_editor_data_MapPatchesView_lambda$buildButtons$0_mindustry_editor_data_MapAssetsDialog, "(Lmindustry/editor/data/MapAssetsDialog;)V", 4098 },
	{ "lambda$buildButtons$1", (intptr_t) M_mindustry_editor_data_MapPatchesView_lambda$buildButtons$1_mindustry_editor_data_MapAssetsDialog_java_lang_String, VTABLE_mindustry_editor_data_MapPatchesView_lambda$buildButtons$1_mindustry_editor_data_MapAssetsDialog_java_lang_String, "(Lmindustry/editor/data/MapAssetsDialog;Ljava/lang/String;)V", 4098 },
};

Class class_mindustry_editor_data_MapPatchesView{
		.nativeName = (intptr_t) "mindustry/editor/data/MapPatchesView",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_editor_data_MapPatchesView),
		.classVtable = (intptr_t) vtable_mindustry_editor_data_MapPatchesView,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_data_MapPatchesView,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_data_MapPatchesView,
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
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_data_MapPatchesView = registerClass(&class_mindustry_editor_data_MapPatchesView);

}
