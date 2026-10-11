#include "mindustry/logic/LStatements_ExplosionStatement.h"
#include "mindustry/logic/LStatements_ExplosionStatement_invoke_arc_func_Cons_9.h"
#include "mindustry/logic/LStatements_ExplosionStatement_invoke_arc_func_Cons_16.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LStatement.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/logic/LStatements_ExplosionStatement_invoke_arc_func_Cons_17.h"
#include "mindustry/logic/LAssembler.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "arc/func/Cons.h"
#include "mindustry/logic/LStatements.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/logic/LExecutor_ExplosionI.h"
#include "mindustry/logic/LCategory.h"
#include "mindustry/logic/LStatements_ExplosionStatement_invoke_arc_func_Cons_12.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/logic/LStatements_ExplosionStatement_invoke_arc_func_Cons_13.h"
#include "mindustry/logic/LStatements_ExplosionStatement_invoke_arc_func_Cons_14.h"
#include "mindustry/logic/LStatements_ExplosionStatement_invoke_arc_func_Cons_15.h"
#include "mindustry/logic/LStatements_ExplosionStatement.h"
#include "mindustry/logic/LStatements_ExplosionStatement_invoke_arc_func_Cons_10.h"
#include "mindustry/logic/LStatements_ExplosionStatement_invoke_arc_func_Cons_11.h"

extern "C" {


void mark_mindustry_logic_LStatements$ExplosionStatement(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LStatements$ExplosionStatement *) object;
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_x)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_x)->clazz)->markFunction)((jobject) self->F_x, mark, depth + 1);
	if (self->F_y)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_y)->clazz)->markFunction)((jobject) self->F_y, mark, depth + 1);
	if (self->F_radius)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_radius)->clazz)->markFunction)((jobject) self->F_radius, mark, depth + 1);
	if (self->F_damage)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_damage)->clazz)->markFunction)((jobject) self->F_damage, mark, depth + 1);
	if (self->F_air)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_air)->clazz)->markFunction)((jobject) self->F_air, mark, depth + 1);
	if (self->F_ground)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ground)->clazz)->markFunction)((jobject) self->F_ground, mark, depth + 1);
	if (self->F_pierce)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pierce)->clazz)->markFunction)((jobject) self->F_pierce, mark, depth + 1);
	if (self->F_effect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effect)->clazz)->markFunction)((jobject) self->F_effect, mark, depth + 1);
}

void clinit_mindustry_logic_LStatements$ExplosionStatement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_logic_LStatement(ctx);
}

void init_mindustry_logic_LStatements$ExplosionStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$ExplosionStatement:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$ExplosionStatement(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1858);
	init_mindustry_logic_LStatement(ctx, (frame[0].o));
	LINE_NUMBER(1859);
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_team = (jref) (((jobject) createStringLiteral(ctx, u8"@crux"_j)));
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_x = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_y = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_radius = (jref) (((jobject) createStringLiteral(ctx, u8"5"_j)));
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_damage = (jref) (((jobject) createStringLiteral(ctx, u8"50"_j)));
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_air = (jref) (((jobject) createStringLiteral(ctx, u8"true"_j)));
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_ground = (jref) (((jobject) createStringLiteral(ctx, u8"true"_j)));
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_pierce = (jref) (((jobject) createStringLiteral(ctx, u8"false"_j)));
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_effect = (jref) (((jobject) createStringLiteral(ctx, u8"true"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$ExplosionStatement_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$ExplosionStatement:build", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1863);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"team"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_team;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$ExplosionStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$ExplosionStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1864);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"x"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_x;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$ExplosionStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$ExplosionStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1865);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"y"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_y;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$ExplosionStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$ExplosionStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1866);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"radius"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_radius;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$ExplosionStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$ExplosionStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1867);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"damage"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_damage;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$ExplosionStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$ExplosionStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1868);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"air"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_air;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_14);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$ExplosionStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$ExplosionStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1869);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"ground"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_ground;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$ExplosionStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$ExplosionStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1870);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"pierce"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_pierce;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_16);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$ExplosionStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$ExplosionStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1871);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"effect"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_effect;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$ExplosionStatement_invoke_arc_func_Cons_17);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$ExplosionStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$ExplosionStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1872);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LStatements$ExplosionStatement_privileged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$ExplosionStatement:privileged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1876);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$ExplosionStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$ExplosionStatement:build", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1881);
	clinit_mindustry_logic_LExecutor$ExplosionI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LExecutor$ExplosionI);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[1].o, sp[2].o);
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_x;
	sp[2].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[2].o, sp[3].o);
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_y;
	sp[3].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[3].o, sp[4].o);
	sp[4].o = frame[1].o;
	sp[5].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_radius;
	sp[4].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[4].o, sp[5].o);
	sp[5].o = frame[1].o;
	sp[6].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_damage;
	sp[5].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[5].o, sp[6].o);
	sp[6].o = frame[1].o;
	sp[7].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_air;
	sp[6].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[6].o, sp[7].o);
	sp[7].o = frame[1].o;
	sp[8].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_ground;
	sp[7].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[7].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[7].o, sp[8].o);
	sp[8].o = frame[1].o;
	sp[9].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_pierce;
	sp[8].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[8].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[8].o, sp[9].o);
	sp[9].o = frame[1].o;
	sp[10].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_effect;
	sp[9].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[9].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[9].o, sp[10].o);
	init_mindustry_logic_LExecutor$ExplosionI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o, sp[8].o, sp[9].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$ExplosionStatement_category_R_mindustry_logic_LCategory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$ExplosionStatement:category", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1886);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCategory_world;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$8_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$ExplosionStatement:lambda$build$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1871);
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_effect = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$7_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$ExplosionStatement:lambda$build$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1870);
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_pierce = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$6_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$ExplosionStatement:lambda$build$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1869);
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_ground = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$5_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$ExplosionStatement:lambda$build$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1868);
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_air = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$4_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$ExplosionStatement:lambda$build$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1867);
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_damage = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$3_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$ExplosionStatement:lambda$build$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1866);
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_radius = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$2_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$ExplosionStatement:lambda$build$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1865);
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$ExplosionStatement:lambda$build$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1864);
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$0_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$ExplosionStatement:lambda$build$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1863);
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LStatements$ExplosionStatement[] {
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
	(void *) M_mindustry_logic_LStatements$ExplosionStatement_build_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$ExplosionStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction,
	(void *) M_mindustry_logic_LStatements$ExplosionStatement_category_R_mindustry_logic_LCategory,
	(void *) M_mindustry_logic_LStatement_copy_R_mindustry_logic_LStatement,
	(void *) M_mindustry_logic_LStatement_useWrapping_R_boolean,
	(void *) M_mindustry_logic_LStatement_hidden_R_boolean,
	(void *) M_mindustry_logic_LStatements$ExplosionStatement_privileged_R_boolean,
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
	(void *) M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$8_java_lang_String,
	(void *) M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$7_java_lang_String,
	(void *) M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$6_java_lang_String,
	(void *) M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$5_java_lang_String,
	(void *) M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$4_java_lang_String,
	(void *) M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$3_java_lang_String,
	(void *) M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$2_java_lang_String,
	(void *) M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$1_java_lang_String,
	(void *) M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$0_java_lang_String,
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
	{ "lambda$build$8", "(Ljava/lang/String;)V" },
	{ "lambda$build$7", "(Ljava/lang/String;)V" },
	{ "lambda$build$6", "(Ljava/lang/String;)V" },
	{ "lambda$build$5", "(Ljava/lang/String;)V" },
	{ "lambda$build$4", "(Ljava/lang/String;)V" },
	{ "lambda$build$3", "(Ljava/lang/String;)V" },
	{ "lambda$build$2", "(Ljava/lang/String;)V" },
	{ "lambda$build$1", "(Ljava/lang/String;)V" },
	{ "lambda$build$0", "(Ljava/lang/String;)V" },
};

static FieldMetadata fields[] {
	{ "team", &class_java_lang_String, offsetof(mindustry_logic_LStatements$ExplosionStatement, F_team), "Ljava/lang/String;", 1 },
	{ "x", &class_java_lang_String, offsetof(mindustry_logic_LStatements$ExplosionStatement, F_x), "Ljava/lang/String;", 1 },
	{ "y", &class_java_lang_String, offsetof(mindustry_logic_LStatements$ExplosionStatement, F_y), "Ljava/lang/String;", 1 },
	{ "radius", &class_java_lang_String, offsetof(mindustry_logic_LStatements$ExplosionStatement, F_radius), "Ljava/lang/String;", 1 },
	{ "damage", &class_java_lang_String, offsetof(mindustry_logic_LStatements$ExplosionStatement, F_damage), "Ljava/lang/String;", 1 },
	{ "air", &class_java_lang_String, offsetof(mindustry_logic_LStatements$ExplosionStatement, F_air), "Ljava/lang/String;", 1 },
	{ "ground", &class_java_lang_String, offsetof(mindustry_logic_LStatements$ExplosionStatement, F_ground), "Ljava/lang/String;", 1 },
	{ "pierce", &class_java_lang_String, offsetof(mindustry_logic_LStatements$ExplosionStatement, F_pierce), "Ljava/lang/String;", 1 },
	{ "effect", &class_java_lang_String, offsetof(mindustry_logic_LStatements$ExplosionStatement, F_effect), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LStatements$ExplosionStatement, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$ExplosionStatement_build_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$ExplosionStatement_build_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "privileged", (intptr_t) M_mindustry_logic_LStatements$ExplosionStatement_privileged_R_boolean, VTABLE_mindustry_logic_LStatements$ExplosionStatement_privileged_R_boolean, "()Z", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$ExplosionStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, VTABLE_mindustry_logic_LStatements$ExplosionStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, "(Lmindustry/logic/LAssembler;)Lmindustry/logic/LExecutor$LInstruction;", 1 },
	{ "category", (intptr_t) M_mindustry_logic_LStatements$ExplosionStatement_category_R_mindustry_logic_LCategory, VTABLE_mindustry_logic_LStatements$ExplosionStatement_category_R_mindustry_logic_LCategory, "()Lmindustry/logic/LCategory;", 1 },
	{ "lambda$build$8", (intptr_t) M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$8_java_lang_String, VTABLE_mindustry_logic_LStatements$ExplosionStatement_lambda$build$8_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$7", (intptr_t) M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$7_java_lang_String, VTABLE_mindustry_logic_LStatements$ExplosionStatement_lambda$build$7_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$6", (intptr_t) M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$6_java_lang_String, VTABLE_mindustry_logic_LStatements$ExplosionStatement_lambda$build$6_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$5", (intptr_t) M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$5_java_lang_String, VTABLE_mindustry_logic_LStatements$ExplosionStatement_lambda$build$5_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$4", (intptr_t) M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$4_java_lang_String, VTABLE_mindustry_logic_LStatements$ExplosionStatement_lambda$build$4_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$3", (intptr_t) M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$3_java_lang_String, VTABLE_mindustry_logic_LStatements$ExplosionStatement_lambda$build$3_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$2", (intptr_t) M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$2_java_lang_String, VTABLE_mindustry_logic_LStatements$ExplosionStatement_lambda$build$2_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$1", (intptr_t) M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$1_java_lang_String, VTABLE_mindustry_logic_LStatements$ExplosionStatement_lambda$build$1_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$0", (intptr_t) M_mindustry_logic_LStatements$ExplosionStatement_lambda$build$0_java_lang_String, VTABLE_mindustry_logic_LStatements$ExplosionStatement_lambda$build$0_java_lang_String, "(Ljava/lang/String;)V", 4098 },
};

Class class_mindustry_logic_LStatements$ExplosionStatement{
		.nativeName = (intptr_t) "mindustry/logic/LStatements$ExplosionStatement",
		.parentClass = (intptr_t) &class_mindustry_logic_LStatement,
		.size = sizeof(mindustry_logic_LStatements$ExplosionStatement),
		.classVtable = (intptr_t) vtable_mindustry_logic_LStatements$ExplosionStatement,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LStatements$ExplosionStatement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LStatements$ExplosionStatement,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LStatements,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 45,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LStatements$ExplosionStatement = registerClass(&class_mindustry_logic_LStatements$ExplosionStatement);

}

