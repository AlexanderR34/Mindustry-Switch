#include "mindustry/logic/LStatements_DrawStatement.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_70.h"
#include "arc/func/Prov.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_73.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_74.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_71.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_72.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_77.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_78.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_75.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_76.h"
#include "arc/graphics/Color.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_79.h"
#include "java/lang/Runnable.h"
#include "mindustry/logic/LStatements.h"
#include "arc/scene/ui/Button.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/world/blocks/logic/LogicDisplay_GraphicsType.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_62.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_63.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_60.h"
#include "mindustry/logic/LAssembler.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_61.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_66.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_67.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_64.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_65.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_68.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_69.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LStatements_1.h"
#include "mindustry/logic/LCategory.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_java_lang_Runnable_2.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_java_lang_Runnable_3.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_51.h"
#include "mindustry/logic/LStatement.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_52.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_50.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_55.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_56.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_53.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_54.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_59.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_57.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_58.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_80.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_81.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_84.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_85.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_82.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_83.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_44.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_45.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_86.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_87.h"
#include "mindustry/ui/Styles.h"
#include "java/lang/Enum.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_48.h"
#include "mindustry/logic/LCanvas.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_49.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_46.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Cons_47.h"
#include "java/lang/CharSequence.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Prov_2.h"
#include "mindustry/logic/LStatements_DrawStatement_invoke_arc_func_Prov_3.h"
#include "arc/scene/Element.h"
#include "mindustry/logic/LStatements_DrawStatement.h"
#include "mindustry/logic/LExecutor_DrawI.h"

extern "C" {


void mark_mindustry_logic_LStatements$DrawStatement(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LStatements$DrawStatement *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_x)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_x)->clazz)->markFunction)((jobject) self->F_x, mark, depth + 1);
	if (self->F_y)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_y)->clazz)->markFunction)((jobject) self->F_y, mark, depth + 1);
	if (self->F_p1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p1)->clazz)->markFunction)((jobject) self->F_p1, mark, depth + 1);
	if (self->F_p2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p2)->clazz)->markFunction)((jobject) self->F_p2, mark, depth + 1);
	if (self->F_p3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p3)->clazz)->markFunction)((jobject) self->F_p3, mark, depth + 1);
	if (self->F_p4)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p4)->clazz)->markFunction)((jobject) self->F_p4, mark, depth + 1);
}

void clinit_mindustry_logic_LStatements$DrawStatement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_logic_LStatement(ctx);
}

void init_mindustry_logic_LStatements$DrawStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$DrawStatement(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(123);
	init_mindustry_logic_LStatement(ctx, (frame[0].o));
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_clear;
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(126);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_y = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p2 = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p3 = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p4 = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:build", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(130);
	((func_mindustry_logic_LStatements$DrawStatement_rebuild_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_rebuild_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_rebuild_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:rebuild", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(134);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[1].o));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(138);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_44(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_44 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_44);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logict;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_java_lang_Runnable_2);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(120.0f);
	jfloat temp1 = jfloat(40.0f);
	LINE_NUMBER(158);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(160);
	jint temp2 = (jint)SM_mindustry_logic_LCanvas_isCompact_R_boolean(ctx);
	if (temp2 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(200.0f)));
	}
label_5:;
	{
	LINE_NUMBER(162);
	clinit_mindustry_logic_LStatements$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LStatements$1_$SwitchMap$mindustry$world$blocks$logic$LogicDisplay$GraphicsType;
	sp[1].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_6;
		case 2: goto label_7;
		case 3: goto label_8;
		case 4: goto label_9;
		case 5: goto label_10;
		case 6: goto label_11;
		case 7: goto label_11;
		case 8: goto label_12;
		case 9: goto label_12;
		case 10: goto label_13;
		case 11: goto label_14;
		case 12: goto label_15;
		case 13: goto label_16;
		case 14: goto label_16;
		case 15: goto label_17;
		default: goto label_18;
	}
	}
label_6:;
	{
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"r"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_45(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_45 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_45);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(165);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"g"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_y;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_46(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_46 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_46);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(166);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"b"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_47(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_47 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_47);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(167);
	goto label_18;
	}
label_7:;
	{
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"r"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_48(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_48 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_48);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"g"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_y;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_49(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_49 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_49);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"b"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_50(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_50 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_50);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"a"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p2;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_51(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_51 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_51);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(173);
	goto label_18;
	}
label_8:;
	{
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"color"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_52(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_52 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_52);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(144.0f)));
	LINE_NUMBER(176);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_53(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_53 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_53);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_col_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_col_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(180);
	goto label_18;
	}
label_9:;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(183);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_54(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_54 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_54);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(184);
	goto label_18;
	}
label_10:;
	{
	LINE_NUMBER(186);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"x"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_55(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_55 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_55);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"y"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_y;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_56(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_56 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_56);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(188);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"x2"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_57(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_57 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_57);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(189);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"y2"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p2;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_58(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_58 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_58);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(190);
	goto label_18;
	}
label_11:;
	{
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"x"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_59(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_59 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_59);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"y"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_y;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_60(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_60 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_60);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(194);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"width"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_61(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_61 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_61);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(195);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"height"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p2;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_62(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_62 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_62);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(196);
	goto label_18;
	}
label_12:;
	{
	LINE_NUMBER(198);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"x"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_63(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_63 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_63);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"y"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_y;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_64(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_64 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_64);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(200);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"sides"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_65(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_65 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_65);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(201);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"radius"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p2;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_66(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_66 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_66);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(202);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"rotation"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p3;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_67(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_67 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_67);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(203);
	goto label_18;
	}
label_13:;
	{
	LINE_NUMBER(205);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"x"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_68(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_68 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_68);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"y"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_y;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_69(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_69 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_69);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(207);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"x2"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_70(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_70 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_70);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(208);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"y2"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p2;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_71(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_71 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_71);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(209);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"x3"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p3;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_72(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_72 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_72);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(210);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"y3"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p4;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_73(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_73 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_73);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(211);
	goto label_18;
	}
label_14:;
	{
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"x"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_74(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_74 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_74);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(214);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"y"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_y;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_75(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_75 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_75);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"image"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_76(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_76 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_76);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"size"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p2;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_77(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_77 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_77);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(217);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"rotation"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p3;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_78(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_78 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_78);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(218);
	goto label_18;
	}
label_15:;
	{
	LINE_NUMBER(220);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"x"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_79(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_79 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_79);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(221);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"y"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_y;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_80(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_80 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_80);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(223);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"align"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_81(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_81 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_81);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(170.0f)));
	LINE_NUMBER(224);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Prov_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_82(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_82 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_82);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_logic_LStatements$DrawStatement_fieldAlignSelect_arc_scene_ui_layout_Table_arc_func_Prov_arc_func_Cons_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fieldAlignSelect_arc_scene_ui_layout_Table_arc_func_Prov_arc_func_Cons_boolean_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (jint(1)), (jint(1)));
	LINE_NUMBER(228);
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"x"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_83(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_83 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_83);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(231);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"y"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_y;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_84(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_84 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_84);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(232);
	goto label_18;
	}
label_17:;
	{
	LINE_NUMBER(234);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"angle"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_85(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_85 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_85);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	}
label_18:;
	LINE_NUMBER(237);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_afterRead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:afterRead", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_color;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p2;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"0"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(243);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p2 = (jref) (((jobject) createStringLiteral(ctx, u8"255"_j)));
	}
label_1:;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_print;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	clinit_mindustry_logic_LStatements$DrawStatement(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LStatement_nameToAlign;
	sp[1].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(247);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@\u0001"_j.string, 1, sp[1].o);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK(sp[0].o))->F_p1 = (jref) sp[1].o;
	}
label_3:;
	LINE_NUMBER(249);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$DrawStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:build", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(253);
	clinit_mindustry_logic_LExecutor$DrawI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LExecutor$DrawI);
	sp[1].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_ordinal_R_int])(ctx, sp[1].o);
	jint temp1 = jbyte(temp0);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[1].o, sp[2].o);
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_y;
	sp[2].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[2].o, sp[3].o);
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1;
	sp[3].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[3].o, sp[4].o);
	sp[4].o = frame[1].o;
	sp[5].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p2;
	sp[4].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[4].o, sp[5].o);
	sp[5].o = frame[1].o;
	sp[6].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p3;
	sp[5].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[5].o, sp[6].o);
	sp[6].o = frame[1].o;
	sp[7].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p4;
	sp[6].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[6].o, sp[7].o);
	init_mindustry_logic_LExecutor$DrawI_byte_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(ctx, sp[0].o, temp1, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$DrawStatement_category_R_mindustry_logic_LCategory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:category", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(258);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCategory_io;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$47_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$47", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(234);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$46_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$46", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(231);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$45_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$45", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(230);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$44_arc_scene_ui_layout_Table_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$44", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(225);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (frame[2].o);
	LINE_NUMBER(226);
	((func_mindustry_logic_LStatements$DrawStatement_rebuild_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_rebuild_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$43_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$43", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$42_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$42", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(223);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$41_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$41", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(221);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$40_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$40", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(220);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$39_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$39", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(217);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p3 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$38_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$38", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(216);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p2 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$37_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$37", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(215);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$36_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$36", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(214);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$35_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$35", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(213);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$34_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$34", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(210);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p4 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$33_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$33", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(209);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p3 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$32_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$32", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(208);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p2 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$31_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$31", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(207);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$30_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$30", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(206);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$29_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$29", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(205);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$28_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$28", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(202);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p3 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$27_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$27", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(201);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p2 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$26_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$26", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(200);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$25_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$25", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(199);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$24_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$24", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(198);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$23_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$23", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(195);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p2 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$22_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$22", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(194);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$21_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$21", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(193);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$20_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$20", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(192);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$19_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$19", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(189);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p2 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$18_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$18", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(188);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$17_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$17", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(187);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$16_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$16", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(186);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$15_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$15", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(183);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$14_arc_scene_ui_layout_Table_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$14", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_graphics_Color_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Color_toString_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = jint(0);
	sp[2].i = temp0;
	sp += 3;
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[2].o)))->F_a), (jfloat(1)), -1)) < 0) goto label_1;
	}
	INST_BIPUSH(6);
	goto label_2;
label_1:;
	INST_BIPUSH(8);
label_2:;
	{
	sp -= 4;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, sp[2].i, sp[3].i);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"%\u0001"_j.string, 1, sp[1].o);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK(sp[0].o))->F_x = (jref) sp[1].o;
	LINE_NUMBER(178);
	((func_mindustry_logic_LStatements$DrawStatement_build_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_build_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$13_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$13", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(175);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$12_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$12", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(172);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p2 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$11_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$11", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(171);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$10_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$10", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(170);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$9_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(169);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$8_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(166);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$7_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(165);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$6_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(164);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$5(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$5", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_logic_LStatements$DrawStatement(ctx);
	LINE_NUMBER(158);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$0_arc_scene_ui_layout_Table_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(139);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Prov_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(140);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_java_lang_Runnable_3);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$2_arc_scene_ui_Button_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[2].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_all;
	sp[3].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_type;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_86(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_86 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_86);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	jint temp0 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_87(ctx);
		auto proxy = (mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_87 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement_invoke_arc_func_Cons_87);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_logic_LStatements$DrawStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, temp0, sp[5].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$4_arc_scene_ui_layout_Cell(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$DrawStatement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (jfloat(120.0f)), (jfloat(50.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$3_arc_scene_ui_layout_Table_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(141);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(142);
	sp[0].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_color;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(143);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p2 = (jref) (((jobject) createStringLiteral(ctx, u8"255"_j)));
	}
label_2:;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_image;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(147);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (((jobject) createStringLiteral(ctx, u8"@copper"_j)));
	LINE_NUMBER(148);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p2 = (jref) (((jobject) createStringLiteral(ctx, u8"32"_j)));
	LINE_NUMBER(149);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p3 = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	}
label_4:;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_print;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(153);
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (((jobject) createStringLiteral(ctx, u8"@bottomLeft"_j)));
	}
label_8:;
	{
	LINE_NUMBER(156);
	((func_mindustry_logic_LStatements$DrawStatement_rebuild_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_rebuild_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$1_R_java_lang_CharSequence(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$DrawStatement:lambda$rebuild$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_Enum_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LStatements$DrawStatement[] {
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
	(void *) M_mindustry_logic_LStatements$DrawStatement_build_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$DrawStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction,
	(void *) M_mindustry_logic_LStatements$DrawStatement_category_R_mindustry_logic_LCategory,
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
	(void *) M_mindustry_logic_LStatements$DrawStatement_afterRead,
	(void *) M_mindustry_logic_LStatement_write_java_lang_StringBuilder,
	(void *) M_mindustry_logic_LStatement_setupUI,
	(void *) M_mindustry_logic_LStatement_saveUI,
	(void *) M_mindustry_logic_LStatement_typeName_R_java_lang_String,
	(void *) M_mindustry_logic_LStatement_statementKey_R_java_lang_String,
	(void *) M_mindustry_logic_LStatement_localizedName_R_java_lang_String,
	(void *) M_mindustry_logic_LStatement_name_R_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_rebuild_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$47_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$46_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$45_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$44_arc_scene_ui_layout_Table_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$43_R_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$42_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$41_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$40_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$39_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$38_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$37_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$36_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$35_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$34_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$33_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$32_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$31_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$30_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$29_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$28_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$27_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$26_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$25_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$24_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$23_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$22_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$21_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$20_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$19_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$18_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$17_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$16_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$15_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$14_arc_scene_ui_layout_Table_arc_graphics_Color,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$13_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$12_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$11_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$10_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$9_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$8_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$7_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$6_java_lang_String,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$0_arc_scene_ui_layout_Table_arc_scene_ui_Button,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$2_arc_scene_ui_Button_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$3_arc_scene_ui_layout_Table_mindustry_world_blocks_logic_LogicDisplay$GraphicsType,
	(void *) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$1_R_java_lang_CharSequence,
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
	{ "lambda$rebuild$47", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$46", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$45", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$44", "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V" },
	{ "lambda$rebuild$43", "()Ljava/lang/String;" },
	{ "lambda$rebuild$42", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$41", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$40", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$39", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$38", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$37", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$36", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$35", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$34", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$33", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$32", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$31", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$30", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$29", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$28", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$27", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$26", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$25", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$24", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$23", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$22", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$21", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$20", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$19", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$18", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$17", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$16", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$15", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$14", "(Larc/scene/ui/layout/Table;Larc/graphics/Color;)V" },
	{ "lambda$rebuild$13", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$12", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$11", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$10", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$9", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$8", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$7", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$6", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$0", "(Larc/scene/ui/layout/Table;Larc/scene/ui/Button;)V" },
	{ "lambda$rebuild$2", "(Larc/scene/ui/Button;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuild$3", "(Larc/scene/ui/layout/Table;Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;)V" },
	{ "lambda$rebuild$1", "()Ljava/lang/CharSequence;" },
};

static FieldMetadata fields[] {
	{ "type", &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, offsetof(mindustry_logic_LStatements$DrawStatement, F_type), "Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;", 1 },
	{ "x", &class_java_lang_String, offsetof(mindustry_logic_LStatements$DrawStatement, F_x), "Ljava/lang/String;", 1 },
	{ "y", &class_java_lang_String, offsetof(mindustry_logic_LStatements$DrawStatement, F_y), "Ljava/lang/String;", 1 },
	{ "p1", &class_java_lang_String, offsetof(mindustry_logic_LStatements$DrawStatement, F_p1), "Ljava/lang/String;", 1 },
	{ "p2", &class_java_lang_String, offsetof(mindustry_logic_LStatements$DrawStatement, F_p2), "Ljava/lang/String;", 1 },
	{ "p3", &class_java_lang_String, offsetof(mindustry_logic_LStatements$DrawStatement, F_p3), "Ljava/lang/String;", 1 },
	{ "p4", &class_java_lang_String, offsetof(mindustry_logic_LStatements$DrawStatement, F_p4), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LStatements$DrawStatement, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_build_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$DrawStatement_build_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "rebuild", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_rebuild_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$DrawStatement_rebuild_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 0 },
	{ "afterRead", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_afterRead, VTABLE_mindustry_logic_LStatements$DrawStatement_afterRead, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, VTABLE_mindustry_logic_LStatements$DrawStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, "(Lmindustry/logic/LAssembler;)Lmindustry/logic/LExecutor$LInstruction;", 1 },
	{ "category", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_category_R_mindustry_logic_LCategory, VTABLE_mindustry_logic_LStatements$DrawStatement_category_R_mindustry_logic_LCategory, "()Lmindustry/logic/LCategory;", 1 },
	{ "lambda$rebuild$47", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$47_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$47_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$46", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$46_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$46_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$45", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$45_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$45_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$44", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$44_arc_scene_ui_layout_Table_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$44_arc_scene_ui_layout_Table_java_lang_String, "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$43", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$43_R_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$43_R_java_lang_String, "()Ljava/lang/String;", 4098 },
	{ "lambda$rebuild$42", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$42_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$42_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$41", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$41_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$41_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$40", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$40_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$40_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$39", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$39_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$39_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$38", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$38_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$38_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$37", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$37_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$37_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$36", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$36_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$36_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$35", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$35_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$35_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$34", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$34_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$34_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$33", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$33_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$33_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$32", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$32_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$32_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$31", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$31_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$31_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$30", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$30_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$30_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$29", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$29_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$29_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$28", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$28_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$28_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$27", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$27_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$27_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$26", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$26_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$26_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$25", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$25_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$25_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$24", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$24_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$24_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$23", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$23_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$23_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$22", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$22_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$22_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$21", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$21_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$21_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$20", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$20_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$20_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$19", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$19_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$19_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$18", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$18_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$18_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$17", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$17_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$17_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$16", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$16_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$16_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$15", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$15_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$15_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$14", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$14_arc_scene_ui_layout_Table_arc_graphics_Color, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$14_arc_scene_ui_layout_Table_arc_graphics_Color, "(Larc/scene/ui/layout/Table;Larc/graphics/Color;)V", 4098 },
	{ "lambda$rebuild$13", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$13_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$13_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$12", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$12_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$12_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$11", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$11_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$11_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$10", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$10_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$10_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$9", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$9_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$9_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$8", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$8_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$8_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$7", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$7_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$7_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$6", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$6_java_lang_String, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$6_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$5", (intptr_t) SM_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$5, 0, "()V", 4106 },
	{ "lambda$rebuild$0", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$0_arc_scene_ui_layout_Table_arc_scene_ui_Button, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$0_arc_scene_ui_layout_Table_arc_scene_ui_Button, "(Larc/scene/ui/layout/Table;Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$rebuild$2", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$2_arc_scene_ui_Button_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$2_arc_scene_ui_Button_arc_scene_ui_layout_Table, "(Larc/scene/ui/Button;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$rebuild$4", (intptr_t) SM_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$4_arc_scene_ui_layout_Cell, 0, "(Larc/scene/ui/layout/Cell;)V", 4106 },
	{ "lambda$rebuild$3", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$3_arc_scene_ui_layout_Table_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$3_arc_scene_ui_layout_Table_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, "(Larc/scene/ui/layout/Table;Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;)V", 4098 },
	{ "lambda$rebuild$1", (intptr_t) M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$1_R_java_lang_CharSequence, VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$1_R_java_lang_CharSequence, "()Ljava/lang/CharSequence;", 4098 },
};

Class class_mindustry_logic_LStatements$DrawStatement{
		.nativeName = (intptr_t) "mindustry/logic/LStatements$DrawStatement",
		.parentClass = (intptr_t) &class_mindustry_logic_LStatement,
		.size = sizeof(mindustry_logic_LStatements$DrawStatement),
		.classVtable = (intptr_t) vtable_mindustry_logic_LStatements$DrawStatement,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LStatements$DrawStatement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LStatements$DrawStatement,
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
		.methodCount = 54,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 83,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LStatements$DrawStatement = registerClass(&class_mindustry_logic_LStatements$DrawStatement);

}

