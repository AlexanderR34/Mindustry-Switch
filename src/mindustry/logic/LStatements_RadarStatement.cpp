#include "mindustry/logic/LStatements_RadarStatement.h"
#include "mindustry/logic/LStatements_RadarStatement_invoke_arc_func_Cons_19.h"
#include "mindustry/logic/LStatements_RadarStatement_invoke_arc_func_Cons_17.h"
#include "arc/func/Prov.h"
#include "mindustry/logic/LStatements_RadarStatement_invoke_arc_func_Cons_18.h"
#include "mindustry/logic/LStatement.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/logic/LStatements_RadarStatement.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "mindustry/logic/LStatements.h"
#include "mindustry/logic/RadarTarget.h"
#include "arc/scene/ui/Button.h"
#include "java/lang/String.h"
#include "mindustry/logic/LStatements_RadarStatement_invoke_java_lang_Runnable_6.h"
#include "mindustry/logic/LExecutor_RadarI.h"
#include "mindustry/logic/LStatements_RadarStatement_invoke_java_lang_Runnable_7.h"
#include "mindustry/logic/LStatements_RadarStatement_invoke_java_lang_Runnable_4.h"
#include "mindustry/logic/LStatements_RadarStatement_invoke_java_lang_Runnable_5.h"
#include "mindustry/logic/LStatements_RadarStatement_invoke_arc_func_Cons_22.h"
#include "mindustry/logic/RadarSort.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/logic/LStatements_RadarStatement_invoke_arc_func_Cons_23.h"
#include "mindustry/logic/LStatements_RadarStatement_invoke_arc_func_Cons_20.h"
#include "mindustry/logic/LStatements_RadarStatement_invoke_arc_func_Cons_21.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "mindustry/logic/LVar.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/logic/LAssembler.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/ui/Styles.h"
#include "java/lang/Enum.h"
#include "mindustry/logic/LCanvas.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LStatements_RadarStatement_invoke_arc_func_Prov_4.h"
#include "mindustry/logic/LStatements_RadarStatement_invoke_arc_func_Prov_5.h"
#include "mindustry/logic/LCategory.h"
#include "mindustry/logic/LStatements_RadarStatement_invoke_arc_func_Prov_3.h"
#include "mindustry/logic/LStatements_RadarStatement_invoke_arc_func_Cons_12.h"
#include "mindustry/logic/LStatements_RadarStatement_invoke_arc_func_Cons_15.h"
#include "mindustry/logic/LStatements_RadarStatement_invoke_arc_func_Cons_16.h"
#include "mindustry/logic/LStatements_RadarStatement_invoke_arc_func_Cons_13.h"
#include "mindustry/logic/LStatements_RadarStatement_invoke_arc_func_Cons_14.h"

extern "C" {


void mark_mindustry_logic_LStatements$RadarStatement(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_logic_LStatement(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_logic_LStatements$RadarStatement *) object;
	if (self->F_target1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target1)->clazz)->markFunction)((jobject) self->F_target1, mark, depth + 1);
	if (self->F_target2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target2)->clazz)->markFunction)((jobject) self->F_target2, mark, depth + 1);
	if (self->F_target3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target3)->clazz)->markFunction)((jobject) self->F_target3, mark, depth + 1);
	if (self->F_sort)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sort)->clazz)->markFunction)((jobject) self->F_sort, mark, depth + 1);
	if (self->F_radar)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_radar)->clazz)->markFunction)((jobject) self->F_radar, mark, depth + 1);
	if (self->F_sortOrder)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sortOrder)->clazz)->markFunction)((jobject) self->F_sortOrder, mark, depth + 1);
	if (self->F_output)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_output)->clazz)->markFunction)((jobject) self->F_output, mark, depth + 1);
}

void clinit_mindustry_logic_LStatements$RadarStatement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_logic_LStatement(ctx);
}

void init_mindustry_logic_LStatements$RadarStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$RadarStatement:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$RadarStatement(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(460);
	init_mindustry_logic_LStatement(ctx, (frame[0].o));
	LINE_NUMBER(461);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarTarget_enemy;
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK(sp[0].o))->F_target1 = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarTarget_any;
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK(sp[0].o))->F_target2 = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarTarget_any;
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK(sp[0].o))->F_target3 = (jref) sp[1].o;
	LINE_NUMBER(462);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_RadarSort(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarSort_distance;
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK(sp[0].o))->F_sort = (jref) sp[1].o;
	LINE_NUMBER(463);
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_radar = (jref) (((jobject) createStringLiteral(ctx, u8"turret1"_j)));
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_sortOrder = (jref) (((jobject) createStringLiteral(ctx, u8"1"_j)));
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_output = (jref) (((jobject) createStringLiteral(ctx, u8"result"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$RadarStatement_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$RadarStatement:build", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(467);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(469);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_output;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$RadarStatement_fields_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$RadarStatement_fields_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(471);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" = "_j))));
	LINE_NUMBER(473);
	jint temp0 = (jint)((func_mindustry_logic_LStatements$RadarStatement_buildFrom_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$RadarStatement_buildFrom_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(474);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"from"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_radar;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$RadarStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$RadarStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	}
label_4:;
	{
	LINE_NUMBER(477);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(478);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	((func_arc_scene_ui_layout_Table_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(479);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(481);
	frame[3].i = (jint(0));
	}
label_9:;
	{
	if ((frame[3].i) >= (jint(3))) goto label_10;
	}
	{
	LINE_NUMBER(482);
	frame[4].i = (frame[3].i);
	LINE_NUMBER(483);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Prov_3);
		proxy->F_field1 = (frame[4].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	frame[5].o = sp[0].o;
	LINE_NUMBER(485);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_14);
		proxy->F_field2 = (frame[4].i);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logict;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$RadarStatement_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_logic_LStatements$RadarStatement_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$RadarStatement_invoke_java_lang_Runnable_4);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(110.0f);
	jfloat temp1 = jfloat(40.0f);
	LINE_NUMBER(490);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(481);
	INST_IINC(3, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(493);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"order"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_sortOrder;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$RadarStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$RadarStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(495);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_16);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(506);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LStatements$RadarStatement_buildFrom_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$RadarStatement:buildFrom", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(509);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$RadarStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$RadarStatement:build", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(514);
	clinit_mindustry_logic_LExecutor$RadarI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LExecutor$RadarI);
	sp[1].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_target1;
	sp[2].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_target2;
	sp[3].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_target3;
	sp[4].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_sort;
	sp[5].o = frame[1].o;
	sp[6].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_radar;
	sp[5].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[5].o, sp[6].o);
	sp[6].o = frame[1].o;
	sp[7].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_sortOrder;
	sp[6].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[6].o, sp[7].o);
	sp[7].o = frame[1].o;
	sp[8].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_output;
	sp[7].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[7].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[7].o, sp[8].o);
	init_mindustry_logic_LExecutor$RadarI_mindustry_logic_RadarTarget_mindustry_logic_RadarTarget_mindustry_logic_RadarTarget_mindustry_logic_RadarSort_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$RadarStatement_category_R_mindustry_logic_LCategory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$RadarStatement:category", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(519);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCategory_block;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$RadarStatement_lambda$build$10_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$RadarStatement:lambda$build$10", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(496);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	((func_arc_scene_ui_layout_Table_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(497);
	jint temp0 = (jint)SM_mindustry_logic_LCanvas_isCompact_R_boolean(ctx);
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"sort"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_17);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(499);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_18(ctx);
		auto proxy = (mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_18 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_18);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logict;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$RadarStatement_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_logic_LStatements$RadarStatement_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$RadarStatement_invoke_java_lang_Runnable_5);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(180.0f);
	jfloat temp1 = jfloat(40.0f);
	LINE_NUMBER(502);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(504);
	jint temp2 = (jint)SM_mindustry_logic_LCanvas_isCompact_R_boolean(ctx);
	if (temp2 == 0) goto label_5;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"sort"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_19(ctx);
		auto proxy = (mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_19 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_19);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	LINE_NUMBER(505);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$RadarStatement_lambda$build$16(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/logic/LStatements$RadarStatement:lambda$build$16", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_logic_LStatements$RadarStatement(ctx);
	LINE_NUMBER(502);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$RadarStatement_lambda$build$11_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$RadarStatement:lambda$build$11", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(500);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Prov_4(ctx);
		auto proxy = (mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Prov_4 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Prov_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(501);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$RadarStatement_invoke_java_lang_Runnable_6(ctx);
		auto proxy = (mindustry_logic_LStatements$RadarStatement_invoke_java_lang_Runnable_6 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$RadarStatement_invoke_java_lang_Runnable_6);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(502);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$RadarStatement_lambda$build$13_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$RadarStatement:lambda$build$13", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(501);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_logic_RadarSort(ctx);
	sp[2].o = (jobject)SF_mindustry_logic_RadarSort_all;
	sp[3].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_sort;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_20(ctx);
		auto proxy = (mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_20 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_20);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	jint temp0 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_21(ctx);
		auto proxy = (mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_21 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_21);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_logic_LStatements$RadarStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$RadarStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, temp0, sp[5].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$RadarStatement_lambda$build$15_arc_scene_ui_layout_Cell(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$RadarStatement:lambda$build$15", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$RadarStatement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(501);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (jfloat(100.0f)), (jfloat(50.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$RadarStatement_lambda$build$14_mindustry_logic_RadarSort(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$RadarStatement:lambda$build$14", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(501);
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_sort = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$RadarStatement_lambda$build$12_R_java_lang_CharSequence(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$RadarStatement:lambda$build$12", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(500);
	sp[0].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_sort;
	sp[0].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_Enum_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$RadarStatement_lambda$build$9_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$RadarStatement:lambda$build$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(493);
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_sortOrder = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$RadarStatement_lambda$build$8(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/logic/LStatements$RadarStatement:lambda$build$8", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_logic_LStatements$RadarStatement(ctx);
	LINE_NUMBER(490);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$RadarStatement_lambda$build$3_arc_func_Prov_int_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$RadarStatement:lambda$build$3", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(486);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Prov_5(ctx);
		auto proxy = (mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Prov_5 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Prov_5);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(487);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$RadarStatement_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_logic_LStatements$RadarStatement_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$RadarStatement_invoke_java_lang_Runnable_7);
		proxy->F_field3 = (frame[2].i);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(490);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$RadarStatement_lambda$build$5_arc_scene_ui_Button_arc_func_Prov_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$RadarStatement:lambda$build$5", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(487);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[2].o = (jobject)SF_mindustry_logic_RadarTarget_all;
	sp[3].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	sp[3].o = checkCast(ctx, &class_mindustry_logic_RadarTarget, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_22(ctx);
		auto proxy = (mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_22 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_22);
		proxy->F_field1 = (frame[3].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	jint temp0 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_23(ctx);
		auto proxy = (mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_23 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$RadarStatement_invoke_arc_func_Cons_23);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_logic_LStatements$RadarStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$RadarStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, temp0, sp[5].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$RadarStatement_lambda$build$7_arc_scene_ui_layout_Cell(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$RadarStatement:lambda$build$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$RadarStatement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(489);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (jfloat(110.0f)), (jfloat(50.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$RadarStatement_lambda$build$6_int_mindustry_logic_RadarTarget(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$RadarStatement:lambda$build$6", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(488);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_target1 = (jref) (frame[2].o);
	goto label_2;
	}
label_1:;
	{
	if ((frame[1].i) != (jint(1))) goto label_3;
	}
	{
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_target2 = (jref) (frame[2].o);
	goto label_2;
	}
label_3:;
	{
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_target3 = (jref) (frame[2].o);
	}
label_2:;
	LINE_NUMBER(489);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LStatements$RadarStatement_lambda$build$4_arc_func_Prov_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$RadarStatement:lambda$build$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$RadarStatement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(486);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_Enum_R_java_lang_String(ctx, (checkCast(ctx, &class_java_lang_Enum, sp[0].o)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$RadarStatement_lambda$build$2_int_R_mindustry_logic_RadarTarget(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$RadarStatement:lambda$build$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(483);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_target1;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	if ((frame[1].i) != (jint(1))) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_target2;
	sp += 1;
	goto label_2;
	}
label_3:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK(sp[-1].o))->F_target3;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$RadarStatement_lambda$build$1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$RadarStatement:lambda$build$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(474);
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_radar = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$RadarStatement_lambda$build$0_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$RadarStatement:lambda$build$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(469);
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_output = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LStatements$RadarStatement[] {
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
	(void *) M_mindustry_logic_LStatements$RadarStatement_build_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$RadarStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction,
	(void *) M_mindustry_logic_LStatements$RadarStatement_category_R_mindustry_logic_LCategory,
	(void *) M_mindustry_logic_LStatement_copy_R_mindustry_logic_LStatement,
	(void *) M_mindustry_logic_LStatement_useWrapping_R_boolean,
	(void *) M_mindustry_logic_LStatement_hidden_R_boolean,
	(void *) M_mindustry_logic_LStatement_privileged_R_boolean,
	(void *) M_mindustry_logic_LStatement_nonPrivileged_R_boolean,
	(void *) M_mindustry_logic_LStatement_param_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_fields_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_fields_arc_scene_ui_layout_Table_java_lang_String_boolean_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_col_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons,
	(void *) M_mindustry_logic_LStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons,
	(void *) M_mindustry_logic_LStatement_fieldAlignSelect_arc_scene_ui_layout_Table_arc_func_Prov_arc_func_Cons_boolean_boolean,
	(void *) M_mindustry_logic_LStatement_afterRead,
	(void *) M_mindustry_logic_LStatement_write_java_lang_StringBuilder,
	(void *) M_mindustry_logic_LStatement_setupUI,
	(void *) M_mindustry_logic_LStatement_saveUI,
	(void *) M_mindustry_logic_LStatement_typeName_R_java_lang_String,
	(void *) M_mindustry_logic_LStatement_statementKey_R_java_lang_String,
	(void *) M_mindustry_logic_LStatement_localizedName_R_java_lang_String,
	(void *) M_mindustry_logic_LStatement_name_R_java_lang_String,
	(void *) M_mindustry_logic_LStatements$RadarStatement_buildFrom_R_boolean,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$10_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$11_arc_scene_ui_Button,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$13_arc_scene_ui_Button,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$14_mindustry_logic_RadarSort,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$12_R_java_lang_CharSequence,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$9_java_lang_String,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$3_arc_func_Prov_int_arc_scene_ui_Button,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$5_arc_scene_ui_Button_arc_func_Prov_int,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$6_int_mindustry_logic_RadarTarget,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$2_int_R_mindustry_logic_RadarTarget,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$1_java_lang_String,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$0_java_lang_String,
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
	{ "build", "(Lmindustry/logic/LAssembler;)Lmindustry/logic/LExecutor$LInstruction;" },
	{ "category", "()Lmindustry/logic/LCategory;" },
	{ "copy", "()Lmindustry/logic/LStatement;" },
	{ "useWrapping", "()Z" },
	{ "hidden", "()Z" },
	{ "privileged", "()Z" },
	{ "nonPrivileged", "()Z" },
	{ "param", "(Larc/scene/ui/layout/Cell;)V" },
	{ "field", "(Larc/scene/ui/layout/Table;Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "fields", "(Larc/scene/ui/layout/Table;Ljava/lang/String;Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "fields", "(Larc/scene/ui/layout/Table;Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "fields", "(Larc/scene/ui/layout/Table;Ljava/lang/String;ZLjava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "col", "(Larc/scene/ui/layout/Table;Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "showSelect", "(Larc/scene/ui/Button;[Ljava/lang/Object;Ljava/lang/Object;Larc/func/Cons;ILarc/func/Cons;)V" },
	{ "showSelect", "(Larc/scene/ui/Button;[Ljava/lang/Object;Ljava/lang/Object;Larc/func/Cons;)V" },
	{ "fieldAlignSelect", "(Larc/scene/ui/layout/Table;Larc/func/Prov;Larc/func/Cons;ZZ)V" },
	{ "afterRead", "()V" },
	{ "write", "(Ljava/lang/StringBuilder;)V" },
	{ "setupUI", "()V" },
	{ "saveUI", "()V" },
	{ "typeName", "()Ljava/lang/String;" },
	{ "statementKey", "()Ljava/lang/String;" },
	{ "localizedName", "()Ljava/lang/String;" },
	{ "name", "()Ljava/lang/String;" },
	{ "buildFrom", "()Z" },
	{ "lambda$build$10", "(Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$11", "(Larc/scene/ui/Button;)V" },
	{ "lambda$build$13", "(Larc/scene/ui/Button;)V" },
	{ "lambda$build$14", "(Lmindustry/logic/RadarSort;)V" },
	{ "lambda$build$12", "()Ljava/lang/CharSequence;" },
	{ "lambda$build$9", "(Ljava/lang/String;)V" },
	{ "lambda$build$3", "(Larc/func/Prov;ILarc/scene/ui/Button;)V" },
	{ "lambda$build$5", "(Larc/scene/ui/Button;Larc/func/Prov;I)V" },
	{ "lambda$build$6", "(ILmindustry/logic/RadarTarget;)V" },
	{ "lambda$build$2", "(I)Lmindustry/logic/RadarTarget;" },
	{ "lambda$build$1", "(Ljava/lang/String;)V" },
	{ "lambda$build$0", "(Ljava/lang/String;)V" },
};

static FieldMetadata fields[] {
	{ "target1", &class_mindustry_logic_RadarTarget, offsetof(mindustry_logic_LStatements$RadarStatement, F_target1), "Lmindustry/logic/RadarTarget;", 1 },
	{ "target2", &class_mindustry_logic_RadarTarget, offsetof(mindustry_logic_LStatements$RadarStatement, F_target2), "Lmindustry/logic/RadarTarget;", 1 },
	{ "target3", &class_mindustry_logic_RadarTarget, offsetof(mindustry_logic_LStatements$RadarStatement, F_target3), "Lmindustry/logic/RadarTarget;", 1 },
	{ "sort", &class_mindustry_logic_RadarSort, offsetof(mindustry_logic_LStatements$RadarStatement, F_sort), "Lmindustry/logic/RadarSort;", 1 },
	{ "radar", &class_java_lang_String, offsetof(mindustry_logic_LStatements$RadarStatement, F_radar), "Ljava/lang/String;", 1 },
	{ "sortOrder", &class_java_lang_String, offsetof(mindustry_logic_LStatements$RadarStatement, F_sortOrder), "Ljava/lang/String;", 1 },
	{ "output", &class_java_lang_String, offsetof(mindustry_logic_LStatements$RadarStatement, F_output), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LStatements$RadarStatement, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$RadarStatement_build_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$RadarStatement_build_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "buildFrom", (intptr_t) M_mindustry_logic_LStatements$RadarStatement_buildFrom_R_boolean, VTABLE_mindustry_logic_LStatements$RadarStatement_buildFrom_R_boolean, "()Z", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$RadarStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, VTABLE_mindustry_logic_LStatements$RadarStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, "(Lmindustry/logic/LAssembler;)Lmindustry/logic/LExecutor$LInstruction;", 1 },
	{ "category", (intptr_t) M_mindustry_logic_LStatements$RadarStatement_category_R_mindustry_logic_LCategory, VTABLE_mindustry_logic_LStatements$RadarStatement_category_R_mindustry_logic_LCategory, "()Lmindustry/logic/LCategory;", 1 },
	{ "lambda$build$10", (intptr_t) M_mindustry_logic_LStatements$RadarStatement_lambda$build$10_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$RadarStatement_lambda$build$10_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$16", (intptr_t) SM_mindustry_logic_LStatements$RadarStatement_lambda$build$16, 0, "()V", 4106 },
	{ "lambda$build$11", (intptr_t) M_mindustry_logic_LStatements$RadarStatement_lambda$build$11_arc_scene_ui_Button, VTABLE_mindustry_logic_LStatements$RadarStatement_lambda$build$11_arc_scene_ui_Button, "(Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$build$13", (intptr_t) M_mindustry_logic_LStatements$RadarStatement_lambda$build$13_arc_scene_ui_Button, VTABLE_mindustry_logic_LStatements$RadarStatement_lambda$build$13_arc_scene_ui_Button, "(Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$build$15", (intptr_t) SM_mindustry_logic_LStatements$RadarStatement_lambda$build$15_arc_scene_ui_layout_Cell, 0, "(Larc/scene/ui/layout/Cell;)V", 4106 },
	{ "lambda$build$14", (intptr_t) M_mindustry_logic_LStatements$RadarStatement_lambda$build$14_mindustry_logic_RadarSort, VTABLE_mindustry_logic_LStatements$RadarStatement_lambda$build$14_mindustry_logic_RadarSort, "(Lmindustry/logic/RadarSort;)V", 4098 },
	{ "lambda$build$12", (intptr_t) M_mindustry_logic_LStatements$RadarStatement_lambda$build$12_R_java_lang_CharSequence, VTABLE_mindustry_logic_LStatements$RadarStatement_lambda$build$12_R_java_lang_CharSequence, "()Ljava/lang/CharSequence;", 4098 },
	{ "lambda$build$9", (intptr_t) M_mindustry_logic_LStatements$RadarStatement_lambda$build$9_java_lang_String, VTABLE_mindustry_logic_LStatements$RadarStatement_lambda$build$9_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$8", (intptr_t) SM_mindustry_logic_LStatements$RadarStatement_lambda$build$8, 0, "()V", 4106 },
	{ "lambda$build$3", (intptr_t) M_mindustry_logic_LStatements$RadarStatement_lambda$build$3_arc_func_Prov_int_arc_scene_ui_Button, VTABLE_mindustry_logic_LStatements$RadarStatement_lambda$build$3_arc_func_Prov_int_arc_scene_ui_Button, "(Larc/func/Prov;ILarc/scene/ui/Button;)V", 4098 },
	{ "lambda$build$5", (intptr_t) M_mindustry_logic_LStatements$RadarStatement_lambda$build$5_arc_scene_ui_Button_arc_func_Prov_int, VTABLE_mindustry_logic_LStatements$RadarStatement_lambda$build$5_arc_scene_ui_Button_arc_func_Prov_int, "(Larc/scene/ui/Button;Larc/func/Prov;I)V", 4098 },
	{ "lambda$build$7", (intptr_t) SM_mindustry_logic_LStatements$RadarStatement_lambda$build$7_arc_scene_ui_layout_Cell, 0, "(Larc/scene/ui/layout/Cell;)V", 4106 },
	{ "lambda$build$6", (intptr_t) M_mindustry_logic_LStatements$RadarStatement_lambda$build$6_int_mindustry_logic_RadarTarget, VTABLE_mindustry_logic_LStatements$RadarStatement_lambda$build$6_int_mindustry_logic_RadarTarget, "(ILmindustry/logic/RadarTarget;)V", 4098 },
	{ "lambda$build$4", (intptr_t) SM_mindustry_logic_LStatements$RadarStatement_lambda$build$4_arc_func_Prov_R_java_lang_CharSequence, 0, "(Larc/func/Prov;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$build$2", (intptr_t) M_mindustry_logic_LStatements$RadarStatement_lambda$build$2_int_R_mindustry_logic_RadarTarget, VTABLE_mindustry_logic_LStatements$RadarStatement_lambda$build$2_int_R_mindustry_logic_RadarTarget, "(I)Lmindustry/logic/RadarTarget;", 4098 },
	{ "lambda$build$1", (intptr_t) M_mindustry_logic_LStatements$RadarStatement_lambda$build$1_java_lang_String, VTABLE_mindustry_logic_LStatements$RadarStatement_lambda$build$1_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$0", (intptr_t) M_mindustry_logic_LStatements$RadarStatement_lambda$build$0_java_lang_String, VTABLE_mindustry_logic_LStatements$RadarStatement_lambda$build$0_java_lang_String, "(Ljava/lang/String;)V", 4098 },
};

Class class_mindustry_logic_LStatements$RadarStatement{
		.nativeName = (intptr_t) "mindustry/logic/LStatements$RadarStatement",
		.parentClass = (intptr_t) &class_mindustry_logic_LStatement,
		.size = sizeof(mindustry_logic_LStatements$RadarStatement),
		.classVtable = (intptr_t) vtable_mindustry_logic_LStatements$RadarStatement,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LStatements$RadarStatement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LStatements$RadarStatement,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LStatements,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 49,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LStatements$RadarStatement = registerClass(&class_mindustry_logic_LStatements$RadarStatement);

}

