#include "mindustry/logic/LStatements_JumpStatement.h"
#include "mindustry/logic/LStatements_JumpStatement.h"
#include "arc/func/Prov.h"
#include "mindustry/logic/LStatements_JumpStatement_invoke_arc_func_Cons_7.h"
#include "mindustry/logic/LStatement.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/logic/LStatements_JumpStatement_invoke_arc_func_Cons_9.h"
#include "mindustry/logic/LStatements_JumpStatement_invoke_arc_func_Cons_8.h"
#include "arc/graphics/Color.h"
#include "arc/Application.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "mindustry/logic/LStatements.h"
#include "arc/scene/ui/Button.h"
#include "java/lang/String.h"
#include "mindustry/logic/ConditionOp.h"
#include "mindustry/logic/LStatements_JumpStatement_invoke_arc_func_Cons_12.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/logic/LStatements_JumpStatement_invoke_arc_func_Cons_11.h"
#include "mindustry/logic/LStatements_JumpStatement_invoke_arc_func_Cons_13.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "arc/Core.h"
#include "mindustry/logic/LStatements_JumpStatement_invoke_arc_func_Prov_1.h"
#include "arc/scene/Group.h"
#include "mindustry/logic/LVar.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/logic/LStatements_JumpStatement_invoke_arc_func_Cons_10.h"
#include "mindustry/logic/LAssembler.h"
#include "mindustry/logic/LExecutor_JumpI.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/logic/LCanvas_JumpButton.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/logic/LCanvas.h"
#include "arc/scene/ui/Label.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/Element.h"
#include "mindustry/logic/LStatements_JumpStatement_invoke_java_lang_Runnable_5.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LStatements_JumpStatement_invoke_java_lang_Runnable_4.h"
#include "mindustry/logic/LCategory.h"
#include "mindustry/logic/LCanvas_StatementElem.h"
#include "arc/struct/SnapshotSeq.h"
#include "mindustry/logic/LStatements_JumpStatement_invoke_java_lang_Runnable_7.h"
#include "mindustry/logic/LStatements_JumpStatement_invoke_java_lang_Runnable_6.h"

extern "C" {

jobject SF_mindustry_logic_LStatements$JumpStatement_last;

void mark_mindustry_logic_LStatements$JumpStatement(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_LStatements$JumpStatement_last)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LStatements$JumpStatement_last)->clazz)->markFunction)((jobject) SF_mindustry_logic_LStatements$JumpStatement_last, mark, depth + 1);
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
	auto self = (mindustry_logic_LStatements$JumpStatement *) object;
	if (self->F_dest)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dest)->clazz)->markFunction)((jobject) self->F_dest, mark, depth + 1);
	if (self->F_op)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_op)->clazz)->markFunction)((jobject) self->F_op, mark, depth + 1);
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
	if (self->F_compare)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_compare)->clazz)->markFunction)((jobject) self->F_compare, mark, depth + 1);
}

void init_mindustry_logic_LStatements$JumpStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$JumpStatement:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$JumpStatement(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(930);
	init_mindustry_logic_LStatement(ctx, (frame[0].o));
	LINE_NUMBER(937);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_ConditionOp_notEqual;
	((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK(sp[0].o))->F_op = (jref) sp[1].o;
	LINE_NUMBER(938);
	((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[0].o)))->F_value = (jref) (((jobject) createStringLiteral(ctx, u8"x"_j)));
	((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[0].o)))->F_compare = (jref) (((jobject) createStringLiteral(ctx, u8"false"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LStatements$JumpStatement_useWrapping_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$JumpStatement:useWrapping", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(942);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$JumpStatement_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$JumpStatement:build", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(947);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"if"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(949);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	clinit_mindustry_logic_LStatements$JumpStatement(ctx);
	SF_mindustry_logic_LStatements$JumpStatement_last = sp[0].o;
	LINE_NUMBER(950);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Cons_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(952);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(953);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LCanvas$JumpButton(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_logic_LCanvas$JumpButton);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[4].o = (jobject)((mindustry_logic_LStatement *) NULL_CHECK((frame[0].o)))->F_elem;
	init_mindustry_logic_LCanvas$JumpButton_arc_func_Prov_arc_func_Cons_mindustry_logic_LCanvas$StatementElem(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(30.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-8.0f)));
	LINE_NUMBER(955);
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$JumpStatement_localizedName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$JumpStatement_localizedName_R_java_lang_String])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(958);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$JumpStatement_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_logic_LStatements$JumpStatement_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$JumpStatement_invoke_java_lang_Runnable_4);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(968);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$JumpStatement_rebuild_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$JumpStatement:rebuild", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(971);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[1].o));
	LINE_NUMBER(972);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LStatements$JumpStatement(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LStatements$JumpStatement_last;
	((func_arc_scene_ui_layout_Table_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(974);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[0].o)))->F_op;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Cons_9);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[4].o = (jobject)((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[0].o)))->F_value;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Cons_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[5].o = (jobject) proxy;
	}
	sp[6].o = (jobject)((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[0].o)))->F_compare;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Cons_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[7].o = (jobject) proxy;
	}
	SM_mindustry_logic_LStatements$JumpStatement_addOp_mindustry_logic_LStatement_arc_scene_ui_layout_Table_mindustry_logic_ConditionOp_arc_func_Cons_java_lang_String_arc_func_Cons_java_lang_String_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o);
	LINE_NUMBER(978);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$JumpStatement_addOp_mindustry_logic_LStatement_arc_scene_ui_layout_Table_mindustry_logic_ConditionOp_arc_func_Cons_java_lang_String_arc_func_Cons_java_lang_String_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$JumpStatement:addOp", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$JumpStatement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(981);
	jint temp0 = (jint)SM_mindustry_logic_LCanvas_isCompact_R_boolean(ctx);
	if (temp0 != 0) goto label_1;
	}
	(sp++)->f = jfloat(180.0f);
	goto label_2;
label_1:;
	(sp++)->f = jfloat(140.0f);
label_2:;
	{
	sp -= 1;
	frame[8].f = sp[0].f;
	LINE_NUMBER(983);
	sp[0].o = frame[2].o;
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_ConditionOp_always;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_mindustry_logic_LStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[1].o), (frame[4].o), (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[8].f));
	}
label_4:;
	{
	LINE_NUMBER(985);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Cons_12);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logict;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$JumpStatement_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_logic_LStatements$JumpStatement_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$JumpStatement_invoke_java_lang_Runnable_5);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(988);
	sp[1].o = frame[2].o;
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[2].o = (jobject)SF_mindustry_logic_ConditionOp_always;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	(sp++)->f = jfloat(90.0f);
	goto label_7;
label_6:;
	(sp++)->f = jfloat(48.0f);
label_7:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].f, (jfloat(40.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(990);
	sp[0].o = frame[2].o;
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_ConditionOp_always;
	if (sp[0].o == sp[1].o) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_mindustry_logic_LStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[1].o), (frame[6].o), (frame[7].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[8].f));
	}
label_9:;
	LINE_NUMBER(991);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$JumpStatement_setupUI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$JumpStatement:setupUI", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(996);
	sp[0].o = (jobject)((mindustry_logic_LStatement *) NULL_CHECK((frame[0].o)))->F_elem;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if (((jint)((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[0].o)))->F_destIndex) < 0) goto label_1;
	}
	{
	jint temp0 = (jint)((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[0].o)))->F_destIndex;
	sp[0].o = (jobject)((mindustry_logic_LStatement *) NULL_CHECK((frame[0].o)))->F_elem;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_parent;
	sp[0].o = (jobject)((func_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq])(ctx, sp[0].o);
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(997);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_logic_LStatement *) NULL_CHECK((frame[0].o)))->F_elem;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[1].o))->F_parent;
	sp[1].o = (jobject)((func_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_struct_SnapshotSeq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_get_int_R_java_lang_Object])(ctx, sp[1].o, ((jint)((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[0].o)))->F_destIndex));
	((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK(sp[0].o))->F_dest = (jref) (checkCast(ctx, &class_mindustry_logic_LCanvas$StatementElem, sp[1].o));
	}
label_1:;
	LINE_NUMBER(999);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$JumpStatement_saveUI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$JumpStatement:saveUI", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1003);
	sp[0].o = (jobject)((mindustry_logic_LStatement *) NULL_CHECK((frame[0].o)))->F_elem;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1004);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[0].o)))->F_dest;
	sp += 1;
	if (sp[0].o != nullptr) goto label_3;
	}
	INST_ICONST(-1);
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[0].o)))->F_dest;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_parent;
	sp[0].o = (jobject)((func_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[0].o)))->F_dest;
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_indexOf_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_4:;
	sp -= 2;
	((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK(sp[0].o))->F_destIndex = sp[1].i;
label_1:;
	LINE_NUMBER(1006);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$JumpStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$JumpStatement:build", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1010);
	clinit_mindustry_logic_LExecutor$JumpI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LExecutor$JumpI);
	sp[1].o = (jobject)((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[0].o)))->F_op;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[0].o)))->F_value;
	sp[2].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[2].o, sp[3].o);
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[0].o)))->F_compare;
	sp[3].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[3].o, sp[4].o);
	init_mindustry_logic_LExecutor$JumpI_mindustry_logic_ConditionOp_mindustry_logic_LVar_mindustry_logic_LVar_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, ((jint)((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[0].o)))->F_destIndex));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$JumpStatement_category_R_mindustry_logic_LCategory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$JumpStatement:category", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1015);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCategory_control;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$JumpStatement_lambda$addOp$3(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/logic/LStatements$JumpStatement:lambda$addOp$3", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_logic_LStatements$JumpStatement(ctx);
	LINE_NUMBER(988);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$JumpStatement_lambda$addOp$0_mindustry_logic_ConditionOp_mindustry_logic_LStatement_arc_func_Cons_arc_scene_ui_Button(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$JumpStatement:lambda$addOp$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$JumpStatement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(986);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_logic_ConditionOp *) NULL_CHECK((frame[0].o)))->F_symbol;
	sp[1].o = (jobject)SM_mindustry_logic_LStatement_selectTranslate_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(987);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$JumpStatement_invoke_java_lang_Runnable_6(ctx);
		auto proxy = (mindustry_logic_LStatements$JumpStatement_invoke_java_lang_Runnable_6 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$JumpStatement_invoke_java_lang_Runnable_6);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[0].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(988);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$JumpStatement_lambda$addOp$1_mindustry_logic_LStatement_arc_scene_ui_Button_mindustry_logic_ConditionOp_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$JumpStatement:lambda$addOp$1", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$JumpStatement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(987);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[2].o = (jobject)SF_mindustry_logic_ConditionOp_all;
	sp[3].o = frame[2].o;
	sp[4].o = frame[3].o;
	jint temp0 = jint(3);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$JumpStatement_invoke_arc_func_Cons_13);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_logic_LStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, temp0, sp[5].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$JumpStatement_lambda$addOp$2_arc_scene_ui_layout_Cell(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$JumpStatement:lambda$addOp$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$JumpStatement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(987);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (jfloat(95.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$JumpStatement_lambda$rebuild$2_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$JumpStatement:lambda$rebuild$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(977);
	((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[0].o)))->F_compare = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$JumpStatement_lambda$rebuild$1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$JumpStatement:lambda$rebuild$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(977);
	((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$JumpStatement_lambda$rebuild$0_arc_scene_ui_layout_Table_mindustry_logic_ConditionOp(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$JumpStatement:lambda$rebuild$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(975);
	((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[0].o)))->F_op = (jref) (frame[2].o);
	LINE_NUMBER(976);
	((func_mindustry_logic_LStatements$JumpStatement_rebuild_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$JumpStatement_rebuild_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(977);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$JumpStatement_lambda$build$2_arc_scene_ui_layout_Table_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$JumpStatement:lambda$build$2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(960);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(961);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[0].o = (jobject)((func_arc_scene_Group_find_java_lang_String_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_find_java_lang_String_R_arc_scene_Element])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"statement-name"_j))));
	frame[3].o = (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o));
	LINE_NUMBER(962);
	if ((frame[3].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(963);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$JumpStatement_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_logic_LStatements$JumpStatement_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$JumpStatement_invoke_java_lang_Runnable_7);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Label_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(966);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$JumpStatement_lambda$build$3_arc_scene_ui_Label_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$JumpStatement:lambda$build$3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(963);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[0].o)))->F_dest;
	sp += 1;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[0].o)))->F_dest;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 -> \u0001"_j.string, 2, sp[0].o, boxInteger(ctx, ((jint)((mindustry_logic_LCanvas$StatementElem *) NULL_CHECK(sp[1].o))->F_index)));
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(2);
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_Label_setText_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setText_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$JumpStatement_lambda$build$1_mindustry_logic_LCanvas$StatementElem(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$JumpStatement:lambda$build$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(953);
	((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[0].o)))->F_dest = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$JumpStatement_lambda$build$0_R_mindustry_logic_LCanvas$StatementElem(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$JumpStatement:lambda$build$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(953);
	sp[0].o = (jobject)((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[0].o)))->F_dest;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_logic_LStatements$JumpStatement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_logic_LStatement(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$JumpStatement:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$JumpStatement(ctx);
	{
	LINE_NUMBER(931);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[0].o);
	clinit_mindustry_logic_LStatements$JumpStatement(ctx);
	SF_mindustry_logic_LStatements$JumpStatement_last = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LStatements$JumpStatement[] {
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
	(void *) M_mindustry_logic_LStatements$JumpStatement_build_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$JumpStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction,
	(void *) M_mindustry_logic_LStatements$JumpStatement_category_R_mindustry_logic_LCategory,
	(void *) M_mindustry_logic_LStatement_copy_R_mindustry_logic_LStatement,
	(void *) M_mindustry_logic_LStatements$JumpStatement_useWrapping_R_boolean,
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
	(void *) M_mindustry_logic_LStatements$JumpStatement_setupUI,
	(void *) M_mindustry_logic_LStatements$JumpStatement_saveUI,
	(void *) M_mindustry_logic_LStatement_typeName_R_java_lang_String,
	(void *) M_mindustry_logic_LStatement_statementKey_R_java_lang_String,
	(void *) M_mindustry_logic_LStatement_localizedName_R_java_lang_String,
	(void *) M_mindustry_logic_LStatement_name_R_java_lang_String,
	(void *) M_mindustry_logic_LStatements$JumpStatement_rebuild_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$JumpStatement_lambda$rebuild$2_java_lang_String,
	(void *) M_mindustry_logic_LStatements$JumpStatement_lambda$rebuild$1_java_lang_String,
	(void *) M_mindustry_logic_LStatements$JumpStatement_lambda$rebuild$0_arc_scene_ui_layout_Table_mindustry_logic_ConditionOp,
	(void *) M_mindustry_logic_LStatements$JumpStatement_lambda$build$2_arc_scene_ui_layout_Table_java_lang_String,
	(void *) M_mindustry_logic_LStatements$JumpStatement_lambda$build$3_arc_scene_ui_Label_java_lang_String,
	(void *) M_mindustry_logic_LStatements$JumpStatement_lambda$build$1_mindustry_logic_LCanvas$StatementElem,
	(void *) M_mindustry_logic_LStatements$JumpStatement_lambda$build$0_R_mindustry_logic_LCanvas$StatementElem,
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
	{ "lambda$rebuild$2", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$1", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$0", "(Larc/scene/ui/layout/Table;Lmindustry/logic/ConditionOp;)V" },
	{ "lambda$build$2", "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V" },
	{ "lambda$build$3", "(Larc/scene/ui/Label;Ljava/lang/String;)V" },
	{ "lambda$build$1", "(Lmindustry/logic/LCanvas$StatementElem;)V" },
	{ "lambda$build$0", "()Lmindustry/logic/LCanvas$StatementElem;" },
};

static FieldMetadata fields[] {
	{ "last", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_logic_LStatements$JumpStatement_last, "Larc/graphics/Color;", 10 },
	{ "dest", &class_mindustry_logic_LCanvas$StatementElem, offsetof(mindustry_logic_LStatements$JumpStatement, F_dest), "Lmindustry/logic/LCanvas$StatementElem;", 129 },
	{ "destIndex", &class_int, offsetof(mindustry_logic_LStatements$JumpStatement, F_destIndex), "I", 1 },
	{ "op", &class_mindustry_logic_ConditionOp, offsetof(mindustry_logic_LStatements$JumpStatement, F_op), "Lmindustry/logic/ConditionOp;", 1 },
	{ "value", &class_java_lang_String, offsetof(mindustry_logic_LStatements$JumpStatement, F_value), "Ljava/lang/String;", 1 },
	{ "compare", &class_java_lang_String, offsetof(mindustry_logic_LStatements$JumpStatement, F_compare), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LStatements$JumpStatement, 0, "()V", 1 },
	{ "useWrapping", (intptr_t) M_mindustry_logic_LStatements$JumpStatement_useWrapping_R_boolean, VTABLE_mindustry_logic_LStatements$JumpStatement_useWrapping_R_boolean, "()Z", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$JumpStatement_build_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$JumpStatement_build_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "rebuild", (intptr_t) M_mindustry_logic_LStatements$JumpStatement_rebuild_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$JumpStatement_rebuild_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 0 },
	{ "addOp", (intptr_t) SM_mindustry_logic_LStatements$JumpStatement_addOp_mindustry_logic_LStatement_arc_scene_ui_layout_Table_mindustry_logic_ConditionOp_arc_func_Cons_java_lang_String_arc_func_Cons_java_lang_String_arc_func_Cons, 0, "(Lmindustry/logic/LStatement;Larc/scene/ui/layout/Table;Lmindustry/logic/ConditionOp;Larc/func/Cons;Ljava/lang/String;Larc/func/Cons;Ljava/lang/String;Larc/func/Cons;)V", 9 },
	{ "setupUI", (intptr_t) M_mindustry_logic_LStatements$JumpStatement_setupUI, VTABLE_mindustry_logic_LStatements$JumpStatement_setupUI, "()V", 1 },
	{ "saveUI", (intptr_t) M_mindustry_logic_LStatements$JumpStatement_saveUI, VTABLE_mindustry_logic_LStatements$JumpStatement_saveUI, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$JumpStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, VTABLE_mindustry_logic_LStatements$JumpStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, "(Lmindustry/logic/LAssembler;)Lmindustry/logic/LExecutor$LInstruction;", 1 },
	{ "category", (intptr_t) M_mindustry_logic_LStatements$JumpStatement_category_R_mindustry_logic_LCategory, VTABLE_mindustry_logic_LStatements$JumpStatement_category_R_mindustry_logic_LCategory, "()Lmindustry/logic/LCategory;", 1 },
	{ "lambda$addOp$3", (intptr_t) SM_mindustry_logic_LStatements$JumpStatement_lambda$addOp$3, 0, "()V", 4106 },
	{ "lambda$addOp$0", (intptr_t) SM_mindustry_logic_LStatements$JumpStatement_lambda$addOp$0_mindustry_logic_ConditionOp_mindustry_logic_LStatement_arc_func_Cons_arc_scene_ui_Button, 0, "(Lmindustry/logic/ConditionOp;Lmindustry/logic/LStatement;Larc/func/Cons;Larc/scene/ui/Button;)V", 4106 },
	{ "lambda$addOp$1", (intptr_t) SM_mindustry_logic_LStatements$JumpStatement_lambda$addOp$1_mindustry_logic_LStatement_arc_scene_ui_Button_mindustry_logic_ConditionOp_arc_func_Cons, 0, "(Lmindustry/logic/LStatement;Larc/scene/ui/Button;Lmindustry/logic/ConditionOp;Larc/func/Cons;)V", 4106 },
	{ "lambda$addOp$2", (intptr_t) SM_mindustry_logic_LStatements$JumpStatement_lambda$addOp$2_arc_scene_ui_layout_Cell, 0, "(Larc/scene/ui/layout/Cell;)V", 4106 },
	{ "lambda$rebuild$2", (intptr_t) M_mindustry_logic_LStatements$JumpStatement_lambda$rebuild$2_java_lang_String, VTABLE_mindustry_logic_LStatements$JumpStatement_lambda$rebuild$2_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$1", (intptr_t) M_mindustry_logic_LStatements$JumpStatement_lambda$rebuild$1_java_lang_String, VTABLE_mindustry_logic_LStatements$JumpStatement_lambda$rebuild$1_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$0", (intptr_t) M_mindustry_logic_LStatements$JumpStatement_lambda$rebuild$0_arc_scene_ui_layout_Table_mindustry_logic_ConditionOp, VTABLE_mindustry_logic_LStatements$JumpStatement_lambda$rebuild$0_arc_scene_ui_layout_Table_mindustry_logic_ConditionOp, "(Larc/scene/ui/layout/Table;Lmindustry/logic/ConditionOp;)V", 4098 },
	{ "lambda$build$2", (intptr_t) M_mindustry_logic_LStatements$JumpStatement_lambda$build$2_arc_scene_ui_layout_Table_java_lang_String, VTABLE_mindustry_logic_LStatements$JumpStatement_lambda$build$2_arc_scene_ui_layout_Table_java_lang_String, "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V", 4098 },
	{ "lambda$build$3", (intptr_t) M_mindustry_logic_LStatements$JumpStatement_lambda$build$3_arc_scene_ui_Label_java_lang_String, VTABLE_mindustry_logic_LStatements$JumpStatement_lambda$build$3_arc_scene_ui_Label_java_lang_String, "(Larc/scene/ui/Label;Ljava/lang/String;)V", 4098 },
	{ "lambda$build$1", (intptr_t) M_mindustry_logic_LStatements$JumpStatement_lambda$build$1_mindustry_logic_LCanvas$StatementElem, VTABLE_mindustry_logic_LStatements$JumpStatement_lambda$build$1_mindustry_logic_LCanvas$StatementElem, "(Lmindustry/logic/LCanvas$StatementElem;)V", 4098 },
	{ "lambda$build$0", (intptr_t) M_mindustry_logic_LStatements$JumpStatement_lambda$build$0_R_mindustry_logic_LCanvas$StatementElem, VTABLE_mindustry_logic_LStatements$JumpStatement_lambda$build$0_R_mindustry_logic_LCanvas$StatementElem, "()Lmindustry/logic/LCanvas$StatementElem;", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_LStatements$JumpStatement, 0, "()V", 8 },
};

Class class_mindustry_logic_LStatements$JumpStatement{
		.nativeName = (intptr_t) "mindustry/logic/LStatements$JumpStatement",
		.parentClass = (intptr_t) &class_mindustry_logic_LStatement,
		.size = sizeof(mindustry_logic_LStatements$JumpStatement),
		.classVtable = (intptr_t) vtable_mindustry_logic_LStatements$JumpStatement,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LStatements$JumpStatement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LStatements$JumpStatement,
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
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 44,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LStatements$JumpStatement = registerClass(&class_mindustry_logic_LStatements$JumpStatement);

}

