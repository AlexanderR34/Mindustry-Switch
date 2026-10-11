#include "mindustry/logic/LStatements_FetchStatement.h"
#include "arc/func/Prov.h"
#include "mindustry/logic/LStatement.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "mindustry/logic/LStatements.h"
#include "arc/scene/ui/Button.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/logic/LStatements_FetchStatement_invoke_arc_func_Cons_9.h"
#include "mindustry/logic/LStatements_FetchStatement.h"
#include "mindustry/logic/LStatements_FetchStatement_invoke_arc_func_Cons_8.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "mindustry/logic/LStatements_FetchStatement_invoke_arc_func_Prov_1.h"
#include "mindustry/logic/LStatements_FetchStatement_invoke_arc_func_Cons_15.h"
#include "mindustry/logic/LStatements_FetchStatement_invoke_arc_func_Cons_13.h"
#include "mindustry/logic/LStatements_FetchStatement_invoke_arc_func_Cons_14.h"
#include "mindustry/logic/LVar.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/logic/LAssembler.h"
#include "mindustry/logic/LExecutor_FetchI.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/logic/LStatements_FetchStatement_invoke_arc_func_Cons_11.h"
#include "java/lang/Enum.h"
#include "mindustry/logic/LStatements_FetchStatement_invoke_arc_func_Cons_12.h"
#include "java/lang/CharSequence.h"
#include "mindustry/logic/LStatements_FetchStatement_invoke_arc_func_Cons_10.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LStatements_FetchStatement_invoke_java_lang_Runnable_3.h"
#include "mindustry/logic/LStatements_FetchStatement_invoke_java_lang_Runnable_2.h"
#include "mindustry/logic/LCategory.h"
#include "mindustry/logic/FetchType.h"

extern "C" {


void mark_mindustry_logic_LStatements$FetchStatement(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LStatements$FetchStatement *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_result)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_result)->clazz)->markFunction)((jobject) self->F_result, mark, depth + 1);
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_index)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_index)->clazz)->markFunction)((jobject) self->F_index, mark, depth + 1);
	if (self->F_extra)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_extra)->clazz)->markFunction)((jobject) self->F_extra, mark, depth + 1);
}

void clinit_mindustry_logic_LStatements$FetchStatement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_logic_LStatement(ctx);
}

void init_mindustry_logic_LStatements$FetchStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$FetchStatement:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$FetchStatement(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1911);
	init_mindustry_logic_LStatement(ctx, (frame[0].o));
	LINE_NUMBER(1912);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_unit;
	((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(1913);
	((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_result = (jref) (((jobject) createStringLiteral(ctx, u8"result"_j)));
	((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_team = (jref) (((jobject) createStringLiteral(ctx, u8"@sharded"_j)));
	((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_index = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_extra = (jref) (((jobject) createStringLiteral(ctx, u8"@conveyor"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$FetchStatement_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$FetchStatement:build", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1917);
	((func_mindustry_logic_LStatements$FetchStatement_rebuild_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$FetchStatement_rebuild_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1918);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$FetchStatement_rebuild_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$FetchStatement:rebuild", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1921);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[1].o));
	LINE_NUMBER(1923);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_result;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$FetchStatement_fields_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$FetchStatement_fields_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(1925);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" = "_j))));
	LINE_NUMBER(1927);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_9);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logict;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$FetchStatement_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_logic_LStatements$FetchStatement_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$FetchStatement_invoke_java_lang_Runnable_2);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(160.0f);
	jfloat temp1 = jfloat(40.0f);
	LINE_NUMBER(1933);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1935);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"team"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_team;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$FetchStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$FetchStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1937);
	sp[0].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_coreCount;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_playerCount;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_unitCount;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_buildCount;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(1938);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"#"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_index;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$FetchStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$FetchStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	}
label_7:;
	{
	LINE_NUMBER(1941);
	sp[0].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_buildCount;
	if (sp[0].o == sp[1].o) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_build;
	if (sp[0].o != sp[1].o) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(1942);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"block"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_extra;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$FetchStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$FetchStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	}
label_10:;
	{
	LINE_NUMBER(1945);
	sp[0].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_unitCount;
	if (sp[0].o == sp[1].o) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_unit;
	if (sp[0].o != sp[1].o) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(1946);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"unit"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_extra;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$FetchStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$FetchStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	}
label_12:;
	LINE_NUMBER(1948);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LStatements$FetchStatement_privileged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$FetchStatement:privileged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1952);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$FetchStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$FetchStatement:build", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1957);
	clinit_mindustry_logic_LExecutor$FetchI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LExecutor$FetchI);
	sp[1].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_type;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_result;
	sp[2].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[2].o, sp[3].o);
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_team;
	sp[3].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[3].o, sp[4].o);
	sp[4].o = frame[1].o;
	sp[5].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_extra;
	sp[4].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[4].o, sp[5].o);
	sp[5].o = frame[1].o;
	sp[6].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_index;
	sp[5].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[5].o, sp[6].o);
	init_mindustry_logic_LExecutor$FetchI_mindustry_logic_FetchType_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$FetchStatement_category_R_mindustry_logic_LCategory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$FetchStatement:category", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1962);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCategory_world;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$10_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$FetchStatement:lambda$rebuild$10", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1946);
	((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_extra = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$9_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$FetchStatement:lambda$rebuild$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1942);
	((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_extra = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$8_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$FetchStatement:lambda$rebuild$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1938);
	((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_index = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$7_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$FetchStatement:lambda$rebuild$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1935);
	((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$6(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/logic/LStatements$FetchStatement:lambda$rebuild$6", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_logic_LStatements$FetchStatement(ctx);
	LINE_NUMBER(1933);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$1_arc_scene_ui_layout_Table_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$FetchStatement:lambda$rebuild$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1928);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(1929);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$FetchStatement_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_logic_LStatements$FetchStatement_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$FetchStatement_invoke_java_lang_Runnable_3);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1933);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$3_arc_scene_ui_Button_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$FetchStatement:lambda$rebuild$3", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1929);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_logic_FetchType(ctx);
	sp[2].o = (jobject)SF_mindustry_logic_FetchType_all;
	sp[3].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_type;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_14);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	jint temp0 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$FetchStatement_invoke_arc_func_Cons_15);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_logic_LStatements$FetchStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$FetchStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, temp0, sp[5].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$5_arc_scene_ui_layout_Cell(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$FetchStatement:lambda$rebuild$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$FetchStatement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1932);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (jfloat(150.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$4_arc_scene_ui_layout_Table_mindustry_logic_FetchType(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$FetchStatement:lambda$rebuild$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1930);
	((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(1931);
	((func_mindustry_logic_LStatements$FetchStatement_rebuild_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$FetchStatement_rebuild_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1932);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$2_R_java_lang_CharSequence(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$FetchStatement:lambda$rebuild$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1928);
	sp[0].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_Enum_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$0_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$FetchStatement:lambda$rebuild$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1923);
	((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[0].o)))->F_result = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LStatements$FetchStatement[] {
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
	(void *) M_mindustry_logic_LStatements$FetchStatement_build_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$FetchStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction,
	(void *) M_mindustry_logic_LStatements$FetchStatement_category_R_mindustry_logic_LCategory,
	(void *) M_mindustry_logic_LStatement_copy_R_mindustry_logic_LStatement,
	(void *) M_mindustry_logic_LStatement_useWrapping_R_boolean,
	(void *) M_mindustry_logic_LStatement_hidden_R_boolean,
	(void *) M_mindustry_logic_LStatements$FetchStatement_privileged_R_boolean,
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
	(void *) M_mindustry_logic_LStatements$FetchStatement_rebuild_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$10_java_lang_String,
	(void *) M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$9_java_lang_String,
	(void *) M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$8_java_lang_String,
	(void *) M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$7_java_lang_String,
	(void *) M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$1_arc_scene_ui_layout_Table_arc_scene_ui_Button,
	(void *) M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$3_arc_scene_ui_Button_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$4_arc_scene_ui_layout_Table_mindustry_logic_FetchType,
	(void *) M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$2_R_java_lang_CharSequence,
	(void *) M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$0_java_lang_String,
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
	{ "lambda$rebuild$10", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$9", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$8", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$7", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$1", "(Larc/scene/ui/layout/Table;Larc/scene/ui/Button;)V" },
	{ "lambda$rebuild$3", "(Larc/scene/ui/Button;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuild$4", "(Larc/scene/ui/layout/Table;Lmindustry/logic/FetchType;)V" },
	{ "lambda$rebuild$2", "()Ljava/lang/CharSequence;" },
	{ "lambda$rebuild$0", "(Ljava/lang/String;)V" },
};

static FieldMetadata fields[] {
	{ "type", &class_mindustry_logic_FetchType, offsetof(mindustry_logic_LStatements$FetchStatement, F_type), "Lmindustry/logic/FetchType;", 1 },
	{ "result", &class_java_lang_String, offsetof(mindustry_logic_LStatements$FetchStatement, F_result), "Ljava/lang/String;", 1 },
	{ "team", &class_java_lang_String, offsetof(mindustry_logic_LStatements$FetchStatement, F_team), "Ljava/lang/String;", 1 },
	{ "index", &class_java_lang_String, offsetof(mindustry_logic_LStatements$FetchStatement, F_index), "Ljava/lang/String;", 1 },
	{ "extra", &class_java_lang_String, offsetof(mindustry_logic_LStatements$FetchStatement, F_extra), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LStatements$FetchStatement, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$FetchStatement_build_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$FetchStatement_build_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "rebuild", (intptr_t) M_mindustry_logic_LStatements$FetchStatement_rebuild_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$FetchStatement_rebuild_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 0 },
	{ "privileged", (intptr_t) M_mindustry_logic_LStatements$FetchStatement_privileged_R_boolean, VTABLE_mindustry_logic_LStatements$FetchStatement_privileged_R_boolean, "()Z", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$FetchStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, VTABLE_mindustry_logic_LStatements$FetchStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, "(Lmindustry/logic/LAssembler;)Lmindustry/logic/LExecutor$LInstruction;", 1 },
	{ "category", (intptr_t) M_mindustry_logic_LStatements$FetchStatement_category_R_mindustry_logic_LCategory, VTABLE_mindustry_logic_LStatements$FetchStatement_category_R_mindustry_logic_LCategory, "()Lmindustry/logic/LCategory;", 1 },
	{ "lambda$rebuild$10", (intptr_t) M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$10_java_lang_String, VTABLE_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$10_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$9", (intptr_t) M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$9_java_lang_String, VTABLE_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$9_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$8", (intptr_t) M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$8_java_lang_String, VTABLE_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$8_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$7", (intptr_t) M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$7_java_lang_String, VTABLE_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$7_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$6", (intptr_t) SM_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$6, 0, "()V", 4106 },
	{ "lambda$rebuild$1", (intptr_t) M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$1_arc_scene_ui_layout_Table_arc_scene_ui_Button, VTABLE_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$1_arc_scene_ui_layout_Table_arc_scene_ui_Button, "(Larc/scene/ui/layout/Table;Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$rebuild$3", (intptr_t) M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$3_arc_scene_ui_Button_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$3_arc_scene_ui_Button_arc_scene_ui_layout_Table, "(Larc/scene/ui/Button;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$rebuild$5", (intptr_t) SM_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$5_arc_scene_ui_layout_Cell, 0, "(Larc/scene/ui/layout/Cell;)V", 4106 },
	{ "lambda$rebuild$4", (intptr_t) M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$4_arc_scene_ui_layout_Table_mindustry_logic_FetchType, VTABLE_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$4_arc_scene_ui_layout_Table_mindustry_logic_FetchType, "(Larc/scene/ui/layout/Table;Lmindustry/logic/FetchType;)V", 4098 },
	{ "lambda$rebuild$2", (intptr_t) M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$2_R_java_lang_CharSequence, VTABLE_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$2_R_java_lang_CharSequence, "()Ljava/lang/CharSequence;", 4098 },
	{ "lambda$rebuild$0", (intptr_t) M_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$0_java_lang_String, VTABLE_mindustry_logic_LStatements$FetchStatement_lambda$rebuild$0_java_lang_String, "(Ljava/lang/String;)V", 4098 },
};

Class class_mindustry_logic_LStatements$FetchStatement{
		.nativeName = (intptr_t) "mindustry/logic/LStatements$FetchStatement",
		.parentClass = (intptr_t) &class_mindustry_logic_LStatement,
		.size = sizeof(mindustry_logic_LStatements$FetchStatement),
		.classVtable = (intptr_t) vtable_mindustry_logic_LStatements$FetchStatement,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LStatements$FetchStatement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LStatements$FetchStatement,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LStatements,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 46,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LStatements$FetchStatement = registerClass(&class_mindustry_logic_LStatements$FetchStatement);

}

