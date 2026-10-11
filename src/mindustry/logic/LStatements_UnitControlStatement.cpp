#include "mindustry/logic/LStatements_UnitControlStatement.h"
#include "arc/func/Prov.h"
#include "mindustry/logic/LStatements_UnitControlStatement_invoke_arc_func_Cons_14.h"
#include "mindustry/logic/LStatement.h"
#include "mindustry/logic/LStatements_UnitControlStatement_invoke_arc_func_Cons_15.h"
#include "mindustry/logic/LStatements_UnitControlStatement_invoke_arc_func_Cons_12.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LStatements_UnitControlStatement_invoke_arc_func_Cons_13.h"
#include "mindustry/game/Rules.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/logic/LStatements_UnitControlStatement_invoke_arc_func_Cons_10.h"
#include "mindustry/logic/LStatements_UnitControlStatement_invoke_arc_func_Cons_11.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "mindustry/logic/LUnitControl.h"
#include "mindustry/logic/LStatements.h"
#include "arc/scene/ui/Button.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/logic/LStatements_UnitControlStatement_invoke_arc_func_Cons_8.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "arc/func/Boolf.h"
#include "mindustry/logic/LStatements_UnitControlStatement_invoke_arc_func_Cons_9.h"
#include "mindustry/logic/LVar.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/logic/LStatements_UnitControlStatement_invoke_arc_func_Prov_1.h"
#include "mindustry/logic/LExecutor_UnitControlI.h"
#include "mindustry/logic/LAssembler.h"
#include "arc/util/Structs.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/ui/Styles.h"
#include "java/lang/Enum.h"
#include "mindustry/logic/LStatements_UnitControlStatement.h"
#include "mindustry/logic/LCanvas.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LStatements_UnitControlStatement_invoke_arc_func_Boolf_1.h"
#include "mindustry/logic/LCategory.h"
#include "mindustry/logic/LStatements_UnitControlStatement_invoke_java_lang_Runnable_2.h"
#include "java/lang/Class.h"
#include "mindustry/logic/LStatements_UnitControlStatement_invoke_java_lang_Runnable_3.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_logic_LStatements$UnitControlStatement(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LStatements$UnitControlStatement *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_p1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p1)->clazz)->markFunction)((jobject) self->F_p1, mark, depth + 1);
	if (self->F_p2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p2)->clazz)->markFunction)((jobject) self->F_p2, mark, depth + 1);
	if (self->F_p3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p3)->clazz)->markFunction)((jobject) self->F_p3, mark, depth + 1);
	if (self->F_p4)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p4)->clazz)->markFunction)((jobject) self->F_p4, mark, depth + 1);
	if (self->F_p5)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p5)->clazz)->markFunction)((jobject) self->F_p5, mark, depth + 1);
}

void clinit_mindustry_logic_LStatements$UnitControlStatement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_logic_LStatement(ctx);
}

void init_mindustry_logic_LStatements$UnitControlStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitControlStatement:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$UnitControlStatement(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1063);
	init_mindustry_logic_LStatement(ctx, (frame[0].o));
	LINE_NUMBER(1064);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_move;
	((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(1065);
	((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_p2 = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_p3 = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_p4 = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_p5 = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitControlStatement_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitControlStatement:build", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1069);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[1].o));
	LINE_NUMBER(1071);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_8);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logict;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitControlStatement_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitControlStatement_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitControlStatement_invoke_java_lang_Runnable_2);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(180.0f);
	jfloat temp1 = jfloat(40.0f);
	LINE_NUMBER(1081);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(1083);
	jint temp2 = (jint)SM_mindustry_logic_LCanvas_isCompact_R_boolean(ctx);
	if (temp2 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(200.0f)));
	}
label_4:;
	{
	LINE_NUMBER(1087);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_logic_LUnitControl *) NULL_CHECK(sp[0].o))->F_params;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(1088);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_type;
	sp[2].o = (jobject)((mindustry_logic_LUnitControl *) NULL_CHECK(sp[2].o))->F_params;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i));
	sp += 3;
	if ((frame[2].i) != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_p1;
	sp += 1;
	goto label_9;
	}
label_8:;
	{
	if ((frame[2].i) != (jint(1))) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_p2;
	sp += 1;
	goto label_9;
	}
label_10:;
	{
	if ((frame[2].i) != (jint(2))) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_p3;
	sp += 1;
	goto label_9;
	}
label_11:;
	{
	if ((frame[2].i) != (jint(3))) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_p4;
	sp += 1;
	goto label_9;
	}
label_12:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK(sp[-1].o))->F_p5;
label_9:;
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_13;
	{
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	goto label_14;
	}
label_13:;
	{
	if ((frame[2].i) != (jint(1))) goto label_15;
	}
	{
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	goto label_14;
	}
label_15:;
	{
	if ((frame[2].i) != (jint(2))) goto label_16;
	}
	{
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	goto label_14;
	}
label_16:;
	{
	if ((frame[2].i) != (jint(3))) goto label_17;
	}
	{
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	goto label_14;
	}
label_17:;
	INST_ALOAD(0);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_13);
		proxy->F_field0 = (jref) (--sp)->o;
		PUSH_OBJECT((jobject) proxy);
	}
label_14:;
	{
	sp -= 5;
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$UnitControlStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$UnitControlStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1087);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(1090);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$UnitControlStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitControlStatement:build", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1094);
	clinit_mindustry_logic_LExecutor$UnitControlI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LExecutor$UnitControlI);
	sp[1].o = (jobject)((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_type;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_p1;
	sp[2].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[2].o, sp[3].o);
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_p2;
	sp[3].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[3].o, sp[4].o);
	sp[4].o = frame[1].o;
	sp[5].o = (jobject)((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_p3;
	sp[4].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[4].o, sp[5].o);
	sp[5].o = frame[1].o;
	sp[6].o = (jobject)((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_p4;
	sp[5].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[5].o, sp[6].o);
	sp[6].o = frame[1].o;
	sp[7].o = (jobject)((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_p5;
	sp[6].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[6].o, sp[7].o);
	init_mindustry_logic_LExecutor$UnitControlI_mindustry_logic_LUnitControl_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$UnitControlStatement_category_R_mindustry_logic_LCategory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitControlStatement:category", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1099);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCategory_unit;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$11_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitControlStatement:lambda$build$11", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1088);
	((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_p5 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$10_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitControlStatement:lambda$build$10", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1088);
	((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_p4 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$9_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitControlStatement:lambda$build$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1088);
	((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_p3 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$8_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitControlStatement:lambda$build$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1088);
	((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_p2 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$7_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitControlStatement:lambda$build$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1088);
	((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$UnitControlStatement_lambda$build$6(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitControlStatement:lambda$build$6", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_logic_LStatements$UnitControlStatement(ctx);
	LINE_NUMBER(1081);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$0_arc_scene_ui_layout_Table_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitControlStatement:lambda$build$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1072);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1073);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitControlStatement_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitControlStatement_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitControlStatement_invoke_java_lang_Runnable_3);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1081);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$2_arc_scene_ui_Button_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitControlStatement:lambda$build$2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1073);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) &class_mindustry_logic_LUnitControl);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[3].o = (jobject)SF_mindustry_logic_LUnitControl_all;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Boolf_1);
		sp[4].o = (jobject) proxy;
	}
	sp[2].o = (jobject)SM_arc_util_Structs_filter_java_lang_Class_Array1_java_lang_Object_arc_func_Boolf_R_Array1_java_lang_Object(ctx, sp[2].o, sp[3].o, sp[4].o);
	sp[2].o = checkCast(ctx, getArrayClass(&class_mindustry_logic_LUnitControl, 1), sp[2].o);
	sp[3].o = (jobject)((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_type;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_14);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	jint temp0 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitControlStatement_invoke_arc_func_Cons_15);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_logic_LStatements$UnitControlStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$UnitControlStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, temp0, sp[5].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$UnitControlStatement_lambda$build$5_arc_scene_ui_layout_Cell(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitControlStatement:lambda$build$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$UnitControlStatement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1080);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (jfloat(120.0f)), (jfloat(50.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$4_arc_scene_ui_layout_Table_mindustry_logic_LUnitControl(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitControlStatement:lambda$build$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1078);
	((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(1079);
	((func_mindustry_logic_LStatements$UnitControlStatement_build_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$UnitControlStatement_build_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1080);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_LStatements$UnitControlStatement_lambda$build$3_mindustry_logic_LUnitControl_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitControlStatement:lambda$build$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$UnitControlStatement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1074);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_build;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp0 = (jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_logicUnitBuild;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1075);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_deconstruct;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp0 = (jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_logicUnitDeconstruct;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_3:;
	LINE_NUMBER(1076);
	INST_ICONST(1);
label_2:;
	LINE_NUMBER(1074);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$1_R_java_lang_CharSequence(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitControlStatement:lambda$build$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1072);
	sp[0].o = (jobject)((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_Enum_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LStatements$UnitControlStatement[] {
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
	(void *) M_mindustry_logic_LStatements$UnitControlStatement_build_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$UnitControlStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction,
	(void *) M_mindustry_logic_LStatements$UnitControlStatement_category_R_mindustry_logic_LCategory,
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
	(void *) M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$11_java_lang_String,
	(void *) M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$10_java_lang_String,
	(void *) M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$9_java_lang_String,
	(void *) M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$8_java_lang_String,
	(void *) M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$7_java_lang_String,
	(void *) M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$0_arc_scene_ui_layout_Table_arc_scene_ui_Button,
	(void *) M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$2_arc_scene_ui_Button_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$4_arc_scene_ui_layout_Table_mindustry_logic_LUnitControl,
	(void *) M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$1_R_java_lang_CharSequence,
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
	{ "lambda$build$11", "(Ljava/lang/String;)V" },
	{ "lambda$build$10", "(Ljava/lang/String;)V" },
	{ "lambda$build$9", "(Ljava/lang/String;)V" },
	{ "lambda$build$8", "(Ljava/lang/String;)V" },
	{ "lambda$build$7", "(Ljava/lang/String;)V" },
	{ "lambda$build$0", "(Larc/scene/ui/layout/Table;Larc/scene/ui/Button;)V" },
	{ "lambda$build$2", "(Larc/scene/ui/Button;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$4", "(Larc/scene/ui/layout/Table;Lmindustry/logic/LUnitControl;)V" },
	{ "lambda$build$1", "()Ljava/lang/CharSequence;" },
};

static FieldMetadata fields[] {
	{ "type", &class_mindustry_logic_LUnitControl, offsetof(mindustry_logic_LStatements$UnitControlStatement, F_type), "Lmindustry/logic/LUnitControl;", 1 },
	{ "p1", &class_java_lang_String, offsetof(mindustry_logic_LStatements$UnitControlStatement, F_p1), "Ljava/lang/String;", 1 },
	{ "p2", &class_java_lang_String, offsetof(mindustry_logic_LStatements$UnitControlStatement, F_p2), "Ljava/lang/String;", 1 },
	{ "p3", &class_java_lang_String, offsetof(mindustry_logic_LStatements$UnitControlStatement, F_p3), "Ljava/lang/String;", 1 },
	{ "p4", &class_java_lang_String, offsetof(mindustry_logic_LStatements$UnitControlStatement, F_p4), "Ljava/lang/String;", 1 },
	{ "p5", &class_java_lang_String, offsetof(mindustry_logic_LStatements$UnitControlStatement, F_p5), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LStatements$UnitControlStatement, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$UnitControlStatement_build_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$UnitControlStatement_build_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$UnitControlStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, VTABLE_mindustry_logic_LStatements$UnitControlStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, "(Lmindustry/logic/LAssembler;)Lmindustry/logic/LExecutor$LInstruction;", 1 },
	{ "category", (intptr_t) M_mindustry_logic_LStatements$UnitControlStatement_category_R_mindustry_logic_LCategory, VTABLE_mindustry_logic_LStatements$UnitControlStatement_category_R_mindustry_logic_LCategory, "()Lmindustry/logic/LCategory;", 1 },
	{ "lambda$build$11", (intptr_t) M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$11_java_lang_String, VTABLE_mindustry_logic_LStatements$UnitControlStatement_lambda$build$11_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$10", (intptr_t) M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$10_java_lang_String, VTABLE_mindustry_logic_LStatements$UnitControlStatement_lambda$build$10_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$9", (intptr_t) M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$9_java_lang_String, VTABLE_mindustry_logic_LStatements$UnitControlStatement_lambda$build$9_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$8", (intptr_t) M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$8_java_lang_String, VTABLE_mindustry_logic_LStatements$UnitControlStatement_lambda$build$8_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$7", (intptr_t) M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$7_java_lang_String, VTABLE_mindustry_logic_LStatements$UnitControlStatement_lambda$build$7_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$6", (intptr_t) SM_mindustry_logic_LStatements$UnitControlStatement_lambda$build$6, 0, "()V", 4106 },
	{ "lambda$build$0", (intptr_t) M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$0_arc_scene_ui_layout_Table_arc_scene_ui_Button, VTABLE_mindustry_logic_LStatements$UnitControlStatement_lambda$build$0_arc_scene_ui_layout_Table_arc_scene_ui_Button, "(Larc/scene/ui/layout/Table;Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$build$2", (intptr_t) M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$2_arc_scene_ui_Button_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$UnitControlStatement_lambda$build$2_arc_scene_ui_Button_arc_scene_ui_layout_Table, "(Larc/scene/ui/Button;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$5", (intptr_t) SM_mindustry_logic_LStatements$UnitControlStatement_lambda$build$5_arc_scene_ui_layout_Cell, 0, "(Larc/scene/ui/layout/Cell;)V", 4106 },
	{ "lambda$build$4", (intptr_t) M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$4_arc_scene_ui_layout_Table_mindustry_logic_LUnitControl, VTABLE_mindustry_logic_LStatements$UnitControlStatement_lambda$build$4_arc_scene_ui_layout_Table_mindustry_logic_LUnitControl, "(Larc/scene/ui/layout/Table;Lmindustry/logic/LUnitControl;)V", 4098 },
	{ "lambda$build$3", (intptr_t) SM_mindustry_logic_LStatements$UnitControlStatement_lambda$build$3_mindustry_logic_LUnitControl_R_boolean, 0, "(Lmindustry/logic/LUnitControl;)Z", 4106 },
	{ "lambda$build$1", (intptr_t) M_mindustry_logic_LStatements$UnitControlStatement_lambda$build$1_R_java_lang_CharSequence, VTABLE_mindustry_logic_LStatements$UnitControlStatement_lambda$build$1_R_java_lang_CharSequence, "()Ljava/lang/CharSequence;", 4098 },
};

Class class_mindustry_logic_LStatements$UnitControlStatement{
		.nativeName = (intptr_t) "mindustry/logic/LStatements$UnitControlStatement",
		.parentClass = (intptr_t) &class_mindustry_logic_LStatement,
		.size = sizeof(mindustry_logic_LStatements$UnitControlStatement),
		.classVtable = (intptr_t) vtable_mindustry_logic_LStatements$UnitControlStatement,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LStatements$UnitControlStatement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LStatements$UnitControlStatement,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LStatements,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 45,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LStatements$UnitControlStatement = registerClass(&class_mindustry_logic_LStatements$UnitControlStatement);

}

