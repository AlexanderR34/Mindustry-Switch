#include "mindustry/ui/dialogs/KeybindDialog.h"
#include "mindustry/ui/dialogs/KeybindDialog_invoke_java_lang_Runnable_14.h"
#include "mindustry/ui/dialogs/KeybindDialog_invoke_java_lang_Runnable_15.h"
#include "arc/input/KeyBind_Axis.h"
#include "arc/func/Prov.h"
#include "arc/scene/ui/TextField.h"
#include "arc/graphics/Color.h"
#include "arc/input/KeyCode.h"
#include "java/lang/Runnable.h"
#include "arc/scene/ui/Image.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/TextButton.h"
#include "mindustry/ui/dialogs/KeybindDialog_invoke_arc_func_Prov_1.h"
#include "java/util/Locale.h"
#include "arc/func/Boolf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/input/Binding.h"
#include "arc/util/Time.h"
#include "arc/scene/ui/Label.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/ui/dialogs/KeybindDialog.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/ui/dialogs/KeybindDialog_3.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/ui/dialogs/KeybindDialog_2.h"
#include "mindustry/ui/dialogs/KeybindDialog_1.h"
#include "arc/util/Timer_Task.h"
#include "mindustry/ui/dialogs/KeybindDialog_invoke_arc_func_Cons_4.h"
#include "mindustry/ui/dialogs/KeybindDialog_invoke_arc_func_Cons_6.h"
#include "mindustry/ui/dialogs/KeybindDialog_invoke_arc_func_Cons_5.h"
#include "arc/Application.h"
#include "mindustry/ui/dialogs/KeybindDialog_invoke_arc_func_Cons_7.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/style/Drawable.h"
#include "arc/input/KeyBind.h"
#include "mindustry/ui/dialogs/KeybindDialog_invoke_arc_func_Boolf_1.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/input/KeyBind_KeybindValue.h"
#include "mindustry/ui/Styles.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/ui/dialogs/KeybindDialog_invoke_java_lang_Runnable_9.h"
#include "arc/scene/ui/ScrollPane.h"
#include "mindustry/ui/dialogs/KeybindDialog_invoke_java_lang_Runnable_8.h"
#include "arc/scene/event/EventListener.h"
#include "mindustry/ui/dialogs/KeybindDialog_invoke_java_lang_Runnable_10.h"
#include "java/util/Objects.h"
#include "arc/scene/event/InputListener.h"
#include "mindustry/ui/dialogs/KeybindDialog_invoke_java_lang_Runnable_11.h"
#include "mindustry/ui/dialogs/KeybindDialog_invoke_java_lang_Runnable_12.h"
#include "mindustry/ui/dialogs/KeybindDialog_invoke_java_lang_Runnable_13.h"

extern "C" {


void mark_mindustry_ui_dialogs_KeybindDialog(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_Dialog(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_KeybindDialog *) object;
	if (self->F_rebindKey)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rebindKey)->clazz)->markFunction)((jobject) self->F_rebindKey, mark, depth + 1);
	if (self->F_minKey)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minKey)->clazz)->markFunction)((jobject) self->F_minKey, mark, depth + 1);
	if (self->F_rebindDialog)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rebindDialog)->clazz)->markFunction)((jobject) self->F_rebindDialog, mark, depth + 1);
	if (self->F_bindsTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bindsTable)->clazz)->markFunction)((jobject) self->F_bindsTable, mark, depth + 1);
	if (self->F_searchText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_searchText)->clazz)->markFunction)((jobject) self->F_searchText, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_KeybindDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_Dialog(ctx);
}

void init_mindustry_ui_dialogs_KeybindDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/KeybindDialog:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_KeybindDialog(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"keybind.title"_j))));
	init_arc_scene_ui_Dialog_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(21);
	((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_rebindKey = (jref) (jobject(nullptr));
	LINE_NUMBER(22);
	((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_rebindAxis = (jint(0));
	LINE_NUMBER(23);
	((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_rebindMin = (jint(1));
	LINE_NUMBER(24);
	((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_minKey = (jref) (jobject(nullptr));
	LINE_NUMBER(27);
	((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_searchText = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(31);
	((func_mindustry_ui_dialogs_KeybindDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_KeybindDialog_addCloseButton])(ctx, (frame[0].o));
	LINE_NUMBER(32);
	((func_mindustry_ui_dialogs_KeybindDialog_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_KeybindDialog_setFillParent_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(33);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_title;
	((func_arc_scene_ui_Label_setAlignment_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setAlignment_int])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(34);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_titleTable;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(35);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_titleTable;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	init_arc_scene_ui_Image(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_Image, sp[0].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	((func_arc_scene_ui_Image_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK(sp[0].o))->F_bindsTable = (jref) sp[1].o;
	LINE_NUMBER(37);
	clinit_arc_scene_ui_ScrollPane(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ScrollPane);
	sp[1].o = (jobject)((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_bindsTable;
	init_arc_scene_ui_ScrollPane_arc_scene_Element(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(38);
	((func_arc_scene_ui_ScrollPane_setFadeScrollBars_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_setFadeScrollBars_boolean])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_KeybindDialog_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_KeybindDialog_top_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	LINE_NUMBER(42);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_KeybindDialog_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_ui_dialogs_KeybindDialog_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_KeybindDialog_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(55);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(57);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(58);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(60);
	((func_mindustry_ui_dialogs_KeybindDialog_rebuildBinds) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_KeybindDialog_rebuildBinds])(ctx, (frame[0].o));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_KeybindDialog_addCloseButton(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/KeybindDialog:addCloseButton", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@back"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_left;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_8(ctx);
		auto proxy = (mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_8 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(210.0f)), (jfloat(64.0f)));
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_KeybindDialog_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_ui_dialogs_KeybindDialog_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_KeybindDialog_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_KeybindDialog_keyDown_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_KeybindDialog_keyDown_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_KeybindDialog_rebuildBinds(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/KeybindDialog:rebuildBinds", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_bindsTable;
	frame[1].o = sp[0].o;
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_bindsTable;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(78);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(80);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(81);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_grayt;
	frame[3].o = sp[0].o;
	LINE_NUMBER(83);
	frame[4].f = (jfloat(140.0f));
	frame[5].f = (jfloat(40.0f));
	LINE_NUMBER(85);
	clinit_arc_input_KeyBind(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyBind_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_arc_input_KeyBind, sp[0].o));
	LINE_NUMBER(86);
	sp[0].o = (jobject)((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_searchText;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_12;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[7].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"keybind.\u0001.name"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[7].o)))->F_name;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_java_util_Locale(ctx);
	sp[1].o = (jobject)SF_java_util_Locale_ROOT;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_searchText;
	clinit_java_util_Locale(ctx);
	sp[2].o = (jobject)SF_java_util_Locale_ROOT;
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_12;
	}
	LINE_NUMBER(87);
	goto label_9;
label_12:;
	{
	LINE_NUMBER(90);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[7].o)))->F_category;
	if (sp[0].o == sp[1].o) goto label_14;
	}
	{
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[7].o)))->F_category;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(91);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[7].o)))->F_category;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"category.\u0001.name"_j.string, 1, sp[2].o);
	sp[3].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[7].o)))->F_category;
	sp[3].o = (jobject)SM_arc_util_Strings_capitalize_java_lang_String_R_java_lang_String(ctx, sp[3].o);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(92);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(93);
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[7].o)))->F_category;
	frame[2].o = sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[7].o)))->F_defaultValue;
	if ((isInstance(ctx, sp[0].o, &class_arc_input_KeyBind$Axis)) == 0) goto label_18;
	}
	{
	LINE_NUMBER(97);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[7].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"keybind.\u0001.name"_j.string, 1, sp[2].o);
	sp[3].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[7].o)))->F_name;
	sp[3].o = (jobject)SM_arc_util_Strings_capitalize_java_lang_String_R_java_lang_String(ctx, sp[3].o);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(99);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_KeybindDialog_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_ui_dialogs_KeybindDialog_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_KeybindDialog_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	LINE_NUMBER(102);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(90.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(20.0f)));
	LINE_NUMBER(104);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@settings.rebind"_j));
	sp[2].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_9);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = frame[4].f;
	jfloat temp1 = frame[5].f;
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	goto label_24;
	}
label_18:;
	{
	LINE_NUMBER(110);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[7].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"keybind.\u0001.name"_j.string, 1, sp[2].o);
	sp[3].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[7].o)))->F_name;
	sp[3].o = (jobject)SM_arc_util_Strings_capitalize_java_lang_String_R_java_lang_String(ctx, sp[3].o);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(111);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[7].o)))->F_value;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[1].o))->F_key;
	sp[1].o = (jobject)((func_arc_input_KeyCode_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_input_KeyCode_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_KeybindDialog_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_ui_dialogs_KeybindDialog_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_KeybindDialog_invoke_arc_func_Cons_6);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	LINE_NUMBER(114);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(90.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(20.0f)));
	LINE_NUMBER(116);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@settings.rebind"_j));
	sp[2].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_10(ctx);
		auto proxy = (mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_10 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_10);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = frame[4].f;
	jfloat temp1 = frame[5].f;
	LINE_NUMBER(120);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	}
label_24:;
	{
	LINE_NUMBER(122);
	sp[0].o = frame[7].o;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_menu;
	if (sp[0].o == sp[1].o) goto label_29;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@settings.resetKey"_j));
	sp[2].o = frame[3].o;
	sp[3].o = frame[7].o;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_11);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_KeybindDialog_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_ui_dialogs_KeybindDialog_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_KeybindDialog_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[4].f), (frame[5].f));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	}
label_29:;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(124);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(126);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@settings.reset"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_refresh;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_12(ctx);
		auto proxy = (mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_12 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_12);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(200.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(50.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_KeybindDialog_rebind_arc_input_KeyBind_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/KeybindDialog:rebind", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_rebindKey;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_rebindDialog;
	((func_arc_scene_ui_Dialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_hide])(ctx, sp[0].o);
	LINE_NUMBER(132);
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[1].o)))->F_defaultValue;
	frame[3].i = (isInstance(ctx, sp[0].o, &class_arc_input_KeyBind$Axis));
	LINE_NUMBER(134);
	if ((frame[3].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(135);
	if (((jint)((arc_input_KeyCode *) NULL_CHECK((frame[2].o)))->F_axis) != 0) goto label_6;
	}
	{
	if (((jint)((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_rebindMin) != 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(136);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((arc_input_KeyCode *) NULL_CHECK((frame[2].o)))->F_axis) == 0) goto label_8;
	}
	{
	clinit_arc_input_KeyBind$Axis(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyBind$Axis);
	init_arc_input_KeyBind$Axis_arc_input_KeyCode(ctx, sp[0].o, (frame[2].o));
	sp += 1;
	goto label_9;
	}
label_8:;
	{
	clinit_arc_input_KeyBind$Axis(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyBind$Axis);
	sp[1].o = (jobject)((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_minKey;
	init_arc_input_KeyBind$Axis_arc_input_KeyCode_arc_input_KeyCode(ctx, sp[0].o, sp[1].o, (frame[2].o));
	sp += 1;
	}
label_9:;
	sp -= 2;
	((arc_input_KeyBind *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	goto label_7;
label_4:;
	{
	LINE_NUMBER(139);
	sp[0].o = frame[1].o;
	clinit_arc_input_KeyBind$Axis(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_input_KeyBind$Axis);
	init_arc_input_KeyBind$Axis_arc_input_KeyCode(ctx, sp[1].o, (frame[2].o));
	((arc_input_KeyBind *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(141);
	((func_arc_input_KeyBind_save) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_input_KeyBind_save])(ctx, (frame[1].o));
	LINE_NUMBER(143);
	if (((jint)((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_rebindAxis) == 0) goto label_11;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_11;
	{
	if (((jint)((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_rebindMin) == 0) goto label_11;
	}
	{
	if (((jint)((arc_input_KeyCode *) NULL_CHECK((frame[2].o)))->F_axis) != 0) goto label_11;
	}
	{
	LINE_NUMBER(144);
	((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_rebindMin = (jint(0));
	LINE_NUMBER(145);
	((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_minKey = (jref) (frame[2].o);
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_rebindKey;
	((func_mindustry_ui_dialogs_KeybindDialog_openDialog_arc_input_KeyBind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_KeybindDialog_openDialog_arc_input_KeyBind])(ctx, sp[0].o, sp[1].o);
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(148);
	((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_rebindKey = (jref) (jobject(nullptr));
	LINE_NUMBER(149);
	((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_rebindAxis = (jint(0));
	}
label_15:;
	LINE_NUMBER(151);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_KeybindDialog_openDialog_arc_input_KeyBind(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/KeybindDialog:openDialog", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(154);
	clinit_mindustry_ui_dialogs_KeybindDialog$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_KeybindDialog$1);
	init_mindustry_ui_dialogs_KeybindDialog$1_mindustry_ui_dialogs_KeybindDialog(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(162);
	frame[3].f = (jfloat(210.0f));
	frame[4].f = (jfloat(64.0f));
	LINE_NUMBER(163);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_KeybindDialog$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_KeybindDialog$2);
	sp[2].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_bundle;
	sp[4].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[1].o)))->F_name;
	sp[4].o = (jobject)concatStringsRecipe(ctx, u8"keybind.\u0001.name"_j.string, 1, sp[4].o);
	sp[5].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[1].o)))->F_name;
	sp[5].o = (jobject)SM_arc_util_Strings_capitalize_java_lang_String_R_java_lang_String(ctx, sp[5].o);
	sp[3].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[3].o, sp[4].o, sp[5].o);
	init_mindustry_ui_dialogs_KeybindDialog$2_mindustry_ui_dialogs_KeybindDialog_java_lang_String_float_float_arc_scene_event_InputListener_arc_input_KeyBind(ctx, sp[1].o, sp[2].o, sp[3].o, (frame[3].f), (frame[4].f), (frame[2].o), (frame[1].o));
	((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK(sp[0].o))->F_rebindDialog = (jref) sp[1].o;
	LINE_NUMBER(175);
	((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_rebindKey = (jref) (frame[1].o);
	LINE_NUMBER(177);
	sp[0].o = (jobject)((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_rebindDialog;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_titleTable;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o)), (jfloat(4.0f)));
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_rebindDialog;
	clinit_mindustry_ui_dialogs_KeybindDialog$3(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_KeybindDialog$3);
	init_mindustry_ui_dialogs_KeybindDialog$3_mindustry_ui_dialogs_KeybindDialog_arc_input_KeyBind(ctx, sp[1].o, (frame[0].o), (frame[1].o));
	jint temp0 = (jint)((func_arc_scene_ui_Dialog_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(202);
	sp[0].o = (jobject)((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_rebindDialog;
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(203);
	jfloat temp1 = jfloat(1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(ctx, temp1, sp[0].o);
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_KeybindDialog_lambda$openDialog$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/KeybindDialog:lambda$openDialog$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_KeybindDialog_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_KeybindDialog_getScene_R_arc_scene_Scene])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_rebindDialog;
	jint temp0 = (jint)((func_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_KeybindDialog_lambda$rebuildBinds$4_arc_input_KeyBind_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/KeybindDialog:lambda$rebuildBinds$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_KeybindDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(122);
	jint temp0 = (jint)((func_arc_input_KeyBind_isDefault_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_input_KeyBind_isDefault_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_KeybindDialog_lambda$rebuildBinds$3_arc_input_KeyBind(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/KeybindDialog:lambda$rebuildBinds$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(117);
	((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_rebindAxis = (jint(0));
	LINE_NUMBER(118);
	((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_rebindMin = (jint(0));
	LINE_NUMBER(119);
	((func_mindustry_ui_dialogs_KeybindDialog_openDialog_arc_input_KeyBind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_KeybindDialog_openDialog_arc_input_KeyBind])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_KeybindDialog_lambda$rebuildBinds$2_arc_input_KeyBind_arc_scene_ui_Label(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/KeybindDialog:lambda$rebuildBinds$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_KeybindDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(112);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_value;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[1].o))->F_key;
	sp[1].o = (jobject)((func_arc_input_KeyCode_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_input_KeyCode_getName_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_scene_ui_Label_setText_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setText_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(113);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_value;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[1].o))->F_key;
	clinit_arc_input_KeyCode(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode_unset;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_darkGray;
	goto label_3;
label_2:;
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_accent;
label_3:;
	{
	sp -= 2;
	((func_arc_scene_ui_Label_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_KeybindDialog_lambda$rebuildBinds$1_arc_input_KeyBind(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/KeybindDialog:lambda$rebuildBinds$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(105);
	((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_rebindAxis = (jint(1));
	LINE_NUMBER(106);
	((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_rebindMin = (jint(1));
	LINE_NUMBER(107);
	((func_mindustry_ui_dialogs_KeybindDialog_openDialog_arc_input_KeyBind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_KeybindDialog_openDialog_arc_input_KeyBind])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_KeybindDialog_lambda$rebuildBinds$0_arc_input_KeyBind_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/KeybindDialog:lambda$rebuildBinds$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_KeybindDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_value;
	frame[1].o = sp[0].o;
	LINE_NUMBER(101);
	sp[0].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((frame[1].o)))->F_key;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((frame[1].o)))->F_key;
	sp[0].o = (jobject)((func_arc_input_KeyCode_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_KeyCode_getName_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((frame[1].o)))->F_min;
	sp[0].o = (jobject)((func_arc_input_KeyCode_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_KeyCode_getName_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((frame[1].o)))->F_max;
	sp[1].o = (jobject)((func_arc_input_KeyCode_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_input_KeyCode_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 [red]/[] \u0001"_j.string, 2, sp[0].o, sp[1].o);
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_KeybindDialog_lambda$addCloseButton$0_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/KeybindDialog:lambda$addCloseButton$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
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
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_mindustry_ui_dialogs_KeybindDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_KeybindDialog_hide])(ctx, sp[0].o);
label_2:;
	LINE_NUMBER(69);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_KeybindDialog_lambda$new$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/KeybindDialog:lambda$new$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(44);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_zoom;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(45);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_searchText;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_KeybindDialog_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_ui_dialogs_KeybindDialog_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_KeybindDialog_invoke_arc_func_Cons_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(48);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o));
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_14(ctx);
		auto proxy = (mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_14 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_14);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_KeybindDialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_KeybindDialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_KeybindDialog_lambda$new$2_arc_scene_ui_TextField(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/KeybindDialog:lambda$new$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8""_j));
	((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK(sp[1].o))->F_searchText = (jref) sp[2].o;
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, sp[2].o);
	LINE_NUMBER(52);
	((func_mindustry_ui_dialogs_KeybindDialog_rebuildBinds) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_KeybindDialog_rebuildBinds])(ctx, (frame[0].o));
	LINE_NUMBER(53);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_15(ctx);
		auto proxy = (mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_15 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_KeybindDialog_invoke_java_lang_Runnable_15);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_KeybindDialog_lambda$new$1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/KeybindDialog:lambda$new$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK((frame[0].o)))->F_searchText = (jref) (frame[1].o);
	LINE_NUMBER(47);
	((func_mindustry_ui_dialogs_KeybindDialog_rebuildBinds) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_KeybindDialog_rebuildBinds])(ctx, (frame[0].o));
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_KeybindDialog[] {
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
	(void *) M_mindustry_ui_dialogs_KeybindDialog_addCloseButton,
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
	(void *) M_mindustry_ui_dialogs_KeybindDialog_rebuildBinds,
	(void *) M_mindustry_ui_dialogs_KeybindDialog_rebind_arc_input_KeyBind_arc_input_KeyCode,
	(void *) M_mindustry_ui_dialogs_KeybindDialog_openDialog_arc_input_KeyBind,
	(void *) M_mindustry_ui_dialogs_KeybindDialog_lambda$openDialog$0,
	(void *) M_mindustry_ui_dialogs_KeybindDialog_lambda$rebuildBinds$3_arc_input_KeyBind,
	(void *) M_mindustry_ui_dialogs_KeybindDialog_lambda$rebuildBinds$1_arc_input_KeyBind,
	(void *) M_mindustry_ui_dialogs_KeybindDialog_lambda$addCloseButton$0_arc_input_KeyCode,
	(void *) M_mindustry_ui_dialogs_KeybindDialog_lambda$new$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_KeybindDialog_lambda$new$2_arc_scene_ui_TextField,
	(void *) M_mindustry_ui_dialogs_KeybindDialog_lambda$new$1_java_lang_String,
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
	{ "rebuildBinds", "()V" },
	{ "rebind", "(Larc/input/KeyBind;Larc/input/KeyCode;)V" },
	{ "openDialog", "(Larc/input/KeyBind;)V" },
	{ "lambda$openDialog$0", "()V" },
	{ "lambda$rebuildBinds$3", "(Larc/input/KeyBind;)V" },
	{ "lambda$rebuildBinds$1", "(Larc/input/KeyBind;)V" },
	{ "lambda$addCloseButton$0", "(Larc/input/KeyCode;)V" },
	{ "lambda$new$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$2", "(Larc/scene/ui/TextField;)V" },
	{ "lambda$new$1", "(Ljava/lang/String;)V" },
};

static FieldMetadata fields[] {
	{ "rebindKey", &class_arc_input_KeyBind, offsetof(mindustry_ui_dialogs_KeybindDialog, F_rebindKey), "Larc/input/KeyBind;", 4 },
	{ "rebindAxis", &class_boolean, offsetof(mindustry_ui_dialogs_KeybindDialog, F_rebindAxis), "Z", 4 },
	{ "rebindMin", &class_boolean, offsetof(mindustry_ui_dialogs_KeybindDialog, F_rebindMin), "Z", 4 },
	{ "minKey", &class_arc_input_KeyCode, offsetof(mindustry_ui_dialogs_KeybindDialog, F_minKey), "Larc/input/KeyCode;", 4 },
	{ "rebindDialog", &class_arc_scene_ui_Dialog, offsetof(mindustry_ui_dialogs_KeybindDialog, F_rebindDialog), "Larc/scene/ui/Dialog;", 4 },
	{ "bindsTable", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_dialogs_KeybindDialog, F_bindsTable), "Larc/scene/ui/layout/Table;", 4 },
	{ "searchText", &class_java_lang_String, offsetof(mindustry_ui_dialogs_KeybindDialog, F_searchText), "Ljava/lang/String;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_KeybindDialog, 0, "()V", 1 },
	{ "addCloseButton", (intptr_t) M_mindustry_ui_dialogs_KeybindDialog_addCloseButton, VTABLE_mindustry_ui_dialogs_KeybindDialog_addCloseButton, "()V", 1 },
	{ "rebuildBinds", (intptr_t) M_mindustry_ui_dialogs_KeybindDialog_rebuildBinds, VTABLE_mindustry_ui_dialogs_KeybindDialog_rebuildBinds, "()V", 2 },
	{ "rebind", (intptr_t) M_mindustry_ui_dialogs_KeybindDialog_rebind_arc_input_KeyBind_arc_input_KeyCode, VTABLE_mindustry_ui_dialogs_KeybindDialog_rebind_arc_input_KeyBind_arc_input_KeyCode, "(Larc/input/KeyBind;Larc/input/KeyCode;)V", 0 },
	{ "openDialog", (intptr_t) M_mindustry_ui_dialogs_KeybindDialog_openDialog_arc_input_KeyBind, VTABLE_mindustry_ui_dialogs_KeybindDialog_openDialog_arc_input_KeyBind, "(Larc/input/KeyBind;)V", 2 },
	{ "lambda$openDialog$0", (intptr_t) M_mindustry_ui_dialogs_KeybindDialog_lambda$openDialog$0, VTABLE_mindustry_ui_dialogs_KeybindDialog_lambda$openDialog$0, "()V", 4098 },
	{ "lambda$rebuildBinds$4", (intptr_t) SM_mindustry_ui_dialogs_KeybindDialog_lambda$rebuildBinds$4_arc_input_KeyBind_arc_scene_ui_TextButton_R_boolean, 0, "(Larc/input/KeyBind;Larc/scene/ui/TextButton;)Z", 4106 },
	{ "lambda$rebuildBinds$3", (intptr_t) M_mindustry_ui_dialogs_KeybindDialog_lambda$rebuildBinds$3_arc_input_KeyBind, VTABLE_mindustry_ui_dialogs_KeybindDialog_lambda$rebuildBinds$3_arc_input_KeyBind, "(Larc/input/KeyBind;)V", 4098 },
	{ "lambda$rebuildBinds$2", (intptr_t) SM_mindustry_ui_dialogs_KeybindDialog_lambda$rebuildBinds$2_arc_input_KeyBind_arc_scene_ui_Label, 0, "(Larc/input/KeyBind;Larc/scene/ui/Label;)V", 4106 },
	{ "lambda$rebuildBinds$1", (intptr_t) M_mindustry_ui_dialogs_KeybindDialog_lambda$rebuildBinds$1_arc_input_KeyBind, VTABLE_mindustry_ui_dialogs_KeybindDialog_lambda$rebuildBinds$1_arc_input_KeyBind, "(Larc/input/KeyBind;)V", 4098 },
	{ "lambda$rebuildBinds$0", (intptr_t) SM_mindustry_ui_dialogs_KeybindDialog_lambda$rebuildBinds$0_arc_input_KeyBind_R_java_lang_CharSequence, 0, "(Larc/input/KeyBind;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$addCloseButton$0", (intptr_t) M_mindustry_ui_dialogs_KeybindDialog_lambda$addCloseButton$0_arc_input_KeyCode, VTABLE_mindustry_ui_dialogs_KeybindDialog_lambda$addCloseButton$0_arc_input_KeyCode, "(Larc/input/KeyCode;)V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_ui_dialogs_KeybindDialog_lambda$new$0_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_KeybindDialog_lambda$new$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_ui_dialogs_KeybindDialog_lambda$new$2_arc_scene_ui_TextField, VTABLE_mindustry_ui_dialogs_KeybindDialog_lambda$new$2_arc_scene_ui_TextField, "(Larc/scene/ui/TextField;)V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_ui_dialogs_KeybindDialog_lambda$new$1_java_lang_String, VTABLE_mindustry_ui_dialogs_KeybindDialog_lambda$new$1_java_lang_String, "(Ljava/lang/String;)V", 4098 },
};

Class class_mindustry_ui_dialogs_KeybindDialog{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/KeybindDialog",
		.parentClass = (intptr_t) &class_arc_scene_ui_Dialog,
		.size = sizeof(mindustry_ui_dialogs_KeybindDialog),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_KeybindDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_KeybindDialog,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_KeybindDialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 299,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_KeybindDialog = registerClass(&class_mindustry_ui_dialogs_KeybindDialog);

}
