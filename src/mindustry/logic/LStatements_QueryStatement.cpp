#include "mindustry/logic/LStatements_QueryStatement.h"
#include "arc/func/Prov.h"
#include "mindustry/logic/LStatement.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/logic/LStatements_QueryStatement.h"
#include "arc/graphics/Color.h"
#include "mindustry/logic/LStatements_QueryStatement_invoke_arc_func_Cons_9.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "mindustry/logic/LStatements.h"
#include "arc/scene/ui/Button.h"
#include "java/lang/String.h"
#include "mindustry/logic/QueryType.h"
#include "mindustry/logic/LStatements_QueryStatement_invoke_java_lang_Runnable_3.h"
#include "mindustry/logic/LStatements_QueryStatement_invoke_arc_func_Prov_1.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/logic/LStatements_QueryStatement_invoke_java_lang_Runnable_5.h"
#include "mindustry/logic/LStatements_QueryStatement_invoke_java_lang_Runnable_4.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "mindustry/logic/LVar.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/logic/LAssembler.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/ui/Styles.h"
#include "java/lang/Enum.h"
#include "mindustry/logic/QueryShape.h"
#include "java/lang/CharSequence.h"
#include "mindustry/logic/LStatements_QueryStatement_invoke_arc_func_Cons_17.h"
#include "arc/scene/Element.h"
#include "mindustry/logic/LStatements_QueryStatement_invoke_arc_func_Cons_16.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LStatements_QueryStatement_invoke_arc_func_Cons_15.h"
#include "mindustry/logic/LStatements_QueryStatement_invoke_arc_func_Cons_14.h"
#include "mindustry/logic/LStatements_QueryStatement_invoke_arc_func_Cons_13.h"
#include "mindustry/logic/LExecutor_QueryI.h"
#include "mindustry/logic/LStatements_QueryStatement_invoke_arc_func_Cons_12.h"
#include "mindustry/logic/LCategory.h"
#include "mindustry/logic/LStatements_QueryStatement_invoke_arc_func_Cons_11.h"
#include "mindustry/logic/LStatements_QueryStatement_invoke_arc_func_Cons_10.h"

extern "C" {


void mark_mindustry_logic_LStatements$QueryStatement(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LStatements$QueryStatement *) object;
	if (self->F_shape)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shape)->clazz)->markFunction)((jobject) self->F_shape, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_x)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_x)->clazz)->markFunction)((jobject) self->F_x, mark, depth + 1);
	if (self->F_y)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_y)->clazz)->markFunction)((jobject) self->F_y, mark, depth + 1);
	if (self->F_w)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_w)->clazz)->markFunction)((jobject) self->F_w, mark, depth + 1);
	if (self->F_h)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_h)->clazz)->markFunction)((jobject) self->F_h, mark, depth + 1);
}

void clinit_mindustry_logic_LStatements$QueryStatement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_logic_LStatement(ctx);
}

void init_mindustry_logic_LStatements$QueryStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$QueryStatement:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$QueryStatement(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1218);
	init_mindustry_logic_LStatement(ctx, (frame[0].o));
	LINE_NUMBER(1219);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_QueryShape(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_QueryShape_circle;
	((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK(sp[0].o))->F_shape = (jref) sp[1].o;
	LINE_NUMBER(1220);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_QueryType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_QueryType_unit;
	((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(1221);
	((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_team = (jref) (((jobject) createStringLiteral(ctx, u8"null"_j)));
	((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_x = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_y = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_w = (jref) (((jobject) createStringLiteral(ctx, u8"10"_j)));
	((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_h = (jref) (((jobject) createStringLiteral(ctx, u8"10"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$QueryStatement_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$QueryStatement:build", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1225);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[1].o));
	LINE_NUMBER(1227);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_shape;
	clinit_mindustry_logic_QueryShape(ctx);
	sp[2].o = (jobject)SF_mindustry_logic_QueryShape_circle;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"circle"_j))));
	sp += 1;
	goto label_3;
	}
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"rect"_j));
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	sp++;
label_3:;
	{
	sp -= 2;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logict;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$QueryStatement_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_logic_LStatements$QueryStatement_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$QueryStatement_invoke_java_lang_Runnable_3);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(80.0f);
	jfloat temp1 = jfloat(40.0f);
	LINE_NUMBER(1230);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1232);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_9);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logict;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$QueryStatement_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_logic_LStatements$QueryStatement_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$QueryStatement_invoke_java_lang_Runnable_4);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp2 = jfloat(100.0f);
	jfloat temp3 = jfloat(40.0f);
	LINE_NUMBER(1238);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2, temp3);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1240);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"team"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_team;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$QueryStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$QueryStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1242);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"x"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_x;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$QueryStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$QueryStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1243);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"y"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_y;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$QueryStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$QueryStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1245);
	sp[0].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_shape;
	clinit_mindustry_logic_QueryShape(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_QueryShape_circle;
	if (sp[0].o != sp[1].o) goto label_11;
	}
	{
	LINE_NUMBER(1246);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"radius"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_w;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$QueryStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$QueryStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(1248);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"width"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_w;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_14);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$QueryStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$QueryStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1249);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"height"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_h;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$QueryStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$QueryStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	}
label_13:;
	LINE_NUMBER(1251);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LStatements$QueryStatement_privileged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$QueryStatement:privileged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1255);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$QueryStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$QueryStatement:build", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1260);
	clinit_mindustry_logic_LExecutor$QueryI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LExecutor$QueryI);
	sp[1].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_shape;
	sp[2].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_type;
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_team;
	sp[3].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[3].o, sp[4].o);
	sp[4].o = frame[1].o;
	sp[5].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_x;
	sp[4].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[4].o, sp[5].o);
	sp[5].o = frame[1].o;
	sp[6].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_y;
	sp[5].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[5].o, sp[6].o);
	sp[6].o = frame[1].o;
	sp[7].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_w;
	sp[6].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[6].o, sp[7].o);
	sp[7].o = frame[1].o;
	sp[8].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_h;
	sp[7].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[7].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[7].o, sp[8].o);
	init_mindustry_logic_LExecutor$QueryI_mindustry_logic_QueryShape_mindustry_logic_QueryType_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$QueryStatement_category_R_mindustry_logic_LCategory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$QueryStatement:category", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1265);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCategory_world;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$QueryStatement_lambda$build$12_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$QueryStatement:lambda$build$12", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1249);
	((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_h = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$QueryStatement_lambda$build$11_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$QueryStatement:lambda$build$11", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1248);
	((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_w = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$QueryStatement_lambda$build$10_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$QueryStatement:lambda$build$10", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1246);
	((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_w = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$QueryStatement_lambda$build$9_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$QueryStatement:lambda$build$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1243);
	((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$QueryStatement_lambda$build$8_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$QueryStatement:lambda$build$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1242);
	((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$QueryStatement_lambda$build$7_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$QueryStatement:lambda$build$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1240);
	((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$QueryStatement_lambda$build$6(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/logic/LStatements$QueryStatement:lambda$build$6", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_logic_LStatements$QueryStatement(ctx);
	LINE_NUMBER(1238);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$QueryStatement_lambda$build$1_arc_scene_ui_layout_Table_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$QueryStatement:lambda$build$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1233);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1234);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$QueryStatement_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_logic_LStatements$QueryStatement_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$QueryStatement_invoke_java_lang_Runnable_5);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1238);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$QueryStatement_lambda$build$3_arc_scene_ui_Button_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$QueryStatement:lambda$build$3", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1234);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_logic_QueryType(ctx);
	sp[2].o = (jobject)SF_mindustry_logic_QueryType_queryable;
	sp[3].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_type;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_16);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	jint temp0 = jint(4);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$QueryStatement_invoke_arc_func_Cons_17);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_logic_LStatements$QueryStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$QueryStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, temp0, sp[5].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$QueryStatement_lambda$build$5_arc_scene_ui_layout_Cell(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$QueryStatement:lambda$build$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$QueryStatement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1237);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (jfloat(100.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$QueryStatement_lambda$build$4_arc_scene_ui_layout_Table_mindustry_logic_QueryType(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$QueryStatement:lambda$build$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1235);
	((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(1236);
	((func_mindustry_logic_LStatements$QueryStatement_build_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$QueryStatement_build_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1237);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$QueryStatement_lambda$build$2_R_java_lang_CharSequence(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$QueryStatement:lambda$build$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1233);
	sp[0].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_Enum_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$QueryStatement_lambda$build$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$QueryStatement:lambda$build$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1228);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[0].o)))->F_shape;
	clinit_mindustry_logic_QueryShape(ctx);
	sp[2].o = (jobject)SF_mindustry_logic_QueryShape_circle;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	clinit_mindustry_logic_QueryShape(ctx);
	(sp++)->o = SF_mindustry_logic_QueryShape_rect;
	goto label_2;
label_1:;
	clinit_mindustry_logic_QueryShape(ctx);
	(sp++)->o = SF_mindustry_logic_QueryShape_circle;
label_2:;
	{
	sp -= 2;
	((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK(sp[0].o))->F_shape = (jref) sp[1].o;
	LINE_NUMBER(1229);
	((func_mindustry_logic_LStatements$QueryStatement_build_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$QueryStatement_build_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1230);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LStatements$QueryStatement[] {
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
	(void *) M_mindustry_logic_LStatements$QueryStatement_build_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$QueryStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction,
	(void *) M_mindustry_logic_LStatements$QueryStatement_category_R_mindustry_logic_LCategory,
	(void *) M_mindustry_logic_LStatement_copy_R_mindustry_logic_LStatement,
	(void *) M_mindustry_logic_LStatement_useWrapping_R_boolean,
	(void *) M_mindustry_logic_LStatement_hidden_R_boolean,
	(void *) M_mindustry_logic_LStatements$QueryStatement_privileged_R_boolean,
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
	(void *) M_mindustry_logic_LStatements$QueryStatement_lambda$build$12_java_lang_String,
	(void *) M_mindustry_logic_LStatements$QueryStatement_lambda$build$11_java_lang_String,
	(void *) M_mindustry_logic_LStatements$QueryStatement_lambda$build$10_java_lang_String,
	(void *) M_mindustry_logic_LStatements$QueryStatement_lambda$build$9_java_lang_String,
	(void *) M_mindustry_logic_LStatements$QueryStatement_lambda$build$8_java_lang_String,
	(void *) M_mindustry_logic_LStatements$QueryStatement_lambda$build$7_java_lang_String,
	(void *) M_mindustry_logic_LStatements$QueryStatement_lambda$build$1_arc_scene_ui_layout_Table_arc_scene_ui_Button,
	(void *) M_mindustry_logic_LStatements$QueryStatement_lambda$build$3_arc_scene_ui_Button_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$QueryStatement_lambda$build$4_arc_scene_ui_layout_Table_mindustry_logic_QueryType,
	(void *) M_mindustry_logic_LStatements$QueryStatement_lambda$build$2_R_java_lang_CharSequence,
	(void *) M_mindustry_logic_LStatements$QueryStatement_lambda$build$0_arc_scene_ui_layout_Table,
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
	{ "lambda$build$12", "(Ljava/lang/String;)V" },
	{ "lambda$build$11", "(Ljava/lang/String;)V" },
	{ "lambda$build$10", "(Ljava/lang/String;)V" },
	{ "lambda$build$9", "(Ljava/lang/String;)V" },
	{ "lambda$build$8", "(Ljava/lang/String;)V" },
	{ "lambda$build$7", "(Ljava/lang/String;)V" },
	{ "lambda$build$1", "(Larc/scene/ui/layout/Table;Larc/scene/ui/Button;)V" },
	{ "lambda$build$3", "(Larc/scene/ui/Button;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$4", "(Larc/scene/ui/layout/Table;Lmindustry/logic/QueryType;)V" },
	{ "lambda$build$2", "()Ljava/lang/CharSequence;" },
	{ "lambda$build$0", "(Larc/scene/ui/layout/Table;)V" },
};

static FieldMetadata fields[] {
	{ "shape", &class_mindustry_logic_QueryShape, offsetof(mindustry_logic_LStatements$QueryStatement, F_shape), "Lmindustry/logic/QueryShape;", 1 },
	{ "type", &class_mindustry_logic_QueryType, offsetof(mindustry_logic_LStatements$QueryStatement, F_type), "Lmindustry/logic/QueryType;", 1 },
	{ "team", &class_java_lang_String, offsetof(mindustry_logic_LStatements$QueryStatement, F_team), "Ljava/lang/String;", 1 },
	{ "x", &class_java_lang_String, offsetof(mindustry_logic_LStatements$QueryStatement, F_x), "Ljava/lang/String;", 1 },
	{ "y", &class_java_lang_String, offsetof(mindustry_logic_LStatements$QueryStatement, F_y), "Ljava/lang/String;", 1 },
	{ "w", &class_java_lang_String, offsetof(mindustry_logic_LStatements$QueryStatement, F_w), "Ljava/lang/String;", 1 },
	{ "h", &class_java_lang_String, offsetof(mindustry_logic_LStatements$QueryStatement, F_h), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LStatements$QueryStatement, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$QueryStatement_build_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$QueryStatement_build_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "privileged", (intptr_t) M_mindustry_logic_LStatements$QueryStatement_privileged_R_boolean, VTABLE_mindustry_logic_LStatements$QueryStatement_privileged_R_boolean, "()Z", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$QueryStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, VTABLE_mindustry_logic_LStatements$QueryStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, "(Lmindustry/logic/LAssembler;)Lmindustry/logic/LExecutor$LInstruction;", 1 },
	{ "category", (intptr_t) M_mindustry_logic_LStatements$QueryStatement_category_R_mindustry_logic_LCategory, VTABLE_mindustry_logic_LStatements$QueryStatement_category_R_mindustry_logic_LCategory, "()Lmindustry/logic/LCategory;", 1 },
	{ "lambda$build$12", (intptr_t) M_mindustry_logic_LStatements$QueryStatement_lambda$build$12_java_lang_String, VTABLE_mindustry_logic_LStatements$QueryStatement_lambda$build$12_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$11", (intptr_t) M_mindustry_logic_LStatements$QueryStatement_lambda$build$11_java_lang_String, VTABLE_mindustry_logic_LStatements$QueryStatement_lambda$build$11_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$10", (intptr_t) M_mindustry_logic_LStatements$QueryStatement_lambda$build$10_java_lang_String, VTABLE_mindustry_logic_LStatements$QueryStatement_lambda$build$10_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$9", (intptr_t) M_mindustry_logic_LStatements$QueryStatement_lambda$build$9_java_lang_String, VTABLE_mindustry_logic_LStatements$QueryStatement_lambda$build$9_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$8", (intptr_t) M_mindustry_logic_LStatements$QueryStatement_lambda$build$8_java_lang_String, VTABLE_mindustry_logic_LStatements$QueryStatement_lambda$build$8_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$7", (intptr_t) M_mindustry_logic_LStatements$QueryStatement_lambda$build$7_java_lang_String, VTABLE_mindustry_logic_LStatements$QueryStatement_lambda$build$7_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$6", (intptr_t) SM_mindustry_logic_LStatements$QueryStatement_lambda$build$6, 0, "()V", 4106 },
	{ "lambda$build$1", (intptr_t) M_mindustry_logic_LStatements$QueryStatement_lambda$build$1_arc_scene_ui_layout_Table_arc_scene_ui_Button, VTABLE_mindustry_logic_LStatements$QueryStatement_lambda$build$1_arc_scene_ui_layout_Table_arc_scene_ui_Button, "(Larc/scene/ui/layout/Table;Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$build$3", (intptr_t) M_mindustry_logic_LStatements$QueryStatement_lambda$build$3_arc_scene_ui_Button_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$QueryStatement_lambda$build$3_arc_scene_ui_Button_arc_scene_ui_layout_Table, "(Larc/scene/ui/Button;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$5", (intptr_t) SM_mindustry_logic_LStatements$QueryStatement_lambda$build$5_arc_scene_ui_layout_Cell, 0, "(Larc/scene/ui/layout/Cell;)V", 4106 },
	{ "lambda$build$4", (intptr_t) M_mindustry_logic_LStatements$QueryStatement_lambda$build$4_arc_scene_ui_layout_Table_mindustry_logic_QueryType, VTABLE_mindustry_logic_LStatements$QueryStatement_lambda$build$4_arc_scene_ui_layout_Table_mindustry_logic_QueryType, "(Larc/scene/ui/layout/Table;Lmindustry/logic/QueryType;)V", 4098 },
	{ "lambda$build$2", (intptr_t) M_mindustry_logic_LStatements$QueryStatement_lambda$build$2_R_java_lang_CharSequence, VTABLE_mindustry_logic_LStatements$QueryStatement_lambda$build$2_R_java_lang_CharSequence, "()Ljava/lang/CharSequence;", 4098 },
	{ "lambda$build$0", (intptr_t) M_mindustry_logic_LStatements$QueryStatement_lambda$build$0_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$QueryStatement_lambda$build$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
};

Class class_mindustry_logic_LStatements$QueryStatement{
		.nativeName = (intptr_t) "mindustry/logic/LStatements$QueryStatement",
		.parentClass = (intptr_t) &class_mindustry_logic_LStatement,
		.size = sizeof(mindustry_logic_LStatements$QueryStatement),
		.classVtable = (intptr_t) vtable_mindustry_logic_LStatements$QueryStatement,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LStatements$QueryStatement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LStatements$QueryStatement,
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
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 47,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LStatements$QueryStatement = registerClass(&class_mindustry_logic_LStatements$QueryStatement);

}

