#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_SliderSetting.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_SliderSetting_invoke_java_lang_Runnable_1.h"
#include "java/lang/Integer.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_StringProcessor.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_Setting.h"
#include "arc/scene/ui/ProgressBar.h"
#include "java/lang/Runnable.h"
#include "arc/func/Intc.h"
#include "java/lang/String.h"
#include "arc/scene/event/Touchable.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/Settings.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable.h"
#include "arc/scene/ui/layout/Scl.h"
#include "java/lang/Math.h"
#include "arc/scene/ui/Slider.h"
#include "arc/Core.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_SliderSetting.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/Styles.h"
#include "arc/scene/ui/Label.h"
#include "java/lang/CharSequence.h"
#include "arc/Graphics.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Label_LabelStyle.h"

extern "C" {


void mark_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting *) object;
	if (self->F_sp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sp)->clazz)->markFunction)((jobject) self->F_sp, mark, depth + 1);
	if (self->F_changed)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_changed)->clazz)->markFunction)((jobject) self->F_changed, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting(ctx);
}

void init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_arc_func_Intc(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$SliderSetting:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(838);
	init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(839);
	((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting *) NULL_CHECK((frame[0].o)))->F_def = (frame[2].i);
	LINE_NUMBER(840);
	((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting *) NULL_CHECK((frame[0].o)))->F_min = (frame[3].i);
	LINE_NUMBER(841);
	((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting *) NULL_CHECK((frame[0].o)))->F_max = (frame[4].i);
	LINE_NUMBER(842);
	((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting *) NULL_CHECK((frame[0].o)))->F_step = (frame[5].i);
	LINE_NUMBER(843);
	((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting *) NULL_CHECK((frame[0].o)))->F_sp = (jref) (frame[6].o);
	LINE_NUMBER(844);
	((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting *) NULL_CHECK((frame[0].o)))->F_changed = (jref) (frame[7].o);
	LINE_NUMBER(845);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting_add_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$SliderSetting:add", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(849);
	clinit_arc_scene_ui_Slider(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Slider);
	init_arc_scene_ui_Slider_float_float_float_boolean(ctx, sp[0].o, (jfloat(((jint)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting *) NULL_CHECK((frame[0].o)))->F_min))), (jfloat(((jint)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting *) NULL_CHECK((frame[0].o)))->F_max))), (jfloat(((jint)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting *) NULL_CHECK((frame[0].o)))->F_step))), (jint(0)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(851);
	sp[0].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[2].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_R_int])(ctx, sp[1].o, sp[2].o);
	jint temp1 = (jint)((func_arc_scene_ui_Slider_setValue_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Slider_setValue_float_R_boolean])(ctx, sp[0].o, (jfloat(temp0)));
	LINE_NUMBER(853);
	clinit_arc_scene_ui_Label(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Label);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8""_j));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	init_arc_scene_ui_Label_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(854);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(855);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting *) NULL_CHECK((frame[0].o)))->F_title;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(856);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[4].o), (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(857);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_float_float_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_float_float_float_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o), (jfloat(3.0f)), (jfloat(33.0f)), (jfloat(3.0f)), (jfloat(33.0f)));
	LINE_NUMBER(858);
	sp[0].o = frame[4].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(860);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting_invoke_java_lang_Runnable_1);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_Slider_changed_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Slider_changed_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(866);
	((func_arc_scene_ui_Slider_change) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Slider_change])(ctx, (frame[2].o));
	LINE_NUMBER(868);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[2].o);
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (frame[4].o);
	sp[1].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[2].o);
	jfloat temp3 = (jfloat(temp2)) / (jfloat(1.2f));
	jfloat temp4 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	jfloat temp5 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp3 / temp4), (jfloat(500.0f)));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, temp5);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, (jfloat(4.0f)));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[1].o);
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting_addDesc_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting_addDesc_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(869);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(870);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting_lambda$add$0_arc_scene_ui_Slider_arc_scene_ui_Label(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$SliderSetting:lambda$add$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(861);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting *) NULL_CHECK((frame[0].o)))->F_name;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Slider_getValue_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Slider_getValue_R_float])(ctx, (frame[1].o));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(temp0)));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(862);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting *) NULL_CHECK((frame[0].o)))->F_sp;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_Slider_getValue_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Slider_getValue_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_get_int_R_java_lang_String) resolveInterfaceMethod(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor, INDEX_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_get_int_R_java_lang_String, sp[1].o))(ctx, sp[1].o, (jint(temp1)));
	((func_arc_scene_ui_Label_setText_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setText_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(863);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting *) NULL_CHECK((frame[0].o)))->F_changed;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting *) NULL_CHECK((frame[0].o)))->F_changed;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Slider_getValue_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Slider_getValue_R_float])(ctx, (frame[1].o));
	((func_arc_func_Intc_get_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc, INDEX_arc_func_Intc_get_int, sp[0].o))(ctx, sp[0].o, (jint(temp0)));
	}
label_3:;
	LINE_NUMBER(864);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting[] {
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
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting_add_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_addDesc_arc_scene_Element,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting_lambda$add$0_arc_scene_ui_Slider_arc_scene_ui_Label,
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
	{ "add", "(Lmindustry/ui/dialogs/SettingsMenuDialog$SettingsTable;)V" },
	{ "addDesc", "(Larc/scene/Element;)V" },
	{ "lambda$add$0", "(Larc/scene/ui/Slider;Larc/scene/ui/Label;)V" },
};

static FieldMetadata fields[] {
	{ "def", &class_int, offsetof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting, F_def), "I", 0 },
	{ "min", &class_int, offsetof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting, F_min), "I", 0 },
	{ "max", &class_int, offsetof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting, F_max), "I", 0 },
	{ "step", &class_int, offsetof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting, F_step), "I", 0 },
	{ "sp", &class_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor, offsetof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting, F_sp), "Lmindustry/ui/dialogs/SettingsMenuDialog$StringProcessor;", 0 },
	{ "changed", &class_arc_func_Intc, offsetof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting, F_changed), "Larc/func/Intc;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting_java_lang_String_int_int_int_int_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_arc_func_Intc, 0, "(Ljava/lang/String;IIIILmindustry/ui/dialogs/SettingsMenuDialog$StringProcessor;Larc/func/Intc;)V", 1 },
	{ "add", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting_add_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting_add_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable, "(Lmindustry/ui/dialogs/SettingsMenuDialog$SettingsTable;)V", 1 },
	{ "lambda$add$0", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting_lambda$add$0_arc_scene_ui_Slider_arc_scene_ui_Label, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting_lambda$add$0_arc_scene_ui_Slider_arc_scene_ui_Label, "(Larc/scene/ui/Slider;Larc/scene/ui/Label;)V", 4098 },
};

Class class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$SliderSetting",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting,
		.size = sizeof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting = registerClass(&class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$SliderSetting);

}

