#include "mindustry/ui/dialogs/LanguageDialog.h"
#include "mindustry/ui/dialogs/LanguageDialog_invoke_arc_func_Cons_1.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "arc/scene/ui/Button.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/TextButton.h"
#include "arc/Settings.h"
#include "java/util/Locale.h"
#include "mindustry/ui/dialogs/LanguageDialog.h"
#include "arc/Core.h"
#include "arc/util/Log.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/scene/ui/ScrollPane.h"
#include "arc/scene/ui/ButtonGroup.h"
#include "mindustry/gen/Player.h"
#include "arc/scene/ui/Dialog.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/Vars.h"
#include "mindustry/ui/dialogs/LanguageDialog_invoke_java_lang_Runnable_1.h"

extern "C" {

jobject SF_mindustry_ui_dialogs_LanguageDialog_displayNames;

void mark_mindustry_ui_dialogs_LanguageDialog(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ui_dialogs_LanguageDialog_displayNames)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_dialogs_LanguageDialog_displayNames)->clazz)->markFunction)((jobject) SF_mindustry_ui_dialogs_LanguageDialog_displayNames, mark, depth + 1);
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
	auto self = (mindustry_ui_dialogs_LanguageDialog *) object;
	if (self->F_lastLocale)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastLocale)->clazz)->markFunction)((jobject) self->F_lastLocale, mark, depth + 1);
}

void init_mindustry_ui_dialogs_LanguageDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LanguageDialog:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_LanguageDialog(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(58);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@settings.language"_j))));
	LINE_NUMBER(59);
	((func_mindustry_ui_dialogs_LanguageDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_LanguageDialog_addCloseButton])(ctx, (frame[0].o));
	LINE_NUMBER(60);
	((func_mindustry_ui_dialogs_LanguageDialog_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_LanguageDialog_setup])(ctx, (frame[0].o));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_LanguageDialog_getDisplayName_java_util_Locale_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LanguageDialog:getDisplayName", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_LanguageDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((func_java_util_Locale_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Locale_toString_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"in_ID"_j))), (((jobject) createStringLiteral(ctx, u8"id_ID"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(65);
	clinit_mindustry_ui_dialogs_LanguageDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_LanguageDialog_displayNames;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_LanguageDialog_setup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LanguageDialog:setup", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(70);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(24.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(24.0f)));
	LINE_NUMBER(71);
	clinit_arc_scene_ui_ScrollPane(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ScrollPane);
	init_arc_scene_ui_ScrollPane_arc_scene_Element(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(72);
	((func_arc_scene_ui_ScrollPane_setScrollingDisabled_boolean_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_setScrollingDisabled_boolean_boolean])(ctx, (frame[2].o), (jint(1)), (jint(0)));
	LINE_NUMBER(74);
	clinit_arc_scene_ui_ButtonGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ButtonGroup);
	init_arc_scene_ui_ButtonGroup(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(76);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_locales;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_7;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(77);
	clinit_arc_scene_ui_TextButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_TextButton);
	sp[1].o = (jobject)SM_mindustry_ui_dialogs_LanguageDialog_getDisplayName_java_util_Locale_R_java_lang_String(ctx, (frame[7].o));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatTogglet;
	init_arc_scene_ui_TextButton_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(78);
	sp[0].o = frame[8].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LanguageDialog_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_ui_dialogs_LanguageDialog_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LanguageDialog_invoke_java_lang_Runnable_1);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(85);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[8].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[3].o));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_LanguageDialog_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_ui_dialogs_LanguageDialog_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_LanguageDialog_invoke_arc_func_Cons_1);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(400.0f)), (jfloat(50.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(76);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_LanguageDialog_getLocale_R_java_util_Locale(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LanguageDialog:getLocale", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[0].o = (jobject)((func_arc_Settings_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"locale"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(94);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"default"_j))));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(95);
	((func_mindustry_ui_dialogs_LanguageDialog_findClosestLocale) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_LanguageDialog_findClosestLocale])(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_ui_dialogs_LanguageDialog *) NULL_CHECK((frame[0].o)))->F_lastLocale;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_LanguageDialog *) NULL_CHECK((frame[0].o)))->F_lastLocale;
	sp[0].o = (jobject)((func_java_util_Locale_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Locale_toString_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(99);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"_"_j))));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"_"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	clinit_java_util_Locale(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1)))));
	((mindustry_ui_dialogs_LanguageDialog *) NULL_CHECK(sp[0].o))->F_lastLocale = (jref) sp[1].o;
	LINE_NUMBER(102);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	clinit_java_util_Locale(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String(ctx, sp[1].o, (frame[1].o));
	((mindustry_ui_dialogs_LanguageDialog *) NULL_CHECK(sp[0].o))->F_lastLocale = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_ui_dialogs_LanguageDialog *) NULL_CHECK((frame[0].o)))->F_lastLocale;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_LanguageDialog_findClosestLocale(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LanguageDialog:findClosestLocale", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(112);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_locales;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(113);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)SM_java_util_Locale_getDefault_R_java_util_Locale(ctx);
	jint temp0 = (jint)((func_java_util_Locale_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Locale_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(114);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"locale"_j));
	sp[2].o = (jobject)((func_java_util_Locale_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_Locale_toString_R_java_lang_String])(ctx, (frame[4].o));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(112);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(120);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_locales;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_7:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_8;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(121);
	sp[0].o = (jobject)((func_java_util_Locale_getLanguage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_Locale_getLanguage_R_java_lang_String])(ctx, (frame[4].o));
	sp[1].o = (jobject)SM_java_util_Locale_getDefault_R_java_util_Locale(ctx);
	sp[1].o = (jobject)((func_java_util_Locale_getLanguage_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Locale_getLanguage_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(122);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"locale"_j));
	sp[2].o = (jobject)((func_java_util_Locale_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_Locale_toString_R_java_lang_String])(ctx, (frame[4].o));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}
label_10:;
	{
	LINE_NUMBER(120);
	INST_IINC(3, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(127);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"locale"_j));
	clinit_java_util_Locale(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"en"_j))));
	sp[2].o = (jobject)((func_java_util_Locale_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_util_Locale_toString_R_java_lang_String])(ctx, sp[2].o);
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_LanguageDialog_lambda$setup$1_java_util_Locale_arc_scene_ui_TextButton(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LanguageDialog:lambda$setup$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(85);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_mindustry_ui_dialogs_LanguageDialog_getLocale_R_java_util_Locale) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_LanguageDialog_getLocale_R_java_util_Locale])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_Locale_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Locale_equals_java_lang_Object_R_boolean])(ctx, sp[1].o, sp[2].o);
	((func_arc_scene_ui_TextButton_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_setChecked_boolean])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_LanguageDialog_lambda$setup$0_java_util_Locale(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LanguageDialog:lambda$setup$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_LanguageDialog_getLocale_R_java_util_Locale) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_LanguageDialog_getLocale_R_java_util_Locale])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_Locale_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Locale_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(80);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"locale"_j));
	sp[2].o = (jobject)((func_java_util_Locale_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Locale_toString_R_java_lang_String])(ctx, (frame[1].o));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(81);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Setting locale: @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((func_java_util_Locale_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Locale_toString_R_java_lang_String])(ctx, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(82);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_java_util_Locale_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Locale_toString_R_java_lang_String])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_locale = (jref) sp[1].o;
	LINE_NUMBER(83);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@language.restart"_j))));
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_ui_dialogs_LanguageDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/LanguageDialog:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_LanguageDialog(ctx);
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (72));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"ca"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Catal\u00e0"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"id_ID"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"Bahasa Indonesia"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"da"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8"Dansk"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8"de"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8"Deutsch"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8"et"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (9)) = (((jobject) createStringLiteral(ctx, u8"Eesti"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (10)) = (((jobject) createStringLiteral(ctx, u8"en"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (11)) = (((jobject) createStringLiteral(ctx, u8"English"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (12)) = (((jobject) createStringLiteral(ctx, u8"es"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (13)) = (((jobject) createStringLiteral(ctx, u8"Espa\u00f1ol"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (14)) = (((jobject) createStringLiteral(ctx, u8"eu"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (15)) = (((jobject) createStringLiteral(ctx, u8"Euskara"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (16)) = (((jobject) createStringLiteral(ctx, u8"fil"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (17)) = (((jobject) createStringLiteral(ctx, u8"Filipino"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (18)) = (((jobject) createStringLiteral(ctx, u8"fr"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (19)) = (((jobject) createStringLiteral(ctx, u8"Fran\u00e7ais"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (20)) = (((jobject) createStringLiteral(ctx, u8"it"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (21)) = (((jobject) createStringLiteral(ctx, u8"Italiano"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (22)) = (((jobject) createStringLiteral(ctx, u8"lt"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (23)) = (((jobject) createStringLiteral(ctx, u8"Lietuvi\u0173"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (24)) = (((jobject) createStringLiteral(ctx, u8"hu"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (25)) = (((jobject) createStringLiteral(ctx, u8"Magyar"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (26)) = (((jobject) createStringLiteral(ctx, u8"nl"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (27)) = (((jobject) createStringLiteral(ctx, u8"Nederlands"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (28)) = (((jobject) createStringLiteral(ctx, u8"nl_BE"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (29)) = (((jobject) createStringLiteral(ctx, u8"Nederlands (Belgi\u00eb)"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (30)) = (((jobject) createStringLiteral(ctx, u8"pl"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (31)) = (((jobject) createStringLiteral(ctx, u8"Polski"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (32)) = (((jobject) createStringLiteral(ctx, u8"pt_BR"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (33)) = (((jobject) createStringLiteral(ctx, u8"Portugu\u00eas (Brasil)"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (34)) = (((jobject) createStringLiteral(ctx, u8"pt_PT"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (35)) = (((jobject) createStringLiteral(ctx, u8"Portugu\u00eas (Portugal)"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (36)) = (((jobject) createStringLiteral(ctx, u8"ro"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (37)) = (((jobject) createStringLiteral(ctx, u8"Rom\u00e2n\u0103"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (38)) = (((jobject) createStringLiteral(ctx, u8"fi"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (39)) = (((jobject) createStringLiteral(ctx, u8"Suomi"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (40)) = (((jobject) createStringLiteral(ctx, u8"sv"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (41)) = (((jobject) createStringLiteral(ctx, u8"Svenska"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (42)) = (((jobject) createStringLiteral(ctx, u8"vi"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (43)) = (((jobject) createStringLiteral(ctx, u8"Ti\u1ebfng Vi\u1ec7t"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (44)) = (((jobject) createStringLiteral(ctx, u8"tk"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (45)) = (((jobject) createStringLiteral(ctx, u8"T\u00fcrkmen dili"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (46)) = (((jobject) createStringLiteral(ctx, u8"tr"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (47)) = (((jobject) createStringLiteral(ctx, u8"T\u00fcrk\u00e7e"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (48)) = (((jobject) createStringLiteral(ctx, u8"cs"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (49)) = (((jobject) createStringLiteral(ctx, u8"\u010ce\u0161tina"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (50)) = (((jobject) createStringLiteral(ctx, u8"be"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (51)) = (((jobject) createStringLiteral(ctx, u8"\u0411\u0435\u043b\u0430\u0440\u0443\u0441\u043a\u0430\u044f"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (52)) = (((jobject) createStringLiteral(ctx, u8"bg"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (53)) = (((jobject) createStringLiteral(ctx, u8"\u0411\u044a\u043b\u0433\u0430\u0440\u0441\u043a\u0438"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (54)) = (((jobject) createStringLiteral(ctx, u8"ru"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (55)) = (((jobject) createStringLiteral(ctx, u8"\u0420\u0443\u0441\u0441\u043a\u0438\u0439"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (56)) = (((jobject) createStringLiteral(ctx, u8"sr"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (57)) = (((jobject) createStringLiteral(ctx, u8"\u0421\u0440\u043f\u0441\u043a\u0438"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (58)) = (((jobject) createStringLiteral(ctx, u8"uk_UA"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (59)) = (((jobject) createStringLiteral(ctx, u8"\u0423\u043a\u0440\u0430\u0457\u043d\u0441\u044c\u043a\u0430"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (60)) = (((jobject) createStringLiteral(ctx, u8"th"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (61)) = (((jobject) createStringLiteral(ctx, u8"\u0e44\u0e17\u0e22"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (62)) = (((jobject) createStringLiteral(ctx, u8"zh_CN"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (63)) = (((jobject) createStringLiteral(ctx, u8"\u7b80\u4f53\u4e2d\u6587"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (64)) = (((jobject) createStringLiteral(ctx, u8"zh_TW"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (65)) = (((jobject) createStringLiteral(ctx, u8"\u6b63\u9ad4\u4e2d\u6587"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (66)) = (((jobject) createStringLiteral(ctx, u8"ja"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (67)) = (((jobject) createStringLiteral(ctx, u8"\u65e5\u672c\u8a9e"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (68)) = (((jobject) createStringLiteral(ctx, u8"ko"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (69)) = (((jobject) createStringLiteral(ctx, u8"\ud55c\uad6d\uc5b4"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (70)) = (((jobject) createStringLiteral(ctx, u8"router"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (71)) = (((jobject) createStringLiteral(ctx, u8"router"_j)));
	sp[0].o = (jobject)SM_arc_struct_ObjectMap_of_Array1_java_lang_Object_R_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_mindustry_ui_dialogs_LanguageDialog(ctx);
	SF_mindustry_ui_dialogs_LanguageDialog_displayNames = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_LanguageDialog[] {
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
	(void *) M_mindustry_ui_dialogs_BaseDialog_lambda$new$1,
	(void *) M_mindustry_ui_dialogs_BaseDialog_lambda$new$0,
	(void *) M_mindustry_ui_dialogs_LanguageDialog_setup,
	(void *) M_mindustry_ui_dialogs_LanguageDialog_getLocale_R_java_util_Locale,
	(void *) M_mindustry_ui_dialogs_LanguageDialog_findClosestLocale,
	(void *) M_mindustry_ui_dialogs_LanguageDialog_lambda$setup$1_java_util_Locale_arc_scene_ui_TextButton,
	(void *) M_mindustry_ui_dialogs_LanguageDialog_lambda$setup$0_java_util_Locale,
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
	{ "getLocale", "()Ljava/util/Locale;" },
	{ "findClosestLocale", "()V" },
	{ "lambda$setup$1", "(Ljava/util/Locale;Larc/scene/ui/TextButton;)V" },
	{ "lambda$setup$0", "(Ljava/util/Locale;)V" },
};

static FieldMetadata fields[] {
	{ "displayNames", &class_arc_struct_ObjectMap, (intptr_t) &SF_mindustry_ui_dialogs_LanguageDialog_displayNames, "Larc/struct/ObjectMap;", 25 },
	{ "lastLocale", &class_java_util_Locale, offsetof(mindustry_ui_dialogs_LanguageDialog, F_lastLocale), "Ljava/util/Locale;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_LanguageDialog, 0, "()V", 1 },
	{ "getDisplayName", (intptr_t) SM_mindustry_ui_dialogs_LanguageDialog_getDisplayName_java_util_Locale_R_java_lang_String, 0, "(Ljava/util/Locale;)Ljava/lang/String;", 9 },
	{ "setup", (intptr_t) M_mindustry_ui_dialogs_LanguageDialog_setup, VTABLE_mindustry_ui_dialogs_LanguageDialog_setup, "()V", 2 },
	{ "getLocale", (intptr_t) M_mindustry_ui_dialogs_LanguageDialog_getLocale_R_java_util_Locale, VTABLE_mindustry_ui_dialogs_LanguageDialog_getLocale_R_java_util_Locale, "()Ljava/util/Locale;", 1 },
	{ "findClosestLocale", (intptr_t) M_mindustry_ui_dialogs_LanguageDialog_findClosestLocale, VTABLE_mindustry_ui_dialogs_LanguageDialog_findClosestLocale, "()V", 0 },
	{ "lambda$setup$1", (intptr_t) M_mindustry_ui_dialogs_LanguageDialog_lambda$setup$1_java_util_Locale_arc_scene_ui_TextButton, VTABLE_mindustry_ui_dialogs_LanguageDialog_lambda$setup$1_java_util_Locale_arc_scene_ui_TextButton, "(Ljava/util/Locale;Larc/scene/ui/TextButton;)V", 4098 },
	{ "lambda$setup$0", (intptr_t) M_mindustry_ui_dialogs_LanguageDialog_lambda$setup$0_java_util_Locale, VTABLE_mindustry_ui_dialogs_LanguageDialog_lambda$setup$0_java_util_Locale, "(Ljava/util/Locale;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ui_dialogs_LanguageDialog, 0, "()V", 8 },
};

Class class_mindustry_ui_dialogs_LanguageDialog{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/LanguageDialog",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_BaseDialog,
		.size = sizeof(mindustry_ui_dialogs_LanguageDialog),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_LanguageDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_LanguageDialog,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_LanguageDialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 302,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_LanguageDialog = registerClass(&class_mindustry_ui_dialogs_LanguageDialog);

}
