#include "mindustry/editor/data/MapAudioView.h"
#include "arc/func/Prov.h"
#include "mindustry/editor/data/MapAudioView_invoke_arc_func_Floatc_1.h"
#include "arc/func/Boolp.h"
#include "java/lang/Runnable.h"
#include "arc/scene/ui/ProgressBar.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/mod/data/SoundAsset.h"
#include "arc/scene/event/Touchable.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ui/FileChooser.h"
#include "arc/scene/ui/ImageButton.h"
#include "mindustry/mod/data/DataAsset.h"
#include "java/lang/Throwable.h"
#include "arc/func/Boolf.h"
#include "mindustry/editor/data/MapAudioView_invoke_java_lang_Runnable_10.h"
#include "java/lang/Exception.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/editor/data/MapAudioView_invoke_arc_func_Boolf_1.h"
#include "mindustry/editor/data/MapAssetsDialog.h"
#include "mindustry/editor/data/MapAudioView_1.h"
#include "arc/func/Floatc.h"
#include "arc/util/Nullable.h"
#include "arc/scene/ui/Label.h"
#include "arc/assets/AssetManager.h"
#include "mindustry/editor/data/MapAudioView_invoke_arc_func_Boolp_1.h"
#include "java/lang/Object.h"
#include "arc/audio/Music.h"
#include "mindustry/mod/data/DataAssetType.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/editor/data/MapAudioView.h"
#include "arc/audio/AudioBus.h"
#include "mindustry/core/Platform_FileWriter.h"
#include "arc/files/Fi.h"
#include "arc/func/Cons.h"
#include "mindustry/mod/data/MusicAsset.h"
#include "java/lang/String.h"
#include "mindustry/mod/DataManager.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/core/Control.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "mindustry/editor/data/MapAudioView_invoke_java_lang_Runnable_11.h"
#include "mindustry/ui/FileChooser_FileChooserParams.h"
#include "mindustry/editor/data/MapAudioView_invoke_java_lang_Runnable_12.h"
#include "arc/scene/ui/Slider.h"
#include "mindustry/editor/data/MapAudioView_invoke_java_lang_Runnable_13.h"
#include "mindustry/gen/Icon.h"
#include "mindustry/editor/data/MapAudioView_invoke_java_lang_Runnable_8.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/editor/data/MapAudioView_invoke_java_lang_Runnable_9.h"
#include "mindustry/editor/data/MapAudioView_invoke_arc_func_Cons_7.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/editor/data/MapAudioView_invoke_arc_func_Cons_6.h"
#include "mindustry/editor/data/MapAudioView_invoke_arc_func_Cons_5.h"
#include "mindustry/editor/data/MapAudioView_invoke_arc_func_Cons_4.h"
#include "mindustry/editor/data/MapAudioView_invoke_java_lang_Runnable_7.h"
#include "mindustry/ui/Styles.h"
#include "arc/audio/AudioSource.h"
#include "mindustry/editor/data/MapAudioView_invoke_mindustry_core_Platform_FileWriter_1.h"
#include "mindustry/editor/data/AssetView.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "arc/scene/Element.h"
#include "mindustry/editor/data/MapAudioView_invoke_arc_func_Prov_1.h"
#include "arc/audio/Sound.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "java/lang/Class.h"
#include "arc/struct/SnapshotSeq.h"
#include "java/util/Objects.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/audio/SoundControl.h"

extern "C" {


void mark_mindustry_editor_data_MapAudioView(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_data_MapAudioView *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_lastPlaying)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastPlaying)->clazz)->markFunction)((jobject) self->F_lastPlaying, mark, depth + 1);
}

void clinit_mindustry_editor_data_MapAudioView(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_editor_data_MapAudioView_mindustry_mod_data_DataAssetType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAudioView:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapAudioView(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(25);
	((mindustry_editor_data_MapAudioView *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapAudioView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAudioView:build", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(30);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[1].o = (jobject)((mindustry_editor_data_MapAudioView *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(32);
	frame[4].f = (jfloat(50.0f));
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(35);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_mod_data_DataAsset, sp[0].o));
	LINE_NUMBER(36);
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
	LINE_NUMBER(38);
	sp[0].o = (jobject)((func_mindustry_mod_data_DataAsset_getCacheFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_getCacheFile_R_arc_files_Fi])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(39);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[6].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"dp-\u0001"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)((mindustry_editor_data_MapAudioView *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[3].o = (jobject)SF_mindustry_mod_data_DataAssetType_music;
	sp += 2;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	(sp++)->o = ((jobject) &class_arc_audio_Music);
	goto label_10;
label_9:;
	(sp++)->o = ((jobject) &class_arc_audio_Sound);
label_10:;
	{
	sp -= 3;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[8].o = (checkCast(ctx, &class_arc_audio_AudioSource, sp[0].o));
	LINE_NUMBER(41);
	if ((frame[7].o) == nullptr) goto label_12;
	}
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_12;
	{
	jint temp0 = (jint)((func_arc_audio_AudioSource_valid_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_audio_AudioSource_valid_R_boolean])(ctx, (frame[8].o));
	if (temp0 != 0) goto label_13;
	}
	{
	jint temp0 = (jint)((func_arc_audio_AudioSource_isLazy_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_audio_AudioSource_isLazy_R_boolean])(ctx, (frame[8].o));
	if (temp0 != 0) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(42);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_warning;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_graySquarei;
	jfloat temp0 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAudioView_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_editor_data_MapAudioView_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAudioView_invoke_java_lang_Runnable_7);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[4].f));
	goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(44);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_play;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_graySquarei;
	jfloat temp0 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAudioView_invoke_java_lang_Runnable_8(ctx);
		auto proxy = (mindustry_editor_data_MapAudioView_invoke_java_lang_Runnable_8 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAudioView_invoke_java_lang_Runnable_8);
		proxy->F_field1 = (jref) (frame[8].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAudioView_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_editor_data_MapAudioView_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAudioView_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(64);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[4].f));
	}
label_14:;
	{
	LINE_NUMBER(67);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_16;
	}
	(sp++)->f = jfloat(390.0f);
	goto label_17;
label_16:;
	(sp++)->f = jfloat(450.0f);
label_17:;
	{
	sp -= 1;
	frame[9].f = sp[0].f;
	LINE_NUMBER(68);
	sp[0].o = frame[2].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayPanel;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAudioView_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_editor_data_MapAudioView_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAudioView_invoke_arc_func_Cons_5);
		proxy->F_field3 = (frame[9].f);
		proxy->F_field2 = (jref) (frame[8].o);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = frame[9].f;
	jfloat temp1 = frame[4].f;
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(110);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_export;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_graySquarei;
	jfloat temp2 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAudioView_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_editor_data_MapAudioView_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAudioView_invoke_java_lang_Runnable_9);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp2, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[4].f));
	sp += 1;
	if ((frame[7].o) != nullptr) goto label_21;
	}
	INST_ICONST(1);
	goto label_22;
label_21:;
	INST_ICONST(0);
label_22:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(112);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_trash;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_graySquarei;
	jfloat temp0 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAudioView_invoke_java_lang_Runnable_10(ctx);
		auto proxy = (mindustry_editor_data_MapAudioView_invoke_java_lang_Runnable_10 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAudioView_invoke_java_lang_Runnable_10);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	jfloat temp1 = frame[4].f;
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(120);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(121);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_27;
	}
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@none.found"_j))));
	}
label_27:;
	{
	LINE_NUMBER(127);
	sp[0].o = frame[2].o;
	clinit_mindustry_editor_data_MapAudioView$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_data_MapAudioView$1);
	init_mindustry_editor_data_MapAudioView$1_mindustry_editor_data_MapAudioView(ctx, sp[1].o, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapAudioView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAudioView:buildButtons", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(148);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@add"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_add;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAudioView_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_editor_data_MapAudioView_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAudioView_invoke_java_lang_Runnable_11);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(190.0f);
	jfloat temp1 = jfloat(64.0f);
	LINE_NUMBER(180);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapAudioView_lambda$buildButtons$0_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAudioView:lambda$buildButtons$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"ogg"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"mp3"_j)));
	sp[0].o = (jobject)SM_mindustry_ui_FileChooser_open_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAudioView_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_editor_data_MapAudioView_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAudioView_invoke_arc_func_Cons_6);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_FileChooser$FileChooserParams_submitMulti_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_submitMulti_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapAudioView_lambda$buildButtons$1_mindustry_editor_data_MapAssetsDialog_Array1_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAudioView:lambda$buildButtons$1", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(150);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[1].o = (jobject)((mindustry_editor_data_MapAudioView *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(152);
	frame[4].o = (frame[2].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_14:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_15;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(155);
	sp[0].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, (frame[7].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(156);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[1].o = (jobject)((mindustry_editor_data_MapAudioView *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAudioView_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_editor_data_MapAudioView_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAudioView_invoke_arc_func_Boolf_1);
		proxy->F_field1 = (jref) (frame[8].o);
		proxy->F_field0 = (jref) (frame[9].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[10].o = (checkCast(ctx, &class_mindustry_mod_data_DataAsset, sp[0].o));
	LINE_NUMBER(157);
	if ((frame[10].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(158);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"asset.exists"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[10].o)))->F_name;
	sp[5].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[10].o)))->F_path;
	sp[4].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 (\u0001)"_j.string, 2, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(159);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(160);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"dp-\u0001"_j.string, 1, (frame[8].o));
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (((jobject) &class_arc_audio_Music)));
	if (sp[0].o != nullptr) goto label_20;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"dp-\u0001"_j.string, 1, (frame[8].o));
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (((jobject) &class_arc_audio_Sound)));
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
label_20:;
	{
	LINE_NUMBER(161);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"asset.exists.audio"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(0))) = (frame[8].o);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(162);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((mindustry_editor_data_MapAudioView *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_data_DataAssetType_music;
	if (sp[0].o != sp[1].o) goto label_21;
	}
	{
	clinit_mindustry_mod_data_MusicAsset(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_data_MusicAsset);
	init_mindustry_mod_data_MusicAsset(ctx, sp[0].o);
	sp += 1;
	goto label_22;
	}
label_21:;
	{
	clinit_mindustry_mod_data_SoundAsset(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_data_SoundAsset);
	init_mindustry_mod_data_SoundAsset(ctx, sp[0].o);
	sp += 1;
	}
label_22:;
	{
	sp -= 1;
	frame[11].o = sp[0].o;
	LINE_NUMBER(166);
	((func_mindustry_mod_data_DataAsset_setPath_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_setPath_java_lang_String])(ctx, (frame[11].o), (frame[9].o));
	LINE_NUMBER(167);
	sp[0].o = frame[11].o;
	sp[1].o = (jobject)((func_arc_files_Fi_readBytes_R_Array1_byte) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_files_Fi_readBytes_R_Array1_byte])(ctx, (frame[7].o));
	((func_mindustry_mod_data_DataAsset_updateData_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_data_DataAsset_updateData_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(169);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[3].o), (frame[11].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(172);
	goto label_26;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(170);
	frame[8].o = sp[0].o;
	LINE_NUMBER(171);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_Throwable])(ctx, sp[0].o, (frame[8].o));
	}
label_26:;
	{
	LINE_NUMBER(152);
	INST_IINC(6, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, (frame[3].o));
	LINE_NUMBER(176);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_reloadAudio) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_reloadAudio])(ctx, sp[0].o);
	LINE_NUMBER(177);
	((func_mindustry_editor_data_MapAssetsDialog_rebuild) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_rebuild])(ctx, (frame[1].o));
	LINE_NUMBER(178);
	((mindustry_editor_data_MapAudioView *) NULL_CHECK((frame[0].o)))->F_lastPlaying = (jref) (jobject(nullptr));
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_data_MapAudioView_lambda$buildButtons$2_java_lang_String_java_lang_String_mindustry_mod_data_DataAsset_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAudioView:lambda$buildButtons$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapAudioView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(156);
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

void SM_mindustry_editor_data_MapAudioView_lambda$build$10_arc_struct_Seq_mindustry_mod_data_DataAsset_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAudioView:lambda$build$10", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapAudioView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(113);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@asset.delete.confirm"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAudioView_invoke_java_lang_Runnable_12(ctx);
		auto proxy = (mindustry_editor_data_MapAudioView_invoke_java_lang_Runnable_12 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAudioView_invoke_java_lang_Runnable_12);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapAudioView_lambda$build$11_arc_struct_Seq_mindustry_mod_data_DataAsset_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAudioView:lambda$build$11", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapAudioView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(114);
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(115);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_reloadAudio) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_reloadAudio])(ctx, sp[0].o);
	LINE_NUMBER(116);
	((func_mindustry_editor_data_MapAssetsDialog_rebuild) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_rebuild])(ctx, (frame[2].o));
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapAudioView_lambda$build$9_mindustry_mod_data_DataAsset_arc_files_Fi(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAudioView:lambda$build$9", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapAudioView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_path;
	sp[1].o = (jobject)SM_arc_util_Strings_getFileExtension_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAudioView_invoke_mindustry_core_Platform$FileWriter_1(ctx);
		auto proxy = (mindustry_editor_data_MapAudioView_invoke_mindustry_core_Platform$FileWriter_1 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAudioView_invoke_mindustry_core_Platform$FileWriter_1);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_ui_FileChooser_export_java_lang_String_java_lang_String_mindustry_core_Platform$FileWriter(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapAudioView_lambda$build$3_mindustry_mod_data_DataAsset_arc_audio_AudioSource_float_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAudioView:lambda$build$3", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(70);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAudioView_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_editor_data_MapAudioView_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAudioView_invoke_arc_func_Cons_7);
		proxy->F_field2 = (frame[3].f);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = (frame[3].f) / (jfloat(2));
	LINE_NUMBER(84);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[1].o, (32), (95));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"dp-\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(86);
	if ((isInstance(ctx, (frame[2].o), &class_arc_audio_Music)) == 0) goto label_4;
	}
	{
	frame[5].o = (checkCast(ctx, &class_arc_audio_Music, (frame[2].o)));
	LINE_NUMBER(87);
	clinit_arc_scene_ui_Slider(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Slider);
	jfloat temp0 = jfloat(0);
	jfloat temp1 = (jfloat)((func_arc_audio_Music_getLength_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_audio_Music_getLength_R_float])(ctx, (frame[5].o));
	init_arc_scene_ui_Slider_float_float_float_boolean(ctx, sp[0].o, temp0, temp1, (jfloat(0.1f)), (jint(0)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(88);
	sp[0].o = frame[6].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAudioView_invoke_arc_func_Floatc_1(ctx);
		auto proxy = (mindustry_editor_data_MapAudioView_invoke_arc_func_Floatc_1 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAudioView_invoke_arc_func_Floatc_1);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_Slider_moved_arc_func_Floatc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Slider_moved_arc_func_Floatc])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(93);
	sp[0].o = frame[6].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAudioView_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_editor_data_MapAudioView_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAudioView_invoke_arc_func_Boolp_1);
		proxy->F_field2 = (jref) (frame[6].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Slider_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Slider_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(101);
	clinit_arc_scene_ui_Label(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Label);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAudioView_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_editor_data_MapAudioView_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAudioView_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	init_arc_scene_ui_Label_arc_func_Prov(ctx, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(102);
	((func_arc_scene_ui_Label_setAlignment_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_Label_setAlignment_int])(ctx, (frame[7].o), (jint(1)));
	LINE_NUMBER(103);
	sp[0].o = frame[7].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	((func_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(104);
	sp[0].o = frame[7].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(106);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[6].o);
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (frame[7].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(42.0f)));
	}
label_4:;
	LINE_NUMBER(108);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_data_MapAudioView_lambda$build$8_arc_scene_ui_Slider_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAudioView:lambda$build$8", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapAudioView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(101);
	if (((jint)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_visible) == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Slider_getValue_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Slider_getValue_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_mindustry_core_UI_formatTime_float_R_java_lang_String(ctx, (temp0 * (jfloat(60.0f))));
	sp += 1;
	goto label_2;
	}
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_editor_data_MapAudioView_lambda$build$7_arc_audio_Music_arc_scene_ui_Slider_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAudioView:lambda$build$7", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_editor_data_MapAudioView *) NULL_CHECK((frame[0].o)))->F_lastPlaying;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_audio_Music_isPlaying_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_audio_Music_isPlaying_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(95);
	if ((frame[3].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)((func_arc_audio_Music_getPosition_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_audio_Music_getPosition_R_float])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_arc_scene_ui_Slider_setValue_float_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Slider_setValue_float_boolean_R_boolean])(ctx, sp[0].o, temp0, (jint(0)));
	}
label_4:;
	{
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapAudioView_lambda$build$6_arc_audio_Music_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAudioView:lambda$build$6", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_editor_data_MapAudioView *) NULL_CHECK((frame[0].o)))->F_lastPlaying;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(90);
	((func_arc_audio_Music_setPosition_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_audio_Music_setPosition_float])(ctx, (frame[1].o), (frame[2].f));
	}
label_1:;
	LINE_NUMBER(92);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapAudioView_lambda$build$4_mindustry_mod_data_DataAsset_arc_audio_AudioSource_float_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jfloat param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAudioView:lambda$build$4", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapAudioView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(72);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[accent]\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (8));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_ellipsis_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_ellipsis_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(1)));
	sp += 1;
	if ((isInstance(ctx, (frame[1].o), &class_arc_audio_Music)) == 0) goto label_2;
	}
	{
	jfloat temp0 = (frame[2].f) / (jfloat(2));
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	jfloat temp0 = (frame[2].f) * (jfloat(0.8f));
	sp[0].f = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].f);
	LINE_NUMBER(73);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(74);
	if ((frame[1].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(75);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapAudioView_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_editor_data_MapAudioView_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_editor_data_MapAudioView_invoke_java_lang_Runnable_13);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[0].o = (jobject) proxy;
	}
	frame[4].o = sp[0].o;
	LINE_NUMBER(77);
	jint temp0 = (jint)((func_arc_audio_AudioSource_valid_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_audio_AudioSource_valid_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(78);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[4].o)))(ctx, (frame[4].o));
	goto label_6;
	}
label_9:;
	{
	LINE_NUMBER(79);
	if ((isInstance(ctx, (frame[1].o), &class_arc_audio_Sound)) == 0) goto label_6;
	}
	{
	frame[5].o = (checkCast(ctx, &class_arc_audio_Sound, (frame[1].o)));
	LINE_NUMBER(81);
	((func_arc_audio_Sound_checkLazyLoad_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_audio_Sound_checkLazyLoad_java_lang_Runnable])(ctx, (frame[5].o), (frame[4].o));
	}
label_6:;
	LINE_NUMBER(84);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapAudioView_lambda$build$5_arc_scene_ui_layout_Table_arc_audio_AudioSource(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAudioView:lambda$build$5", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapAudioView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_audio_AudioSource_getLength_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_audio_AudioSource_getLength_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_mindustry_core_UI_formatTime_float_R_java_lang_String(ctx, (temp0 * (jfloat(60.0f))));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[lightgray][[\u0001]"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapAudioView_lambda$build$2_arc_audio_AudioSource_arc_scene_ui_ImageButton(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAudioView:lambda$build$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapAudioView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_arc_audio_AudioSource_isLazy_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_AudioSource_isLazy_R_boolean])(ctx, (frame[0].o));
	sp += 1;
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_audio_AudioSource_valid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_AudioSource_valid_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_warning;
	goto label_2;
label_1:;
	{
	jint temp0 = (jint)((func_arc_audio_AudioSource_countPlaying_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_AudioSource_countPlaying_R_int])(ctx, (frame[0].o));
	if (temp0 <= 0) goto label_3;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_pause;
	goto label_2;
label_3:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_play;
label_2:;
	sp -= 2;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapAudioView_lambda$build$1_arc_audio_AudioSource(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAudioView:lambda$build$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	jint temp0 = (jint)((func_arc_audio_AudioSource_valid_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_audio_AudioSource_valid_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_audio_AudioSource_isLazy_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_audio_AudioSource_isLazy_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(46);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@asset.audio.invalid"_j))));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_editor_data_MapAudioView *) NULL_CHECK((frame[0].o)))->F_lastPlaying;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_data_MapAudioView *) NULL_CHECK((frame[0].o)))->F_lastPlaying;
	jint temp0 = (jint)((func_arc_audio_AudioSource_countPlaying_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_AudioSource_countPlaying_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_4;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_editor_data_MapAudioView *) NULL_CHECK((frame[0].o)))->F_lastPlaying;
	((func_arc_audio_AudioSource_stop) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_AudioSource_stop])(ctx, sp[0].o);
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_editor_data_MapAudioView *) NULL_CHECK((frame[0].o)))->F_lastPlaying;
	if (sp[0].o != (frame[1].o)) goto label_4;
	}
	LINE_NUMBER(53);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(57);
	if ((isInstance(ctx, (frame[1].o), &class_arc_audio_Music)) == 0) goto label_8;
	}
	{
	frame[2].o = (checkCast(ctx, &class_arc_audio_Music, (frame[1].o)));
	LINE_NUMBER(58);
	((mindustry_editor_data_MapAudioView *) NULL_CHECK((frame[0].o)))->F_lastPlaying = (jref) (frame[2].o);
	LINE_NUMBER(59);
	((func_arc_audio_Music_play) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_audio_Music_play])(ctx, (frame[2].o));
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(60);
	if ((isInstance(ctx, (frame[1].o), &class_arc_audio_Sound)) == 0) goto label_11;
	}
	{
	frame[3].o = (checkCast(ctx, &class_arc_audio_Sound, (frame[1].o)));
	LINE_NUMBER(61);
	((mindustry_editor_data_MapAudioView *) NULL_CHECK((frame[0].o)))->F_lastPlaying = (jref) (frame[3].o);
	LINE_NUMBER(62);
	sp[0].o = frame[3].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_control;
	sp[1].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[1].o))->F_sound;
	sp[1].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK(sp[1].o))->F_uiBus;
	jint temp0 = (jint)((func_arc_audio_Sound_play_arc_audio_AudioBus_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_play_arc_audio_AudioBus_R_int])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapAudioView_lambda$build$0_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapAudioView:lambda$build$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapAudioView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(42);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp += 1;
	if ((frame[0].o) != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@asset.broken"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@asset.audio.invalid"_j));
label_2:;
	POP_N(2); // Pop method args
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_editor_data_MapAudioView;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lastPlaying
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_editor_data_MapAudioView[] {
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
	(void *) M_mindustry_editor_data_MapAudioView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_data_MapAudioView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_data_MapAudioView_lambda$buildButtons$0_mindustry_editor_data_MapAssetsDialog,
	(void *) M_mindustry_editor_data_MapAudioView_lambda$buildButtons$1_mindustry_editor_data_MapAssetsDialog_Array1_arc_files_Fi,
	(void *) M_mindustry_editor_data_MapAudioView_lambda$build$3_mindustry_mod_data_DataAsset_arc_audio_AudioSource_float_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_data_MapAudioView_lambda$build$7_arc_audio_Music_arc_scene_ui_Slider_R_boolean,
	(void *) M_mindustry_editor_data_MapAudioView_lambda$build$6_arc_audio_Music_float,
	(void *) M_mindustry_editor_data_MapAudioView_lambda$build$1_arc_audio_AudioSource,
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
	{ "lambda$buildButtons$0", "(Lmindustry/editor/data/MapAssetsDialog;)V" },
	{ "lambda$buildButtons$1", "(Lmindustry/editor/data/MapAssetsDialog;[Larc/files/Fi;)V" },
	{ "lambda$build$3", "(Lmindustry/mod/data/DataAsset;Larc/audio/AudioSource;FLarc/scene/ui/layout/Table;)V" },
	{ "lambda$build$7", "(Larc/audio/Music;Larc/scene/ui/Slider;)Z" },
	{ "lambda$build$6", "(Larc/audio/Music;F)V" },
	{ "lambda$build$1", "(Larc/audio/AudioSource;)V" },
};

static jclass interfaces[] { &class_mindustry_editor_data_AssetView, };

static FieldMetadata fields[] {
	{ "type", &class_mindustry_mod_data_DataAssetType, offsetof(mindustry_editor_data_MapAudioView, F_type), "Lmindustry/mod/data/DataAssetType;", 17 },
	{ "lastPlaying", &class_arc_audio_AudioSource, offsetof(mindustry_editor_data_MapAudioView, F_lastPlaying), "Larc/audio/AudioSource;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_data_MapAudioView_mindustry_mod_data_DataAssetType, 0, "(Lmindustry/mod/data/DataAssetType;)V", 1 },
	{ "build", (intptr_t) M_mindustry_editor_data_MapAudioView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_data_MapAudioView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, "(Lmindustry/editor/data/MapAssetsDialog;Larc/scene/ui/layout/Table;)V", 1 },
	{ "buildButtons", (intptr_t) M_mindustry_editor_data_MapAudioView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_data_MapAudioView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, "(Lmindustry/editor/data/MapAssetsDialog;Larc/scene/ui/layout/Table;)V", 1 },
	{ "lambda$buildButtons$0", (intptr_t) M_mindustry_editor_data_MapAudioView_lambda$buildButtons$0_mindustry_editor_data_MapAssetsDialog, VTABLE_mindustry_editor_data_MapAudioView_lambda$buildButtons$0_mindustry_editor_data_MapAssetsDialog, "(Lmindustry/editor/data/MapAssetsDialog;)V", 4098 },
	{ "lambda$buildButtons$1", (intptr_t) M_mindustry_editor_data_MapAudioView_lambda$buildButtons$1_mindustry_editor_data_MapAssetsDialog_Array1_arc_files_Fi, VTABLE_mindustry_editor_data_MapAudioView_lambda$buildButtons$1_mindustry_editor_data_MapAssetsDialog_Array1_arc_files_Fi, "(Lmindustry/editor/data/MapAssetsDialog;[Larc/files/Fi;)V", 4098 },
	{ "lambda$buildButtons$2", (intptr_t) SM_mindustry_editor_data_MapAudioView_lambda$buildButtons$2_java_lang_String_java_lang_String_mindustry_mod_data_DataAsset_R_boolean, 0, "(Ljava/lang/String;Ljava/lang/String;Lmindustry/mod/data/DataAsset;)Z", 4106 },
	{ "lambda$build$10", (intptr_t) SM_mindustry_editor_data_MapAudioView_lambda$build$10_arc_struct_Seq_mindustry_mod_data_DataAsset_mindustry_editor_data_MapAssetsDialog, 0, "(Larc/struct/Seq;Lmindustry/mod/data/DataAsset;Lmindustry/editor/data/MapAssetsDialog;)V", 4106 },
	{ "lambda$build$11", (intptr_t) SM_mindustry_editor_data_MapAudioView_lambda$build$11_arc_struct_Seq_mindustry_mod_data_DataAsset_mindustry_editor_data_MapAssetsDialog, 0, "(Larc/struct/Seq;Lmindustry/mod/data/DataAsset;Lmindustry/editor/data/MapAssetsDialog;)V", 4106 },
	{ "lambda$build$9", (intptr_t) SM_mindustry_editor_data_MapAudioView_lambda$build$9_mindustry_mod_data_DataAsset_arc_files_Fi, 0, "(Lmindustry/mod/data/DataAsset;Larc/files/Fi;)V", 4106 },
	{ "lambda$build$3", (intptr_t) M_mindustry_editor_data_MapAudioView_lambda$build$3_mindustry_mod_data_DataAsset_arc_audio_AudioSource_float_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_data_MapAudioView_lambda$build$3_mindustry_mod_data_DataAsset_arc_audio_AudioSource_float_arc_scene_ui_layout_Table, "(Lmindustry/mod/data/DataAsset;Larc/audio/AudioSource;FLarc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$8", (intptr_t) SM_mindustry_editor_data_MapAudioView_lambda$build$8_arc_scene_ui_Slider_R_java_lang_CharSequence, 0, "(Larc/scene/ui/Slider;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$build$7", (intptr_t) M_mindustry_editor_data_MapAudioView_lambda$build$7_arc_audio_Music_arc_scene_ui_Slider_R_boolean, VTABLE_mindustry_editor_data_MapAudioView_lambda$build$7_arc_audio_Music_arc_scene_ui_Slider_R_boolean, "(Larc/audio/Music;Larc/scene/ui/Slider;)Z", 4098 },
	{ "lambda$build$6", (intptr_t) M_mindustry_editor_data_MapAudioView_lambda$build$6_arc_audio_Music_float, VTABLE_mindustry_editor_data_MapAudioView_lambda$build$6_arc_audio_Music_float, "(Larc/audio/Music;F)V", 4098 },
	{ "lambda$build$4", (intptr_t) SM_mindustry_editor_data_MapAudioView_lambda$build$4_mindustry_mod_data_DataAsset_arc_audio_AudioSource_float_arc_scene_ui_layout_Table, 0, "(Lmindustry/mod/data/DataAsset;Larc/audio/AudioSource;FLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$5", (intptr_t) SM_mindustry_editor_data_MapAudioView_lambda$build$5_arc_scene_ui_layout_Table_arc_audio_AudioSource, 0, "(Larc/scene/ui/layout/Table;Larc/audio/AudioSource;)V", 4106 },
	{ "lambda$build$2", (intptr_t) SM_mindustry_editor_data_MapAudioView_lambda$build$2_arc_audio_AudioSource_arc_scene_ui_ImageButton, 0, "(Larc/audio/AudioSource;Larc/scene/ui/ImageButton;)V", 4106 },
	{ "lambda$build$1", (intptr_t) M_mindustry_editor_data_MapAudioView_lambda$build$1_arc_audio_AudioSource, VTABLE_mindustry_editor_data_MapAudioView_lambda$build$1_arc_audio_AudioSource, "(Larc/audio/AudioSource;)V", 4098 },
	{ "lambda$build$0", (intptr_t) SM_mindustry_editor_data_MapAudioView_lambda$build$0_arc_files_Fi, 0, "(Larc/files/Fi;)V", 4106 },
};

Class class_mindustry_editor_data_MapAudioView{
		.nativeName = (intptr_t) "mindustry/editor/data/MapAudioView",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_editor_data_MapAudioView),
		.classVtable = (intptr_t) vtable_mindustry_editor_data_MapAudioView,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_data_MapAudioView,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_editor_data_MapAudioView,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_data_MapAudioView = registerClass(&class_mindustry_editor_data_MapAudioView);

}
