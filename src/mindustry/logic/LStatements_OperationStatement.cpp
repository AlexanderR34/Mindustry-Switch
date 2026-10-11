#include "mindustry/logic/LStatements_OperationStatement.h"
#include "mindustry/logic/LogicOp.h"
#include "arc/func/Prov.h"
#include "mindustry/logic/LStatements_OperationStatement_invoke_java_lang_Runnable_2.h"
#include "mindustry/logic/LStatement.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LStatements_OperationStatement_invoke_java_lang_Runnable_3.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "mindustry/logic/LStatements.h"
#include "arc/scene/ui/Button.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/logic/LExecutor_OpI.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "mindustry/logic/LStatements_OperationStatement_invoke_arc_func_Prov_1.h"
#include "mindustry/logic/LVar.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/logic/LAssembler.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/ui/Styles.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LStatements_OperationStatement.h"
#include "mindustry/logic/LCategory.h"
#include "mindustry/logic/LStatements_OperationStatement_invoke_arc_func_Cons_9.h"
#include "mindustry/logic/LStatements_OperationStatement_invoke_arc_func_Cons_16.h"
#include "mindustry/logic/LStatements_OperationStatement_invoke_arc_func_Cons_17.h"
#include "mindustry/logic/LStatements_OperationStatement_invoke_arc_func_Cons_14.h"
#include "mindustry/logic/LStatements_OperationStatement_invoke_arc_func_Cons_15.h"
#include "mindustry/logic/LStatements_OperationStatement_invoke_arc_func_Cons_12.h"
#include "mindustry/logic/LStatements_OperationStatement_invoke_arc_func_Cons_13.h"
#include "mindustry/logic/LStatements_OperationStatement_invoke_arc_func_Cons_10.h"
#include "mindustry/logic/LStatements_OperationStatement_invoke_arc_func_Cons_11.h"

extern "C" {


void mark_mindustry_logic_LStatements$OperationStatement(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LStatements$OperationStatement *) object;
	if (self->F_op)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_op)->clazz)->markFunction)((jobject) self->F_op, mark, depth + 1);
	if (self->F_dest)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dest)->clazz)->markFunction)((jobject) self->F_dest, mark, depth + 1);
	if (self->F_a)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_a)->clazz)->markFunction)((jobject) self->F_a, mark, depth + 1);
	if (self->F_b)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_b)->clazz)->markFunction)((jobject) self->F_b, mark, depth + 1);
}

void clinit_mindustry_logic_LStatements$OperationStatement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_logic_LStatement(ctx);
}

void init_mindustry_logic_LStatements$OperationStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$OperationStatement:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$OperationStatement(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(676);
	init_mindustry_logic_LStatement(ctx, (frame[0].o));
	LINE_NUMBER(677);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LogicOp(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicOp_add;
	((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK(sp[0].o))->F_op = (jref) sp[1].o;
	LINE_NUMBER(678);
	((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_dest = (jref) (((jobject) createStringLiteral(ctx, u8"result"_j)));
	((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_a = (jref) (((jobject) createStringLiteral(ctx, u8"a"_j)));
	((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_b = (jref) (((jobject) createStringLiteral(ctx, u8"b"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$OperationStatement_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$OperationStatement:build", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(682);
	((func_mindustry_logic_LStatements$OperationStatement_rebuild_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$OperationStatement_rebuild_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(683);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$OperationStatement_rebuild_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$OperationStatement:rebuild", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(686);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[1].o));
	LINE_NUMBER(688);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_dest;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$OperationStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$OperationStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(690);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" = "_j))));
	LINE_NUMBER(692);
	sp[0].o = (jobject)((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_op;
	if (((jint)((mindustry_logic_LogicOp *) NULL_CHECK(sp[0].o))->F_unary) == 0) goto label_4;
	}
	{
	LINE_NUMBER(693);
	((func_mindustry_logic_LStatements$OperationStatement_opButton_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$OperationStatement_opButton_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o), (frame[1].o));
	LINE_NUMBER(695);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_a;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$OperationStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$OperationStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(698);
	sp[0].o = (jobject)((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_op;
	if (((jint)((mindustry_logic_LogicOp *) NULL_CHECK(sp[0].o))->F_func) == 0) goto label_8;
	}
	{
	LINE_NUMBER(699);
	((func_mindustry_logic_LStatements$OperationStatement_funcs_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$OperationStatement_funcs_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o), (frame[1].o));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(701);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_a;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$OperationStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$OperationStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(703);
	((func_mindustry_logic_LStatements$OperationStatement_opButton_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$OperationStatement_opButton_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o), (frame[1].o));
	LINE_NUMBER(705);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_b;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$OperationStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$OperationStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_7:;
	LINE_NUMBER(708);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$OperationStatement_funcs_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$OperationStatement:funcs", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(711);
	((func_mindustry_logic_LStatements$OperationStatement_opButton_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$OperationStatement_opButton_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(713);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_a;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$OperationStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$OperationStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(715);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_b;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_14);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$OperationStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$OperationStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(716);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$OperationStatement_opButton_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$OperationStatement:opButton", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(719);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_15);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logict;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$OperationStatement_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_logic_LStatements$OperationStatement_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$OperationStatement_invoke_java_lang_Runnable_2);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(64.0f);
	jfloat temp1 = jfloat(40.0f);
	LINE_NUMBER(725);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(726);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$OperationStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$OperationStatement:build", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(730);
	clinit_mindustry_logic_LExecutor$OpI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LExecutor$OpI);
	sp[1].o = (jobject)((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_op;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_a;
	sp[2].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[2].o, sp[3].o);
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_b;
	sp[3].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[3].o, sp[4].o);
	sp[4].o = frame[1].o;
	sp[5].o = (jobject)((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_dest;
	sp[4].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[4].o, sp[5].o);
	init_mindustry_logic_LExecutor$OpI_mindustry_logic_LogicOp_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$OperationStatement_category_R_mindustry_logic_LCategory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$OperationStatement:category", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(735);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCategory_operation;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$OperationStatement_lambda$opButton$5(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/logic/LStatements$OperationStatement:lambda$opButton$5", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_logic_LStatements$OperationStatement(ctx);
	LINE_NUMBER(725);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$OperationStatement_lambda$opButton$0_arc_scene_ui_layout_Table_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$OperationStatement:lambda$opButton$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(720);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(721);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$OperationStatement_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_logic_LStatements$OperationStatement_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$OperationStatement_invoke_java_lang_Runnable_3);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(725);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$OperationStatement_lambda$opButton$2_arc_scene_ui_Button_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$OperationStatement:lambda$opButton$2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(721);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_logic_LogicOp(ctx);
	sp[2].o = (jobject)SF_mindustry_logic_LogicOp_all;
	sp[3].o = (jobject)((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_op;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_16);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	jint temp0 = jint(4);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$OperationStatement_invoke_arc_func_Cons_17);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_logic_LStatements$OperationStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$OperationStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, temp0, sp[5].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$OperationStatement_lambda$opButton$4_arc_scene_ui_layout_Cell(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$OperationStatement:lambda$opButton$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$OperationStatement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(724);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (jfloat(64.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$OperationStatement_lambda$opButton$3_arc_scene_ui_layout_Table_mindustry_logic_LogicOp(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$OperationStatement:lambda$opButton$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(722);
	((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_op = (jref) (frame[2].o);
	LINE_NUMBER(723);
	((func_mindustry_logic_LStatements$OperationStatement_rebuild_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$OperationStatement_rebuild_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(724);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$OperationStatement_lambda$opButton$1_R_java_lang_CharSequence(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$OperationStatement:lambda$opButton$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(720);
	sp[0].o = (jobject)((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_op;
	sp[0].o = (jobject)((mindustry_logic_LogicOp *) NULL_CHECK(sp[0].o))->F_symbol;
	sp[0].o = (jobject)SM_mindustry_logic_LStatement_selectTranslate_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$OperationStatement_lambda$funcs$1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$OperationStatement:lambda$funcs$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(715);
	((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_b = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$OperationStatement_lambda$funcs$0_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$OperationStatement:lambda$funcs$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(713);
	((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_a = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$OperationStatement_lambda$rebuild$3_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$OperationStatement:lambda$rebuild$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(705);
	((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_b = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$OperationStatement_lambda$rebuild$2_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$OperationStatement:lambda$rebuild$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(701);
	((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_a = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$OperationStatement_lambda$rebuild$1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$OperationStatement:lambda$rebuild$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(695);
	((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_a = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$OperationStatement_lambda$rebuild$0_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$OperationStatement:lambda$rebuild$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(688);
	((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[0].o)))->F_dest = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LStatements$OperationStatement[] {
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
	(void *) M_mindustry_logic_LStatements$OperationStatement_build_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$OperationStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction,
	(void *) M_mindustry_logic_LStatements$OperationStatement_category_R_mindustry_logic_LCategory,
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
	(void *) M_mindustry_logic_LStatements$OperationStatement_rebuild_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$OperationStatement_funcs_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$OperationStatement_opButton_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$OperationStatement_lambda$opButton$0_arc_scene_ui_layout_Table_arc_scene_ui_Button,
	(void *) M_mindustry_logic_LStatements$OperationStatement_lambda$opButton$2_arc_scene_ui_Button_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$OperationStatement_lambda$opButton$3_arc_scene_ui_layout_Table_mindustry_logic_LogicOp,
	(void *) M_mindustry_logic_LStatements$OperationStatement_lambda$opButton$1_R_java_lang_CharSequence,
	(void *) M_mindustry_logic_LStatements$OperationStatement_lambda$funcs$1_java_lang_String,
	(void *) M_mindustry_logic_LStatements$OperationStatement_lambda$funcs$0_java_lang_String,
	(void *) M_mindustry_logic_LStatements$OperationStatement_lambda$rebuild$3_java_lang_String,
	(void *) M_mindustry_logic_LStatements$OperationStatement_lambda$rebuild$2_java_lang_String,
	(void *) M_mindustry_logic_LStatements$OperationStatement_lambda$rebuild$1_java_lang_String,
	(void *) M_mindustry_logic_LStatements$OperationStatement_lambda$rebuild$0_java_lang_String,
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
	{ "rebuild", "(Larc/scene/ui/layout/Table;)V" },
	{ "funcs", "(Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V" },
	{ "opButton", "(Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$opButton$0", "(Larc/scene/ui/layout/Table;Larc/scene/ui/Button;)V" },
	{ "lambda$opButton$2", "(Larc/scene/ui/Button;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$opButton$3", "(Larc/scene/ui/layout/Table;Lmindustry/logic/LogicOp;)V" },
	{ "lambda$opButton$1", "()Ljava/lang/CharSequence;" },
	{ "lambda$funcs$1", "(Ljava/lang/String;)V" },
	{ "lambda$funcs$0", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$3", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$2", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$1", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$0", "(Ljava/lang/String;)V" },
};

static FieldMetadata fields[] {
	{ "op", &class_mindustry_logic_LogicOp, offsetof(mindustry_logic_LStatements$OperationStatement, F_op), "Lmindustry/logic/LogicOp;", 1 },
	{ "dest", &class_java_lang_String, offsetof(mindustry_logic_LStatements$OperationStatement, F_dest), "Ljava/lang/String;", 1 },
	{ "a", &class_java_lang_String, offsetof(mindustry_logic_LStatements$OperationStatement, F_a), "Ljava/lang/String;", 1 },
	{ "b", &class_java_lang_String, offsetof(mindustry_logic_LStatements$OperationStatement, F_b), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LStatements$OperationStatement, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$OperationStatement_build_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$OperationStatement_build_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "rebuild", (intptr_t) M_mindustry_logic_LStatements$OperationStatement_rebuild_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$OperationStatement_rebuild_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 0 },
	{ "funcs", (intptr_t) M_mindustry_logic_LStatements$OperationStatement_funcs_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$OperationStatement_funcs_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V", 0 },
	{ "opButton", (intptr_t) M_mindustry_logic_LStatements$OperationStatement_opButton_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$OperationStatement_opButton_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V", 0 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$OperationStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, VTABLE_mindustry_logic_LStatements$OperationStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, "(Lmindustry/logic/LAssembler;)Lmindustry/logic/LExecutor$LInstruction;", 1 },
	{ "category", (intptr_t) M_mindustry_logic_LStatements$OperationStatement_category_R_mindustry_logic_LCategory, VTABLE_mindustry_logic_LStatements$OperationStatement_category_R_mindustry_logic_LCategory, "()Lmindustry/logic/LCategory;", 1 },
	{ "lambda$opButton$5", (intptr_t) SM_mindustry_logic_LStatements$OperationStatement_lambda$opButton$5, 0, "()V", 4106 },
	{ "lambda$opButton$0", (intptr_t) M_mindustry_logic_LStatements$OperationStatement_lambda$opButton$0_arc_scene_ui_layout_Table_arc_scene_ui_Button, VTABLE_mindustry_logic_LStatements$OperationStatement_lambda$opButton$0_arc_scene_ui_layout_Table_arc_scene_ui_Button, "(Larc/scene/ui/layout/Table;Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$opButton$2", (intptr_t) M_mindustry_logic_LStatements$OperationStatement_lambda$opButton$2_arc_scene_ui_Button_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$OperationStatement_lambda$opButton$2_arc_scene_ui_Button_arc_scene_ui_layout_Table, "(Larc/scene/ui/Button;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$opButton$4", (intptr_t) SM_mindustry_logic_LStatements$OperationStatement_lambda$opButton$4_arc_scene_ui_layout_Cell, 0, "(Larc/scene/ui/layout/Cell;)V", 4106 },
	{ "lambda$opButton$3", (intptr_t) M_mindustry_logic_LStatements$OperationStatement_lambda$opButton$3_arc_scene_ui_layout_Table_mindustry_logic_LogicOp, VTABLE_mindustry_logic_LStatements$OperationStatement_lambda$opButton$3_arc_scene_ui_layout_Table_mindustry_logic_LogicOp, "(Larc/scene/ui/layout/Table;Lmindustry/logic/LogicOp;)V", 4098 },
	{ "lambda$opButton$1", (intptr_t) M_mindustry_logic_LStatements$OperationStatement_lambda$opButton$1_R_java_lang_CharSequence, VTABLE_mindustry_logic_LStatements$OperationStatement_lambda$opButton$1_R_java_lang_CharSequence, "()Ljava/lang/CharSequence;", 4098 },
	{ "lambda$funcs$1", (intptr_t) M_mindustry_logic_LStatements$OperationStatement_lambda$funcs$1_java_lang_String, VTABLE_mindustry_logic_LStatements$OperationStatement_lambda$funcs$1_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$funcs$0", (intptr_t) M_mindustry_logic_LStatements$OperationStatement_lambda$funcs$0_java_lang_String, VTABLE_mindustry_logic_LStatements$OperationStatement_lambda$funcs$0_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$3", (intptr_t) M_mindustry_logic_LStatements$OperationStatement_lambda$rebuild$3_java_lang_String, VTABLE_mindustry_logic_LStatements$OperationStatement_lambda$rebuild$3_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$2", (intptr_t) M_mindustry_logic_LStatements$OperationStatement_lambda$rebuild$2_java_lang_String, VTABLE_mindustry_logic_LStatements$OperationStatement_lambda$rebuild$2_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$1", (intptr_t) M_mindustry_logic_LStatements$OperationStatement_lambda$rebuild$1_java_lang_String, VTABLE_mindustry_logic_LStatements$OperationStatement_lambda$rebuild$1_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$0", (intptr_t) M_mindustry_logic_LStatements$OperationStatement_lambda$rebuild$0_java_lang_String, VTABLE_mindustry_logic_LStatements$OperationStatement_lambda$rebuild$0_java_lang_String, "(Ljava/lang/String;)V", 4098 },
};

Class class_mindustry_logic_LStatements$OperationStatement{
		.nativeName = (intptr_t) "mindustry/logic/LStatements$OperationStatement",
		.parentClass = (intptr_t) &class_mindustry_logic_LStatement,
		.size = sizeof(mindustry_logic_LStatements$OperationStatement),
		.classVtable = (intptr_t) vtable_mindustry_logic_LStatements$OperationStatement,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LStatements$OperationStatement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LStatements$OperationStatement,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LStatements,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 49,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LStatements$OperationStatement = registerClass(&class_mindustry_logic_LStatements$OperationStatement);

}

