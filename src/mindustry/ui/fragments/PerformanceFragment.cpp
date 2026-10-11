#include "mindustry/ui/fragments/PerformanceFragment.h"
#include "mindustry/ui/fragments/PerformanceFragment_invoke_arc_func_Cons_9.h"
#include "arc/func/Prov.h"
#include "mindustry/ui/fragments/PerformanceFragment_invoke_arc_func_Cons_6.h"
#include "mindustry/ui/fragments/PerformanceFragment_invoke_arc_func_Cons_5.h"
#include "mindustry/ui/fragments/PerformanceFragment_invoke_arc_func_Cons_8.h"
#include "mindustry/ui/fragments/PerformanceFragment_invoke_arc_func_Cons_7.h"
#include "arc/func/Boolp.h"
#include "arc/graphics/Color.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "arc/scene/event/Touchable.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/Settings.h"
#include "mindustry/ui/fragments/PerformanceFragment.h"
#include "mindustry/ui/fragments/PerformanceFragment_invoke_arc_func_Boolp_1.h"
#include "arc/Core.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/core/PerfCounter.h"
#include "arc/util/Structs.h"
#include "mindustry/ui/fragments/PerformanceFragment_invoke_arc_func_Prov_3.h"
#include "mindustry/ui/fragments/PerformanceFragment_invoke_arc_func_Prov_2.h"
#include "mindustry/ui/Styles.h"
#include "java/lang/Enum.h"
#include "arc/scene/ui/Label.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/style/Style.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "mindustry/ui/fragments/PerformanceFragment_PerfBar.h"
#include "arc/struct/ObjectMap.h"

extern "C" {

jobject SF_mindustry_ui_fragments_PerformanceFragment_counterToColor;

void mark_mindustry_ui_fragments_PerformanceFragment(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ui_fragments_PerformanceFragment_counterToColor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_PerformanceFragment_counterToColor)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_PerformanceFragment_counterToColor, mark, depth + 1);
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
	auto self = (mindustry_ui_fragments_PerformanceFragment *) object;
}

void init_mindustry_ui_fragments_PerformanceFragment(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PerformanceFragment:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PerformanceFragment(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_fragments_PerformanceFragment_color_mindustry_core_PerfCounter_R_arc_graphics_Color(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PerformanceFragment:color", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PerformanceFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(33);
	clinit_mindustry_ui_fragments_PerformanceFragment(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_fragments_PerformanceFragment_counterToColor;
	sp[1].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_graphics_Color, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PerformanceFragment_build_arc_scene_Group(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PerformanceFragment:build", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(37);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Cons_5);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Group_fill_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PerformanceFragment_lambda$build$0_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PerformanceFragment:lambda$build$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PerformanceFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Boolp_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black8;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Cons_6);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(8.0f);
	LINE_NUMBER(48);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	frame[1].o = sp[0].o;
	LINE_NUMBER(50);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black8;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Cons_7);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(69);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(71);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[1].o));
	((func_arc_scene_ui_layout_Table_toFront) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_layout_Table_toFront])(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o)));
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PerformanceFragment_lambda$build$3_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PerformanceFragment:lambda$build$3", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PerformanceFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (jfloat(3.0f)));
	LINE_NUMBER(54);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(56);
	frame[1].f = (jfloat(1));
	LINE_NUMBER(57);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(58);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_displayedCounters;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_7:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_8;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Prov_2);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)SM_mindustry_ui_fragments_PerformanceFragment_color_mindustry_core_PerfCounter_R_arc_graphics_Color(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Cons_8);
		proxy->F_field0 = (frame[1].f);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(58);
	INST_IINC(4, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(30.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(64);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_all;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_14:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_15;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(65);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_displayedCounters;
	jint temp0 = (jint)SM_arc_util_Structs_contains_Array1_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, (frame[5].o));
	if (temp0 == 0) goto label_17;
	}
	goto label_18;
label_17:;
	{
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Prov_3);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PerformanceFragment_invoke_arc_func_Cons_9);
		proxy->F_field0 = (frame[1].f);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)SM_mindustry_ui_fragments_PerformanceFragment_color_mindustry_core_PerfCounter_R_arc_graphics_Color(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_18:;
	{
	LINE_NUMBER(64);
	INST_IINC(4, 1);
	goto label_14;
	}
label_15:;
	LINE_NUMBER(69);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PerformanceFragment_lambda$build$7_float_arc_scene_ui_Label(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PerformanceFragment:lambda$build$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PerformanceFragment(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(67);
	((func_arc_scene_ui_Label_setFontScale_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Label_setFontScale_float])(ctx, (frame[1].o), (frame[0].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_fragments_PerformanceFragment_lambda$build$6_mindustry_core_PerfCounter_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PerformanceFragment:lambda$build$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PerformanceFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((func_mindustry_core_PerfCounter_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_PerfCounter_name_R_java_lang_String])(ctx, (frame[0].o));
	jfloat temp0 = (jfloat)((func_mindustry_core_PerfCounter_valueMs_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_PerfCounter_valueMs_R_float])(ctx, (frame[0].o));
	sp[1].o = (jobject)SM_arc_util_Strings_fixed_float_int_R_java_lang_String(ctx, temp0, (jint(1)));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001: \u0001"_j.string, 2, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PerformanceFragment_lambda$build$5_float_arc_scene_ui_Label(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PerformanceFragment:lambda$build$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PerformanceFragment(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(59);
	((func_arc_scene_ui_Label_setFontScale_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Label_setFontScale_float])(ctx, (frame[1].o), (frame[0].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_fragments_PerformanceFragment_lambda$build$4_mindustry_core_PerfCounter_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PerformanceFragment:lambda$build$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PerformanceFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((func_mindustry_core_PerfCounter_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_PerfCounter_name_R_java_lang_String])(ctx, (frame[0].o));
	jfloat temp0 = (jfloat)((func_mindustry_core_PerfCounter_valueMs_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_PerfCounter_valueMs_R_float])(ctx, (frame[0].o));
	sp[1].o = (jobject)SM_arc_util_Strings_fixed_float_int_R_java_lang_String(ctx, temp0, (jint(1)));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001: \u0001"_j.string, 2, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PerformanceFragment_lambda$build$2_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PerformanceFragment:lambda$build$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PerformanceFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (jfloat(6.0f)));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_fragments_PerformanceFragment$PerfBar(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_fragments_PerformanceFragment$PerfBar);
	init_mindustry_ui_fragments_PerformanceFragment$PerfBar(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(400.0f)), (jfloat(50.0f)));
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_PerformanceFragment_lambda$build$1_arc_scene_ui_layout_Table_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PerformanceFragment:lambda$build$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PerformanceFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(39);
	((func_arc_scene_ui_layout_Table_toFront) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_toFront])(ctx, (frame[0].o));
	LINE_NUMBER(40);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"showperformance"_j))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_ui_fragments_PerformanceFragment(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PerformanceFragment:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PerformanceFragment(ctx);
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (18));
	jint temp0 = jint(0);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_buildingUpdate;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_items;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_powerUpdate;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_powerLight;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_unitUpdate;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_royal;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_ui;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_remove;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_render;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_reactorPurple;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_stateUpdate;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_cyan;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_other;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_pink;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = 14;
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_entityMisc;
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 15;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_sky;
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = 16;
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_bulletUpdate;
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = 17;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_redDust;
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_ObjectMap_of_Array1_java_lang_Object_R_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_mindustry_ui_fragments_PerformanceFragment(ctx);
	SF_mindustry_ui_fragments_PerformanceFragment_counterToColor = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_fragments_PerformanceFragment[] {
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
	(void *) M_mindustry_ui_fragments_PerformanceFragment_build_arc_scene_Group,
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
	{ "build", "(Larc/scene/Group;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_ui_fragments_PerformanceFragment$PerfBar,
};

static FieldMetadata fields[] {
	{ "counterToColor", &class_arc_struct_ObjectMap, (intptr_t) &SF_mindustry_ui_fragments_PerformanceFragment_counterToColor, "Larc/struct/ObjectMap;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_PerformanceFragment, 0, "()V", 1 },
	{ "color", (intptr_t) SM_mindustry_ui_fragments_PerformanceFragment_color_mindustry_core_PerfCounter_R_arc_graphics_Color, 0, "(Lmindustry/core/PerfCounter;)Larc/graphics/Color;", 10 },
	{ "build", (intptr_t) M_mindustry_ui_fragments_PerformanceFragment_build_arc_scene_Group, VTABLE_mindustry_ui_fragments_PerformanceFragment_build_arc_scene_Group, "(Larc/scene/Group;)V", 1 },
	{ "lambda$build$0", (intptr_t) SM_mindustry_ui_fragments_PerformanceFragment_lambda$build$0_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$3", (intptr_t) SM_mindustry_ui_fragments_PerformanceFragment_lambda$build$3_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$7", (intptr_t) SM_mindustry_ui_fragments_PerformanceFragment_lambda$build$7_float_arc_scene_ui_Label, 0, "(FLarc/scene/ui/Label;)V", 4106 },
	{ "lambda$build$6", (intptr_t) SM_mindustry_ui_fragments_PerformanceFragment_lambda$build$6_mindustry_core_PerfCounter_R_java_lang_CharSequence, 0, "(Lmindustry/core/PerfCounter;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$build$5", (intptr_t) SM_mindustry_ui_fragments_PerformanceFragment_lambda$build$5_float_arc_scene_ui_Label, 0, "(FLarc/scene/ui/Label;)V", 4106 },
	{ "lambda$build$4", (intptr_t) SM_mindustry_ui_fragments_PerformanceFragment_lambda$build$4_mindustry_core_PerfCounter_R_java_lang_CharSequence, 0, "(Lmindustry/core/PerfCounter;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$build$2", (intptr_t) SM_mindustry_ui_fragments_PerformanceFragment_lambda$build$2_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$1", (intptr_t) SM_mindustry_ui_fragments_PerformanceFragment_lambda$build$1_arc_scene_ui_layout_Table_R_boolean, 0, "(Larc/scene/ui/layout/Table;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ui_fragments_PerformanceFragment, 0, "()V", 8 },
};

Class class_mindustry_ui_fragments_PerformanceFragment{
		.nativeName = (intptr_t) "mindustry/ui/fragments/PerformanceFragment",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_fragments_PerformanceFragment),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_PerformanceFragment,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_PerformanceFragment,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_PerformanceFragment,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_PerformanceFragment = registerClass(&class_mindustry_ui_fragments_PerformanceFragment);

}
