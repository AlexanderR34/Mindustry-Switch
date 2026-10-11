#include "mindustry/maps/filters/FilterOption_SliderOption.h"
#include "arc/scene/ui/Slider.h"
#include "arc/func/Prov.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/maps/filters/FilterOption.h"
#include "mindustry/maps/filters/FilterOption_SliderOption.h"
#include "arc/func/Floatc.h"
#include "mindustry/ui/Styles.h"
#include "arc/scene/ui/Label.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/ui/ProgressBar.h"
#include "java/lang/Runnable.h"
#include "arc/scene/style/Style.h"
#include "arc/util/Strings.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/scene/event/Touchable.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/maps/filters/FilterOption_SliderOption_invoke_arc_func_Prov_1.h"
#include "arc/func/Floatp.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_maps_filters_FilterOption$SliderOption(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_maps_filters_FilterOption(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_maps_filters_FilterOption$SliderOption *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_getter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_getter)->clazz)->markFunction)((jobject) self->F_getter, mark, depth + 1);
	if (self->F_setter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_setter)->clazz)->markFunction)((jobject) self->F_setter, mark, depth + 1);
}

void clinit_mindustry_maps_filters_FilterOption$SliderOption(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_maps_filters_FilterOption(ctx);
}

void init_mindustry_maps_filters_FilterOption$SliderOption_java_lang_String_arc_func_Floatp_arc_func_Floatc_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption$SliderOption:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_FilterOption$SliderOption(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(45);
	init_mindustry_maps_filters_FilterOption$SliderOption_java_lang_String_arc_func_Floatp_arc_func_Floatc_float_float_float(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].f), (frame[5].f), (jfloat(1,000000e-05f)));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_maps_filters_FilterOption$SliderOption_java_lang_String_arc_func_Floatp_arc_func_Floatc_float_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption$SliderOption:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_FilterOption$SliderOption(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(48);
	init_mindustry_maps_filters_FilterOption(ctx, (frame[0].o));
	LINE_NUMBER(42);
	((mindustry_maps_filters_FilterOption$SliderOption *) NULL_CHECK((frame[0].o)))->F_display = (jint(1));
	LINE_NUMBER(49);
	((mindustry_maps_filters_FilterOption$SliderOption *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(50);
	((mindustry_maps_filters_FilterOption$SliderOption *) NULL_CHECK((frame[0].o)))->F_getter = (jref) (frame[2].o);
	LINE_NUMBER(51);
	((mindustry_maps_filters_FilterOption$SliderOption *) NULL_CHECK((frame[0].o)))->F_setter = (jref) (frame[3].o);
	LINE_NUMBER(52);
	((mindustry_maps_filters_FilterOption$SliderOption *) NULL_CHECK((frame[0].o)))->F_min = (frame[4].f);
	LINE_NUMBER(53);
	((mindustry_maps_filters_FilterOption$SliderOption *) NULL_CHECK((frame[0].o)))->F_max = (frame[5].f);
	LINE_NUMBER(54);
	((mindustry_maps_filters_FilterOption$SliderOption *) NULL_CHECK((frame[0].o)))->F_step = (frame[6].f);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_FilterOption$SliderOption_display_R_mindustry_maps_filters_FilterOption$SliderOption(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption$SliderOption:display", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	((mindustry_maps_filters_FilterOption$SliderOption *) NULL_CHECK((frame[0].o)))->F_display = (jint(1));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_FilterOption$SliderOption_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption$SliderOption:build", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	if (((jint)((mindustry_maps_filters_FilterOption$SliderOption *) NULL_CHECK((frame[0].o)))->F_display) != 0) goto label_1;
	}
	{
	LINE_NUMBER(66);
	clinit_arc_scene_ui_Label(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Label);
	sp[1].o = (jobject)((mindustry_maps_filters_FilterOption$SliderOption *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@filter.option.\u0001"_j.string, 1, sp[1].o);
	init_arc_scene_ui_Label_java_lang_CharSequence(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(67);
	((func_arc_scene_ui_Label_setWrap_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_Label_setWrap_boolean])(ctx, (frame[3].o), (jint(1)));
	LINE_NUMBER(68);
	sp[0].o = frame[3].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	((func_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(69);
	frame[2].o = (frame[3].o);
	LINE_NUMBER(70);
	goto label_7;
	}
label_1:;
	{
	LINE_NUMBER(71);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(11.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(11.0f)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(72);
	frame[2].o = (frame[3].o);
	LINE_NUMBER(73);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_maps_filters_FilterOption$SliderOption *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@filter.option.\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(74);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_FilterOption$SliderOption_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_maps_filters_FilterOption$SliderOption_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$SliderOption_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (16));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	}
label_7:;
	{
	LINE_NUMBER(76);
	sp[0].o = frame[2].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(78);
	clinit_arc_scene_ui_Slider(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Slider);
	init_arc_scene_ui_Slider_float_float_float_boolean(ctx, sp[0].o, ((jfloat)((mindustry_maps_filters_FilterOption$SliderOption *) NULL_CHECK((frame[0].o)))->F_min), ((jfloat)((mindustry_maps_filters_FilterOption$SliderOption *) NULL_CHECK((frame[0].o)))->F_max), ((jfloat)((mindustry_maps_filters_FilterOption$SliderOption *) NULL_CHECK((frame[0].o)))->F_step), (jint(0)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(79);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_maps_filters_FilterOption$SliderOption *) NULL_CHECK((frame[0].o)))->F_setter;
	((func_arc_scene_ui_Slider_moved_arc_func_Floatc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Slider_moved_arc_func_Floatc])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(80);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_maps_filters_FilterOption$SliderOption *) NULL_CHECK((frame[0].o)))->F_getter;
	jfloat temp0 = (jfloat)((func_arc_func_Floatp_get_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatp, INDEX_arc_func_Floatp_get_R_float, sp[1].o))(ctx, sp[1].o);
	jint temp1 = (jint)((func_arc_scene_ui_Slider_setValue_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Slider_setValue_float_R_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(81);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_updateEditorOnChange) == 0) goto label_15;
	}
	{
	LINE_NUMBER(82);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_maps_filters_FilterOption *) NULL_CHECK((frame[0].o)))->F_changed;
	((func_arc_scene_ui_Slider_changed_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Slider_changed_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(84);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_maps_filters_FilterOption *) NULL_CHECK((frame[0].o)))->F_changed;
	((func_arc_scene_ui_Slider_released_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Slider_released_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	}
label_17:;
	{
	LINE_NUMBER(87);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (frame[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_FilterOption$SliderOption_lambda$build$0_R_java_lang_CharSequence(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption$SliderOption:lambda$build$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_maps_filters_FilterOption$SliderOption *) NULL_CHECK((frame[0].o)))->F_getter;
	jfloat temp0 = (jfloat)((func_arc_func_Floatp_get_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatp, INDEX_arc_func_Floatp_get_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, temp0, (jint(2)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_filters_FilterOption$SliderOption[] {
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
	(void *) M_mindustry_maps_filters_FilterOption$SliderOption_build_arc_scene_ui_layout_Table,
	(void *) M_mindustry_maps_filters_FilterOption$SliderOption_display_R_mindustry_maps_filters_FilterOption$SliderOption,
	(void *) M_mindustry_maps_filters_FilterOption$SliderOption_lambda$build$0_R_java_lang_CharSequence,
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
	{ "build", "(Larc/scene/ui/layout/Table;)V" },
	{ "display", "()Lmindustry/maps/filters/FilterOption$SliderOption;" },
	{ "lambda$build$0", "()Ljava/lang/CharSequence;" },
};

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(mindustry_maps_filters_FilterOption$SliderOption, F_name), "Ljava/lang/String;", 16 },
	{ "getter", &class_arc_func_Floatp, offsetof(mindustry_maps_filters_FilterOption$SliderOption, F_getter), "Larc/func/Floatp;", 16 },
	{ "setter", &class_arc_func_Floatc, offsetof(mindustry_maps_filters_FilterOption$SliderOption, F_setter), "Larc/func/Floatc;", 16 },
	{ "min", &class_float, offsetof(mindustry_maps_filters_FilterOption$SliderOption, F_min), "F", 16 },
	{ "max", &class_float, offsetof(mindustry_maps_filters_FilterOption$SliderOption, F_max), "F", 16 },
	{ "step", &class_float, offsetof(mindustry_maps_filters_FilterOption$SliderOption, F_step), "F", 16 },
	{ "display", &class_boolean, offsetof(mindustry_maps_filters_FilterOption$SliderOption, F_display), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_filters_FilterOption$SliderOption_java_lang_String_arc_func_Floatp_arc_func_Floatc_float_float, 0, "(Ljava/lang/String;Larc/func/Floatp;Larc/func/Floatc;FF)V", 0 },
	{ "<init>", (intptr_t) init_mindustry_maps_filters_FilterOption$SliderOption_java_lang_String_arc_func_Floatp_arc_func_Floatc_float_float_float, 0, "(Ljava/lang/String;Larc/func/Floatp;Larc/func/Floatc;FFF)V", 0 },
	{ "display", (intptr_t) M_mindustry_maps_filters_FilterOption$SliderOption_display_R_mindustry_maps_filters_FilterOption$SliderOption, VTABLE_mindustry_maps_filters_FilterOption$SliderOption_display_R_mindustry_maps_filters_FilterOption$SliderOption, "()Lmindustry/maps/filters/FilterOption$SliderOption;", 1 },
	{ "build", (intptr_t) M_mindustry_maps_filters_FilterOption$SliderOption_build_arc_scene_ui_layout_Table, VTABLE_mindustry_maps_filters_FilterOption$SliderOption_build_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "lambda$build$0", (intptr_t) M_mindustry_maps_filters_FilterOption$SliderOption_lambda$build$0_R_java_lang_CharSequence, VTABLE_mindustry_maps_filters_FilterOption$SliderOption_lambda$build$0_R_java_lang_CharSequence, "()Ljava/lang/CharSequence;", 4098 },
};

Class class_mindustry_maps_filters_FilterOption$SliderOption{
		.nativeName = (intptr_t) "mindustry/maps/filters/FilterOption$SliderOption",
		.parentClass = (intptr_t) &class_mindustry_maps_filters_FilterOption,
		.size = sizeof(mindustry_maps_filters_FilterOption$SliderOption),
		.classVtable = (intptr_t) vtable_mindustry_maps_filters_FilterOption$SliderOption,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_filters_FilterOption$SliderOption,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_filters_FilterOption$SliderOption,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_maps_filters_FilterOption,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_filters_FilterOption$SliderOption = registerClass(&class_mindustry_maps_filters_FilterOption$SliderOption);

}

