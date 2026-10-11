#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable.h"
#include "java/lang/Integer.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_StringProcessor.h"
#include "java/lang/Boolean.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_Setting.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_invoke_java_lang_Runnable_1.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_AreaTextSetting.h"
#include "java/lang/Runnable.h"
#include "arc/func/Intc.h"
#include "arc/func/Cons.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_CheckSetting.h"
#include "java/lang/String.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/Settings.h"
#include "arc/func/Boolc.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_TextSetting.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_SliderSetting.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"

extern "C" {


void mark_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_layout_Table(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable *) object;
	if (self->F_list)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_list)->clazz)->markFunction)((jobject) self->F_list, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_layout_Table(ctx);
}

void init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(704);
	init_arc_scene_ui_layout_Table(ctx, (frame[0].o));
	LINE_NUMBER(702);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable *) NULL_CHECK(sp[0].o))->F_list = (jref) sp[1].o;
	LINE_NUMBER(705);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_left_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	LINE_NUMBER(706);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_getSettings_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable:getSettings", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(709);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable *) NULL_CHECK((frame[0].o)))->F_list;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_pref_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable:pref", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(713);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable *) NULL_CHECK((frame[0].o)))->F_list;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(714);
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(715);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable:sliderPref", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(718);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (jint(1)), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable:sliderPref", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(722);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_arc_func_Intc_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_arc_func_Intc_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_arc_func_Intc_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable:sliderPref", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(726);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_arc_func_Intc_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_arc_func_Intc_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (jint(1)), (frame[5].o), (frame[6].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_arc_func_Intc_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable:sliderPref", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(731);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable *) NULL_CHECK((frame[0].o)))->F_list;
	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting);
	init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_arc_func_Intc(ctx, sp[1].o, (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].o), (frame[7].o));
	frame[8].o = sp[1].o;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(732);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[1].o);
	jint temp0 = jint(1);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[2].i));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	((func_arc_Settings_defaults_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_defaults_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(733);
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(734);
	popStackFrame(ctx);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable:checkPref", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(738);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable *) NULL_CHECK((frame[0].o)))->F_list;
	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting);
	init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_java_lang_String_boolean_arc_func_Boolc(ctx, sp[1].o, (frame[1].o), (frame[2].i), (jobject(nullptr)));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(739);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[1].o);
	jint temp0 = jint(1);
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (frame[2].i));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	((func_arc_Settings_defaults_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_defaults_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(740);
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(741);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean_arc_func_Boolc(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable:checkPref", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(744);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable *) NULL_CHECK((frame[0].o)))->F_list;
	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting);
	init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_java_lang_String_boolean_arc_func_Boolc(ctx, sp[1].o, (frame[1].o), (frame[2].i), (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(745);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[1].o);
	jint temp0 = jint(1);
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (frame[2].i));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	((func_arc_Settings_defaults_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_defaults_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(746);
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(747);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_textPref_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable:textPref", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(750);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable *) NULL_CHECK((frame[0].o)))->F_list;
	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting);
	init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_java_lang_String_java_lang_String_arc_func_Cons(ctx, sp[1].o, (frame[1].o), (frame[2].o), (jobject(nullptr)));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(751);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[1].o);
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (frame[2].o);
	((func_arc_Settings_defaults_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_defaults_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(752);
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(753);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_textPref_java_lang_String_java_lang_String_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable:textPref", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(756);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable *) NULL_CHECK((frame[0].o)))->F_list;
	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting);
	init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_java_lang_String_java_lang_String_arc_func_Cons(ctx, sp[1].o, (frame[1].o), (frame[2].o), (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(757);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[1].o);
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (frame[2].o);
	((func_arc_Settings_defaults_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_defaults_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(758);
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(759);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_areaTextPref_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable:areaTextPref", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(762);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable *) NULL_CHECK((frame[0].o)))->F_list;
	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$AreaTextSetting(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$AreaTextSetting);
	init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$AreaTextSetting_java_lang_String_java_lang_String_arc_func_Cons(ctx, sp[1].o, (frame[1].o), (frame[2].o), (jobject(nullptr)));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(763);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[1].o);
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (frame[2].o);
	((func_arc_Settings_defaults_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_defaults_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(764);
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(765);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_areaTextPref_java_lang_String_java_lang_String_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable:areaTextPref", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(768);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable *) NULL_CHECK((frame[0].o)))->F_list;
	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$AreaTextSetting(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$AreaTextSetting);
	init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$AreaTextSetting_java_lang_String_java_lang_String_arc_func_Cons(ctx, sp[1].o, (frame[1].o), (frame[2].o), (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(769);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[1].o);
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (frame[2].o);
	((func_arc_Settings_defaults_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_defaults_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(770);
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(771);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable:rebuild", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(774);
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_clearChildren) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_clearChildren])(ctx, (frame[0].o));
	LINE_NUMBER(776);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable *) NULL_CHECK((frame[0].o)))->F_list;
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
	frame[2].o = (checkCast(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting, sp[0].o));
	LINE_NUMBER(777);
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_add_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_add_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(778);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(780);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"settings.reset"_j))), (((jobject) createStringLiteral(ctx, u8"Reset to Defaults"_j))));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(14.0f);
	LINE_NUMBER(786);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(240.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	LINE_NUMBER(787);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_lambda$rebuild$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable:lambda$rebuild$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(781);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable *) NULL_CHECK((frame[0].o)))->F_list;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting, sp[0].o));
	LINE_NUMBER(782);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting *) NULL_CHECK((frame[2].o)))->F_name;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting *) NULL_CHECK((frame[2].o)))->F_title;
	if (sp[0].o != nullptr) goto label_4;
	}
	goto label_1;
label_4:;
	{
	LINE_NUMBER(783);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting *) NULL_CHECK((frame[2].o)))->F_name;
	((func_arc_Settings_remove_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_remove_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(784);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(785);
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(786);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable[] {
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
	(void *) M_arc_scene_ui_layout_Table_draw,
	(void *) M_arc_scene_Group_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_hit_float_float_boolean_R_arc_scene_Element,
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
	(void *) M_arc_scene_Group_setScene_arc_scene_Scene,
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
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_getSettings_R_arc_struct_Seq,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_pref_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_arc_func_Intc_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_arc_func_Intc_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean_arc_func_Boolc,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_textPref_java_lang_String_java_lang_String,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_textPref_java_lang_String_java_lang_String_arc_func_Cons,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_areaTextPref_java_lang_String_java_lang_String,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_areaTextPref_java_lang_String_java_lang_String_arc_func_Cons,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_lambda$rebuild$0,
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
	{ "getSettings", "()Larc/struct/Seq;" },
	{ "pref", "(Lmindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$Setting;)V" },
	{ "sliderPref", "(Ljava/lang/String;IIILmindustry/ui/dialogs/SettingsMenuDialog$StringProcessor;)Lmindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$SliderSetting;" },
	{ "sliderPref", "(Ljava/lang/String;IIIILmindustry/ui/dialogs/SettingsMenuDialog$StringProcessor;)Lmindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$SliderSetting;" },
	{ "sliderPref", "(Ljava/lang/String;IIILmindustry/ui/dialogs/SettingsMenuDialog$StringProcessor;Larc/func/Intc;)Lmindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$SliderSetting;" },
	{ "sliderPref", "(Ljava/lang/String;IIIILmindustry/ui/dialogs/SettingsMenuDialog$StringProcessor;Larc/func/Intc;)Lmindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$SliderSetting;" },
	{ "checkPref", "(Ljava/lang/String;Z)V" },
	{ "checkPref", "(Ljava/lang/String;ZLarc/func/Boolc;)V" },
	{ "textPref", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "textPref", "(Ljava/lang/String;Ljava/lang/String;Larc/func/Cons;)V" },
	{ "areaTextPref", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "areaTextPref", "(Ljava/lang/String;Ljava/lang/String;Larc/func/Cons;)V" },
	{ "rebuild", "()V" },
	{ "lambda$rebuild$0", "()V" },
};

static jclass innerClasses[] {
	&class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting,
	&class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting,
	&class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting,
	&class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$AreaTextSetting,
	&class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting,
};

static FieldMetadata fields[] {
	{ "list", &class_arc_struct_Seq, offsetof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable, F_list), "Larc/struct/Seq;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable, 0, "()V", 1 },
	{ "getSettings", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_getSettings_R_arc_struct_Seq, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_getSettings_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "pref", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_pref_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_pref_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting, "(Lmindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$Setting;)V", 1 },
	{ "sliderPref", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting, "(Ljava/lang/String;IIILmindustry/ui/dialogs/SettingsMenuDialog$StringProcessor;)Lmindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$SliderSetting;", 1 },
	{ "sliderPref", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting, "(Ljava/lang/String;IIIILmindustry/ui/dialogs/SettingsMenuDialog$StringProcessor;)Lmindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$SliderSetting;", 1 },
	{ "sliderPref", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_arc_func_Intc_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_arc_func_Intc_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting, "(Ljava/lang/String;IIILmindustry/ui/dialogs/SettingsMenuDialog$StringProcessor;Larc/func/Intc;)Lmindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$SliderSetting;", 1 },
	{ "sliderPref", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_arc_func_Intc_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_sliderPref_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_arc_func_Intc_R_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting, "(Ljava/lang/String;IIIILmindustry/ui/dialogs/SettingsMenuDialog$StringProcessor;Larc/func/Intc;)Lmindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$SliderSetting;", 1 },
	{ "checkPref", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean, "(Ljava/lang/String;Z)V", 1 },
	{ "checkPref", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean_arc_func_Boolc, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_checkPref_java_lang_String_boolean_arc_func_Boolc, "(Ljava/lang/String;ZLarc/func/Boolc;)V", 1 },
	{ "textPref", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_textPref_java_lang_String_java_lang_String, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_textPref_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "textPref", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_textPref_java_lang_String_java_lang_String_arc_func_Cons, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_textPref_java_lang_String_java_lang_String_arc_func_Cons, "(Ljava/lang/String;Ljava/lang/String;Larc/func/Cons;)V", 1 },
	{ "areaTextPref", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_areaTextPref_java_lang_String_java_lang_String, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_areaTextPref_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "areaTextPref", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_areaTextPref_java_lang_String_java_lang_String_arc_func_Cons, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_areaTextPref_java_lang_String_java_lang_String_arc_func_Cons, "(Ljava/lang/String;Ljava/lang/String;Larc/func/Cons;)V", 1 },
	{ "rebuild", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_rebuild, "()V", 1 },
	{ "lambda$rebuild$0", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_lambda$rebuild$0, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_lambda$rebuild$0, "()V", 4098 },
};

Class class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable",
		.parentClass = (intptr_t) &class_arc_scene_ui_layout_Table,
		.size = sizeof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_dialogs_SettingsMenuDialog,
		.innerClassCount = 5,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 269,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable = registerClass(&class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable);

}

