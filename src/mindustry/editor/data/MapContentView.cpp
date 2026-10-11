#include "mindustry/editor/data/MapContentView.h"
#include "mindustry/editor/data/MapContentView_invoke_java_lang_Runnable_27.h"
#include "mindustry/editor/data/MapContentView_invoke_java_lang_Runnable_28.h"
#include "mindustry/editor/data/MapContentView_invoke_java_lang_Runnable_25.h"
#include "arc/func/Prov.h"
#include "mindustry/editor/data/MapContentView_invoke_java_lang_Runnable_26.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Boolp_1.h"
#include "mindustry/editor/data/MapContentView_invoke_java_lang_Runnable_29.h"
#include "arc/func/Boolp.h"
#include "arc/graphics/Color.h"
#include "arc/scene/ui/TextField_TextFieldValidator.h"
#include "java/lang/Runnable.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_scene_ui_TextField_TextFieldValidator_1.h"
#include "arc/struct/Seq.h"
#include "mindustry/editor/data/MapContentView_invoke_java_lang_Runnable_30.h"
#include "mindustry/editor/data/MapContentView_invoke_java_lang_Runnable_31.h"
#include "mindustry/editor/data/MapContentView_invoke_java_lang_Runnable_34.h"
#include "mindustry/editor/data/MapContentView_invoke_java_lang_Runnable_35.h"
#include "arc/func/Boolf.h"
#include "mindustry/editor/data/MapContentView_invoke_java_lang_Runnable_32.h"
#include "mindustry/editor/data/MapContentView_invoke_java_lang_Runnable_33.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/editor/data/MapContentView_invoke_java_lang_Runnable_19.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/editor/data/MapContentView_invoke_java_lang_Runnable_20.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/editor/data/MapContentView_invoke_java_lang_Runnable_23.h"
#include "mindustry/editor/data/MapContentView_invoke_mindustry_core_Platform_FileWriter_1.h"
#include "mindustry/editor/data/MapContentView_invoke_java_lang_Runnable_24.h"
#include "mindustry/editor/data/MapContentView_invoke_java_lang_Runnable_21.h"
#include "mindustry/editor/data/MapContentView_invoke_java_lang_Runnable_22.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Cons_24.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Cons_23.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Cons_22.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Cons_21.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Cons_28.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Cons_27.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Cons_26.h"
#include "arc/scene/ui/TextField_TextFieldFilter.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Cons_25.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "java/util/regex/Matcher.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Cons_29.h"
#include "arc/func/Cons.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Cons_20.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "mindustry/mod/data/ContentAsset.h"
#include "mindustry/ui/FileChooser_FileChooserParams.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/editor/data/MapContentView_invoke_java_lang_Runnable_36.h"
#include "mindustry/editor/data/MapContentView_invoke_java_lang_Runnable_37.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Cons_17.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Cons_19.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Cons_18.h"
#include "mindustry/ui/Styles.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "mindustry/Vars.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Boolf_8.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Boolf_9.h"
#include "arc/scene/ui/TextField.h"
#include "mindustry/editor/data/MapContentView.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Boolf_5.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Boolf_6.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Boolf_7.h"
#include "java/util/regex/Pattern.h"
#include "arc/scene/event/Touchable.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ctype/MappableContent.h"
#include "arc/scene/ui/TextButton.h"
#include "mindustry/ui/FileChooser.h"
#include "arc/scene/ui/ImageButton.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_scene_ui_TextField_TextFieldFilter_1.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Cons_33.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Cons_32.h"
#include "mindustry/editor/data/MapAssetsDialog.h"
#include "arc/scene/ui/Label.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Prov_3.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Prov_2.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Cons_31.h"
#include "mindustry/editor/data/MapContentView_invoke_arc_func_Cons_30.h"
#include "mindustry/core/Platform_FileWriter.h"
#include "arc/files/Fi.h"
#include "arc/Application.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "mindustry/mod/DataManager.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/Enum.h"
#include "mindustry/editor/data/AssetView.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/ctype/ContentType.h"
#include "arc/struct/SnapshotSeq.h"
#include "java/util/Objects.h"
#include "mindustry/core/GameState.h"

extern "C" {

jobject SF_mindustry_editor_data_MapContentView_unsafeNamePattern;
jobject SF_mindustry_editor_data_MapContentView_contentIcons;

void mark_mindustry_editor_data_MapContentView(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_editor_data_MapContentView_unsafeNamePattern)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_data_MapContentView_unsafeNamePattern)->clazz)->markFunction)((jobject) SF_mindustry_editor_data_MapContentView_unsafeNamePattern, mark, depth + 1);
		if (SF_mindustry_editor_data_MapContentView_contentIcons)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_data_MapContentView_contentIcons)->clazz)->markFunction)((jobject) SF_mindustry_editor_data_MapContentView_contentIcons, mark, depth + 1);
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
	auto self = (mindustry_editor_data_MapContentView *) object;
}

void init_mindustry_editor_data_MapContentView(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapContentView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:build", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(39);
	frame[3].f = (jfloat(50.0f));
	LINE_NUMBER(41);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getContent_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getContent_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(43);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(45);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(46);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[4].o));
	frame[6].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_mod_data_ContentAsset, sp[0].o));
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK((frame[1].o)))->F_searchString;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[7].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_editor_data_MapAssetsDialog *) NULL_CHECK((frame[1].o)))->F_searchString;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_8;
	}
	goto label_5;
label_8:;
	{
	LINE_NUMBER(49);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[7].o)))->F_type;
	if (sp[0].o == sp[1].o) goto label_9;
	}
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[7].o)))->F_type;
	frame[5].o = sp[0].o;
	LINE_NUMBER(51);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_17);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jint temp0 = 6;
	LINE_NUMBER(56);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_9:;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[7].o)))->F_warnings;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(60);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_warning;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_graySquarei;
	jfloat temp0 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_19(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_19 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_19);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	jfloat temp1 = frame[3].f;
	LINE_NUMBER(80);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[3].f));
	}
label_16:;
	{
	LINE_NUMBER(85);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[7].o)))->F_content;
	frame[9].o = sp[1].o;
	sp += 1;
	if ((isInstance(ctx, (frame[9].o), &class_mindustry_ctype_UnlockableContent)) == 0) goto label_17;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, (frame[9].o)));
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[8].o)))->F_uiIcon;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[8].o)))->F_uiIcon;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[8].o)))->F_fullIcon;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_17;
	}
label_19:;
	{
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[8].o)))->F_uiIcon;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[1].o);
	sp[1].o = sp[0].o;
	sp += 2;
	if (temp0 == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[8].o)))->F_uiIcon;
	sp += 1;
	goto label_21;
	}
label_20:;
	INST_ALOAD(8);
	sp[-1].o = (jobject) ((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[-1].o))->F_fullIcon;
label_21:;
	POP_N(2); // Pop method args
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[0].o, sp[1].o);
	goto label_22;
label_17:;
	{
	LINE_NUMBER(86);
	clinit_mindustry_editor_data_MapContentView(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_data_MapContentView_contentIcons;
	sp[1].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[7].o)))->F_type;
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_warning;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = checkCast(ctx, &class_arc_scene_style_Drawable, sp[0].o);
	sp += 1;
	}
label_22:;
	{
	sp -= 2;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_graySquarei;
	jfloat temp0 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_20(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_20 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_20);
		sp[3].o = (jobject) proxy;
	}
	LINE_NUMBER(85);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	LINE_NUMBER(86);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_touchable_arc_scene_event_Touchable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_touchable_arc_scene_event_Touchable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[3].f));
	LINE_NUMBER(88);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[7].o)))->F_name;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[3].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[7].o)))->F_type;
	sp[3].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[3].o);
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"content.\u0001"_j.string, 1, sp[3].o);
	sp[2].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[2].o, sp[3].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[accent]\u0001\n[lightgray]\u0001"_j.string, 2, sp[1].o, sp[2].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_grayt;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_21(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_21 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_21);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(98);
	sp += 1;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_27;
	}
	(sp++)->f = jfloat(390.0f);
	goto label_28;
label_27:;
	(sp++)->f = jfloat(450.0f);
label_28:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].f, (frame[3].f));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_18(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Cons_18 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_18);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(102);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_refresh;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_graySquarei;
	jfloat temp0 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_22(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_22 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_22);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	jfloat temp1 = frame[3].f;
	LINE_NUMBER(134);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(136);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_export;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_graySquarei;
	jfloat temp2 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_23(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_23 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_23);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp2, sp[3].o);
	jfloat temp3 = frame[3].f;
	LINE_NUMBER(159);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp3);
	LINE_NUMBER(161);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_trash;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_graySquarei;
	jfloat temp4 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_24(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_24 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_24);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp4, sp[3].o);
	jfloat temp5 = frame[3].f;
	LINE_NUMBER(168);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp5);
	LINE_NUMBER(170);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(171);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_37;
	}
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@none.found"_j))));
	}
label_37:;
	LINE_NUMBER(176);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapContentView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:buildButtons", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(180);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@add"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_add;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_25(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_25 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_25);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(190.0f)), (jfloat(64.0f)));
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapContentView_addContent_mindustry_editor_data_MapAssetsDialog_mindustry_ctype_ContentType_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:addContent", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(184);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_26(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_26 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_26);
		proxy->F_field3 = (jref) (frame[1].o);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_loadAnd_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_loadAnd_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapContentView_showImport_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:showImport", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_ctype_ContentType, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_item;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	frame[2].o = sp[0].o;
	LINE_NUMBER(195);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	frame[3].o = sp[0].o;
	LINE_NUMBER(197);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@asset.content.add"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(198);
	((func_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean])(ctx, (frame[4].o), (jint(0)));
	LINE_NUMBER(199);
	((func_mindustry_ui_dialogs_BaseDialog_closeOnBack) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_closeOnBack])(ctx, (frame[4].o));
	LINE_NUMBER(200);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[4].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@name"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(201);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[4].o)))->F_cont;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8""_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_19(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Cons_19 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_19);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_20(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Cons_20 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_20);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(202);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = jfloat(400.0f);
	LINE_NUMBER(206);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[5].o = (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o));
	LINE_NUMBER(207);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[4].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(209);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[4].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@asset.content.type"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(210);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[4].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_21(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Cons_21 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_21);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(223);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[4].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(225);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[4].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Prov_2);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(2)));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Boolp_1);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(227);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[4].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@cancel"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_cancel;
	sp[3].o = frame[4].o;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_27(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_27 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_27);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(170.0f)), (jfloat(64.0f)));
	LINE_NUMBER(229);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[4].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@asset.content.import.file"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_fileText;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_28(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_28 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_28);
		proxy->F_field4 = (jref) (frame[5].o);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp2 = jfloat(200.0f);
	jfloat temp3 = jfloat(64.0f);
	LINE_NUMBER(233);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2, temp3);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Boolf_5);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(235);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[4].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@asset.content.import.clipboard"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_copy;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_29(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_29 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_29);
		proxy->F_field4 = (jref) (frame[5].o);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp4 = jfloat(200.0f);
	jfloat temp5 = jfloat(64.0f);
	LINE_NUMBER(241);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp4, temp5);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Boolf_6);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(242);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[4].o));
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_data_MapContentView_isSafeContentName_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:isSafeContentName", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(246);
	jint temp0 = (jint)SM_arc_util_Strings_isSafeFilename_java_lang_String_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_editor_data_MapContentView(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_data_MapContentView_unsafeNamePattern;
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, sp[0].o, (frame[0].o));
	jint temp0 = (jint)((func_java_util_regex_Matcher_find_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_find_R_boolean])(ctx, sp[0].o);
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

jbool SM_mindustry_editor_data_MapContentView_lambda$showImport$15_arc_scene_ui_TextField_Array1_boolean_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$showImport$15", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (jint(0)))) != 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[0].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[0].o))(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_2;
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

void M_mindustry_editor_data_MapContentView_lambda$showImport$14_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_Array1_mindustry_ctype_ContentType_arc_scene_ui_TextField(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$showImport$14", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(236);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[0].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[0].o))(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(237);
	if ((frame[5].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(239);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(240);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)));
	sp[3].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, (frame[4].o));
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.json"_j.string, 1, sp[3].o);
	((func_mindustry_editor_data_MapContentView_addContent_mindustry_editor_data_MapAssetsDialog_mindustry_ctype_ContentType_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_data_MapContentView_addContent_mindustry_editor_data_MapAssetsDialog_mindustry_ctype_ContentType_java_lang_String_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[5].o));
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_data_MapContentView_lambda$showImport$13_arc_scene_ui_TextField_Array1_boolean_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$showImport$13", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (jint(0)))) == 0) goto label_2;
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

void M_mindustry_editor_data_MapContentView_lambda$showImport$11_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_Array1_mindustry_ctype_ContentType_arc_scene_ui_TextField(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$showImport$11", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"json"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"json5"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"hjson"_j)));
	sp[0].o = (jobject)SM_mindustry_ui_FileChooser_open_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_22(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Cons_22 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_22);
		proxy->F_field4 = (jref) (frame[4].o);
		proxy->F_field3 = (jref) (frame[3].o);
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

void M_mindustry_editor_data_MapContentView_lambda$showImport$12_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_Array1_mindustry_ctype_ContentType_arc_scene_ui_TextField_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$showImport$12", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(230);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(231);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)));
	sp[3].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, (frame[4].o));
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.json"_j.string, 1, sp[3].o);
	sp[4].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[5].o));
	((func_mindustry_editor_data_MapContentView_addContent_mindustry_editor_data_MapAssetsDialog_mindustry_ctype_ContentType_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_data_MapContentView_addContent_mindustry_editor_data_MapAssetsDialog_mindustry_ctype_ContentType_java_lang_String_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(232);
	((func_mindustry_editor_data_MapAssetsDialog_rebuild) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_rebuild])(ctx, (frame[2].o));
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_data_MapContentView_lambda$showImport$10_Array1_boolean_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$showImport$10", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0))));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_data_MapContentView_lambda$showImport$9_arc_scene_ui_TextField_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$showImport$9", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(225);
	jint temp0 = (jint)((func_arc_scene_ui_TextField_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_isValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@asset.content.badname"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@asset.content.exists"_j));
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$showImport$4_Array1_mindustry_ctype_ContentType_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$showImport$4", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(211);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayPanel;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_23(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Cons_23 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_23);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(50.0f);
	LINE_NUMBER(214);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(160.0f)));
	LINE_NUMBER(216);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)), (jfloat(50.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(218);
	clinit_mindustry_mod_data_ContentAsset(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_data_ContentAsset_loadableContent;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_7;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(219);
	sp[0].o = frame[1].o;
	clinit_mindustry_editor_data_MapContentView(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_data_MapContentView_contentIcons;
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, (frame[5].o));
	sp[1].o = checkCast(ctx, &class_arc_scene_style_Drawable, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_grayTogglei;
	jfloat temp0 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_30(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_30 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_30);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Boolf_7);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(50.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[1].o = (jobject)((func_mindustry_ctype_ContentType_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_ctype_ContentType_name_R_java_lang_String])(ctx, (frame[5].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@content.\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(218);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(221);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_data_MapContentView_lambda$showImport$8_Array1_mindustry_ctype_ContentType_mindustry_ctype_ContentType_arc_scene_ui_ImageButton_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$showImport$8", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(219);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))) != (frame[1].o)) goto label_1;
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

void SM_mindustry_editor_data_MapContentView_lambda$showImport$7_Array1_mindustry_ctype_ContentType_mindustry_ctype_ContentType(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$showImport$7", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(219);
	ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))) = (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$showImport$5_Array1_mindustry_ctype_ContentType_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$showImport$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(8.0f)));
	LINE_NUMBER(213);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Prov_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_data_MapContentView_lambda$showImport$6_Array1_mindustry_ctype_ContentType_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$showImport$6", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((func_mindustry_ctype_ContentType_name_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_mindustry_ctype_ContentType_name_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"@content.\u0001"_j.string, 1, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$showImport$1_Array1_boolean_arc_scene_ui_TextField(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$showImport$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(203);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_scene_ui_TextField$TextFieldFilter_1(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_scene_ui_TextField$TextFieldFilter_1 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_scene_ui_TextField$TextFieldFilter_1);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_TextField_setFilter_arc_scene_ui_TextField$TextFieldFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setFilter_arc_scene_ui_TextField$TextFieldFilter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(204);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_scene_ui_TextField$TextFieldValidator_1(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_scene_ui_TextField$TextFieldValidator_1 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_scene_ui_TextField$TextFieldValidator_1);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_TextField_setValidator_arc_scene_ui_TextField$TextFieldValidator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setValidator_arc_scene_ui_TextField$TextFieldValidator])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(205);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_31(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_31 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_31);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_TextField_changed_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_changed_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$showImport$3_Array1_boolean_arc_scene_ui_TextField(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$showImport$3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(205);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[2].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_byName_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_byName_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[1].o, sp[2].o);
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp += 2;
	if (temp1 != nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_scene_ui_TextField_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TextField_isValid_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	INST_BASTORE();
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_data_MapContentView_lambda$showImport$2_arc_scene_ui_TextField_char_R_boolean(jcontext ctx, jobject param0, jchar param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$showImport$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(203);
	jint temp0 = (jint)SM_java_lang_Character_isWhitespace_char_R_boolean(ctx, (frame[1].i));
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

void SM_mindustry_editor_data_MapContentView_lambda$showImport$0_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$showImport$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	LINE_NUMBER(201);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$addContent$0_java_lang_String_mindustry_ctype_ContentType_java_lang_String_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$addContent$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(185);
	clinit_mindustry_mod_data_ContentAsset(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_data_ContentAsset);
	init_mindustry_mod_data_ContentAsset_java_lang_String_mindustry_ctype_ContentType_java_lang_String(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(186);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getContent_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getContent_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(187);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_reloadContent_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_reloadContent_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(188);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_regenerateContentSprites_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_regenerateContentSprites_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(189);
	((func_mindustry_editor_data_MapAssetsDialog_rebuild) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_rebuild])(ctx, (frame[3].o));
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_data_MapContentView_lambda$buildButtons$0_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$buildButtons$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(180);
	((func_mindustry_editor_data_MapContentView_showImport_mindustry_editor_data_MapAssetsDialog) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapContentView_showImport_mindustry_editor_data_MapAssetsDialog])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$build$25_arc_struct_Seq_mindustry_mod_data_ContentAsset_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$25", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(162);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@asset.delete.confirm"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_32(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_32 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_32);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$build$26_arc_struct_Seq_mindustry_mod_data_ContentAsset_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$26", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(163);
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(164);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[1].o)))->F_content;
	((func_mindustry_core_ContentLoader_remove_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_remove_mindustry_ctype_Content])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(165);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_reloadContent_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_reloadContent_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(166);
	((func_mindustry_editor_data_MapAssetsDialog_rebuild) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_rebuild])(ctx, (frame[2].o));
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$build$18_mindustry_mod_data_ContentAsset(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$18", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(137);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.export"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(138);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[1].o));
	LINE_NUMBER(139);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_24(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Cons_24 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_24);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(158);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[1].o));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$build$19_mindustry_ui_dialogs_BaseDialog_mindustry_mod_data_ContentAsset_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$19", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o), (jfloat(10.0f)));
	LINE_NUMBER(141);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_25(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Cons_25 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_25);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$build$20_mindustry_ui_dialogs_BaseDialog_mindustry_mod_data_ContentAsset_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$20", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(142);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_flatt;
	frame[3].o = sp[0].o;
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(280.0f)), (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(144);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(145);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@copy.clipboard"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_copy;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_33(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_33 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_33);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(149);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Boolf_8);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(150);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(151);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@export.file"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_export;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_34(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_34 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_34);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp1 = jfloat(12.0f);
	LINE_NUMBER(154);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(155);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$build$23_mindustry_ui_dialogs_BaseDialog_mindustry_mod_data_ContentAsset(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$23", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(152);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"json"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_mindustry_core_Platform$FileWriter_1(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_mindustry_core_Platform$FileWriter_1 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_mindustry_core_Platform$FileWriter_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_ui_FileChooser_export_java_lang_String_java_lang_String_mindustry_core_Platform$FileWriter(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$build$24_mindustry_mod_data_ContentAsset_arc_files_Fi(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$24", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(153);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[0].o)))->F_data;
	((func_arc_files_Fi_writeString_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_writeString_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_data_MapContentView_lambda$build$22_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$22", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(149);
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

void SM_mindustry_editor_data_MapContentView_lambda$build$21_mindustry_ui_dialogs_BaseDialog_mindustry_mod_data_ContentAsset(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$21", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(146);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(147);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[1].o)))->F_data;
	((func_arc_Application_setClipboardText_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_setClipboardText_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(148);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfoFade_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfoFade_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@copied"_j))));
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$build$9_mindustry_mod_data_ContentAsset_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$9", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(103);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_26(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Cons_26 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_26);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	frame[2].o = sp[0].o;
	LINE_NUMBER(112);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.import"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(113);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[3].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_27(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Cons_27 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_27);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(132);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[3].o));
	LINE_NUMBER(133);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[3].o));
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$build$12_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$12", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o), (jfloat(10.0f)));
	LINE_NUMBER(115);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_28(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Cons_28 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_28);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$build$13_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$13", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(116);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_flatt;
	frame[3].o = sp[0].o;
	LINE_NUMBER(117);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(280.0f)), (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(119);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@load.clipboard"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_copy;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_35(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_35 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_35);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Boolf_9);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(123);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(124);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@import.file"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_download;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_36(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_36 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_36);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp1 = jfloat(12.0f);
	LINE_NUMBER(127);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(128);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$build$16_mindustry_ui_dialogs_BaseDialog_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$16", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"json"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"hjson"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"json5"_j)));
	sp[0].o = (jobject)SM_mindustry_ui_FileChooser_open_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_29(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Cons_29 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_29);
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

void SM_mindustry_editor_data_MapContentView_lambda$build$17_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_arc_files_Fi(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$17", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(125);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(126);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[2].o));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_data_MapContentView_lambda$build$15_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$15", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(122);
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

void SM_mindustry_editor_data_MapContentView_lambda$build$14_mindustry_ui_dialogs_BaseDialog_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$14", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(120);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(121);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[1].o))(ctx, sp[1].o);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$build$10_mindustry_mod_data_ContentAsset_mindustry_editor_data_MapAssetsDialog_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$10", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(104);
	((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[0].o)))->F_data = (jref) (frame[2].o);
	LINE_NUMBER(105);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_37(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_37 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_java_lang_Runnable_37);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_loadAnd_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_loadAnd_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$build$11_mindustry_editor_data_MapAssetsDialog(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$11", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(106);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_reloadContent_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_reloadContent_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(107);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_regenerateContentSprites_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_regenerateContentSprites_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(108);
	((func_mindustry_editor_data_MapAssetsDialog_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_data_MapAssetsDialog_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$build$8_arc_scene_ui_TextButton(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label])(ctx, (frame[0].o));
	((func_arc_scene_ui_Label_setAlignment_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setAlignment_int_int])(ctx, sp[0].o, (8), (8));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$build$5_mindustry_mod_data_ContentAsset(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$5", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(89);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_name;
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(90);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_30(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Cons_30 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_30);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(95);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(96);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[1].o));
	LINE_NUMBER(97);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[1].o));
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$build$6_mindustry_mod_data_ContentAsset_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$6", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(92);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayPanel;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_31(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Cons_31 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_31);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(6.0f);
	LINE_NUMBER(94);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$build$7_mindustry_mod_data_ContentAsset_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$7", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(93);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = (jobject)((func_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\t"_j))), (((jobject) createStringLiteral(ctx, u8"  "_j))));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_monoLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (8));
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$build$4(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$4", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	LINE_NUMBER(86);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$build$1_mindustry_mod_data_ContentAsset(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(61);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@asset.content.errors"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(62);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_32(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Cons_32 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_32);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(78);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[1].o));
	LINE_NUMBER(79);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[1].o));
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$build$2_mindustry_mod_data_ContentAsset_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[0].o)))->F_warnings;
	frame[2].o = sp[0].o;
	LINE_NUMBER(66);
	if (((jint)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[0].o)))->F_errored) == 0) goto label_3;
	}
	{
	LINE_NUMBER(67);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(68);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\u26a0 This content has critical errors, and cannot be used until the errors are fixed."_j))));
	LINE_NUMBER(69);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[0].o)))->F_warnings;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(73);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayPanel;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_33(ctx);
		auto proxy = (mindustry_editor_data_MapContentView_invoke_arc_func_Cons_33 *) gcAlloc(ctx, &class_mindustry_editor_data_MapContentView_invoke_arc_func_Cons_33);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(6.0f);
	LINE_NUMBER(75);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(76);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(77);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$build$3_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(74);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\t"_j))), (((jobject) createStringLiteral(ctx, u8"  "_j))));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_monoLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_data_MapContentView_lambda$build$0_mindustry_mod_data_ContentAsset_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:lambda$build$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(53);
	sp[0].o = frame[1].o;
	clinit_mindustry_editor_data_MapContentView(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_data_MapContentView_contentIcons;
	sp[2].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (checkCast(ctx, &class_arc_scene_style_Drawable, sp[1].o)));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(24.0f)));
	LINE_NUMBER(54);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_ctype_ContentType_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_ContentType_name_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@content.\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(12.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(55);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_editor_data_MapContentView(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapContentView:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapContentView(ctx);
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8"[\\[\\]{}`!@#$%^&*();:,]"_j))));
	clinit_mindustry_editor_data_MapContentView(ctx);
	SF_mindustry_editor_data_MapContentView_unsafeNamePattern = sp[0].o;
	LINE_NUMBER(27);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (14));
	jint temp0 = jint(0);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_item;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_box;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_liquid;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_liquid;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_units;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_block;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_distribution;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_planet;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_planet;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_weather;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_drizzle;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_status;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_power;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_ObjectMap_of_Array1_java_lang_Object_R_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_mindustry_editor_data_MapContentView(ctx);
	SF_mindustry_editor_data_MapContentView_contentIcons = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_data_MapContentView[] {
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
	(void *) M_mindustry_editor_data_MapContentView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_data_MapContentView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_data_MapContentView_addContent_mindustry_editor_data_MapAssetsDialog_mindustry_ctype_ContentType_java_lang_String_java_lang_String,
	(void *) M_mindustry_editor_data_MapContentView_showImport_mindustry_editor_data_MapAssetsDialog,
	(void *) M_mindustry_editor_data_MapContentView_lambda$showImport$14_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_Array1_mindustry_ctype_ContentType_arc_scene_ui_TextField,
	(void *) M_mindustry_editor_data_MapContentView_lambda$showImport$11_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_Array1_mindustry_ctype_ContentType_arc_scene_ui_TextField,
	(void *) M_mindustry_editor_data_MapContentView_lambda$showImport$12_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_Array1_mindustry_ctype_ContentType_arc_scene_ui_TextField_arc_files_Fi,
	(void *) M_mindustry_editor_data_MapContentView_lambda$buildButtons$0_mindustry_editor_data_MapAssetsDialog,
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
	{ "addContent", "(Lmindustry/editor/data/MapAssetsDialog;Lmindustry/ctype/ContentType;Ljava/lang/String;Ljava/lang/String;)V" },
	{ "showImport", "(Lmindustry/editor/data/MapAssetsDialog;)V" },
	{ "lambda$showImport$14", "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/editor/data/MapAssetsDialog;[Lmindustry/ctype/ContentType;Larc/scene/ui/TextField;)V" },
	{ "lambda$showImport$11", "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/editor/data/MapAssetsDialog;[Lmindustry/ctype/ContentType;Larc/scene/ui/TextField;)V" },
	{ "lambda$showImport$12", "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/editor/data/MapAssetsDialog;[Lmindustry/ctype/ContentType;Larc/scene/ui/TextField;Larc/files/Fi;)V" },
	{ "lambda$buildButtons$0", "(Lmindustry/editor/data/MapAssetsDialog;)V" },
};

static jclass interfaces[] { &class_mindustry_editor_data_AssetView, };

static FieldMetadata fields[] {
	{ "unsafeNamePattern", &class_java_util_regex_Pattern, (intptr_t) &SF_mindustry_editor_data_MapContentView_unsafeNamePattern, "Ljava/util/regex/Pattern;", 26 },
	{ "contentIcons", &class_arc_struct_ObjectMap, (intptr_t) &SF_mindustry_editor_data_MapContentView_contentIcons, "Larc/struct/ObjectMap;", 8 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_data_MapContentView, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_editor_data_MapContentView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_data_MapContentView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, "(Lmindustry/editor/data/MapAssetsDialog;Larc/scene/ui/layout/Table;)V", 1 },
	{ "buildButtons", (intptr_t) M_mindustry_editor_data_MapContentView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_data_MapContentView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, "(Lmindustry/editor/data/MapAssetsDialog;Larc/scene/ui/layout/Table;)V", 1 },
	{ "addContent", (intptr_t) M_mindustry_editor_data_MapContentView_addContent_mindustry_editor_data_MapAssetsDialog_mindustry_ctype_ContentType_java_lang_String_java_lang_String, VTABLE_mindustry_editor_data_MapContentView_addContent_mindustry_editor_data_MapAssetsDialog_mindustry_ctype_ContentType_java_lang_String_java_lang_String, "(Lmindustry/editor/data/MapAssetsDialog;Lmindustry/ctype/ContentType;Ljava/lang/String;Ljava/lang/String;)V", 0 },
	{ "showImport", (intptr_t) M_mindustry_editor_data_MapContentView_showImport_mindustry_editor_data_MapAssetsDialog, VTABLE_mindustry_editor_data_MapContentView_showImport_mindustry_editor_data_MapAssetsDialog, "(Lmindustry/editor/data/MapAssetsDialog;)V", 0 },
	{ "isSafeContentName", (intptr_t) SM_mindustry_editor_data_MapContentView_isSafeContentName_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 8 },
	{ "lambda$showImport$15", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$showImport$15_arc_scene_ui_TextField_Array1_boolean_arc_scene_ui_TextButton_R_boolean, 0, "(Larc/scene/ui/TextField;[ZLarc/scene/ui/TextButton;)Z", 4106 },
	{ "lambda$showImport$14", (intptr_t) M_mindustry_editor_data_MapContentView_lambda$showImport$14_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_Array1_mindustry_ctype_ContentType_arc_scene_ui_TextField, VTABLE_mindustry_editor_data_MapContentView_lambda$showImport$14_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_Array1_mindustry_ctype_ContentType_arc_scene_ui_TextField, "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/editor/data/MapAssetsDialog;[Lmindustry/ctype/ContentType;Larc/scene/ui/TextField;)V", 4098 },
	{ "lambda$showImport$13", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$showImport$13_arc_scene_ui_TextField_Array1_boolean_arc_scene_ui_TextButton_R_boolean, 0, "(Larc/scene/ui/TextField;[ZLarc/scene/ui/TextButton;)Z", 4106 },
	{ "lambda$showImport$11", (intptr_t) M_mindustry_editor_data_MapContentView_lambda$showImport$11_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_Array1_mindustry_ctype_ContentType_arc_scene_ui_TextField, VTABLE_mindustry_editor_data_MapContentView_lambda$showImport$11_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_Array1_mindustry_ctype_ContentType_arc_scene_ui_TextField, "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/editor/data/MapAssetsDialog;[Lmindustry/ctype/ContentType;Larc/scene/ui/TextField;)V", 4098 },
	{ "lambda$showImport$12", (intptr_t) M_mindustry_editor_data_MapContentView_lambda$showImport$12_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_Array1_mindustry_ctype_ContentType_arc_scene_ui_TextField_arc_files_Fi, VTABLE_mindustry_editor_data_MapContentView_lambda$showImport$12_mindustry_ui_dialogs_BaseDialog_mindustry_editor_data_MapAssetsDialog_Array1_mindustry_ctype_ContentType_arc_scene_ui_TextField_arc_files_Fi, "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/editor/data/MapAssetsDialog;[Lmindustry/ctype/ContentType;Larc/scene/ui/TextField;Larc/files/Fi;)V", 4098 },
	{ "lambda$showImport$10", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$showImport$10_Array1_boolean_R_boolean, 0, "([Z)Z", 4106 },
	{ "lambda$showImport$9", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$showImport$9_arc_scene_ui_TextField_R_java_lang_CharSequence, 0, "(Larc/scene/ui/TextField;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$showImport$4", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$showImport$4_Array1_mindustry_ctype_ContentType_arc_scene_ui_layout_Table, 0, "([Lmindustry/ctype/ContentType;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$showImport$8", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$showImport$8_Array1_mindustry_ctype_ContentType_mindustry_ctype_ContentType_arc_scene_ui_ImageButton_R_boolean, 0, "([Lmindustry/ctype/ContentType;Lmindustry/ctype/ContentType;Larc/scene/ui/ImageButton;)Z", 4106 },
	{ "lambda$showImport$7", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$showImport$7_Array1_mindustry_ctype_ContentType_mindustry_ctype_ContentType, 0, "([Lmindustry/ctype/ContentType;Lmindustry/ctype/ContentType;)V", 4106 },
	{ "lambda$showImport$5", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$showImport$5_Array1_mindustry_ctype_ContentType_arc_scene_ui_layout_Table, 0, "([Lmindustry/ctype/ContentType;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$showImport$6", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$showImport$6_Array1_mindustry_ctype_ContentType_R_java_lang_CharSequence, 0, "([Lmindustry/ctype/ContentType;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$showImport$1", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$showImport$1_Array1_boolean_arc_scene_ui_TextField, 0, "([ZLarc/scene/ui/TextField;)V", 4106 },
	{ "lambda$showImport$3", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$showImport$3_Array1_boolean_arc_scene_ui_TextField, 0, "([ZLarc/scene/ui/TextField;)V", 4106 },
	{ "lambda$showImport$2", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$showImport$2_arc_scene_ui_TextField_char_R_boolean, 0, "(Larc/scene/ui/TextField;C)Z", 4106 },
	{ "lambda$showImport$0", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$showImport$0_java_lang_String, 0, "(Ljava/lang/String;)V", 4106 },
	{ "lambda$addContent$0", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$addContent$0_java_lang_String_mindustry_ctype_ContentType_java_lang_String_mindustry_editor_data_MapAssetsDialog, 0, "(Ljava/lang/String;Lmindustry/ctype/ContentType;Ljava/lang/String;Lmindustry/editor/data/MapAssetsDialog;)V", 4106 },
	{ "lambda$buildButtons$0", (intptr_t) M_mindustry_editor_data_MapContentView_lambda$buildButtons$0_mindustry_editor_data_MapAssetsDialog, VTABLE_mindustry_editor_data_MapContentView_lambda$buildButtons$0_mindustry_editor_data_MapAssetsDialog, "(Lmindustry/editor/data/MapAssetsDialog;)V", 4098 },
	{ "lambda$build$25", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$25_arc_struct_Seq_mindustry_mod_data_ContentAsset_mindustry_editor_data_MapAssetsDialog, 0, "(Larc/struct/Seq;Lmindustry/mod/data/ContentAsset;Lmindustry/editor/data/MapAssetsDialog;)V", 4106 },
	{ "lambda$build$26", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$26_arc_struct_Seq_mindustry_mod_data_ContentAsset_mindustry_editor_data_MapAssetsDialog, 0, "(Larc/struct/Seq;Lmindustry/mod/data/ContentAsset;Lmindustry/editor/data/MapAssetsDialog;)V", 4106 },
	{ "lambda$build$18", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$18_mindustry_mod_data_ContentAsset, 0, "(Lmindustry/mod/data/ContentAsset;)V", 4106 },
	{ "lambda$build$19", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$19_mindustry_ui_dialogs_BaseDialog_mindustry_mod_data_ContentAsset_arc_scene_ui_layout_Table, 0, "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/mod/data/ContentAsset;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$20", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$20_mindustry_ui_dialogs_BaseDialog_mindustry_mod_data_ContentAsset_arc_scene_ui_layout_Table, 0, "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/mod/data/ContentAsset;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$23", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$23_mindustry_ui_dialogs_BaseDialog_mindustry_mod_data_ContentAsset, 0, "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/mod/data/ContentAsset;)V", 4106 },
	{ "lambda$build$24", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$24_mindustry_mod_data_ContentAsset_arc_files_Fi, 0, "(Lmindustry/mod/data/ContentAsset;Larc/files/Fi;)V", 4106 },
	{ "lambda$build$22", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$22_arc_scene_ui_TextButton_R_boolean, 0, "(Larc/scene/ui/TextButton;)Z", 4106 },
	{ "lambda$build$21", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$21_mindustry_ui_dialogs_BaseDialog_mindustry_mod_data_ContentAsset, 0, "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/mod/data/ContentAsset;)V", 4106 },
	{ "lambda$build$9", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$9_mindustry_mod_data_ContentAsset_mindustry_editor_data_MapAssetsDialog, 0, "(Lmindustry/mod/data/ContentAsset;Lmindustry/editor/data/MapAssetsDialog;)V", 4106 },
	{ "lambda$build$12", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$12_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_arc_scene_ui_layout_Table, 0, "(Lmindustry/ui/dialogs/BaseDialog;Larc/func/Cons;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$13", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$13_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_arc_scene_ui_layout_Table, 0, "(Lmindustry/ui/dialogs/BaseDialog;Larc/func/Cons;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$16", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$16_mindustry_ui_dialogs_BaseDialog_arc_func_Cons, 0, "(Lmindustry/ui/dialogs/BaseDialog;Larc/func/Cons;)V", 4106 },
	{ "lambda$build$17", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$17_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_arc_files_Fi, 0, "(Lmindustry/ui/dialogs/BaseDialog;Larc/func/Cons;Larc/files/Fi;)V", 4106 },
	{ "lambda$build$15", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$15_arc_scene_ui_TextButton_R_boolean, 0, "(Larc/scene/ui/TextButton;)Z", 4106 },
	{ "lambda$build$14", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$14_mindustry_ui_dialogs_BaseDialog_arc_func_Cons, 0, "(Lmindustry/ui/dialogs/BaseDialog;Larc/func/Cons;)V", 4106 },
	{ "lambda$build$10", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$10_mindustry_mod_data_ContentAsset_mindustry_editor_data_MapAssetsDialog_java_lang_String, 0, "(Lmindustry/mod/data/ContentAsset;Lmindustry/editor/data/MapAssetsDialog;Ljava/lang/String;)V", 4106 },
	{ "lambda$build$11", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$11_mindustry_editor_data_MapAssetsDialog, 0, "(Lmindustry/editor/data/MapAssetsDialog;)V", 4106 },
	{ "lambda$build$8", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$8_arc_scene_ui_TextButton, 0, "(Larc/scene/ui/TextButton;)V", 4106 },
	{ "lambda$build$5", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$5_mindustry_mod_data_ContentAsset, 0, "(Lmindustry/mod/data/ContentAsset;)V", 4106 },
	{ "lambda$build$6", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$6_mindustry_mod_data_ContentAsset_arc_scene_ui_layout_Table, 0, "(Lmindustry/mod/data/ContentAsset;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$7", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$7_mindustry_mod_data_ContentAsset_arc_scene_ui_layout_Table, 0, "(Lmindustry/mod/data/ContentAsset;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$4", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$4, 0, "()V", 4106 },
	{ "lambda$build$1", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$1_mindustry_mod_data_ContentAsset, 0, "(Lmindustry/mod/data/ContentAsset;)V", 4106 },
	{ "lambda$build$2", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$2_mindustry_mod_data_ContentAsset_arc_scene_ui_layout_Table, 0, "(Lmindustry/mod/data/ContentAsset;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$3", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$3_java_lang_String_arc_scene_ui_layout_Table, 0, "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$0", (intptr_t) SM_mindustry_editor_data_MapContentView_lambda$build$0_mindustry_mod_data_ContentAsset_arc_scene_ui_layout_Table, 0, "(Lmindustry/mod/data/ContentAsset;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_editor_data_MapContentView, 0, "()V", 8 },
};

Class class_mindustry_editor_data_MapContentView{
		.nativeName = (intptr_t) "mindustry/editor/data/MapContentView",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_editor_data_MapContentView),
		.classVtable = (intptr_t) vtable_mindustry_editor_data_MapContentView,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_data_MapContentView,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_data_MapContentView,
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
		.methodCount = 52,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_data_MapContentView = registerClass(&class_mindustry_editor_data_MapContentView);

}
